// This file automatically generated from 'GST.ref'
// Don't edit! Edit 'GST.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_784405321_1684541289
#define COOKIE1_ 784405321U
#define COOKIE2_ 1684541289U

enum efunc {
  efunc_gen_Mu_C1 = 0,
  efunc_u_u_Stepm_Start = 1,
  efunc_u_u_Mum_Aux = 2,
  efunc_u_u_Stepm_End = 3,
  efunc_u_u_FindMuPtr = 4,
  efunc_Add = 5,
  efunc_Div = 6,
  efunc_Mod = 7,
  efunc_Mul = 8,
  efunc_Residue = 9,
  efunc_Sub = 10,
  efunc_gen_u_u_Mum_Aux_S13B1 = 11,
  efunc_Type = 12,
  efunc_gen_Residue_C1 = 13,
  efunc_Map = 14,
  efunc_Apply = 15,
  efunc_Reduce = 16,
  efunc_DoMapAccum = 17,
  efunc_DoMapAccumm_Aux = 18,
  efunc_Fetch = 19,
  efunc_Pipe = 20,
  efunc_gen_Pipe_S2L1 = 21,
  efunc_gen_Pipe_S3L1 = 22,
  efunc_Enum = 23,
  efunc_ReplaceTile = 24,
  efunc_DeEnum = 25,
  efunc_FilterOverlapped = 26,
  efunc_gen_GST_L1 = 27,
  efunc_gen_GST_L2 = 28,
  efunc_gen_GST_L3 = 29,
  efunc_TileCandidates = 30,
  efunc_MapAccum = 31,
  efunc_gen_Enum_L1 = 32,
  efunc_DelAccumulator = 33,
  efunc_gen_Map_Z1 = 34,
  efunc_DoOverlapOffsets = 35,
  efunc_AlignEnumExprs = 36,
  efunc_gen_TileCandidates_L1 = 37,
  efunc_OverlapChain = 38,
  efunc_GlueTiles = 39,
  efunc_ZipItems = 40,
  efunc_OverlapItem = 41,
  efunc_GlueNextTile = 42,
  efunc_FoldTilem_EEnd = 43,
  efunc_gen_Map_Z2 = 44,
  efunc_RejectTile = 45,
  efunc_gen_FilterOverlapped_S1A1 = 46,
  efunc_FindHeavyTile = 47,
  efunc_gen_FindHeavyTile_L1B1 = 48,
  efunc_TermCompare = 49,
  efunc_gen_MapAccum_Z1 = 50,
  efunc_FilterResultPos = 51,
  efunc_gen_RejectTile_L1L1 = 52,
  efunc_gen_Map_Z3 = 53,
  efunc_UnBracket = 54,
  efunc_gen_RejectTile_L1 = 55,
  efunc_FoldTile = 56,
  efunc_FoldTileW = 57,
  efunc_gen_Reduce_Z1 = 58,
  efunc_Modify = 59,
  efunc_gen_Modify_L1 = 60,
  efunc_DoModify = 61,
  efunc_gen_DeEnum_L1D3 = 62,
  efunc_gen_FilterOverlapped_S1L1D1 = 63,
  efunc_gen_DoMapAccum_Z1 = 64,
  efunc_gen_FoldTileW_S1L1D1 = 65,
  efunc_gen_DoMapAccumm_Aux_Z1 = 66,
  efunc_gen_FindHeavyTile_L1D1 = 67,
  efunc_FilterPatternPos = 68,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_Num = 6,
  ident_RemovedTile = 7,
  ident_Tile = 8,
  ident_NoOverlap = 9,
  ident_AsIsE = 10,
  ident_AsIs = 11,
  ident_LEFTm_EDGE = 12,
  ident_RIGHTm_EDGE = 13,
  ident_TkVariable = 14,
  ident_HalfReuse = 15,
  ident_Symbol = 16,
  ident_Reuse = 17,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Mu/4 t.Function#1/5 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Arg#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Arg#1: 2
  //2: e.Arg#1
  //5: t.Function#1
  //15: t.Function#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Mu_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Mum_Aux]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </7 & Mu?1/11 s.Function-Ptr#2/12 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.Function#1: 5
    //DEBUG: e.Arg#1: 2
    //DEBUG: s.Function-Ptr#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_open_call(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


static refalrts::FnResult func_gen_u_u_Mum_Aux_S13B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & __Mu-Aux$13:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & __Mu-Aux$13:1/4 s.new#1/5 s.new#2/6 t.new#3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & __Mu-Aux$13:1/4 s.new#4/5 s.new#5/6 s.new#6/7 >/1
    if( ! refalrts::svar_term( context[7], context[7] ) )
      continue;
    do {
      // </0 & __Mu-Aux$13:1/4 'F'/5 s.SubType#2/6 s.FnPtr#2/7 >/1
      if( ! refalrts::char_term( 'F', context[5] ) )
        continue;
      //DEBUG: s.SubType#2: 6
      //DEBUG: s.FnPtr#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux$13:1/4 'F'/5 s.SubType#2/6 s.FnPtr#2/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.FnPtr2 #7/1 ]] }
      refalrts::reinit_svar( context[1], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux$13:1/4 'W'/5 s.SubType#2/6 s.FnName#2/7 >/1
    if( ! refalrts::char_term( 'W', context[5] ) )
      continue;
    //DEBUG: s.SubType#2: 6
    //DEBUG: s.FnName#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.SubType#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } <Cookie2>/9 Tile{ AsIs: s.FnName#2/7 AsIs: >/1 ]] }
    refalrts::alloc_number(vm, context[9], 1684541289UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 784405321UL);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & __Mu-Aux$13:1/4 'B'/5 s.0#2/6 (/7 e.FnName#2/9 )/8 >/1
  context[9] = 0;
  context[10] = 0;
  if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::char_term( 'B', context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FnName#2 as range 9
  //DEBUG: s.0#2: 6
  //DEBUG: e.FnName#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.0#2/6 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } Tile{ HalfReuse: <Cookie2>/7 } Tile{ AsIs: e.FnName#2/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
  refalrts::reinit_number(context[5], 784405321UL);
  refalrts::reinit_number(context[7], 1684541289UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", COOKIE1_, COOKIE2_, func_gen_u_u_Mum_Aux_S13B1);


static refalrts::FnResult func_u_u_Mum_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & __Mu-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & __Mu-Aux/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & __Mu-Aux/4 s.new#2/5 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    do {
      // </0 & __Mu-Aux/4 '+'/5 >/1
      if( ! refalrts::char_term( '+', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '+'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Add]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '/'/5 >/1
      if( ! refalrts::char_term( '/', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '/'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Div]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '%'/5 >/1
      if( ! refalrts::char_term( '%', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '%'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mod]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '*'/5 >/1
      if( ! refalrts::char_term( '*', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '*'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mul]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '?'/5 >/1
      if( ! refalrts::char_term( '?', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '?'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Residue]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 '-'/5 >/1
      if( ! refalrts::char_term( '-', context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '-'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Sub]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # +/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k43_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # +/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Add]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # //5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k47_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # //5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Div]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # %/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k37_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # %/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mod]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # */5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k42_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # */5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Mul]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # ?/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_k63_], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # ?/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name(context[1], functions[efunc_Residue]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux/4 # -/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_m_], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # -/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
    refalrts::reinit_name(context[1], functions[efunc_Sub]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & __Mu-Aux/4 t.Function#1/5 >/1
  //DEBUG: t.Function#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & __Mu-Aux$13:1/8 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: t.Function#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_u_u_Mum_Aux_S13B1]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_Type]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", COOKIE1_, COOKIE2_, func_u_u_Mum_Aux);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Residue/4 t.Function#1/5 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Arg#1 as range 2
  //DEBUG: t.Function#1: 5
  //DEBUG: e.Arg#1: 2
  //2: e.Arg#1
  //5: t.Function#1
  //15: t.Function#1

  refalrts::reset_allocator(vm);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_Residue_C1]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_u_u_Stepm_Start]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_u_u_Mum_Aux]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function(vm);
  do {
    // </7 & Residue?1/11 s.Function-Ptr#2/12 >/8
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.Function#1: 5
    //DEBUG: e.Arg#1: 2
    //DEBUG: s.Function-Ptr#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_u_u_Stepm_End]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_open_call(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  refalrts::splice_to_freelist(vm, context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


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
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/7 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
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
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
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
    // </0 & Map/4 t.Fn#1/5 t.Next#1/9 e.Tail#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Tail#1 as range 7
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/9 } >/11 </12 & Map/13 t.Fn#1/5/14 Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Map]);
    refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
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


static refalrts::FnResult func_Reduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    //RESULT: Tile{ [[ } </13 & Reduce/14 t.Fn#1/5/15 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/17 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Reduce]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[13], context[16] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 </20 & Apply/21 t.Fn#1/5/22 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/24 )/25 Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Apply]);
    refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_DoMapAccumm_Aux]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[19], context[23] );
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


static refalrts::FnResult func_DoMapAccumm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoMapAccum-Aux/4 t.Fn#1/5 (/9 e.Scanned#1/7 )/10 (/13 t.Acc#1/15 e.StepScanned#1/11 )/14 e.Tail#1/2 >/1
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
  // closed e.Tail#1 as range 2
  context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 11
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 2
  //DEBUG: t.Acc#1: 15
  //DEBUG: e.StepScanned#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#1/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned#1/7 } Tile{ AsIs: e.StepScanned#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccumm_Aux("DoMapAccum-Aux", COOKIE1_, COOKIE2_, func_DoMapAccumm_Aux);


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
  res = refalrts::splice_evar( res, context[5], context[5] );
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
    res = refalrts::splice_evar( res, context[8], context[8] );
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
  res = refalrts::splice_evar( res, context[5], context[5] );
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
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
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


static refalrts::FnResult func_gen_GST_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GST\1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 e.Tiles#2/2 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9
  // closed e.Tiles#2 as range 2
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Result#1: 9
  //DEBUG: e.Tiles#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 Tile{ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Enum/7 AsIs: e.Pattern#1/5 HalfReuse: >/8 HalfReuse: )/11 } (/14 </15 & Enum/16 Tile{ AsIs: e.Result#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: )/12 } )/17 Tile{ AsIs: e.Tiles#2/2 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Enum]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_Enum]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[11]);
  refalrts::link_brackets( context[13], context[17] );
  refalrts::link_brackets( context[14], context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GST_L1("GST\\1", COOKIE1_, COOKIE2_, func_gen_GST_L1);


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
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GST_L2("GST\\2", COOKIE1_, COOKIE2_, func_gen_GST_L2);


static refalrts::FnResult func_gen_GST_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GST\3/4 (/7 (/11 e.Trash#2/9 )/12 (/15 e.MarkedResult#2/13 )/16 )/8 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Trash#2 as range 9
  // closed e.MarkedResult#2 as range 13
  //DEBUG: e.Trash#2: 9
  //DEBUG: e.MarkedResult#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & DeEnum/7 } Tile{ AsIs: e.Trash#2/9 } Tile{ AsIs: >/1 } )/17 Tile{ AsIs: (/11 } Tile{ HalfReuse: </12 HalfReuse: & DeEnum/15 AsIs: e.MarkedResult#2/13 HalfReuse: >/16 AsIs: )/8 } Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_DeEnum]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[15], functions[efunc_DeEnum]);
  refalrts::reinit_close_call(context[16]);
  refalrts::link_brackets( context[11], context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[0], context[17] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GST_L3("GST\\3", COOKIE1_, COOKIE2_, func_gen_GST_L3);


static refalrts::FnResult func_GST(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & GST/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
  //RESULT: Tile{ [[ } </13 & Fetch/14 Tile{ AsIs: </0 Reuse: & TileCandidates/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } [*]/15 & Pipe$2\1/16 & FilterOverlapped/17 (/18 [*]/19 & GST\1/20 (/21 e.Pattern#1/5/22 )/24 (/25 e.Result#1/9/26 )/28 {*}/29 (/30 & Reduce/31 & GST\2/32 )/33 & GST\3/34 )/35 {*}/36 >/37 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Fetch]);
  refalrts::alloc_closure_head(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_Pipe_S2L1]);
  refalrts::alloc_name(vm, context[17], functions[efunc_FilterOverlapped]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_closure_head(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_GST_L1]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::copy_evar(vm, context[26], context[27], context[9], context[10]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_unwrapped_closure(vm, context[29], context[19]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_name(vm, context[31], functions[efunc_Reduce]);
  refalrts::alloc_name(vm, context[32], functions[efunc_gen_GST_L2]);
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_gen_GST_L3]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_unwrapped_closure(vm, context[36], context[15]);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::update_name(context[4], functions[efunc_TileCandidates]);
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[18], context[35] );
  refalrts::link_brackets( context[30], context[33] );
  refalrts::link_brackets( context[25], context[28] );
  refalrts::link_brackets( context[21], context[24] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[37] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[29] );
  refalrts::wrap_closure( context[36] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GST("GST", 0U, 0U, func_GST);


static refalrts::FnResult func_gen_Enum_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Enum\1/4 s.Num#2/5 t.Item#2/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#2: 5
  //DEBUG: t.Item#2: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & Add/9 1/10 s.Num#2/5/11 >/12 Tile{ HalfReuse: (/0 HalfReuse: # Num/4 AsIs: s.Num#2/5 AsIs: t.Item#2/6 HalfReuse: )/1 ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[10], 1UL);
  refalrts::copy_stvar(vm, context[11], context[5]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Num]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[8], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Enum_L1("Enum\\1", COOKIE1_, COOKIE2_, func_gen_Enum_L1);


static refalrts::FnResult func_Enum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DelAccumulator/4 } </5 & MapAccum/6 & Enum\1/7 0/8 Tile{ AsIs: e.Items#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Enum_L1]);
  refalrts::alloc_number(vm, context[8], 0UL);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_DelAccumulator]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Enum("Enum", COOKIE1_, COOKIE2_, func_Enum);


static refalrts::FnResult func_gen_DeEnum_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & DeEnum\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DeEnum\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DeEnum\1/4 (/5 # Num/9 s.Num#2/10 t.Item#2/11 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Num], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: s.Num#2: 10
    //DEBUG: t.Item#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DeEnum\1/4 (/5 # Num/9 s.Num#2/10 {REMOVED TILE} )/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#2/11 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DeEnum\1/4 # RemovedTile/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_RemovedTile], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DeEnum\1/4 # RemovedTile/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # RemovedTile/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_RemovedTile]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DeEnum\1/4 (/5 # Tile/9 e.Tile#2/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::ident_left( identifiers[ident_Tile], context[7], context[8] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tile#2 as range 7
  //DEBUG: e.Tile#2: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DeEnum\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Tile/9 AsIs: e.Tile#2/7 AsIs: )/6 } Tile{ ]] }
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DeEnum_L1("DeEnum\\1", COOKIE1_, COOKIE2_, func_gen_DeEnum_L1);


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


static refalrts::FnResult func_gen_TileCandidates_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & TileCandidates\1/4 (/7 e.AlignedPattern#2/5 t.Last#2/15 )/8 (/11 t.First#2/13 e.AlignedResult#2/9 )/12 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[9], context[10] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.AlignedResult#2 as range 9
  context[16] = refalrts::tvar_right( context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.AlignedPattern#2 as range 5
  //DEBUG: t.First#2: 13
  //DEBUG: e.AlignedResult#2: 9
  //DEBUG: t.Last#2: 15
  //DEBUG: e.AlignedPattern#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoOverlapOffsets/4 AsIs: (/7 } Tile{ AsIs: e.AlignedPattern#2/5 } )/17 (/18 Tile{ AsIs: t.Last#2/15 AsIs: )/8 AsIs: (/11 AsIs: t.First#2/13 } )/19 (/20 Tile{ AsIs: e.AlignedResult#2/9 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_DoOverlapOffsets]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[20], context[12] );
  refalrts::link_brackets( context[11], context[19] );
  refalrts::link_brackets( context[18], context[8] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[15], context[14] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_TileCandidates_L1("TileCandidates\\1", COOKIE1_, COOKIE2_, func_gen_TileCandidates_L1);


static refalrts::FnResult func_TileCandidates(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & TileCandidates/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & AlignEnumExprs/13 0/14 (/15 )/16 (/17 Tile{ AsIs: e.Pattern#1/5 } )/18 (/19 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Result#1/9 AsIs: )/12 AsIs: >/1 } & TileCandidates\1/20 >/21 Tile{ ]] }
  refalrts::alloc_name(vm, context[13], functions[efunc_AlignEnumExprs]);
  refalrts::alloc_number(vm, context[14], 0UL);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_TileCandidates_L1]);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[7]);
  refalrts::push_stack( vm, context[21] );
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
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TileCandidates("TileCandidates", COOKIE1_, COOKIE2_, func_TileCandidates);


static refalrts::FnResult func_AlignEnumExprs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & AlignEnumExprs/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AlignEnumExprs/4 s.new#1/21 (/19 e.new#2/17 )/20 (/15 e.new#3/13 )/16 (/11 e.new#4/9 )/12 (/7 e.new#5/5 )/8 >/1
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
    // </0 & AlignEnumExprs/4 s.new#6/21 (/19 e.new#7/22 )/20 (/15 e.new#8/24 )/16 (/11 e.new#9/26 )/12 (/7 t.new#10/30 e.new#11/28 )/8 >/1
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
      // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/32 )/20 (/15 t.PatternItem#1/40 e.Pattern#1/34 )/16 (/11 e.ScannedResult#1/36 )/12 (/7 t.ResultItem#1/30 e.Result#1/38 )/8 >/1
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
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & AlignEnumExprs/4 } </42 & Add/43 1/44 Tile{ AsIs: s.Num#1/21 } >/45 Tile{ AsIs: (/19 AsIs: e.ScannedPattern#1/32 HalfReuse: (/20 HalfReuse: s.Num1 #21/15 AsIs: t.PatternItem#1/40 } )/46 )/47 (/48 Tile{ AsIs: e.Pattern#1/34 } Tile{ AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/36 HalfReuse: (/12 HalfReuse: s.Num1 #21/7 AsIs: t.ResultItem#1/30 } )/49 )/50 (/51 Tile{ AsIs: e.Result#1/38 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
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
      res = refalrts::splice_evar( res, context[45], context[45] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/32 )/20 (/15 )/16 (/11 e.ScannedResult#1/34 )/12 (/7 t.ResultItem#1/30 e.Result#1/36 )/8 >/1
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AlignEnumExprs/4 } </38 & Add/39 1/40 Tile{ AsIs: s.Num#1/21 HalfReuse: >/19 } (/41 Tile{ AsIs: e.ScannedPattern#1/32 } (/42 s.Num#1/21/43 '*'/44 )/45 Tile{ AsIs: )/20 AsIs: (/15 AsIs: )/16 AsIs: (/11 AsIs: e.ScannedResult#1/34 HalfReuse: (/12 HalfReuse: s.Num1 #21/7 AsIs: t.ResultItem#1/30 } )/46 )/47 (/48 Tile{ AsIs: e.Result#1/36 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[40], 1UL);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::alloc_open_bracket(vm, context[42]);
    refalrts::copy_stvar(vm, context[43], context[21]);
    refalrts::alloc_char(vm, context[44], '*');
    refalrts::alloc_close_bracket(vm, context[45]);
    refalrts::alloc_close_bracket(vm, context[46]);
    refalrts::alloc_close_bracket(vm, context[47]);
    refalrts::alloc_open_bracket(vm, context[48]);
    refalrts::reinit_close_call(context[19]);
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_svar( context[7], context[21] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[48], context[8] );
    refalrts::link_brackets( context[11], context[47] );
    refalrts::link_brackets( context[12], context[46] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[41], context[20] );
    refalrts::link_brackets( context[42], context[45] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[38] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[46], context[48] );
    res = refalrts::splice_evar( res, context[20], context[31] );
    res = refalrts::splice_evar( res, context[42], context[45] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[41], context[41] );
    res = refalrts::splice_evar( res, context[21], context[19] );
    res = refalrts::splice_evar( res, context[38], context[40] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AlignEnumExprs/4 s.new#6/21 (/19 e.new#7/17 )/20 (/15 e.new#8/13 )/16 (/11 e.new#9/9 )/12 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 17
  // closed e.new#8 as range 13
  // closed e.new#9 as range 9
  do {
    // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/22 )/20 (/15 t.PatternItem#1/28 e.Pattern#1/24 )/16 (/11 e.ScannedResult#1/26 )/12 (/7 )/8 >/1
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AlignEnumExprs/4 } </30 & Add/31 1/32 Tile{ AsIs: s.Num#1/21 } >/33 Tile{ AsIs: (/19 AsIs: e.ScannedPattern#1/22 HalfReuse: (/20 HalfReuse: s.Num1 #21/15 AsIs: t.PatternItem#1/28 } )/34 Tile{ AsIs: )/16 AsIs: (/11 } Tile{ AsIs: e.Pattern#1/24 } )/35 (/36 Tile{ AsIs: e.ScannedResult#1/26 } (/37 s.Num#1/21/38 '*'/39 )/40 Tile{ AsIs: )/12 AsIs: (/7 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[32], 1UL);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_open_bracket(vm, context[36]);
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::copy_stvar(vm, context[38], context[21]);
    refalrts::alloc_char(vm, context[39], '*');
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::reinit_open_bracket(context[20]);
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[36], context[12] );
    refalrts::link_brackets( context[37], context[40] );
    refalrts::link_brackets( context[11], context[35] );
    refalrts::link_brackets( context[19], context[16] );
    refalrts::link_brackets( context[20], context[34] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[37], context[40] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[16], context[11] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[19], context[29] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AlignEnumExprs/4 s.Num#1/21 (/19 e.ScannedPattern#1/17 )/20 (/15 )/16 (/11 e.ScannedResult#1/9 )/12 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedPattern#1 as range 17
  // closed e.ScannedResult#1 as range 9
  //DEBUG: s.Num#1: 21
  //DEBUG: e.ScannedPattern#1: 17
  //DEBUG: e.ScannedResult#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & AlignEnumExprs/4 s.Num#1/21 (/19 {REMOVED TILE} )/20 (/15 {REMOVED TILE} (/7 )/8 >/1 {REMOVED TILE}
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

static refalrts::NativeReference nat_ref_AlignEnumExprs("AlignEnumExprs", COOKIE1_, COOKIE2_, func_AlignEnumExprs);


static refalrts::FnResult func_DoOverlapOffsets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
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
    // </0 & DoOverlapOffsets/4 (/7 e.Pattern#1/21 t.Last#1/31 )/8 (/11 e.OverlappedPattern#1/23 )/12 (/15 e.OverlappedResult#1/25 )/16 (/19 t.First#1/29 e.Result#1/27 )/20 >/1
    context[21] = context[5];
    context[22] = context[6];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[13];
    context[26] = context[14];
    context[27] = context[17];
    context[28] = context[18];
    // closed e.OverlappedPattern#1 as range 23
    // closed e.OverlappedResult#1 as range 25
    context[30] = refalrts::tvar_left( context[29], context[27], context[28] );
    if( ! context[30] )
      continue;
    // closed e.Result#1 as range 27
    context[32] = refalrts::tvar_right( context[31], context[21], context[22] );
    if( ! context[32] )
      continue;
    // closed e.Pattern#1 as range 21
    //DEBUG: e.OverlappedPattern#1: 23
    //DEBUG: e.OverlappedResult#1: 25
    //DEBUG: t.First#1: 29
    //DEBUG: e.Result#1: 27
    //DEBUG: t.Last#1: 31
    //DEBUG: e.Pattern#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </33 Tile{ HalfReuse: & OverlapChain/8 AsIs: (/11 AsIs: e.OverlappedPattern#1/23 AsIs: )/12 AsIs: (/15 AsIs: e.OverlappedResult#1/25 AsIs: )/16 HalfReuse: >/19 } Tile{ AsIs: </0 AsIs: & DoOverlapOffsets/4 AsIs: (/7 } Tile{ AsIs: e.Pattern#1/21 } )/34 (/35 Tile{ AsIs: t.Last#1/31 } e.OverlappedPattern#1/23/36 )/38 (/39 e.OverlappedResult#1/25/40 Tile{ AsIs: t.First#1/29 } )/42 (/43 Tile{ AsIs: e.Result#1/27 } Tile{ AsIs: )/20 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[33]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::copy_evar(vm, context[36], context[37], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_open_bracket(vm, context[39]);
    refalrts::copy_evar(vm, context[40], context[41], context[25], context[26]);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::alloc_open_bracket(vm, context[43]);
    refalrts::reinit_name(context[8], functions[efunc_OverlapChain]);
    refalrts::reinit_close_call(context[19]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[43], context[20] );
    refalrts::link_brackets( context[39], context[42] );
    refalrts::link_brackets( context[35], context[38] );
    refalrts::link_brackets( context[7], context[34] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[33] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[19] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoOverlapOffsets/4 (/7 )/8 (/11 e.new#5/9 )/12 (/15 e.new#6/13 )/16 (/19 )/20 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 9
  // closed e.new#6 as range 13
  do {
    // </0 & DoOverlapOffsets/4 (/7 )/8 (/11 e.OverlappedPattern#1/21 t.Last#1/27 )/12 (/15 t.First#1/25 e.OverlappedResult#1/23 )/16 (/19 )/20 >/1
    context[21] = context[9];
    context[22] = context[10];
    context[23] = context[13];
    context[24] = context[14];
    context[26] = refalrts::tvar_left( context[25], context[23], context[24] );
    if( ! context[26] )
      continue;
    // closed e.OverlappedResult#1 as range 23
    context[28] = refalrts::tvar_right( context[27], context[21], context[22] );
    if( ! context[28] )
      continue;
    // closed e.OverlappedPattern#1 as range 21
    //DEBUG: t.First#1: 25
    //DEBUG: e.OverlappedResult#1: 23
    //DEBUG: t.Last#1: 27
    //DEBUG: e.OverlappedPattern#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & OverlapChain/8 AsIs: (/11 AsIs: e.OverlappedPattern#1/21 AsIs: t.Last#1/27 AsIs: )/12 AsIs: (/15 AsIs: t.First#1/25 AsIs: e.OverlappedResult#1/23 AsIs: )/16 HalfReuse: >/19 HalfReuse: </20 HalfReuse: & DoOverlapOffsets/1 } Tile{ HalfReuse: (/0 HalfReuse: )/4 } (/29 e.OverlappedPattern#1/21/30 )/32 (/33 e.OverlappedResult#1/23/34 )/36 (/37 )/38 >/39 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::copy_evar(vm, context[30], context[31], context[21], context[22]);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::copy_evar(vm, context[34], context[35], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[8], functions[efunc_OverlapChain]);
    refalrts::reinit_close_call(context[19]);
    refalrts::reinit_open_call(context[20]);
    refalrts::reinit_name(context[1], functions[efunc_DoOverlapOffsets]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[37], context[38] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[29], context[32] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[39] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoOverlapOffsets/4 (/7 )/8 (/11 )/12 (/15 )/16 (/19 )/20 >/1
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
  res = refalrts::splice_evar( res, context[15], context[15] );
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
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[19], context[19] );
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
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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
    //RESULT: Tile{ [[ } </21 & GlueNextTile/22 Tile{ HalfReuse: (/0 HalfReuse: s.Weight1 #12/4 AsIs: (/9 AsIs: s.CurIndexP#1/18 AsIs: s.CurIndexR#1/13 AsIs: s.Weight#1/12 AsIs: s.Ident#1/11 AsIs: )/10 } )/23 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_GlueNextTile]);
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
    res = refalrts::splice_evar( res, context[23], context[23] );
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
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[9], context[9] );
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
    res = refalrts::splice_evar( res, context[5], context[5] );
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


static refalrts::FnResult func_gen_FilterOverlapped_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FilterOverlapped$1\1/4 (/7 s.CurIndexP#3/9 s.CurIndexR#3/10 s.ItemWeight#3/11 s.Ident#3/12 )/8 >/1
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
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.CurIndexP#3: 9
  //DEBUG: s.CurIndexR#3: 10
  //DEBUG: s.ItemWeight#3: 11
  //DEBUG: s.Ident#3: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FilterOverlapped$1\1/4 (/7 s.CurIndexP#3/9 s.CurIndexR#3/10 s.ItemWeight#3/11 s.Ident#3/12 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Ident3 #12/1 ]] }
  refalrts::reinit_svar( context[1], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FilterOverlapped_S1L1("FilterOverlapped$1\\1", COOKIE1_, COOKIE2_, func_gen_FilterOverlapped_S1L1);


static refalrts::FnResult func_gen_FilterOverlapped_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
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
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: s.IndexP2 #10/4 HalfReuse: s.IndexR2 #11/7 AsIs: s.MaxWeight#2/9 } (/12 </13 & Map@2/14 Tile{ AsIs: e.MaxItems#2/5 } >/15 Tile{ AsIs: )/8 } )/16 </17 & FilterOverlapped/18 </19 & RejectTile/20 (/21 Tile{ AsIs: e.Tiles#2/2 } )/22 e.MaxItems#2/5/23 >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z2]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_FilterOverlapped]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_RejectTile]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::reinit_svar( context[7], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[0], context[16] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[21] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[15], context[15] );
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
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & FilterOverlapped$1=1/10 Tile{ AsIs: </0 Reuse: & FindHeavyTile/4 AsIs: t.NextTile#1/7 AsIs: e.Tiles#1/5 AsIs: >/1 } >/11 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_gen_FilterOverlapped_S1A1]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_FindHeavyTile]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[0], context[1] );
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
    res = refalrts::splice_evar( res, context[18], context[18] );
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


static refalrts::FnResult func_gen_FindHeavyTile_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & FindHeavyTile\1/4 (/7 s.MaxWeight#2/13 s.IndexP#2/14 s.IndexR#2/15 e.MaxItems#2/5 )/8 (/11 s.Weight#2/16 s.CurIndexP#2/17 s.CurIndexR#2/18 e.Items#2/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MaxItems#2 as range 5
  if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#2 as range 9
  //DEBUG: s.MaxWeight#2: 13
  //DEBUG: s.IndexP#2: 14
  //DEBUG: s.IndexR#2: 15
  //DEBUG: e.MaxItems#2: 5
  //DEBUG: s.Weight#2: 16
  //DEBUG: s.CurIndexP#2: 17
  //DEBUG: s.CurIndexR#2: 18
  //DEBUG: e.Items#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 HalfReuse: & FindHeavyTile\1:1/11 AsIs: s.Weight#2/16 AsIs: s.CurIndexP#2/17 AsIs: s.CurIndexR#2/18 } (/19 Tile{ AsIs: e.Items#2/9 } Tile{ HalfReuse: )/7 AsIs: s.MaxWeight#2/13 AsIs: s.IndexP#2/14 AsIs: s.IndexR#2/15 } (/20 Tile{ AsIs: e.MaxItems#2/5 } )/21 Tile{ AsIs: </0 Reuse: & TermCompare/4 } s.MaxWeight#2/13/22 s.Weight#2/16/23 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::copy_stvar(vm, context[22], context[13]);
  refalrts::copy_stvar(vm, context[23], context[16]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_gen_FindHeavyTile_L1B1]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::update_name(context[4], functions[efunc_TermCompare]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[19], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[8], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FindHeavyTile_L1("FindHeavyTile\\1", COOKIE1_, COOKIE2_, func_gen_FindHeavyTile_L1);


static refalrts::FnResult func_FindHeavyTile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
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
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum@1/4 AsIs: t.NextTile#1/5 AsIs: e.Tiles#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_MapAccum_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FindHeavyTile("FindHeavyTile", COOKIE1_, COOKIE2_, func_FindHeavyTile);


static refalrts::FnResult func_gen_RejectTile_L1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & RejectTile\1\1/4 e.Tiles#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tiles#3 as range 2
  //DEBUG: e.Tiles#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: e.Tiles#3/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RejectTile_L1L1("RejectTile\\1\\1", COOKIE1_, COOKIE2_, func_gen_RejectTile_L1L1);


static refalrts::FnResult func_gen_RejectTile_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & RejectTile\1/4 (/7 e.Tiles#2/5 )/8 (/11 s.CurIndexP#2/13 s.CurIndexR#2/14 s.ItemWeight#2/15 s.Ident#2/16 )/12 >/1
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
  // closed e.Tiles#2 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Tiles#2: 5
  //DEBUG: s.CurIndexP#2: 13
  //DEBUG: s.CurIndexR#2: 14
  //DEBUG: s.ItemWeight#2: 15
  //DEBUG: s.Ident#2: 16

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.CurIndexP#2/13 {REMOVED TILE} s.ItemWeight#2/15 s.Ident#2/16 {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 & Fetch/18 Tile{ AsIs: </0 Reuse: & Map@3/4 HalfReuse: s.CurIndexP2 #13/7 AsIs: e.Tiles#2/5 HalfReuse: >/8 HalfReuse: [*]/11 } & Pipe$2\1/19 (/20 & Map/21 (/22 & FilterResultPos/23 Tile{ AsIs: s.CurIndexR#2/14 } )/24 )/25 (/26 & RejectTile\1\1/27 )/28 Tile{ HalfReuse: {*}/12 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Fetch]);
  refalrts::alloc_name(vm, context[19], functions[efunc_gen_Pipe_S2L1]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Map]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_FilterResultPos]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_gen_RejectTile_L1L1]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::reinit_svar( context[7], context[13] );
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_closure_head(context[11]);
  refalrts::reinit_unwrapped_closure(context[12], context[11]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[26], context[28] );
  refalrts::link_brackets( context[20], context[25] );
  refalrts::link_brackets( context[22], context[24] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RejectTile_L1("RejectTile\\1", COOKIE1_, COOKIE2_, func_gen_RejectTile_L1);


static refalrts::FnResult func_RejectTile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
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
  //RESULT: Tile{ [[ } </9 & UnBracket/10 </11 Tile{ HalfReuse: & Reduce/0 Reuse: & RejectTile\1/4 AsIs: (/7 AsIs: e.Tiles#1/5 AsIs: )/8 AsIs: e.HeavyTileItems#1/2 AsIs: >/1 } >/12 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_UnBracket]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::reinit_name(context[0], functions[efunc_Reduce]);
  refalrts::update_name(context[4], functions[efunc_gen_RejectTile_L1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[11] );
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
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[6], context[10] );
      res = refalrts::splice_evar( res, context[7], context[7] );
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
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[6], context[10] );
      res = refalrts::splice_evar( res, context[17], context[17] );
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
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[21], context[21] );
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
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[6], context[10] );
      res = refalrts::splice_evar( res, context[7], context[7] );
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
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[6], context[10] );
      res = refalrts::splice_evar( res, context[17], context[17] );
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
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[21], context[21] );
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

  do {
    // </0 & FoldTile/4 s.Weight#1/5 e.Items#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    // closed e.Items#1 as range 6
    //DEBUG: s.Weight#1: 5
    //DEBUG: e.Items#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FoldTile-EEnd/4 AsIs: s.Weight#1/5 AsIs: e.Items#1/6 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_FoldTilem_EEnd]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FoldTile/4 s.Weight#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Weight#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FoldTile/4 s.Weight#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FoldTile("FoldTile", COOKIE1_, COOKIE2_, func_FoldTile);


static refalrts::FnResult func_gen_FoldTileW_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & FoldTileW$1\1/4 s.Weight#2/9 (/7 s.IndexP#2/10 s.IndexR#2/11 s.ItemWeight#2/12 s.Ident#2/13 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Weight#2: 9
  //DEBUG: s.IndexP#2: 10
  //DEBUG: s.IndexR#2: 11
  //DEBUG: s.ItemWeight#2: 12
  //DEBUG: s.Ident#2: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.IndexP#2/10 s.IndexR#2/11 s.ItemWeight#2/12 s.Ident#2/13 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Weight#2/9 HalfReuse: s.ItemWeight2 #12/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_svar( context[7], context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FoldTileW_S1L1("FoldTileW$1\\1", COOKIE1_, COOKIE2_, func_gen_FoldTileW_S1L1);


static refalrts::FnResult func_FoldTileW(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & FoldTileW/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & FoldTileW/4 (/9 s.CurIndexP#1/11 s.CurIndexR#1/12 s.ItemWeight#1/13 s.Ident#1/14 )/10 e.Items#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.Items#1 as range 5
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Items#1: 5
    //DEBUG: s.CurIndexP#1: 11
    //DEBUG: s.CurIndexR#1: 12
    //DEBUG: s.ItemWeight#1: 13
    //DEBUG: s.Ident#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } & FoldTile/15 </16 & Reduce@1/17 s.ItemWeight#1/13/18 e.Items#1/5/19 Tile{ HalfReuse: >/4 AsIs: (/9 AsIs: s.CurIndexP#1/11 AsIs: s.CurIndexR#1/12 AsIs: s.ItemWeight#1/13 AsIs: s.Ident#1/14 AsIs: )/10 AsIs: e.Items#1/5 AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[15], functions[efunc_FoldTile]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_Reduce_Z1]);
    refalrts::copy_stvar(vm, context[18], context[13]);
    refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]);
    refalrts::reinit_close_call(context[4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[15], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FoldTileW/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FoldTileW/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FoldTileW("FoldTileW", COOKIE1_, COOKIE2_, func_FoldTileW);


static refalrts::FnResult func_ReplaceTile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.IndexP#1/21 s.IndexR#1/22 s.Weight#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Modify/4 AsIs: (/7 } Tile{ AsIs: e.Idents#1/17 } Tile{ HalfReuse: )/1 } Tile{ AsIs: (/19 } Tile{ AsIs: e.Pattern-B#1/24 } Tile{ AsIs: )/20 HalfReuse: (/16 } Tile{ AsIs: (/32 AsIs: # Num/34 AsIs: s.IndexP#1/35 AsIs: t.PatternItem#1/36 AsIs: )/33 AsIs: e.Pattern-E#1/26 AsIs: )/8 AsIs: (/11 AsIs: e.Result-B#1/38 HalfReuse: )/44 HalfReuse: (/46 } (/50 # Num/51 Tile{ AsIs: s.IndexR#1/47 AsIs: t.ResultItem#1/48 AsIs: )/45 AsIs: e.Result-E#1/40 AsIs: )/12 HalfReuse: >/15 } Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_ident(vm, context[51], identifiers[ident_Num]);
      refalrts::update_name(context[4], functions[efunc_Modify]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::reinit_open_bracket(context[46]);
      refalrts::reinit_close_call(context[15]);
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[46], context[12] );
      refalrts::link_brackets( context[50], context[45] );
      refalrts::link_brackets( context[11], context[44] );
      refalrts::link_brackets( context[16], context[8] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[15] );
      res = refalrts::splice_evar( res, context[50], context[51] );
      res = refalrts::splice_evar( res, context[32], context[46] );
      res = refalrts::splice_evar( res, context[20], context[16] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[38], context[39], context[28], context[29] ) );
  } while ( refalrts::open_evar_advance( context[24], context[25], context[5], context[6] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_ReplaceTile("ReplaceTile", COOKIE1_, COOKIE2_, func_ReplaceTile);


static refalrts::FnResult func_gen_Modify_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Modify\1/4 (/7 e.PatFirst#1/5 )/8 (/11 e.ResFirst#1/9 )/12 (/15 # RemovedTile/17 e.PatSecond#2/13 )/16 (/20 (/24 # Tile/26 e.Tile#2/22 )/25 e.ResSecond#2/18 )/21 >/1
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
  context[17] = refalrts::ident_left( identifiers[ident_RemovedTile], context[13], context[14] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[18], context[19] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = refalrts::ident_left( identifiers[ident_Tile], context[22], context[23] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatFirst#1 as range 5
  // closed e.ResFirst#1 as range 9
  // closed e.PatSecond#2 as range 13
  // closed e.Tile#2 as range 22
  // closed e.ResSecond#2 as range 18
  //DEBUG: e.PatFirst#1: 5
  //DEBUG: e.ResFirst#1: 9
  //DEBUG: e.PatSecond#2: 13
  //DEBUG: e.Tile#2: 22
  //DEBUG: e.ResSecond#2: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & Modify\1/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.PatFirst#1/5 } Tile{ AsIs: # RemovedTile/17 AsIs: e.PatSecond#2/13 AsIs: )/16 AsIs: (/20 } Tile{ AsIs: e.ResFirst#1/9 } Tile{ AsIs: (/24 AsIs: # Tile/26 AsIs: e.Tile#2/22 AsIs: )/25 AsIs: e.ResSecond#2/18 AsIs: )/21 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[0], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[21] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Modify_L1("Modify\\1", COOKIE1_, COOKIE2_, func_gen_Modify_L1);


static refalrts::FnResult func_Modify(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & Modify/4 (/7 e.Idents#1/5 )/8 (/11 e.PatFirst#1/9 )/12 (/15 e.PatSecond#1/13 )/16 (/19 e.ResFirst#1/17 )/20 (/23 e.ResSecond#1/21 )/24 >/1
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
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  //RESULT: Tile{ [[ } </25 & Fetch/26 Tile{ AsIs: </0 Reuse: & DoModify/4 AsIs: (/7 AsIs: e.Idents#1/5 AsIs: )/8 AsIs: (/11 } # Tile/27 Tile{ AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.PatSecond#1/13 } Tile{ AsIs: )/20 AsIs: (/23 AsIs: e.ResSecond#1/21 AsIs: )/24 AsIs: >/1 } [*]/28 & Modify\1/29 (/30 Tile{ AsIs: e.PatFirst#1/9 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.ResFirst#1/17 } )/31 {*}/32 >/33 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_Fetch]);
  refalrts::alloc_ident(vm, context[27], identifiers[ident_Tile]);
  refalrts::alloc_closure_head(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_gen_Modify_L1]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_unwrapped_closure(vm, context[32], context[28]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::update_name(context[4], functions[efunc_DoModify]);
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[15], context[31] );
  refalrts::link_brackets( context[30], context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[31], context[33] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[20], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  refalrts::wrap_closure( context[32] );
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
        res = refalrts::splice_evar( res, context[46], context[46] );
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
  // </0 & OverlapItem/4 t.new#1/5 t.new#2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OverlapItem/4 (/5 e.new#3/9 s.new#4/11 )/6 t.new#5/7 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#3 as range 9
    do {
      // </0 & OverlapItem/4 (/5 s.new#7/14 e.new#8/12 s.new#6/11 )/6 t.new#9/7 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.new#8 as range 12
      do {
        // </0 & OverlapItem/4 (/5 s.new#11/14 e.new#12/15 s.new#10/11 )/6 (/7 s.new#13/19 e.new#14/17 )/8 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = 0;
        context[18] = 0;
        if( ! refalrts::brackets_term( context[17], context[18], context[7] ) )
          continue;
        // closed e.new#12 as range 15
        if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
          continue;
        // closed e.new#14 as range 17
        do {
          // </0 & OverlapItem/4 (/5 # TkVariable/14 'e'/24 e.Index#1/20 s.Offset#1/11 )/6 (/7 # TkVariable/19 'e'/25 e.Index#1/26 )/8 >/1
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
          //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # TkVariable/14 'e'/24 e.Index#1/20 s.Offset#1/11 )/6 (/7 # TkVariable/19 'e'/25 e.Index#1/26 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIsE/1 ]] }
          refalrts::reinit_number(context[8], 3UL);
          refalrts::reinit_ident(context[1], identifiers[ident_AsIsE]);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OverlapItem/4 (/5 s.AnyType#1/14 e.Info#1/20 s.Offset#1/11 )/6 (/7 s.AnyType#1/19 e.Info#1/24 )/8 >/1
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
        //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.AnyType#1/14 e.Info#1/20 s.Offset#1/11 )/6 (/7 s.AnyType#1/19 e.Info#1/24 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIs/1 ]] }
        refalrts::reinit_number(context[8], 3UL);
        refalrts::reinit_ident(context[1], identifiers[ident_AsIs]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & OverlapItem/4 (/5 # TkVariable/14 s.Mode#1/17 e.Index#1/15 s.Offset#1/11 )/6 t.AnyItem#1/7 >/1
        context[15] = context[12];
        context[16] = context[13];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[14] ) )
          continue;
        if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
          continue;
        // closed e.Index#1 as range 15
        //DEBUG: t.AnyItem#1: 7
        //DEBUG: s.Offset#1: 11
        //DEBUG: s.Mode#1: 17
        //DEBUG: e.Index#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # TkVariable/14 s.Mode#1/17 e.Index#1/15 s.Offset#1/11 )/6 t.AnyItem#1/7 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_NoOverlap]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OverlapItem/4 (/5 s.new#11/14 e.new#12/15 s.new#10/11 )/6 (/7 s.new#13/19 e.new#14/17 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = 0;
      context[18] = 0;
      if( ! refalrts::brackets_term( context[17], context[18], context[7] ) )
        continue;
      // closed e.new#12 as range 15
      if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
        continue;
      // closed e.new#14 as range 17
      do {
        // </0 & OverlapItem/4 (/5 s.new#16/14 e.new#17/20 s.new#15/11 )/6 (/7 # TkVariable/19 s.new#18/24 e.new#19/22 )/8 >/1
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        context[23] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[19] ) )
          continue;
        // closed e.new#17 as range 20
        if( ! refalrts::svar_left( context[24], context[22], context[23] ) )
          continue;
        // closed e.new#19 as range 22
        do {
          // </0 & OverlapItem/4 (/5 s.AnyType#1/14 e.Info#1/25 s.Offset#1/11 )/6 (/7 # TkVariable/19 's'/24 e.Index#1/27 )/8 >/1
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
          //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.AnyType#1/14 e.Info#1/25 s.Offset#1/11 )/6 (/7 # TkVariable/19 's'/24 e.Index#1/27 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/8 HalfReuse: # HalfReuse/1 ]] }
          refalrts::reinit_number(context[8], 1UL);
          refalrts::reinit_ident(context[1], identifiers[ident_HalfReuse]);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OverlapItem/4 (/5 s.AnyType#1/14 e.Info#1/25 s.Offset#1/11 )/6 (/7 # TkVariable/19 s.Mode#1/24 e.Index#1/27 )/8 >/1
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
        //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.AnyType#1/14 e.Info#1/25 s.Offset#1/11 )/6 (/7 # TkVariable/19 s.Mode#1/24 e.Index#1/27 )/8 {REMOVED TILE}
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
        // </0 & OverlapItem/4 (/5 s.new#16/14 e.new#17/20 s.new#15/11 )/6 (/7 s.new#18/19 )/8 >/1
        context[20] = context[15];
        context[21] = context[16];
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        // closed e.new#17 as range 20
        do {
          // </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/22 s.Offset#1/11 )/6 (/7 # LEFT-EDGE/19 )/8 >/1
          context[22] = context[20];
          context[23] = context[21];
          if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[19] ) )
            continue;
          // closed e.Info1#1 as range 22
          //DEBUG: s.Type1#1: 14
          //DEBUG: s.Offset#1: 11
          //DEBUG: e.Info1#1: 22

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/22 s.Offset#1/11 )/6 (/7 # LEFT-EDGE/19 )/8 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
          refalrts::reinit_ident(context[1], identifiers[ident_NoOverlap]);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/22 s.Offset#1/11 )/6 (/7 # RIGHT-EDGE/19 )/8 >/1
        context[22] = context[20];
        context[23] = context[21];
        if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[19] ) )
          continue;
        // closed e.Info1#1 as range 22
        //DEBUG: s.Type1#1: 14
        //DEBUG: s.Offset#1: 11
        //DEBUG: e.Info1#1: 22

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/22 s.Offset#1/11 )/6 (/7 # RIGHT-EDGE/19 )/8 {REMOVED TILE}
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
        // </0 & OverlapItem/4 (/5 # Symbol/14 s.new#16/24 e.new#17/20 s.new#15/11 )/6 (/7 # Symbol/19 s.new#18/25 e.new#19/22 )/8 >/1
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
        // closed e.new#19 as range 22
        do {
          // </0 & OverlapItem/4 (/5 # Symbol/14 s.Type#1/24 e.Info1#1/26 s.Offset#1/11 )/6 (/7 # Symbol/19 s.Type#1/25 e.Info2#1/28 )/8 >/1
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
          //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # Symbol/14 s.Type#1/24 e.Info1#1/26 s.Offset#1/11 )/6 (/7 # Symbol/19 s.Type#1/25 e.Info2#1/28 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/8 HalfReuse: # Reuse/1 ]] }
          refalrts::reinit_number(context[8], 2UL);
          refalrts::reinit_ident(context[1], identifiers[ident_Reuse]);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & OverlapItem/4 (/5 # Symbol/14 s.Type1#1/24 e.Info1#1/26 s.Offset#1/11 )/6 (/7 # Symbol/19 s.Type2#1/25 e.Info2#1/28 )/8 >/1
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
        //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # Symbol/14 s.Type1#1/24 e.Info1#1/26 s.Offset#1/11 )/6 (/7 # Symbol/19 s.Type2#1/25 e.Info2#1/28 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/8 HalfReuse: # HalfReuse/1 ]] }
        refalrts::reinit_number(context[8], 1UL);
        refalrts::reinit_ident(context[1], identifiers[ident_HalfReuse]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & OverlapItem/4 (/5 s.Type#1/14 e.Info1#1/20 s.Offset#1/11 )/6 (/7 s.Type#1/19 e.Info2#1/22 )/8 >/1
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
        //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type#1/14 e.Info1#1/20 s.Offset#1/11 )/6 (/7 s.Type#1/19 e.Info2#1/22 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/8 HalfReuse: # Reuse/1 ]] }
        refalrts::reinit_number(context[8], 2UL);
        refalrts::reinit_ident(context[1], identifiers[ident_Reuse]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/20 s.Offset#1/11 )/6 (/7 s.Type2#1/19 e.Info2#1/22 )/8 >/1
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
      //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 s.Type1#1/14 e.Info1#1/20 s.Offset#1/11 )/6 (/7 s.Type2#1/19 e.Info2#1/22 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/8 HalfReuse: # HalfReuse/1 ]] }
      refalrts::reinit_number(context[8], 1UL);
      refalrts::reinit_ident(context[1], identifiers[ident_HalfReuse]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OverlapItem/4 (/5 s.new#6/11 )/6 t.new#7/7 >/1
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    do {
      // </0 & OverlapItem/4 (/5 s.new#8/11 )/6 (/7 s.new#9/14 )/8 >/1
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[7] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      do {
        // </0 & OverlapItem/4 (/5 # LEFT-EDGE/11 )/6 (/7 # LEFT-EDGE/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[11] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[14] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # LEFT-EDGE/11 )/6 (/7 # LEFT-EDGE/14 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIs/1 ]] }
        refalrts::reinit_number(context[8], 3UL);
        refalrts::reinit_ident(context[1], identifiers[ident_AsIs]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OverlapItem/4 (/5 # RIGHT-EDGE/11 )/6 (/7 # RIGHT-EDGE/14 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[11] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[14] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # RIGHT-EDGE/11 )/6 (/7 # RIGHT-EDGE/14 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/8 HalfReuse: # AsIs/1 ]] }
      refalrts::reinit_number(context[8], 3UL);
      refalrts::reinit_ident(context[1], identifiers[ident_AsIs]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & OverlapItem/4 (/5 # LEFT-EDGE/11 )/6 t.Other#1/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[11] ) )
        continue;
      //DEBUG: t.Other#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # LEFT-EDGE/11 )/6 t.Other#1/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_NoOverlap]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OverlapItem/4 (/5 # RIGHT-EDGE/11 )/6 t.Other#1/7 >/1
    if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[11] ) )
      continue;
    //DEBUG: t.Other#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 (/5 # RIGHT-EDGE/11 )/6 t.Other#1/7 {REMOVED TILE}
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
    // </0 & OverlapItem/4 t.AnyItem#1/5 '*'/7 >/1
    if( ! refalrts::char_term( '*', context[7] ) )
      continue;
    //DEBUG: t.AnyItem#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OverlapItem/4 t.AnyItem#1/5 '*'/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_NoOverlap]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OverlapItem/4 '*'/5 t.AnyItem#1/7 >/1
  if( ! refalrts::char_term( '*', context[5] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.AnyItem#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OverlapItem/4 '*'/5 t.AnyItem#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoOverlap/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_NoOverlap]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OverlapItem("OverlapItem", COOKIE1_, COOKIE2_, func_OverlapItem);


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
      res = refalrts::splice_evar( res, context[0], context[0] );
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

  // </0 & Map@1/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@1/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


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

  // </0 & Map@2/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@2/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_MapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & MapAccum@1/4 t.Acc#1/5 e.Tail#1/2 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 AsIs: t.Acc#1/5 AsIs: e.Tail#1/2 HalfReuse: (/1 } )/7 >/8 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", COOKIE1_, COOKIE2_, func_gen_MapAccum_Z1);


static refalrts::FnResult func_gen_Reduce_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
      // </0 & Reduce@1/4 s.Weight#2/5 (/9 s.IndexP#2/15 s.IndexR#2/16 s.ItemWeight#2/17 s.Ident#2/18 )/10 e.Tail#1/11 >/1
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.IndexP#2/15 s.IndexR#2/16 s.ItemWeight#2/17 s.Ident#2/18 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@1/4 } </19 & Add/20 Tile{ AsIs: s.Weight#2/5 HalfReuse: s.ItemWeight2 #17/9 } Tile{ HalfReuse: >/10 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_Add]);
      refalrts::reinit_svar( context[9], context[17] );
      refalrts::reinit_close_call(context[10]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[10];
      res = refalrts::splice_evar( res, context[5], context[9] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
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
    //RESULT: Tile{ [[ } </13 & Reduce@1/14 Tile{ AsIs: </0 Reuse: & FoldTileW$1\1*1/4 AsIs: t.Acc#1/5 AsIs: t.Next#1/9 } >/15 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_Z1]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::update_name(context[4], functions[efunc_gen_FoldTileW_S1L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@1/4 t.Acc#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z1("Reduce@1", COOKIE1_, COOKIE2_, func_gen_Reduce_Z1);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & DoMapAccum@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoMapAccum@1/4 t.new#1/9 e.new#2/2 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoMapAccum@1/4 t.new#4/9 t.new#5/15 e.new#6/11 (/7 e.new#7/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.new#7 as range 13
    context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.new#6 as range 11
    do {
      // </0 & DoMapAccum@1/4 (/9 s.MaxWeight#2/25 s.IndexP#2/26 s.IndexR#2/27 e.3#0/21 )/10 (/15 s.Weight#2/28 s.CurIndexP#2/29 s.CurIndexR#2/30 e.6#0/23 )/16 e.Tail#1/17 (/7 e.Scanned#1/19 )/8 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      if( ! refalrts::brackets_term( context[21], context[22], context[9] ) )
        continue;
      context[23] = 0;
      context[24] = 0;
      if( ! refalrts::brackets_term( context[23], context[24], context[15] ) )
        continue;
      // closed e.Tail#1 as range 17
      // closed e.Scanned#1 as range 19
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
      //DEBUG: e.Tail#1: 17
      //DEBUG: e.Scanned#1: 19
      //DEBUG: s.MaxWeight#2: 25
      //DEBUG: s.IndexP#2: 26
      //DEBUG: s.IndexR#2: 27
      //DEBUG: e.3#0: 21
      //DEBUG: s.Weight#2: 28
      //DEBUG: s.CurIndexP#2: 29
      //DEBUG: s.CurIndexR#2: 30
      //DEBUG: e.6#0: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/17 AsIs: (/7 AsIs: e.Scanned#1/19 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: </10 HalfReuse: & FindHeavyTile\1:1/15 AsIs: s.Weight#2/28 AsIs: s.CurIndexP#2/29 AsIs: s.CurIndexR#2/30 } (/31 Tile{ AsIs: e.6#0/23 } Tile{ HalfReuse: )/9 AsIs: s.MaxWeight#2/25 AsIs: s.IndexP#2/26 AsIs: s.IndexR#2/27 } (/32 Tile{ AsIs: e.3#0/21 } )/33 </34 Tile{ Reuse: & TermCompare/4 } s.MaxWeight#2/25/35 s.Weight#2/28/36 >/37 >/38 )/39 >/40 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::copy_stvar(vm, context[35], context[25]);
      refalrts::copy_stvar(vm, context[36], context[28]);
      refalrts::alloc_close_call(vm, context[37]);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_open_call(context[10]);
      refalrts::reinit_name(context[15], functions[efunc_gen_FindHeavyTile_L1B1]);
      refalrts::reinit_close_bracket(context[9]);
      refalrts::update_name(context[4], functions[efunc_TermCompare]);
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[39] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[10] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[34] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::link_brackets( context[31], context[9] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[35], context[40] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      res = refalrts::splice_evar( res, context[9], context[27] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[10], context[30] );
      res = refalrts::splice_evar( res, context[16], context[1] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoMapAccum@1/4 t.Acc#1/9 t.Next#1/15 e.Tail#1/17 (/7 e.Scanned#1/19 )/8 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Tail#1 as range 17
    // closed e.Scanned#1 as range 19
    //DEBUG: t.Acc#1: 9
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 17
    //DEBUG: e.Scanned#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@1/22 Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/19 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & FindHeavyTile\1*1/4 AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/23 )/24 >/25 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_FindHeavyTile_L1D1]);
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[1], context[24] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoMapAccum@1/4 t.Acc#1/9 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  //DEBUG: t.Acc#1: 9
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum@1/4 {REMOVED TILE} (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_Z1);


static refalrts::FnResult func_gen_DoMapAccumm_Aux_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & DoMapAccum-Aux@1/4 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 t.Acc#1/13 e.StepScanned#1/5 )/8 >/1
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
  // closed e.Tail#1 as range 2
  // closed e.Scanned#1 as range 9
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 5
  //DEBUG: e.Tail#1: 2
  //DEBUG: e.Scanned#1: 9
  //DEBUG: t.Acc#1: 13
  //DEBUG: e.StepScanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum@1/4 } Tile{ AsIs: t.Acc#1/13 } Tile{ AsIs: e.Tail#1/2 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: e.StepScanned#1/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z1("DoMapAccum-Aux@1", COOKIE1_, COOKIE2_, func_gen_DoMapAccumm_Aux_Z1);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    // </0 & Map@3/4 s.CurIndexP#2/5 t.Next#1/8 e.Tail#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.Tail#1 as range 6
    //DEBUG: s.CurIndexP#2: 5
    //DEBUG: t.Next#1: 8
    //DEBUG: e.Tail#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FilterPatternPos/4 AsIs: s.CurIndexP#2/5 AsIs: t.Next#1/8 } >/10 </11 & Map@3/12 s.CurIndexP#2/5/13 Tile{ AsIs: e.Tail#1/6 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_gen_Map_Z3]);
    refalrts::copy_stvar(vm, context[13], context[5]);
    refalrts::update_name(context[4], functions[efunc_FilterPatternPos]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 s.CurIndexP#2/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.CurIndexP#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@3/4 s.CurIndexP#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


//End of file
