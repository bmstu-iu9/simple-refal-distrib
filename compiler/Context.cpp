// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_AddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_PopScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_PushScope(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Cntx_ResetAfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Context(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ShiftVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult ShiftVariable_AddToFree(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult Unique(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #AlreadyBounded
template <typename SREFAL_PARAM_INT>
struct ident_AlreadyBounded {
  static const char *name() {
    return "AlreadyBounded";
  }
};

// identifier #ExistVariable
template <typename SREFAL_PARAM_INT>
struct ident_ExistVariable {
  static const char *name() {
    return "ExistVariable";
  }
};

// identifier #FreeVarsFunc
template <typename SREFAL_PARAM_INT>
struct ident_FreeVarsFunc {
  static const char *name() {
    return "FreeVarsFunc";
  }
};

// identifier #FreeVarsSent
template <typename SREFAL_PARAM_INT>
struct ident_FreeVarsSent {
  static const char *name() {
    return "FreeVarsSent";
  }
};

// identifier #InvalidMode
template <typename SREFAL_PARAM_INT>
struct ident_InvalidMode {
  static const char *name() {
    return "InvalidMode";
  }
};

// identifier #NotFound
template <typename SREFAL_PARAM_INT>
struct ident_NotFound {
  static const char *name() {
    return "NotFound";
  }
};

// identifier #Success
template <typename SREFAL_PARAM_INT>
struct ident_Success {
  static const char *name() {
    return "Success";
  }
};

static refalrts::FnResult Context(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

refalrts::FnResult Cntx_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Context, "Context" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    //
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 2},
    {refalrts::icFunc, 0, 0, 3},
    {refalrts::icInt, 0, 0, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 5},
    {refalrts::icLinkBrackets, 2, 5, 0},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  //
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[3], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[4], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 4 elems
  refalrts::Iter context[4];
  refalrts::zeros( context, 4 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Context, "Context" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // [Context 0 ]
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icNumLeft, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // [Context 0 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::number_left( 0UL, context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_AddVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Context, "Context" },
    { ShiftVariable, "ShiftVariable" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Success<int>::name,
    & ident_InvalidMode<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +53, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [Context s.StackDepth#1/4 e.Variables_B#1/6 ( s.Mode#1/10 e.Index#1/11 s.VarDepth#1/13 ) e.Variables_E#1/14 ] s.Mode#1/5 e.Index#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 0},
    // closed e.Index#1 as range 0
    {refalrts::icEPrepare, 0, 6, 2},
    {refalrts::icEStart, 0, 6, 2},
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icBracketLeft, 0, 8, 14},
    {refalrts::icsRepeatLeft, 10, 5, 8},
    {refalrts::iceRepeatLeft, 11, 0, 8},
    // closed e.Variables_E#1 as range 2
    {refalrts::icsVarLeft, 0, 13, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //0: e.Index#1
    //4: s.StackDepth#1
    //5: s.Mode#1
    //6: e.Variables_B#1
    //10: s.Mode#1
    //11: e.Index#1
    //13: s.VarDepth#1
    //14: e.Variables_E#1
    //24: s.VarDepth#1
    //28: s.VarDepth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icCopySTVar, 24, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 26},
    {refalrts::icIdent, 0, 0, 27},
    {refalrts::icCopySTVar, 28, 24, 0},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 16, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +38, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [Context s.StackDepth#1/4 e.Variables_B#1/6 ( s.OldMode#1/10 e.Index#1/11 s.VarDepth#1/13 ) e.Variables_E#1/14 ] s.NewMode#1/5 e.Index#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 0},
    // closed e.Index#1 as range 0
    {refalrts::icEPrepare, 0, 6, 2},
    {refalrts::icEStart, 0, 6, 2},
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icBracketLeft, 0, 8, 14},
    // closed e.Variables_E#1 as range 2
    {refalrts::icsVarLeft, 0, 10, 8},
    {refalrts::iceRepeatLeft, 11, 0, 8},
    {refalrts::icsVarLeft, 0, 13, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //0: e.Index#1
    //4: s.StackDepth#1
    //5: s.NewMode#1
    //6: e.Variables_B#1
    //10: s.OldMode#1
    //11: e.Index#1
    //13: s.VarDepth#1
    //14: e.Variables_E#1
    //22: s.VarDepth#1
    //23: s.OldMode#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 20},
    {refalrts::icIdent, 0, 1, 21},
    {refalrts::icCopySTVar, 22, 13, 0},
    {refalrts::icCopySTVar, 23, 10, 0},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceSTVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 16, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [Context s.StackDepth#1/4 e.Variables#1/2 ] s.Mode#1/5 e.Index#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Variables#1 as range 2
    {refalrts::icsVarLeft, 0, 5, 0},
    // closed e.Index#1 as range 0
    //0: e.Index#1
    //2: e.Variables#1
    //4: s.StackDepth#1
    //5: s.Mode#1
    //9: s.StackDepth#1
    //13: s.StackDepth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icCopySTVar, 9, 4, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 11},
    {refalrts::icIdent, 0, 0, 12},
    {refalrts::icCopySTVar, 13, 9, 0},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 6, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 8, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceSTVar, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // [Context s.StackDepth#1/4 e.Variables_B#1/6 ( s.Mode#1/10 e.Index#1/11 s.VarDepth#1/13 ) e.Variables_E#1/14 ] s.Mode#1/5 e.Index#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    // closed e.Index#1 as range 0
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[2];
      context[15] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[10], context[5], context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[11], context[12], context[0], context[1], context[8], context[9] ) )
        continue;
      // closed e.Variables_E#1 as range 2
      if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //0: e.Index#1
      //4: s.StackDepth#1
      //5: s.Mode#1
      //6: e.Variables_B#1
      //10: s.Mode#1
      //11: e.Index#1
      //13: s.VarDepth#1
      //14: e.Variables_E#1
      //24: s.VarDepth#1
      //28: s.VarDepth#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], ShiftVariable, "ShiftVariable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[24], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_Success<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[28], context[24]))
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::link_brackets( context[16], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::link_brackets( context[23], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_stvar( res, context[24] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_stvar( res, context[10] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::push_stack( context[22] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[20], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_stvar( res, context[5] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_stvar( res, context[4] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // [Context s.StackDepth#1/4 e.Variables_B#1/6 ( s.OldMode#1/10 e.Index#1/11 s.VarDepth#1/13 ) e.Variables_E#1/14 ] s.NewMode#1/5 e.Index#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    // closed e.Index#1 as range 0
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[2];
      context[15] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[14], context[15] ) )
        continue;
      // closed e.Variables_E#1 as range 2
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[11], context[12], context[0], context[1], context[8], context[9] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //0: e.Index#1
      //4: s.StackDepth#1
      //5: s.NewMode#1
      //6: e.Variables_B#1
      //10: s.OldMode#1
      //11: e.Index#1
      //13: s.VarDepth#1
      //14: e.Variables_E#1
      //22: s.VarDepth#1
      //23: s.OldMode#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_InvalidMode<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[22], context[13]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[23], context[10]))
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[23] );
      res = refalrts::splice_stvar( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::link_brackets( context[16], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_stvar( res, context[10] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_stvar( res, context[4] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // [Context s.StackDepth#1/4 e.Variables#1/2 ] s.Mode#1/5 e.Index#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Variables#1 as range 2
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 0
  //0: e.Index#1
  //2: e.Variables#1
  //4: s.StackDepth#1
  //5: s.Mode#1
  //9: s.StackDepth#1
  //13: s.StackDepth#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[9], context[4]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], & ident_Success<int>::name ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[13], context[9]))
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[6], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[8], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_stvar( res, context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ShiftVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { ShiftVariable, "ShiftVariable" },
    { ShiftVariable_AddToFree, "ShiftVariable_AddToFree" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +77, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Mode#1/4 e.Index#1/2 s.VarDepth#1/5 ) e.Variables_B#1/6 ( # FreeVarsSent e.Free#1/8 ) ( # FreeVarsFunc e.FreeFunc#1/10 ) e.Variables_E#1/12
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarRight, 0, 5, 2},
    // closed e.Index#1 as range 2
    {refalrts::icEPrepare, 0, 6, 0},
    {refalrts::icEStart, 0, 6, 0},
    {refalrts::icSave, 0, 12, 0},
    {refalrts::icBracketLeft, 0, 8, 12},
    {refalrts::icIdentLeft, 0, 1, 8},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::icIdentLeft, 0, 0, 10},
    // closed e.Free#1 as range 8
    // closed e.FreeFunc#1 as range 10
    // closed e.Variables_E#1 as range 0
    //2: e.Index#1
    //4: s.Mode#1
    //5: s.VarDepth#1
    //6: e.Variables_B#1
    //8: e.Free#1
    //10: e.FreeFunc#1
    //12: e.Variables_E#1
    //21: s.Mode#1
    //22: e.Index#1
    //24: s.VarDepth#1
    //34: s.Mode#1
    //35: e.Index#1
    //37: s.VarDepth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icIdent, 0, 1, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icCopySTVar, 21, 4, 0},
    {refalrts::icCopyEVar, 22, 2, 0},
    {refalrts::icCopySTVar, 24, 5, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icIdent, 0, 0, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icFunc, 0, 0, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icCopySTVar, 34, 21, 0},
    {refalrts::icCopyEVar, 35, 22, 0},
    {refalrts::icCopySTVar, 37, 24, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 39},
    {refalrts::icPushStack, 0, 0, 39},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icLinkBrackets, 33, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceSTVar, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icLinkBrackets, 28, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 16, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icLinkBrackets, 20, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceSTVar, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Mode#1/4 e.Index#1/2 s.VarDepth#1/5 ) e.Variables#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Variables#1 as range 0
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarRight, 0, 5, 2},
    // closed e.Index#1 as range 2
    //0: e.Variables#1
    //2: e.Index#1
    //4: s.Mode#1
    //5: s.VarDepth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( s.Mode#1/4 e.Index#1/2 s.VarDepth#1/5 ) e.Variables_B#1/6 ( # FreeVarsSent e.Free#1/8 ) ( # FreeVarsFunc e.FreeFunc#1/10 ) e.Variables_E#1/12
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 2
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[12] = context[0];
      context[13] = context[1];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[12], context[13] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[8], context[9] ) )
        continue;
      context[10] = 0;
      context[11] = 0;
      if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
        continue;
      if( ! refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[10], context[11] ) )
        continue;
      // closed e.Free#1 as range 8
      // closed e.FreeFunc#1 as range 10
      // closed e.Variables_E#1 as range 0
      //2: e.Index#1
      //4: s.Mode#1
      //5: s.VarDepth#1
      //6: e.Variables_B#1
      //8: e.Free#1
      //10: e.FreeFunc#1
      //12: e.Variables_E#1
      //21: s.Mode#1
      //22: e.Index#1
      //24: s.VarDepth#1
      //34: s.Mode#1
      //35: e.Index#1
      //37: s.VarDepth#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[17], & ident_FreeVarsSent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], ShiftVariable_AddToFree, "ShiftVariable_AddToFree" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[21], context[4]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[22], context[23], context[2], context[3]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[24], context[5]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[29], & ident_FreeVarsFunc<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[32], ShiftVariable, "ShiftVariable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[34], context[21]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[35], context[36], context[22], context[23]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[37], context[24]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[31] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::link_brackets( context[33], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_stvar( res, context[37] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::link_brackets( context[28], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::link_brackets( context[16], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::push_stack( context[26] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      refalrts::link_brackets( context[20], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_stvar( res, context[24] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_stvar( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::link_brackets( context[14], context[15] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_stvar( res, context[5] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_stvar( res, context[4] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( s.Mode#1/4 e.Index#1/2 s.VarDepth#1/5 ) e.Variables#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Variables#1 as range 0
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2
  //0: e.Variables#1
  //2: e.Index#1
  //4: s.Mode#1
  //5: s.VarDepth#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult ShiftVariable_AddToFree(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +24, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Mode#1/4 e.Index#1/2 s.VarDepth#1/5 ) e.Variables_B#1/6 ( s.Mode#1/10 e.Index#1/11 s.VarDepth#1/13 ) e.Variables_E#1/14
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarRight, 0, 5, 2},
    // closed e.Index#1 as range 2
    {refalrts::icEPrepare, 0, 6, 0},
    {refalrts::icEStart, 0, 6, 0},
    {refalrts::icSave, 0, 14, 0},
    {refalrts::icBracketLeft, 0, 8, 14},
    {refalrts::icsRepeatLeft, 10, 4, 8},
    {refalrts::iceRepeatLeft, 11, 2, 8},
    {refalrts::icsRepeatLeft, 13, 5, 8},
    {refalrts::icEmpty, 0, 0, 8},
    // closed e.Variables_E#1 as range 0
    //2: e.Index#1
    //4: s.Mode#1
    //5: s.VarDepth#1
    //6: e.Variables_B#1
    //10: s.Mode#1
    //11: e.Index#1
    //13: s.VarDepth#1
    //14: e.Variables_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( s.Mode#1/4 e.Index#1/2 s.VarDepth#1/5 ) e.Variables#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.Variables#1 as range 0
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarRight, 0, 5, 2},
    // closed e.Index#1 as range 2
    //0: e.Variables#1
    //2: e.Index#1
    //4: s.Mode#1
    //5: s.VarDepth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( s.Mode#1/4 e.Index#1/2 s.VarDepth#1/5 ) e.Variables_B#1/6 ( s.Mode#1/10 e.Index#1/11 s.VarDepth#1/13 ) e.Variables_E#1/14
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
      continue;
    // closed e.Index#1 as range 2
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[0];
      context[15] = context[1];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[10], context[4], context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[11], context[12], context[2], context[3], context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[13], context[5], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      // closed e.Variables_E#1 as range 0
      //2: e.Index#1
      //4: s.Mode#1
      //5: s.VarDepth#1
      //6: e.Variables_B#1
      //10: s.Mode#1
      //11: e.Index#1
      //13: s.VarDepth#1
      //14: e.Variables_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_bracket( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[17] ) )
        return refalrts::cNoMemory;
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::link_brackets( context[16], context[17] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_stvar( res, context[5] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_stvar( res, context[4] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( s.Mode#1/4 e.Index#1/2 s.VarDepth#1/5 ) e.Variables#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Variables#1 as range 0
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 2
  //0: e.Variables#1
  //2: e.Index#1
  //4: s.Mode#1
  //5: s.VarDepth#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_Cntx_AddNewVariable_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Context, "Context" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Success<int>::name,
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name,
    & ident_InvalidMode<int>::name,
    & ident_AlreadyBounded<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +56, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.StackDepth#1/2 s.Mode#1/3 ( e.Index#1/4 ) ( e.FreeSent#1/6 ) ( e.FreeFunc#1/8 ) ( e.Stack#1/10 ) e.LocalVars_B#2/12 ( s.Mode#1/16 e.Index#1/17 s.Depth#2/19 ) e.LocalVars_E#2/20
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    // closed e.Index#1 as range 4
    // closed e.FreeSent#1 as range 6
    // closed e.FreeFunc#1 as range 8
    // closed e.Stack#1 as range 10
    {refalrts::icEPrepare, 0, 12, 0},
    {refalrts::icEStart, 0, 12, 0},
    {refalrts::icSave, 0, 20, 0},
    {refalrts::icBracketLeft, 0, 14, 20},
    {refalrts::icsRepeatLeft, 16, 3, 14},
    {refalrts::iceRepeatLeft, 17, 4, 14},
    // closed e.LocalVars_E#2 as range 0
    {refalrts::icsVarLeft, 0, 19, 14},
    {refalrts::icEmpty, 0, 0, 14},
    //2: s.StackDepth#1
    //3: s.Mode#1
    //4: e.Index#1
    //6: e.FreeSent#1
    //8: e.FreeFunc#1
    //10: e.Stack#1
    //12: e.LocalVars_B#2
    //16: s.Mode#1
    //17: e.Index#1
    //19: s.Depth#2
    //20: e.LocalVars_E#2
    //34: s.Depth#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 22},
    {refalrts::icFunc, 0, 0, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 2, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 1, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 32},
    {refalrts::icIdent, 0, 4, 33},
    {refalrts::icCopySTVar, 34, 19, 0},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 22, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icLinkBrackets, 29, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +58, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.StackDepth#1/2 s.Mode#1/3 ( e.Index#1/4 ) ( e.FreeSent#1/6 ) ( e.FreeFunc#1/8 ) ( e.Stack#1/10 ) e.LocalVars_B#2/12 ( s.OldMode#2/16 e.Index#1/17 s.VarDepth#2/19 ) e.LocalVars_E#2/20
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    // closed e.Index#1 as range 4
    // closed e.FreeSent#1 as range 6
    // closed e.FreeFunc#1 as range 8
    // closed e.Stack#1 as range 10
    {refalrts::icEPrepare, 0, 12, 0},
    {refalrts::icEStart, 0, 12, 0},
    {refalrts::icSave, 0, 20, 0},
    {refalrts::icBracketLeft, 0, 14, 20},
    // closed e.LocalVars_E#2 as range 0
    {refalrts::icsVarLeft, 0, 16, 14},
    {refalrts::iceRepeatLeft, 17, 4, 14},
    {refalrts::icsVarLeft, 0, 19, 14},
    {refalrts::icEmpty, 0, 0, 14},
    //2: s.StackDepth#1
    //3: s.Mode#1
    //4: e.Index#1
    //6: e.FreeSent#1
    //8: e.FreeFunc#1
    //10: e.Stack#1
    //12: e.LocalVars_B#2
    //16: s.OldMode#2
    //17: e.Index#1
    //19: s.VarDepth#2
    //20: e.LocalVars_E#2
    //34: s.VarDepth#2
    //35: s.OldMode#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 22},
    {refalrts::icFunc, 0, 0, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icIdent, 0, 2, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 29},
    {refalrts::icIdent, 0, 1, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 32},
    {refalrts::icIdent, 0, 3, 33},
    {refalrts::icCopySTVar, 34, 19, 0},
    {refalrts::icCopySTVar, 35, 16, 0},
    {refalrts::icSpliceSTVar, 0, 0, 35},
    {refalrts::icSpliceSTVar, 0, 0, 34},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 22, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icLinkBrackets, 29, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // s.StackDepth#1/2 s.Mode#1/3 ( e.Index#1/4 ) ( e.FreeSent#1/6 ) ( e.FreeFunc#1/8 ) ( e.Stack#1/10 ) e.LocalVars#2/0
    {refalrts::icsVarLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 3, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icBracketLeft, 0, 6, 0},
    {refalrts::icBracketLeft, 0, 8, 0},
    {refalrts::icBracketLeft, 0, 10, 0},
    // closed e.Index#1 as range 4
    // closed e.FreeSent#1 as range 6
    // closed e.FreeFunc#1 as range 8
    // closed e.Stack#1 as range 10
    // closed e.LocalVars#2 as range 0
    //0: e.LocalVars#2
    //2: s.StackDepth#1
    //3: s.Mode#1
    //4: e.Index#1
    //6: e.FreeSent#1
    //8: e.FreeFunc#1
    //10: e.Stack#1
    //15: s.StackDepth#1
    //25: s.StackDepth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icCopySTVar, 15, 2, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icIdent, 0, 2, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icIdent, 0, 1, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 23},
    {refalrts::icIdent, 0, 0, 24},
    {refalrts::icCopySTVar, 25, 15, 0},
    {refalrts::icSpliceSTVar, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 12, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icLinkBrackets, 20, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 17, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceSTVar, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 3},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.StackDepth#1/2 s.Mode#1/3 ( e.Index#1/4 ) ( e.FreeSent#1/6 ) ( e.FreeFunc#1/8 ) ( e.Stack#1/10 ) e.LocalVars_B#2/12 ( s.Mode#1/16 e.Index#1/17 s.Depth#2/19 ) e.LocalVars_E#2/20
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    // closed e.Index#1 as range 4
    // closed e.FreeSent#1 as range 6
    // closed e.FreeFunc#1 as range 8
    // closed e.Stack#1 as range 10
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[0];
      context[21] = context[1];
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[20], context[21] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[16], context[3], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[17], context[18], context[4], context[5], context[14], context[15] ) )
        continue;
      // closed e.LocalVars_E#2 as range 0
      if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //2: s.StackDepth#1
      //3: s.Mode#1
      //4: e.Index#1
      //6: e.FreeSent#1
      //8: e.FreeFunc#1
      //10: e.Stack#1
      //12: e.LocalVars_B#2
      //16: s.Mode#1
      //17: e.Index#1
      //19: s.Depth#2
      //20: e.LocalVars_E#2
      //34: s.Depth#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[23], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_FreeVarsSent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_FreeVarsFunc<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[33], & ident_AlreadyBounded<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[34], context[19]))
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::link_brackets( context[22], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::link_brackets( context[29], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[26], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::link_brackets( context[24], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_stvar( res, context[19] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_stvar( res, context[3] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_stvar( res, context[2] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[12], context[13], context[0], context[1] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // s.StackDepth#1/2 s.Mode#1/3 ( e.Index#1/4 ) ( e.FreeSent#1/6 ) ( e.FreeFunc#1/8 ) ( e.Stack#1/10 ) e.LocalVars_B#2/12 ( s.OldMode#2/16 e.Index#1/17 s.VarDepth#2/19 ) e.LocalVars_E#2/20
    if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
      continue;
    // closed e.Index#1 as range 4
    // closed e.FreeSent#1 as range 6
    // closed e.FreeFunc#1 as range 8
    // closed e.Stack#1 as range 10
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[0];
      context[21] = context[1];
      context[14] = 0;
      context[15] = 0;
      if( ! refalrts::brackets_left( context[14], context[15], context[20], context[21] ) )
        continue;
      // closed e.LocalVars_E#2 as range 0
      if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[17], context[18], context[4], context[5], context[14], context[15] ) )
        continue;
      if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //2: s.StackDepth#1
      //3: s.Mode#1
      //4: e.Index#1
      //6: e.FreeSent#1
      //8: e.FreeFunc#1
      //10: e.Stack#1
      //12: e.LocalVars_B#2
      //16: s.OldMode#2
      //17: e.Index#1
      //19: s.VarDepth#2
      //20: e.LocalVars_E#2
      //34: s.VarDepth#2
      //35: s.OldMode#2

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[23], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_FreeVarsSent<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[30], & ident_FreeVarsFunc<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[33], & ident_InvalidMode<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[34], context[19]))
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[16]))
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[35] );
      res = refalrts::splice_stvar( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::link_brackets( context[22], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::link_brackets( context[29], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::link_brackets( context[26], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::link_brackets( context[24], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_stvar( res, context[19] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_stvar( res, context[16] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_stvar( res, context[2] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[12], context[13], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // s.StackDepth#1/2 s.Mode#1/3 ( e.Index#1/4 ) ( e.FreeSent#1/6 ) ( e.FreeFunc#1/8 ) ( e.Stack#1/10 ) e.LocalVars#2/0
  if( ! refalrts::svar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  if( ! refalrts::brackets_left( context[10], context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 4
  // closed e.FreeSent#1 as range 6
  // closed e.FreeFunc#1 as range 8
  // closed e.Stack#1 as range 10
  // closed e.LocalVars#2 as range 0
  //0: e.LocalVars#2
  //2: s.StackDepth#1
  //3: s.Mode#1
  //4: e.Index#1
  //6: e.FreeSent#1
  //8: e.FreeFunc#1
  //10: e.Stack#1
  //15: s.StackDepth#1
  //25: s.StackDepth#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[15], context[2]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[18], & ident_FreeVarsSent<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[21], & ident_FreeVarsFunc<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[24], & ident_Success<int>::name ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[25], context[15]))
    return refalrts::cNoMemory;
  res = refalrts::splice_stvar( res, context[25] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::link_brackets( context[12], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::link_brackets( context[20], context[22] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::link_brackets( context[17], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[14], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_stvar( res, context[3] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_stvar( res, context[2] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_AddNewVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_Cntx_AddNewVariable_0, "lambda_Cntx_AddNewVariable_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Fetch, "Fetch" },
    { Context, "Context" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // [Context s.StackDepth#1/4 e.LocalVars#1/6 ( # FreeVarsSent e.FreeSent#1/8 ) ( # FreeVarsFunc e.FreeFunc#1/10 ) e.Stack#1/12 ] s.Mode#1/5 e.Index#1/0
    {refalrts::icADTLeft, 3, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 0},
    // closed e.Index#1 as range 0
    {refalrts::icEPrepare, 0, 6, 2},
    {refalrts::icEStart, 0, 6, 2},
    {refalrts::icSave, 0, 12, 2},
    {refalrts::icBracketLeft, 0, 8, 12},
    {refalrts::icIdentLeft, 0, 1, 8},
    {refalrts::icBracketLeft, 0, 10, 12},
    {refalrts::icIdentLeft, 0, 0, 10},
    // closed e.FreeSent#1 as range 8
    // closed e.FreeFunc#1 as range 10
    // closed e.Stack#1 as range 2
    //0: e.Index#1
    //4: s.StackDepth#1
    //5: s.Mode#1
    //6: e.LocalVars#1
    //8: e.FreeSent#1
    //10: e.FreeFunc#1
    //12: e.Stack#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icFunc, 0, 2, 15},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 16},
    {refalrts::icFunc, 0, 1, 17},
    {refalrts::icFunc, 0, 0, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icReturnResult, 0, 0, 0},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // [Context s.StackDepth#1/4 e.LocalVars#1/6 ( # FreeVarsSent e.FreeSent#1/8 ) ( # FreeVarsFunc e.FreeFunc#1/10 ) e.Stack#1/12 ] s.Mode#1/5 e.Index#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 0
  context[6] = 0;
  context[7] = 0;
  refalrts::start_e_loop();
  do {
    context[12] = context[2];
    context[13] = context[3];
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[12], context[13] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[8], context[9] ) )
      continue;
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_left( context[10], context[11], context[12], context[13] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[10], context[11] ) )
      continue;
    // closed e.FreeSent#1 as range 8
    // closed e.FreeFunc#1 as range 10
    // closed e.Stack#1 as range 2
    //0: e.Index#1
    //4: s.StackDepth#1
    //5: s.Mode#1
    //6: e.LocalVars#1
    //8: e.FreeSent#1
    //10: e.FreeFunc#1
    //12: e.Stack#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Fetch, "Fetch" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], refalrts::create_closure, "refalrts::create_closure" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], lambda_Cntx_AddNewVariable_0, "lambda_Cntx_AddNewVariable_0" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[14] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[16] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::link_brackets( context[25], context[26] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::link_brackets( context[23], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[5] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_CheckVariable(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Context, "Context" },
    { ShiftVariable, "ShiftVariable" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotFound<int>::name,
    & ident_InvalidMode<int>::name,
    & ident_ExistVariable<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +53, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [Context s.StackDepth#1/4 e.Variables_B#1/6 ( s.Mode#1/10 e.Index#1/11 s.VarDepth#1/13 ) e.Variables_E#1/14 ] s.Mode#1/5 e.Index#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 0},
    // closed e.Index#1 as range 0
    {refalrts::icEPrepare, 0, 6, 2},
    {refalrts::icEStart, 0, 6, 2},
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icBracketLeft, 0, 8, 14},
    {refalrts::icsRepeatLeft, 10, 5, 8},
    {refalrts::iceRepeatLeft, 11, 0, 8},
    // closed e.Variables_E#1 as range 2
    {refalrts::icsVarLeft, 0, 13, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //0: e.Index#1
    //4: s.StackDepth#1
    //5: s.Mode#1
    //6: e.Variables_B#1
    //10: s.Mode#1
    //11: e.Index#1
    //13: s.VarDepth#1
    //14: e.Variables_E#1
    //24: s.VarDepth#1
    //28: s.VarDepth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icFunc, 0, 1, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icCopySTVar, 24, 13, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 26},
    {refalrts::icIdent, 0, 2, 27},
    {refalrts::icCopySTVar, 28, 24, 0},
    {refalrts::icSpliceSTVar, 0, 0, 28},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icLinkBrackets, 16, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 23, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +38, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [Context s.StackDepth#1/4 e.Variables_B#1/6 ( s.OldMode#1/10 e.Index#1/11 s.VarDepth#1/13 ) e.Variables_E#1/14 ] s.NewMode#1/5 e.Index#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icsVarLeft, 0, 5, 0},
    // closed e.Index#1 as range 0
    {refalrts::icEPrepare, 0, 6, 2},
    {refalrts::icEStart, 0, 6, 2},
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icBracketLeft, 0, 8, 14},
    // closed e.Variables_E#1 as range 2
    {refalrts::icsVarLeft, 0, 10, 8},
    {refalrts::iceRepeatLeft, 11, 0, 8},
    {refalrts::icsVarLeft, 0, 13, 8},
    {refalrts::icEmpty, 0, 0, 8},
    //0: e.Index#1
    //4: s.StackDepth#1
    //5: s.NewMode#1
    //6: e.Variables_B#1
    //10: s.OldMode#1
    //11: e.Index#1
    //13: s.VarDepth#1
    //14: e.Variables_E#1
    //23: s.OldMode#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 16},
    {refalrts::icFunc, 0, 0, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 20},
    {refalrts::icIdent, 0, 1, 21},
    {refalrts::icInt, 0, 0, 22},
    {refalrts::icCopySTVar, 23, 10, 0},
    {refalrts::icSpliceSTVar, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icLinkBrackets, 16, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [Context s.StackDepth#1/4 e.Variables#1/2 ] s.Mode#1/5 e.Index#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Variables#1 as range 2
    {refalrts::icsVarLeft, 0, 5, 0},
    // closed e.Index#1 as range 0
    //0: e.Index#1
    //2: e.Variables#1
    //4: s.StackDepth#1
    //5: s.Mode#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 8},
    {refalrts::icIdent, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icLinkBrackets, 6, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[4];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // [Context s.StackDepth#1/4 e.Variables_B#1/6 ( s.Mode#1/10 e.Index#1/11 s.VarDepth#1/13 ) e.Variables_E#1/14 ] s.Mode#1/5 e.Index#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    // closed e.Index#1 as range 0
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[2];
      context[15] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[14], context[15] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( context[10], context[5], context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[11], context[12], context[0], context[1], context[8], context[9] ) )
        continue;
      // closed e.Variables_E#1 as range 2
      if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //0: e.Index#1
      //4: s.StackDepth#1
      //5: s.Mode#1
      //6: e.Variables_B#1
      //10: s.Mode#1
      //11: e.Index#1
      //13: s.VarDepth#1
      //14: e.Variables_E#1
      //24: s.VarDepth#1
      //28: s.VarDepth#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], ShiftVariable, "ShiftVariable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[24], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[27], & ident_ExistVariable<int>::name ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[28], context[24]))
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[28] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::link_brackets( context[16], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::link_brackets( context[23], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_stvar( res, context[24] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_stvar( res, context[10] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::push_stack( context[22] );
      refalrts::push_stack( context[18] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      refalrts::link_brackets( context[20], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_stvar( res, context[5] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_stvar( res, context[4] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // [Context s.StackDepth#1/4 e.Variables_B#1/6 ( s.OldMode#1/10 e.Index#1/11 s.VarDepth#1/13 ) e.Variables_E#1/14 ] s.NewMode#1/5 e.Index#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
      continue;
    // closed e.Index#1 as range 0
    context[6] = 0;
    context[7] = 0;
    refalrts::start_e_loop();
    do {
      context[14] = context[2];
      context[15] = context[3];
      context[8] = 0;
      context[9] = 0;
      if( ! refalrts::brackets_left( context[8], context[9], context[14], context[15] ) )
        continue;
      // closed e.Variables_E#1 as range 2
      if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[11], context[12], context[0], context[1], context[8], context[9] ) )
        continue;
      if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[8], context[9] ) )
        continue;
      //0: e.Index#1
      //4: s.StackDepth#1
      //5: s.NewMode#1
      //6: e.Variables_B#1
      //10: s.OldMode#1
      //11: e.Index#1
      //13: s.VarDepth#1
      //14: e.Variables_E#1
      //23: s.OldMode#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[17], Context, "Context" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[21], & ident_InvalidMode<int>::name ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_number( context[22], 0UL ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[23], context[10]))
        return refalrts::cNoMemory;
      res = refalrts::splice_stvar( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      refalrts::link_brackets( context[16], context[20] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::link_brackets( context[18], context[19] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_stvar( res, context[13] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_stvar( res, context[10] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_stvar( res, context[4] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // [Context s.StackDepth#1/4 e.Variables#1/2 ] s.Mode#1/5 e.Index#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Variables#1 as range 2
  if( ! refalrts::svar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 0
  //0: e.Index#1
  //2: e.Variables#1
  //4: s.StackDepth#1
  //5: s.Mode#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], & ident_NotFound<int>::name ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_elem( res, context[9] );
  refalrts::link_brackets( context[6], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_ResetAfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Unique, "Unique" },
    { Context, "Context" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // [Context s.StackDepth#1/4 e.Locals#1/5 ( # FreeVarsSent e.FreeSent#1/7 ) ( # FreeVarsFunc e.FreeFunc#1/9 ) e.Outers#1/11 ]
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icEPrepare, 0, 5, 2},
    {refalrts::icEStart, 0, 5, 2},
    {refalrts::icSave, 0, 11, 2},
    {refalrts::icBracketLeft, 0, 7, 11},
    {refalrts::icIdentLeft, 0, 1, 7},
    {refalrts::icBracketLeft, 0, 9, 11},
    {refalrts::icIdentLeft, 0, 0, 9},
    // closed e.FreeSent#1 as range 7
    // closed e.FreeFunc#1 as range 9
    // closed e.Outers#1 as range 2
    //4: s.StackDepth#1
    //5: e.Locals#1
    //7: e.FreeSent#1
    //9: e.FreeFunc#1
    //11: e.Outers#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 13},
    {refalrts::icFunc, 0, 1, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icIdent, 0, 1, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icIdent, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icFunc, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 24},
    {refalrts::icLinkBrackets, 13, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 18, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icReturnResult, 0, 0, 0},
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
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // [Context s.StackDepth#1/4 e.Locals#1/5 ( # FreeVarsSent e.FreeSent#1/7 ) ( # FreeVarsFunc e.FreeFunc#1/9 ) e.Outers#1/11 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  refalrts::start_e_loop();
  do {
    context[11] = context[2];
    context[12] = context[3];
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[11], context[12] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[7], context[8] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[11], context[12] ) )
      continue;
    if( ! refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[9], context[10] ) )
      continue;
    // closed e.FreeSent#1 as range 7
    // closed e.FreeFunc#1 as range 9
    // closed e.Outers#1 as range 2
    //4: s.StackDepth#1
    //5: e.Locals#1
    //7: e.FreeSent#1
    //9: e.FreeFunc#1
    //11: e.Outers#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    if( ! refalrts::alloc_open_adt( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], Context, "Context" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_FreeVarsSent<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[19], & ident_FreeVarsFunc<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Unique, "Unique" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_adt( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::link_brackets( context[13], context[24] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::link_brackets( context[18], context[23] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[20] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::link_brackets( context[15], context[17] );
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[4] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[5], context[6], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}

static refalrts::FnResult Unique(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Unique, "Unique" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +23, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Begin#1/2 t.Copy#1/4 e.Middle#1/5 t.Copy#1/7 e.End#1/10
    {refalrts::icEPrepare, 0, 2, 0},
    {refalrts::icEStart, 0, 2, 0},
    {refalrts::icSave, 0, 8, 0},
    {refalrts::ictVarLeft, 0, 4, 8},
    {refalrts::icEPrepare, 0, 5, 8},
    {refalrts::icEStart, 0, 5, 8},
    {refalrts::icSave, 0, 10, 8},
    {refalrts::ictRepeatLeft, 7, 4, 10},
    // closed e.End#1 as range 0
    //2: e.Begin#1
    //4: t.Copy#1
    //5: e.Middle#1
    //7: t.Copy#1
    //10: e.End#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // e.Uniques#1/0
    // closed e.Uniques#1 as range 0
    //0: e.Uniques#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // e.Begin#1/2 t.Copy#1/4 e.Middle#1/5 t.Copy#1/7 e.End#1/10
    context[2] = 0;
    context[3] = 0;
    refalrts::start_e_loop();
    do {
      context[8] = context[0];
      context[9] = context[1];
      if( ! refalrts::tvar_left( context[4], context[8], context[9] ) )
        continue;
      context[5] = 0;
      context[6] = 0;
      refalrts::start_e_loop();
      do {
        context[10] = context[8];
        context[11] = context[9];
        if( ! refalrts::repeated_stvar_left( context[7], context[4], context[10], context[11] ) )
          continue;
        // closed e.End#1 as range 0
        //2: e.Begin#1
        //4: t.Copy#1
        //5: e.Middle#1
        //7: t.Copy#1
        //10: e.End#1

        refalrts::reset_allocator();
        refalrts::Iter res = arg_begin;
        if( ! refalrts::alloc_open_call( context[12] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[13], Unique, "Unique" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[14] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[14] );
        refalrts::push_stack( context[12] );
        res = refalrts::splice_elem( res, context[14] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_stvar( res, context[4] );
        res = refalrts::splice_elem( res, context[13] );
        res = refalrts::splice_elem( res, context[12] );
        res = refalrts::splice_evar( res, context[2], context[3] );
        refalrts::use( res );
        refalrts::splice_to_freelist( arg_begin, arg_end );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[5], context[6], context[8], context[9] ) );
    } while ( refalrts::open_evar_advance( context[2], context[3], context[0], context[1] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // e.Uniques#1/0
  // closed e.Uniques#1 as range 0
  //0: e.Uniques#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_PushScope(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Inc, "Inc" },
    { Context, "Context" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // [Context s.StackDepth#1/4 e.Variables#1/2 ]
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Variables#1 as range 2
    //2: e.Variables#1
    //4: s.StackDepth#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 5},
    {refalrts::icFunc, 0, 1, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 0, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icIdent, 0, 1, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icIdent, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 16},
    {refalrts::icLinkBrackets, 5, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 13, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icLinkBrackets, 10, 12, 0},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // [Context s.StackDepth#1/4 e.Variables#1/2 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Variables#1 as range 2
  //2: e.Variables#1
  //4: s.StackDepth#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], Inc, "Inc" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[11], & ident_FreeVarsSent<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[14], & ident_FreeVarsFunc<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[5], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[13], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::link_brackets( context[10], context[12] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult Cntx_PopScope(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Dec, "Dec" },
    { Context, "Context" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_FreeVarsFunc<int>::name,
    & ident_FreeVarsSent<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // [Context s.StackDepth#1/4 ( # FreeVarsSent ) ( # FreeVarsFunc e.ClosureContext#1/7 ) e.Outers#1/2 ]
    {refalrts::icADTLeft, 1, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 5, 2},
    {refalrts::icIdentLeft, 0, 1, 5},
    {refalrts::icBracketLeft, 0, 7, 2},
    {refalrts::icIdentLeft, 0, 0, 7},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.ClosureContext#1 as range 7
    // closed e.Outers#1 as range 2
    //2: e.Outers#1
    //4: s.StackDepth#1
    //7: e.ClosureContext#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 9},
    {refalrts::icFunc, 0, 1, 10},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 14},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icLinkBrackets, 9, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // [Context s.StackDepth#1/4 ( # FreeVarsSent ) ( # FreeVarsFunc e.ClosureContext#1/7 ) e.Outers#1/2 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], Context, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_FreeVarsSent<int>::name, context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_left(  & ident_FreeVarsFunc<int>::name, context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ClosureContext#1 as range 7
  // closed e.Outers#1 as range 2
  //2: e.Outers#1
  //4: s.StackDepth#1
  //7: e.ClosureContext#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], Context, "Context" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Dec, "Dec" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[14] ) )
    return refalrts::cNoMemory;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::link_brackets( context[9], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file
