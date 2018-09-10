// This file automatically generated from 'Error.sref'
// Don't edit! Edit 'Error.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3244050336_1803626151
static const refalrts::IdentReference ident_ELm_HasErrors("EL-HasErrors");
static const refalrts::IdentReference ident_ELm_NoErrors("EL-NoErrors");
static const refalrts::IdentReference ident_FileLine("FileLine");
static const refalrts::IdentReference ident_FileRowCol("FileRowCol");
static const refalrts::IdentReference ident_NoPos("NoPos");
static const refalrts::IdentReference ident_RowCol("RowCol");
static refalrts::ExternalReference ref_ELm_AddError("EL-AddError", 0U, 0U);
static refalrts::ExternalReference ref_ELm_AddErrorAt("EL-AddErrorAt", 0U, 0U);
static refalrts::ExternalReference ref_ELm_Concat("EL-Concat", 0U, 0U);
static refalrts::ExternalReference ref_ELm_Create("EL-Create", 0U, 0U);
static refalrts::ExternalReference ref_ELm_Destroy("EL-Destroy", 0U, 0U);
static refalrts::ExternalReference ref_gen_ELm_Destroy_S2L1("EL-Destroy$2\\1", 3244050336U, 1803626151U);
static refalrts::ExternalReference ref_ErrorList("ErrorList", 3244050336U, 1803626151U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_Sort("Sort", 0U, 0U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);
static refalrts::ExternalReference ref_WriteLine("WriteLine", 0U, 0U);

static refalrts::FnResult func_ELm_Create(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & ErrorList/4 } (/5 Tile{ AsIs: e.FileName#1/2 } )/6 Tile{ HalfReuse: ]/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[6] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_adt( context[0] );
  refalrts::update_name( context[4], ref_ErrorList.ref(vm) );
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


static refalrts::FnResult func_ELm_AddError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_ErrorList.ref(vm), context[2], context[3] );
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 } Tile{ HalfReuse: # NoPos/4 } Tile{ AsIs: e.Message#1/2 } Tile{ HalfReuse: )/0 } Tile{ HalfReuse: ]/1 ]] }
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_ident( context[4], ident_NoPos.ref(vm) );
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


static refalrts::FnResult func_ELm_AddErrorAt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & EL-AddErrorAt/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.new#1/10 )/13 e.new#2/5 ]/9 t.new#3/14 e.new#4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_ErrorList.ref(vm), context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.new#1 as range 10
  // closed e.new#2 as range 5
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.new#5/10 )/13 e.new#6/5 ]/9 s.new#7/14 e.new#8/2 >/1
    if( ! refalrts::svar_term( context[14], context[14] ) )
      continue;
    // closed e.new#5 as range 10
    // closed e.new#6 as range 5
    // closed e.new#8 as range 2
    do {
      // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 # NoPos/14 e.Message#1/2 >/1
      if( ! refalrts::ident_term(  ident_NoPos.ref(vm), context[14] ) )
        continue;
      // closed e.FileName#1 as range 10
      // closed e.Errors#1 as range 5
      // closed e.Message#1 as range 2
      //DEBUG: e.FileName#1: 10
      //DEBUG: e.Errors#1: 5
      //DEBUG: e.Message#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 AsIs: # NoPos/14 AsIs: e.Message#1/2 HalfReuse: )/1 } Tile{ HalfReuse: ]/4 } Tile{ ]] }
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
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 s.LineNumber#1/14 e.Message#1/2 >/1
    // closed e.FileName#1 as range 10
    // closed e.Errors#1 as range 5
    // closed e.Message#1 as range 2
    //DEBUG: s.LineNumber#1: 14
    //DEBUG: e.FileName#1: 10
    //DEBUG: e.Errors#1: 5
    //DEBUG: e.Message#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 } Tile{ HalfReuse: (/0 HalfReuse: # FileLine/4 } Tile{ AsIs: s.LineNumber#1/14 } e.FileName#1/10/16 )/18 Tile{ AsIs: e.Message#1/2 } )/19 Tile{ HalfReuse: ]/1 ]] }
    if (! refalrts::copy_evar(vm, context[16], context[17], context[10], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_FileLine.ref(vm) );
    refalrts::reinit_close_adt( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[9], context[19] );
    refalrts::link_brackets( context[0], context[18] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 (/14 # RowCol/18 s.Row#1/19 s.Col#1/20 )/15 e.Message#1/2 >/1
    context[16] = 0;
    context[17] = 0;
    if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
      continue;
    context[18] = refalrts::ident_left(  ident_RowCol.ref(vm), context[16], context[17] );
    if( ! context[18] )
      continue;
    // closed e.FileName#1 as range 10
    // closed e.Errors#1 as range 5
    // closed e.Message#1 as range 2
    if( ! refalrts::svar_left( context[19], context[16], context[17] ) )
      continue;
    if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: e.FileName#1: 10
    //DEBUG: e.Errors#1: 5
    //DEBUG: e.Message#1: 2
    //DEBUG: s.Row#1: 19
    //DEBUG: s.Col#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 AsIs: (/14 Reuse: # FileRowCol/18 } Tile{ HalfReuse: (/4 } Tile{ AsIs: s.Row#1/19 AsIs: s.Col#1/20 AsIs: )/15 } e.FileName#1/10/21 Tile{ HalfReuse: )/0 } Tile{ AsIs: e.Message#1/2 } )/23 Tile{ HalfReuse: ]/1 ]] }
    if (! refalrts::copy_evar(vm, context[21], context[22], context[10], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[9] );
    refalrts::update_ident( context[18], ident_FileRowCol.ref(vm) );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_close_adt( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[9], context[23] );
    refalrts::link_brackets( context[14], context[0] );
    refalrts::link_brackets( context[4], context[15] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[19], context[15] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 t.SrcPos#1/14 e.Message#1/2 >/1
  // closed e.FileName#1 as range 10
  // closed e.Errors#1 as range 5
  // closed e.Message#1 as range 2
  //DEBUG: t.SrcPos#1: 14
  //DEBUG: e.FileName#1: 10
  //DEBUG: e.Errors#1: 5
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: e.Errors#1/5 HalfReuse: (/9 AsIs: t.SrcPos#1/14 AsIs: e.Message#1/2 HalfReuse: )/1 } Tile{ HalfReuse: ]/4 } Tile{ ]] }
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
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_AddErrorAt("EL-AddErrorAt", 0U, 0U, func_ELm_AddErrorAt);


static refalrts::FnResult func_ELm_Concat(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  context[7] = refalrts::adt_left( context[5], context[6], ref_ErrorList.ref(vm), context[2], context[3] );
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
  context[16] = refalrts::adt_left( context[14], context[15], ref_ErrorList.ref(vm), context[2], context[3] );
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

  refalrts::reset_allocator(vm);
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
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_Concat("EL-Concat", 0U, 0U, func_ELm_Concat);


static refalrts::FnResult func_gen_ELm_Destroy_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & EL-Destroy$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EL-Destroy$2\1/4 (/7 t.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & EL-Destroy$2\1/4 (/7 # NoPos/9 e.Message#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_NoPos.ref(vm), context[9] ) )
      continue;
    // closed e.Message#2 as range 5
    //DEBUG: e.Message#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 HalfReuse: ' '/7 HalfReuse: ' '/9 }"ER"/11 Tile{ HalfReuse: 'R'/8 }"OR: "/13 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( vm, context[11], context[12], "ER", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[13], context[14], "OR: ", 4 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WriteLine.ref(vm) );
    refalrts::reinit_char( context[7], ' ' );
    refalrts::reinit_char( context[9], ' ' );
    refalrts::reinit_char( context[8], 'R' );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EL-Destroy$2\1/4 (/7 (/9 s.new#3/13 t.new#4/14 e.new#5/11 )/10 e.new#6/5 )/8 >/1
  context[11] = 0;
  context[12] = 0;
  if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 5
  if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[11], context[12] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 11
  do {
    // </0 & EL-Destroy$2\1/4 (/7 (/9 # FileLine/13 s.LineNumber#2/14 e.FileName#2/11 )/10 e.Message#2/5 )/8 >/1
    if( ! refalrts::svar_term( context[14], context[14] ) )
      continue;
    if( ! refalrts::ident_term(  ident_FileLine.ref(vm), context[13] ) )
      continue;
    // closed e.FileName#2 as range 11
    // closed e.Message#2 as range 5
    //DEBUG: s.LineNumber#2: 14
    //DEBUG: e.FileName#2: 11
    //DEBUG: e.Message#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WriteLine/4 } Tile{ AsIs: e.FileName#2/11 } Tile{ HalfReuse: ':'/7 HalfReuse: </9 HalfReuse: & StrFromInt/13 AsIs: s.LineNumber#2/14 } Tile{ HalfReuse: >/10 } ':'/16 Tile{ HalfReuse: 'E'/8 }"RROR: "/17 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( vm, context[16], ':' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[17], context[18], "RROR: ", 6 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_WriteLine.ref(vm) );
    refalrts::reinit_char( context[7], ':' );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[13], ref_StrFromInt.ref(vm) );
    refalrts::reinit_close_call( context[10] );
    refalrts::reinit_char( context[8], 'E' );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[7], context[14] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EL-Destroy$2\1/4 (/7 (/9 # FileRowCol/13 (/14 s.Row#2/18 s.Col#2/19 )/15 e.FileName#2/11 )/10 e.Message#2/5 )/8 >/1
  context[16] = 0;
  context[17] = 0;
  if( ! refalrts::brackets_term( context[16], context[17], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term(  ident_FileRowCol.ref(vm), context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#2 as range 11
  // closed e.Message#2 as range 5
  if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[16], context[17] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[16], context[17] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FileName#2: 11
  //DEBUG: e.Message#2: 5
  //DEBUG: s.Row#2: 18
  //DEBUG: s.Col#2: 19

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Row#2/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </20 Tile{ HalfReuse: & WriteLine/15 AsIs: e.FileName#2/11 HalfReuse: ':'/10 } Tile{ AsIs: </0 Reuse: & StrFromInt/4 HalfReuse: s.Row2 #18/7 HalfReuse: >/9 HalfReuse: ':'/13 HalfReuse: </14 } & StrFromInt/21 Tile{ AsIs: s.Col#2/19 } Tile{ HalfReuse: >/8 } ':'/22 Tile{ AsIs: e.Message#2/5 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[21], ref_StrFromInt.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( vm, context[22], ':' ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[15], ref_WriteLine.ref(vm) );
  refalrts::reinit_char( context[10], ':' );
  refalrts::update_name( context[4], ref_StrFromInt.ref(vm) );
  refalrts::reinit_svar( context[7], context[18] );
  refalrts::reinit_close_call( context[9] );
  refalrts::reinit_char( context[13], ':' );
  refalrts::reinit_open_call( context[14] );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[15], context[10] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ELm_Destroy_S2L1("EL-Destroy$2\\1", 3244050336U, 1803626151U, func_gen_ELm_Destroy_S2L1);


static refalrts::FnResult func_ELm_Destroy(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & EL-Destroy/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.new#1/10 )/13 e.new#2/5 ]/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], ref_ErrorList.ref(vm), context[2], context[3] );
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
  // closed e.new#1 as range 10
  // closed e.new#2 as range 5
  do {
    // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 ]/9 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.FileName#1 as range 10
    //DEBUG: e.FileName#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 ]/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # EL-NoErrors/1 ]] }
    refalrts::reinit_ident( context[1], ident_ELm_NoErrors.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EL-Destroy/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 e.Errors#1/5 ]/9 >/1
  // closed e.FileName#1 as range 10
  // closed e.Errors#1 as range 5
  //DEBUG: e.FileName#1: 10
  //DEBUG: e.Errors#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.FileName#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & EL-Destroy$2\1/7 HalfReuse: </8 HalfReuse: & Sort/12 } Tile{ AsIs: e.Errors#1/5 } Tile{ HalfReuse: >/13 } Tile{ HalfReuse: >/9 HalfReuse: # EL-HasErrors/1 ]] }
  refalrts::update_name( context[4], ref_Map.ref(vm) );
  refalrts::reinit_name( context[7], ref_gen_ELm_Destroy_S2L1.ref(vm) );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[12], ref_Sort.ref(vm) );
  refalrts::reinit_close_call( context[13] );
  refalrts::reinit_close_call( context[9] );
  refalrts::reinit_ident( context[1], ident_ELm_HasErrors.ref(vm) );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[12], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_Destroy("EL-Destroy", 0U, 0U, func_ELm_Destroy);


//End of file
