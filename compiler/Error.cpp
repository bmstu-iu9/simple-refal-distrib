// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_ELm_HasErrors = refalrts::ident_from_static("EL-HasErrors");
const refalrts::RefalIdentifier ident_ELm_NoErrors = refalrts::ident_from_static("EL-NoErrors");
const refalrts::RefalIdentifier ident_FileLine = refalrts::ident_from_static("FileLine");
const refalrts::RefalIdentifier ident_FileRowCol = refalrts::ident_from_static("FileRowCol");
const refalrts::RefalIdentifier ident_MuGenm_NoPos = refalrts::ident_from_static("MuGen-NoPos");
const refalrts::RefalIdentifier ident_NoPos = refalrts::ident_from_static("NoPos");
const refalrts::RefalIdentifier ident_RowCol = refalrts::ident_from_static("RowCol");
const refalrts::RefalIdentifier ident_TkError = refalrts::ident_from_static("TkError");
const refalrts::RefalIdentifier ident_TkUnexpected = refalrts::ident_from_static("TkUnexpected");
static refalrts::ExternalReference ref_WriteLine("WriteLine", 0U, 0U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);
static refalrts::ExternalReference ref_SRm_StrFromToken("SR-StrFromToken", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Sort("Sort", 0U, 0U);
static refalrts::ExternalReference ref_ErrorList("ErrorList", 1626067036U, 1786150088U);
static refalrts::ExternalReference ref_ELm_Create("EL-Create", 0U, 0U);
static refalrts::ExternalReference ref_ELm_AddError("EL-AddError", 0U, 0U);
static refalrts::ExternalReference ref_ELm_AddErrorAt("EL-AddErrorAt", 0U, 0U);
static refalrts::ExternalReference ref_ELm_AddUnexpected("EL-AddUnexpected", 0U, 0U);
static refalrts::ExternalReference ref_ELm_Concat("EL-Concat", 0U, 0U);
static refalrts::ExternalReference ref_gen_ELm_Destroy_S2L1("EL-Destroy$2\\1", 1626067036U, 1786150088U);
static refalrts::ExternalReference ref_ELm_Destroy("EL-Destroy", 0U, 0U);

static refalrts::FnResult func_ELm_Create(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & EL-Create/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & ErrorList/4 } (/5 Tile{ AsIs: e.FileName#1/2 } )/6 Tile{ HalfReuse: ]/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], ref_ErrorList.ref.function );
  refalrts::reinit_close_adt( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_Create("EL-Create", 0U, 0U, func_ELm_Create);

static refalrts::FnResult func_ELm_AddError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & EL-AddError/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_ErrorList.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.FileName#1 as range 10
  // closed e.Errors#1 as range 5
  // closed e.Message#1 as range 2
  //DEBUG: e.FileName#1: 10
  //DEBUG: e.Errors#1: 5
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 } Tile{ HalfReuse: # NoPos/4 } Tile{ AsIs: e.Message#1/2 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: ]/1 ]] }
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_ident( context[4], ident_NoPos );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_adt( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[9], context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_AddError("EL-AddError", 0U, 0U, func_ELm_AddError);

static refalrts::FnResult func_ELm_AddErrorAt(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  //FAST GEN: [ErrorList ( e.$ ) e.$ ] t.$ e.$
  //GLOBAL GEN: [ErrorList ( e.$ ) e.$ ] t.$ e.$
  // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.idxDB#0/10 )/13 e.idxDT#0/5 ]/9 t.idxt#0/14 e.idxtV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_ErrorList.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.idxDB#0 as range 10
  // closed e.idxDT#0 as range 5
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxtV#0 as range 2
  do {
    // [ErrorList ( e.idx ) e.idx ] # NoPos e.idx
    // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/16 )/13 e.Errors#1/18 ]/9 # NoPos/14 e.Message#1/20 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::ident_term(  ident_NoPos, context[14] ) )
      continue;
    // closed e.FileName#1 as range 16
    // closed e.Errors#1 as range 18
    // closed e.Message#1 as range 20
    //DEBUG: e.FileName#1: 16
    //DEBUG: e.Errors#1: 18
    //DEBUG: e.Message#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/16 AsIs: )/13 AsIs: e.Errors#1/18 HalfReuse: (/9 AsIs: # NoPos/14 AsIs: e.Message#1/20 HalfReuse: )/1 } Tile{ HalfReuse: ]/4 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_adt( context[4] );
    refalrts::link_brackets( context[7], context[4] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // [ErrorList ( e.idx ) e.idx ] # MuGen-NoPos e.idx
    // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/16 )/13 e.Errors#1/18 ]/9 # MuGen-NoPos/14 e.Message#1/20 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::ident_term(  ident_MuGenm_NoPos, context[14] ) )
      continue;
    // closed e.FileName#1 as range 16
    // closed e.Errors#1 as range 18
    // closed e.Message#1 as range 20
    //DEBUG: e.FileName#1: 16
    //DEBUG: e.Errors#1: 18
    //DEBUG: e.Message#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/16 AsIs: )/13 AsIs: e.Errors#1/18 HalfReuse: (/9 AsIs: # MuGen-NoPos/14 AsIs: e.Message#1/20 HalfReuse: )/1 } Tile{ HalfReuse: ]/4 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_adt( context[4] );
    refalrts::link_brackets( context[7], context[4] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // [ErrorList ( e.idx ) e.idx ] s.idx e.idx
    // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/16 )/13 e.Errors#1/18 ]/9 s.LineNumber#1/14 e.Message#1/20 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::svar_term( context[14], context[14] ) )
      continue;
    // closed e.FileName#1 as range 16
    // closed e.Errors#1 as range 18
    // closed e.Message#1 as range 20
    //DEBUG: s.LineNumber#1: 14
    //DEBUG: e.FileName#1: 16
    //DEBUG: e.Errors#1: 18
    //DEBUG: e.Message#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/16 AsIs: )/13 AsIs: e.Errors#1/18 HalfReuse: (/9 } Tile{ HalfReuse: (/0 HalfReuse: # FileLine/4 } Tile{ AsIs: s.LineNumber#1/14 } e.FileName#1/16/22 )/24 Tile{ AsIs: e.Message#1/20 } )/25 Tile{ HalfReuse: ]/1 ]] }
    if (! refalrts::copy_evar(context[22], context[23], context[16], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_FileLine );
    refalrts::reinit_close_adt( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[9], context[25] );
    refalrts::link_brackets( context[0], context[24] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // [ErrorList ( e.idx ) e.idx ] ( # RowCol s.idx s.idx ) e.idx
    // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/16 )/13 e.Errors#1/18 ]/9 (/14 # RowCol/24 s.Row#1/25 s.Col#1/26 )/15 e.Message#1/20 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[2];
    context[21] = context[3];
    context[22] = 0;
    context[23] = 0;
    if( ! refalrts::brackets_term( context[22], context[23], context[14] ) )
      continue;
    context[24] = refalrts::ident_left(  ident_RowCol, context[22], context[23] );
    if( ! context[24] )
      continue;
    // closed e.FileName#1 as range 16
    // closed e.Errors#1 as range 18
    // closed e.Message#1 as range 20
    if( ! refalrts::svar_left( context[25], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_left( context[26], context[22], context[23] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    //DEBUG: e.FileName#1: 16
    //DEBUG: e.Errors#1: 18
    //DEBUG: e.Message#1: 20
    //DEBUG: s.Row#1: 25
    //DEBUG: s.Col#1: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/16 AsIs: )/13 AsIs: e.Errors#1/18 HalfReuse: (/9 AsIs: (/14 Reuse: # FileRowCol/24 } Tile{ HalfReuse: (/4 } Tile{ AsIs: s.Row#1/25 AsIs: s.Col#1/26 AsIs: )/15 } e.FileName#1/16/27 Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Message#1/20 } )/29 Tile{ HalfReuse: ]/1 ]] }
    if (! refalrts::copy_evar(context[27], context[28], context[16], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[9] );
    refalrts::update_ident( context[24], ident_FileRowCol );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_close_adt( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[9], context[29] );
    refalrts::link_brackets( context[14], context[0] );
    refalrts::link_brackets( context[4], context[15] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[15] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // [ErrorList ( e.idx ) e.idx ] t.idx e.idx
  // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/16 )/13 e.Errors#1/18 ]/9 t.SrcPos#1/14 e.Message#1/20 >/1
  context[16] = context[10];
  context[17] = context[11];
  context[18] = context[5];
  context[19] = context[6];
  context[20] = context[2];
  context[21] = context[3];
  // closed e.FileName#1 as range 16
  // closed e.Errors#1 as range 18
  // closed e.Message#1 as range 20
  //DEBUG: t.SrcPos#1: 14
  //DEBUG: e.FileName#1: 16
  //DEBUG: e.Errors#1: 18
  //DEBUG: e.Message#1: 20

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/16 AsIs: )/13 AsIs: e.Errors#1/18 HalfReuse: (/9 AsIs: t.SrcPos#1/14 AsIs: e.Message#1/20 HalfReuse: )/1 } Tile{ HalfReuse: ]/4 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::reinit_close_adt( context[4] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_AddErrorAt("EL-AddErrorAt", 0U, 0U, func_ELm_AddErrorAt);

static refalrts::FnResult func_ELm_AddUnexpected(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: t.$ ( s.$ s.$ e.$ ) e.$
  //GLOBAL GEN: t.$ ( s.$ s.$ e.$ ) e.$
  // </0 & EL-AddUnexpected/4 t.idx#0/5 (/9 s.idxVB#0/11 s.idxVBV#0/12 e.idxVBVV#0/7 )/10 e.idxVT#0/2 >/1
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
  // closed e.idxVT#0 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBVV#0 as range 7
  do {
    // t.idx ( # TkError s.idx e.idx ) e.idx
    // </0 & EL-AddUnexpected/4 t.ErrorList#1/5 (/9 # TkError/11 s.LineNumber#1/12 e.Message#1/13 )/10 e.Expected#1/15 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::ident_term(  ident_TkError, context[11] ) )
      continue;
    // closed e.Message#1 as range 13
    // closed e.Expected#1 as range 15
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LineNumber#1: 12
    //DEBUG: e.Message#1: 13
    //DEBUG: e.Expected#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # TkError/11 s.LineNumber#1/12 {REMOVED TILE} )/10 e.Expected#1/15 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 } Tile{ AsIs: e.Message#1/13 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( # TkUnexpected s.idx e.idx ) e.idx
    // </0 & EL-AddUnexpected/4 t.ErrorList#1/5 (/9 # TkUnexpected/11 s.LineNumber#1/12 e.Unexpected#1/13 )/10 e.Expected#1/15 >/1
    context[13] = context[7];
    context[14] = context[8];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::ident_term(  ident_TkUnexpected, context[11] ) )
      continue;
    // closed e.Unexpected#1 as range 13
    // closed e.Expected#1 as range 15
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.LineNumber#1: 12
    //DEBUG: e.Unexpected#1: 13
    //DEBUG: e.Expected#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.LineNumber#1/12 {REMOVED TILE} {REMOVED TILE} e.Expected#1/15 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 HalfReuse: 'U'/11 } 'n'/17 Tile{ HalfReuse: 'k'/10 }"nown characters \""/18 Tile{ AsIs: e.Unexpected#1/13 } '\"'/20 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[17], 'n' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[18], context[19], "nown characters \"", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '\"' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::reinit_char( context[11], 'U' );
    refalrts::reinit_char( context[10], 'k' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( s.idx s.idx e.idx ) e.idx
  // </0 & EL-AddUnexpected/4 t.ErrorList#1/5 (/9 s.Unexpected#1/11 s.LineNumber#1/12 e.Info#1/13 )/10 e.Expected#1/15 >/1
  context[13] = context[7];
  context[14] = context[8];
  context[15] = context[2];
  context[16] = context[3];
  // closed e.Info#1 as range 13
  // closed e.Expected#1 as range 15
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Unexpected#1: 11
  //DEBUG: s.LineNumber#1: 12
  //DEBUG: e.Info#1: 13
  //DEBUG: e.Expected#1: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.LineNumber#1/12 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 HalfReuse: s.LineNumber1 #12/9 }"Unexpected "/17 </19 & SR-StrFromToken/20 Tile{ AsIs: s.Unexpected#1/11 } Tile{ AsIs: e.Info#1/13 } >/21", expected"/22 Tile{ HalfReuse: ' '/10 AsIs: e.Expected#1/15 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[17], context[18], "Unexpected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ref_SRm_StrFromToken.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[22], context[23], ", expected", 10 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
  refalrts::reinit_svar( context[9], context[12] );
  refalrts::reinit_char( context[10], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  refalrts::splice_to_freelist_open( context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_AddUnexpected("EL-AddUnexpected", 0U, 0U, func_ELm_AddUnexpected);

static refalrts::FnResult func_ELm_Concat(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & EL-Concat/4 [/7ErrorList/8 (/12 e.FileName-L#1/10 )/13 e.Errors-L#1/5 ]/9 [/16ErrorList/17 (/21 e.FileName-R#1/19 )/22 e.Errors-R#1/14 ]/18 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_ErrorList.ref.function, context[2], context[3] );
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
  context[16] = refalrts::adt_left( context[14], context[15], ref_ErrorList.ref.function, context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[16], context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[14], context[15] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName-L#1 as range 10
  // closed e.Errors-L#1 as range 5
  // closed e.FileName-R#1 as range 19
  // closed e.Errors-R#1 as range 14
  //DEBUG: e.FileName-L#1: 10
  //DEBUG: e.Errors-L#1: 5
  //DEBUG: e.FileName-R#1: 19
  //DEBUG: e.Errors-R#1: 14

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & EL-Concat/4 {REMOVED TILE} {REMOVED TILE} ]/9 [/16ErrorList/17 (/21 e.FileName-R#1/19 )/22 {REMOVED TILE} ]/18 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName-L#1/10 AsIs: )/13 } Tile{ AsIs: e.Errors-L#1/5 } Tile{ AsIs: e.Errors-R#1/14 } Tile{ HalfReuse: ]/1 ]] }
  refalrts::reinit_close_adt( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_Concat("EL-Concat", 0U, 0U, func_ELm_Concat);

static refalrts::FnResult func_gen_ELm_Destroy_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: ( t.$ e.$ )
  //GLOBAL GEN: ( t.$ e.$ )
  // </0 & EL-Destroy$2\1/4 (/7 t.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
    // ( # NoPos e.idx )
    // </0 & EL-Destroy$2\1/4 (/7 # NoPos/9 e.Message#2/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term(  ident_NoPos, context[9] ) )
      continue;
    // closed e.Message#2 as range 11
    //DEBUG: e.Message#2: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: ' '/7 HalfReuse: ' '/9 }"ER"/13 Tile{ HalfReuse: 'R'/8 }"OR: "/15 Tile{ AsIs: e.Message#2/11 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[13], context[14], "ER", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], "OR: ", 4 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WriteLine.ref.function );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[8], 'R' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # MuGen-NoPos e.idx )
    // </0 & EL-Destroy$2\1/4 (/7 # MuGen-NoPos/9 e.Message#2/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term(  ident_MuGenm_NoPos, context[9] ) )
      continue;
    // closed e.Message#2 as range 11
    //DEBUG: e.Message#2: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: ' '/7 HalfReuse: ' '/9 }"ER"/13 Tile{ HalfReuse: 'R'/8 }"OR (in generated Mu): "/15 Tile{ AsIs: e.Message#2/11 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[13], context[14], "ER", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[15], context[16], "OR (in generated Mu): ", 22 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WriteLine.ref.function );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[8], 'R' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( ( # FileLine s.idx e.idx ) e.idx )
    // </0 & EL-Destroy$2\1/4 (/7 (/9 # FileLine/15 s.LineNumber#2/16 e.FileName#2/13 )/10 e.Message#2/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_FileLine, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Message#2 as range 11
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.FileName#2 as range 13
    //DEBUG: e.Message#2: 11
    //DEBUG: s.LineNumber#2: 16
    //DEBUG: e.FileName#2: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.FileName#2/13 } Tile{ HalfReuse: ':'/7 HalfReuse: </9 HalfReuse: & StrFromInt/15 AsIs: s.LineNumber#2/16 } Tile{ HalfReuse: >/10 } ':'/17 Tile{ HalfReuse: 'E'/8 }"RROR: "/18 Tile{ AsIs: e.Message#2/11 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[17], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[18], context[19], "RROR: ", 6 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WriteLine.ref.function );
    refalrts::reinit_char( context[7], ':' );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[15], ref_StrFromInt.ref.function );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_char( context[8], 'E' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( ( # FileRowCol ( s.idx s.idx ) e.idx ) e.idx )
  // </0 & EL-Destroy$2\1/4 (/7 (/9 # FileRowCol/15 (/18 s.Row#2/20 s.Col#2/21 )/19 e.FileName#2/13 )/10 e.Message#2/11 )/8 >/1
  context[11] = context[5];
  context[12] = context[6];
  context[13] = 0;
  context[14] = 0;
  if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::ident_left(  ident_FileRowCol, context[13], context[14] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[13], context[14] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.FileName#2 as range 13
  // closed e.Message#2 as range 11
  if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[21], context[16], context[17] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[16], context[17] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FileName#2: 13
  //DEBUG: e.Message#2: 11
  //DEBUG: s.Row#2: 20
  //DEBUG: s.Col#2: 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Row#2/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </22 Tile{ HalfReuse: & WriteLine/19 AsIs: e.FileName#2/13 HalfReuse: ':'/10 } Tile{ AsIs: </0 Reuse: & StrFromInt/4 HalfReuse: s.Row2 #20/7 HalfReuse: >/9 HalfReuse: ':'/15 HalfReuse: </18 } & StrFromInt/23 Tile{ AsIs: s.Col#2/21 } Tile{ HalfReuse: >/8 } ':'/24 Tile{ AsIs: e.Message#2/11 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ref_StrFromInt.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[24], ':' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[19], ref_WriteLine.ref.function );
  refalrts::reinit_char( context[10], ':' );
  refalrts::update_name( context[4], ref_StrFromInt.ref.function );
  refalrts::reinit_svar( context[7], context[20] );
  refalrts::reinit_close_call( context[9] );
  refalrts::reinit_char( context[15], ':' );
  refalrts::reinit_open_call( context[18] );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[0], context[18] );
  res = refalrts::splice_evar( res, context[19], context[10] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ELm_Destroy_S2L1("EL-Destroy$2\\1", 1626067036U, 1786150088U, func_gen_ELm_Destroy_S2L1);

static refalrts::FnResult func_ELm_Destroy(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: [ErrorList e.$ ]
  //GLOBAL GEN: [ErrorList ( e.$ ) e.$ ]
  // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.idxDB#0/10 )/13 e.idxDT#0/5 ]/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_ErrorList.ref.function, context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxDB#0 as range 10
  // closed e.idxDT#0 as range 5
  do {
    // [ErrorList ( e.idx ) ]
    // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/14 )/13 ]/9 >/1
    context[14] = context[10];
    context[15] = context[11];
    context[16] = context[5];
    context[17] = context[6];
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.FileName#1 as range 14
    //DEBUG: e.FileName#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/14 )/13 ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # EL-NoErrors/1 ]] }
    refalrts::reinit_ident( context[1], ident_ELm_NoErrors );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // [ErrorList ( e.idx ) e.idx ]
  // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/14 )/13 e.Errors#1/16 ]/9 >/1
  context[14] = context[10];
  context[15] = context[11];
  context[16] = context[5];
  context[17] = context[6];
  // closed e.FileName#1 as range 14
  // closed e.Errors#1 as range 16
  //DEBUG: e.FileName#1: 14
  //DEBUG: e.Errors#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} e.FileName#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & EL-Destroy$2\1/7 HalfReuse: </8 HalfReuse: & Sort/12 } Tile{ AsIs: e.Errors#1/16 } Tile{ HalfReuse: >/13 } Tile{ HalfReuse: >/9 HalfReuse: # EL-HasErrors/1 ]] }
  refalrts::update_name( context[4], ref_Map.ref.function );
  refalrts::reinit_name( context[7], ref_gen_ELm_Destroy_S2L1.ref.function );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[12], ref_Sort.ref.function );
  refalrts::reinit_close_call( context[13] );
  refalrts::reinit_close_call( context[9] );
  refalrts::reinit_ident( context[1], ident_ELm_HasErrors );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::splice_to_freelist_open( context[12], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_Destroy("EL-Destroy", 0U, 0U, func_ELm_Destroy);


//End of file
