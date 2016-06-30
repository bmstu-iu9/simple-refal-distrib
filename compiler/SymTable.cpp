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
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ST_Create/4 >/1
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
}

static refalrts::FnResult lambda_PatchReferences_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & lambda_PatchReferences_0/4 (/7 e.Name#1/5 )/8 (/11 s.LnNum#2/15 e.Name#1/13 )/12 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 5
    if( ! refalrts::repeated_evar_right( context[13], context[14], context[5], context[6], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_PatchReferences_0/4 (/7 e.Name#1/5 )/8 (/11 s.LnNum#2/15 e.Name#1/13 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_PatchReferences_0/4 (/7 e.Name#1/5 )/8 (/11 s.LnNum#2/13 e.Name#2/9 )/12 >/1
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
  // closed e.Name#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
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
}

static refalrts::FnResult PatchReferences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & PatchReferences/4 (/7 e.References#1/5 )/8 e.Name#1/2 >/1
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
}

refalrts::FnResult ST_AddDefined(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ST_AddDefined/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names_B#1/26 (/30 s.AnyScopeClass#1/34 e.Name#1/32 )/31 e.Names_E#1/35 ]/11 s.ScopeClass#1/24 s.LnNum#1/25 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::adt_left( context[7], context[8], SymTable, context[2], context[3] );
    if( ! context[9] )
      continue;
    refalrts::adt_pointers(context[9], context[10], context[11]);
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[7], context[8] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[7], context[8] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Externs#1 as range 20
    if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 2
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop();
    do {
      context[35] = context[7];
      context[36] = context[8];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[35], context[36] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::repeated_evar_right( context[32], context[33], context[2], context[3], context[28], context[29] ) )
        continue;
      // closed e.Names_E#1 as range 7
      if( ! refalrts::svar_left( context[34], context[28], context[29] ) )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.ScopeClass#1/24 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.LnNum#1/25 } 'F'/37 'u'/38 'n'/39 'c'/40 't'/41 'i'/42 'o'/43 'n'/44 ' '/45 Tile{ AsIs: e.Name#1/2 } ' '/46 'a'/47 'l'/48 'r'/49 'e'/50 'a'/51 'd'/52 'y'/53 ' '/54 'd'/55 'e'/56 'f'/57 'i'/58 'n'/59 'e'/60 'd'/61 Tile{ AsIs: >/1 } Tile{ AsIs: [/9 AsIs: & SymTable/10 AsIs: (/14 AsIs: e.References#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs#1/20 AsIs: )/23 AsIs: e.Names_B#1/26 AsIs: (/30 AsIs: s.AnyScopeClass#1/34 AsIs: e.Name#1/32 AsIs: )/31 AsIs: e.Names_E#1/35 AsIs: ]/11 } Tile{ ]] }
      if( ! refalrts::alloc_char( context[37], 'F' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[38], 'u' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[39], 'n' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[40], 'c' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[41], 't' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[42], 'i' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[43], 'o' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[44], 'n' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[45], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[46], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[47], 'a' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[48], 'l' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[49], 'r' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[50], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[51], 'a' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[52], 'd' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[53], 'y' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[54], ' ' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[55], 'd' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[56], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[57], 'f' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[58], 'i' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[59], 'n' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[60], 'e' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( context[61], 'd' ) )
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
      res = refalrts::splice_evar( res, context[46], context[61] );
      res = refalrts::splice_evar( res, context[2], context[3] );
      res = refalrts::splice_evar( res, context[37], context[45] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::use( res );
      refalrts::splice_to_freelist_open( context[6], res );
      return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
    } while ( refalrts::open_evar_advance( context[26], context[27], context[7], context[8] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ST_AddDefined/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs_B#1/26 (/30 e.Name#1/32 )/31 e.Externs_E#1/34 )/23 e.Names#1/7 ]/11 s.ScopeClass#1/24 s.LnNum#1/25 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::adt_left( context[7], context[8], SymTable, context[2], context[3] );
    if( ! context[9] )
      continue;
    refalrts::adt_pointers(context[9], context[10], context[11]);
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[7], context[8] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[7], context[8] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Names#1 as range 7
    if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 2
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop();
    do {
      context[34] = context[20];
      context[35] = context[21];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[34], context[35] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::repeated_evar_left( context[32], context[33], context[2], context[3], context[28], context[29] ) )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;
      // closed e.Externs_E#1 as range 20

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.LnNum#1/25 {REMOVED TILE}  {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 HalfReuse: </14 } Tile{ Reuse: & PatchReferences/4 } Tile{ AsIs: (/30 } Tile{ AsIs: e.References#1/12 } Tile{ AsIs: )/31 } Tile{ AsIs: e.Name#1/32 } Tile{ HalfReuse: >/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 } Tile{ AsIs: e.Externs_B#1/26 } Tile{ AsIs: e.Externs_E#1/34 } Tile{ AsIs: )/23 AsIs: e.Names#1/7 HalfReuse: (/11 AsIs: s.ScopeClass#1/24 } Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: ]/1 ]] }
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
      res = refalrts::splice_evar( res, context[34], context[35] );
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
    } while ( refalrts::open_evar_advance( context[26], context[27], context[20], context[21] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ST_AddDefined/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names#1/7 ]/11 s.ScopeClass#1/24 s.LnNum#1/25 e.Name#1/2 >/1
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
  // closed e.References#1 as range 12
  // closed e.Idents#1 as range 16
  // closed e.Externs#1 as range 20
  // closed e.Names#1 as range 7
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
}

refalrts::FnResult ST_AddExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ST_AddExtern/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs_B#1/24 (/28 e.Name#1/30 )/29 e.Externs_E#1/32 )/23 e.Names#1/7 ]/11 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::adt_left( context[7], context[8], SymTable, context[2], context[3] );
    if( ! context[9] )
      continue;
    refalrts::adt_pointers(context[9], context[10], context[11]);
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[7], context[8] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[7], context[8] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Names#1 as range 7
    // closed e.Name#1 as range 2
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[20];
      context[33] = context[21];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[32], context[33] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      if( ! refalrts::repeated_evar_left( context[30], context[31], context[2], context[3], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      // closed e.Externs_E#1 as range 20

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & ST_AddExtern/4 {REMOVED TILE}  e.Name#1/2 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 AsIs: (/14 AsIs: e.References#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs_B#1/24 AsIs: (/28 AsIs: e.Name#1/30 AsIs: )/29 AsIs: e.Externs_E#1/32 AsIs: )/23 AsIs: e.Names#1/7 AsIs: ]/11 } Tile{ ]] }
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
    } while ( refalrts::open_evar_advance( context[24], context[25], context[20], context[21] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ST_AddExtern/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names_B#1/24 (/28 s.ScopeClass#1/32 e.Name#1/30 )/29 e.Names_E#1/33 ]/11 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
    if( ! context[6] )
      continue;
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::adt_left( context[7], context[8], SymTable, context[2], context[3] );
    if( ! context[9] )
      continue;
    refalrts::adt_pointers(context[9], context[10], context[11]);
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[7], context[8] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[7], context[8] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.References#1 as range 12
    // closed e.Idents#1 as range 16
    // closed e.Externs#1 as range 20
    // closed e.Name#1 as range 2
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop();
    do {
      context[33] = context[7];
      context[34] = context[8];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[33], context[34] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      if( ! refalrts::repeated_evar_right( context[30], context[31], context[2], context[3], context[26], context[27] ) )
        continue;
      // closed e.Names_E#1 as range 7
      if( ! refalrts::svar_left( context[32], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & ST_AddExtern/4 {REMOVED TILE}  e.Name#1/2 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 AsIs: [/9 AsIs: & SymTable/10 AsIs: (/14 AsIs: e.References#1/12 AsIs: )/15 AsIs: (/18 AsIs: e.Idents#1/16 AsIs: )/19 AsIs: (/22 AsIs: e.Externs#1/20 AsIs: )/23 AsIs: e.Names_B#1/24 AsIs: (/28 AsIs: s.ScopeClass#1/32 AsIs: e.Name#1/30 AsIs: )/29 AsIs: e.Names_E#1/33 AsIs: ]/11 } Tile{ ]] }
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
    } while ( refalrts::open_evar_advance( context[24], context[25], context[7], context[8] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ST_AddExtern/4 t.ErrorList#1/5 [/9SymTable/10 (/14 e.References#1/12 )/15 (/18 e.Idents#1/16 )/19 (/22 e.Externs#1/20 )/23 e.Names#1/7 ]/11 e.Name#1/2 >/1
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
}

refalrts::FnResult ST_AddFunctionCall(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ST_AddFunctionCall/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs_B#1/23 (/27 e.Name#1/29 )/28 e.Externs_E#1/31 )/21 e.Names#1/5 ]/9 s.LnNum#1/22 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::adt_left( context[5], context[6], SymTable, context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::adt_pointers(context[7], context[8], context[9]);
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
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Names#1 as range 5
    if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 2
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop();
    do {
      context[31] = context[18];
      context[32] = context[19];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[31], context[32] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      if( ! refalrts::repeated_evar_left( context[29], context[30], context[2], context[3], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;
      // closed e.Externs_E#1 as range 18

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & ST_AddFunctionCall/4 {REMOVED TILE}  s.LnNum#1/22 e.Name#1/2 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 AsIs: e.References#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Idents#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Externs_B#1/23 AsIs: (/27 AsIs: e.Name#1/29 AsIs: )/28 AsIs: e.Externs_E#1/31 AsIs: )/21 AsIs: e.Names#1/5 AsIs: ]/9 } Tile{ ]] }
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
    } while ( refalrts::open_evar_advance( context[23], context[24], context[18], context[19] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ST_AddFunctionCall/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names_B#1/23 (/27 s.ScopeClass#1/31 e.Name#1/29 )/28 e.Names_E#1/32 ]/9 s.LnNum#1/22 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::adt_left( context[5], context[6], SymTable, context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::adt_pointers(context[7], context[8], context[9]);
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
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.References#1 as range 10
    // closed e.Idents#1 as range 14
    // closed e.Externs#1 as range 18
    if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
      continue;
    // closed e.Name#1 as range 2
    context[23] = 0;
    context[24] = 0;
    refalrts::start_e_loop();
    do {
      context[32] = context[5];
      context[33] = context[6];
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[32], context[33] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      if( ! refalrts::repeated_evar_right( context[29], context[30], context[2], context[3], context[25], context[26] ) )
        continue;
      // closed e.Names_E#1 as range 5
      if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
        continue;
      if( ! refalrts::empty_seq( context[25], context[26] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & ST_AddFunctionCall/4 {REMOVED TILE}  s.LnNum#1/22 e.Name#1/2 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 AsIs: e.References#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Idents#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Externs#1/18 AsIs: )/21 AsIs: e.Names_B#1/23 AsIs: (/27 AsIs: s.ScopeClass#1/31 AsIs: e.Name#1/29 AsIs: )/28 AsIs: e.Names_E#1/32 AsIs: ]/9 } Tile{ ]] }
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
    } while ( refalrts::open_evar_advance( context[23], context[24], context[5], context[6] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ST_AddFunctionCall/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 s.LnNum#1/22 e.Name#1/2 >/1
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
  // closed e.References#1 as range 10
  // closed e.Idents#1 as range 14
  // closed e.Externs#1 as range 18
  // closed e.Names#1 as range 5
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
}

refalrts::FnResult ST_AddIdent(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  do {
    refalrts::start_sentence();
    context[0] = arg_begin;
    context[1] = arg_end;
    // </0 & ST_AddIdent/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents_B#1/22 (/26 e.Name#1/28 )/27 e.Idents_E#1/30 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 e.Name#1/2 >/1
    context[2] = 0;
    context[3] = 0;
    context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::adt_left( context[5], context[6], SymTable, context[2], context[3] );
    if( ! context[7] )
      continue;
    refalrts::adt_pointers(context[7], context[8], context[9]);
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
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.References#1 as range 10
    // closed e.Externs#1 as range 18
    // closed e.Names#1 as range 5
    // closed e.Name#1 as range 2
    context[22] = 0;
    context[23] = 0;
    refalrts::start_e_loop();
    do {
      context[30] = context[14];
      context[31] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[30], context[31] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_evar_left( context[28], context[29], context[2], context[3], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.Idents_E#1 as range 14

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE}  </0 & ST_AddIdent/4 {REMOVED TILE}  e.Name#1/2 >/1 {REMOVED TILE} 
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & SymTable/8 AsIs: (/12 AsIs: e.References#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Idents_B#1/22 AsIs: (/26 AsIs: e.Name#1/28 AsIs: )/27 AsIs: e.Idents_E#1/30 AsIs: )/17 AsIs: (/20 AsIs: e.Externs#1/18 AsIs: )/21 AsIs: e.Names#1/5 AsIs: ]/9 } Tile{ ]] }
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
    } while ( refalrts::open_evar_advance( context[22], context[23], context[14], context[15] ) );
  } while ( 0 );

  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ST_AddIdent/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 e.Name#1/2 >/1
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
}

static refalrts::FnResult lambda_ST_AddUnresolved_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ST_AddUnresolved_0/4 t.ErrorList#2/10 (/7 s.LnNum#2/9 e.Name#2/5 )/8 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL_AddErrorAt/4 AsIs: t.ErrorList#2/10 HalfReuse: s.LnNum2 #9/7 } 'F'/12 'u'/13 'n'/14 'c'/15 't'/16 'i'/17 'o'/18 'n'/19 ' '/20 Tile{ AsIs: e.Name#2/5 } ' '/21 'i'/22 's'/23 ' '/24 'n'/25 'o'/26 't'/27 ' '/28 'd'/29 'e'/30 'f'/31 'i'/32 'n'/33 'e'/34 Tile{ HalfReuse: 'd'/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[12], 'F' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[13], 'u' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[14], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], 'c' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[16], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[17], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[18], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[19], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[20], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[22], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[23], 's' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[25], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[26], 'o' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[27], 't' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[28], ' ' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[29], 'd' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[30], 'e' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[31], 'f' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[32], 'i' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[33], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[34], 'e' ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], EL_AddErrorAt, "EL_AddErrorAt" );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_char( context[8], 'd' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[21], context[34] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[20] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
}

refalrts::FnResult ST_AddUnresolved(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ST_AddUnresolved/4 t.ErrorList#1/22 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 >/1
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
}

static refalrts::FnResult lambda_ST_AllFunctions_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & lambda_ST_AllFunctions_0/4 (/7 e.Name#2/5 )/8 >/1
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
}

refalrts::FnResult ST_AllFunctions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ST_AllFunctions/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 >/1
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
}

refalrts::FnResult ST_AllIdents(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ST_AllIdents/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names#1/5 ]/9 >/1
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
}

refalrts::FnResult ST_GetAnyName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  context[0] = arg_begin;
  context[1] = arg_end;
  // </0 & ST_GetAnyName/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names_B#1/22 (/26 s.ScopeClass#1/28 e.Name#1/24 )/27 e.Names_E#1/29 ]/9 >/1
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
    // closed e.Names_E#1 as range 5
    if( ! refalrts::svar_left( context[28], context[24], context[25] ) )
      continue;
    // closed e.Name#1 as range 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & ST_GetAnyName/4 [/7SymTable/8 (/12 e.References#1/10 )/13 (/16 e.Idents#1/14 )/17 (/20 e.Externs#1/18 )/21 e.Names_B#1/22 (/26 s.ScopeClass#1/28 {REMOVED TILE}  )/27 e.Names_E#1/29 ]/9 >/1 {REMOVED TILE} 
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
}


//End of file
