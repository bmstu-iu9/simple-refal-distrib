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
    // </0 & ST_Create/4 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & SymTable/4 HalfReuse: (/1 } )/5 (/6 )/7 (/8 )/9 ]/10 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 5},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 9},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseADT, 10},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenADT, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 1},
    {refalrts::icLinkBrackets, 0, 10, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icLinkBrackets, 6, 7, 0},
    {refalrts::icLinkBrackets, 1, 5, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 10, 0},
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
  // </0 & ST_Create/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & SymTable/4 HalfReuse: (/1 } )/5 (/6 )/7 (/8 )/9 ]/10 Tile{ ]] }
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
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], SymTable, "SymTable" );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[0], context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::link_brackets( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_PatchReferences_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    //FAST GEN:(E )(S E )
    //GLOBAL GEN:(E )(S E )
    // </0 & lambda_PatchReferences_0/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    {refalrts::icsVarLeft, 0, 13, 9},
    // closed e.idxTBV#0 as range 9
    {refalrts::icOnFailGoTo, +7, 0, 0},
    //(E )(S E )
    // </0 & lambda_PatchReferences_0/4 (/7 e.Name#1/5 )/8 (/11 s.LnNum#2/13 e.Name#1/14 )/12 >/1
    // closed e.Name#1 as range 5
    {refalrts::icSave, 0, 16, 9},
    {refalrts::iceRepeatLeft, 14, 5, 16},
    {refalrts::icEmpty, 0, 0, 16},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_PatchReferences_0/4 (/7 e.Name#1/5 )/8 (/11 s.LnNum#2/13 e.Name#1/14 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )(S E )
    // </0 & lambda_PatchReferences_0/4 (/7 e.Name#1/5 )/8 (/11 s.LnNum#2/13 e.Name#2/9 )/12 >/1
    // closed e.Name#1 as range 5
    // closed e.Name#2 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_PatchReferences_0/4 (/7 e.Name#1/5 )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: s.LnNum#2/13 AsIs: e.Name#2/9 AsIs: )/12 } Tile{ ]] }
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
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
  //FAST GEN:(E )(S E )
  //GLOBAL GEN:(E )(S E )
  // </0 & lambda_PatchReferences_0/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
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
    //(E )(S E )
    // </0 & lambda_PatchReferences_0/4 (/7 e.Name#1/5 )/8 (/11 s.LnNum#2/13 e.Name#1/14 )/12 >/1
    // closed e.Name#1 as range 5
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::repeated_evar_left( context[14], context[15], context[5], context[6], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_PatchReferences_0/4 (/7 e.Name#1/5 )/8 (/11 s.LnNum#2/13 e.Name#1/14 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )(S E )
  // </0 & lambda_PatchReferences_0/4 (/7 e.Name#1/5 )/8 (/11 s.LnNum#2/13 e.Name#2/9 )/12 >/1
  // closed e.Name#1 as range 5
  // closed e.Name#2 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_PatchReferences_0/4 (/7 e.Name#1/5 )/8 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: s.LnNum#2/13 AsIs: e.Name#2/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
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
    { Map, "Map" },
    { lambda_PatchReferences_0, "lambda_PatchReferences_0" },
    { refalrts::create_closure, "refalrts::create_closure" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & PatchReferences/4 (/7 e.References#1/5 )/8 e.Name#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    // closed e.References#1 as range 5
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Map/7 } </9 & CreateClosure /10 & lambda_PatchReferences_0/11 Tile{ HalfReuse: (/8 AsIs: e.Name#1/2 HalfReuse: )/1 } >/12 Tile{ AsIs: e.References#1/5 } >/13 )/14 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 9},
    {refalrts::icAllocFunc, 0, 2, 10},
    {refalrts::icAllocFunc, 0, 1, 11},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 12},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 14},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 14, 0},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 12},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icLinkBrackets, 8, 1, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 14, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 12, 12, 0},
    {refalrts::icSpliceTile, 8, 1, 0},
    {refalrts::icSpliceTile, 9, 11, 0},
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
  // </0 & PatchReferences/4 (/7 e.References#1/5 )/8 e.Name#1/2 >/1
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
  // closed e.References#1 as range 5
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Map/7 } </9 & CreateClosure /10 & lambda_PatchReferences_0/11 Tile{ HalfReuse: (/8 AsIs: e.Name#1/2 HalfReuse: )/1 } >/12 Tile{ AsIs: e.References#1/5 } >/13 )/14 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], refalrts::create_closure, "refalrts::create_closure" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], lambda_PatchReferences_0, "lambda_PatchReferences_0" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], Map, "Map" );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[14] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PatchReferences, "PatchReferences" },
    { EL_AddErrorAt, "EL_AddErrorAt" },
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" already defined", 16},
    {"Function ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T [SymTable (E )(E )(E )E ]S S E 
    //GLOBAL GEN:T [SymTable (E )(E )(E )E ]S S E 
    // </0 & ST_AddDefined/4 t.idx#0/5 [/9SymTable/10 (/14 e.idxVDB#0/12 )/15 (/18 e.idxVDTB#0/16 )/19 (/22 e.idxVDTTB#0/20 )/23 e.idxVDTTT#0/7 ]/11 s.idxVt#0/24 s.idxVtV#0/25 e.idxVtVV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icADTLeftSave, 2, 7, 2},
    {refalrts::icBracketLeftSave, 0, 12, 7},
    {refalrts::icBracketLeftSave, 0, 16, 7},
    {refalrts::icBracketLeftSave, 0, 20, 7},
    // closed e.idxVDB#0 as range 12
    // closed e.idxVDTB#0 as range 16
    // closed e.idxVDTTB#0 as range 20
    // closed e.idxVDTTT#0 as range 7
    {refalrts::icsVarLeft, 0, 24, 2},
    {refalrts::icsVarLeft, 0, 25, 2},
    // closed e.idxVtVV#0 as range 2
    {refalrts::icOnFailGoTo, +28, 0, 0},
    //T [SymTable (E )(E )(E )E ]S S E 
    // </0 & ST_AddDefined/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names_B#1/26 (/30 s.AnyScopeClass#1/34 e.Name#1/32 )/31 e.Names_E#1/7 ]/11 s.ScopeClass#1/24 s.LnNum#1/25 e.Name#1/2 >/1
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Externs#1 as range 20
    // closed e.Name#1 as range 2
    {refalrts::icSave, 0, 39, 7},
    {refalrts::icEPrepare, 0, 26, 39},
    {refalrts::icEStart, 0, 26, 39},
    {refalrts::icSave, 0, 41, 39},
    {refalrts::icBracketLeftSave, 0, 28, 41},
    {refalrts::iceRepeatRight, 32, 2, 28},
    // closed e.Names_E#1 as range 41(7)
    {refalrts::icsVarLeft, 0, 34, 28},
    {refalrts::icEmpty, 0, 0, 28},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ScopeClass#1/24 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/25 }"Function "/35 Tile{ AsIs: e.Name#1/2 }" already defined"/37 Tile{ AsIs: >/1 } Tile{ AsIs: [/9 AsIs: & SymTable/10 AsIs: (/14 AsIs: e.References#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs#1/20 AsIs: )/23 AsIs: e.Names_B#1/26 AsIs: (/30 AsIs: s.AnyScopeClass#1/34 AsIs: e.Name#1/32 AsIs: )/31 AsIs: e.Names_E#1/41(7) AsIs: ]/11 } Tile{ ]] }
    {refalrts::icAllocString, 0, 1, 35},
    {refalrts::icAllocString, 0, 0, 37},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icLinkBrackets, 9, 11, 0},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 9, 11, 0},
    {refalrts::icSpliceTile, 1, 1, 0},
    {refalrts::icSpliceTile, 37, 38, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 35, 36, 0},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icTrash, 0, 0, 6},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    //T [SymTable (E )(E )(E )E ]S S E 
    // </0 & ST_AddDefined/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs_B#1/26 (/30 e.Name#1/32 )/31 e.Externs_E#1/20 )/23 e.Names#1/7 ]/11 s.ScopeClass#1/24 s.LnNum#1/25 e.Name#1/2 >/1
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Names#1 as range 7
    // closed e.Name#1 as range 2
    {refalrts::icSave, 0, 39, 20},
    {refalrts::icEPrepare, 0, 26, 39},
    {refalrts::icEStart, 0, 26, 39},
    {refalrts::icSave, 0, 41, 39},
    {refalrts::icBracketLeftSave, 0, 28, 41},
    {refalrts::iceRepeatLeft, 32, 2, 28},
    {refalrts::icEmpty, 0, 0, 28},
    // closed e.Externs_E#1 as range 41(20)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/25 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 HalfReuse: </14 } Tile{ Reuse: & PatchReferences/4 } Tile{ AsIs: (/30 } Tile{ AsIs: e.References#1/12 } Tile{ AsIs: )/31 } Tile{ AsIs: e.Name#1/32 } Tile{ HalfReuse: >/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 } Tile{ AsIs: e.Externs_B#1/26 } Tile{ AsIs: e.Externs_E#1/41(20) } Tile{ AsIs: )/23 AsIs: e.Names#1/7 HalfReuse: (/11 AsIs: s.ScopeClass#1/24 } Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: ]/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseADT, 1},
    {refalrts::icLinkBrackets, 9, 1, 0},
    {refalrts::icLinkBrackets, 11, 0, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceEVar, 0, 0, 26},
    {refalrts::icSpliceTile, 15, 22, 0},
    {refalrts::icSpliceEVar, 0, 0, 32},
    {refalrts::icSpliceTile, 31, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceTile, 30, 30, 0},
    {refalrts::icSpliceTile, 4, 4, 0},
    {refalrts::icSpliceTile, 5, 14, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T [SymTable (E )(E )(E )E ]S S E 
    // </0 & ST_AddDefined/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names#1/7 ]/11 s.ScopeClass#1/24 s.LnNum#1/25 e.Name#1/2 >/1
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Externs#1 as range 20
    // closed e.Names#1 as range 7
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/25 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 HalfReuse: </14 } Tile{ HalfReuse: & PatchReferences/0 HalfReuse: (/4 } Tile{ AsIs: e.References#1/12 } )/26 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: >/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs#1/20 AsIs: )/23 AsIs: e.Names#1/7 HalfReuse: (/11 AsIs: s.ScopeClass#1/24 } e.Name#1/2/27 )/29 Tile{ HalfReuse: ]/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icCopyEVar, 27, 2, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icReinitFunc, 0, 0, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseADT, 1},
    {refalrts::icLinkBrackets, 9, 1, 0},
    {refalrts::icLinkBrackets, 11, 29, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 4, 26, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceTile, 15, 24, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 5, 14, 0},
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
  //FAST GEN:T [SymTable (E )(E )(E )E ]S S E 
  //GLOBAL GEN:T [SymTable (E )(E )(E )E ]S S E 
  // </0 & ST_AddDefined/4 t.idx#0/5 [/9SymTable/10 (/14 e.idxVDB#0/12 )/15 (/18 e.idxVDTB#0/16 )/19 (/22 e.idxVDTTB#0/20 )/23 e.idxVDTTT#0/7 ]/11 s.idxVt#0/24 s.idxVtV#0/25 e.idxVtVV#0/2 >/1
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
  context[9] = refalrts::adt_left( context[7], context[8], SymTable, context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[9], context[10], context[11]);
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[7], context[8] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[7], context[8] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.idxVDB#0 as range 12
  // closed e.idxVDTB#0 as range 16
  // closed e.idxVDTTB#0 as range 20
  // closed e.idxVDTTT#0 as range 7
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVtVV#0 as range 2
  do {
    refalrts::start_sentence();
    //T [SymTable (E )(E )(E )E ]S S E 
    // </0 & ST_AddDefined/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names_B#1/26 (/30 s.AnyScopeClass#1/34 e.Name#1/32 )/31 e.Names_E#1/7 ]/11 s.ScopeClass#1/24 s.LnNum#1/25 e.Name#1/2 >/1
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Externs#1 as range 20
    // closed e.Name#1 as range 2
    context[39] = context[7];
    context[40] = context[8];
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop();
    do {
      context[41] = context[39];
      context[42] = context[40];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[41], context[42] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::repeated_evar_right( context[32], context[33], context[2], context[3], context[28], context[29] ) )
        continue;
      // closed e.Names_E#1 as range 41(7)
      if( ! refalrts::svar_left( context[34], context[28], context[29] ) )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ScopeClass#1/24 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/25 }"Function "/35 Tile{ AsIs: e.Name#1/2 }" already defined"/37 Tile{ AsIs: >/1 } Tile{ AsIs: [/9 AsIs: & SymTable/10 AsIs: (/14 AsIs: e.References#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs#1/20 AsIs: )/23 AsIs: e.Names_B#1/26 AsIs: (/30 AsIs: s.AnyScopeClass#1/34 AsIs: e.Name#1/32 AsIs: )/31 AsIs: e.Names_E#1/41(7) AsIs: ]/11 } Tile{ ]] }
      if( ! refalrts::alloc_chars( context[35], context[36], "Function ", 9 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[37], context[38], " already defined", 16 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
      refalrts::link_brackets( context[9], context[11] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[11] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[6], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[26], context[27], context[39], context[40] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T [SymTable (E )(E )(E )E ]S S E 
    // </0 & ST_AddDefined/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs_B#1/26 (/30 e.Name#1/32 )/31 e.Externs_E#1/20 )/23 e.Names#1/7 ]/11 s.ScopeClass#1/24 s.LnNum#1/25 e.Name#1/2 >/1
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Names#1 as range 7
    // closed e.Name#1 as range 2
    context[39] = context[20];
    context[40] = context[21];
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop();
    do {
      context[41] = context[39];
      context[42] = context[40];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[41], context[42] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::repeated_evar_left( context[32], context[33], context[2], context[3], context[28], context[29] ) )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;
      // closed e.Externs_E#1 as range 41(20)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/25 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 HalfReuse: </14 } Tile{ Reuse: & PatchReferences/4 } Tile{ AsIs: (/30 } Tile{ AsIs: e.References#1/12 } Tile{ AsIs: )/31 } Tile{ AsIs: e.Name#1/32 } Tile{ HalfReuse: >/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 } Tile{ AsIs: e.Externs_B#1/26 } Tile{ AsIs: e.Externs_E#1/41(20) } Tile{ AsIs: )/23 AsIs: e.Names#1/7 HalfReuse: (/11 AsIs: s.ScopeClass#1/24 } Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: ]/1 ]] }
      refalrts::reinit_open_call( context[14] );
      refalrts::update_name( context[4], PatchReferences, "PatchReferences" );
      refalrts::reinit_close_call( context[15] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::reinit_close_bracket( context[0] );
      refalrts::reinit_close_adt( context[1] );
      refalrts::link_brackets( context[9], context[1] );
      refalrts::link_brackets( context[11], context[0] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::push_stack( context[15] );
      refalrts::push_stack( context[14] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[15], context[22] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[5], context[14] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[26], context[27], context[39], context[40] ) );
  } while ( 0 );

  //T [SymTable (E )(E )(E )E ]S S E 
  // </0 & ST_AddDefined/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names#1/7 ]/11 s.ScopeClass#1/24 s.LnNum#1/25 e.Name#1/2 >/1
  // closed e.References#1 as range 12
  // closed e.Idents#1 as range 16
  // closed e.Externs#1 as range 20
  // closed e.Names#1 as range 7
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/25 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 HalfReuse: </14 } Tile{ HalfReuse: & PatchReferences/0 HalfReuse: (/4 } Tile{ AsIs: e.References#1/12 } )/26 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: >/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs#1/20 AsIs: )/23 AsIs: e.Names#1/7 HalfReuse: (/11 AsIs: s.ScopeClass#1/24 } e.Name#1/2/27 )/29 Tile{ HalfReuse: ]/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[14] );
  refalrts::reinit_name( context[0], PatchReferences, "PatchReferences" );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_call( context[15] );
  refalrts::reinit_open_bracket( context[11] );
  refalrts::reinit_close_adt( context[1] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::link_brackets( context[11], context[29] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[4], context[26] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[15], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[14] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PatchReferences, "PatchReferences" },
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:T [SymTable (E )(E )(E )E ]E 
    //GLOBAL GEN:T [SymTable (E )(E )(E )E ]E 
    // </0 & ST_AddExtern/4 t.idx#0/5 [/9SymTable/10 (/14 e.idxVDB#0/12 )/15 (/18 e.idxVDTB#0/16 )/19 (/22 e.idxVDTTB#0/20 )/23 e.idxVDTTT#0/7 ]/11 e.idxVt#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::ictVarLeftSave, 0, 5, 2},
    {refalrts::icADTLeftSave, 1, 7, 2},
    {refalrts::icBracketLeftSave, 0, 12, 7},
    {refalrts::icBracketLeftSave, 0, 16, 7},
    {refalrts::icBracketLeftSave, 0, 20, 7},
    // closed e.idxVDB#0 as range 12
    // closed e.idxVDTB#0 as range 16
    // closed e.idxVDTTB#0 as range 20
    // closed e.idxVDTTT#0 as range 7
    // closed e.idxVt#0 as range 2
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //T [SymTable (E )(E )(E )E ]E 
    // </0 & ST_AddExtern/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs_B#1/24 (/28 e.Name#1/30 )/29 e.Externs_E#1/20 )/23 e.Names#1/7 ]/11 e.Name#1/2 >/1
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Names#1 as range 7
    // closed e.Name#1 as range 2
    {refalrts::icSave, 0, 33, 20},
    {refalrts::icEPrepare, 0, 24, 33},
    {refalrts::icEStart, 0, 24, 33},
    {refalrts::icSave, 0, 35, 33},
    {refalrts::icBracketLeftSave, 0, 26, 35},
    {refalrts::iceRepeatLeft, 30, 2, 26},
    {refalrts::icEmpty, 0, 0, 26},
    // closed e.Externs_E#1 as range 35(20)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ST_AddExtern/4 {REMOVED TILE}  e.Name#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 AsIs: (/14 AsIs: e.References#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs_B#1/24 AsIs: (/28 AsIs: e.Name#1/30 AsIs: )/29 AsIs: e.Externs_E#1/35(20) AsIs: )/23 AsIs: e.Names#1/7 AsIs: ]/11 } Tile{ ]] }
    {refalrts::icLinkBrackets, 9, 11, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    //T [SymTable (E )(E )(E )E ]E 
    // </0 & ST_AddExtern/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names_B#1/24 (/28 s.ScopeClass#1/32 e.Name#1/30 )/29 e.Names_E#1/7 ]/11 e.Name#1/2 >/1
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Externs#1 as range 20
    // closed e.Name#1 as range 2
    {refalrts::icSave, 0, 33, 7},
    {refalrts::icEPrepare, 0, 24, 33},
    {refalrts::icEStart, 0, 24, 33},
    {refalrts::icSave, 0, 35, 33},
    {refalrts::icBracketLeftSave, 0, 26, 35},
    {refalrts::iceRepeatRight, 30, 2, 26},
    // closed e.Names_E#1 as range 35(7)
    {refalrts::icsVarLeft, 0, 32, 26},
    {refalrts::icEmpty, 0, 0, 26},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ST_AddExtern/4 {REMOVED TILE}  e.Name#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 AsIs: (/14 AsIs: e.References#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs#1/20 AsIs: )/23 AsIs: e.Names_B#1/24 AsIs: (/28 AsIs: s.ScopeClass#1/32 AsIs: e.Name#1/30 AsIs: )/29 AsIs: e.Names_E#1/35(7) AsIs: ]/11 } Tile{ ]] }
    {refalrts::icLinkBrackets, 9, 11, 0},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icLinkBrackets, 14, 15, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 11, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //T [SymTable (E )(E )(E )E ]E 
    // </0 & ST_AddExtern/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names#1/7 ]/11 e.Name#1/2 >/1
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Externs#1 as range 20
    // closed e.Names#1 as range 7
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 HalfReuse: </14 } Tile{ HalfReuse: & PatchReferences/0 HalfReuse: (/4 } Tile{ AsIs: e.References#1/12 } Tile{ HalfReuse: )/11 } Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: >/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs#1/20 HalfReuse: (/23 } e.Name#1/2/24 )/26 )/27 Tile{ AsIs: e.Names#1/7 } Tile{ HalfReuse: ]/1 ]] }
    {refalrts::icCopyEVar, 24, 2, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icReinitFunc, 0, 0, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseADT, 1},
    {refalrts::icLinkBrackets, 9, 1, 0},
    {refalrts::icLinkBrackets, 22, 27, 0},
    {refalrts::icLinkBrackets, 23, 26, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 4, 11, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 7},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icSpliceTile, 24, 25, 0},
    {refalrts::icSpliceTile, 15, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 12},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 5, 14, 0},
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
  //FAST GEN:T [SymTable (E )(E )(E )E ]E 
  //GLOBAL GEN:T [SymTable (E )(E )(E )E ]E 
  // </0 & ST_AddExtern/4 t.idx#0/5 [/9SymTable/10 (/14 e.idxVDB#0/12 )/15 (/18 e.idxVDTB#0/16 )/19 (/22 e.idxVDTTB#0/20 )/23 e.idxVDTTT#0/7 ]/11 e.idxVt#0/2 >/1
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
  context[9] = refalrts::adt_left( context[7], context[8], SymTable, context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[9], context[10], context[11]);
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[7], context[8] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[7], context[8] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.idxVDB#0 as range 12
  // closed e.idxVDTB#0 as range 16
  // closed e.idxVDTTB#0 as range 20
  // closed e.idxVDTTT#0 as range 7
  // closed e.idxVt#0 as range 2
  do {
    refalrts::start_sentence();
    //T [SymTable (E )(E )(E )E ]E 
    // </0 & ST_AddExtern/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs_B#1/24 (/28 e.Name#1/30 )/29 e.Externs_E#1/20 )/23 e.Names#1/7 ]/11 e.Name#1/2 >/1
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Names#1 as range 7
    // closed e.Name#1 as range 2
    context[33] = context[20];
    context[34] = context[21];
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop();
    do {
      context[35] = context[33];
      context[36] = context[34];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[35], context[36] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      if( ! refalrts::repeated_evar_left( context[30], context[31], context[2], context[3], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      // closed e.Externs_E#1 as range 35(20)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & ST_AddExtern/4 {REMOVED TILE}  e.Name#1/2 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 AsIs: (/14 AsIs: e.References#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs_B#1/24 AsIs: (/28 AsIs: e.Name#1/30 AsIs: )/29 AsIs: e.Externs_E#1/35(20) AsIs: )/23 AsIs: e.Names#1/7 AsIs: ]/11 } Tile{ ]] }
      refalrts::link_brackets( context[9], context[11] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::link_brackets( context[28], context[29] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[11] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[24], context[25], context[33], context[34] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //T [SymTable (E )(E )(E )E ]E 
    // </0 & ST_AddExtern/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names_B#1/24 (/28 s.ScopeClass#1/32 e.Name#1/30 )/29 e.Names_E#1/7 ]/11 e.Name#1/2 >/1
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Externs#1 as range 20
    // closed e.Name#1 as range 2
    context[33] = context[7];
    context[34] = context[8];
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop();
    do {
      context[35] = context[33];
      context[36] = context[34];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[35], context[36] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      if( ! refalrts::repeated_evar_right( context[30], context[31], context[2], context[3], context[26], context[27] ) )
        continue;
      // closed e.Names_E#1 as range 35(7)
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & ST_AddExtern/4 {REMOVED TILE}  e.Name#1/2 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 AsIs: (/14 AsIs: e.References#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs#1/20 AsIs: )/23 AsIs: e.Names_B#1/24 AsIs: (/28 AsIs: s.ScopeClass#1/32 AsIs: e.Name#1/30 AsIs: )/29 AsIs: e.Names_E#1/35(7) AsIs: ]/11 } Tile{ ]] }
      refalrts::link_brackets( context[9], context[11] );
      refalrts::link_brackets( context[28], context[29] );
      refalrts::link_brackets( context[22], context[23] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[11] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[24], context[25], context[33], context[34] ) );
  } while ( 0 );

  //T [SymTable (E )(E )(E )E ]E 
  // </0 & ST_AddExtern/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names#1/7 ]/11 e.Name#1/2 >/1
  // closed e.References#1 as range 12
  // closed e.Idents#1 as range 16
  // closed e.Externs#1 as range 20
  // closed e.Names#1 as range 7
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 HalfReuse: </14 } Tile{ HalfReuse: & PatchReferences/0 HalfReuse: (/4 } Tile{ AsIs: e.References#1/12 } Tile{ HalfReuse: )/11 } Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: >/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs#1/20 HalfReuse: (/23 } e.Name#1/2/24 )/26 )/27 Tile{ AsIs: e.Names#1/7 } Tile{ HalfReuse: ]/1 ]] }
  if (! refalrts::copy_evar(context[24], context[25], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[14] );
  refalrts::reinit_name( context[0], PatchReferences, "PatchReferences" );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[11] );
  refalrts::reinit_close_call( context[15] );
  refalrts::reinit_open_bracket( context[23] );
  refalrts::reinit_close_adt( context[1] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::link_brackets( context[22], context[27] );
  refalrts::link_brackets( context[23], context[26] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[4], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[15], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[14] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddFunctionCall(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:[SymTable (E )(E )(E )E ]S E 
    //GLOBAL GEN:[SymTable (E )(E )(E )E ]S E 
    // </0 & ST_AddFunctionCall/4 [/7SymTable/8 (/12 e.idxDB#0/10 )/13 (/16 e.idxDTB#0/14 )/17 (/20 e.idxDTTB#0/18 )/21 e.idxDTTT#0/5 ]/9 s.idxt#0/22 e.idxtV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icADTLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 10, 5},
    {refalrts::icBracketLeftSave, 0, 14, 5},
    {refalrts::icBracketLeftSave, 0, 18, 5},
    // closed e.idxDB#0 as range 10
    // closed e.idxDTB#0 as range 14
    // closed e.idxDTTB#0 as range 18
    // closed e.idxDTTT#0 as range 5
    {refalrts::icsVarLeft, 0, 22, 2},
    // closed e.idxtV#0 as range 2
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //[SymTable (E )(E )(E )E ]S E 
    // </0 & ST_AddFunctionCall/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs_B#1/23 (/27 e.Name#1/29 )/28 e.Externs_E#1/18 )/21 e.Names#1/5 ]/9 s.LnNum#1/22 e.Name#1/2 >/1
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Names#1 as range 5
    // closed e.Name#1 as range 2
    {refalrts::icSave, 0, 32, 18},
    {refalrts::icEPrepare, 0, 23, 32},
    {refalrts::icEStart, 0, 23, 32},
    {refalrts::icSave, 0, 34, 32},
    {refalrts::icBracketLeftSave, 0, 25, 34},
    {refalrts::iceRepeatLeft, 29, 2, 25},
    {refalrts::icEmpty, 0, 0, 25},
    // closed e.Externs_E#1 as range 34(18)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ST_AddFunctionCall/4 {REMOVED TILE}  s.LnNum#1/22 e.Name#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 AsIs: e.References#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Idents#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Externs_B#1/23 AsIs: (/27 AsIs: e.Name#1/29 AsIs: )/28 AsIs: e.Externs_E#1/34(18) AsIs: )/21 AsIs: e.Names#1/5 AsIs: ]/9 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 9, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    //[SymTable (E )(E )(E )E ]S E 
    // </0 & ST_AddFunctionCall/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names_B#1/23 (/27 s.ScopeClass#1/31 e.Name#1/29 )/28 e.Names_E#1/5 ]/9 s.LnNum#1/22 e.Name#1/2 >/1
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Externs#1 as range 18
    // closed e.Name#1 as range 2
    {refalrts::icSave, 0, 32, 5},
    {refalrts::icEPrepare, 0, 23, 32},
    {refalrts::icEStart, 0, 23, 32},
    {refalrts::icSave, 0, 34, 32},
    {refalrts::icBracketLeftSave, 0, 25, 34},
    {refalrts::iceRepeatRight, 29, 2, 25},
    // closed e.Names_E#1 as range 34(5)
    {refalrts::icsVarLeft, 0, 31, 25},
    {refalrts::icEmpty, 0, 0, 25},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ST_AddFunctionCall/4 {REMOVED TILE}  s.LnNum#1/22 e.Name#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 AsIs: e.References#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Idents#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Externs#1/18 AsIs: )/21 AsIs: e.Names_B#1/23 AsIs: (/27 AsIs: s.ScopeClass#1/31 AsIs: e.Name#1/29 AsIs: )/28 AsIs: e.Names_E#1/34(5) AsIs: ]/9 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 9, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //[SymTable (E )(E )(E )E ]S E 
    // </0 & ST_AddFunctionCall/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 s.LnNum#1/22 e.Name#1/2 >/1
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Externs#1 as range 18
    // closed e.Names#1 as range 5
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & ST_AddFunctionCall/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 } Tile{ AsIs: e.References#1/10 } Tile{ HalfReuse: (/0 } Tile{ AsIs: s.LnNum#1/22 AsIs: e.Name#1/2 HalfReuse: )/1 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Idents#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Externs#1/18 AsIs: )/21 AsIs: e.Names#1/5 AsIs: ]/9 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 9, 0},
    {refalrts::icSpliceTile, 22, 1, 0},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 7, 12, 0},
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
  //FAST GEN:[SymTable (E )(E )(E )E ]S E 
  //GLOBAL GEN:[SymTable (E )(E )(E )E ]S E 
  // </0 & ST_AddFunctionCall/4 [/7SymTable/8 (/12 e.idxDB#0/10 )/13 (/16 e.idxDTB#0/14 )/17 (/20 e.idxDTTB#0/18 )/21 e.idxDTTT#0/5 ]/9 s.idxt#0/22 e.idxtV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], SymTable, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.idxDB#0 as range 10
  // closed e.idxDTB#0 as range 14
  // closed e.idxDTTB#0 as range 18
  // closed e.idxDTTT#0 as range 5
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxtV#0 as range 2
  do {
    refalrts::start_sentence();
    //[SymTable (E )(E )(E )E ]S E 
    // </0 & ST_AddFunctionCall/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs_B#1/23 (/27 e.Name#1/29 )/28 e.Externs_E#1/18 )/21 e.Names#1/5 ]/9 s.LnNum#1/22 e.Name#1/2 >/1
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Names#1 as range 5
    // closed e.Name#1 as range 2
    context[32] = context[18];
    context[33] = context[19];
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop();
    do {
      context[34] = context[32];
      context[35] = context[33];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[34], context[35] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      if( ! refalrts::repeated_evar_left( context[29], context[30], context[2], context[3], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      // closed e.Externs_E#1 as range 34(18)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & ST_AddFunctionCall/4 {REMOVED TILE}  s.LnNum#1/22 e.Name#1/2 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 AsIs: e.References#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Idents#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Externs_B#1/23 AsIs: (/27 AsIs: e.Name#1/29 AsIs: )/28 AsIs: e.Externs_E#1/34(18) AsIs: )/21 AsIs: e.Names#1/5 AsIs: ]/9 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[9] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[23], context[24], context[32], context[33] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //[SymTable (E )(E )(E )E ]S E 
    // </0 & ST_AddFunctionCall/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names_B#1/23 (/27 s.ScopeClass#1/31 e.Name#1/29 )/28 e.Names_E#1/5 ]/9 s.LnNum#1/22 e.Name#1/2 >/1
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Externs#1 as range 18
    // closed e.Name#1 as range 2
    context[32] = context[5];
    context[33] = context[6];
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop();
    do {
      context[34] = context[32];
      context[35] = context[33];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[34], context[35] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      if( ! refalrts::repeated_evar_right( context[29], context[30], context[2], context[3], context[25], context[26] ) )
        continue;
      // closed e.Names_E#1 as range 34(5)
      if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & ST_AddFunctionCall/4 {REMOVED TILE}  s.LnNum#1/22 e.Name#1/2 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 AsIs: e.References#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Idents#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Externs#1/18 AsIs: )/21 AsIs: e.Names_B#1/23 AsIs: (/27 AsIs: s.ScopeClass#1/31 AsIs: e.Name#1/29 AsIs: )/28 AsIs: e.Names_E#1/34(5) AsIs: ]/9 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[9] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[23], context[24], context[32], context[33] ) );
  } while ( 0 );

  //[SymTable (E )(E )(E )E ]S E 
  // </0 & ST_AddFunctionCall/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 s.LnNum#1/22 e.Name#1/2 >/1
  // closed e.References#1 as range 10
  // closed e.Idents#1 as range 14
  // closed e.Externs#1 as range 18
  // closed e.Names#1 as range 5
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  & ST_AddFunctionCall/4 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 } Tile{ AsIs: e.References#1/10 } Tile{ HalfReuse: (/0 } Tile{ AsIs: s.LnNum#1/22 AsIs: e.Name#1/2 HalfReuse: )/1 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Idents#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Externs#1/18 AsIs: )/21 AsIs: e.Names#1/5 AsIs: ]/9 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[9] );
  res = refalrts::splice_evar( res, context[22], context[1] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:[SymTable (E )(E )(E )E ]E 
    //GLOBAL GEN:[SymTable (E )(E )(E )E ]E 
    // </0 & ST_AddIdent/4 [/7SymTable/8 (/12 e.idxDB#0/10 )/13 (/16 e.idxDTB#0/14 )/17 (/20 e.idxDTTB#0/18 )/21 e.idxDTTT#0/5 ]/9 e.idxt#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icADTLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 10, 5},
    {refalrts::icBracketLeftSave, 0, 14, 5},
    {refalrts::icBracketLeftSave, 0, 18, 5},
    // closed e.idxDB#0 as range 10
    // closed e.idxDTB#0 as range 14
    // closed e.idxDTTB#0 as range 18
    // closed e.idxDTTT#0 as range 5
    // closed e.idxt#0 as range 2
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //[SymTable (E )(E )(E )E ]E 
    // </0 & ST_AddIdent/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents_B#1/22 (/26 e.Name#1/28 )/27 e.Idents_E#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 e.Name#1/2 >/1
    // closed e.References#1 as range 10
    // closed e.Externs#1 as range 18
    // closed e.Names#1 as range 5
    // closed e.Name#1 as range 2
    {refalrts::icSave, 0, 30, 14},
    {refalrts::icEPrepare, 0, 22, 30},
    {refalrts::icEStart, 0, 22, 30},
    {refalrts::icSave, 0, 32, 30},
    {refalrts::icBracketLeftSave, 0, 24, 32},
    {refalrts::iceRepeatLeft, 28, 2, 24},
    {refalrts::icEmpty, 0, 0, 24},
    // closed e.Idents_E#1 as range 32(14)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ST_AddIdent/4 {REMOVED TILE}  e.Name#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 AsIs: e.References#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Idents_B#1/22 AsIs: (/26 AsIs: e.Name#1/28 AsIs: )/27 AsIs: e.Idents_E#1/32(14) AsIs: )/17 AsIs: (/20 AsIs: e.Externs#1/18 AsIs: )/21 AsIs: e.Names#1/5 AsIs: ]/9 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 9, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //[SymTable (E )(E )(E )E ]E 
    // </0 & ST_AddIdent/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 e.Name#1/2 >/1
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Externs#1 as range 18
    // closed e.Names#1 as range 5
    // closed e.Name#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 AsIs: e.References#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Idents#1/14 HalfReuse: (/17 } Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: (/20 AsIs: e.Externs#1/18 AsIs: )/21 AsIs: e.Names#1/5 AsIs: ]/9 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 4},
    {refalrts::icLinkBrackets, 7, 9, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icLinkBrackets, 16, 4, 0},
    {refalrts::icLinkBrackets, 17, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 9, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 7, 17, 0},
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
  //FAST GEN:[SymTable (E )(E )(E )E ]E 
  //GLOBAL GEN:[SymTable (E )(E )(E )E ]E 
  // </0 & ST_AddIdent/4 [/7SymTable/8 (/12 e.idxDB#0/10 )/13 (/16 e.idxDTB#0/14 )/17 (/20 e.idxDTTB#0/18 )/21 e.idxDTTT#0/5 ]/9 e.idxt#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], SymTable, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.idxDB#0 as range 10
  // closed e.idxDTB#0 as range 14
  // closed e.idxDTTB#0 as range 18
  // closed e.idxDTTT#0 as range 5
  // closed e.idxt#0 as range 2
  do {
    refalrts::start_sentence();
    //[SymTable (E )(E )(E )E ]E 
    // </0 & ST_AddIdent/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents_B#1/22 (/26 e.Name#1/28 )/27 e.Idents_E#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 e.Name#1/2 >/1
    // closed e.References#1 as range 10
    // closed e.Externs#1 as range 18
    // closed e.Names#1 as range 5
    // closed e.Name#1 as range 2
    context[30] = context[14];
    context[31] = context[15];
    context[22] = 0;
    context[23] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[30];
      context[33] = context[31];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[32], context[33] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_evar_left( context[28], context[29], context[2], context[3], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.Idents_E#1 as range 32(14)

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & ST_AddIdent/4 {REMOVED TILE}  e.Name#1/2 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 AsIs: e.References#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Idents_B#1/22 AsIs: (/26 AsIs: e.Name#1/28 AsIs: )/27 AsIs: e.Idents_E#1/32(14) AsIs: )/17 AsIs: (/20 AsIs: e.Externs#1/18 AsIs: )/21 AsIs: e.Names#1/5 AsIs: ]/9 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[9] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[22], context[23], context[30], context[31] ) );
  } while ( 0 );

  //[SymTable (E )(E )(E )E ]E 
  // </0 & ST_AddIdent/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 e.Name#1/2 >/1
  // closed e.References#1 as range 10
  // closed e.Idents#1 as range 14
  // closed e.Externs#1 as range 18
  // closed e.Names#1 as range 5
  // closed e.Name#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 AsIs: e.References#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Idents#1/14 HalfReuse: (/17 } Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: (/20 AsIs: e.Externs#1/18 AsIs: )/21 AsIs: e.Names#1/5 AsIs: ]/9 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[17] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::link_brackets( context[7], context[9] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[4] );
  refalrts::link_brackets( context[17], context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[9] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[17] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ST_AddUnresolved_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { EL_AddErrorAt, "EL_AddErrorAt" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  static const refalrts::StringItem strings[] = {
    {" is not define", 14},
    {"Function ", 9}
  };
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ST_AddUnresolved_0/4 t.ErrorList#2/10 (/7 s.LnNum#2/9 e.Name#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.Name#2 as range 5
    {refalrts::ictVarLeftSave, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.LnNum#2/9 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#2/10 HalfReuse: s.LnNum2 #9/7 }"Function "/12 Tile{ AsIs: e.Name#2/5 }" is not define"/14 Tile{ HalfReuse: 'd'/8 AsIs: >/1 ]] }
    {refalrts::icAllocString, 0, 1, 12},
    {refalrts::icAllocString, 0, 0, 14},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 9, 7},
    {refalrts::icReinitChar, 0, 'd', 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 12, 13, 0},
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
  // </0 & lambda_ST_AddUnresolved_0/4 t.ErrorList#2/10 (/7 s.LnNum#2/9 e.Name#2/5 )/8 >/1
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
  // closed e.Name#2 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.LnNum#2/9 {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#2/10 HalfReuse: s.LnNum2 #9/7 }"Function "/12 Tile{ AsIs: e.Name#2/5 }" is not define"/14 Tile{ HalfReuse: 'd'/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[12], context[13], "Function ", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[14], context[15], " is not define", 14 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_char( context[8], 'd' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AddUnresolved(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    // </0 & ST_AddUnresolved/4 t.ErrorList#1/22 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icADTRightSave, 2, 5, 2},
    {refalrts::icBracketLeftSave, 0, 10, 5},
    {refalrts::icBracketLeftSave, 0, 14, 5},
    {refalrts::icBracketLeftSave, 0, 18, 5},
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Externs#1 as range 18
    // closed e.Names#1 as range 5
    {refalrts::ictVarLeftSave, 0, 22, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  [/7 {REMOVED TILE}  (/12 {REMOVED TILE}  )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce/4 } Tile{ Reuse: & lambda_ST_AddUnresolved_0/8 } Tile{ AsIs: t.ErrorList#1/22 } Tile{ AsIs: e.References#1/10 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icUpdateFunc, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 22, 23, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
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
  // </0 & ST_AddUnresolved/4 t.ErrorList#1/22 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_right( context[5], context[6], SymTable, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.References#1 as range 10
  // closed e.Idents#1 as range 14
  // closed e.Externs#1 as range 18
  // closed e.Names#1 as range 5
  context[23] = refalrts::tvar_left( context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  [/7 {REMOVED TILE}  (/12 {REMOVED TILE}  )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce/4 } Tile{ Reuse: & lambda_ST_AddUnresolved_0/8 } Tile{ AsIs: t.ErrorList#1/22 } Tile{ AsIs: e.References#1/10 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], Reduce, "Reduce" );
  refalrts::update_name( context[8], lambda_ST_AddUnresolved_0, "lambda_ST_AddUnresolved_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_ST_AllFunctions_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_GN_Entry<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_ST_AllFunctions_0/4 (/7 e.Name#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Name#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # GN_Entry/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitIdent, 0, 0, 7},
    {refalrts::icLinkBrackets, 4, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 8, 0},
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
  // </0 & lambda_ST_AllFunctions_0/4 (/7 e.Name#2/5 )/8 >/1
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
  // closed e.Name#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # GN_Entry/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], & ident_GN_Entry<int>::name );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AllFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
    // </0 & ST_AllFunctions/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icADTLeftSave, 2, 5, 2},
    {refalrts::icBracketLeftSave, 0, 10, 5},
    {refalrts::icBracketLeftSave, 0, 14, 5},
    {refalrts::icBracketLeftSave, 0, 18, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Externs#1 as range 18
    // closed e.Names#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 {REMOVED TILE}  )/21 {REMOVED TILE}  ]/9 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Names#1/5 } Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_ST_AllFunctions_0/7 } Tile{ AsIs: e.Externs#1/18 } Tile{ AsIs: >/1 ]] }
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 0, 7, 0},
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
  // </0 & ST_AllFunctions/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], SymTable, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 10
  // closed e.Idents#1 as range 14
  // closed e.Externs#1 as range 18
  // closed e.Names#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  & SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 {REMOVED TILE}  )/21 {REMOVED TILE}  ]/9 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Names#1/5 } Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & lambda_ST_AllFunctions_0/7 } Tile{ AsIs: e.Externs#1/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], Map, "Map" );
  refalrts::reinit_name( context[7], lambda_ST_AllFunctions_0, "lambda_ST_AllFunctions_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_AllIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SymTable, "SymTable" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & ST_AllIdents/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icADTLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 10, 5},
    {refalrts::icBracketLeftSave, 0, 14, 5},
    {refalrts::icBracketLeftSave, 0, 18, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Externs#1 as range 18
    // closed e.Names#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ST_AllIdents/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 {REMOVED TILE}  )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Idents#1/14 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
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
  // </0 & ST_AllIdents/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], SymTable, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 10
  // closed e.Idents#1 as range 14
  // closed e.Externs#1 as range 18
  // closed e.Names#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & ST_AllIdents/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 {REMOVED TILE}  )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Idents#1/14 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
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
    // </0 & ST_GetAnyName/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names_B#1/22 (/26 s.ScopeClass#1/28 e.Name#1/24 )/27 e.Names_E#1/5 ]/9 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icADTLeftSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 10, 5},
    {refalrts::icBracketLeftSave, 0, 14, 5},
    {refalrts::icBracketLeftSave, 0, 18, 5},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Externs#1 as range 18
    {refalrts::icEPrepare, 0, 22, 5},
    {refalrts::icEStart, 0, 22, 5},
    {refalrts::icSave, 0, 29, 5},
    {refalrts::icBracketLeftSave, 0, 24, 29},
    // closed e.Names_E#1 as range 29(5)
    {refalrts::icsVarLeft, 0, 28, 24},
    // closed e.Name#1 as range 24
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & ST_GetAnyName/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names_B#1/22 (/26 s.ScopeClass#1/28 {REMOVED TILE}  )/27 e.Names_E#1/29(5) ]/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/24 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 24},
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
  // </0 & ST_GetAnyName/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names_B#1/22 (/26 s.ScopeClass#1/28 e.Name#1/24 )/27 e.Names_E#1/5 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], SymTable, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.References#1 as range 10
  // closed e.Idents#1 as range 14
  // closed e.Externs#1 as range 18
  context[22] = 0;
  context[23] = 0;
  refalrts::start_e_loop();
  do {
    context[29] = context[5];
    context[30] = context[6];
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[29], context[30] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.Names_E#1 as range 29(5)
    if( ! refalrts::svar_left( context[28], context[24], context[25] ) )
      continue;
    // closed e.Name#1 as range 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ST_GetAnyName/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names_B#1/22 (/26 s.ScopeClass#1/28 {REMOVED TILE}  )/27 e.Names_E#1/29(5) ]/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/24 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( refalrts::open_evar_advance( context[22], context[23], context[5], context[6] ) );
  return refalrts::FnResult(refalrts::cRecognitionImpossible | (__LINE__ << 8));
#endif
}


//End of file
