// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult EL_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Reduce(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddFunctionCall(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AddUnresolved(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_AllIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PatchReferences(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SymTable(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #GN_Entry
template <typename SREFAL_PARAM_INT>
struct ident_GN_Entry {
  static const char *name() {
    return "GN_Entry";
  }
};

static refalrts::FnResult SymTable(refalrts::Iter, refalrts::Iter) {
  refalrts::this_is_generated_function();
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
}

refalrts::FnResult ST_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
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
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 10},
    {refalrts::icLinkBrackets, 2, 10, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icLinkBrackets, 4, 5, 0},
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
  if( ! refalrts::alloc_name( context[3], SymTable, "SymTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[2], context[10] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::link_brackets( context[6], context[7] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::link_brackets( context[4], context[5] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_elem( res, context[3] );
  res = refalrts::splice_elem( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_PatchReferences_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    {refalrts::icOnFailGoTo, +9, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Name#1/2 ) ( s.LnNum#2/8 e.Name#1/6 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 2
    {refalrts::iceRepeatRight, 6, 2, 4},
    {refalrts::icsVarLeft, 0, 8, 4},
    {refalrts::icEmpty, 0, 0, 4},
    //2: e.Name#1
    //6: e.Name#1
    //8: s.LnNum#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Name#1/2 ) ( s.LnNum#2/6 e.Name#2/4 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#1 as range 2
    {refalrts::icsVarLeft, 0, 6, 4},
    // closed e.Name#2 as range 4
    //2: e.Name#1
    //4: e.Name#2
    //6: s.LnNum#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 7},
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
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // ( e.Name#1/2 ) ( s.LnNum#2/8 e.Name#1/6 )
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
      continue;
    if( ! refalrts::empty_seq( context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 2
    if( ! refalrts::repeated_evar_right( context[6], context[7], context[2], context[3], context[4], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[4], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[4], context[5] ) )
      continue;
    //2: e.Name#1
    //6: e.Name#1
    //8: s.LnNum#2

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // ( e.Name#1/2 ) ( s.LnNum#2/6 e.Name#2/4 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  if( ! refalrts::svar_left( context[6], context[4], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 4
  //2: e.Name#1
  //4: e.Name#2
  //6: s.LnNum#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[7], context[8] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_stvar( res, context[6] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PatchReferences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_PatchReferences_0, "lambda_PatchReferences_0" },
    { refalrts::create_closure, "refalrts::create_closure" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.References#1/2 ) e.Name#1/0
    {refalrts::icBracketLeft, 0, 2, 0},
    // closed e.References#1 as range 2
    // closed e.Name#1 as range 0
    //0: e.Name#1
    //2: e.References#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icFunc, 0, 2, 6},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icFunc, 0, 1, 8},
    {refalrts::icFunc, 0, 0, 9},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icLinkBrackets, 4, 14, 0},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icLinkBrackets, 10, 11, 0},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
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
  // ( e.References#1/2 ) e.Name#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 2
  // closed e.Name#1 as range 0
  //0: e.Name#1
  //2: e.References#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], lambda_PatchReferences_0, "lambda_PatchReferences_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[14] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[5] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::link_brackets( context[10], context[11] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PatchReferences, "PatchReferences" },
    { SymTable, "SymTable" },
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" already defined", 16},
    {"Function ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +66, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs#1/9 ) e.Names_B#1/13 ( s.AnyScopeClass#1/19 e.Name#1/17 ) e.Names_E#1/20 ] s.ScopeClass#1/11 s.LnNum#1/12 e.Name#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icADTLeft, 1, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 3},
    {refalrts::icBracketLeft, 0, 7, 3},
    {refalrts::icBracketLeft, 0, 9, 3},
    // closed e.References#1 as range 5
    // closed e.Idents#1 as range 7
    // closed e.Externs#1 as range 9
    {refalrts::icsVarLeft, 0, 11, 0},
    {refalrts::icsVarLeft, 0, 12, 0},
    // closed e.Name#1 as range 0
    {refalrts::icEPrepare, 0, 13, 3},
    {refalrts::icEStart, 0, 13, 3},
    {refalrts::icSave, 0, 20, 3},
    {refalrts::icBracketLeft, 0, 15, 20},
    {refalrts::iceRepeatRight, 17, 0, 15},
    // closed e.Names_E#1 as range 3
    {refalrts::icsVarLeft, 0, 19, 15},
    {refalrts::icEmpty, 0, 0, 15},
    //0: e.Name#1
    //2: t.ErrorList#1
    //5: e.References#1
    //7: e.Idents#1
    //9: e.Externs#1
    //11: s.ScopeClass#1
    //12: s.LnNum#1
    //13: e.Names_B#1
    //17: e.Name#1
    //19: s.AnyScopeClass#1
    //20: e.Names_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icFunc, 0, 2, 23},
    {refalrts::icString, 0, 1, 24},
    {refalrts::icString, 0, 0, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 28},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 29},
    {refalrts::icFunc, 0, 1, 30},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 35},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 36},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 39},
    {refalrts::icLinkBrackets, 29, 39, 0},
    {refalrts::icSpliceElem, 0, 0, 39},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icLinkBrackets, 37, 38, 0},
    {refalrts::icSpliceElem, 0, 0, 38},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 37},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icLinkBrackets, 35, 36, 0},
    {refalrts::icSpliceElem, 0, 0, 36},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 35},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icLinkBrackets, 31, 32, 0},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icPushStack, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceRange, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceRange, 0, 0, 24},
    {refalrts::icSpliceSTVar, 0, 0, 12},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +60, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs_B#1/13 ( e.Name#1/17 ) e.Externs_E#1/19 ) e.Names#1/3 ] s.ScopeClass#1/11 s.LnNum#1/12 e.Name#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icADTLeft, 1, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 3},
    {refalrts::icBracketLeft, 0, 7, 3},
    {refalrts::icBracketLeft, 0, 9, 3},
    // closed e.References#1 as range 5
    // closed e.Idents#1 as range 7
    // closed e.Names#1 as range 3
    {refalrts::icsVarLeft, 0, 11, 0},
    {refalrts::icsVarLeft, 0, 12, 0},
    // closed e.Name#1 as range 0
    {refalrts::icEPrepare, 0, 13, 9},
    {refalrts::icEStart, 0, 13, 9},
    {refalrts::icSave, 0, 19, 9},
    {refalrts::icBracketLeft, 0, 15, 19},
    {refalrts::iceRepeatLeft, 17, 0, 15},
    {refalrts::icEmpty, 0, 0, 15},
    // closed e.Externs_E#1 as range 9
    //0: e.Name#1
    //2: t.ErrorList#1
    //3: e.Names#1
    //5: e.References#1
    //7: e.Idents#1
    //11: s.ScopeClass#1
    //12: s.LnNum#1
    //13: e.Externs_B#1
    //17: e.Name#1
    //19: e.Externs_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 21},
    {refalrts::icFunc, 0, 1, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 23},
    {refalrts::icFunc, 0, 0, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 32},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 34},
    {refalrts::icLinkBrackets, 21, 34, 0},
    {refalrts::icSpliceElem, 0, 0, 34},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icSpliceElem, 0, 0, 33},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 32},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSpliceElem, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs#1/9 ) e.Names#1/3 ] s.ScopeClass#1/11 s.LnNum#1/12 e.Name#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icADTLeft, 1, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 3},
    {refalrts::icBracketLeft, 0, 7, 3},
    {refalrts::icBracketLeft, 0, 9, 3},
    // closed e.References#1 as range 5
    // closed e.Idents#1 as range 7
    // closed e.Externs#1 as range 9
    // closed e.Names#1 as range 3
    {refalrts::icsVarLeft, 0, 11, 0},
    {refalrts::icsVarLeft, 0, 12, 0},
    // closed e.Name#1 as range 0
    //0: e.Name#1
    //2: t.ErrorList#1
    //3: e.Names#1
    //5: e.References#1
    //7: e.Idents#1
    //9: e.Externs#1
    //11: s.ScopeClass#1
    //12: s.LnNum#1
    //25: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 13},
    {refalrts::icFunc, 0, 1, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icFunc, 0, 0, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icCopyEVar, 25, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 28},
    {refalrts::icLinkBrackets, 13, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceSTVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
    // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs#1/9 ) e.Names_B#1/13 ( s.AnyScopeClass#1/19 e.Name#1/17 ) e.Names_E#1/20 ] s.ScopeClass#1/11 s.LnNum#1/12 e.Name#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::adt_left( context[3], context[4], SymTable, context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[3], context[4] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[3], context[4] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[3], context[4] ) )
      continue;
    // closed e.References#1 as range 5
    // closed e.Idents#1 as range 7
    // closed e.Externs#1 as range 9
    if( ! refalrts::svar_left( context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 0
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[3];
      context[21] = context[4];
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_left( context[15], context[16], context[20], context[21] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[17], context[18], context[0], context[1], context[15], context[16] ) )
        continue;
      // closed e.Names_E#1 as range 3
      if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //0: e.Name#1
      //2: t.ErrorList#1
      //5: e.References#1
      //7: e.Idents#1
      //9: e.Externs#1
      //11: s.ScopeClass#1
      //12: s.LnNum#1
      //13: e.Names_B#1
      //17: e.Name#1
      //19: s.AnyScopeClass#1
      //20: e.Names_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_call( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[23], EL_AddErrorAt, "EL_AddErrorAt" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[24], context[25], "Function ", 9 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[26], context[27], " already defined", 16 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_adt( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[30], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[34] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[35] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[39] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[29], context[39] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::link_brackets( context[37], context[38] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_stvar( res, context[19] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::link_brackets( context[35], context[36] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[35] );
      refalrts::link_brackets( context[33], context[34] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[33] );
      refalrts::link_brackets( context[31], context[32] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[22] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_stvar( res, context[12] );
      res = refalrts::splice_stvar( res, context[2] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[3], context[4] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs_B#1/13 ( e.Name#1/17 ) e.Externs_E#1/19 ) e.Names#1/3 ] s.ScopeClass#1/11 s.LnNum#1/12 e.Name#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::adt_left( context[3], context[4], SymTable, context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[3], context[4] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[3], context[4] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[3], context[4] ) )
      continue;
    // closed e.References#1 as range 5
    // closed e.Idents#1 as range 7
    // closed e.Names#1 as range 3
    if( ! refalrts::svar_left( context[11], context[0], context[1] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 0
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[19] = context[9];
      context[20] = context[10];
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_left( context[15], context[16], context[19], context[20] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[17], context[18], context[0], context[1], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.Externs_E#1 as range 9
      //0: e.Name#1
      //2: t.ErrorList#1
      //3: e.Names#1
      //5: e.References#1
      //7: e.Idents#1
      //11: s.ScopeClass#1
      //12: s.LnNum#1
      //13: e.Externs_B#1
      //17: e.Name#1
      //19: e.Externs_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[22], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[24], PatchReferences, "PatchReferences" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[34] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[21], context[34] );
      res = refalrts::splice_elem( res, context[34] );
      refalrts::link_brackets( context[32], context[33] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_stvar( res, context[11] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_evar( res, context[3], context[4] );
      refalrts::link_brackets( context[30], context[31] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::link_brackets( context[28], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[23] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      refalrts::link_brackets( context[25], context[26] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_stvar( res, context[2] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs#1/9 ) e.Names#1/3 ] s.ScopeClass#1/11 s.LnNum#1/12 e.Name#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::adt_left( context[3], context[4], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[3], context[4] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[3], context[4] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_left( context[9], context[10], context[3], context[4] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 5
  // closed e.Idents#1 as range 7
  // closed e.Externs#1 as range 9
  // closed e.Names#1 as range 3
  if( ! refalrts::svar_left( context[11], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 0
  //0: e.Name#1
  //2: t.ErrorList#1
  //3: e.Names#1
  //5: e.References#1
  //7: e.Idents#1
  //9: e.Externs#1
  //11: s.ScopeClass#1
  //12: s.LnNum#1
  //25: e.Name#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], SymTable, "SymTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], PatchReferences, "PatchReferences" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[25], context[26], context[0], context[1]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[28] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[13], context[28] );
  res = refalrts::splice_elem( res, context[28] );
  refalrts::link_brackets( context[24], context[27] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_stvar( res, context[11] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  refalrts::link_brackets( context[22], context[23] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[22] );
  refalrts::link_brackets( context[20], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[15] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PatchReferences, "PatchReferences" },
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +48, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs_B#1/11 ( e.Name#1/15 ) e.Externs_E#1/17 ) e.Names#1/3 ] e.Name#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icADTLeft, 1, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 3},
    {refalrts::icBracketLeft, 0, 7, 3},
    {refalrts::icBracketLeft, 0, 9, 3},
    // closed e.References#1 as range 5
    // closed e.Idents#1 as range 7
    // closed e.Names#1 as range 3
    // closed e.Name#1 as range 0
    {refalrts::icEPrepare, 0, 11, 9},
    {refalrts::icEStart, 0, 11, 9},
    {refalrts::icSave, 0, 17, 9},
    {refalrts::icBracketLeft, 0, 13, 17},
    {refalrts::iceRepeatLeft, 15, 0, 13},
    {refalrts::icEmpty, 0, 0, 13},
    // closed e.Externs_E#1 as range 9
    //0: e.Name#1
    //2: t.ErrorList#1
    //3: e.Names#1
    //5: e.References#1
    //7: e.Idents#1
    //11: e.Externs_B#1
    //15: e.Name#1
    //17: e.Externs_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 19},
    {refalrts::icFunc, 0, 1, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 29},
    {refalrts::icLinkBrackets, 19, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icLinkBrackets, 25, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +50, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs#1/9 ) e.Names_B#1/11 ( s.ScopeClass#1/17 e.Name#1/15 ) e.Names_E#1/18 ] e.Name#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icADTLeft, 1, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 3},
    {refalrts::icBracketLeft, 0, 7, 3},
    {refalrts::icBracketLeft, 0, 9, 3},
    // closed e.References#1 as range 5
    // closed e.Idents#1 as range 7
    // closed e.Externs#1 as range 9
    // closed e.Name#1 as range 0
    {refalrts::icEPrepare, 0, 11, 3},
    {refalrts::icEStart, 0, 11, 3},
    {refalrts::icSave, 0, 18, 3},
    {refalrts::icBracketLeft, 0, 13, 18},
    {refalrts::iceRepeatRight, 15, 0, 13},
    // closed e.Names_E#1 as range 3
    {refalrts::icsVarLeft, 0, 17, 13},
    {refalrts::icEmpty, 0, 0, 13},
    //0: e.Name#1
    //2: t.ErrorList#1
    //5: e.References#1
    //7: e.Idents#1
    //9: e.Externs#1
    //11: e.Names_B#1
    //15: e.Name#1
    //17: s.ScopeClass#1
    //18: e.Names_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 20},
    {refalrts::icFunc, 0, 1, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 30},
    {refalrts::icLinkBrackets, 20, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceSTVar, 0, 0, 2},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs#1/9 ) e.Names#1/3 ] e.Name#1/0
    {refalrts::ictVarLeft, 0, 2, 0},
    {refalrts::icADTLeft, 1, 3, 0},
    {refalrts::icBracketLeft, 0, 5, 3},
    {refalrts::icBracketLeft, 0, 7, 3},
    {refalrts::icBracketLeft, 0, 9, 3},
    // closed e.References#1 as range 5
    // closed e.Idents#1 as range 7
    // closed e.Externs#1 as range 9
    // closed e.Names#1 as range 3
    // closed e.Name#1 as range 0
    //0: e.Name#1
    //2: t.ErrorList#1
    //3: e.Names#1
    //5: e.References#1
    //7: e.Idents#1
    //9: e.Externs#1
    //22: e.Name#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icFunc, 0, 0, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icCopyEVar, 22, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 26},
    {refalrts::icLinkBrackets, 11, 26, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 3},
    {refalrts::icLinkBrackets, 20, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 21, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceSTVar, 0, 0, 2},
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
    // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs_B#1/11 ( e.Name#1/15 ) e.Externs_E#1/17 ) e.Names#1/3 ] e.Name#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::adt_left( context[3], context[4], SymTable, context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[3], context[4] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[3], context[4] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[3], context[4] ) )
      continue;
    // closed e.References#1 as range 5
    // closed e.Idents#1 as range 7
    // closed e.Names#1 as range 3
    // closed e.Name#1 as range 0
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[9];
      context[18] = context[10];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_left( context[13], context[14], context[17], context[18] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[15], context[16], context[0], context[1], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.Externs_E#1 as range 9
      //0: e.Name#1
      //2: t.ErrorList#1
      //3: e.Names#1
      //5: e.References#1
      //7: e.Idents#1
      //11: e.Externs_B#1
      //15: e.Name#1
      //17: e.Externs_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[20], SymTable, "SymTable" ) )
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
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[29] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[19], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[3], context[4] );
      refalrts::link_brackets( context[25], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_stvar( res, context[2] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs#1/9 ) e.Names_B#1/11 ( s.ScopeClass#1/17 e.Name#1/15 ) e.Names_E#1/18 ] e.Name#1/0
    if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
      continue;
    context[3] = 0;
    context[4] = 0;
    if( ! refalrts::adt_left( context[3], context[4], SymTable, context[0], context[1] ) )
      continue;
    context[5] = 0;
    context[6] = 0;
    if( ! refalrts::brackets_left( context[5], context[6], context[3], context[4] ) )
      continue;
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_left( context[7], context[8], context[3], context[4] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_left( context[9], context[10], context[3], context[4] ) )
      continue;
    // closed e.References#1 as range 5
    // closed e.Idents#1 as range 7
    // closed e.Externs#1 as range 9
    // closed e.Name#1 as range 0
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[3];
      context[19] = context[4];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_left( context[13], context[14], context[18], context[19] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[15], context[16], context[0], context[1], context[13], context[14] ) )
        continue;
      // closed e.Names_E#1 as range 3
      if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      //0: e.Name#1
      //2: t.ErrorList#1
      //5: e.References#1
      //7: e.Idents#1
      //9: e.Externs#1
      //11: e.Names_B#1
      //15: e.Name#1
      //17: s.ScopeClass#1
      //18: e.Names_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[30] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[20], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::link_brackets( context[28], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_stvar( res, context[17] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[24], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[22], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_stvar( res, context[2] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[11], context[12], context[3], context[4] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // t.ErrorList#1/2 [SymTable ( e.References#1/5 ) ( e.Idents#1/7 ) ( e.Externs#1/9 ) e.Names#1/3 ] e.Name#1/0
  if( ! refalrts::tvar_left( context[2], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[3] = 0;
  context[4] = 0;
  if( ! refalrts::adt_left( context[3], context[4], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[5] = 0;
  context[6] = 0;
  if( ! refalrts::brackets_left( context[5], context[6], context[3], context[4] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_left( context[7], context[8], context[3], context[4] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_left( context[9], context[10], context[3], context[4] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 5
  // closed e.Idents#1 as range 7
  // closed e.Externs#1 as range 9
  // closed e.Names#1 as range 3
  // closed e.Name#1 as range 0
  //0: e.Name#1
  //2: t.ErrorList#1
  //3: e.Names#1
  //5: e.References#1
  //7: e.Idents#1
  //9: e.Externs#1
  //22: e.Name#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], SymTable, "SymTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], PatchReferences, "PatchReferences" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[22], context[23], context[0], context[1]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[11], context[26] );
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_evar( res, context[3], context[4] );
  refalrts::link_brackets( context[20], context[25] );
  res = refalrts::splice_elem( res, context[25] );
  refalrts::link_brackets( context[21], context[24] );
  res = refalrts::splice_elem( res, context[24] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[20] );
  refalrts::link_brackets( context[18], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  refalrts::link_brackets( context[15], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_stvar( res, context[2] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddFunctionCall(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +47, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs_B#1/11 ( e.Name#1/15 ) e.Externs_E#1/17 ) e.Names#1/2 ] s.LnNum#1/10 e.Name#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    // closed e.References#1 as range 4
    // closed e.Idents#1 as range 6
    // closed e.Names#1 as range 2
    {refalrts::icsVarLeft, 0, 10, 0},
    // closed e.Name#1 as range 0
    {refalrts::icEPrepare, 0, 11, 8},
    {refalrts::icEStart, 0, 11, 8},
    {refalrts::icSave, 0, 17, 8},
    {refalrts::icBracketLeft, 0, 13, 17},
    {refalrts::iceRepeatLeft, 15, 0, 13},
    {refalrts::icEmpty, 0, 0, 13},
    // closed e.Externs_E#1 as range 8
    //0: e.Name#1
    //2: e.Names#1
    //4: e.References#1
    //6: e.Idents#1
    //10: s.LnNum#1
    //11: e.Externs_B#1
    //15: e.Name#1
    //17: e.Externs_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 19},
    {refalrts::icFunc, 0, 0, 20},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 29},
    {refalrts::icLinkBrackets, 19, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 25, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icOnFailGoTo, +49, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names_B#1/11 ( s.ScopeClass#1/17 e.Name#1/15 ) e.Names_E#1/18 ] s.LnNum#1/10 e.Name#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    // closed e.References#1 as range 4
    // closed e.Idents#1 as range 6
    // closed e.Externs#1 as range 8
    {refalrts::icsVarLeft, 0, 10, 0},
    // closed e.Name#1 as range 0
    {refalrts::icEPrepare, 0, 11, 2},
    {refalrts::icEStart, 0, 11, 2},
    {refalrts::icSave, 0, 18, 2},
    {refalrts::icBracketLeft, 0, 13, 18},
    {refalrts::iceRepeatRight, 15, 0, 13},
    // closed e.Names_E#1 as range 2
    {refalrts::icsVarLeft, 0, 17, 13},
    {refalrts::icEmpty, 0, 0, 13},
    //0: e.Name#1
    //4: e.References#1
    //6: e.Idents#1
    //8: e.Externs#1
    //10: s.LnNum#1
    //11: e.Names_B#1
    //15: e.Name#1
    //17: s.ScopeClass#1
    //18: e.Names_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 20},
    {refalrts::icFunc, 0, 0, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 30},
    {refalrts::icLinkBrackets, 20, 30, 0},
    {refalrts::icSpliceElem, 0, 0, 30},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icSpliceElem, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 17},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 11},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names#1/2 ] s.LnNum#1/10 e.Name#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    // closed e.References#1 as range 4
    // closed e.Idents#1 as range 6
    // closed e.Externs#1 as range 8
    // closed e.Names#1 as range 2
    {refalrts::icsVarLeft, 0, 10, 0},
    // closed e.Name#1 as range 0
    //0: e.Name#1
    //2: e.Names#1
    //4: e.References#1
    //6: e.Idents#1
    //8: e.Externs#1
    //10: s.LnNum#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 21},
    {refalrts::icLinkBrackets, 11, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icLinkBrackets, 17, 18, 0},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 13, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
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
    // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs_B#1/11 ( e.Name#1/15 ) e.Externs_E#1/17 ) e.Names#1/2 ] s.LnNum#1/10 e.Name#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
      continue;
    // closed e.References#1 as range 4
    // closed e.Idents#1 as range 6
    // closed e.Names#1 as range 2
    if( ! refalrts::svar_left( context[10], context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 0
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop();
    do {
      context[17] = context[8];
      context[18] = context[9];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_left( context[13], context[14], context[17], context[18] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[15], context[16], context[0], context[1], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      // closed e.Externs_E#1 as range 8
      //0: e.Name#1
      //2: e.Names#1
      //4: e.References#1
      //6: e.Idents#1
      //10: s.LnNum#1
      //11: e.Externs_B#1
      //15: e.Name#1
      //17: e.Externs_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[20], SymTable, "SymTable" ) )
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
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[29] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[19], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      refalrts::link_brackets( context[25], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::link_brackets( context[21], context[22] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[11], context[12], context[8], context[9] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    refalrts::move_left( context[0], context[1] );
    refalrts::move_left( context[0], context[1] );
    refalrts::move_right( context[0], context[1] );
    // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names_B#1/11 ( s.ScopeClass#1/17 e.Name#1/15 ) e.Names_E#1/18 ] s.LnNum#1/10 e.Name#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
      continue;
    // closed e.References#1 as range 4
    // closed e.Idents#1 as range 6
    // closed e.Externs#1 as range 8
    if( ! refalrts::svar_left( context[10], context[0], context[1] ) )
      continue;
    // closed e.Name#1 as range 0
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop();
    do {
      context[18] = context[2];
      context[19] = context[3];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_left( context[13], context[14], context[18], context[19] ) )
        continue;
      if( ! refalrts::repeated_evar_right( context[15], context[16], context[0], context[1], context[13], context[14] ) )
        continue;
      // closed e.Names_E#1 as range 2
      if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      //0: e.Name#1
      //4: e.References#1
      //6: e.Idents#1
      //8: e.Externs#1
      //10: s.LnNum#1
      //11: e.Names_B#1
      //15: e.Name#1
      //17: s.ScopeClass#1
      //18: e.Names_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[21], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[30] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[20], context[30] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::link_brackets( context[28], context[29] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_stvar( res, context[17] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[24], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[6], context[7] );
      res = refalrts::splice_elem( res, context[24] );
      refalrts::link_brackets( context[22], context[23] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_elem( res, context[20] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[11], context[12], context[2], context[3] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names#1/2 ] s.LnNum#1/10 e.Name#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 4
  // closed e.Idents#1 as range 6
  // closed e.Externs#1 as range 8
  // closed e.Names#1 as range 2
  if( ! refalrts::svar_left( context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 0
  //0: e.Name#1
  //2: e.Names#1
  //4: e.References#1
  //6: e.Idents#1
  //8: e.Externs#1
  //10: s.LnNum#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], SymTable, "SymTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[11], context[21] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[19], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_elem( res, context[19] );
  refalrts::link_brackets( context[17], context[18] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[13], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  refalrts::link_brackets( context[14], context[15] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icOnFailGoTo, +46, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [SymTable ( e.References#1/4 ) ( e.Idents_B#1/10 ( e.Name#1/14 ) e.Idents_E#1/16 ) ( e.Externs#1/8 ) e.Names#1/2 ] e.Name#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    // closed e.References#1 as range 4
    // closed e.Externs#1 as range 8
    // closed e.Names#1 as range 2
    // closed e.Name#1 as range 0
    {refalrts::icEPrepare, 0, 10, 6},
    {refalrts::icEStart, 0, 10, 6},
    {refalrts::icSave, 0, 16, 6},
    {refalrts::icBracketLeft, 0, 12, 16},
    {refalrts::iceRepeatLeft, 14, 0, 12},
    {refalrts::icEmpty, 0, 0, 12},
    // closed e.Idents_E#1 as range 6
    //0: e.Name#1
    //2: e.Names#1
    //4: e.References#1
    //8: e.Externs#1
    //10: e.Idents_B#1
    //14: e.Name#1
    //16: e.Idents_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 18},
    {refalrts::icFunc, 0, 0, 19},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 28},
    {refalrts::icLinkBrackets, 18, 28, 0},
    {refalrts::icSpliceElem, 0, 0, 28},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSpliceElem, 0, 0, 27},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 26},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icSpliceElem, 0, 0, 25},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icSpliceElem, 0, 0, 24},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 22},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSpliceElem, 0, 0, 21},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icReturnResult, 0, 0, 0},
    {refalrts::icInitB0, 0, 0, 0},
    // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names#1/2 ] e.Name#1/0
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    // closed e.References#1 as range 4
    // closed e.Idents#1 as range 6
    // closed e.Externs#1 as range 8
    // closed e.Names#1 as range 2
    // closed e.Name#1 as range 0
    //0: e.Name#1
    //2: e.Names#1
    //4: e.References#1
    //6: e.Idents#1
    //8: e.Externs#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenADT, 10},
    {refalrts::icFunc, 0, 0, 11},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 13},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 16},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icBracket, 0, refalrts::ibCloseADT, 20},
    {refalrts::icLinkBrackets, 10, 20, 0},
    {refalrts::icSpliceElem, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icSpliceElem, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 18},
    {refalrts::icLinkBrackets, 14, 17, 0},
    {refalrts::icSpliceElem, 0, 0, 17},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icSpliceElem, 0, 0, 16},
    {refalrts::icSpliceEVar, 0, 0, 0},
    {refalrts::icSpliceElem, 0, 0, 15},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
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
    // [SymTable ( e.References#1/4 ) ( e.Idents_B#1/10 ( e.Name#1/14 ) e.Idents_E#1/16 ) ( e.Externs#1/8 ) e.Names#1/2 ] e.Name#1/0
    context[2] = 0;
    context[3] = 0;
    if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
      continue;
    context[4] = 0;
    context[5] = 0;
    if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
      continue;
    context[6] = 0;
    context[7] = 0;
    if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
      continue;
    // closed e.References#1 as range 4
    // closed e.Externs#1 as range 8
    // closed e.Names#1 as range 2
    // closed e.Name#1 as range 0
    context[10] = 0;
    context[11] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[6];
      context[17] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_left( context[12], context[13], context[16], context[17] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[14], context[15], context[0], context[1], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      // closed e.Idents_E#1 as range 6
      //0: e.Name#1
      //2: e.Names#1
      //4: e.References#1
      //8: e.Externs#1
      //10: e.Idents_B#1
      //14: e.Name#1
      //16: e.Idents_E#1

      refalrts::reset_allocator();
      refalrts::Iter res = arg_begin;
      if( ! refalrts::alloc_open_adt( context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[19], SymTable, "SymTable" ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[24] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_adt( context[28] ) )
        return refalrts::cNoMemory;
      refalrts::link_brackets( context[18], context[28] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      refalrts::link_brackets( context[26], context[27] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_elem( res, context[26] );
      refalrts::link_brackets( context[22], context[25] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::link_brackets( context[23], context[24] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::link_brackets( context[20], context[21] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[4], context[5] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      refalrts::splice_to_freelist( arg_begin, arg_end );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[10], context[11], context[6], context[7] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  refalrts::move_left( context[0], context[1] );
  refalrts::move_left( context[0], context[1] );
  refalrts::move_right( context[0], context[1] );
  // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names#1/2 ] e.Name#1/0
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 4
  // closed e.Idents#1 as range 6
  // closed e.Externs#1 as range 8
  // closed e.Names#1 as range 2
  // closed e.Name#1 as range 0
  //0: e.Name#1
  //2: e.Names#1
  //4: e.References#1
  //6: e.Idents#1
  //8: e.Externs#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_adt( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], SymTable, "SymTable" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_adt( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[10], context[20] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::link_brackets( context[18], context[19] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_elem( res, context[18] );
  refalrts::link_brackets( context[14], context[17] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::link_brackets( context[15], context[16] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_elem( res, context[14] );
  refalrts::link_brackets( context[12], context[13] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ST_AddUnresolved_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" is not defined", 15},
    {"Function ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#2/5 ( s.LnNum#2/4 e.Name#2/2 )
    {refalrts::icBracketRight, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 4, 2},
    // closed e.Name#2 as range 2
    {refalrts::ictVarLeft, 0, 5, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Name#2
    //4: s.LnNum#2
    //5: t.ErrorList#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icFunc, 0, 0, 7},
    {refalrts::icString, 0, 1, 8},
    {refalrts::icString, 0, 0, 10},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceRange, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceRange, 0, 0, 8},
    {refalrts::icSpliceSTVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 7},
    {refalrts::icSpliceElem, 0, 0, 6},
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
  // t.ErrorList#2/5 ( s.LnNum#2/4 e.Name#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_right( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[4], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 2
  if( ! refalrts::tvar_left( context[5], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Name#2
  //4: s.LnNum#2
  //5: t.ErrorList#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], EL_AddErrorAt, "EL_AddErrorAt" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "Function ", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], " is not defined", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[6] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_stvar( res, context[4] );
  res = refalrts::splice_stvar( res, context[5] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddUnresolved(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ST_AddUnresolved_0, "lambda_ST_AddUnresolved_0" },
    { Reduce, "Reduce" },
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // t.ErrorList#1/10 [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names#1/2 ]
    {refalrts::icADTRight, 2, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    // closed e.References#1 as range 4
    // closed e.Idents#1 as range 6
    // closed e.Externs#1 as range 8
    // closed e.Names#1 as range 2
    {refalrts::ictVarLeft, 0, 10, 0},
    {refalrts::icEmpty, 0, 0, 0},
    //2: e.Names#1
    //4: e.References#1
    //6: e.Idents#1
    //8: e.Externs#1
    //10: t.ErrorList#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 11},
    {refalrts::icFunc, 0, 1, 12},
    {refalrts::icFunc, 0, 0, 13},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 14},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 14},
    {refalrts::icSpliceEVar, 0, 0, 4},
    {refalrts::icSpliceSTVar, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
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
  // t.ErrorList#1/10 [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names#1/2 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_right( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 4
  // closed e.Idents#1 as range 6
  // closed e.Externs#1 as range 8
  // closed e.Names#1 as range 2
  if( ! refalrts::tvar_left( context[10], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  //2: e.Names#1
  //4: e.References#1
  //6: e.Idents#1
  //8: e.Externs#1
  //10: t.ErrorList#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], Reduce, "Reduce" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], lambda_ST_AddUnresolved_0, "lambda_ST_AddUnresolved_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[11] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_stvar( res, context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ST_AllFunctions_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_GN_Entry<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // ( e.Name#2/2 )
    {refalrts::icBracketLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.Name#2 as range 2
    //2: e.Name#2
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icIdent, 0, 0, 5},
    {refalrts::icBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icLinkBrackets, 4, 6, 0},
    {refalrts::icSpliceElem, 0, 0, 6},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceElem, 0, 0, 5},
    {refalrts::icSpliceElem, 0, 0, 4},
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
  // ( e.Name#2/2 )
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::brackets_left( context[2], context[3], context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 2
  //2: e.Name#2

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_bracket( context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[5], & ident_GN_Entry<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[4], context[6] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_elem( res, context[4] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AllFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_ST_AllFunctions_0, "lambda_ST_AllFunctions_0" },
    { Map, "Map" },
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names#1/2 ]
    {refalrts::icADTLeft, 2, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.References#1 as range 4
    // closed e.Idents#1 as range 6
    // closed e.Externs#1 as range 8
    // closed e.Names#1 as range 2
    //2: e.Names#1
    //4: e.References#1
    //6: e.Idents#1
    //8: e.Externs#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icBracket, 0, refalrts::ibOpenCall, 10},
    {refalrts::icFunc, 0, 1, 11},
    {refalrts::icFunc, 0, 0, 12},
    {refalrts::icBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 10},
    {refalrts::icSpliceElem, 0, 0, 13},
    {refalrts::icSpliceEVar, 0, 0, 8},
    {refalrts::icSpliceElem, 0, 0, 12},
    {refalrts::icSpliceElem, 0, 0, 11},
    {refalrts::icSpliceElem, 0, 0, 10},
    {refalrts::icSpliceEVar, 0, 0, 2},
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
  // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names#1/2 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 4
  // closed e.Idents#1 as range 6
  // closed e.Externs#1 as range 8
  // closed e.Names#1 as range 2
  //2: e.Names#1
  //4: e.References#1
  //6: e.Idents#1
  //8: e.Externs#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], Map, "Map" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], lambda_ST_AllFunctions_0, "lambda_ST_AllFunctions_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AllIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names#1/2 ]
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.References#1 as range 4
    // closed e.Idents#1 as range 6
    // closed e.Externs#1 as range 8
    // closed e.Names#1 as range 2
    //2: e.Names#1
    //4: e.References#1
    //6: e.Idents#1
    //8: e.Externs#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 6},
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
  // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names#1/2 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 4
  // closed e.Idents#1 as range 6
  // closed e.Externs#1 as range 8
  // closed e.Names#1 as range 2
  //2: e.Names#1
  //4: e.References#1
  //6: e.Idents#1
  //8: e.Externs#1

  refalrts::reset_allocator();
  refalrts::Iter res = arg_begin;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::splice_to_freelist( arg_begin, arg_end );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    {refalrts::icInitB0, 0, 0, 0},
    // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names_B#1/10 ( s.ScopeClass#1/14 e.Name#1/12 ) e.Names_E#1/15 ]
    {refalrts::icADTLeft, 0, 2, 0},
    {refalrts::icBracketLeft, 0, 4, 2},
    {refalrts::icBracketLeft, 0, 6, 2},
    {refalrts::icBracketLeft, 0, 8, 2},
    {refalrts::icEmpty, 0, 0, 0},
    // closed e.References#1 as range 4
    // closed e.Idents#1 as range 6
    // closed e.Externs#1 as range 8
    {refalrts::icEPrepare, 0, 10, 2},
    {refalrts::icEStart, 0, 10, 2},
    {refalrts::icSave, 0, 15, 2},
    {refalrts::icBracketLeft, 0, 12, 15},
    // closed e.Names_E#1 as range 2
    {refalrts::icsVarLeft, 0, 14, 12},
    // closed e.Name#1 as range 12
    //4: e.References#1
    //6: e.Idents#1
    //8: e.Externs#1
    //10: e.Names_B#1
    //12: e.Name#1
    //14: s.ScopeClass#1
    //15: e.Names_E#1
    {refalrts::icEmptyResult, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 12},
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
  // [SymTable ( e.References#1/4 ) ( e.Idents#1/6 ) ( e.Externs#1/8 ) e.Names_B#1/10 ( s.ScopeClass#1/14 e.Name#1/12 ) e.Names_E#1/15 ]
  context[2] = 0;
  context[3] = 0;
  if( ! refalrts::adt_left( context[2], context[3], SymTable, context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  context[4] = 0;
  context[5] = 0;
  if( ! refalrts::brackets_left( context[4], context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  if( ! refalrts::brackets_left( context[6], context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_left( context[8], context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[0], context[1] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 4
  // closed e.Idents#1 as range 6
  // closed e.Externs#1 as range 8
  context[10] = 0;
  context[11] = 0;
  refalrts::start_e_loop();
  do {
    context[15] = context[2];
    context[16] = context[3];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_left( context[12], context[13], context[15], context[16] ) )
      continue;
    // closed e.Names_E#1 as range 2
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.Name#1 as range 12
    //4: e.References#1
    //6: e.Idents#1
    //8: e.Externs#1
    //10: e.Names_B#1
    //12: e.Name#1
    //14: s.ScopeClass#1
    //15: e.Names_E#1

    refalrts::reset_allocator();
    refalrts::Iter res = arg_begin;
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    refalrts::splice_to_freelist( arg_begin, arg_end );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[10], context[11], context[2], context[3] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}


//End of file
