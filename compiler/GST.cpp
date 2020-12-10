// This file automatically generated from 'GST.ref'
// Don't edit! Edit 'GST.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2837788705_3148011752
#define COOKIE1_ 2837788705U
#define COOKIE2_ 3148011752U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_gen_Apply_Z3 = 4,
  efunc_gen_Apply_Z0 = 5,
  efunc_Reduce = 6,
  efunc_gen_Reduce_S1A1 = 7,
  efunc_gen_Apply_Z2 = 8,
  efunc_Apply = 9,
  efunc_DoMapAccum = 10,
  efunc_gen_DoMapAccum_S1A1 = 11,
  efunc_Add = 12,
  efunc_Sub = 13,
  efunc_Fetch = 14,
  efunc_Pipe = 15,
  efunc_gen_Pipe_S2L1 = 16,
  efunc_gen_Pipe_S3L1 = 17,
  efunc_ReplaceTile = 18,
  efunc_gen_Fetch_Z3 = 19,
  efunc_gen_Fetch_Z1 = 20,
  efunc_EnumExprs = 21,
  efunc_gen_TileCandidates_L1D1 = 22,
  efunc_gen_EnumExprs_Z0 = 23,
  efunc_gen_DoMapAccum_Z1 = 24,
  efunc_DelAccumulator = 25,
  efunc_gen_Map_Z1 = 26,
  efunc_DoOverlapOffsets = 27,
  efunc_GlueTiles = 28,
  efunc_ZipItems = 29,
  efunc_OverlapItem = 30,
  efunc_FoldTilem_EEnd = 31,
  efunc_GlueNextTile = 32,
  efunc_gen_GlueNextTile_Z0 = 33,
  efunc_gen_Map_Z2 = 34,
  efunc_FilterOverlapped = 35,
  efunc_UnBracket = 36,
  efunc_gen_Reduce_Z1 = 37,
  efunc_gen_DoMapAccum_Z2 = 38,
  efunc_gen_FilterOverlapped_S1A1 = 39,
  efunc_FoldTile = 40,
  efunc_FoldTileW = 41,
  efunc_gen_Reduce_Z2 = 42,
  efunc_gen_DoModify_Z1 = 43,
  efunc_gen_Fetch_Z2 = 44,
  efunc_DoModify = 45,
  efunc_gen_DoModify_Z0 = 46,
  efunc_Mu = 47,
  efunc_Up = 48,
  efunc_Evm_met = 49,
  efunc_Residue = 50,
  efunc_u_u_Metau_Residue = 51,
  efunc_MapAccum = 52,
  efunc_Inc = 53,
  efunc_Dec = 54,
  efunc_GST = 55,
  efunc_Enum = 56,
  efunc_DeEnum = 57,
  efunc_TileCandidates = 58,
  efunc_OverlapChain = 59,
  efunc_FindHeavyTile = 60,
  efunc_RejectTile = 61,
  efunc_FilterPatternPos = 62,
  efunc_FilterResultPos = 63,
  efunc_Modify = 64,
  efunc_gen_Apply_Z4 = 65,
  efunc_gen_DoMapAccum_S1A1Z1 = 66,
  efunc_gen_Enum_L1D1 = 67,
  efunc_gen_DoMapAccum_Z0 = 68,
  efunc_gen_Enum_L1Z0 = 69,
  efunc_gen_DeEnum_L1D3 = 70,
  efunc_gen_Map_Z0 = 71,
  efunc_gen_DeEnum_L1Z0 = 72,
  efunc_gen_Fetch_Z0 = 73,
  efunc_gen_TileCandidates_L1Z0 = 74,
  efunc_gen_FilterOverlapped_S1L1D1 = 75,
  efunc_gen_FilterOverlapped_S1L1Z0 = 76,
  efunc_TermCompare = 77,
  efunc_gen_DoMapAccum_S1A1Z2 = 78,
  efunc_gen_FindHeavyTile_L1B1 = 79,
  efunc_gen_FindHeavyTile_L1D1 = 80,
  efunc_gen_FindHeavyTile_L1Z0 = 81,
  efunc_gen_Fetch_Z4 = 82,
  efunc_gen_Reduce_S1A1Z1 = 83,
  efunc_gen_Map_Z3 = 84,
  efunc_gen_RejectTile_L1D1 = 85,
  efunc_gen_Reduce_Z0 = 86,
  efunc_gen_RejectTile_L1Z0 = 87,
  efunc_gen_Reduce_S1A1Z2 = 88,
  efunc_gen_FoldTileW_L1D1 = 89,
  efunc_gen_FoldTileW_L1Z0 = 90,
  efunc_gen_Modify_L1D1 = 91,
  efunc_gen_Modify_L1Z0 = 92,
  efunc_gen_DoMapAccum_S1A1Z0 = 93,
  efunc_gen_Fetch_Z5 = 94,
  efunc_gen_Pipe_S2L1Z0 = 95,
  efunc_gen_FilterOverlapped_Z0 = 96,
  efunc_gen_GST_L2Z0 = 97,
  efunc_gen_GST_L3Z0 = 98,
  efunc_gen_GST_L1Z0 = 99,
  efunc_gen_FilterPatternPos_D2 = 100,
  efunc_gen_FilterPatternPos_Z0 = 101,
  efunc_gen_Map_Z4 = 102,
  efunc_gen_Fetch_Z6 = 103,
  efunc_gen_FilterResultPos_Z0 = 104,
  efunc_gen_RejectTile_L1L1Z0 = 105,
  efunc_gen_Reduce_S1A1Z0 = 106,
  efunc_gen_Fetch_Z7 = 107,
  efunc_gen_FilterResultPos_D2 = 108,
  efunc_gen_Fetch_Z8 = 109,
  efunc_gen_GST_L2 = 110,
  efunc_gen_GST_L3D1 = 111,
};


enum ident {
  ident_NoOverlap = 0,
  ident_AsIsE = 1,
  ident_Num = 2,
  ident_Tile = 3,
  ident_AsIs = 4,
  ident_LEFTm_EDGE = 5,
  ident_RIGHTm_EDGE = 6,
  ident_RemovedTile = 7,
  ident_TkVariable = 8,
  ident_HalfReuse = 9,
  ident_Symbol = 10,
  ident_Reuse = 11,
  ident_Mu = 12,
  ident_Up = 13,
  ident_Evm_met = 14,
  ident_Residue = 15,
  ident_u_u_Metau_Residue = 16,
  ident_Apply = 17,
  ident_Map = 18,
  ident_Reduce = 19,
  ident_Fetch = 20,
  ident_MapAccum = 21,
  ident_DoMapAccum = 22,
  ident_UnBracket = 23,
  ident_DelAccumulator = 24,
  ident_Inc = 25,
  ident_Dec = 26,
  ident_Pipe = 27,
  ident_GST = 28,
  ident_Enum = 29,
  ident_DeEnum = 30,
  ident_TileCandidates = 31,
  ident_EnumExprs = 32,
  ident_DoOverlapOffsets = 33,
  ident_OverlapChain = 34,
  ident_ZipItems = 35,
  ident_GlueTiles = 36,
  ident_GlueNextTile = 37,
  ident_FoldTilem_EEnd = 38,
  ident_FilterOverlapped = 39,
  ident_FindHeavyTile = 40,
  ident_RejectTile = 41,
  ident_FilterPatternPos = 42,
  ident_FilterResultPos = 43,
  ident_FoldTile = 44,
  ident_FoldTileW = 45,
  ident_ReplaceTile = 46,
  ident_Modify = 47,
  ident_DoModify = 48,
  ident_OverlapItem = 49,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Mu/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


static refalrts::FnResult func_u_u_Metau_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & __Meta_Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Metau_Residue("__Meta_Residue", COOKIE1_, COOKIE2_, func_u_u_Metau_Residue);


static refalrts::FnResult func_Apply(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Apply/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply/4 s.Fn#1/5 e.Argument#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.Argument#1 as range 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.Argument#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/7 HalfReuse: & $table/1 } >/9 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

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
  //DEBUG: e.Argument#1: 2
  //DEBUG: t.Closure#1: 9
  //DEBUG: e.Bounded#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply/4 } Tile{ AsIs: t.Closure#1/9 } Tile{ AsIs: e.Bounded#1/7 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Apply("Apply", COOKIE1_, COOKIE2_, func_Apply);


static refalrts::FnResult func_Map(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Map/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Map/4 s.Fn#1/5 t.Next#1/9 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.Tail#1 as range 11
      //DEBUG: t.Next#1: 9
      //DEBUG: s.Fn#1: 5
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: t.Next#1/9 } & $table/13 >/14 </15 & Map/16 s.Fn#1/5/17 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[13], functions[efunc_d_table]);
      refalrts::alloc_close_call(vm, context[14]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_Map]);
      refalrts::copy_stvar(vm, context[17], context[5]);
      refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map/4 (/5 t.#0/15 e.0#0/13 )/6 t.Next#1/9 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
        continue;
      // closed e.Tail#1 as range 11
      context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
      if( ! context[16] )
        continue;
      // closed e.0#0 as range 13
      //DEBUG: t.Next#1: 9
      //DEBUG: e.Tail#1: 11
      //DEBUG: t.#0: 15
      //DEBUG: e.0#0: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </17 & Apply@3/18 t.#0/15/19 e.0#0/13/21 Tile{ AsIs: t.Next#1/9 } >/23 Tile{ AsIs: </0 AsIs: & Map/4 AsIs: (/5 AsIs: t.#0/15 AsIs: e.0#0/13 AsIs: )/6 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_Apply_Z3]);
      refalrts::copy_evar(vm, context[19], context[20], context[15], context[16]);
      refalrts::copy_evar(vm, context[21], context[22], context[13], context[14]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map/4 t.Fn#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/9 } >/13 </14 & Map/15 t.Fn#1/5/16 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Map]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map/4 t.Fn#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map/4 t.Fn#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Map("Map", COOKIE1_, COOKIE2_, func_Map);


static refalrts::FnResult func_gen_Reduce_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Reduce$1=1/4 t.Fn#1/5 (/9 e.Tail#1/7 )/10 t.Acc#2/11 >/1
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
  // closed e.Tail#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Tail#1: 7
  //DEBUG: t.Acc#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#2/11 } Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Reduce]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1("Reduce$1=1", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1);


static refalrts::FnResult func_Reduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Reduce/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce/4 t.new#1/5 t.new#2/7 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 t.Next#1/11 e.Tail#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.Tail#1 as range 9
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 11
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce$1=1/14 t.Fn#1/5/15 (/17 Tile{ AsIs: e.Tail#1/9 } )/18 Tile{ AsIs: </0 Reuse: & Apply@2/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/19 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce/4 t.Fn#1/5 t.Acc#1/7 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce/4 t.Fn#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Reduce("Reduce", COOKIE1_, COOKIE2_, func_Reduce);


static refalrts::FnResult func_Fetch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
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
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Argument#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 } Tile{ AsIs: t.Function#1/5 } Tile{ AsIs: e.Argument#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Apply]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Fetch("Fetch", COOKIE1_, COOKIE2_, func_Fetch);


static refalrts::FnResult func_MapAccum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & MapAccum/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
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
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 } (/9 )/10 Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MapAccum("MapAccum", COOKIE1_, COOKIE2_, func_MapAccum);


static refalrts::FnResult func_gen_DoMapAccum_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoMapAccum$1=1/4 t.Fn#1/5 (/9 e.Scanned#1/7 )/10 (/13 e.Tail#1/11 )/14 t.Acc#2/15 e.StepScanned#2/2 >/1
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
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Scanned#1 as range 7
  // closed e.Tail#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#2 as range 2
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 11
  //DEBUG: t.Acc#2: 15
  //DEBUG: e.StepScanned#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#2/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned#1/7 } Tile{ AsIs: e.StepScanned#2/2 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1("DoMapAccum$1=1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1);


static refalrts::FnResult func_DoMapAccum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & DoMapAccum/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum/4 t.new#1/5 t.new#2/7 (/11 e.new#3/9 )/12 e.new#4/2 >/1
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
  // closed e.new#3 as range 9
  // closed e.new#4 as range 2
  do {
    // </0 & DoMapAccum/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/13 )/12 t.Next#1/17 e.Tail#1/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.Scanned#1 as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 15
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Acc#1: 7
    //DEBUG: e.Scanned#1: 13
    //DEBUG: t.Next#1: 17
    //DEBUG: e.Tail#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 Tile{ AsIs: e.Tail#1/15 } )/20 </21 & Apply@2/22 t.Fn#1/5/23 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Apply_Z2]);
    refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[20], context[24] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum/4 t.Fn#1/5 t.Acc#1/7 (/11 e.Scanned#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 9
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: e.Scanned#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum/4 t.Fn#1/5 {REMOVED TILE} (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccum("DoMapAccum", COOKIE1_, COOKIE2_, func_DoMapAccum);


static refalrts::FnResult func_UnBracket(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //DEBUG: e.Expr#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UnBracket/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnBracket("UnBracket", COOKIE1_, COOKIE2_, func_UnBracket);


static refalrts::FnResult func_DelAccumulator(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
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
  //DEBUG: t.Acc#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DelAccumulator/4 t.Acc#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DelAccumulator("DelAccumulator", COOKIE1_, COOKIE2_, func_DelAccumulator);


static refalrts::FnResult func_Inc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Inc/4 e.Num#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Num#1 as range 2
  //DEBUG: e.Num#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: e.Num#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Add]);
  refalrts::reinit_number(context[4], 1UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Inc("Inc", COOKIE1_, COOKIE2_, func_Inc);


static refalrts::FnResult func_Dec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Dec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Dec/4 s.Num#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.Num#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Num#1/7 HalfReuse: 1/1 } >/8 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[8]);
    refalrts::update_name(context[4], functions[efunc_Sub]);
    refalrts::reinit_number(context[1], 1UL);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Dec/4 e.Num#1/2 >/1
  // closed e.Num#1 as range 2
  //DEBUG: e.Num#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 } (/5 Tile{ AsIs: e.Num#1/2 } )/6 1/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::alloc_number(vm, context[7], 1UL);
  refalrts::update_name(context[4], functions[efunc_Sub]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Dec("Dec", COOKIE1_, COOKIE2_, func_Dec);


static refalrts::FnResult func_gen_Pipe_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Pipe$2\1/4 t.Func#1/5 (/9 e.Funcs#1/7 )/10 e.Arg#2/2 >/1
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
  //DEBUG: t.Func#1: 5
  //DEBUG: e.Funcs#1: 7
  //DEBUG: e.Arg#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Apply/12 Tile{ AsIs: t.Func#1/5 } Tile{ AsIs: e.Arg#2/2 } >/13 </14 Tile{ HalfReuse: & Pipe/9 AsIs: e.Funcs#1/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Apply]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_name(context[9], functions[efunc_Pipe]);
  refalrts::reinit_close_call(context[10]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1("Pipe$2\\1", COOKIE1_, COOKIE2_, func_gen_Pipe_S2L1);


static refalrts::FnResult func_gen_Pipe_S3L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Pipe$3\1/4 e.Arg#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#2 as range 2
  //DEBUG: e.Arg#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe$3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Pipe_S3L1("Pipe$3\\1", COOKIE1_, COOKIE2_, func_gen_Pipe_S3L1);


static refalrts::FnResult func_Pipe(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Pipe/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Pipe/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Pipe/4 t.Func#1/7 >/1
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;
      //DEBUG: t.Func#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Func#1/7 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pipe/4 t.Func#1/7 e.Funcs#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Funcs#1 as range 9
    //DEBUG: t.Func#1: 7
    //DEBUG: e.Funcs#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: [*]/0 Reuse: & Pipe$2\1/4 AsIs: t.Func#1/7 } (/11 Tile{ AsIs: e.Funcs#1/9 } )/12 Tile{ HalfReuse: {*}/1 ]] }
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_Pipe_S2L1]);
    refalrts::reinit_unwrapped_closure(context[1], context[0]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    refalrts::wrap_closure( context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Pipe/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: & Pipe$3\1/1 ]] }
  refalrts::reinit_name(context[1], functions[efunc_gen_Pipe_S3L1]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Pipe("Pipe", COOKIE1_, COOKIE2_, func_Pipe);


static refalrts::FnResult func_gen_GST_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & GST\2/4 (/7 (/11 e.Pattern#2/9 )/12 (/15 e.Result#2/13 )/16 )/8 t.Tile#2/17 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#2 as range 9
  // closed e.Result#2 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: t.Tile#2: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & ReplaceTile/7 AsIs: (/11 AsIs: e.Pattern#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 } Tile{ AsIs: t.Tile#2/17 AsIs: >/1 } Tile{ AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_ReplaceTile]);
  refalrts::link_brackets( context[0], context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[17], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GST_L2("GST\\2", COOKIE1_, COOKIE2_, func_gen_GST_L2);


static refalrts::FnResult func_GST(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  // </0 & GST/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GST/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  do {
    // </0 & GST/4 (/7 e.new#3/13 )/8 (/11 t.new#4/17 e.new#5/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.new#3 as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    // closed e.new#5 as range 15
    do {
      // </0 & GST/4 (/7 t.0#0/23 e.0#0/19 )/8 (/11 t.#0/17 e.#0/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      // closed e.#0 as range 21
      context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      // closed e.0#0 as range 19
      //DEBUG: t.#0: 17
      //DEBUG: e.#0: 21
      //DEBUG: t.0#0: 23
      //DEBUG: e.0#0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </25 & Fetch@3/26 (/27 </28 & Fetch@1/29 </30 & EnumExprs/31 1/32 Tile{ AsIs: (/11 } (/33 0/34 t.0#0/23/35 )/37 )/38 (/39 e.0#0/19/40 )/42 (/43 (/44 0/45 t.#0/17/46 )/48 )/49 (/50 e.#0/21/51 )/53 Tile{ AsIs: >/1 } Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: t.0#0/23 AsIs: e.0#0/19 AsIs: )/8 } Tile{ AsIs: t.#0/17 AsIs: e.#0/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_gen_Fetch_Z3]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_Fetch_Z1]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_EnumExprs]);
      refalrts::alloc_number(vm, context[32], 1UL);
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_number(vm, context[34], 0UL);
      refalrts::copy_evar(vm, context[35], context[36], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::alloc_open_bracket(vm, context[39]);
      refalrts::copy_evar(vm, context[40], context[41], context[19], context[20]);
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_open_bracket(vm, context[44]);
      refalrts::alloc_number(vm, context[45], 0UL);
      refalrts::copy_evar(vm, context[46], context[47], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::copy_evar(vm, context[51], context[52], context[21], context[22]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::reinit_close_call(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[27], context[4] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[30] );
      refalrts::link_brackets( context[50], context[53] );
      refalrts::link_brackets( context[43], context[49] );
      refalrts::link_brackets( context[44], context[48] );
      refalrts::link_brackets( context[39], context[42] );
      refalrts::link_brackets( context[11], context[38] );
      refalrts::link_brackets( context[33], context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[17], context[12] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[33], context[53] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[25], context[32] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GST/4 (/7 )/8 (/11 t.new#6/17 e.new#7/19 )/12 >/1
    context[19] = context[15];
    context[20] = context[16];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.new#7 as range 19
    do {
      // </0 & GST/4 (/7 )/8 (/11 t.#0/17 t.0#0/23 e.0#0/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      context[24] = refalrts::tvar_left( context[23], context[21], context[22] );
      if( ! context[24] )
        continue;
      // closed e.0#0 as range 21
      //DEBUG: t.#0: 17
      //DEBUG: t.0#0: 23
      //DEBUG: e.0#0: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </25 & Fetch@3/26 (/27 Tile{ HalfReuse: </1 } & Fetch@1/28 </29 & EnumExprs/30 2/31 (/32 )/33 (/34 )/35 (/36 (/37 0/38 t.#0/17/39 )/41 (/42 1/43 t.0#0/23/44 )/46 )/47 (/48 e.0#0/21/49 )/51 Tile{ HalfReuse: >/0 HalfReuse: >/4 HalfReuse: )/7 HalfReuse: (/8 HalfReuse: )/11 AsIs: t.#0/17 AsIs: t.0#0/23 AsIs: e.0#0/21 HalfReuse: >/12 } Tile{ ]] }
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_gen_Fetch_Z3]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_gen_Fetch_Z1]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_EnumExprs]);
      refalrts::alloc_number(vm, context[31], 2UL);
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_number(vm, context[38], 0UL);
      refalrts::copy_evar(vm, context[39], context[40], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_number(vm, context[43], 1UL);
      refalrts::copy_evar(vm, context[44], context[45], context[23], context[24]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::copy_evar(vm, context[49], context[50], context[21], context[22]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::reinit_open_call(context[1]);
      refalrts::reinit_close_call(context[0]);
      refalrts::reinit_close_call(context[4]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[27], context[7] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::link_brackets( context[48], context[51] );
      refalrts::link_brackets( context[36], context[47] );
      refalrts::link_brackets( context[42], context[46] );
      refalrts::link_brackets( context[37], context[41] );
      refalrts::link_brackets( context[34], context[35] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[12] );
      res = refalrts::splice_evar( res, context[28], context[51] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[25], context[27] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GST/4 (/7 )/8 (/11 t.#0/17 )/12 >/1
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: t.#0: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </21 & Fetch@3/22 (/23 Tile{ AsIs: </0 Reuse: & TileCandidates\1*1/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 } (/24 0/25 Tile{ AsIs: t.#0/17 AsIs: )/12 HalfReuse: )/1 } >/26 )/27 (/28 )/29 t.#0/17/30 >/32 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_Fetch_Z3]);
      refalrts::alloc_open_bracket(vm, context[23]);
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_number(vm, context[25], 0UL);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_close_bracket(vm, context[27]);
      refalrts::alloc_open_bracket(vm, context[28]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::copy_evar(vm, context[30], context[31], context[17], context[18]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::update_name(context[4], functions[efunc_gen_TileCandidates_L1D1]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[28], context[29] );
      refalrts::link_brackets( context[23], context[27] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[1] );
      refalrts::link_brackets( context[24], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[26], context[32] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GST/4 (/7 )/8 (/11 t.#0/17 e.#0/21 )/12 >/1
    context[21] = context[19];
    context[22] = context[20];
    // closed e.#0 as range 21
    //DEBUG: t.#0: 17
    //DEBUG: e.#0: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@3/4 AsIs: (/7 HalfReuse: </8 HalfReuse: & Fetch@1/11 } </23 & EnumExprs@0/24 1/25 (/26 )/27 (/28 )/29 (/30 (/31 0/32 t.#0/17/33 )/35 )/36 (/37 e.#0/21/38 )/40 >/41 Tile{ AsIs: >/1 } )/42 (/43 )/44 Tile{ AsIs: t.#0/17 AsIs: e.#0/21 HalfReuse: >/12 } Tile{ ]] }
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_EnumExprs_Z0]);
    refalrts::alloc_number(vm, context[25], 1UL);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_open_bracket(vm, context[31]);
    refalrts::alloc_number(vm, context[32], 0UL);
    refalrts::copy_evar(vm, context[33], context[34], context[17], context[18]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::copy_evar(vm, context[38], context[39], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::alloc_close_call(vm, context[41]);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::alloc_open_bracket(vm, context[43]);
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z3]);
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[11], functions[efunc_gen_Fetch_Z1]);
    refalrts::reinit_close_call(context[12]);
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[43], context[44] );
    refalrts::link_brackets( context[7], context[42] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[37], context[40] );
    refalrts::link_brackets( context[30], context[36] );
    refalrts::link_brackets( context[31], context[35] );
    refalrts::link_brackets( context[28], context[29] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[12] );
    res = refalrts::splice_evar( res, context[42], context[44] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[23], context[41] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GST/4 (/7 e.new#3/13 )/8 (/11 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.new#3 as range 13
    do {
      // </0 & GST/4 (/7 t.new#4/17 e.new#5/15 )/8 (/11 )/12 >/1
      context[15] = context[13];
      context[16] = context[14];
      context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
      if( ! context[18] )
        continue;
      // closed e.new#5 as range 15
      do {
        // </0 & GST/4 (/7 t.#0/17 t.0#0/21 e.0#0/19 )/8 (/11 )/12 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
        if( ! context[22] )
          continue;
        // closed e.0#0 as range 19
        //DEBUG: t.#0: 17
        //DEBUG: t.0#0: 21
        //DEBUG: e.0#0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </23 & Fetch@3/24 (/25 </26 & Fetch@1/27 </28 & EnumExprs/29 2/30 (/31 (/32 0/33 t.#0/17/34 )/36 (/37 1/38 t.0#0/21/39 )/41 )/42 (/43 e.0#0/19/44 )/46 (/47 )/48 (/49 Tile{ AsIs: )/12 AsIs: >/1 } Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: t.#0/17 AsIs: t.0#0/21 AsIs: e.0#0/19 AsIs: )/8 HalfReuse: >/11 } Tile{ ]] }
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_gen_Fetch_Z3]);
        refalrts::alloc_open_bracket(vm, context[25]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_gen_Fetch_Z1]);
        refalrts::alloc_open_call(vm, context[28]);
        refalrts::alloc_name(vm, context[29], functions[efunc_EnumExprs]);
        refalrts::alloc_number(vm, context[30], 2UL);
        refalrts::alloc_open_bracket(vm, context[31]);
        refalrts::alloc_open_bracket(vm, context[32]);
        refalrts::alloc_number(vm, context[33], 0UL);
        refalrts::copy_evar(vm, context[34], context[35], context[17], context[18]);
        refalrts::alloc_close_bracket(vm, context[36]);
        refalrts::alloc_open_bracket(vm, context[37]);
        refalrts::alloc_number(vm, context[38], 1UL);
        refalrts::copy_evar(vm, context[39], context[40], context[21], context[22]);
        refalrts::alloc_close_bracket(vm, context[41]);
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::alloc_open_bracket(vm, context[43]);
        refalrts::copy_evar(vm, context[44], context[45], context[19], context[20]);
        refalrts::alloc_close_bracket(vm, context[46]);
        refalrts::alloc_open_bracket(vm, context[47]);
        refalrts::alloc_close_bracket(vm, context[48]);
        refalrts::alloc_open_bracket(vm, context[49]);
        refalrts::reinit_close_call(context[0]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::reinit_close_call(context[11]);
        refalrts::push_stack( vm, context[11] );
        refalrts::push_stack( vm, context[23] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[25], context[4] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[28] );
        refalrts::link_brackets( context[49], context[12] );
        refalrts::link_brackets( context[47], context[48] );
        refalrts::link_brackets( context[43], context[46] );
        refalrts::link_brackets( context[31], context[42] );
        refalrts::link_brackets( context[37], context[41] );
        refalrts::link_brackets( context[32], context[36] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[23], context[49] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GST/4 (/7 t.#0/17 )/8 (/11 )/12 >/1
        if( ! refalrts::empty_seq( context[15], context[16] ) )
          continue;
        //DEBUG: t.#0: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </19 & Fetch@3/20 (/21 </22 & TileCandidates\1*1/23 Tile{ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: 0/7 AsIs: t.#0/17 AsIs: )/8 HalfReuse: )/11 HalfReuse: (/12 HalfReuse: )/1 } >/24 )/25 (/26 t.#0/17/27 )/29 >/30 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_gen_Fetch_Z3]);
        refalrts::alloc_open_bracket(vm, context[21]);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_gen_TileCandidates_L1D1]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::alloc_close_bracket(vm, context[25]);
        refalrts::alloc_open_bracket(vm, context[26]);
        refalrts::copy_evar(vm, context[27], context[28], context[17], context[18]);
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::alloc_close_call(vm, context[30]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_number(context[7], 0UL);
        refalrts::reinit_close_bracket(context[11]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[26], context[29] );
        refalrts::link_brackets( context[21], context[25] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[22] );
        refalrts::link_brackets( context[12], context[1] );
        refalrts::link_brackets( context[0], context[11] );
        refalrts::link_brackets( context[4], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[24], context[30] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[19], context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GST/4 (/7 t.#0/17 e.#0/19 )/8 (/11 )/12 >/1
      context[19] = context[15];
      context[20] = context[16];
      // closed e.#0 as range 19
      //DEBUG: t.#0: 17
      //DEBUG: e.#0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </21 & Fetch@3/22 (/23 </24 & Fetch@1/25 </26 & EnumExprs@0/27 1/28 (/29 (/30 0/31 t.#0/17/32 )/34 )/35 (/36 e.#0/19/37 )/39 (/40 )/41 (/42 Tile{ AsIs: )/12 AsIs: >/1 } Tile{ HalfReuse: >/0 HalfReuse: )/4 AsIs: (/7 AsIs: t.#0/17 AsIs: e.#0/19 AsIs: )/8 HalfReuse: >/11 } Tile{ ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_Fetch_Z3]);
      refalrts::alloc_open_bracket(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_gen_Fetch_Z1]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_gen_EnumExprs_Z0]);
      refalrts::alloc_number(vm, context[28], 1UL);
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_number(vm, context[31], 0UL);
      refalrts::copy_evar(vm, context[32], context[33], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::copy_evar(vm, context[37], context[38], context[19], context[20]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::alloc_close_bracket(vm, context[41]);
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::reinit_close_call(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_close_call(context[11]);
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[23], context[4] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[42], context[12] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::link_brackets( context[36], context[39] );
      refalrts::link_brackets( context[29], context[35] );
      refalrts::link_brackets( context[30], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[21], context[42] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GST/4 (/7 )/8 (/11 )/12 >/1
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & Fetch@3/16 (/17 Tile{ AsIs: </0 Reuse: & TileCandidates\1*1/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 AsIs: )/12 AsIs: >/1 } )/18 (/19 )/20 >/21 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_gen_Fetch_Z3]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_TileCandidates_L1D1]);
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[21] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GST/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Result#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@3/4 AsIs: (/7 } </13 & Fetch@1/14 </15 & EnumExprs@0/16 0/17 (/18 )/19 (/20 Tile{ AsIs: e.Pattern#1/5 } )/21 (/22 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } >/23 )/24 (/25 e.Pattern#1/5/26 )/28 e.Result#1/9/29 >/31 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_Fetch_Z1]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_EnumExprs_Z0]);
  refalrts::alloc_number(vm, context[17], 0UL);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::copy_evar(vm, context[29], context[30], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z3]);
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[25], context[28] );
  refalrts::link_brackets( context[7], context[24] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[22], context[8] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[31] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GST("GST", 0U, 0U, func_GST);


static refalrts::FnResult func_Enum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Enum/4 e.Items#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Items#1 as range 2
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DelAccumulator/4 } </5 & DoMapAccum@1/6 0/7 (/8 )/9 Tile{ AsIs: e.Items#1/2 } >/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::alloc_number(vm, context[7], 0UL);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_DelAccumulator]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Enum("Enum", COOKIE1_, COOKIE2_, func_Enum);


static refalrts::FnResult func_DeEnum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & DeEnum/4 e.Items#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Items#1 as range 2
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: e.Items#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DeEnum("DeEnum", COOKIE1_, COOKIE2_, func_DeEnum);


static refalrts::FnResult func_TileCandidates(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & TileCandidates/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & TileCandidates/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  do {
    // </0 & TileCandidates/4 (/7 e.new#3/13 )/8 (/11 t.new#4/17 e.new#5/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.new#3 as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    // closed e.new#5 as range 15
    do {
      // </0 & TileCandidates/4 (/7 t.0#0/23 e.0#0/19 )/8 (/11 t.#0/17 e.#0/21 )/12 >/1
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      // closed e.#0 as range 21
      context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      // closed e.0#0 as range 19
      //DEBUG: t.#0: 17
      //DEBUG: e.#0: 21
      //DEBUG: t.0#0: 23
      //DEBUG: e.0#0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@1/4 HalfReuse: </7 } & EnumExprs/25 1/26 (/27 (/28 0/29 Tile{ AsIs: t.0#0/23 } )/30 )/31 (/32 Tile{ AsIs: e.0#0/19 } Tile{ AsIs: )/8 AsIs: (/11 } (/33 0/34 Tile{ AsIs: t.#0/17 } )/35 )/36 (/37 Tile{ AsIs: e.#0/21 } )/38 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[25], functions[efunc_EnumExprs]);
      refalrts::alloc_number(vm, context[26], 1UL);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_open_bracket(vm, context[28]);
      refalrts::alloc_number(vm, context[29], 0UL);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_number(vm, context[34], 0UL);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[7] );
      refalrts::link_brackets( context[37], context[38] );
      refalrts::link_brackets( context[11], context[36] );
      refalrts::link_brackets( context[33], context[35] );
      refalrts::link_brackets( context[32], context[8] );
      refalrts::link_brackets( context[27], context[31] );
      refalrts::link_brackets( context[28], context[30] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[35], context[37] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[30], context[32] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[25], context[29] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & TileCandidates/4 (/7 )/8 (/11 t.new#6/17 e.new#7/19 )/12 >/1
    context[19] = context[15];
    context[20] = context[16];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.new#7 as range 19
    do {
      // </0 & TileCandidates/4 (/7 )/8 (/11 t.#0/17 t.0#0/23 e.0#0/21 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      context[24] = refalrts::tvar_left( context[23], context[21], context[22] );
      if( ! context[24] )
        continue;
      // closed e.0#0 as range 21
      //DEBUG: t.#0: 17
      //DEBUG: t.0#0: 23
      //DEBUG: e.0#0: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@1/4 HalfReuse: </7 HalfReuse: & EnumExprs/8 HalfReuse: 2/11 } (/25 )/26 (/27 )/28 (/29 (/30 0/31 Tile{ AsIs: t.#0/17 } )/32 (/33 1/34 Tile{ AsIs: t.0#0/23 } )/35 )/36 (/37 Tile{ AsIs: e.0#0/21 } )/38 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_open_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_number(vm, context[31], 0UL);
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_number(vm, context[34], 1UL);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[8], functions[efunc_EnumExprs]);
      refalrts::reinit_number(context[11], 2UL);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[7] );
      refalrts::link_brackets( context[37], context[38] );
      refalrts::link_brackets( context[29], context[36] );
      refalrts::link_brackets( context[33], context[35] );
      refalrts::link_brackets( context[30], context[32] );
      refalrts::link_brackets( context[27], context[28] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[35], context[37] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[32], context[34] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[25], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & TileCandidates/4 (/7 )/8 (/11 t.#0/17 )/12 >/1
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: t.#0: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & TileCandidates\1*1/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 } (/21 0/22 Tile{ AsIs: t.#0/17 } )/23 Tile{ AsIs: )/12 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::alloc_number(vm, context[22], 0UL);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::update_name(context[4], functions[efunc_gen_TileCandidates_L1D1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[21], context[23] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & TileCandidates/4 (/7 )/8 (/11 t.#0/17 e.#0/21 )/12 >/1
    context[21] = context[19];
    context[22] = context[20];
    // closed e.#0 as range 21
    //DEBUG: t.#0: 17
    //DEBUG: e.#0: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@1/4 HalfReuse: </7 HalfReuse: & EnumExprs@0/8 HalfReuse: 1/11 } (/23 )/24 (/25 )/26 (/27 (/28 0/29 Tile{ AsIs: t.#0/17 } )/30 )/31 (/32 Tile{ AsIs: e.#0/21 } )/33 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_number(vm, context[29], 0UL);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_close_bracket(vm, context[31]);
    refalrts::alloc_open_bracket(vm, context[32]);
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[8], functions[efunc_gen_EnumExprs_Z0]);
    refalrts::reinit_number(context[11], 1UL);
    refalrts::reinit_close_call(context[12]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::link_brackets( context[27], context[31] );
    refalrts::link_brackets( context[28], context[30] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[23], context[29] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TileCandidates/4 (/7 e.new#3/13 )/8 (/11 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.new#3 as range 13
    do {
      // </0 & TileCandidates/4 (/7 t.new#4/17 e.new#5/15 )/8 (/11 )/12 >/1
      context[15] = context[13];
      context[16] = context[14];
      context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
      if( ! context[18] )
        continue;
      // closed e.new#5 as range 15
      do {
        // </0 & TileCandidates/4 (/7 t.#0/17 t.0#0/21 e.0#0/19 )/8 (/11 )/12 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[22] = refalrts::tvar_left( context[21], context[19], context[20] );
        if( ! context[22] )
          continue;
        // closed e.0#0 as range 19
        //DEBUG: t.#0: 17
        //DEBUG: t.0#0: 21
        //DEBUG: e.0#0: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@1/4 HalfReuse: </7 } & EnumExprs/23 2/24 (/25 (/26 0/27 Tile{ AsIs: t.#0/17 } )/28 (/29 1/30 Tile{ AsIs: t.0#0/21 } )/31 )/32 (/33 Tile{ AsIs: e.0#0/19 } )/34 (/35 Tile{ AsIs: )/8 AsIs: (/11 AsIs: )/12 AsIs: >/1 } >/36 Tile{ ]] }
        refalrts::alloc_name(vm, context[23], functions[efunc_EnumExprs]);
        refalrts::alloc_number(vm, context[24], 2UL);
        refalrts::alloc_open_bracket(vm, context[25]);
        refalrts::alloc_open_bracket(vm, context[26]);
        refalrts::alloc_number(vm, context[27], 0UL);
        refalrts::alloc_close_bracket(vm, context[28]);
        refalrts::alloc_open_bracket(vm, context[29]);
        refalrts::alloc_number(vm, context[30], 1UL);
        refalrts::alloc_close_bracket(vm, context[31]);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::alloc_open_bracket(vm, context[33]);
        refalrts::alloc_close_bracket(vm, context[34]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
        refalrts::reinit_open_call(context[7]);
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[7] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[35], context[8] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::link_brackets( context[25], context[32] );
        refalrts::link_brackets( context[29], context[31] );
        refalrts::link_brackets( context[26], context[28] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[8], context[1] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[31], context[33] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[28], context[30] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[23], context[27] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & TileCandidates/4 (/7 t.#0/17 )/8 (/11 )/12 >/1
        if( ! refalrts::empty_seq( context[15], context[16] ) )
          continue;
        //DEBUG: t.#0: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & TileCandidates\1*1/4 AsIs: (/7 } (/19 0/20 Tile{ AsIs: t.#0/17 } )/21 Tile{ AsIs: )/8 AsIs: (/11 AsIs: )/12 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[19]);
        refalrts::alloc_number(vm, context[20], 0UL);
        refalrts::alloc_close_bracket(vm, context[21]);
        refalrts::update_name(context[4], functions[efunc_gen_TileCandidates_L1D1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[19], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & TileCandidates/4 (/7 t.#0/17 e.#0/19 )/8 (/11 )/12 >/1
      context[19] = context[15];
      context[20] = context[16];
      // closed e.#0 as range 19
      //DEBUG: t.#0: 17
      //DEBUG: e.#0: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@1/4 HalfReuse: </7 } & EnumExprs@0/21 1/22 (/23 (/24 0/25 Tile{ AsIs: t.#0/17 } )/26 )/27 (/28 Tile{ AsIs: e.#0/19 } )/29 (/30 Tile{ AsIs: )/8 AsIs: (/11 AsIs: )/12 AsIs: >/1 } >/31 Tile{ ]] }
      refalrts::alloc_name(vm, context[21], functions[efunc_gen_EnumExprs_Z0]);
      refalrts::alloc_number(vm, context[22], 1UL);
      refalrts::alloc_open_bracket(vm, context[23]);
      refalrts::alloc_open_bracket(vm, context[24]);
      refalrts::alloc_number(vm, context[25], 0UL);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_close_bracket(vm, context[27]);
      refalrts::alloc_open_bracket(vm, context[28]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
      refalrts::reinit_open_call(context[7]);
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[8] );
      refalrts::link_brackets( context[28], context[29] );
      refalrts::link_brackets( context[23], context[27] );
      refalrts::link_brackets( context[24], context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[8], context[1] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[26], context[28] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[21], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & TileCandidates/4 (/7 )/8 (/11 )/12 >/1
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & TileCandidates\1*1/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 AsIs: )/12 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_TileCandidates_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & TileCandidates/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Result#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@1/4 HalfReuse: </7 } & EnumExprs@0/13 0/14 (/15 )/16 (/17 Tile{ AsIs: e.Pattern#1/5 } )/18 (/19 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } >/20 Tile{ ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_EnumExprs_Z0]);
  refalrts::alloc_number(vm, context[14], 0UL);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[19], context[8] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TileCandidates("TileCandidates", COOKIE1_, COOKIE2_, func_TileCandidates);


static refalrts::FnResult func_EnumExprs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & EnumExprs/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EnumExprs/4 s.new#1/21 (/19 e.new#2/17 )/20 (/15 e.new#3/13 )/16 (/11 e.new#4/9 )/12 (/7 e.new#5/5 )/8 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.new#2 as range 17
  // closed e.new#3 as range 13
  // closed e.new#4 as range 9
  // closed e.new#5 as range 5
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & EnumExprs/4 s.new#6/21 (/19 e.new#7/22 )/20 (/15 e.new#8/24 )/16 (/11 e.new#9/26 )/12 (/7 t.new#10/30 e.new#11/28 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[13];
    context[25] = context[14];
    context[26] = context[9];
    context[27] = context[10];
    context[28] = context[5];
    context[29] = context[6];
    // closed e.new#7 as range 22
    // closed e.new#8 as range 24
    // closed e.new#9 as range 26
    context[31] = refalrts::tvar_left( context[30], context[28], context[29] );
    if( ! context[31] )
      continue;
    // closed e.new#11 as range 28
    do {
      // </0 & EnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/32 )/20 (/15 t.PatternItem#1/40 e.Pattern#1/34 )/16 (/11 e.ScannedResult#1/36 )/12 (/7 t.ResultItem#1/30 e.Result#1/38 )/8 >/1
      context[32] = context[22];
      context[33] = context[23];
      context[34] = context[24];
      context[35] = context[25];
      context[36] = context[26];
      context[37] = context[27];
      context[38] = context[28];
      context[39] = context[29];
      // closed e.ScannedPattern#1 as range 32
      // closed e.ScannedResult#1 as range 36
      // closed e.Result#1 as range 38
      context[41] = refalrts::tvar_left( context[40], context[34], context[35] );
      if( ! context[41] )
        continue;
      // closed e.Pattern#1 as range 34
      //DEBUG: t.ResultItem#1: 30
      //DEBUG: s.Num#1: 21
      //DEBUG: e.ScannedPattern#1: 32
      //DEBUG: e.ScannedResult#1: 36
      //DEBUG: e.Result#1: 38
      //DEBUG: t.PatternItem#1: 40
      //DEBUG: e.Pattern#1: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EnumExprs/4 } </42 & Add/43 1/44 Tile{ AsIs: s.Num#1/21 } >/45 Tile{ AsIs: (/19 AsIs: e.ScannedPattern#1/32 HalfReuse: (/20 HalfReuse: s.Num1 #21/15 AsIs: t.PatternItem#1/40 } )/46 )/47 (/48 Tile{ AsIs: e.Pattern#1/34 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/36 HalfReuse: (/12 HalfReuse: s.Num1 #21/7 AsIs: t.ResultItem#1/30 } )/49 )/50 (/51 Tile{ AsIs: e.Result#1/38 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[44], 1UL);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_close_bracket(vm, context[50]);
      refalrts::alloc_open_bracket(vm, context[51]);
      refalrts::reinit_open_bracket(context[20]);
      refalrts::reinit_svar( context[15], context[21] );
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_svar( context[7], context[21] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[51], context[8] );
      refalrts::link_brackets( context[11], context[50] );
      refalrts::link_brackets( context[12], context[49] );
      refalrts::link_brackets( context[48], context[16] );
      refalrts::link_brackets( context[19], context[47] );
      refalrts::link_brackets( context[20], context[46] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[42] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[49], context[51] );
      res = refalrts::splice_evar( res, context[16], context[31] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[46], context[48] );
      res = refalrts::splice_evar( res, context[19], context[41] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/32 )/20 (/15 )/16 (/11 e.ScannedResult#1/34 )/12 (/7 t.ResultItem#1/30 e.Result#1/36 )/8 >/1
    context[32] = context[22];
    context[33] = context[23];
    context[34] = context[26];
    context[35] = context[27];
    context[36] = context[28];
    context[37] = context[29];
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;
    // closed e.ScannedPattern#1 as range 32
    // closed e.ScannedResult#1 as range 34
    // closed e.Result#1 as range 36
    //DEBUG: t.ResultItem#1: 30
    //DEBUG: s.Num#1: 21
    //DEBUG: e.ScannedPattern#1: 32
    //DEBUG: e.ScannedResult#1: 34
    //DEBUG: e.Result#1: 36

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EnumExprs/4 } </38 & Add/39 1/40 Tile{ AsIs: s.Num#1/21 } >/41 Tile{ AsIs: (/19 AsIs: e.ScannedPattern#1/32 AsIs: )/20 AsIs: (/15 AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/34 HalfReuse: (/12 HalfReuse: s.Num1 #21/7 AsIs: t.ResultItem#1/30 } )/42 )/43 (/44 Tile{ AsIs: e.Result#1/36 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[40], 1UL);
    refalrts::alloc_close_call(vm, context[41]);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_open_bracket(vm, context[44]);
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_svar( context[7], context[21] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[44], context[8] );
    refalrts::link_brackets( context[11], context[43] );
    refalrts::link_brackets( context[12], context[42] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[38] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[42], context[44] );
    res = refalrts::splice_evar( res, context[19], context[31] );
    res = refalrts::splice_elem( res, context[41] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[38], context[40] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EnumExprs/4 s.new#6/21 (/19 e.new#7/17 )/20 (/15 e.new#8/13 )/16 (/11 e.new#9/9 )/12 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 17
  // closed e.new#8 as range 13
  // closed e.new#9 as range 9
  do {
    // </0 & EnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/22 )/20 (/15 t.PatternItem#1/28 e.Pattern#1/24 )/16 (/11 e.ScannedResult#1/26 )/12 (/7 )/8 >/1
    context[22] = context[17];
    context[23] = context[18];
    context[24] = context[13];
    context[25] = context[14];
    context[26] = context[9];
    context[27] = context[10];
    // closed e.ScannedPattern#1 as range 22
    // closed e.ScannedResult#1 as range 26
    context[29] = refalrts::tvar_left( context[28], context[24], context[25] );
    if( ! context[29] )
      continue;
    // closed e.Pattern#1 as range 24
    //DEBUG: s.Num#1: 21
    //DEBUG: e.ScannedPattern#1: 22
    //DEBUG: e.ScannedResult#1: 26
    //DEBUG: t.PatternItem#1: 28
    //DEBUG: e.Pattern#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EnumExprs/4 } </30 & Add/31 1/32 Tile{ AsIs: s.Num#1/21 } >/33 Tile{ AsIs: (/19 AsIs: e.ScannedPattern#1/22 HalfReuse: (/20 HalfReuse: s.Num1 #21/15 AsIs: t.PatternItem#1/28 } )/34 )/35 (/36 Tile{ AsIs: e.Pattern#1/24 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/26 AsIs: )/12 AsIs: (/7 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[32], 1UL);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_open_bracket(vm, context[36]);
    refalrts::reinit_open_bracket(context[20]);
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[36], context[16] );
    refalrts::link_brackets( context[19], context[35] );
    refalrts::link_brackets( context[20], context[34] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[34], context[36] );
    res = refalrts::splice_evar( res, context[19], context[29] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/17 )/20 (/15 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedPattern#1 as range 17
  // closed e.ScannedResult#1 as range 9
  //DEBUG: s.Num#1: 21
  //DEBUG: e.ScannedPattern#1: 17
  //DEBUG: e.ScannedResult#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & EnumExprs/4 s.Num#1/21 (/19 {REMOVED TILE} )/20 (/15 {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.ScannedPattern#1/17 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumExprs("EnumExprs", COOKIE1_, COOKIE2_, func_EnumExprs);


static refalrts::FnResult func_DoOverlapOffsets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & DoOverlapOffsets/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoOverlapOffsets/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 17
  do {
    // </0 & DoOverlapOffsets/4 (/7 e.new#5/21 )/8 (/11 e.new#6/23 )/12 (/15 e.new#7/25 )/16 (/19 t.new#8/29 e.new#9/27 )/20 >/1
    context[21] = context[5];
    context[22] = context[6];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[13];
    context[26] = context[14];
    context[27] = context[17];
    context[28] = context[18];
    // closed e.new#5 as range 21
    // closed e.new#6 as range 23
    // closed e.new#7 as range 25
    context[30] = refalrts::tvar_left( context[29], context[27], context[28] );
    if( ! context[30] )
      continue;
    // closed e.new#9 as range 27
    do {
      // </0 & DoOverlapOffsets/4 (/7 e.Pattern#1/31 t.Last#1/39 )/8 (/11 e.OverlappedPattern#1/33 )/12 (/15 e.OverlappedResult#1/35 )/16 (/19 t.First#1/29 e.Result#1/37 )/20 >/1
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[23];
      context[34] = context[24];
      context[35] = context[25];
      context[36] = context[26];
      context[37] = context[27];
      context[38] = context[28];
      // closed e.OverlappedPattern#1 as range 33
      // closed e.OverlappedResult#1 as range 35
      // closed e.Result#1 as range 37
      context[40] = refalrts::tvar_right( context[39], context[31], context[32] );
      if( ! context[40] )
        continue;
      // closed e.Pattern#1 as range 31
      //DEBUG: t.First#1: 29
      //DEBUG: e.OverlappedPattern#1: 33
      //DEBUG: e.OverlappedResult#1: 35
      //DEBUG: e.Result#1: 37
      //DEBUG: t.Last#1: 39
      //DEBUG: e.Pattern#1: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & GlueTiles/4 HalfReuse: </7 } Tile{ HalfReuse: & ZipItems/8 AsIs: (/11 AsIs: e.OverlappedPattern#1/33 AsIs: )/12 AsIs: (/15 AsIs: e.OverlappedResult#1/35 AsIs: )/16 HalfReuse: >/19 } >/41 </42 & DoOverlapOffsets/43 (/44 Tile{ AsIs: e.Pattern#1/31 } )/45 (/46 Tile{ AsIs: t.Last#1/39 } e.OverlappedPattern#1/33/47 )/49 (/50 e.OverlappedResult#1/35/51 Tile{ AsIs: t.First#1/29 } )/53 (/54 Tile{ AsIs: e.Result#1/37 } Tile{ AsIs: )/20 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_DoOverlapOffsets]);
      refalrts::alloc_open_bracket(vm, context[44]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::copy_evar(vm, context[47], context[48], context[33], context[34]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::copy_evar(vm, context[51], context[52], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::update_name(context[4], functions[efunc_GlueTiles]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[8], functions[efunc_ZipItems]);
      refalrts::reinit_close_call(context[19]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[42] );
      refalrts::link_brackets( context[54], context[20] );
      refalrts::link_brackets( context[50], context[53] );
      refalrts::link_brackets( context[46], context[49] );
      refalrts::link_brackets( context[44], context[45] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[7] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[53], context[54] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[41], context[44] );
      res = refalrts::splice_evar( res, context[8], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoOverlapOffsets/4 (/7 )/8 (/11 e.OverlappedPattern#1/31 )/12 (/15 t.Skip#1/37 e.OverlappedResult#1/33 )/16 (/19 t.Next#1/29 e.Result#1/35 )/20 >/1
    context[31] = context[23];
    context[32] = context[24];
    context[33] = context[25];
    context[34] = context[26];
    context[35] = context[27];
    context[36] = context[28];
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.OverlappedPattern#1 as range 31
    // closed e.Result#1 as range 35
    context[38] = refalrts::tvar_left( context[37], context[33], context[34] );
    if( ! context[38] )
      continue;
    // closed e.OverlappedResult#1 as range 33
    //DEBUG: t.Next#1: 29
    //DEBUG: e.OverlappedPattern#1: 31
    //DEBUG: e.Result#1: 35
    //DEBUG: t.Skip#1: 37
    //DEBUG: e.OverlappedResult#1: 33

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GlueTiles/4 HalfReuse: </7 HalfReuse: & ZipItems/8 AsIs: (/11 AsIs: e.OverlappedPattern#1/31 AsIs: )/12 AsIs: (/15 AsIs: t.Skip#1/37 AsIs: e.OverlappedResult#1/33 AsIs: )/16 HalfReuse: >/19 } >/39 </40 & DoOverlapOffsets/41 (/42 )/43 (/44 e.OverlappedPattern#1/31/45 )/47 (/48 e.OverlappedResult#1/33/49 Tile{ AsIs: t.Next#1/29 } )/51 (/52 Tile{ AsIs: e.Result#1/35 } Tile{ AsIs: )/20 AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::alloc_open_call(vm, context[40]);
    refalrts::alloc_name(vm, context[41], functions[efunc_DoOverlapOffsets]);
    refalrts::alloc_open_bracket(vm, context[42]);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_open_bracket(vm, context[44]);
    refalrts::copy_evar(vm, context[45], context[46], context[31], context[32]);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::alloc_open_bracket(vm, context[48]);
    refalrts::copy_evar(vm, context[49], context[50], context[33], context[34]);
    refalrts::alloc_close_bracket(vm, context[51]);
    refalrts::alloc_open_bracket(vm, context[52]);
    refalrts::update_name(context[4], functions[efunc_GlueTiles]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[8], functions[efunc_ZipItems]);
    refalrts::reinit_close_call(context[19]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[40] );
    refalrts::link_brackets( context[52], context[20] );
    refalrts::link_brackets( context[48], context[51] );
    refalrts::link_brackets( context[44], context[47] );
    refalrts::link_brackets( context[42], context[43] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_evar( res, context[39], context[48] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoOverlapOffsets/4 (/7 e.new#5/5 )/8 (/11 e.new#6/9 )/12 (/15 e.new#7/13 )/16 (/19 )/20 >/1
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 5
  // closed e.new#6 as range 9
  // closed e.new#7 as range 13
  do {
    // </0 & DoOverlapOffsets/4 (/7 e.new#8/21 )/8 (/11 e.new#9/23 t.new#10/27 )/12 (/15 e.new#11/25 )/16 (/19 )/20 >/1
    context[21] = context[5];
    context[22] = context[6];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[13];
    context[26] = context[14];
    // closed e.new#8 as range 21
    // closed e.new#11 as range 25
    context[28] = refalrts::tvar_right( context[27], context[23], context[24] );
    if( ! context[28] )
      continue;
    // closed e.new#9 as range 23
    do {
      // </0 & DoOverlapOffsets/4 (/7 e.Pattern#1/29 t.Next#1/35 )/8 (/11 e.OverlappedPattern#1/31 t.Skip#1/27 )/12 (/15 e.OverlappedResult#1/33 )/16 (/19 )/20 >/1
      context[29] = context[21];
      context[30] = context[22];
      context[31] = context[23];
      context[32] = context[24];
      context[33] = context[25];
      context[34] = context[26];
      // closed e.OverlappedPattern#1 as range 31
      // closed e.OverlappedResult#1 as range 33
      context[36] = refalrts::tvar_right( context[35], context[29], context[30] );
      if( ! context[36] )
        continue;
      // closed e.Pattern#1 as range 29
      //DEBUG: t.Skip#1: 27
      //DEBUG: e.OverlappedPattern#1: 31
      //DEBUG: e.OverlappedResult#1: 33
      //DEBUG: t.Next#1: 35
      //DEBUG: e.Pattern#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & GlueTiles/4 HalfReuse: </7 } Tile{ HalfReuse: & ZipItems/8 AsIs: (/11 AsIs: e.OverlappedPattern#1/31 AsIs: t.Skip#1/27 AsIs: )/12 AsIs: (/15 AsIs: e.OverlappedResult#1/33 AsIs: )/16 HalfReuse: >/19 HalfReuse: >/20 HalfReuse: </1 } & DoOverlapOffsets/37 (/38 Tile{ AsIs: e.Pattern#1/29 } )/39 (/40 Tile{ AsIs: t.Next#1/35 } e.OverlappedPattern#1/31/41 )/43 (/44 e.OverlappedResult#1/33/45 )/47 (/48 )/49 >/50 Tile{ ]] }
      refalrts::alloc_name(vm, context[37], functions[efunc_DoOverlapOffsets]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::alloc_open_bracket(vm, context[40]);
      refalrts::copy_evar(vm, context[41], context[42], context[31], context[32]);
      refalrts::alloc_close_bracket(vm, context[43]);
      refalrts::alloc_open_bracket(vm, context[44]);
      refalrts::copy_evar(vm, context[45], context[46], context[33], context[34]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_close_call(vm, context[50]);
      refalrts::update_name(context[4], functions[efunc_GlueTiles]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[8], functions[efunc_ZipItems]);
      refalrts::reinit_close_call(context[19]);
      refalrts::reinit_close_call(context[20]);
      refalrts::reinit_open_call(context[1]);
      refalrts::push_stack( vm, context[50] );
      refalrts::push_stack( vm, context[1] );
      refalrts::link_brackets( context[48], context[49] );
      refalrts::link_brackets( context[44], context[47] );
      refalrts::link_brackets( context[40], context[43] );
      refalrts::link_brackets( context[38], context[39] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[7] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[50] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[8], context[1] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoOverlapOffsets/4 (/7 )/8 (/11 e.OverlappedPattern#1/29 t.Last#1/27 )/12 (/15 t.First#1/33 e.OverlappedResult#1/31 )/16 (/19 )/20 >/1
    context[29] = context[23];
    context[30] = context[24];
    context[31] = context[25];
    context[32] = context[26];
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.OverlappedPattern#1 as range 29
    context[34] = refalrts::tvar_left( context[33], context[31], context[32] );
    if( ! context[34] )
      continue;
    // closed e.OverlappedResult#1 as range 31
    //DEBUG: t.Last#1: 27
    //DEBUG: e.OverlappedPattern#1: 29
    //DEBUG: t.First#1: 33
    //DEBUG: e.OverlappedResult#1: 31

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GlueTiles/4 HalfReuse: </7 HalfReuse: & ZipItems/8 AsIs: (/11 AsIs: e.OverlappedPattern#1/29 AsIs: t.Last#1/27 AsIs: )/12 AsIs: (/15 AsIs: t.First#1/33 AsIs: e.OverlappedResult#1/31 AsIs: )/16 HalfReuse: >/19 HalfReuse: >/20 HalfReuse: </1 } & DoOverlapOffsets/35 (/36 )/37 (/38 e.OverlappedPattern#1/29/39 )/41 (/42 e.OverlappedResult#1/31/43 )/45 (/46 )/47 >/48 Tile{ ]] }
    refalrts::alloc_name(vm, context[35], functions[efunc_DoOverlapOffsets]);
    refalrts::alloc_open_bracket(vm, context[36]);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::alloc_open_bracket(vm, context[38]);
    refalrts::copy_evar(vm, context[39], context[40], context[29], context[30]);
    refalrts::alloc_close_bracket(vm, context[41]);
    refalrts::alloc_open_bracket(vm, context[42]);
    refalrts::copy_evar(vm, context[43], context[44], context[31], context[32]);
    refalrts::alloc_close_bracket(vm, context[45]);
    refalrts::alloc_open_bracket(vm, context[46]);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::alloc_close_call(vm, context[48]);
    refalrts::update_name(context[4], functions[efunc_GlueTiles]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[8], functions[efunc_ZipItems]);
    refalrts::reinit_close_call(context[19]);
    refalrts::reinit_close_call(context[20]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[48] );
    refalrts::push_stack( vm, context[1] );
    refalrts::link_brackets( context[46], context[47] );
    refalrts::link_brackets( context[42], context[45] );
    refalrts::link_brackets( context[38], context[41] );
    refalrts::link_brackets( context[36], context[37] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[35], context[48] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoOverlapOffsets/4 (/7 )/8 (/11 )/12 (/15 )/16 (/19 )/20 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoOverlapOffsets/4 (/7 )/8 (/11 )/12 (/15 )/16 (/19 )/20 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoOverlapOffsets("DoOverlapOffsets", COOKIE1_, COOKIE2_, func_DoOverlapOffsets);


static refalrts::FnResult func_OverlapChain(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & OverlapChain/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Result#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & GlueTiles/14 Tile{ AsIs: </0 Reuse: & ZipItems/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } >/15 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_GlueTiles]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_ZipItems]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OverlapChain("OverlapChain", COOKIE1_, COOKIE2_, func_OverlapChain);


static refalrts::FnResult func_ZipItems(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & ZipItems/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ZipItems/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  do {
    // </0 & ZipItems/4 (/7 (/19 s.CurIndexP#1/25 t.PatternItem#1/27 )/20 e.Pattern#1/13 )/8 (/11 (/23 s.CurIndexR#1/26 t.ResultItem#1/29 )/24 e.Result#1/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[15], context[16] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    // closed e.Pattern#1 as range 13
    // closed e.Result#1 as range 15
    if( ! refalrts::svar_left( context[25], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    context[28] = refalrts::tvar_left( context[27], context[17], context[18] );
    if( ! context[28] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    context[30] = refalrts::tvar_left( context[29], context[21], context[22] );
    if( ! context[30] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: e.Pattern#1: 13
    //DEBUG: e.Result#1: 15
    //DEBUG: s.CurIndexP#1: 25
    //DEBUG: s.CurIndexR#1: 26
    //DEBUG: t.PatternItem#1: 27
    //DEBUG: t.ResultItem#1: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 HalfReuse: s.CurIndexP1 #25/23 AsIs: s.CurIndexR#1/26 } </31 & OverlapItem/32 Tile{ AsIs: t.PatternItem#1/27 } Tile{ AsIs: t.ResultItem#1/29 } Tile{ HalfReuse: >/19 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ZipItems/4 AsIs: (/7 } Tile{ AsIs: e.Pattern#1/13 } Tile{ AsIs: )/20 } Tile{ HalfReuse: (/24 AsIs: e.Result#1/15 AsIs: )/12 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_OverlapItem]);
    refalrts::reinit_svar( context[23], context[25] );
    refalrts::reinit_close_call(context[19]);
    refalrts::reinit_open_bracket(context[24]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[24], context[12] );
    refalrts::link_brackets( context[7], context[20] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[11], context[26] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ZipItems/4 (/7 )/8 (/11 )/12 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ZipItems/4 (/7 )/8 (/11 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ZipItems("ZipItems", COOKIE1_, COOKIE2_, func_ZipItems);


static refalrts::FnResult func_GlueTiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & GlueTiles/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & GlueTiles/4 (/9 e.new#1/7 s.new#2/13 s.new#3/12 s.new#4/11 )/10 e.new#5/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new#5 as range 5
    if( ! refalrts::svar_right( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[7], context[8] ) )
      continue;
    // closed e.new#1 as range 7
    do {
      // </0 & GlueTiles/4 (/9 s.CurIndexP#1/13 s.CurIndexR#1/12 # NoOverlap/11 )/10 e.Tail#1/14 >/1
      context[14] = context[5];
      context[15] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_NoOverlap], context[11] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      // closed e.Tail#1 as range 14
      //DEBUG: s.CurIndexP#1: 13
      //DEBUG: s.CurIndexR#1: 12
      //DEBUG: e.Tail#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GlueTiles/4 (/9 s.CurIndexP#1/13 s.CurIndexR#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 HalfReuse: & GlueTiles/10 AsIs: e.Tail#1/14 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[10], functions[efunc_GlueTiles]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GlueTiles/4 (/9 s.new#10/18 s.new#9/13 s.new#8/12 s.new#7/11 )/10 e.new#6/16 >/1
    context[14] = context[7];
    context[15] = context[8];
    context[16] = context[5];
    context[17] = context[6];
    // closed e.new#6 as range 16
    if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    do {
      // </0 & GlueTiles/4 (/9 s.CurIndexP#1/18 s.CurIndexR#1/13 s.Weight#1/12 # AsIsE/11 )/10 e.Tail#1/19 >/1
      context[19] = context[16];
      context[20] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_AsIsE], context[11] ) )
        continue;
      // closed e.Tail#1 as range 19
      //DEBUG: s.CurIndexP#1: 18
      //DEBUG: s.CurIndexR#1: 13
      //DEBUG: s.Weight#1: 12
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/21 s.Weight#1/12/22 Tile{ HalfReuse: s.CurIndexP1 #18/0 HalfReuse: s.CurIndexR1 #13/4 AsIs: (/9 AsIs: s.CurIndexP#1/18 AsIs: s.CurIndexR#1/13 AsIs: s.Weight#1/12 AsIs: # AsIsE/11 AsIs: )/10 } )/23 </24 & GlueTiles/25 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::copy_stvar(vm, context[22], context[12]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_GlueTiles]);
      refalrts::reinit_svar( context[0], context[18] );
      refalrts::reinit_svar( context[4], context[13] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[21], context[23] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GlueTiles/4 (/9 s.new#19/18 s.new#18/13 s.new#17/12 s.new#16/11 )/10 (/23 e.new#11/21 s.new#12/27 s.new#13/26 s.new#14/25 )/24 e.new#15/19 >/1
      context[19] = context[16];
      context[20] = context[17];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.new#15 as range 19
      if( ! refalrts::svar_right( context[25], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_right( context[26], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_right( context[27], context[21], context[22] ) )
        continue;
      // closed e.new#11 as range 21
      do {
        // </0 & GlueTiles/4 (/9 s.CurIndexP#1/18 s.CurIndexR#1/13 s.Weight#1/12 s.Ident#1/11 )/10 (/23 s.CurIndexP0#1/27 s.CurIndexR0#1/26 # NoOverlap/25 )/24 e.#0/28 >/1
        context[28] = context[19];
        context[29] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_NoOverlap], context[25] ) )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        // closed e.#0 as range 28
        //DEBUG: s.CurIndexP#1: 18
        //DEBUG: s.CurIndexR#1: 13
        //DEBUG: s.Weight#1: 12
        //DEBUG: s.Ident#1: 11
        //DEBUG: s.CurIndexP0#1: 27
        //DEBUG: s.CurIndexR0#1: 26
        //DEBUG: e.#0: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.CurIndexP0#1/27 s.CurIndexR0#1/26 {REMOVED TILE}
        //RESULT: Tile{ [[ } </30 Tile{ HalfReuse: & FoldTile-EEnd/0 HalfReuse: s.Weight1 #12/4 AsIs: (/9 AsIs: s.CurIndexP#1/18 AsIs: s.CurIndexR#1/13 AsIs: s.Weight#1/12 AsIs: s.Ident#1/11 AsIs: )/10 HalfReuse: >/23 } Tile{ HalfReuse: </25 HalfReuse: & GlueTiles/24 AsIs: e.#0/28 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::reinit_name(context[0], functions[efunc_FoldTilem_EEnd]);
        refalrts::reinit_svar( context[4], context[12] );
        refalrts::reinit_close_call(context[23]);
        refalrts::reinit_open_call(context[25]);
        refalrts::reinit_name(context[24], functions[efunc_GlueTiles]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[30] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[25];
        res = refalrts::splice_evar( res, context[0], context[23] );
        res = refalrts::splice_elem( res, context[30] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GlueTiles/4 (/9 s.CurIndexP#1/18 s.CurIndexR#1/13 s.Weight#1/12 s.Ident#1/11 )/10 (/23 s.CurIndexP0#1/32 s.CurIndexR0#1/27 s.ItemWeight#1/26 s.Ident0#1/25 )/24 e.#0/30 >/1
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[19];
      context[31] = context[20];
      // closed e.#0 as range 30
      if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;
      //DEBUG: s.CurIndexP#1: 18
      //DEBUG: s.CurIndexR#1: 13
      //DEBUG: s.Weight#1: 12
      //DEBUG: s.Ident#1: 11
      //DEBUG: s.CurIndexR0#1: 27
      //DEBUG: s.ItemWeight#1: 26
      //DEBUG: s.Ident0#1: 25
      //DEBUG: e.#0: 30
      //DEBUG: s.CurIndexP0#1: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </33 & GlueNextTile/34 (/35 </36 & Add/37 s.Weight#1/12/38 Tile{ HalfReuse: s.ItemWeight1 #26/0 HalfReuse: >/4 AsIs: (/9 AsIs: s.CurIndexP#1/18 AsIs: s.CurIndexR#1/13 AsIs: s.Weight#1/12 AsIs: s.Ident#1/11 AsIs: )/10 AsIs: (/23 AsIs: s.CurIndexP0#1/32 AsIs: s.CurIndexR0#1/27 AsIs: s.ItemWeight#1/26 AsIs: s.Ident0#1/25 AsIs: )/24 } )/39 Tile{ AsIs: e.#0/30 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_GlueNextTile]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[38], context[12]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::reinit_svar( context[0], context[26] );
      refalrts::reinit_close_call(context[4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[33] );
      refalrts::link_brackets( context[35], context[39] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_evar( res, context[0], context[24] );
      res = refalrts::splice_evar( res, context[33], context[38] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GlueTiles/4 (/9 s.CurIndexP#1/18 s.CurIndexR#1/13 s.Weight#1/12 s.Ident#1/11 )/10 >/1
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      //DEBUG: s.CurIndexP#1: 18
      //DEBUG: s.CurIndexR#1: 13
      //DEBUG: s.Weight#1: 12
      //DEBUG: s.Ident#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: & FoldTile-EEnd/0 HalfReuse: s.Weight1 #12/4 AsIs: (/9 AsIs: s.CurIndexP#1/18 AsIs: s.CurIndexR#1/13 AsIs: s.Weight#1/12 AsIs: s.Ident#1/11 AsIs: )/10 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::reinit_name(context[0], functions[efunc_FoldTilem_EEnd]);
      refalrts::reinit_svar( context[4], context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_elem( res, context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GlueTiles/4 (/9 s.CurIndexP#1/18 s.CurIndexR#1/13 s.Weight#1/12 s.Ident#1/11 )/10 e.Tail#1/19 >/1
    context[19] = context[16];
    context[20] = context[17];
    // closed e.Tail#1 as range 19
    //DEBUG: s.CurIndexP#1: 18
    //DEBUG: s.CurIndexR#1: 13
    //DEBUG: s.Weight#1: 12
    //DEBUG: s.Ident#1: 11
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & GlueNextTile@0/22 Tile{ HalfReuse: (/0 HalfReuse: s.Weight1 #12/4 AsIs: (/9 AsIs: s.CurIndexP#1/18 AsIs: s.CurIndexR#1/13 AsIs: s.Weight#1/12 AsIs: s.Ident#1/11 AsIs: )/10 } )/23 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_GlueNextTile_Z0]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_svar( context[4], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[0], context[23] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GlueTiles/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GlueTiles/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GlueTiles("GlueTiles", COOKIE1_, COOKIE2_, func_GlueTiles);


static refalrts::FnResult func_GlueNextTile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & GlueNextTile/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GlueNextTile/4 (/7 s.new#1/9 e.new#2/5 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & GlueNextTile/4 (/7 s.new#9/9 e.new#10/10 )/8 (/16 e.new#4/14 s.new#5/20 s.new#6/19 s.new#7/18 )/17 e.new#8/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.new#10 as range 10
    // closed e.new#8 as range 12
    if( ! refalrts::svar_right( context[18], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[20], context[14], context[15] ) )
      continue;
    // closed e.new#4 as range 14
    do {
      // </0 & GlueNextTile/4 (/7 s.Weight#1/9 e.Items#1/21 )/8 (/16 s.CurIndexP#1/20 s.CurIndexR#1/19 # NoOverlap/18 )/17 e.Tail#1/23 >/1
      context[21] = context[10];
      context[22] = context[11];
      context[23] = context[12];
      context[24] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_NoOverlap], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      // closed e.Items#1 as range 21
      // closed e.Tail#1 as range 23
      //DEBUG: s.Weight#1: 9
      //DEBUG: s.CurIndexP#1: 20
      //DEBUG: s.CurIndexR#1: 19
      //DEBUG: e.Items#1: 21
      //DEBUG: e.Tail#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/16 s.CurIndexP#1/20 s.CurIndexR#1/19 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & FoldTile-EEnd/7 AsIs: s.Weight#1/9 AsIs: e.Items#1/21 HalfReuse: >/8 } Tile{ HalfReuse: </18 HalfReuse: & GlueTiles/17 AsIs: e.Tail#1/23 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_FoldTilem_EEnd]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_call(context[18]);
      refalrts::reinit_name(context[17], functions[efunc_GlueTiles]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[4], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GlueNextTile/4 (/7 s.Weight#1/9 e.Items#1/21 )/8 (/16 s.CurIndexP#1/27 s.CurIndexR#1/20 s.ItemWeight#1/19 s.Ident#1/18 )/17 e.Tail#1/25 >/1
    context[21] = context[10];
    context[22] = context[11];
    context[23] = context[14];
    context[24] = context[15];
    context[25] = context[12];
    context[26] = context[13];
    // closed e.Items#1 as range 21
    // closed e.Tail#1 as range 25
    if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: s.Weight#1: 9
    //DEBUG: s.CurIndexR#1: 20
    //DEBUG: s.ItemWeight#1: 19
    //DEBUG: s.Ident#1: 18
    //DEBUG: e.Items#1: 21
    //DEBUG: e.Tail#1: 25
    //DEBUG: s.CurIndexP#1: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & GlueNextTile/4 AsIs: (/7 } </28 & Add/29 Tile{ AsIs: s.Weight#1/9 } s.ItemWeight#1/19/30 >/31 Tile{ AsIs: e.Items#1/21 } Tile{ AsIs: (/16 AsIs: s.CurIndexP#1/27 AsIs: s.CurIndexR#1/20 AsIs: s.ItemWeight#1/19 AsIs: s.Ident#1/18 AsIs: )/17 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Tail#1/25 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_Add]);
    refalrts::copy_stvar(vm, context[30], context[19]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GlueNextTile/4 (/7 s.Weight#1/9 e.Items#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#1 as range 5
  //DEBUG: s.Weight#1: 9
  //DEBUG: e.Items#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & FoldTile-EEnd/7 AsIs: s.Weight#1/9 AsIs: e.Items#1/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_FoldTilem_EEnd]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GlueNextTile("GlueNextTile", COOKIE1_, COOKIE2_, func_GlueNextTile);


static refalrts::FnResult func_FoldTilem_EEnd(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & FoldTile-EEnd/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FoldTile-EEnd/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & FoldTile-EEnd/4 s.Weight#1/5 e.Items#1/6 (/10 s.CurIndexP#1/14 s.CurIndexR#1/15 3/13 # AsIsE/12 )/11 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_right( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    context[12] = refalrts::ident_right( identifiers[ident_AsIsE], context[8], context[9] );
    if( ! context[12] )
      continue;
    context[13] = refalrts::number_right( 3UL, context[8], context[9] );
    if( ! context[13] )
      continue;
    // closed e.Items#1 as range 6
    if( ! refalrts::svar_left( context[14], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    //DEBUG: s.Weight#1: 5
    //DEBUG: e.Items#1: 6
    //DEBUG: s.CurIndexP#1: 14
    //DEBUG: s.CurIndexR#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FoldTile-EEnd/4 } </16 & Sub/17 Tile{ AsIs: s.Weight#1/5 } 3/18 >/19 Tile{ AsIs: e.Items#1/6 } >/20 (/21 3/22 s.CurIndexP#1/14/23 s.CurIndexR#1/15/24 Tile{ AsIs: (/10 AsIs: s.CurIndexP#1/14 AsIs: s.CurIndexR#1/15 AsIs: 3/13 AsIs: # AsIsE/12 AsIs: )/11 HalfReuse: )/1 ]] }
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Sub]);
    refalrts::alloc_number(vm, context[18], 3UL);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_number(vm, context[22], 3UL);
    refalrts::copy_stvar(vm, context[23], context[14]);
    refalrts::copy_stvar(vm, context[24], context[15]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[21], context[1] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[20], context[24] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FoldTile-EEnd/4 s.Weight#1/5 (/10 s.CurIndexP#1/12 s.CurIndexR#1/13 s.ItemWeight#1/14 s.Ident#1/15 )/11 e.Items#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    // closed e.Items#1 as range 6
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    //DEBUG: s.Weight#1: 5
    //DEBUG: e.Items#1: 6
    //DEBUG: s.CurIndexP#1: 12
    //DEBUG: s.CurIndexR#1: 13
    //DEBUG: s.ItemWeight#1: 14
    //DEBUG: s.Ident#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Weight#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.Weight1 #5/4 } s.CurIndexP#1/12/16 s.CurIndexR#1/13/17 Tile{ AsIs: (/10 AsIs: s.CurIndexP#1/12 AsIs: s.CurIndexR#1/13 AsIs: s.ItemWeight#1/14 AsIs: s.Ident#1/15 AsIs: )/11 AsIs: e.Items#1/6 HalfReuse: )/1 ]] }
    refalrts::copy_stvar(vm, context[16], context[12]);
    refalrts::copy_stvar(vm, context[17], context[13]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_svar( context[4], context[5] );
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FoldTile-EEnd/4 s.Weight#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Weight#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FoldTile-EEnd/4 s.Weight#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FoldTilem_EEnd("FoldTile-EEnd", COOKIE1_, COOKIE2_, func_FoldTilem_EEnd);


static refalrts::FnResult func_gen_FilterOverlapped_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & FilterOverlapped$1=1/4 (/7 s.MaxWeight#2/9 s.IndexP#2/10 s.IndexR#2/11 e.MaxItems#2/5 )/8 e.Tiles#2/2 >/1
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
  // closed e.Tiles#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MaxItems#2 as range 5
  //DEBUG: e.Tiles#2: 2
  //DEBUG: s.MaxWeight#2: 9
  //DEBUG: s.IndexP#2: 10
  //DEBUG: s.IndexR#2: 11
  //DEBUG: e.MaxItems#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.IndexP#2/10 s.IndexR#2/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.IndexP2 #10/4 HalfReuse: s.IndexR2 #11/7 AsIs: s.MaxWeight#2/9 } (/12 </13 & Map@2/14 Tile{ AsIs: e.MaxItems#2/5 } >/15 Tile{ AsIs: )/8 } )/16 </17 & FilterOverlapped/18 </19 & UnBracket/20 </21 & Reduce@1/22 (/23 Tile{ AsIs: e.Tiles#2/2 } )/24 e.MaxItems#2/5/25 >/27 >/28 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z2]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_FilterOverlapped]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_UnBracket]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_Reduce_Z1]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::copy_evar(vm, context[25], context[26], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::reinit_svar( context[7], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[0], context[16] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[23] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FilterOverlapped_S1A1("FilterOverlapped$1=1", COOKIE1_, COOKIE2_, func_gen_FilterOverlapped_S1A1);


static refalrts::FnResult func_FilterOverlapped(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & FilterOverlapped/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & FilterOverlapped/4 t.NextTile#1/7 e.Tiles#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tiles#1 as range 5
    //DEBUG: t.NextTile#1: 7
    //DEBUG: e.Tiles#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FilterOverlapped$1=1/4 } </9 & DoMapAccum@2/10 Tile{ AsIs: t.NextTile#1/7 } (/11 )/12 Tile{ AsIs: e.Tiles#1/5 } >/13 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_gen_FilterOverlapped_S1A1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[9] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FilterOverlapped/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FilterOverlapped/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FilterOverlapped("FilterOverlapped", COOKIE1_, COOKIE2_, func_FilterOverlapped);


static refalrts::FnResult func_gen_FindHeavyTile_L1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & FindHeavyTile\1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FindHeavyTile\1:1/4 s.new#1/5 s.new#2/6 s.new#3/7 (/10 e.new#4/8 )/11 s.new#5/12 s.new#6/13 s.new#7/14 (/17 e.new#8/15 )/18 s.new#9/19 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.new#4 as range 8
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#8 as range 15
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FindHeavyTile\1:1/4 s.Weight#2/5 s.CurIndexP#2/6 s.CurIndexR#2/7 (/10 e.Items#2/20 )/11 s.MaxWeight#2/12 s.IndexP#2/13 s.IndexR#2/14 (/17 e.MaxItems#2/22 )/18 '<'/19 >/1
    context[20] = context[8];
    context[21] = context[9];
    context[22] = context[15];
    context[23] = context[16];
    if( ! refalrts::char_term( '<', context[19] ) )
      continue;
    // closed e.Items#2 as range 20
    // closed e.MaxItems#2 as range 22
    //DEBUG: s.Weight#2: 5
    //DEBUG: s.CurIndexP#2: 6
    //DEBUG: s.CurIndexR#2: 7
    //DEBUG: s.MaxWeight#2: 12
    //DEBUG: s.IndexP#2: 13
    //DEBUG: s.IndexR#2: 14
    //DEBUG: e.Items#2: 20
    //DEBUG: e.MaxItems#2: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} (/10 {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} {REMOVED TILE} '<'/19 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: s.Weight#2/5 AsIs: s.CurIndexP#2/6 AsIs: s.CurIndexR#2/7 } Tile{ AsIs: e.Items#2/20 } Tile{ AsIs: )/18 } Tile{ HalfReuse: (/11 AsIs: s.MaxWeight#2/12 AsIs: s.IndexP#2/13 AsIs: s.IndexR#2/14 } Tile{ AsIs: e.MaxItems#2/22 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[4], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FindHeavyTile\1:1/4 s.Weight#2/5 s.CurIndexP#2/6 s.CurIndexR#2/7 (/10 e.Items#2/8 )/11 s.MaxWeight#2/12 s.IndexP#2/13 s.IndexR#2/14 (/17 e.MaxItems#2/15 )/18 s.Other#3/19 >/1
  // closed e.Items#2 as range 8
  // closed e.MaxItems#2 as range 15
  //DEBUG: s.Weight#2: 5
  //DEBUG: s.CurIndexP#2: 6
  //DEBUG: s.CurIndexR#2: 7
  //DEBUG: s.MaxWeight#2: 12
  //DEBUG: s.IndexP#2: 13
  //DEBUG: s.IndexR#2: 14
  //DEBUG: s.Other#3: 19
  //DEBUG: e.Items#2: 8
  //DEBUG: e.MaxItems#2: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/10 {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} )/18 s.Other#3/19 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 AsIs: s.MaxWeight#2/12 AsIs: s.IndexP#2/13 AsIs: s.IndexR#2/14 } Tile{ AsIs: e.MaxItems#2/15 } Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: s.Weight#2/5 AsIs: s.CurIndexP#2/6 AsIs: s.CurIndexR#2/7 } Tile{ AsIs: e.Items#2/8 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[11]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[11], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindHeavyTile_L1B1("FindHeavyTile\\1:1", COOKIE1_, COOKIE2_, func_gen_FindHeavyTile_L1B1);


static refalrts::FnResult func_FindHeavyTile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & FindHeavyTile/4 t.NextTile#1/5 e.Tiles#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tiles#1 as range 2
  //DEBUG: t.NextTile#1: 5
  //DEBUG: e.Tiles#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 AsIs: t.NextTile#1/5 } (/7 )/8 Tile{ AsIs: e.Tiles#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindHeavyTile("FindHeavyTile", COOKIE1_, COOKIE2_, func_FindHeavyTile);


static refalrts::FnResult func_RejectTile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & RejectTile/4 (/7 e.Tiles#1/5 )/8 e.HeavyTileItems#1/2 >/1
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
  // closed e.Tiles#1 as range 5
  // closed e.HeavyTileItems#1 as range 2
  //DEBUG: e.Tiles#1: 5
  //DEBUG: e.HeavyTileItems#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & UnBracket/10 Tile{ AsIs: </0 Reuse: & Reduce@1/4 AsIs: (/7 AsIs: e.Tiles#1/5 AsIs: )/8 AsIs: e.HeavyTileItems#1/2 AsIs: >/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_UnBracket]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z1]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RejectTile("RejectTile", COOKIE1_, COOKIE2_, func_RejectTile);


static refalrts::FnResult func_FilterPatternPos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & FilterPatternPos/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FilterPatternPos/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FilterPatternPos/4 s.new#3/5 (/6 s.new#4/10 s.new#5/11 s.new#6/12 e.new#7/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    // closed e.new#7 as range 8
    do {
      // </0 & FilterPatternPos/4 s.CurIndexP#1/5 (/6 s.Weight#1/10 s.CurIndexP#1/11 s.CurIndexR#1/12 (/17 s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 )/18 e.Items#1/13 )/7 >/1
      context[13] = context[8];
      context[14] = context[9];
      if( ! refalrts::repeated_stvar_term( vm, context[11], context[5] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      if( ! refalrts::repeated_stvar_left( vm, context[19], context[11], context[15], context[16] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[20], context[12], context[15], context[16] ) )
        continue;
      // closed e.Items#1 as range 13
      if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: s.CurIndexP#1: 5
      //DEBUG: s.Weight#1: 10
      //DEBUG: s.CurIndexR#1: 12
      //DEBUG: e.Items#1: 13
      //DEBUG: s.ItemWeight#1: 21
      //DEBUG: s.Ident#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.CurIndexP#1/5 {REMOVED TILE} s.CurIndexP#1/11 s.CurIndexR#1/12 {REMOVED TILE} s.CurIndexP#1/19 s.CurIndexR#1/20 {REMOVED TILE} s.Ident#1/22 )/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/10 } Tile{ AsIs: s.ItemWeight#1/21 } Tile{ HalfReuse: >/17 } Tile{ AsIs: e.Items#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FoldTile]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[6], functions[efunc_Sub]);
      refalrts::reinit_close_call(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[6], context[10] );
      res = refalrts::splice_elem( res, context[7] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FilterPatternPos/4 s.CurIndexP#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 e.Items#1/13 (/17 s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 )/18 )/7 >/1
      context[13] = context[8];
      context[14] = context[9];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_right( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      if( ! refalrts::repeated_stvar_left( vm, context[19], context[5], context[15], context[16] ) )
        continue;
      // closed e.Items#1 as range 13
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: s.CurIndexP#1: 5
      //DEBUG: s.Weight#1: 10
      //DEBUG: s.IndexP#1: 11
      //DEBUG: s.IndexR#1: 12
      //DEBUG: e.Items#1: 13
      //DEBUG: s.CurIndexR#1: 20
      //DEBUG: s.ItemWeight#1: 21
      //DEBUG: s.Ident#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.CurIndexP#1/5 {REMOVED TILE} s.IndexP#1/11 s.IndexR#1/12 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/19 s.CurIndexR#1/20 {REMOVED TILE} s.Ident#1/22 {REMOVED TILE} )/7 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </17 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/10 } Tile{ AsIs: s.ItemWeight#1/21 } Tile{ HalfReuse: >/18 } Tile{ AsIs: e.Items#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FoldTile]);
      refalrts::reinit_open_call(context[17]);
      refalrts::reinit_name(context[6], functions[efunc_Sub]);
      refalrts::reinit_close_call(context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[6], context[10] );
      res = refalrts::splice_elem( res, context[17] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FilterPatternPos/4 s.CurIndexP#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 e.Items-B#1/15 (/21 s.CurIndexP#1/23 s.CurIndexR#1/24 s.ItemWeight#1/25 s.Ident#1/26 )/22 e.Items-E#1/17 )/7 >/1
    context[13] = context[8];
    context[14] = context[9];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[13];
      context[18] = context[14];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      if( ! refalrts::repeated_stvar_left( vm, context[23], context[5], context[19], context[20] ) )
        continue;
      // closed e.Items-E#1 as range 17
      if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
        continue;
      if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
        continue;
      if( ! refalrts::svar_left( context[26], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: s.CurIndexP#1: 5
      //DEBUG: s.Weight#1: 10
      //DEBUG: s.IndexP#1: 11
      //DEBUG: s.IndexR#1: 12
      //DEBUG: e.Items-B#1: 15
      //DEBUG: e.Items-E#1: 17
      //DEBUG: s.CurIndexR#1: 24
      //DEBUG: s.ItemWeight#1: 25
      //DEBUG: s.Ident#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.CurIndexP#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/23 s.CurIndexR#1/24 s.ItemWeight#1/25 s.Ident#1/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTileW/4 } Tile{ AsIs: e.Items-B#1/15 } Tile{ HalfReuse: >/21 } Tile{ HalfReuse: </22 } Tile{ HalfReuse: & FoldTileW/7 } Tile{ AsIs: e.Items-E#1/17 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FoldTileW]);
      refalrts::reinit_close_call(context[21]);
      refalrts::reinit_open_call(context[22]);
      refalrts::reinit_name(context[7], functions[efunc_FoldTileW]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FilterPatternPos/4 s.CurIndexP#1/5 t.Tile#1/6 >/1
  //DEBUG: t.Tile#1: 6
  //DEBUG: s.CurIndexP#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FilterPatternPos/4 s.CurIndexP#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tile#1/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FilterPatternPos("FilterPatternPos", COOKIE1_, COOKIE2_, func_FilterPatternPos);


static refalrts::FnResult func_FilterResultPos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & FilterResultPos/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FilterResultPos/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FilterResultPos/4 s.new#3/5 (/6 s.new#4/10 s.new#5/11 s.new#6/12 e.new#7/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    // closed e.new#7 as range 8
    do {
      // </0 & FilterResultPos/4 s.CurIndexR#1/5 (/6 s.Weight#1/10 s.CurIndexP#1/11 s.CurIndexR#1/12 (/17 s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 )/18 e.Items#1/13 )/7 >/1
      context[13] = context[8];
      context[14] = context[9];
      if( ! refalrts::repeated_stvar_term( vm, context[12], context[5] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      if( ! refalrts::repeated_stvar_left( vm, context[19], context[11], context[15], context[16] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[20], context[12], context[15], context[16] ) )
        continue;
      // closed e.Items#1 as range 13
      if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: s.CurIndexR#1: 5
      //DEBUG: s.Weight#1: 10
      //DEBUG: s.CurIndexP#1: 11
      //DEBUG: e.Items#1: 13
      //DEBUG: s.ItemWeight#1: 21
      //DEBUG: s.Ident#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.CurIndexR#1/5 {REMOVED TILE} s.CurIndexP#1/11 s.CurIndexR#1/12 {REMOVED TILE} s.CurIndexP#1/19 s.CurIndexR#1/20 {REMOVED TILE} s.Ident#1/22 )/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </7 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/10 } Tile{ AsIs: s.ItemWeight#1/21 } Tile{ HalfReuse: >/17 } Tile{ AsIs: e.Items#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FoldTile]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[6], functions[efunc_Sub]);
      refalrts::reinit_close_call(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[6], context[10] );
      res = refalrts::splice_elem( res, context[7] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & FilterResultPos/4 s.CurIndexR#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 e.Items#1/13 (/17 s.CurIndexP#1/19 s.CurIndexR#1/20 s.ItemWeight#1/21 s.Ident#1/22 )/18 )/7 >/1
      context[13] = context[8];
      context[14] = context[9];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_right( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Items#1 as range 13
      if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[20], context[5], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: s.CurIndexR#1: 5
      //DEBUG: s.Weight#1: 10
      //DEBUG: s.IndexP#1: 11
      //DEBUG: s.IndexR#1: 12
      //DEBUG: e.Items#1: 13
      //DEBUG: s.CurIndexP#1: 19
      //DEBUG: s.ItemWeight#1: 21
      //DEBUG: s.Ident#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.CurIndexR#1/5 {REMOVED TILE} s.IndexP#1/11 s.IndexR#1/12 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/19 s.CurIndexR#1/20 {REMOVED TILE} s.Ident#1/22 {REMOVED TILE} )/7 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </17 } Tile{ HalfReuse: & Sub/6 AsIs: s.Weight#1/10 } Tile{ AsIs: s.ItemWeight#1/21 } Tile{ HalfReuse: >/18 } Tile{ AsIs: e.Items#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FoldTile]);
      refalrts::reinit_open_call(context[17]);
      refalrts::reinit_name(context[6], functions[efunc_Sub]);
      refalrts::reinit_close_call(context[18]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[6], context[10] );
      res = refalrts::splice_elem( res, context[17] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FilterResultPos/4 s.CurIndexR#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 e.Items-B#1/15 (/21 s.CurIndexP#1/23 s.CurIndexR#1/24 s.ItemWeight#1/25 s.Ident#1/26 )/22 e.Items-E#1/17 )/7 >/1
    context[13] = context[8];
    context[14] = context[9];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[13];
      context[18] = context[14];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Items-E#1 as range 17
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[24], context[5], context[19], context[20] ) )
        continue;
      if( ! refalrts::svar_left( context[25], context[19], context[20] ) )
        continue;
      if( ! refalrts::svar_left( context[26], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: s.CurIndexR#1: 5
      //DEBUG: s.Weight#1: 10
      //DEBUG: s.IndexP#1: 11
      //DEBUG: s.IndexR#1: 12
      //DEBUG: e.Items-B#1: 15
      //DEBUG: e.Items-E#1: 17
      //DEBUG: s.CurIndexP#1: 23
      //DEBUG: s.ItemWeight#1: 25
      //DEBUG: s.Ident#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.CurIndexR#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/23 s.CurIndexR#1/24 s.ItemWeight#1/25 s.Ident#1/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTileW/4 } Tile{ AsIs: e.Items-B#1/15 } Tile{ HalfReuse: >/21 } Tile{ HalfReuse: </22 } Tile{ HalfReuse: & FoldTileW/7 } Tile{ AsIs: e.Items-E#1/17 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FoldTileW]);
      refalrts::reinit_close_call(context[21]);
      refalrts::reinit_open_call(context[22]);
      refalrts::reinit_name(context[7], functions[efunc_FoldTileW]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FilterResultPos/4 s.CurIndexR#1/5 t.Tile#1/6 >/1
  //DEBUG: t.Tile#1: 6
  //DEBUG: s.CurIndexR#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FilterResultPos/4 s.CurIndexR#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tile#1/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FilterResultPos("FilterResultPos", COOKIE1_, COOKIE2_, func_FilterResultPos);


static refalrts::FnResult func_FoldTile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & FoldTile/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FoldTile/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & FoldTile/4 s.Weight#1/5 (/10 s.CurIndexP#1/14 s.CurIndexR#1/15 3/13 # AsIsE/12 )/11 e.Items#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    context[12] = refalrts::ident_right( identifiers[ident_AsIsE], context[8], context[9] );
    if( ! context[12] )
      continue;
    context[13] = refalrts::number_right( 3UL, context[8], context[9] );
    if( ! context[13] )
      continue;
    // closed e.Items#1 as range 6
    if( ! refalrts::svar_left( context[14], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    //DEBUG: s.Weight#1: 5
    //DEBUG: e.Items#1: 6
    //DEBUG: s.CurIndexP#1: 14
    //DEBUG: s.CurIndexR#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 3/17 s.CurIndexP#1/14/18 s.CurIndexR#1/15/19 Tile{ AsIs: (/10 AsIs: s.CurIndexP#1/14 AsIs: s.CurIndexR#1/15 AsIs: 3/13 AsIs: # AsIsE/12 AsIs: )/11 } )/20 </21 & FoldTile/22 Tile{ AsIs: </0 Reuse: & Sub/4 AsIs: s.Weight#1/5 } 3/23 >/24 Tile{ AsIs: e.Items#1/6 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_number(vm, context[17], 3UL);
    refalrts::copy_stvar(vm, context[18], context[14]);
    refalrts::copy_stvar(vm, context[19], context[15]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_FoldTile]);
    refalrts::alloc_number(vm, context[23], 3UL);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::update_name(context[4], functions[efunc_Sub]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[20] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FoldTile/4 s.Weight#1/5 e.Items#1/2 >/1
  // closed e.Items#1 as range 2
  //DEBUG: s.Weight#1: 5
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile-EEnd/4 AsIs: s.Weight#1/5 AsIs: e.Items#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_FoldTilem_EEnd]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FoldTile("FoldTile", COOKIE1_, COOKIE2_, func_FoldTile);


static refalrts::FnResult func_FoldTileW(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & FoldTileW/4 (/7 s.CurIndexP#1/9 s.CurIndexR#1/10 s.ItemWeight#1/11 s.Ident#1/12 )/8 e.Items#1/2 >/1
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
  // closed e.Items#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Items#1: 2
  //DEBUG: s.CurIndexP#1: 9
  //DEBUG: s.CurIndexR#1: 10
  //DEBUG: s.ItemWeight#1: 11
  //DEBUG: s.Ident#1: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } & FoldTile/13 </14 & Reduce@2/15 s.ItemWeight#1/11/16 e.Items#1/2/17 Tile{ HalfReuse: >/4 AsIs: (/7 AsIs: s.CurIndexP#1/9 AsIs: s.CurIndexR#1/10 AsIs: s.ItemWeight#1/11 AsIs: s.Ident#1/12 AsIs: )/8 AsIs: e.Items#1/2 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_FoldTile]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_Reduce_Z2]);
  refalrts::copy_stvar(vm, context[16], context[11]);
  refalrts::copy_evar(vm, context[17], context[18], context[2], context[3]);
  refalrts::reinit_close_call(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FoldTileW("FoldTileW", COOKIE1_, COOKIE2_, func_FoldTileW);


static refalrts::FnResult func_ReplaceTile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & ReplaceTile/4 (/7 e.Pattern-B#1/24 (/32 # Num/34 s.IndexP#1/35 t.PatternItem#1/36 )/33 e.Pattern-E#1/26 )/8 (/11 e.Result-B#1/38 (/44 # Num/46 s.IndexR#1/47 t.ResultItem#1/48 )/45 e.Result-E#1/40 )/12 (/15 s.IndexP#1/21 s.IndexR#1/22 s.Weight#1/23 (/19 e.Idents#1/17 )/20 )/16 >/1
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
  context[19] = refalrts::brackets_right( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents#1 as range 17
  if( ! refalrts::svar_left( context[21], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[23], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    context[34] = refalrts::ident_left( identifiers[ident_Num], context[30], context[31] );
    if( ! context[34] )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[35], context[21], context[30], context[31] ) )
      continue;
    // closed e.Pattern-E#1 as range 26
    context[37] = refalrts::tvar_left( context[36], context[30], context[31] );
    if( ! context[37] )
      continue;
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    context[38] = 0;
    context[39] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[40] = context[28];
      context[41] = context[29];
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[40], context[41] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Num], context[42], context[43] );
      if( ! context[46] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[47], context[22], context[42], context[43] ) )
        continue;
      // closed e.Result-E#1 as range 40
      context[49] = refalrts::tvar_left( context[48], context[42], context[43] );
      if( ! context[49] )
        continue;
      if( ! refalrts::empty_seq( context[42], context[43] ) )
        continue;
      //DEBUG: e.Idents#1: 17
      //DEBUG: s.IndexP#1: 21
      //DEBUG: s.IndexR#1: 22
      //DEBUG: s.Weight#1: 23
      //DEBUG: e.Pattern-B#1: 24
      //DEBUG: e.Pattern-E#1: 26
      //DEBUG: t.PatternItem#1: 36
      //DEBUG: e.Result-B#1: 38
      //DEBUG: e.Result-E#1: 40
      //DEBUG: t.ResultItem#1: 48

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.IndexP#1/21 s.IndexR#1/22 s.Weight#1/23 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@2/4 AsIs: (/7 } </50 & DoModify@1/51 Tile{ AsIs: (/19 AsIs: e.Idents#1/17 AsIs: )/20 HalfReuse: (/16 } Tile{ AsIs: (/32 AsIs: # Num/34 AsIs: s.IndexP#1/35 AsIs: t.PatternItem#1/36 AsIs: )/33 AsIs: e.Pattern-E#1/26 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: # Num/46 AsIs: s.IndexR#1/47 AsIs: t.ResultItem#1/48 AsIs: )/45 AsIs: e.Result-E#1/40 HalfReuse: >/12 HalfReuse: )/15 } Tile{ AsIs: (/44 } Tile{ AsIs: e.Pattern-B#1/24 } )/52 Tile{ AsIs: e.Result-B#1/38 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[50]);
      refalrts::alloc_name(vm, context[51], functions[efunc_gen_DoModify_Z1]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z2]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[44], context[52] );
      refalrts::link_brackets( context[7], context[15] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[50] );
      refalrts::link_brackets( context[11], context[45] );
      refalrts::link_brackets( context[16], context[8] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_elem( res, context[52] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_evar( res, context[46], context[15] );
      res = refalrts::splice_evar( res, context[32], context[11] );
      res = refalrts::splice_evar( res, context[19], context[16] );
      res = refalrts::splice_evar( res, context[50], context[51] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[38], context[39], context[28], context[29] ) );
  } while ( refalrts::open_evar_advance( context[24], context[25], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_ReplaceTile("ReplaceTile", COOKIE1_, COOKIE2_, func_ReplaceTile);


static refalrts::FnResult func_Modify(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 78 elems
  refalrts::Iter context[78];
  refalrts::zeros( context, 78 );
  // </0 & Modify/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Modify/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 (/19 e.new#4/17 )/20 (/23 e.new#5/21 )/24 >/1
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
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 17
  // closed e.new#5 as range 21
  do {
    // </0 & Modify/4 (/7 s.new#6/53 e.new#7/25 )/8 (/11 e.new#8/27 )/12 (/15 (/37 # Num/39 s.new#9/54 (/47 e.new#10/45 s.new#11/57 )/48 )/38 e.new#12/29 )/16 (/19 e.new#13/31 )/20 (/23 (/42 # Num/44 s.new#14/55 (/51 s.new#15/56 e.new#16/49 )/52 )/43 e.new#17/33 )/24 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[13];
    context[30] = context[14];
    context[31] = context[17];
    context[32] = context[18];
    context[33] = context[21];
    context[34] = context[22];
    context[35] = 0;
    context[36] = 0;
    context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
    if( ! context[37] )
      continue;
    refalrts::bracket_pointers(context[37], context[38]);
    context[39] = refalrts::ident_left( identifiers[ident_Num], context[35], context[36] );
    if( ! context[39] )
      continue;
    context[40] = 0;
    context[41] = 0;
    context[42] = refalrts::brackets_left( context[40], context[41], context[33], context[34] );
    if( ! context[42] )
      continue;
    refalrts::bracket_pointers(context[42], context[43]);
    context[44] = refalrts::ident_left( identifiers[ident_Num], context[40], context[41] );
    if( ! context[44] )
      continue;
    context[45] = 0;
    context[46] = 0;
    context[47] = refalrts::brackets_right( context[45], context[46], context[35], context[36] );
    if( ! context[47] )
      continue;
    refalrts::bracket_pointers(context[47], context[48]);
    context[49] = 0;
    context[50] = 0;
    context[51] = refalrts::brackets_right( context[49], context[50], context[40], context[41] );
    if( ! context[51] )
      continue;
    refalrts::bracket_pointers(context[51], context[52]);
    // closed e.new#8 as range 27
    // closed e.new#12 as range 29
    // closed e.new#13 as range 31
    // closed e.new#17 as range 33
    if( ! refalrts::svar_left( context[53], context[25], context[26] ) )
      continue;
    // closed e.new#7 as range 25
    if( ! refalrts::svar_left( context[54], context[35], context[36] ) )
      continue;
    if( ! refalrts::empty_seq( context[35], context[36] ) )
      continue;
    if( ! refalrts::svar_left( context[55], context[40], context[41] ) )
      continue;
    if( ! refalrts::empty_seq( context[40], context[41] ) )
      continue;
    if( ! refalrts::svar_left( context[56], context[49], context[50] ) )
      continue;
    // closed e.new#16 as range 49
    if( ! refalrts::svar_right( context[57], context[45], context[46] ) )
      continue;
    // closed e.new#10 as range 45
    do {
      // </0 & Modify/4 (/7 # AsIsE/53 e.1#0/58 )/8 (/11 e.PatFirst#1/60 )/12 (/15 (/37 # Num/39 s.NumP#1/54 (/47 s.TypeFromPat#1/72 e.04#0/62 s.Offset#1/57 )/48 )/38 e.2#0/64 )/16 (/19 e.ResFirst#1/66 )/20 (/23 (/42 # Num/44 s.NumR#1/55 (/51 s.TypeFromRes#1/56 e.02#0/68 )/52 )/43 e.#0/70 )/24 >/1
      context[58] = context[25];
      context[59] = context[26];
      context[60] = context[27];
      context[61] = context[28];
      context[62] = context[45];
      context[63] = context[46];
      context[64] = context[29];
      context[65] = context[30];
      context[66] = context[31];
      context[67] = context[32];
      context[68] = context[49];
      context[69] = context[50];
      context[70] = context[33];
      context[71] = context[34];
      if( ! refalrts::ident_term( identifiers[ident_AsIsE], context[53] ) )
        continue;
      // closed e.1#0 as range 58
      // closed e.PatFirst#1 as range 60
      // closed e.2#0 as range 64
      // closed e.ResFirst#1 as range 66
      // closed e.02#0 as range 68
      // closed e.#0 as range 70
      if( ! refalrts::svar_left( context[72], context[62], context[63] ) )
        continue;
      // closed e.04#0 as range 62
      //DEBUG: s.NumP#1: 54
      //DEBUG: s.Offset#1: 57
      //DEBUG: s.NumR#1: 55
      //DEBUG: s.TypeFromRes#1: 56
      //DEBUG: e.1#0: 58
      //DEBUG: e.PatFirst#1: 60
      //DEBUG: e.2#0: 64
      //DEBUG: e.ResFirst#1: 66
      //DEBUG: e.02#0: 68
      //DEBUG: e.#0: 70
      //DEBUG: s.TypeFromPat#1: 72
      //DEBUG: e.04#0: 62

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.NumP#1/54 {REMOVED TILE} s.TypeFromPat#1/72 e.04#0/62 s.Offset#1/57 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.NumR#1/55 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </37 HalfReuse: & Fetch@2/39 } Tile{ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/53 AsIs: e.1#0/58 AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # Tile/23 AsIs: (/42 Reuse: # AsIs/44 } Tile{ AsIs: (/51 AsIs: s.TypeFromRes#1/56 AsIs: e.02#0/68 HalfReuse: s.Offset1 #57/52 AsIs: )/43 } Tile{ AsIs: )/20 } Tile{ AsIs: )/48 HalfReuse: (/38 AsIs: e.2#0/64 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.#0/70 } Tile{ AsIs: )/24 AsIs: >/1 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.PatFirst#1/60 } Tile{ HalfReuse: )/47 } Tile{ AsIs: e.ResFirst#1/66 } >/73 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[73]);
      refalrts::reinit_open_call(context[37]);
      refalrts::reinit_name(context[39], functions[efunc_gen_Fetch_Z2]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_DoModify]);
      refalrts::reinit_open_bracket(context[53]);
      refalrts::reinit_ident(context[23], identifiers[ident_Tile]);
      refalrts::update_ident(context[44], identifiers[ident_AsIs]);
      refalrts::reinit_svar( context[52], context[57] );
      refalrts::reinit_open_bracket(context[38]);
      refalrts::reinit_close_bracket(context[47]);
      refalrts::push_stack( vm, context[73] );
      refalrts::push_stack( vm, context[37] );
      refalrts::link_brackets( context[15], context[47] );
      refalrts::link_brackets( context[0], context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[19], context[24] );
      refalrts::link_brackets( context[38], context[16] );
      refalrts::link_brackets( context[11], context[48] );
      refalrts::link_brackets( context[42], context[20] );
      refalrts::link_brackets( context[51], context[43] );
      refalrts::link_brackets( context[53], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[73] );
      res = refalrts::splice_evar( res, context[66], context[67] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_evar( res, context[60], context[61] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      res = refalrts::splice_evar( res, context[24], context[1] );
      res = refalrts::splice_evar( res, context[70], context[71] );
      res = refalrts::splice_evar( res, context[48], context[19] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[51], context[43] );
      res = refalrts::splice_evar( res, context[23], context[44] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Modify/4 (/7 # AsIs/53 e.new#18/58 )/8 (/11 e.new#19/60 )/12 (/15 (/37 # Num/39 s.new#21/54 (/47 s.new#22/57 )/48 )/38 e.new#20/62 )/16 (/19 e.new#23/64 )/20 (/23 (/42 # Num/44 s.new#25/55 (/51 s.new#26/56 )/52 )/43 e.new#24/66 )/24 >/1
      context[58] = context[25];
      context[59] = context[26];
      context[60] = context[27];
      context[61] = context[28];
      context[62] = context[29];
      context[63] = context[30];
      context[64] = context[31];
      context[65] = context[32];
      context[66] = context[33];
      context[67] = context[34];
      if( ! refalrts::ident_term( identifiers[ident_AsIs], context[53] ) )
        continue;
      if( ! refalrts::empty_seq( context[45], context[46] ) )
        continue;
      if( ! refalrts::empty_seq( context[49], context[50] ) )
        continue;
      // closed e.new#18 as range 58
      // closed e.new#19 as range 60
      // closed e.new#20 as range 62
      // closed e.new#23 as range 64
      // closed e.new#24 as range 66
      do {
        // </0 & Modify/4 (/7 # AsIs/53 e.1#0/68 )/8 (/11 e.PatFirst#1/70 )/12 (/15 (/37 # Num/39 s.NumP#1/54 (/47 # LEFT-EDGE/57 )/48 )/38 e.2#0/72 )/16 (/19 e.ResFirst#1/74 )/20 (/23 (/42 # Num/44 s.NumR#1/55 (/51 # LEFT-EDGE/56 )/52 )/43 e.#0/76 )/24 >/1
        context[68] = context[58];
        context[69] = context[59];
        context[70] = context[60];
        context[71] = context[61];
        context[72] = context[62];
        context[73] = context[63];
        context[74] = context[64];
        context[75] = context[65];
        context[76] = context[66];
        context[77] = context[67];
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[57] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[56] ) )
          continue;
        // closed e.1#0 as range 68
        // closed e.PatFirst#1 as range 70
        // closed e.2#0 as range 72
        // closed e.ResFirst#1 as range 74
        // closed e.#0 as range 76
        //DEBUG: s.NumP#1: 54
        //DEBUG: s.NumR#1: 55
        //DEBUG: e.1#0: 68
        //DEBUG: e.PatFirst#1: 70
        //DEBUG: e.2#0: 72
        //DEBUG: e.ResFirst#1: 74
        //DEBUG: e.#0: 76

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/37 # Num/39 s.NumP#1/54 {REMOVED TILE} {REMOVED TILE} )/20 {REMOVED TILE} # Num/44 s.NumR#1/55 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </12 HalfReuse: & Fetch@2/15 } Tile{ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/53 AsIs: e.1#0/68 AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # Tile/23 AsIs: (/42 } Tile{ HalfReuse: # LEFT-EDGE/47 HalfReuse: )/57 AsIs: )/48 HalfReuse: (/38 AsIs: e.2#0/72 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.#0/76 } Tile{ HalfReuse: )/51 HalfReuse: >/56 AsIs: )/52 HalfReuse: (/43 } Tile{ AsIs: e.PatFirst#1/70 } Tile{ AsIs: )/24 } Tile{ AsIs: e.ResFirst#1/74 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[12]);
        refalrts::reinit_name(context[15], functions[efunc_gen_Fetch_Z2]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_DoModify]);
        refalrts::reinit_open_bracket(context[53]);
        refalrts::reinit_ident(context[23], identifiers[ident_Tile]);
        refalrts::reinit_ident(context[47], identifiers[ident_LEFTm_EDGE]);
        refalrts::reinit_close_bracket(context[57]);
        refalrts::reinit_open_bracket(context[38]);
        refalrts::reinit_close_bracket(context[51]);
        refalrts::reinit_close_call(context[56]);
        refalrts::reinit_open_bracket(context[43]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[12] );
        refalrts::link_brackets( context[43], context[24] );
        refalrts::link_brackets( context[0], context[52] );
        refalrts::push_stack( vm, context[56] );
        refalrts::push_stack( vm, context[4] );
        refalrts::link_brackets( context[19], context[51] );
        refalrts::link_brackets( context[38], context[16] );
        refalrts::link_brackets( context[11], context[48] );
        refalrts::link_brackets( context[42], context[57] );
        refalrts::link_brackets( context[53], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[74], context[75] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_evar( res, context[70], context[71] );
        res = refalrts::splice_evar( res, context[51], context[43] );
        res = refalrts::splice_evar( res, context[76], context[77] );
        res = refalrts::splice_evar( res, context[47], context[19] );
        res = refalrts::splice_evar( res, context[23], context[42] );
        res = refalrts::splice_evar( res, context[0], context[11] );
        res = refalrts::splice_evar( res, context[12], context[15] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Modify/4 (/7 # AsIs/53 e.1#0/68 )/8 (/11 e.PatFirst#1/70 )/12 (/15 (/37 # Num/39 s.NumP#1/54 (/47 # RIGHT-EDGE/57 )/48 )/38 )/16 (/19 e.ResFirst#1/72 )/20 (/23 (/42 # Num/44 s.NumR#1/55 (/51 # RIGHT-EDGE/56 )/52 )/43 )/24 >/1
      context[68] = context[58];
      context[69] = context[59];
      context[70] = context[60];
      context[71] = context[61];
      context[72] = context[64];
      context[73] = context[65];
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[57] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[56] ) )
        continue;
      if( ! refalrts::empty_seq( context[62], context[63] ) )
        continue;
      if( ! refalrts::empty_seq( context[66], context[67] ) )
        continue;
      // closed e.1#0 as range 68
      // closed e.PatFirst#1 as range 70
      // closed e.ResFirst#1 as range 72
      //DEBUG: s.NumP#1: 54
      //DEBUG: s.NumR#1: 55
      //DEBUG: e.1#0: 68
      //DEBUG: e.PatFirst#1: 70
      //DEBUG: e.ResFirst#1: 72

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/37 {REMOVED TILE} s.NumP#1/54 (/47 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/23 (/42 {REMOVED TILE} s.NumR#1/55 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </12 HalfReuse: & Fetch@2/15 } Tile{ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/53 AsIs: e.1#0/68 AsIs: )/8 AsIs: (/11 } Tile{ Reuse: # Tile/39 } Tile{ AsIs: (/51 AsIs: # RIGHT-EDGE/56 AsIs: )/52 AsIs: )/43 HalfReuse: (/24 HalfReuse: )/1 } Tile{ HalfReuse: (/57 AsIs: )/48 HalfReuse: >/38 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.PatFirst#1/70 } Tile{ AsIs: )/20 } Tile{ AsIs: e.ResFirst#1/72 } Tile{ HalfReuse: >/44 } Tile{ ]] }
      refalrts::reinit_open_call(context[12]);
      refalrts::reinit_name(context[15], functions[efunc_gen_Fetch_Z2]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_DoModify]);
      refalrts::reinit_open_bracket(context[53]);
      refalrts::update_ident(context[39], identifiers[ident_Tile]);
      refalrts::reinit_open_bracket(context[24]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_open_bracket(context[57]);
      refalrts::reinit_close_call(context[38]);
      refalrts::reinit_close_call(context[44]);
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[12] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[0], context[16] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[57], context[48] );
      refalrts::link_brackets( context[24], context[1] );
      refalrts::link_brackets( context[11], context[43] );
      refalrts::link_brackets( context[51], context[52] );
      refalrts::link_brackets( context[53], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_evar( res, context[72], context[73] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[70], context[71] );
      res = refalrts::splice_evar( res, context[57], context[19] );
      res = refalrts::splice_evar( res, context[51], context[1] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[12], context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Modify/4 (/7 s.Ident#1/53 e.1#0/58 )/8 (/11 e.PatFirst#1/60 )/12 (/15 (/37 # Num/39 s.NumP#1/54 (/47 s.TypeFromPat#1/72 e.04#0/62 s.Offset#1/57 )/48 )/38 e.2#0/64 )/16 (/19 e.ResFirst#1/66 )/20 (/23 (/42 # Num/44 s.NumR#1/55 (/51 s.TypeFromRes#1/56 e.02#0/68 )/52 )/43 e.#0/70 )/24 >/1
    context[58] = context[25];
    context[59] = context[26];
    context[60] = context[27];
    context[61] = context[28];
    context[62] = context[45];
    context[63] = context[46];
    context[64] = context[29];
    context[65] = context[30];
    context[66] = context[31];
    context[67] = context[32];
    context[68] = context[49];
    context[69] = context[50];
    context[70] = context[33];
    context[71] = context[34];
    // closed e.1#0 as range 58
    // closed e.PatFirst#1 as range 60
    // closed e.2#0 as range 64
    // closed e.ResFirst#1 as range 66
    // closed e.02#0 as range 68
    // closed e.#0 as range 70
    if( ! refalrts::svar_left( context[72], context[62], context[63] ) )
      continue;
    // closed e.04#0 as range 62
    //DEBUG: s.Ident#1: 53
    //DEBUG: s.NumP#1: 54
    //DEBUG: s.Offset#1: 57
    //DEBUG: s.NumR#1: 55
    //DEBUG: s.TypeFromRes#1: 56
    //DEBUG: e.1#0: 58
    //DEBUG: e.PatFirst#1: 60
    //DEBUG: e.2#0: 64
    //DEBUG: e.ResFirst#1: 66
    //DEBUG: e.02#0: 68
    //DEBUG: e.#0: 70
    //DEBUG: s.TypeFromPat#1: 72
    //DEBUG: e.04#0: 62

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.NumP#1/54 {REMOVED TILE} s.TypeFromPat#1/72 e.04#0/62 s.Offset#1/57 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.NumR#1/55 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@2/4 AsIs: (/7 } Tile{ HalfReuse: </39 } Tile{ HalfReuse: & DoModify/15 AsIs: (/37 } Tile{ AsIs: e.1#0/58 } Tile{ AsIs: )/20 AsIs: (/23 HalfReuse: # Tile/42 HalfReuse: (/44 } Tile{ AsIs: s.Ident#1/53 } Tile{ AsIs: (/51 AsIs: s.TypeFromRes#1/56 AsIs: e.02#0/68 HalfReuse: s.Offset1 #57/52 AsIs: )/43 } Tile{ HalfReuse: )/47 } Tile{ AsIs: )/48 HalfReuse: (/38 AsIs: e.2#0/64 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.#0/70 } Tile{ AsIs: )/24 AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.PatFirst#1/60 AsIs: )/12 } Tile{ AsIs: e.ResFirst#1/66 } >/73 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[73]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z2]);
    refalrts::reinit_open_call(context[39]);
    refalrts::reinit_name(context[15], functions[efunc_DoModify]);
    refalrts::reinit_ident(context[42], identifiers[ident_Tile]);
    refalrts::reinit_open_bracket(context[44]);
    refalrts::reinit_svar( context[52], context[57] );
    refalrts::reinit_close_bracket(context[47]);
    refalrts::reinit_open_bracket(context[38]);
    refalrts::push_stack( vm, context[73] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[39] );
    refalrts::link_brackets( context[19], context[24] );
    refalrts::link_brackets( context[38], context[16] );
    refalrts::link_brackets( context[23], context[48] );
    refalrts::link_brackets( context[44], context[47] );
    refalrts::link_brackets( context[51], context[43] );
    refalrts::link_brackets( context[37], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[73] );
    res = refalrts::splice_evar( res, context[66], context[67] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[24], context[1] );
    res = refalrts::splice_evar( res, context[70], context[71] );
    res = refalrts::splice_evar( res, context[48], context[19] );
    res = refalrts::splice_elem( res, context[47] );
    res = refalrts::splice_evar( res, context[51], context[43] );
    res = refalrts::splice_elem( res, context[53] );
    res = refalrts::splice_evar( res, context[20], context[44] );
    res = refalrts::splice_evar( res, context[58], context[59] );
    res = refalrts::splice_evar( res, context[15], context[37] );
    res = refalrts::splice_elem( res, context[39] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Modify/4 (/7 )/8 (/11 e.PatFirst#1/25 )/12 (/15 e.PatSecond#1/27 )/16 (/19 e.ResFirst#1/29 )/20 (/23 e.ResSecond#1/31 )/24 >/1
    context[25] = context[9];
    context[26] = context[10];
    context[27] = context[13];
    context[28] = context[14];
    context[29] = context[17];
    context[30] = context[18];
    context[31] = context[21];
    context[32] = context[22];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.PatFirst#1 as range 25
    // closed e.PatSecond#1 as range 27
    // closed e.ResFirst#1 as range 29
    // closed e.ResSecond#1 as range 31
    //DEBUG: e.PatFirst#1: 25
    //DEBUG: e.PatSecond#1: 27
    //DEBUG: e.ResFirst#1: 29
    //DEBUG: e.ResSecond#1: 31

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Modify/4 (/7 )/8 (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.PatFirst#1/25 } Tile{ HalfReuse: # RemovedTile/15 AsIs: e.PatSecond#1/27 AsIs: )/16 AsIs: (/19 AsIs: e.ResFirst#1/29 HalfReuse: (/20 HalfReuse: # Tile/23 } Tile{ AsIs: )/24 } Tile{ AsIs: e.ResSecond#1/31 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[15], identifiers[ident_RemovedTile]);
    refalrts::reinit_open_bracket(context[20]);
    refalrts::reinit_ident(context[23], identifiers[ident_Tile]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[19], context[1] );
    refalrts::link_brackets( context[20], context[24] );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_evar( res, context[15], context[23] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Modify/4 (/7 e.Idents#1/5 )/8 (/11 e.PatFirst#1/9 )/12 (/15 e.PatSecond#1/13 )/16 (/19 e.ResFirst#1/17 )/20 (/23 e.ResSecond#1/21 )/24 >/1
  // closed e.Idents#1 as range 5
  // closed e.PatFirst#1 as range 9
  // closed e.PatSecond#1 as range 13
  // closed e.ResFirst#1 as range 17
  // closed e.ResSecond#1 as range 21
  //DEBUG: e.Idents#1: 5
  //DEBUG: e.PatFirst#1: 9
  //DEBUG: e.PatSecond#1: 13
  //DEBUG: e.ResFirst#1: 17
  //DEBUG: e.ResSecond#1: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </25 & Fetch@2/26 (/27 Tile{ AsIs: </0 Reuse: & DoModify@0/4 AsIs: (/7 AsIs: e.Idents#1/5 AsIs: )/8 AsIs: (/11 } # Tile/28 Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.PatSecond#1/13 } Tile{ AsIs: )/20 AsIs: (/23 AsIs: e.ResSecond#1/21 AsIs: )/24 AsIs: >/1 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.PatFirst#1/9 } )/29 Tile{ AsIs: e.ResFirst#1/17 } >/30 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_gen_Fetch_Z2]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_ident(vm, context[28], identifiers[ident_Tile]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::update_name(context[4], functions[efunc_gen_DoModify_Z0]);
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[15], context[29] );
  refalrts::link_brackets( context[27], context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[30] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[20], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[25], context[27] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Modify("Modify", COOKIE1_, COOKIE2_, func_Modify);


static refalrts::FnResult func_DoModify(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 69 elems
  refalrts::Iter context[69];
  refalrts::zeros( context, 69 );
  // </0 & DoModify/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoModify/4 (/7 e.new#1/5 )/8 (/11 # Tile/13 e.new#2/9 )/12 (/16 e.new#3/14 )/17 (/20 e.new#4/18 )/21 >/1
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
  context[13] = refalrts::ident_left( identifiers[ident_Tile], context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 14
  // closed e.new#4 as range 18
  do {
    // </0 & DoModify/4 (/7 s.new#5/48 e.new#6/22 )/8 (/11 # Tile/13 e.new#7/24 )/12 (/16 (/32 # Num/34 s.new#8/49 (/42 e.new#9/40 s.new#10/52 )/43 )/33 e.new#11/26 )/17 (/20 (/37 # Num/39 s.new#12/50 (/46 s.new#13/51 e.new#14/44 )/47 )/38 e.new#15/28 )/21 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[14];
    context[27] = context[15];
    context[28] = context[18];
    context[29] = context[19];
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    context[34] = refalrts::ident_left( identifiers[ident_Num], context[30], context[31] );
    if( ! context[34] )
      continue;
    context[35] = 0;
    context[36] = 0;
    context[37] = refalrts::brackets_left( context[35], context[36], context[28], context[29] );
    if( ! context[37] )
      continue;
    refalrts::bracket_pointers(context[37], context[38]);
    context[39] = refalrts::ident_left( identifiers[ident_Num], context[35], context[36] );
    if( ! context[39] )
      continue;
    context[40] = 0;
    context[41] = 0;
    context[42] = refalrts::brackets_right( context[40], context[41], context[30], context[31] );
    if( ! context[42] )
      continue;
    refalrts::bracket_pointers(context[42], context[43]);
    context[44] = 0;
    context[45] = 0;
    context[46] = refalrts::brackets_right( context[44], context[45], context[35], context[36] );
    if( ! context[46] )
      continue;
    refalrts::bracket_pointers(context[46], context[47]);
    // closed e.new#7 as range 24
    // closed e.new#11 as range 26
    // closed e.new#15 as range 28
    if( ! refalrts::svar_left( context[48], context[22], context[23] ) )
      continue;
    // closed e.new#6 as range 22
    if( ! refalrts::svar_left( context[49], context[30], context[31] ) )
      continue;
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    if( ! refalrts::svar_left( context[50], context[35], context[36] ) )
      continue;
    if( ! refalrts::empty_seq( context[35], context[36] ) )
      continue;
    if( ! refalrts::svar_left( context[51], context[44], context[45] ) )
      continue;
    // closed e.new#14 as range 44
    if( ! refalrts::svar_right( context[52], context[40], context[41] ) )
      continue;
    // closed e.new#9 as range 40
    do {
      // </0 & DoModify/4 (/7 # AsIsE/48 e.Idents#1/53 )/8 (/11 # Tile/13 e.Tile#1/55 )/12 (/16 (/32 # Num/34 s.NumP#1/49 (/42 s.TypeFromPat#1/65 e.InfoFromPat#1/57 s.Offset#1/52 )/43 )/33 e.PatSecond#1/59 )/17 (/20 (/37 # Num/39 s.NumR#1/50 (/46 s.TypeFromRes#1/51 e.InfoFromRes#1/61 )/47 )/38 e.ResSecond#1/63 )/21 >/1
      context[53] = context[22];
      context[54] = context[23];
      context[55] = context[24];
      context[56] = context[25];
      context[57] = context[40];
      context[58] = context[41];
      context[59] = context[26];
      context[60] = context[27];
      context[61] = context[44];
      context[62] = context[45];
      context[63] = context[28];
      context[64] = context[29];
      if( ! refalrts::ident_term( identifiers[ident_AsIsE], context[48] ) )
        continue;
      // closed e.Idents#1 as range 53
      // closed e.Tile#1 as range 55
      // closed e.PatSecond#1 as range 59
      // closed e.InfoFromRes#1 as range 61
      // closed e.ResSecond#1 as range 63
      if( ! refalrts::svar_left( context[65], context[57], context[58] ) )
        continue;
      // closed e.InfoFromPat#1 as range 57
      //DEBUG: s.NumP#1: 49
      //DEBUG: s.Offset#1: 52
      //DEBUG: s.NumR#1: 50
      //DEBUG: s.TypeFromRes#1: 51
      //DEBUG: e.Idents#1: 53
      //DEBUG: e.Tile#1: 55
      //DEBUG: e.PatSecond#1: 59
      //DEBUG: e.InfoFromRes#1: 61
      //DEBUG: e.ResSecond#1: 63
      //DEBUG: s.TypeFromPat#1: 65
      //DEBUG: e.InfoFromPat#1: 57

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NumP#1/49 (/42 s.TypeFromPat#1/65 e.InfoFromPat#1/57 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/37 # Num/39 s.NumR#1/50 (/46 s.TypeFromRes#1/51 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/48 AsIs: e.Idents#1/53 AsIs: )/8 AsIs: (/11 AsIs: # Tile/13 AsIs: e.Tile#1/55 HalfReuse: (/12 HalfReuse: # AsIs/16 AsIs: (/32 HalfReuse: s.TypeFromRes1 #51/34 } Tile{ AsIs: e.InfoFromRes#1/61 } Tile{ AsIs: s.Offset#1/52 AsIs: )/43 AsIs: )/33 } Tile{ AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.PatSecond#1/59 } Tile{ AsIs: )/47 HalfReuse: (/38 AsIs: e.ResSecond#1/63 AsIs: )/21 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_DoModify]);
      refalrts::reinit_open_bracket(context[48]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[16], identifiers[ident_AsIs]);
      refalrts::reinit_svar( context[34], context[51] );
      refalrts::reinit_open_bracket(context[38]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[38], context[21] );
      refalrts::link_brackets( context[20], context[47] );
      refalrts::link_brackets( context[11], context[17] );
      refalrts::link_brackets( context[12], context[33] );
      refalrts::link_brackets( context[32], context[43] );
      refalrts::link_brackets( context[48], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[47];
      res = refalrts::splice_evar( res, context[59], context[60] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      res = refalrts::splice_evar( res, context[52], context[33] );
      res = refalrts::splice_evar( res, context[61], context[62] );
      res = refalrts::splice_evar( res, context[4], context[34] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoModify/4 (/7 # AsIs/48 e.new#16/53 )/8 (/11 # Tile/13 e.new#17/55 )/12 (/16 (/32 # Num/34 s.new#19/49 (/42 s.new#20/52 )/43 )/33 e.new#18/57 )/17 (/20 (/37 # Num/39 s.new#22/50 (/46 s.new#23/51 )/47 )/38 e.new#21/59 )/21 >/1
      context[53] = context[22];
      context[54] = context[23];
      context[55] = context[24];
      context[56] = context[25];
      context[57] = context[26];
      context[58] = context[27];
      context[59] = context[28];
      context[60] = context[29];
      if( ! refalrts::ident_term( identifiers[ident_AsIs], context[48] ) )
        continue;
      if( ! refalrts::empty_seq( context[40], context[41] ) )
        continue;
      if( ! refalrts::empty_seq( context[44], context[45] ) )
        continue;
      // closed e.new#16 as range 53
      // closed e.new#17 as range 55
      // closed e.new#18 as range 57
      // closed e.new#21 as range 59
      do {
        // </0 & DoModify/4 (/7 # AsIs/48 e.Idents#1/61 )/8 (/11 # Tile/13 e.Tile#1/63 )/12 (/16 (/32 # Num/34 s.NumP#1/49 (/42 # LEFT-EDGE/52 )/43 )/33 e.PatSecond#1/65 )/17 (/20 (/37 # Num/39 s.NumR#1/50 (/46 # LEFT-EDGE/51 )/47 )/38 e.ResSecond#1/67 )/21 >/1
        context[61] = context[53];
        context[62] = context[54];
        context[63] = context[55];
        context[64] = context[56];
        context[65] = context[57];
        context[66] = context[58];
        context[67] = context[59];
        context[68] = context[60];
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[52] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[51] ) )
          continue;
        // closed e.Idents#1 as range 61
        // closed e.Tile#1 as range 63
        // closed e.PatSecond#1 as range 65
        // closed e.ResSecond#1 as range 67
        //DEBUG: s.NumP#1: 49
        //DEBUG: s.NumR#1: 50
        //DEBUG: e.Idents#1: 61
        //DEBUG: e.Tile#1: 63
        //DEBUG: e.PatSecond#1: 65
        //DEBUG: e.ResSecond#1: 67

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NumP#1/49 (/42 # LEFT-EDGE/52 )/43 )/33 {REMOVED TILE} )/17 (/20 (/37 # Num/39 s.NumR#1/50 {REMOVED TILE} # LEFT-EDGE/51 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/48 AsIs: e.Idents#1/61 AsIs: )/8 AsIs: (/11 AsIs: # Tile/13 AsIs: e.Tile#1/63 HalfReuse: (/12 HalfReuse: # LEFT-EDGE/16 HalfReuse: )/32 HalfReuse: )/34 } Tile{ AsIs: (/46 } Tile{ AsIs: e.PatSecond#1/65 } Tile{ AsIs: )/47 HalfReuse: (/38 AsIs: e.ResSecond#1/67 AsIs: )/21 AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_DoModify]);
        refalrts::reinit_open_bracket(context[48]);
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[16], identifiers[ident_LEFTm_EDGE]);
        refalrts::reinit_close_bracket(context[32]);
        refalrts::reinit_close_bracket(context[34]);
        refalrts::reinit_open_bracket(context[38]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::link_brackets( context[38], context[21] );
        refalrts::link_brackets( context[46], context[47] );
        refalrts::link_brackets( context[11], context[34] );
        refalrts::link_brackets( context[12], context[32] );
        refalrts::link_brackets( context[48], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[47];
        res = refalrts::splice_evar( res, context[65], context[66] );
        res = refalrts::splice_elem( res, context[46] );
        res = refalrts::splice_evar( res, context[4], context[34] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoModify/4 (/7 # AsIs/48 e.Idents#1/61 )/8 (/11 # Tile/13 e.Tile#1/63 )/12 (/16 (/32 # Num/34 s.NumP#1/49 (/42 # RIGHT-EDGE/52 )/43 )/33 )/17 (/20 (/37 # Num/39 s.NumR#1/50 (/46 # RIGHT-EDGE/51 )/47 )/38 )/21 >/1
      context[61] = context[53];
      context[62] = context[54];
      context[63] = context[55];
      context[64] = context[56];
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[52] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[51] ) )
        continue;
      if( ! refalrts::empty_seq( context[57], context[58] ) )
        continue;
      if( ! refalrts::empty_seq( context[59], context[60] ) )
        continue;
      // closed e.Idents#1 as range 61
      // closed e.Tile#1 as range 63
      //DEBUG: s.NumP#1: 49
      //DEBUG: s.NumR#1: 50
      //DEBUG: e.Idents#1: 61
      //DEBUG: e.Tile#1: 63

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NumP#1/49 (/42 # RIGHT-EDGE/52 )/43 )/33 )/17 (/20 (/37 # Num/39 s.NumR#1/50 (/46 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/48 AsIs: e.Idents#1/61 AsIs: )/8 AsIs: (/11 AsIs: # Tile/13 AsIs: e.Tile#1/63 HalfReuse: (/12 HalfReuse: # RIGHT-EDGE/16 HalfReuse: )/32 HalfReuse: )/34 } Tile{ HalfReuse: (/51 AsIs: )/47 HalfReuse: (/38 AsIs: )/21 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_DoModify]);
      refalrts::reinit_open_bracket(context[48]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[16], identifiers[ident_RIGHTm_EDGE]);
      refalrts::reinit_close_bracket(context[32]);
      refalrts::reinit_close_bracket(context[34]);
      refalrts::reinit_open_bracket(context[51]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[38], context[21] );
      refalrts::link_brackets( context[51], context[47] );
      refalrts::link_brackets( context[11], context[34] );
      refalrts::link_brackets( context[12], context[32] );
      refalrts::link_brackets( context[48], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[51];
      res = refalrts::splice_evar( res, context[4], context[34] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoModify/4 (/7 s.Ident#1/48 e.Idents#1/53 )/8 (/11 # Tile/13 e.Tile#1/55 )/12 (/16 (/32 # Num/34 s.NumP#1/49 (/42 s.TypeFromPat#1/65 e.InfoFromPat#1/57 s.Offset#1/52 )/43 )/33 e.PatSecond#1/59 )/17 (/20 (/37 # Num/39 s.NumR#1/50 (/46 s.TypeFromRes#1/51 e.InfoFromRes#1/61 )/47 )/38 e.ResSecond#1/63 )/21 >/1
    context[53] = context[22];
    context[54] = context[23];
    context[55] = context[24];
    context[56] = context[25];
    context[57] = context[40];
    context[58] = context[41];
    context[59] = context[26];
    context[60] = context[27];
    context[61] = context[44];
    context[62] = context[45];
    context[63] = context[28];
    context[64] = context[29];
    // closed e.Idents#1 as range 53
    // closed e.Tile#1 as range 55
    // closed e.PatSecond#1 as range 59
    // closed e.InfoFromRes#1 as range 61
    // closed e.ResSecond#1 as range 63
    if( ! refalrts::svar_left( context[65], context[57], context[58] ) )
      continue;
    // closed e.InfoFromPat#1 as range 57
    //DEBUG: s.Ident#1: 48
    //DEBUG: s.NumP#1: 49
    //DEBUG: s.Offset#1: 52
    //DEBUG: s.NumR#1: 50
    //DEBUG: s.TypeFromRes#1: 51
    //DEBUG: e.Idents#1: 53
    //DEBUG: e.Tile#1: 55
    //DEBUG: e.PatSecond#1: 59
    //DEBUG: e.InfoFromRes#1: 61
    //DEBUG: e.ResSecond#1: 63
    //DEBUG: s.TypeFromPat#1: 65
    //DEBUG: e.InfoFromPat#1: 57

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Ident#1/48 {REMOVED TILE} {REMOVED TILE} s.NumP#1/49 (/42 s.TypeFromPat#1/65 e.InfoFromPat#1/57 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/37 # Num/39 s.NumR#1/50 (/46 s.TypeFromRes#1/51 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoModify/4 AsIs: (/7 } Tile{ AsIs: e.Idents#1/53 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Tile/13 AsIs: e.Tile#1/55 HalfReuse: (/12 HalfReuse: s.Ident1 #48/16 AsIs: (/32 HalfReuse: s.TypeFromRes1 #51/34 } Tile{ AsIs: e.InfoFromRes#1/61 } Tile{ AsIs: s.Offset#1/52 AsIs: )/43 AsIs: )/33 } Tile{ AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.PatSecond#1/59 } Tile{ AsIs: )/47 HalfReuse: (/38 AsIs: e.ResSecond#1/63 AsIs: )/21 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_svar( context[16], context[48] );
    refalrts::reinit_svar( context[34], context[51] );
    refalrts::reinit_open_bracket(context[38]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[38], context[21] );
    refalrts::link_brackets( context[20], context[47] );
    refalrts::link_brackets( context[11], context[17] );
    refalrts::link_brackets( context[12], context[33] );
    refalrts::link_brackets( context[32], context[43] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[47];
    res = refalrts::splice_evar( res, context[59], context[60] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    res = refalrts::splice_evar( res, context[52], context[33] );
    res = refalrts::splice_evar( res, context[61], context[62] );
    res = refalrts::splice_evar( res, context[8], context[34] );
    res = refalrts::splice_evar( res, context[53], context[54] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoModify/4 (/7 )/8 (/11 # Tile/13 e.Tile#1/9 )/12 (/16 e.PatSecond#1/14 )/17 (/20 e.ResSecond#1/18 )/21 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tile#1 as range 9
  // closed e.PatSecond#1 as range 14
  // closed e.ResSecond#1 as range 18
  //DEBUG: e.Tile#1: 9
  //DEBUG: e.PatSecond#1: 14
  //DEBUG: e.ResSecond#1: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/16 {REMOVED TILE} )/17 (/20 {REMOVED TILE} )/21 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # RemovedTile/4 } Tile{ AsIs: e.PatSecond#1/14 } Tile{ HalfReuse: )/7 HalfReuse: (/8 AsIs: (/11 AsIs: # Tile/13 AsIs: e.Tile#1/9 AsIs: )/12 } Tile{ AsIs: e.ResSecond#1/18 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_RemovedTile]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[8], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoModify("DoModify", COOKIE1_, COOKIE2_, func_DoModify);


static refalrts::FnResult func_OverlapItem(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & OverlapItem/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OverlapItem/4 (/7 e.new#1/5 s.new#2/11 )/8 t.new#3/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & OverlapItem/4 (/7 s.new#6/14 e.new#7/12 s.new#5/11 )/8 t.new#4/9 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & OverlapItem/4 (/7 s.new#11/14 e.new#12/15 s.new#10/11 )/8 (/9 s.new#8/19 e.new#9/17 )/10 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = 0;
      context[18] = 0;
      if( ! refalrts::brackets_term( context[17], context[18], context[9] ) )
        continue;
      // closed e.new#12 as range 15
      if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
        continue;
      // closed e.new#9 as range 17
      do {
        // </0 & OverlapItem/4 (/7 # TkVariable/14 'e'/24 e.Index#1/20 s.Offset#1/11 )/8 (/9 # TkVariable/19 'e'/25 e.Index#1/26 )/10 >/1
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        context[23] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[14] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[19] ) )
          continue;
        context[24] = refalrts::char_left( 'e', context[20], context[21] );
        if( ! context[24] )
          continue;
        context[25] = refalrts::char_left( 'e', context[22], context[23] );
        if( ! context[25] )
          continue;
        // closed e.Index#1 as range 20
        if( ! refalrts::repeated_evar_left( vm, context[26], context[27], context[20], context[21], context[22], context[23] ) )
          continue;
        if( ! refalrts::empty_seq( context[22], context[23] ) )
          continue;
        //DEBUG: s.Offset#1: 11
        //DEBUG: e.Index#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 # TkVariable/14 'e'/24 e.Index#1/20 s.Offset#1/11 )/8 (/9 # TkVariable/19 'e'/25 e.Index#1/26 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/10 HalfReuse: # AsIsE/1 ]] }
        refalrts::reinit_number(context[10], 3UL);
        refalrts::reinit_ident(context[1], identifiers[ident_AsIsE]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OverlapItem/4 (/7 s.AnyType#1/14 e.Info#1/20 s.Offset#1/11 )/8 (/9 s.AnyType#1/19 e.Info#1/24 )/10 >/1
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[17];
      context[23] = context[18];
      if( ! refalrts::repeated_stvar_term( vm, context[19], context[14] ) )
        continue;
      // closed e.Info#1 as range 20
      if( ! refalrts::repeated_evar_left( vm, context[24], context[25], context[20], context[21], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      //DEBUG: s.AnyType#1: 14
      //DEBUG: s.Offset#1: 11
      //DEBUG: e.Info#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 s.AnyType#1/14 e.Info#1/20 s.Offset#1/11 )/8 (/9 s.AnyType#1/19 e.Info#1/24 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/10 HalfReuse: # AsIs/1 ]] }
      refalrts::reinit_number(context[10], 3UL);
      refalrts::reinit_ident(context[1], identifiers[ident_AsIs]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & OverlapItem/4 (/7 # TkVariable/14 s.Mode#1/17 e.Index#1/15 s.Offset#1/11 )/8 t.AnyItem#1/9 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[14] ) )
        continue;
      if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
        continue;
      // closed e.Index#1 as range 15
      //DEBUG: t.AnyItem#1: 9
      //DEBUG: s.Offset#1: 11
      //DEBUG: s.Mode#1: 17
      //DEBUG: e.Index#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 # TkVariable/14 s.Mode#1/17 e.Index#1/15 s.Offset#1/11 )/8 t.AnyItem#1/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_NoOverlap]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OverlapItem/4 (/7 s.new#11/14 e.new#12/15 s.new#10/11 )/8 (/9 s.new#8/19 e.new#9/17 )/10 >/1
    context[15] = context[12];
    context[16] = context[13];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[9] ) )
      continue;
    // closed e.new#12 as range 15
    if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
      continue;
    // closed e.new#9 as range 17
    do {
      // </0 & OverlapItem/4 (/7 s.new#16/14 e.new#17/20 s.new#15/11 )/8 (/9 # TkVariable/19 s.new#13/24 e.new#14/22 )/10 >/1
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[17];
      context[23] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[19] ) )
        continue;
      // closed e.new#17 as range 20
      if( ! refalrts::svar_left( context[24], context[22], context[23] ) )
        continue;
      // closed e.new#14 as range 22
      do {
        // </0 & OverlapItem/4 (/7 s.AnyType#1/14 e.Info#1/25 s.Offset#1/11 )/8 (/9 # TkVariable/19 's'/24 e.Index#1/27 )/10 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::char_term( 's', context[24] ) )
          continue;
        // closed e.Info#1 as range 25
        // closed e.Index#1 as range 27
        //DEBUG: s.AnyType#1: 14
        //DEBUG: s.Offset#1: 11
        //DEBUG: e.Info#1: 25
        //DEBUG: e.Index#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 s.AnyType#1/14 e.Info#1/25 s.Offset#1/11 )/8 (/9 # TkVariable/19 's'/24 e.Index#1/27 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/10 HalfReuse: # HalfReuse/1 ]] }
        refalrts::reinit_number(context[10], 1UL);
        refalrts::reinit_ident(context[1], identifiers[ident_HalfReuse]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OverlapItem/4 (/7 s.AnyType#1/14 e.Info#1/25 s.Offset#1/11 )/8 (/9 # TkVariable/19 s.Mode#1/24 e.Index#1/27 )/10 >/1
      context[25] = context[20];
      context[26] = context[21];
      context[27] = context[22];
      context[28] = context[23];
      // closed e.Info#1 as range 25
      // closed e.Index#1 as range 27
      //DEBUG: s.AnyType#1: 14
      //DEBUG: s.Offset#1: 11
      //DEBUG: s.Mode#1: 24
      //DEBUG: e.Info#1: 25
      //DEBUG: e.Index#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 s.AnyType#1/14 e.Info#1/25 s.Offset#1/11 )/8 (/9 # TkVariable/19 s.Mode#1/24 e.Index#1/27 )/10 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_NoOverlap]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & OverlapItem/4 (/7 s.new#15/14 e.new#16/20 s.new#14/11 )/8 (/9 s.new#13/19 )/10 >/1
      context[20] = context[15];
      context[21] = context[16];
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      // closed e.new#16 as range 20
      do {
        // </0 & OverlapItem/4 (/7 s.Type1#1/14 e.Info1#1/22 s.Offset#1/11 )/8 (/9 # LEFT-EDGE/19 )/10 >/1
        context[22] = context[20];
        context[23] = context[21];
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[19] ) )
          continue;
        // closed e.Info1#1 as range 22
        //DEBUG: s.Type1#1: 14
        //DEBUG: s.Offset#1: 11
        //DEBUG: e.Info1#1: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 s.Type1#1/14 e.Info1#1/22 s.Offset#1/11 )/8 (/9 # LEFT-EDGE/19 )/10 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_NoOverlap]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OverlapItem/4 (/7 s.Type1#1/14 e.Info1#1/22 s.Offset#1/11 )/8 (/9 # RIGHT-EDGE/19 )/10 >/1
      context[22] = context[20];
      context[23] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[19] ) )
        continue;
      // closed e.Info1#1 as range 22
      //DEBUG: s.Type1#1: 14
      //DEBUG: s.Offset#1: 11
      //DEBUG: e.Info1#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 s.Type1#1/14 e.Info1#1/22 s.Offset#1/11 )/8 (/9 # RIGHT-EDGE/19 )/10 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_NoOverlap]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & OverlapItem/4 (/7 # Symbol/14 s.new#16/24 e.new#17/20 s.new#15/11 )/8 (/9 # Symbol/19 s.new#13/25 e.new#14/22 )/10 >/1
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[17];
      context[23] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[14] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[19] ) )
        continue;
      if( ! refalrts::svar_left( context[24], context[20], context[21] ) )
        continue;
      // closed e.new#17 as range 20
      if( ! refalrts::svar_left( context[25], context[22], context[23] ) )
        continue;
      // closed e.new#14 as range 22
      do {
        // </0 & OverlapItem/4 (/7 # Symbol/14 s.Type#1/24 e.Info1#1/26 s.Offset#1/11 )/8 (/9 # Symbol/19 s.Type#1/25 e.Info2#1/28 )/10 >/1
        context[26] = context[20];
        context[27] = context[21];
        context[28] = context[22];
        context[29] = context[23];
        if( ! refalrts::repeated_stvar_term( vm, context[25], context[24] ) )
          continue;
        // closed e.Info1#1 as range 26
        // closed e.Info2#1 as range 28
        //DEBUG: s.Type#1: 24
        //DEBUG: s.Offset#1: 11
        //DEBUG: e.Info1#1: 26
        //DEBUG: e.Info2#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 # Symbol/14 s.Type#1/24 e.Info1#1/26 s.Offset#1/11 )/8 (/9 # Symbol/19 s.Type#1/25 e.Info2#1/28 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/10 HalfReuse: # Reuse/1 ]] }
        refalrts::reinit_number(context[10], 2UL);
        refalrts::reinit_ident(context[1], identifiers[ident_Reuse]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[10];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OverlapItem/4 (/7 # Symbol/14 s.Type1#1/24 e.Info1#1/26 s.Offset#1/11 )/8 (/9 # Symbol/19 s.Type2#1/25 e.Info2#1/28 )/10 >/1
      context[26] = context[20];
      context[27] = context[21];
      context[28] = context[22];
      context[29] = context[23];
      // closed e.Info1#1 as range 26
      // closed e.Info2#1 as range 28
      //DEBUG: s.Type1#1: 24
      //DEBUG: s.Offset#1: 11
      //DEBUG: s.Type2#1: 25
      //DEBUG: e.Info1#1: 26
      //DEBUG: e.Info2#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 # Symbol/14 s.Type1#1/24 e.Info1#1/26 s.Offset#1/11 )/8 (/9 # Symbol/19 s.Type2#1/25 e.Info2#1/28 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/10 HalfReuse: # HalfReuse/1 ]] }
      refalrts::reinit_number(context[10], 1UL);
      refalrts::reinit_ident(context[1], identifiers[ident_HalfReuse]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & OverlapItem/4 (/7 s.Type#1/14 e.Info1#1/20 s.Offset#1/11 )/8 (/9 s.Type#1/19 e.Info2#1/22 )/10 >/1
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[17];
      context[23] = context[18];
      if( ! refalrts::repeated_stvar_term( vm, context[19], context[14] ) )
        continue;
      // closed e.Info1#1 as range 20
      // closed e.Info2#1 as range 22
      //DEBUG: s.Type#1: 14
      //DEBUG: s.Offset#1: 11
      //DEBUG: e.Info1#1: 20
      //DEBUG: e.Info2#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 s.Type#1/14 e.Info1#1/20 s.Offset#1/11 )/8 (/9 s.Type#1/19 e.Info2#1/22 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/10 HalfReuse: # Reuse/1 ]] }
      refalrts::reinit_number(context[10], 2UL);
      refalrts::reinit_ident(context[1], identifiers[ident_Reuse]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OverlapItem/4 (/7 s.Type1#1/14 e.Info1#1/20 s.Offset#1/11 )/8 (/9 s.Type2#1/19 e.Info2#1/22 )/10 >/1
    context[20] = context[15];
    context[21] = context[16];
    context[22] = context[17];
    context[23] = context[18];
    // closed e.Info1#1 as range 20
    // closed e.Info2#1 as range 22
    //DEBUG: s.Type1#1: 14
    //DEBUG: s.Offset#1: 11
    //DEBUG: s.Type2#1: 19
    //DEBUG: e.Info1#1: 20
    //DEBUG: e.Info2#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 s.Type1#1/14 e.Info1#1/20 s.Offset#1/11 )/8 (/9 s.Type2#1/19 e.Info2#1/22 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/10 HalfReuse: # HalfReuse/1 ]] }
    refalrts::reinit_number(context[10], 1UL);
    refalrts::reinit_ident(context[1], identifiers[ident_HalfReuse]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OverlapItem/4 (/7 s.new#5/11 )/8 t.new#4/9 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OverlapItem/4 (/7 s.new#7/11 )/8 (/9 s.new#6/14 )/10 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    do {
      // </0 & OverlapItem/4 (/7 # LEFT-EDGE/11 )/8 (/9 # LEFT-EDGE/14 )/10 >/1
      if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[11] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[14] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 # LEFT-EDGE/11 )/8 (/9 # LEFT-EDGE/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/10 HalfReuse: # AsIs/1 ]] }
      refalrts::reinit_number(context[10], 3UL);
      refalrts::reinit_ident(context[1], identifiers[ident_AsIs]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OverlapItem/4 (/7 # RIGHT-EDGE/11 )/8 (/9 # RIGHT-EDGE/14 )/10 >/1
    if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[11] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[14] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 # RIGHT-EDGE/11 )/8 (/9 # RIGHT-EDGE/14 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/10 HalfReuse: # AsIs/1 ]] }
    refalrts::reinit_number(context[10], 3UL);
    refalrts::reinit_ident(context[1], identifiers[ident_AsIs]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OverlapItem/4 (/7 # LEFT-EDGE/11 )/8 t.Other#1/9 >/1
    if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[11] ) )
      continue;
    //DEBUG: t.Other#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 # LEFT-EDGE/11 )/8 t.Other#1/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_NoOverlap]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OverlapItem/4 (/7 # RIGHT-EDGE/11 )/8 t.Other#1/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[11] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Other#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/7 # RIGHT-EDGE/11 )/8 t.Other#1/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_NoOverlap]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OverlapItem("OverlapItem", COOKIE1_, COOKIE2_, func_OverlapItem);


static refalrts::FnResult func_gen_Apply_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@2/4 t.new#1/5 t.new#2/7 t.new#3/9 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Apply@2/4 s.Fn#1/5 t.Acc#1/7 t.Next#1/9 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 9
    //DEBUG: s.Fn#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 HalfReuse: & $table/1 } >/11 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@2/4 (/5 t.Closure#1/13 e.Bounded#1/11 )/6 t.Acc#1/7 t.Next#1/9 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded#1 as range 11
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 9
    //DEBUG: t.Closure#1: 13
    //DEBUG: e.Bounded#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@4/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: t.Acc#1/7 AsIs: t.Next#1/9 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@2/4 t.dyn#0/5 t.Acc#1/7 t.Next#1/9 >/1
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: t.Next#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z2("Apply@2", COOKIE1_, COOKIE2_, func_gen_Apply_Z2);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#2 as range 7
  // closed e.new#3 as range 2
  do {
    // </0 & DoMapAccum@1/4 t.new#4/5 (/9 e.new#7/11 )/10 t.new#5/15 e.new#6/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#7 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & DoMapAccum@1/4 s.Num#2/5 (/9 e.Scanned#1/17 )/10 t.Next#1/15 e.Tail#1/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.Scanned#1 as range 17
      // closed e.Tail#1 as range 19
      //DEBUG: t.Next#1: 15
      //DEBUG: s.Num#2: 5
      //DEBUG: e.Scanned#1: 17
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail#1/19 } )/22 </23 & Add/24 1/25 Tile{ AsIs: s.Num#2/5 } >/26 (/27 # Num/28 s.Num#2/5/29 Tile{ AsIs: t.Next#1/15 } )/30 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::alloc_close_bracket(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[25], 1UL);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_ident(vm, context[28], identifiers[ident_Num]);
      refalrts::copy_stvar(vm, context[29], context[5]);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[27], context[30] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[21], context[22] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[26], context[29] );
      res = refalrts::splice_elem( res, context[5] );
      res = refalrts::splice_evar( res, context[22], context[25] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@1/4 t.Acc#1/5 (/9 e.Scanned#1/17 )/10 t.Next#1/15 e.Tail#1/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@1/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail#1/19 } )/22 </23 & Enum\1*1/24 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_Enum_L1D1]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@1/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 t.acc#0/5 (/9 e.scanned#0/7 )/10 e.items#0/2 >/1
  // closed e.scanned#0 as range 7
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 5
  //DEBUG: e.scanned#0: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & Enum\1@0/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_Enum_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@1/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@1/4 (/7 # Num/13 s.Num#2/14 t.1#0/15 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Num], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.Num#2: 14
      //DEBUG: t.1#0: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} & Map@1/4 (/7 # Num/13 s.Num#2/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.1#0/15 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map@1/4 # RemovedTile/7 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_RemovedTile], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: # RemovedTile/0 HalfReuse: </4 HalfReuse: & Map@1/7 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_ident(context[0], identifiers[ident_RemovedTile]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map@1/4 (/7 # Tile/13 e.0#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Tile], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.0#0 as range 11
      // closed e.Tail#1 as range 9
      //DEBUG: e.0#0: 11
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Tile/13 AsIs: e.0#0/11 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@1/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DeEnum\1*3/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_DeEnum_L1D3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & DeEnum\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_DeEnum_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Fetch_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Fetch@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@1/4 (/9 e.3#0/7 t.1#0/17 )/10 (/13 t.2#0/15 e.4#0/11 )/14 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.4#0 as range 11
    context[18] = refalrts::tvar_right( context[17], context[7], context[8] );
    if( ! context[18] )
      continue;
    // closed e.3#0 as range 7
    //DEBUG: t.2#0: 15
    //DEBUG: e.4#0: 11
    //DEBUG: t.1#0: 17
    //DEBUG: e.3#0: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoOverlapOffsets/4 AsIs: (/9 } Tile{ AsIs: e.3#0/7 } )/19 (/20 Tile{ AsIs: t.1#0/17 AsIs: )/10 AsIs: (/13 AsIs: t.2#0/15 } )/21 (/22 Tile{ AsIs: e.4#0/11 } Tile{ AsIs: )/14 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::update_name(context[4], functions[efunc_DoOverlapOffsets]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[22], context[14] );
    refalrts::link_brackets( context[13], context[21] );
    refalrts::link_brackets( context[20], context[10] );
    refalrts::link_brackets( context[9], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[17], context[16] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Fetch@1/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & TileCandidates\1*1/4 AsIs: e.Argument#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_TileCandidates_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@1/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: & TileCandidates\1@0/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[1], functions[efunc_gen_TileCandidates_L1Z0]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z1("Fetch@1", COOKIE1_, COOKIE2_, func_gen_Fetch_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@2/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@2/4 (/7 s.CurIndexP#3/13 s.CurIndexR#3/14 s.ItemWeight#3/15 s.Ident#3/16 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.CurIndexP#3: 13
      //DEBUG: s.CurIndexR#3: 14
      //DEBUG: s.ItemWeight#3: 15
      //DEBUG: s.Ident#3: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 s.CurIndexP#3/13 s.CurIndexR#3/14 s.ItemWeight#3/15 s.Ident#3/16 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: s.Ident3 #16/0 HalfReuse: </4 } Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_svar( context[0], context[16] );
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FilterOverlapped$1\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_FilterOverlapped_S1L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@2/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & FilterOverlapped$1\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FilterOverlapped_S1L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_DoMapAccum_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & DoMapAccum@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@2/4 t.new#1/5 (/9 e.new#2/7 )/10 e.new#3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.new#2 as range 7
  // closed e.new#3 as range 2
  do {
    // </0 & DoMapAccum@2/4 t.new#4/5 (/9 e.new#7/11 )/10 t.new#5/15 e.new#6/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new#7 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & DoMapAccum@2/4 (/5 s.MaxWeight#2/25 s.IndexP#2/26 s.IndexR#2/27 e.3#0/21 )/6 (/9 e.Scanned#1/17 )/10 (/15 s.Weight#2/28 s.CurIndexP#2/29 s.CurIndexR#2/30 e.6#0/23 )/16 e.Tail#1/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[5] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      if( ! refalrts::brackets_term( context[23], context[24], context[15] ) )
        continue;
      // closed e.Scanned#1 as range 17
      // closed e.Tail#1 as range 19
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      // closed e.3#0 as range 21
      if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
        continue;
      if( ! refalrts::svar_left( context[29], context[23], context[24] ) )
        continue;
      if( ! refalrts::svar_left( context[30], context[23], context[24] ) )
        continue;
      // closed e.6#0 as range 23
      //DEBUG: e.Scanned#1: 17
      //DEBUG: e.Tail#1: 19
      //DEBUG: s.MaxWeight#2: 25
      //DEBUG: s.IndexP#2: 26
      //DEBUG: s.IndexR#2: 27
      //DEBUG: e.3#0: 21
      //DEBUG: s.Weight#2: 28
      //DEBUG: s.CurIndexP#2: 29
      //DEBUG: s.CurIndexR#2: 30
      //DEBUG: e.6#0: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum$1=1@2/6 AsIs: (/9 AsIs: e.Scanned#1/17 AsIs: )/10 AsIs: (/15 } Tile{ AsIs: e.Tail#1/19 } )/31 </32 Tile{ Reuse: & FindHeavyTile\1:1/4 } Tile{ AsIs: s.Weight#2/28 AsIs: s.CurIndexP#2/29 AsIs: s.CurIndexR#2/30 } (/33 Tile{ AsIs: e.6#0/23 } Tile{ HalfReuse: )/5 AsIs: s.MaxWeight#2/25 AsIs: s.IndexP#2/26 AsIs: s.IndexR#2/27 } (/34 Tile{ AsIs: e.3#0/21 } Tile{ AsIs: )/16 } </35 & TermCompare/36 s.MaxWeight#2/25/37 s.Weight#2/28/38 >/39 >/40 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_TermCompare]);
      refalrts::copy_stvar(vm, context[37], context[25]);
      refalrts::copy_stvar(vm, context[38], context[28]);
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::reinit_name(context[6], functions[efunc_gen_DoMapAccum_S1A1Z2]);
      refalrts::update_name(context[4], functions[efunc_gen_FindHeavyTile_L1B1]);
      refalrts::reinit_close_bracket(context[5]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[35] );
      refalrts::link_brackets( context[34], context[16] );
      refalrts::link_brackets( context[33], context[5] );
      refalrts::link_brackets( context[15], context[31] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[35], context[40] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[5], context[27] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[28], context[30] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[6], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/17 )/10 t.Next#1/15 e.Tail#1/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Scanned#1 as range 17
    // closed e.Tail#1 as range 19
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.Tail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1@2/4 } Tile{ AsIs: (/9 AsIs: e.Scanned#1/17 AsIs: )/10 } (/21 Tile{ AsIs: e.Tail#1/19 } )/22 </23 & FindHeavyTile\1*1/24 Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: t.Next#1/15 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_FindHeavyTile_L1D1]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoMapAccum@2/4 t.Acc#1/5 (/9 e.Scanned#1/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Scanned#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: e.Scanned#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoMapAccum@2/4 {REMOVED TILE} (/9 {REMOVED TILE} )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ AsIs: e.Scanned#1/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@2/4 t.acc#0/5 (/9 e.scanned#0/7 )/10 e.items#0/2 >/1
  // closed e.scanned#0 as range 7
  // closed e.items#0 as range 2
  //DEBUG: t.acc#0: 5
  //DEBUG: e.scanned#0: 7
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & DoMapAccum@0/0 Reuse: & FindHeavyTile\1@0/4 AsIs: t.acc#0/5 AsIs: (/9 AsIs: e.scanned#0/7 AsIs: )/10 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindHeavyTile_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z2("DoMapAccum@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z2);


static refalrts::FnResult func_gen_Reduce_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Reduce@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@1/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Reduce@1/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Reduce@1/4 (/5 e.#0/13 )/6 (/9 s.CurIndexP#2/17 s.CurIndexR#2/18 s.ItemWeight#2/19 s.Ident#2/20 )/10 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      if( ! refalrts::brackets_term( context[15], context[16], context[9] ) )
        continue;
      // closed e.#0 as range 13
      // closed e.Tail#1 as range 11
      if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      //DEBUG: e.#0: 13
      //DEBUG: e.Tail#1: 11
      //DEBUG: s.CurIndexP#2: 17
      //DEBUG: s.CurIndexR#2: 18
      //DEBUG: s.ItemWeight#2: 19
      //DEBUG: s.Ident#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ItemWeight#2/19 s.Ident#2/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@1/4 AsIs: (/5 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: )/10 } </21 & Fetch@4/22 Tile{ HalfReuse: </6 HalfReuse: & Map@3/9 AsIs: s.CurIndexP#2/17 } Tile{ AsIs: e.#0/13 } >/23 Tile{ AsIs: s.CurIndexR#2/18 } >/24 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_gen_Fetch_Z4]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z1]);
      refalrts::reinit_open_call(context[6]);
      refalrts::reinit_name(context[9], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[6] );
      refalrts::link_brackets( context[5], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[6], context[17] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@1/4 t.Acc#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce$1=1@1/14 (/15 Tile{ AsIs: e.Tail#1/11 } )/16 Tile{ AsIs: </0 Reuse: & RejectTile\1*1/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1Z1]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_RejectTile_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Reduce@1/4 t.Acc#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.Acc#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@1/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce@0/0 Reuse: & RejectTile\1@0/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_RejectTile_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z1("Reduce@1", COOKIE1_, COOKIE2_, func_gen_Reduce_Z1);


static refalrts::FnResult func_gen_Reduce_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Reduce@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@2/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Reduce@2/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Reduce@2/4 s.Weight#2/5 (/9 s.IndexP#2/15 s.IndexR#2/16 s.ItemWeight#2/17 s.Ident#2/18 )/10 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.Tail#1 as range 11
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
        continue;
      if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
        continue;
      if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      //DEBUG: s.Weight#2: 5
      //DEBUG: e.Tail#1: 11
      //DEBUG: s.IndexP#2: 15
      //DEBUG: s.IndexR#2: 16
      //DEBUG: s.ItemWeight#2: 17
      //DEBUG: s.Ident#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.IndexP#2/15 s.IndexR#2/16 s.ItemWeight#2/17 s.Ident#2/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </19 & Reduce$1=1@2/20 (/21 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: )/10 } Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Weight#2/5 HalfReuse: s.ItemWeight2 #17/9 } >/22 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_Reduce_S1A1Z2]);
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::reinit_svar( context[9], context[17] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[21], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[21] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@2/4 t.Acc#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Acc#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce$1=1@2/14 (/15 Tile{ AsIs: e.Tail#1/11 } )/16 Tile{ AsIs: </0 Reuse: & FoldTileW\1*1/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1Z2]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_FoldTileW_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Reduce@2/4 t.Acc#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.Acc#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@2/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@2/4 t.accum#0/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce@0/0 Reuse: & FoldTileW\1@0/4 AsIs: t.accum#0/5 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FoldTileW_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z2("Reduce@2", COOKIE1_, COOKIE2_, func_gen_Reduce_Z2);


static refalrts::FnResult func_gen_DoModify_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  // </0 & DoModify@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoModify@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & DoModify@1/4 (/7 s.new#8/37 e.new#9/13 )/8 (/11 (/21 # Num/23 s.new#10/38 (/31 e.new#11/29 s.new#12/41 )/32 )/22 e.new#13/15 )/12 (/26 # Num/28 s.new#4/39 (/35 s.new#5/40 e.new#6/33 )/36 )/27 e.new#7/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left( identifiers[ident_Num], context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[17], context[18] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = refalrts::ident_left( identifiers[ident_Num], context[24], context[25] );
    if( ! context[28] )
      continue;
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_right( context[29], context[30], context[19], context[20] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    context[33] = 0;
    context[34] = 0;
    context[35] = refalrts::brackets_right( context[33], context[34], context[24], context[25] );
    if( ! context[35] )
      continue;
    refalrts::bracket_pointers(context[35], context[36]);
    // closed e.new#13 as range 15
    // closed e.new#7 as range 17
    if( ! refalrts::svar_left( context[37], context[13], context[14] ) )
      continue;
    // closed e.new#9 as range 13
    if( ! refalrts::svar_left( context[38], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[39], context[24], context[25] ) )
      continue;
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;
    if( ! refalrts::svar_left( context[40], context[33], context[34] ) )
      continue;
    // closed e.new#6 as range 33
    if( ! refalrts::svar_right( context[41], context[29], context[30] ) )
      continue;
    // closed e.new#11 as range 29
    do {
      // </0 & DoModify@1/4 (/7 # AsIsE/37 e.Idents#1/42 )/8 (/11 (/21 # Num/23 s.NumP#1/38 (/31 s.TypeFromPat#1/52 e.InfoFromPat#1/44 s.Offset#1/41 )/32 )/22 e.PatSecond#1/46 )/12 (/26 # Num/28 s.NumR#1/39 (/35 s.TypeFromRes#1/40 e.InfoFromRes#1/48 )/36 )/27 e.ResSecond#1/50 >/1
      context[42] = context[13];
      context[43] = context[14];
      context[44] = context[29];
      context[45] = context[30];
      context[46] = context[15];
      context[47] = context[16];
      context[48] = context[33];
      context[49] = context[34];
      context[50] = context[17];
      context[51] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_AsIsE], context[37] ) )
        continue;
      // closed e.Idents#1 as range 42
      // closed e.PatSecond#1 as range 46
      // closed e.InfoFromRes#1 as range 48
      // closed e.ResSecond#1 as range 50
      if( ! refalrts::svar_left( context[52], context[44], context[45] ) )
        continue;
      // closed e.InfoFromPat#1 as range 44
      //DEBUG: s.NumP#1: 38
      //DEBUG: s.Offset#1: 41
      //DEBUG: s.NumR#1: 39
      //DEBUG: s.TypeFromRes#1: 40
      //DEBUG: e.Idents#1: 42
      //DEBUG: e.PatSecond#1: 46
      //DEBUG: e.InfoFromRes#1: 48
      //DEBUG: e.ResSecond#1: 50
      //DEBUG: s.TypeFromPat#1: 52
      //DEBUG: e.InfoFromPat#1: 44

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.NumP#1/38 {REMOVED TILE} s.TypeFromPat#1/52 e.InfoFromPat#1/44 s.Offset#1/41 {REMOVED TILE} {REMOVED TILE} s.NumR#1/39 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/37 AsIs: e.Idents#1/42 AsIs: )/8 AsIs: (/11 HalfReuse: # Tile/21 HalfReuse: (/23 } Tile{ Reuse: # AsIs/28 } Tile{ AsIs: (/35 AsIs: s.TypeFromRes#1/40 AsIs: e.InfoFromRes#1/48 HalfReuse: s.Offset1 #41/36 AsIs: )/27 } Tile{ HalfReuse: )/31 } Tile{ AsIs: )/32 HalfReuse: (/22 AsIs: e.PatSecond#1/46 AsIs: )/12 AsIs: (/26 } Tile{ AsIs: e.ResSecond#1/50 } Tile{ HalfReuse: )/0 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_DoModify]);
      refalrts::reinit_open_bracket(context[37]);
      refalrts::reinit_ident(context[21], identifiers[ident_Tile]);
      refalrts::reinit_open_bracket(context[23]);
      refalrts::update_ident(context[28], identifiers[ident_AsIs]);
      refalrts::reinit_svar( context[36], context[41] );
      refalrts::reinit_close_bracket(context[31]);
      refalrts::reinit_open_bracket(context[22]);
      refalrts::reinit_close_bracket(context[0]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[26], context[0] );
      refalrts::link_brackets( context[22], context[12] );
      refalrts::link_brackets( context[11], context[32] );
      refalrts::link_brackets( context[23], context[31] );
      refalrts::link_brackets( context[35], context[27] );
      refalrts::link_brackets( context[37], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_evar( res, context[50], context[51] );
      res = refalrts::splice_evar( res, context[32], context[26] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[35], context[27] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[4], context[23] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & DoModify@1/4 (/7 # AsIs/37 e.new#17/42 )/8 (/11 (/21 # Num/23 s.new#19/38 (/31 s.new#20/41 )/32 )/22 e.new#18/44 )/12 (/26 # Num/28 s.new#15/39 (/35 s.new#16/40 )/36 )/27 e.new#14/46 >/1
      context[42] = context[13];
      context[43] = context[14];
      context[44] = context[15];
      context[45] = context[16];
      context[46] = context[17];
      context[47] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_AsIs], context[37] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[33], context[34] ) )
        continue;
      // closed e.new#17 as range 42
      // closed e.new#18 as range 44
      // closed e.new#14 as range 46
      do {
        // </0 & DoModify@1/4 (/7 # AsIs/37 e.Idents#1/48 )/8 (/11 (/21 # Num/23 s.NumP#1/38 (/31 # LEFT-EDGE/41 )/32 )/22 e.PatSecond#1/50 )/12 (/26 # Num/28 s.NumR#1/39 (/35 # LEFT-EDGE/40 )/36 )/27 e.ResSecond#1/52 >/1
        context[48] = context[42];
        context[49] = context[43];
        context[50] = context[44];
        context[51] = context[45];
        context[52] = context[46];
        context[53] = context[47];
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[41] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[40] ) )
          continue;
        // closed e.Idents#1 as range 48
        // closed e.PatSecond#1 as range 50
        // closed e.ResSecond#1 as range 52
        //DEBUG: s.NumP#1: 38
        //DEBUG: s.NumR#1: 39
        //DEBUG: e.Idents#1: 48
        //DEBUG: e.PatSecond#1: 50
        //DEBUG: e.ResSecond#1: 52

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.NumP#1/38 {REMOVED TILE} # Num/28 s.NumR#1/39 (/35 # LEFT-EDGE/40 )/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/37 AsIs: e.Idents#1/48 AsIs: )/8 AsIs: (/11 HalfReuse: # Tile/21 HalfReuse: (/23 } Tile{ HalfReuse: # LEFT-EDGE/31 HalfReuse: )/41 AsIs: )/32 HalfReuse: (/22 AsIs: e.PatSecond#1/50 AsIs: )/12 AsIs: (/26 } Tile{ AsIs: e.ResSecond#1/52 } Tile{ AsIs: )/27 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_DoModify]);
        refalrts::reinit_open_bracket(context[37]);
        refalrts::reinit_ident(context[21], identifiers[ident_Tile]);
        refalrts::reinit_open_bracket(context[23]);
        refalrts::reinit_ident(context[31], identifiers[ident_LEFTm_EDGE]);
        refalrts::reinit_close_bracket(context[41]);
        refalrts::reinit_open_bracket(context[22]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::link_brackets( context[22], context[12] );
        refalrts::link_brackets( context[11], context[32] );
        refalrts::link_brackets( context[23], context[41] );
        refalrts::link_brackets( context[37], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_evar( res, context[52], context[53] );
        res = refalrts::splice_evar( res, context[31], context[26] );
        res = refalrts::splice_evar( res, context[4], context[23] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoModify@1/4 (/7 # AsIs/37 e.Idents#1/48 )/8 (/11 (/21 # Num/23 s.NumP#1/38 (/31 # RIGHT-EDGE/41 )/32 )/22 )/12 (/26 # Num/28 s.NumR#1/39 (/35 # RIGHT-EDGE/40 )/36 )/27 >/1
      context[48] = context[42];
      context[49] = context[43];
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[41] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[44], context[45] ) )
        continue;
      if( ! refalrts::empty_seq( context[46], context[47] ) )
        continue;
      // closed e.Idents#1 as range 48
      //DEBUG: s.NumP#1: 38
      //DEBUG: s.NumR#1: 39
      //DEBUG: e.Idents#1: 48

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # Num/23 s.NumP#1/38 {REMOVED TILE} s.NumR#1/39 (/35 # RIGHT-EDGE/40 )/36 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & DoModify/7 HalfReuse: (/37 AsIs: e.Idents#1/48 AsIs: )/8 AsIs: (/11 HalfReuse: # Tile/21 } Tile{ AsIs: (/31 AsIs: # RIGHT-EDGE/41 AsIs: )/32 AsIs: )/22 HalfReuse: (/12 HalfReuse: )/26 HalfReuse: (/28 } Tile{ AsIs: )/27 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_DoModify]);
      refalrts::reinit_open_bracket(context[37]);
      refalrts::reinit_ident(context[21], identifiers[ident_Tile]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_close_bracket(context[26]);
      refalrts::reinit_open_bracket(context[28]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[28], context[27] );
      refalrts::link_brackets( context[12], context[26] );
      refalrts::link_brackets( context[11], context[22] );
      refalrts::link_brackets( context[31], context[32] );
      refalrts::link_brackets( context[37], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[27];
      res = refalrts::splice_evar( res, context[31], context[28] );
      res = refalrts::splice_evar( res, context[4], context[21] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoModify@1/4 (/7 s.Ident#1/37 e.Idents#1/42 )/8 (/11 (/21 # Num/23 s.NumP#1/38 (/31 s.TypeFromPat#1/52 e.InfoFromPat#1/44 s.Offset#1/41 )/32 )/22 e.PatSecond#1/46 )/12 (/26 # Num/28 s.NumR#1/39 (/35 s.TypeFromRes#1/40 e.InfoFromRes#1/48 )/36 )/27 e.ResSecond#1/50 >/1
    context[42] = context[13];
    context[43] = context[14];
    context[44] = context[29];
    context[45] = context[30];
    context[46] = context[15];
    context[47] = context[16];
    context[48] = context[33];
    context[49] = context[34];
    context[50] = context[17];
    context[51] = context[18];
    // closed e.Idents#1 as range 42
    // closed e.PatSecond#1 as range 46
    // closed e.InfoFromRes#1 as range 48
    // closed e.ResSecond#1 as range 50
    if( ! refalrts::svar_left( context[52], context[44], context[45] ) )
      continue;
    // closed e.InfoFromPat#1 as range 44
    //DEBUG: s.Ident#1: 37
    //DEBUG: s.NumP#1: 38
    //DEBUG: s.Offset#1: 41
    //DEBUG: s.NumR#1: 39
    //DEBUG: s.TypeFromRes#1: 40
    //DEBUG: e.Idents#1: 42
    //DEBUG: e.PatSecond#1: 46
    //DEBUG: e.InfoFromRes#1: 48
    //DEBUG: e.ResSecond#1: 50
    //DEBUG: s.TypeFromPat#1: 52
    //DEBUG: e.InfoFromPat#1: 44

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.NumP#1/38 {REMOVED TILE} s.TypeFromPat#1/52 e.InfoFromPat#1/44 s.Offset#1/41 {REMOVED TILE} {REMOVED TILE} s.NumR#1/39 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoModify/4 AsIs: (/7 } Tile{ AsIs: e.Idents#1/42 } Tile{ AsIs: )/8 AsIs: (/11 HalfReuse: # Tile/21 HalfReuse: (/23 } Tile{ AsIs: s.Ident#1/37 } Tile{ AsIs: (/35 AsIs: s.TypeFromRes#1/40 AsIs: e.InfoFromRes#1/48 HalfReuse: s.Offset1 #41/36 AsIs: )/27 } Tile{ HalfReuse: )/28 } Tile{ AsIs: )/32 HalfReuse: (/22 AsIs: e.PatSecond#1/46 AsIs: )/12 AsIs: (/26 } Tile{ AsIs: e.ResSecond#1/50 } Tile{ HalfReuse: )/31 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_DoModify]);
    refalrts::reinit_ident(context[21], identifiers[ident_Tile]);
    refalrts::reinit_open_bracket(context[23]);
    refalrts::reinit_svar( context[36], context[41] );
    refalrts::reinit_close_bracket(context[28]);
    refalrts::reinit_open_bracket(context[22]);
    refalrts::reinit_close_bracket(context[31]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[26], context[31] );
    refalrts::link_brackets( context[22], context[12] );
    refalrts::link_brackets( context[11], context[32] );
    refalrts::link_brackets( context[23], context[28] );
    refalrts::link_brackets( context[35], context[27] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_evar( res, context[32], context[26] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_evar( res, context[35], context[27] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[8], context[23] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoModify@1/4 (/7 )/8 (/11 e.PatSecond#1/13 )/12 e.ResSecond#1/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.PatSecond#1 as range 13
    // closed e.ResSecond#1 as range 15
    //DEBUG: e.PatSecond#1: 13
    //DEBUG: e.ResSecond#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # RemovedTile/4 } Tile{ AsIs: e.PatSecond#1/13 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: (/7 } # Tile/17 Tile{ AsIs: )/12 AsIs: e.ResSecond#1/15 HalfReuse: )/1 ]] }
    refalrts::alloc_ident(vm, context[17], identifiers[ident_Tile]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_RemovedTile]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_elem( res, context[7] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoModify@1/4 (/7 e.dyn#0/5 )/8 (/11 e.dyn#2/9 )/12 e.dyn#3/2 >/1
  // closed e.dyn#0 as range 5
  // closed e.dyn#2 as range 9
  // closed e.dyn#3 as range 2
  //DEBUG: e.dyn#0: 5
  //DEBUG: e.dyn#2: 9
  //DEBUG: e.dyn#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoModify@0/4 AsIs: (/7 AsIs: e.dyn#0/5 AsIs: )/8 AsIs: (/11 } # Tile/13 )/14 (/15 Tile{ AsIs: e.dyn#2/9 } Tile{ AsIs: )/12 } (/16 Tile{ AsIs: e.dyn#3/2 } )/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[13], identifiers[ident_Tile]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_DoModify_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[15], context[12] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoModify_Z1("DoModify@1", COOKIE1_, COOKIE2_, func_gen_DoModify_Z1);


static refalrts::FnResult func_gen_Fetch_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & Fetch@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Fetch@2/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & Fetch@2/4 (/7 (/21 # RemovedTile/23 e.3#0/19 )/22 (/26 (/30 # Tile/32 e.6#0/28 )/31 e.4#0/24 )/27 )/8 (/11 e.PatFirst#1/15 )/12 e.ResFirst#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[13], context[14] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left( identifiers[ident_RemovedTile], context[19], context[20] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[13], context[14] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left( identifiers[ident_Tile], context[28], context[29] );
    if( ! context[32] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.3#0 as range 19
    // closed e.6#0 as range 28
    // closed e.4#0 as range 24
    // closed e.PatFirst#1 as range 15
    // closed e.ResFirst#1 as range 17
    //DEBUG: e.3#0: 19
    //DEBUG: e.6#0: 28
    //DEBUG: e.4#0: 24
    //DEBUG: e.PatFirst#1: 15
    //DEBUG: e.ResFirst#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Fetch@2/4 (/7 (/21 {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.PatFirst#1/15 } Tile{ AsIs: # RemovedTile/23 AsIs: e.3#0/19 AsIs: )/22 AsIs: (/26 } Tile{ AsIs: e.ResFirst#1/17 } Tile{ AsIs: (/30 AsIs: # Tile/32 AsIs: e.6#0/28 AsIs: )/31 AsIs: e.4#0/24 AsIs: )/27 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::link_brackets( context[0], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[30], context[27] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[23], context[26] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Fetch@2/4 (/7 e.Argument#1/13 )/8 (/11 e.PatFirst#1/15 )/12 e.ResFirst#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Argument#1 as range 13
    // closed e.PatFirst#1 as range 15
    // closed e.ResFirst#1 as range 17
    //DEBUG: e.Argument#1: 13
    //DEBUG: e.PatFirst#1: 15
    //DEBUG: e.ResFirst#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Modify\1*1/4 AsIs: (/7 } Tile{ AsIs: e.PatFirst#1/15 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.ResFirst#1/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Argument#1/13 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Modify_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@2/4 (/7 e.arg#0/5 )/8 (/11 e.PatFirst#1/9 )/12 e.ResFirst#1/2 >/1
  // closed e.arg#0 as range 5
  // closed e.PatFirst#1 as range 9
  // closed e.ResFirst#1 as range 2
  //DEBUG: e.arg#0: 5
  //DEBUG: e.PatFirst#1: 9
  //DEBUG: e.ResFirst#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 } Tile{ AsIs: e.arg#0/5 } [*]/13 Tile{ HalfReuse: & Modify\1@0/8 AsIs: (/11 AsIs: e.PatFirst#1/9 AsIs: )/12 } Tile{ AsIs: (/7 } Tile{ AsIs: e.ResFirst#1/2 } )/14 {*}/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_unwrapped_closure(vm, context[15], context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[8], functions[efunc_gen_Modify_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z2("Fetch@2", COOKIE1_, COOKIE2_, func_gen_Fetch_Z2);


static refalrts::FnResult func_gen_Apply_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@3/4 t.new#1/5 e.new#2/2 t.new#3/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply@3/4 s.Fn#1/5 e.X#0/9 t.X#0/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X#0 as range 9
    //DEBUG: t.X#0: 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.X#0: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.X#0/9 AsIs: t.X#0/7 HalfReuse: & $table/1 } >/11 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@3/4 (/5 t.Closure#1/13 e.Bounded#1/11 )/6 e.X#0/9 t.X#0/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    // closed e.X#0 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded#1 as range 11
    //DEBUG: t.X#0: 7
    //DEBUG: e.X#0: 9
    //DEBUG: t.Closure#1: 13
    //DEBUG: e.Bounded#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@3/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: e.X#0/9 } Tile{ AsIs: t.X#0/7 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@3/4 t.dyn#0/5 e.X#0/2 t.X#0/7 >/1
  // closed e.X#0 as range 2
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.X#0: 7
  //DEBUG: e.X#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: e.X#0/2 AsIs: t.X#0/7 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z3("Apply@3", COOKIE1_, COOKIE2_, func_gen_Apply_Z3);


static refalrts::FnResult func_gen_Apply_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Apply@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@4/4 t.new#1/5 e.new#2/2 t.new#3/9 t.new#4/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply@4/4 s.Fn#1/5 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X#0 as range 11
    //DEBUG: t.X#0: 9
    //DEBUG: t.X0#0: 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.X#0: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.X#0/11 AsIs: t.X#0/9 AsIs: t.X0#0/7 HalfReuse: & $table/1 } >/13 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@4/4 (/5 t.Closure#1/15 e.Bounded#1/13 )/6 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
      continue;
    // closed e.X#0 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Bounded#1 as range 13
    //DEBUG: t.X#0: 9
    //DEBUG: t.X0#0: 7
    //DEBUG: e.X#0: 11
    //DEBUG: t.Closure#1: 15
    //DEBUG: e.Bounded#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@4/4 } Tile{ AsIs: t.Closure#1/15 } Tile{ AsIs: e.Bounded#1/13 } Tile{ AsIs: e.X#0/11 } Tile{ AsIs: t.X#0/9 AsIs: t.X0#0/7 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@4/4 t.dyn#0/5 e.X#0/2 t.X#0/9 t.X0#0/7 >/1
  // closed e.X#0 as range 2
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.X#0: 9
  //DEBUG: t.X0#0: 7
  //DEBUG: e.X#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: e.X#0/2 AsIs: t.X#0/9 AsIs: t.X0#0/7 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z4("Apply@4", COOKIE1_, COOKIE2_, func_gen_Apply_Z4);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & DoMapAccum$1=1@1/4 (/7 e.Scanned0#1/13 )/8 (/11 e.Tail0#1/15 )/12 t.Acc#2/19 e.StepScanned#2/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Scanned0#1 as range 13
    // closed e.Tail0#1 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#2 as range 17
    //DEBUG: e.Scanned0#1: 13
    //DEBUG: e.Tail0#1: 15
    //DEBUG: t.Acc#2: 19
    //DEBUG: e.StepScanned#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 } Tile{ AsIs: t.Acc#2/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0#1/13 } Tile{ AsIs: e.StepScanned#2/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@1/4 (/7 e.Scanned0#1/5 )/8 (/11 e.Tail0#1/9 )/12 e.dyn#0/2 >/1
  // closed e.Scanned0#1 as range 5
  // closed e.Tail0#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.Scanned0#1: 5
  //DEBUG: e.Tail0#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & Enum\1@0/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_Enum_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z1("DoMapAccum$1=1@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z1);


static refalrts::FnResult func_gen_Fetch_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Fetch@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Fetch@3/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & Fetch@3/4 (/7 e.Argument#1/13 )/8 (/11 e.Pattern#1/15 )/12 e.Result#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Argument#1 as range 13
    // closed e.Pattern#1 as range 15
    // closed e.Result#1 as range 17
    //DEBUG: e.Argument#1: 13
    //DEBUG: e.Pattern#1: 15
    //DEBUG: e.Result#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@5/4 AsIs: (/7 } </19 & FilterOverlapped/20 Tile{ AsIs: e.Argument#1/13 } >/21 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Pattern#1/15 AsIs: )/12 AsIs: e.Result#1/17 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_FilterOverlapped]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z5]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@3/4 (/7 e.arg#0/5 )/8 (/11 e.Pattern#1/9 )/12 e.Result#1/2 >/1
  // closed e.arg#0 as range 5
  // closed e.Pattern#1 as range 9
  // closed e.Result#1 as range 2
  //DEBUG: e.arg#0: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 } Tile{ AsIs: e.arg#0/5 } [*]/13 & Pipe$2\1@0/14 & FilterOverlapped@0/15 Tile{ AsIs: (/7 } [*]/16 Tile{ HalfReuse: & GST\1@0/8 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 } (/17 Tile{ AsIs: e.Result#1/2 } )/18 {*}/19 (/20 & Reduce@0/21 & GST\2@0/22 )/23 & GST\3@0/24 )/25 {*}/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_FilterOverlapped_Z0]);
  refalrts::alloc_closure_head(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_unwrapped_closure(vm, context[19], context[16]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_Reduce_Z0]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_GST_L2Z0]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_gen_GST_L3Z0]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_unwrapped_closure(vm, context[26], context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[8], functions[efunc_gen_GST_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[25] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[19] );
  refalrts::wrap_closure( context[26] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z3("Fetch@3", COOKIE1_, COOKIE2_, func_gen_Fetch_Z3);


static refalrts::FnResult func_gen_DoMapAccum_S1A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoMapAccum$1=1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum$1=1@2/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & DoMapAccum$1=1@2/4 (/7 e.Scanned0#1/13 )/8 (/11 e.Tail0#1/15 )/12 t.Acc#2/19 e.StepScanned#2/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Scanned0#1 as range 13
    // closed e.Tail0#1 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.StepScanned#2 as range 17
    //DEBUG: e.Scanned0#1: 13
    //DEBUG: e.Tail0#1: 15
    //DEBUG: t.Acc#2: 19
    //DEBUG: e.StepScanned#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@2/4 } Tile{ AsIs: t.Acc#2/19 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned0#1/13 } Tile{ AsIs: e.StepScanned#2/17 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tail0#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum$1=1@2/4 (/7 e.Scanned0#1/5 )/8 (/11 e.Tail0#1/9 )/12 e.dyn#0/2 >/1
  // closed e.Scanned0#1 as range 5
  // closed e.Tail0#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.Scanned0#1: 5
  //DEBUG: e.Tail0#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & DoMapAccum$1=1@0/0 Reuse: & FindHeavyTile\1@0/4 AsIs: (/7 AsIs: e.Scanned0#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_DoMapAccum_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FindHeavyTile_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1Z2("DoMapAccum$1=1@2", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1Z2);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@3/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@3/4 s.new#3/5 t.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & Map@3/4 s.new#6/5 (/8 s.new#7/14 s.new#8/15 s.new#9/16 e.new#10/12 )/9 e.new#11/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.new#11 as range 10
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
        continue;
      // closed e.new#10 as range 12
      do {
        // </0 & Map@3/4 s.CurIndexP#2/5 (/8 s.Weight#1/14 s.CurIndexP#2/15 s.CurIndexR#1/16 (/23 s.CurIndexP#2/25 s.CurIndexR#1/26 s.ItemWeight#1/27 s.Ident#1/28 )/24 e.3#0/17 )/9 e.Tail#1/19 >/1
        context[17] = context[12];
        context[18] = context[13];
        context[19] = context[10];
        context[20] = context[11];
        if( ! refalrts::repeated_stvar_term( vm, context[15], context[5] ) )
          continue;
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[17], context[18] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        if( ! refalrts::repeated_stvar_left( vm, context[25], context[15], context[21], context[22] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( vm, context[26], context[16], context[21], context[22] ) )
          continue;
        // closed e.3#0 as range 17
        // closed e.Tail#1 as range 19
        if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
          continue;
        if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        //DEBUG: s.CurIndexP#2: 5
        //DEBUG: s.Weight#1: 14
        //DEBUG: s.CurIndexR#1: 16
        //DEBUG: e.3#0: 17
        //DEBUG: e.Tail#1: 19
        //DEBUG: s.ItemWeight#1: 27
        //DEBUG: s.Ident#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.CurIndexP#2/5 {REMOVED TILE} s.CurIndexP#2/15 s.CurIndexR#1/16 {REMOVED TILE} s.CurIndexP#2/25 s.CurIndexR#1/26 {REMOVED TILE} s.Ident#1/28 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } </29 Tile{ HalfReuse: & Sub/8 AsIs: s.Weight#1/14 } Tile{ AsIs: s.ItemWeight#1/27 } Tile{ HalfReuse: >/23 } Tile{ AsIs: e.3#0/17 } Tile{ HalfReuse: >/24 } </30 & Map@3/31 Tile{ HalfReuse: s.CurIndexP2 #25/9 AsIs: e.Tail#1/19 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_gen_Map_Z3]);
        refalrts::update_name(context[4], functions[efunc_FoldTile]);
        refalrts::reinit_name(context[8], functions[efunc_Sub]);
        refalrts::reinit_close_call(context[23]);
        refalrts::reinit_close_call(context[24]);
        refalrts::reinit_svar( context[9], context[25] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[29] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        res = refalrts::splice_elem( res, context[29] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 s.CurIndexP#2/5 (/8 s.Weight#1/14 s.IndexP#1/15 s.IndexR#1/16 e.3#0/17 (/23 s.CurIndexP#2/25 s.CurIndexR#1/26 s.ItemWeight#1/27 s.Ident#1/28 )/24 )/9 e.Tail#1/19 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[10];
      context[20] = context[11];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[17], context[18] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      if( ! refalrts::repeated_stvar_left( vm, context[25], context[5], context[21], context[22] ) )
        continue;
      // closed e.3#0 as range 17
      // closed e.Tail#1 as range 19
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      //DEBUG: s.CurIndexP#2: 5
      //DEBUG: s.Weight#1: 14
      //DEBUG: s.IndexP#1: 15
      //DEBUG: s.IndexR#1: 16
      //DEBUG: e.3#0: 17
      //DEBUG: e.Tail#1: 19
      //DEBUG: s.CurIndexR#1: 26
      //DEBUG: s.ItemWeight#1: 27
      //DEBUG: s.Ident#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.CurIndexP#2/5 {REMOVED TILE} s.IndexP#1/15 s.IndexR#1/16 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#2/25 s.CurIndexR#1/26 {REMOVED TILE} s.Ident#1/28 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </23 } Tile{ HalfReuse: & Sub/8 AsIs: s.Weight#1/14 } Tile{ AsIs: s.ItemWeight#1/27 } >/29 Tile{ AsIs: e.3#0/17 } >/30 </31 Tile{ HalfReuse: & Map@3/24 HalfReuse: s.CurIndexP2 #25/9 AsIs: e.Tail#1/19 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::update_name(context[4], functions[efunc_FoldTile]);
      refalrts::reinit_open_call(context[23]);
      refalrts::reinit_name(context[8], functions[efunc_Sub]);
      refalrts::reinit_name(context[24], functions[efunc_gen_Map_Z3]);
      refalrts::reinit_svar( context[9], context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 s.CurIndexP#2/5 t.Next#1/8 e.Tail#1/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail#1 as range 10
    //DEBUG: t.Next#1: 8
    //DEBUG: s.CurIndexP#2: 5
    //DEBUG: e.Tail#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FilterPatternPos*2/4 AsIs: s.CurIndexP#2/5 AsIs: t.Next#1/8 } >/12 </13 & Map@3/14 s.CurIndexP#2/5/15 Tile{ AsIs: e.Tail#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z3]);
    refalrts::copy_stvar(vm, context[15], context[5]);
    refalrts::update_name(context[4], functions[efunc_gen_FilterPatternPos_D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 s.CurIndexP#2/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.CurIndexP#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 s.CurIndexP#2/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 s.CurIndexP#2/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.CurIndexP#2: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/6 & FilterPatternPos@0/7 Tile{ AsIs: s.CurIndexP#2/5 } )/8 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_FilterPatternPos_Z0]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[6], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_Fetch_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Fetch@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Fetch@4/4 e.new#1/2 s.new#2/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & Fetch@4/4 e.Argument#1/6 s.CurIndexR#2/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    // closed e.Argument#1 as range 6
    //DEBUG: s.CurIndexR#2: 5
    //DEBUG: e.Argument#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@6/4 } </8 & Map@4/9 Tile{ AsIs: s.CurIndexR#2/5 } Tile{ AsIs: e.Argument#1/6 } >/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_gen_Map_Z4]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@4/4 e.arg#0/2 s.CurIndexR#2/5 >/1
  // closed e.arg#0 as range 2
  //DEBUG: s.CurIndexR#2: 5
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 } Tile{ AsIs: e.arg#0/2 } [*]/6 & Pipe$2\1@0/7 (/8 & Map@0/9 (/10 & FilterResultPos@0/11 Tile{ AsIs: s.CurIndexR#2/5 } )/12 )/13 (/14 & RejectTile\1\1@0/15 )/16 {*}/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_FilterResultPos_Z0]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_RejectTile_L1L1Z0]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[6]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[16] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::link_brackets( context[10], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[17] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z4("Fetch@4", COOKIE1_, COOKIE2_, func_gen_Fetch_Z4);


static refalrts::FnResult func_gen_Reduce_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Reduce$1=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce$1=1@1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Reduce$1=1@1/4 (/7 e.Tail0#1/9 )/8 t.Acc#2/13 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Tail0#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Tail0#1: 9
    //DEBUG: t.Acc#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@1/4 } Tile{ AsIs: t.Acc#2/13 } Tile{ AsIs: e.Tail0#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce$1=1@1/4 (/7 e.Tail0#1/5 )/8 e.dyn#0/2 >/1
  // closed e.Tail0#1 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Tail0#1: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Reduce$1=1@0/0 Reuse: & RejectTile\1@0/4 AsIs: (/7 AsIs: e.Tail0#1/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_RejectTile_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1Z1("Reduce$1=1@1", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1Z1);


static refalrts::FnResult func_gen_Reduce_S1A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Reduce$1=1@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce$1=1@2/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Reduce$1=1@2/4 (/7 e.Tail0#1/9 )/8 t.Acc#2/13 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Tail0#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Tail0#1: 9
    //DEBUG: t.Acc#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@2/4 } Tile{ AsIs: t.Acc#2/13 } Tile{ AsIs: e.Tail0#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce$1=1@2/4 (/7 e.Tail0#1/5 )/8 e.dyn#0/2 >/1
  // closed e.Tail0#1 as range 5
  // closed e.dyn#0 as range 2
  //DEBUG: e.Tail0#1: 5
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Reduce$1=1@0/0 Reuse: & FoldTileW\1@0/4 AsIs: (/7 AsIs: e.Tail0#1/5 AsIs: )/8 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_FoldTileW_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1Z2("Reduce$1=1@2", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1Z2);


static refalrts::FnResult func_gen_FilterPatternPos_D2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & FilterPatternPos*2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FilterPatternPos*2/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FilterPatternPos*2/4 s.CurIndexP#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 e.Items-B#1/13 (/19 s.CurIndexP#1/21 s.CurIndexR#1/22 s.ItemWeight#1/23 s.Ident#1/24 )/20 e.Items-E#1/15 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[8];
      context[16] = context[9];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      if( ! refalrts::repeated_stvar_left( vm, context[21], context[5], context[17], context[18] ) )
        continue;
      // closed e.Items-E#1 as range 15
      if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_left( context[23], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //DEBUG: s.CurIndexP#1: 5
      //DEBUG: s.Weight#1: 10
      //DEBUG: s.IndexP#1: 11
      //DEBUG: s.IndexR#1: 12
      //DEBUG: e.Items-B#1: 13
      //DEBUG: e.Items-E#1: 15
      //DEBUG: s.CurIndexR#1: 22
      //DEBUG: s.ItemWeight#1: 23
      //DEBUG: s.Ident#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.CurIndexP#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/21 s.CurIndexR#1/22 s.ItemWeight#1/23 s.Ident#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTileW/4 } Tile{ AsIs: e.Items-B#1/13 } Tile{ HalfReuse: >/19 } Tile{ HalfReuse: </20 } Tile{ HalfReuse: & FoldTileW/7 } Tile{ AsIs: e.Items-E#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FoldTileW]);
      refalrts::reinit_close_call(context[19]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_name(context[7], functions[efunc_FoldTileW]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[8], context[9] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FilterPatternPos*2/4 s.CurIndexP#1/5 t.Tile#1/6 >/1
  //DEBUG: t.Tile#1: 6
  //DEBUG: s.CurIndexP#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FilterPatternPos*2/4 s.CurIndexP#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tile#1/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FilterPatternPos_D2("FilterPatternPos*2", COOKIE1_, COOKIE2_, func_gen_FilterPatternPos_D2);


static refalrts::FnResult func_gen_Fetch_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & Fetch@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Fetch@5/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 2
  do {
    // </0 & Fetch@5/4 (/7 e.Argument#1/13 )/8 (/11 e.Pattern#1/15 )/12 e.Result#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Argument#1 as range 13
    // closed e.Pattern#1 as range 15
    // closed e.Result#1 as range 17
    //DEBUG: e.Argument#1: 13
    //DEBUG: e.Pattern#1: 15
    //DEBUG: e.Result#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@7/4 AsIs: (/7 } (/19 </20 & DelAccumulator/21 </22 & DoMapAccum@1/23 0/24 (/25 )/26 Tile{ AsIs: e.Pattern#1/15 } >/27 >/28 Tile{ AsIs: )/8 AsIs: (/11 } </29 & DelAccumulator/30 </31 & DoMapAccum@1/32 0/33 (/34 Tile{ AsIs: )/12 AsIs: e.Result#1/17 AsIs: >/1 } >/35 )/36 )/37 Tile{ AsIs: e.Argument#1/13 } >/38 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_DelAccumulator]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::alloc_number(vm, context[24], 0UL);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_DelAccumulator]);
    refalrts::alloc_open_call(vm, context[31]);
    refalrts::alloc_name(vm, context[32], functions[efunc_gen_DoMapAccum_Z1]);
    refalrts::alloc_number(vm, context[33], 0UL);
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z7]);
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[37] );
    refalrts::link_brackets( context[11], context[36] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[31] );
    refalrts::link_brackets( context[34], context[12] );
    refalrts::link_brackets( context[19], context[8] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[38] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[29], context[34] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@5/4 (/7 e.arg#0/5 )/8 (/11 e.Pattern#1/9 )/12 e.Result#1/2 >/1
  // closed e.arg#0 as range 5
  // closed e.Pattern#1 as range 9
  // closed e.Result#1 as range 2
  //DEBUG: e.arg#0: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 } Tile{ AsIs: e.arg#0/5 } [*]/13 & Pipe$2\1@0/14 [*]/15 Tile{ HalfReuse: & GST\1@0/8 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Result#1/2 } )/16 {*}/17 (/18 (/19 & Reduce@0/20 & GST\2@0/21 )/22 & GST\3@0/23 )/24 {*}/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_closure_head(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[15]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_Reduce_Z0]);
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_GST_L2Z0]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_GST_L3Z0]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_unwrapped_closure(vm, context[25], context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[8], functions[efunc_gen_GST_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[18], context[24] );
  refalrts::link_brackets( context[19], context[22] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  refalrts::wrap_closure( context[25] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z5("Fetch@5", COOKIE1_, COOKIE2_, func_gen_Fetch_Z5);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & Map@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@4/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@4/4 s.new#3/5 t.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & Map@4/4 s.new#6/5 (/8 s.new#7/14 s.new#8/15 s.new#9/16 e.new#10/12 )/9 e.new#11/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.new#11 as range 10
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
        continue;
      if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
        continue;
      // closed e.new#10 as range 12
      do {
        // </0 & Map@4/4 s.CurIndexR#2/5 (/8 s.Weight#1/14 s.CurIndexP#1/15 s.CurIndexR#2/16 (/23 s.CurIndexP#1/25 s.CurIndexR#2/26 s.ItemWeight#1/27 s.Ident#1/28 )/24 e.3#0/17 )/9 e.Tail#1/19 >/1
        context[17] = context[12];
        context[18] = context[13];
        context[19] = context[10];
        context[20] = context[11];
        if( ! refalrts::repeated_stvar_term( vm, context[16], context[5] ) )
          continue;
        context[21] = 0;
        context[22] = 0;
        context[23] = refalrts::brackets_left( context[21], context[22], context[17], context[18] );
        if( ! context[23] )
          continue;
        refalrts::bracket_pointers(context[23], context[24]);
        if( ! refalrts::repeated_stvar_left( vm, context[25], context[15], context[21], context[22] ) )
          continue;
        if( ! refalrts::repeated_stvar_left( vm, context[26], context[16], context[21], context[22] ) )
          continue;
        // closed e.3#0 as range 17
        // closed e.Tail#1 as range 19
        if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
          continue;
        if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        //DEBUG: s.CurIndexR#2: 5
        //DEBUG: s.Weight#1: 14
        //DEBUG: s.CurIndexP#1: 15
        //DEBUG: e.3#0: 17
        //DEBUG: e.Tail#1: 19
        //DEBUG: s.ItemWeight#1: 27
        //DEBUG: s.Ident#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.CurIndexR#2/5 {REMOVED TILE} s.CurIndexP#1/15 s.CurIndexR#2/16 {REMOVED TILE} s.CurIndexP#1/25 s.CurIndexR#2/26 {REMOVED TILE} s.Ident#1/28 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } </29 Tile{ HalfReuse: & Sub/8 AsIs: s.Weight#1/14 } Tile{ AsIs: s.ItemWeight#1/27 } Tile{ HalfReuse: >/23 } Tile{ AsIs: e.3#0/17 } Tile{ HalfReuse: >/24 } </30 & Map@4/31 Tile{ HalfReuse: s.CurIndexR2 #26/9 AsIs: e.Tail#1/19 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_gen_Map_Z4]);
        refalrts::update_name(context[4], functions[efunc_FoldTile]);
        refalrts::reinit_name(context[8], functions[efunc_Sub]);
        refalrts::reinit_close_call(context[23]);
        refalrts::reinit_close_call(context[24]);
        refalrts::reinit_svar( context[9], context[26] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[29] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_elem( res, context[24] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        res = refalrts::splice_elem( res, context[29] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@4/4 s.CurIndexR#2/5 (/8 s.Weight#1/14 s.IndexP#1/15 s.IndexR#1/16 e.3#0/17 (/23 s.CurIndexP#1/25 s.CurIndexR#2/26 s.ItemWeight#1/27 s.Ident#1/28 )/24 )/9 e.Tail#1/19 >/1
      context[17] = context[12];
      context[18] = context[13];
      context[19] = context[10];
      context[20] = context[11];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_right( context[21], context[22], context[17], context[18] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      // closed e.3#0 as range 17
      // closed e.Tail#1 as range 19
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[26], context[5], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[28], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      //DEBUG: s.CurIndexR#2: 5
      //DEBUG: s.Weight#1: 14
      //DEBUG: s.IndexP#1: 15
      //DEBUG: s.IndexR#1: 16
      //DEBUG: e.3#0: 17
      //DEBUG: e.Tail#1: 19
      //DEBUG: s.CurIndexP#1: 25
      //DEBUG: s.ItemWeight#1: 27
      //DEBUG: s.Ident#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.CurIndexR#2/5 {REMOVED TILE} s.IndexP#1/15 s.IndexR#1/16 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/25 s.CurIndexR#2/26 {REMOVED TILE} s.Ident#1/28 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile/4 } Tile{ HalfReuse: </23 } Tile{ HalfReuse: & Sub/8 AsIs: s.Weight#1/14 } Tile{ AsIs: s.ItemWeight#1/27 } >/29 Tile{ AsIs: e.3#0/17 } >/30 </31 Tile{ HalfReuse: & Map@4/24 HalfReuse: s.CurIndexR2 #26/9 AsIs: e.Tail#1/19 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::update_name(context[4], functions[efunc_FoldTile]);
      refalrts::reinit_open_call(context[23]);
      refalrts::reinit_name(context[8], functions[efunc_Sub]);
      refalrts::reinit_name(context[24], functions[efunc_gen_Map_Z4]);
      refalrts::reinit_svar( context[9], context[26] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[24];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      res = refalrts::splice_elem( res, context[23] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@4/4 s.CurIndexR#2/5 t.Next#1/8 e.Tail#1/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail#1 as range 10
    //DEBUG: t.Next#1: 8
    //DEBUG: s.CurIndexR#2: 5
    //DEBUG: e.Tail#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FilterResultPos*2/4 AsIs: s.CurIndexR#2/5 AsIs: t.Next#1/8 } >/12 </13 & Map@4/14 s.CurIndexR#2/5/15 Tile{ AsIs: e.Tail#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z4]);
    refalrts::copy_stvar(vm, context[15], context[5]);
    refalrts::update_name(context[4], functions[efunc_gen_FilterResultPos_D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@4/4 s.CurIndexR#2/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.CurIndexR#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@4/4 s.CurIndexR#2/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@4/4 s.CurIndexR#2/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.CurIndexR#2: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/6 & FilterResultPos@0/7 Tile{ AsIs: s.CurIndexR#2/5 } )/8 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_FilterResultPos_Z0]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[6], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", COOKIE1_, COOKIE2_, func_gen_Map_Z4);


static refalrts::FnResult func_gen_Fetch_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Fetch@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@6/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: e.Argument#1/5 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@6/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: & RejectTile\1\1@0/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[1], functions[efunc_gen_RejectTile_L1L1Z0]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z6("Fetch@6", COOKIE1_, COOKIE2_, func_gen_Fetch_Z6);


static refalrts::FnResult func_gen_FilterResultPos_D2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & FilterResultPos*2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FilterResultPos*2/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FilterResultPos*2/4 s.CurIndexR#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 e.Items-B#1/13 (/19 s.CurIndexP#1/21 s.CurIndexR#1/22 s.ItemWeight#1/23 s.Ident#1/24 )/20 e.Items-E#1/15 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[8];
      context[16] = context[9];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Items-E#1 as range 15
      if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[22], context[5], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_left( context[23], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[17], context[18] ) )
        continue;
      //DEBUG: s.CurIndexR#1: 5
      //DEBUG: s.Weight#1: 10
      //DEBUG: s.IndexP#1: 11
      //DEBUG: s.IndexR#1: 12
      //DEBUG: e.Items-B#1: 13
      //DEBUG: e.Items-E#1: 15
      //DEBUG: s.CurIndexP#1: 21
      //DEBUG: s.ItemWeight#1: 23
      //DEBUG: s.Ident#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.CurIndexR#1/5 (/6 s.Weight#1/10 s.IndexP#1/11 s.IndexR#1/12 {REMOVED TILE} {REMOVED TILE} s.CurIndexP#1/21 s.CurIndexR#1/22 s.ItemWeight#1/23 s.Ident#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTileW/4 } Tile{ AsIs: e.Items-B#1/13 } Tile{ HalfReuse: >/19 } Tile{ HalfReuse: </20 } Tile{ HalfReuse: & FoldTileW/7 } Tile{ AsIs: e.Items-E#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_FoldTileW]);
      refalrts::reinit_close_call(context[19]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_name(context[7], functions[efunc_FoldTileW]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[7] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[8], context[9] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FilterResultPos*2/4 s.CurIndexR#1/5 t.Tile#1/6 >/1
  //DEBUG: t.Tile#1: 6
  //DEBUG: s.CurIndexR#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FilterResultPos*2/4 s.CurIndexR#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Tile#1/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FilterResultPos_D2("FilterResultPos*2", COOKIE1_, COOKIE2_, func_gen_FilterResultPos_D2);


static refalrts::FnResult func_gen_Fetch_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Fetch@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@7/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </7 & Fetch@8/8 </9 Tile{ HalfReuse: & Reduce/0 Reuse: & GST\2/4 AsIs: e.Argument#1/5 AsIs: >/1 } >/10 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[7]);
    refalrts::alloc_name(vm, context[8], functions[efunc_gen_Fetch_Z8]);
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::reinit_name(context[0], functions[efunc_Reduce]);
    refalrts::update_name(context[4], functions[efunc_gen_GST_L2]);
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@7/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: [*]/1 } & Pipe$2\1@0/5 (/6 & Reduce@0/7 & GST\2@0/8 )/9 (/10 & GST\3@0/11 )/12 {*}/13 >/14 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Pipe_S2L1Z0]);
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Reduce_Z0]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_GST_L2Z0]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_GST_L3Z0]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[1]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_closure_head(context[1]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[10], context[12] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z7("Fetch@7", COOKIE1_, COOKIE2_, func_gen_Fetch_Z7);


static refalrts::FnResult func_gen_Fetch_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Fetch@8/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Fetch@8/4 (/9 (/13 e.2#0/11 )/14 (/17 e.4#0/15 )/18 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[7], context[8] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.2#0 as range 11
    // closed e.4#0 as range 15
    //DEBUG: e.2#0: 11
    //DEBUG: e.4#0: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Map@1/9 } Tile{ AsIs: e.2#0/11 } Tile{ AsIs: >/1 } )/19 Tile{ AsIs: (/13 } Tile{ HalfReuse: </14 HalfReuse: & Map@1/17 AsIs: e.4#0/15 HalfReuse: >/18 AsIs: )/10 } Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[9], functions[efunc_gen_Map_Z1]);
    refalrts::reinit_open_call(context[14]);
    refalrts::reinit_name(context[17], functions[efunc_gen_Map_Z1]);
    refalrts::reinit_close_call(context[18]);
    refalrts::link_brackets( context[13], context[10] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[0], context[19] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Fetch@8/4 e.Argument#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Argument#1 as range 5
    //DEBUG: e.Argument#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GST\3*1/4 AsIs: e.Argument#1/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_GST_L3D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Fetch@8/4 e.arg#0/2 >/1
  // closed e.arg#0 as range 2
  //DEBUG: e.arg#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch@0/4 AsIs: e.arg#0/2 HalfReuse: & GST\3@0/1 } >/5 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[5]);
  refalrts::update_name(context[4], functions[efunc_gen_Fetch_Z0]);
  refalrts::reinit_name(context[1], functions[efunc_gen_GST_L3Z0]);
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Fetch_Z8("Fetch@8", COOKIE1_, COOKIE2_, func_gen_Fetch_Z8);


//End of file
