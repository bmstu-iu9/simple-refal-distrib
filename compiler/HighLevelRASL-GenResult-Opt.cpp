// This file automatically generated from 'HighLevelRASL-GenResult-Opt.ref'
// Don't edit! Edit 'HighLevelRASL-GenResult-Opt.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2644489627_1267806288

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
  efunc_MapAccum = 19,
  efunc_Fetch = 20,
  efunc_Pipe = 21,
  efunc_gen_Pipe_S2L1 = 22,
  efunc_gen_Pipe_S3L1 = 23,
  efunc_GenResultm_Aux = 24,
  efunc_gen_GenResultm_Opt_A2 = 25,
  efunc_AddOffsets = 26,
  efunc_GST = 27,
  efunc_gen_GenResultm_Opt_A1 = 28,
  efunc_FlatResult = 29,
  efunc_PatchClosureLogic = 30,
  efunc_gen_GenResultm_Aux_A1 = 31,
  efunc_TextFromExpr = 32,
  efunc_GenResultm_Allocations = 33,
  efunc_GenResultm_ReinitUpdate = 34,
  efunc_GenPushLink = 35,
  efunc_FlatTilesInResult = 36,
  efunc_GenSplices = 37,
  efunc_CreateElemParam = 38,
  efunc_gen_Map_Z1 = 39,
  efunc_gen_Map_Z2 = 40,
  efunc_gen_Map_Z3 = 41,
  efunc_Reverse = 42,
  efunc_gen_MapAccum_Z1 = 43,
  efunc_gen_GenPushLink_A1 = 44,
  efunc_gen_Map_Z4 = 45,
  efunc_gen_Map_Z5 = 46,
  efunc_BeginOffset = 47,
  efunc_EndOffset = 48,
  efunc_CollectTiles = 49,
  efunc_CalcRes = 50,
  efunc_gen_Map_Z6 = 51,
  efunc_GenTrash = 52,
  efunc_CollectTilesm_Alloc = 53,
  efunc_GetSampleOffset = 54,
  efunc_gen_Map_Z7 = 55,
  efunc_Inc2 = 56,
  efunc_gen_AddOffsets_L1 = 57,
  efunc_CollectStrings = 58,
  efunc_MapReduce = 59,
  efunc_gen_GenResultm_Allocations_L1D5 = 60,
  efunc_gen_GenResultm_ReinitUpdate_L1S1L1D6 = 61,
  efunc_gen_DoMapAccum_Z1 = 62,
  efunc_gen_FlatTilesInResult_L1S1L1D5 = 63,
  efunc_gen_FlatTilesInResult_L1D2 = 64,
  efunc_gen_GenSplices_S1L1D3 = 65,
  efunc_gen_DoMapAccumm_Aux_Z1 = 66,
  efunc_gen_GenPushLink_A1L1D9 = 67,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_CmdResetAllocator = 6,
  ident_CmdNextStep = 7,
  ident_LEFTm_EDGE = 8,
  ident_RIGHTm_EDGE = 9,
  ident_CallBrackets = 10,
  ident_TkOpenCall = 11,
  ident_TkCloseCall = 12,
  ident_Brackets = 13,
  ident_TkOpenBracket = 14,
  ident_TkCloseBracket = 15,
  ident_ADTm_Brackets = 16,
  ident_Symbol = 17,
  ident_Name = 18,
  ident_TkCloseADT = 19,
  ident_TkOpenADT = 20,
  ident_ClosureBrackets = 21,
  ident_TkUnwrappedClosure = 22,
  ident_TkClosureHead = 23,
  ident_CmdComment = 24,
  ident_Tile = 25,
  ident_TkVariableCopy = 26,
  ident_CmdCopyVar = 27,
  ident_TkString = 28,
  ident_CmdCreateElem = 29,
  ident_Allocate = 30,
  ident_ElString = 31,
  ident_AsIs = 32,
  ident_HalfReuse = 33,
  ident_TkVariable = 34,
  ident_CmdReinitSVar = 35,
  ident_Reinit = 36,
  ident_Reuse = 37,
  ident_Update = 38,
  ident_Char = 39,
  ident_ElChar = 40,
  ident_Number = 41,
  ident_ElNumber = 42,
  ident_ElOpenBracket = 43,
  ident_ElCloseBracket = 44,
  ident_ElOpenADT = 45,
  ident_ElCloseADT = 46,
  ident_ElOpenCall = 47,
  ident_ElCloseCall = 48,
  ident_ElName = 49,
  ident_Identifier = 50,
  ident_ElIdent = 51,
  ident_ElClosureHead = 52,
  ident_ElUnwrappedClosure = 53,
  ident_CmdPushStack = 54,
  ident_CmdLinkBrackets = 55,
  ident_PatchCreateUnwrappedClosure = 56,
  ident_CmdWrapClosure = 57,
  ident_CmdInsertVar = 58,
  ident_CmdInsertTile = 59,
  ident_CmdSetRes = 60,
  ident_RemovedTile = 61,
  ident_CmdUseRes = 62,
  ident_CmdTrash = 63,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 2644489627U, 1267806288U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 1267806288UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 2644489627UL);
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
  refalrts::reinit_number(context[5], 2644489627UL);
  refalrts::reinit_number(context[7], 1267806288UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 2644489627U, 1267806288U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 2644489627U, 1267806288U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 2644489627U, 1267806288U, func_Residue);


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

static refalrts::NativeReference nat_ref_Apply("Apply", 2644489627U, 1267806288U, func_Apply);


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

static refalrts::NativeReference nat_ref_Map("Map", 2644489627U, 1267806288U, func_Map);


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

static refalrts::NativeReference nat_ref_Reduce("Reduce", 2644489627U, 1267806288U, func_Reduce);


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

static refalrts::NativeReference nat_ref_Fetch("Fetch", 2644489627U, 1267806288U, func_Fetch);


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

static refalrts::NativeReference nat_ref_MapAccum("MapAccum", 2644489627U, 1267806288U, func_MapAccum);


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

static refalrts::NativeReference nat_ref_DoMapAccum("DoMapAccum", 2644489627U, 1267806288U, func_DoMapAccum);


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

static refalrts::NativeReference nat_ref_DoMapAccumm_Aux("DoMapAccum-Aux", 2644489627U, 1267806288U, func_DoMapAccumm_Aux);


static refalrts::FnResult func_MapReduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
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
  //DEBUG: t.Fn#1: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_MapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MapReduce("MapReduce", 2644489627U, 1267806288U, func_MapReduce);


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

static refalrts::NativeReference nat_ref_UnBracket("UnBracket", 2644489627U, 1267806288U, func_UnBracket);


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

static refalrts::NativeReference nat_ref_DelAccumulator("DelAccumulator", 2644489627U, 1267806288U, func_DelAccumulator);


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

static refalrts::NativeReference nat_ref_Inc("Inc", 2644489627U, 1267806288U, func_Inc);


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

static refalrts::NativeReference nat_ref_Dec("Dec", 2644489627U, 1267806288U, func_Dec);


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

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1("Pipe$2\\1", 2644489627U, 1267806288U, func_gen_Pipe_S2L1);


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

static refalrts::NativeReference nat_ref_gen_Pipe_S3L1("Pipe$3\\1", 2644489627U, 1267806288U, func_gen_Pipe_S3L1);


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

static refalrts::NativeReference nat_ref_Pipe("Pipe", 2644489627U, 1267806288U, func_Pipe);


static refalrts::FnResult func_Seq(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Seq/4 e.Funcs#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Funcs#1 as range 2
  //DEBUG: e.Funcs#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pipe/4 AsIs: e.Funcs#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Pipe]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Seq("Seq", 2644489627U, 1267806288U, func_Seq);


static refalrts::FnResult func_gen_GenResultm_Opt_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GenResult-Opt=2/4 (/7 e.Trash#2/5 )/8 s.ContextOffset#3/9 e.MarkedResult#3/2 >/1
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
  // closed e.Trash#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedResult#3 as range 2
  //DEBUG: e.Trash#2: 5
  //DEBUG: s.ContextOffset#3: 9
  //DEBUG: e.MarkedResult#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset#3/9 } (/10 # CmdResetAllocator/11 )/12 Tile{ AsIs: </0 Reuse: & GenResult-Aux/4 AsIs: (/7 AsIs: e.Trash#2/5 AsIs: )/8 } (/13 Tile{ AsIs: e.MarkedResult#3/2 } )/14 >/15 (/16 # CmdNextStep/17 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_ident(vm, context[11], identifiers[ident_CmdResetAllocator]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_CmdNextStep]);
  refalrts::update_name(context[4], functions[efunc_GenResultm_Aux]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[16], context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[10], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Opt_A2("GenResult-Opt=2", 2644489627U, 1267806288U, func_gen_GenResultm_Opt_A2);


static refalrts::FnResult func_gen_GenResultm_Opt_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & GenResult-Opt=1/4 s.ContextOffset#1/17 (/15 e.PatternVars#1/13 )/16 (/11 e.Trash#2/9 )/12 (/7 e.MarkedResult#2/5 )/8 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.PatternVars#1 as range 13
  // closed e.Trash#2 as range 9
  // closed e.MarkedResult#2 as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.PatternVars#1: 13
  //DEBUG: e.Trash#2: 9
  //DEBUG: e.MarkedResult#2: 5
  //DEBUG: s.ContextOffset#1: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 } & GenResult-Opt=2/18 Tile{ AsIs: (/11 AsIs: e.Trash#2/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & AddOffsets/4 AsIs: s.ContextOffset#1/17 AsIs: (/15 AsIs: e.PatternVars#1/13 AsIs: )/16 } Tile{ AsIs: e.MarkedResult#2/5 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[18], functions[efunc_gen_GenResultm_Opt_A2]);
  refalrts::reinit_open_call(context[7]);
  refalrts::update_name(context[4], functions[efunc_AddOffsets]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Opt_A1("GenResult-Opt=1", 2644489627U, 1267806288U, func_gen_GenResultm_Opt_A1);


static refalrts::FnResult func_GenResultm_Opt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & GenResult-Opt/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 (/12 e.MarkedPattern#1/10 )/13 e.Result#1/2 >/1
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
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.PatternVars#1 as range 6
  // closed e.MarkedPattern#1 as range 10
  // closed e.Result#1 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: e.PatternVars#1: 6
  //DEBUG: e.MarkedPattern#1: 10
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult-Opt=1/4 AsIs: s.ContextOffset#1/5 AsIs: (/8 AsIs: e.PatternVars#1/6 AsIs: )/9 HalfReuse: </12 } & GST/14 (/15 (/16 # LEFT-EDGE/17 )/18 Tile{ AsIs: e.MarkedPattern#1/10 } (/19 # RIGHT-EDGE/20 )/21 )/22 (/23 (/24 # LEFT-EDGE/25 )/26 </27 Tile{ HalfReuse: & FlatResult/13 AsIs: e.Result#1/2 AsIs: >/1 } (/28 # RIGHT-EDGE/29 )/30 )/31 >/32 >/33 Tile{ ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_GST]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_LEFTm_EDGE]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_RIGHTm_EDGE]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_ident(vm, context[25], identifiers[ident_LEFTm_EDGE]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_ident(vm, context[29], identifiers[ident_RIGHTm_EDGE]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_close_bracket(vm, context[31]);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Opt_A1]);
  refalrts::reinit_open_call(context[12]);
  refalrts::reinit_name(context[13], functions[efunc_FlatResult]);
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[23], context[31] );
  refalrts::link_brackets( context[28], context[30] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[27] );
  refalrts::link_brackets( context[24], context[26] );
  refalrts::link_brackets( context[15], context[22] );
  refalrts::link_brackets( context[19], context[21] );
  refalrts::link_brackets( context[16], context[18] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[28], context[33] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[19], context[27] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Opt("GenResult-Opt", 0U, 0U, func_GenResultm_Opt);


static refalrts::FnResult func_FlatResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & FlatResult/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & FlatResult/4 e.Range-B#1/7 (/13 # CallBrackets/15 e.SubRange#1/11 )/14 e.Range-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_CallBrackets], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.SubRange#1 as range 11
      // closed e.Range-E#1 as range 9
      //DEBUG: e.Range-B#1: 7
      //DEBUG: e.SubRange#1: 11
      //DEBUG: e.Range-E#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range-B#1/7 HalfReuse: >/13 HalfReuse: (/15 } # TkOpenCall/16 )/17 </18 & FlatResult/19 Tile{ AsIs: e.SubRange#1/11 } >/20 (/21 # TkCloseCall/22 )/23 </24 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[16], identifiers[ident_TkOpenCall]);
      refalrts::alloc_close_bracket(vm, context[17]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_FlatResult]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::alloc_ident(vm, context[22], identifiers[ident_TkCloseCall]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::reinit_name(context[14], functions[efunc_FlatResult]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[21], context[23] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[18] );
      refalrts::link_brackets( context[15], context[17] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[20], context[24] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FlatResult/4 e.Range-B#1/7 (/13 # Brackets/15 e.SubRange#1/11 )/14 e.Range-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Brackets], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.SubRange#1 as range 11
      // closed e.Range-E#1 as range 9
      //DEBUG: e.Range-B#1: 7
      //DEBUG: e.SubRange#1: 11
      //DEBUG: e.Range-E#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range-B#1/7 HalfReuse: >/13 HalfReuse: (/15 } # TkOpenBracket/16 )/17 </18 & FlatResult/19 Tile{ AsIs: e.SubRange#1/11 } >/20 (/21 # TkCloseBracket/22 )/23 </24 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[16], identifiers[ident_TkOpenBracket]);
      refalrts::alloc_close_bracket(vm, context[17]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_FlatResult]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::alloc_ident(vm, context[22], identifiers[ident_TkCloseBracket]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::reinit_name(context[14], functions[efunc_FlatResult]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[21], context[23] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[18] );
      refalrts::link_brackets( context[15], context[17] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[20], context[24] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FlatResult/4 e.Range-B#1/7 (/13 # ADT-Brackets/15 (/18 e.Name#1/16 )/19 e.SubRange#1/11 )/14 e.Range-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.Name#1 as range 16
      // closed e.SubRange#1 as range 11
      // closed e.Range-E#1 as range 9
      //DEBUG: e.Range-B#1: 7
      //DEBUG: e.Name#1: 16
      //DEBUG: e.SubRange#1: 11
      //DEBUG: e.Range-E#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range-B#1/7 HalfReuse: >/13 HalfReuse: (/15 HalfReuse: # TkOpenADT/18 } Tile{ AsIs: )/19 } (/20 # Symbol/21 # Name/22 Tile{ AsIs: e.Name#1/16 } )/23 </24 & FlatResult/25 Tile{ AsIs: e.SubRange#1/11 } >/26 (/27 # TkCloseADT/28 )/29 </30 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E#1/9 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[20]);
      refalrts::alloc_ident(vm, context[21], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[22], identifiers[ident_Name]);
      refalrts::alloc_close_bracket(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_FlatResult]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_ident(vm, context[28], identifiers[ident_TkCloseADT]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::reinit_ident(context[18], identifiers[ident_TkOpenADT]);
      refalrts::reinit_name(context[14], functions[efunc_FlatResult]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[30] );
      refalrts::link_brackets( context[27], context[29] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[20], context[23] );
      refalrts::link_brackets( context[15], context[19] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[26], context[30] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[20], context[22] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FlatResult/4 e.Range-B#1/7 (/13 # ClosureBrackets/15 e.SubRange#1/11 )/14 e.Range-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_ClosureBrackets], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.SubRange#1 as range 11
      // closed e.Range-E#1 as range 9
      //DEBUG: e.Range-B#1: 7
      //DEBUG: e.SubRange#1: 11
      //DEBUG: e.Range-E#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Range-B#1/7 } Tile{ AsIs: (/13 Reuse: # TkClosureHead/15 } )/16 Tile{ AsIs: </0 AsIs: & FlatResult/4 } Tile{ AsIs: e.SubRange#1/11 } >/17 (/18 # TkUnwrappedClosure/19 )/20 </21 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E#1/9 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[16]);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::alloc_ident(vm, context[19], identifiers[ident_TkUnwrappedClosure]);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::update_ident(context[15], identifiers[ident_TkClosureHead]);
      refalrts::reinit_name(context[14], functions[efunc_FlatResult]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[18], context[20] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[17], context[21] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlatResult/4 e.Range#1/2 >/1
  // closed e.Range#1 as range 2
  //DEBUG: e.Range#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FlatResult/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Range#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlatResult("FlatResult", 2644489627U, 1267806288U, func_FlatResult);


static refalrts::FnResult func_gen_GenResultm_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & GenResult-Aux=1/4 e.Commands#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Commands#2 as range 2
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PatchClosureLogic/4 AsIs: e.Commands#2/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_PatchClosureLogic]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Aux_A1("GenResult-Aux=1", 2644489627U, 1267806288U, func_gen_GenResultm_Aux_A1);


static refalrts::FnResult func_GenResultm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & GenResult-Aux/4 (/7 e.Trash#1/5 )/8 (/11 e.MarkedResult#1/9 )/12 >/1
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
  // closed e.Trash#1 as range 5
  // closed e.MarkedResult#1 as range 9
  //DEBUG: e.Trash#1: 5
  //DEBUG: e.MarkedResult#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & GenResult-Aux=1/14 (/15 # CmdComment/16"TRASH:"/17 </19 & TextFromExpr/20 e.Trash#1/5/21 >/23 )/24 (/25 # CmdComment/26"RESULT:"/27 </29 & TextFromExpr/30 e.MarkedResult#1/9/31 >/33 )/34 </35 & GenResult-Allocations/36 e.MarkedResult#1/9/37 >/39 </40 & GenResult-ReinitUpdate/41 e.MarkedResult#1/9/42 >/44 </45 & GenPushLink/46 </47 Tile{ HalfReuse: & FlatTilesInResult/11 AsIs: e.MarkedResult#1/9 HalfReuse: >/12 AsIs: >/1 } Tile{ AsIs: </0 Reuse: & GenSplices/4 AsIs: (/7 AsIs: e.Trash#1/5 AsIs: )/8 } e.MarkedResult#1/9/48 >/50 >/51 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_GenResultm_Aux_A1]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_CmdComment]);
  refalrts::alloc_chars(vm, context[17], context[18], "TRASH:", 6);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_TextFromExpr]);
  refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_ident(vm, context[26], identifiers[ident_CmdComment]);
  refalrts::alloc_chars(vm, context[27], context[28], "RESULT:", 7);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_TextFromExpr]);
  refalrts::copy_evar(vm, context[31], context[32], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_GenResultm_Allocations]);
  refalrts::copy_evar(vm, context[37], context[38], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::alloc_open_call(vm, context[40]);
  refalrts::alloc_name(vm, context[41], functions[efunc_GenResultm_ReinitUpdate]);
  refalrts::copy_evar(vm, context[42], context[43], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[44]);
  refalrts::alloc_open_call(vm, context[45]);
  refalrts::alloc_name(vm, context[46], functions[efunc_GenPushLink]);
  refalrts::alloc_open_call(vm, context[47]);
  refalrts::copy_evar(vm, context[48], context[49], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[50]);
  refalrts::alloc_close_call(vm, context[51]);
  refalrts::reinit_name(context[11], functions[efunc_FlatTilesInResult]);
  refalrts::reinit_close_call(context[12]);
  refalrts::update_name(context[4], functions[efunc_GenSplices]);
  refalrts::push_stack( vm, context[51] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[50] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[45] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[47] );
  refalrts::push_stack( vm, context[44] );
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[35] );
  refalrts::link_brackets( context[25], context[34] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[15], context[24] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[50], context[51] );
  res = refalrts::splice_evar( res, context[48], context[49] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[13], context[47] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Aux("GenResult-Aux", 2644489627U, 1267806288U, func_GenResultm_Aux);


static refalrts::FnResult func_gen_GenResultm_Allocations_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & GenResult-Allocations\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenResult-Allocations\1/4 (/7 e.new#1/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & GenResult-Allocations\1/4 (/7 s.new#2/11 e.new#3/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#3 as range 9
    do {
      // </0 & GenResult-Allocations\1/4 (/7 # Tile/11 e.Tile#2/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Tile], context[11] ) )
        continue;
      // closed e.Tile#2 as range 12
      //DEBUG: e.Tile#2: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenResult-Allocations\1/4 (/7 # Tile/11 e.Tile#2/12 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenResult-Allocations\1/4 (/7 s.new#4/11 e.new#5/12 s.new#6/14 )/8 >/1
    context[12] = context[9];
    context[13] = context[10];
    if( ! refalrts::svar_right( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#5 as range 12
    do {
      // </0 & GenResult-Allocations\1/4 (/7 # TkVariableCopy/11 s.new#8/17 e.new#9/15 s.new#10/19 s.new#11/18 s.new#7/14 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_TkVariableCopy], context[11] ) )
        continue;
      if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_right( context[18], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_right( context[19], context[15], context[16] ) )
        continue;
      // closed e.new#9 as range 15
      do {
        // </0 & GenResult-Allocations\1/4 (/7 # TkVariableCopy/11 't'/17 e.Index#2/20 s.Level#2/19 s.SampleOffset#2/18 s.Offset#2/14 )/8 >/1
        context[20] = context[15];
        context[21] = context[16];
        if( ! refalrts::char_term( 't', context[17] ) )
          continue;
        // closed e.Index#2 as range 20
        //DEBUG: s.Level#2: 19
        //DEBUG: s.SampleOffset#2: 18
        //DEBUG: s.Offset#2: 14
        //DEBUG: e.Index#2: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & GenResult-Allocations\1/4 {REMOVED TILE} e.Index#2/20 s.Level#2/19 s.SampleOffset#2/18 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCopyVar/11 Reuse: 'e'/17 } Tile{ AsIs: s.Offset#2/14 HalfReuse: s.SampleOffset2 #18/8 HalfReuse: )/1 ]] }
        refalrts::update_ident(context[11], identifiers[ident_CmdCopyVar]);
        refalrts::update_char(context[17], 'e');
        refalrts::reinit_svar( context[8], context[18] );
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[7], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_evar( res, context[7], context[17] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenResult-Allocations\1/4 (/7 # TkVariableCopy/11 s.Mode#2/17 e.Index#2/20 s.Level#2/19 s.SampleOffset#2/18 s.Offset#2/14 )/8 >/1
      context[20] = context[15];
      context[21] = context[16];
      // closed e.Index#2 as range 20
      //DEBUG: s.Mode#2: 17
      //DEBUG: s.Level#2: 19
      //DEBUG: s.SampleOffset#2: 18
      //DEBUG: s.Offset#2: 14
      //DEBUG: e.Index#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenResult-Allocations\1/4 {REMOVED TILE} e.Index#2/20 s.Level#2/19 s.SampleOffset#2/18 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCopyVar/11 AsIs: s.Mode#2/17 } Tile{ AsIs: s.Offset#2/14 HalfReuse: s.SampleOffset2 #18/8 HalfReuse: )/1 ]] }
      refalrts::update_ident(context[11], identifiers[ident_CmdCopyVar]);
      refalrts::reinit_svar( context[8], context[18] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[7], context[17] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenResult-Allocations\1/4 (/7 # TkString/11 e.String#2/15 s.Offset#2/14 )/8 >/1
    context[15] = context[12];
    context[16] = context[13];
    if( ! refalrts::ident_term( identifiers[ident_TkString], context[11] ) )
      continue;
    // closed e.String#2 as range 15
    //DEBUG: s.Offset#2: 14
    //DEBUG: e.String#2: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset2 #14/11 } Tile{ HalfReuse: # ElString/8 } Tile{ AsIs: e.String#2/15 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
    refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_ident(context[8], identifiers[ident_ElString]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-Allocations\1/4 (/7 e.Elem#2/5 )/8 >/1
  // closed e.Elem#2 as range 5
  //DEBUG: e.Elem#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # CmdCreateElem/10 Tile{ HalfReuse: # Allocate/0 HalfReuse: </4 HalfReuse: & CreateElemParam/7 AsIs: e.Elem#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_CmdCreateElem]);
  refalrts::reinit_ident(context[0], identifiers[ident_Allocate]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_CreateElemParam]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[9], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Allocations_L1("GenResult-Allocations\\1", 2644489627U, 1267806288U, func_gen_GenResultm_Allocations_L1);


static refalrts::FnResult func_GenResultm_Allocations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & GenResult-Allocations/4 e.MarkedResult#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.MarkedResult#1 as range 2
  //DEBUG: e.MarkedResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: e.MarkedResult#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Allocations("GenResult-Allocations", 2644489627U, 1267806288U, func_GenResultm_Allocations);


static refalrts::FnResult func_gen_GenResultm_ReinitUpdate_L1S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & GenResult-ReinitUpdate\1$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 s.new#3/9 t.new#4/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    do {
      // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # AsIs/9 t.Item#3/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_AsIs], context[9] ) )
        continue;
      //DEBUG: t.Item#3: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # AsIs/9 t.Item#3/12 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 s.new#5/9 (/12 e.new#6/14 )/13 )/8 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    // closed e.new#6 as range 14
    do {
      // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # HalfReuse/9 (/12 e.new#7/16 )/13 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[9] ) )
        continue;
      // closed e.new#7 as range 16
      do {
        // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # HalfReuse/9 (/12 # TkVariable/20 's'/21 e.Index#3/18 s.SampleOffset#3/23 s.Offset#3/22 )/13 )/8 >/1
        context[18] = context[16];
        context[19] = context[17];
        context[20] = refalrts::ident_left( identifiers[ident_TkVariable], context[18], context[19] );
        if( ! context[20] )
          continue;
        context[21] = refalrts::char_left( 's', context[18], context[19] );
        if( ! context[21] )
          continue;
        if( ! refalrts::svar_right( context[22], context[18], context[19] ) )
          continue;
        if( ! refalrts::svar_right( context[23], context[18], context[19] ) )
          continue;
        // closed e.Index#3 as range 18
        //DEBUG: s.Offset#3: 22
        //DEBUG: s.SampleOffset#3: 23
        //DEBUG: e.Index#3: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & GenResult-ReinitUpdate\1$1\1/4 {REMOVED TILE} e.Index#3/18 s.SampleOffset#3/23 s.Offset#3/22 )/13 )/8 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdReinitSVar/9 HalfReuse: s.Offset3 #22/12 HalfReuse: s.SampleOffset3 #23/20 HalfReuse: )/21 } Tile{ ]] }
        refalrts::update_ident(context[9], identifiers[ident_CmdReinitSVar]);
        refalrts::reinit_svar( context[12], context[22] );
        refalrts::reinit_svar( context[20], context[23] );
        refalrts::reinit_close_bracket(context[21]);
        refalrts::link_brackets( context[7], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[21] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # HalfReuse/9 (/12 e.Elem#3/18 )/13 )/8 >/1
      context[18] = context[16];
      context[19] = context[17];
      // closed e.Elem#3 as range 18
      //DEBUG: e.Elem#3: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Reinit/7 HalfReuse: </9 HalfReuse: & CreateElemParam/12 AsIs: e.Elem#3/18 HalfReuse: >/13 AsIs: )/8 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[7], identifiers[ident_Reinit]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[12], functions[efunc_CreateElemParam]);
      refalrts::reinit_close_call(context[13]);
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # Reuse/9 (/12 e.Elem#3/16 )/13 )/8 >/1
    context[16] = context[14];
    context[17] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_Reuse], context[9] ) )
      continue;
    // closed e.Elem#3 as range 16
    //DEBUG: e.Elem#3: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Update/7 HalfReuse: </9 HalfReuse: & CreateElemParam/12 AsIs: e.Elem#3/16 HalfReuse: >/13 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
    refalrts::reinit_ident(context[7], identifiers[ident_Update]);
    refalrts::reinit_open_call(context[9]);
    refalrts::reinit_name(context[12], functions[efunc_CreateElemParam]);
    refalrts::reinit_close_call(context[13]);
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 s.new#3/9 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # LEFT-EDGE/9 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[9] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # LEFT-EDGE/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # RIGHT-EDGE/9 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[9] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # RIGHT-EDGE/9 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_ReinitUpdate_L1S1L1("GenResult-ReinitUpdate\\1$1\\1", 2644489627U, 1267806288U, func_gen_GenResultm_ReinitUpdate_L1S1L1);


static refalrts::FnResult func_gen_GenResultm_ReinitUpdate_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & GenResult-ReinitUpdate\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenResult-ReinitUpdate\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenResult-ReinitUpdate\1/4 (/5 # Tile/9 e.Tile#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_Tile], context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.Tile#2 as range 7
    //DEBUG: e.Tile#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 # Tile/9 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 } Tile{ AsIs: e.Tile#2/7 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-ReinitUpdate\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenResult-ReinitUpdate\1/4 t.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_ReinitUpdate_L1("GenResult-ReinitUpdate\\1", 2644489627U, 1267806288U, func_gen_GenResultm_ReinitUpdate_L1);


static refalrts::FnResult func_GenResultm_ReinitUpdate(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & GenResult-ReinitUpdate/4 e.MarkedResult#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.MarkedResult#1 as range 2
  //DEBUG: e.MarkedResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 AsIs: e.MarkedResult#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_ReinitUpdate("GenResult-ReinitUpdate", 2644489627U, 1267806288U, func_GenResultm_ReinitUpdate);


static refalrts::FnResult func_CreateElemParam(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CreateElemParam/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateElemParam/4 s.new#1/5 e.new#2/2 s.new#3/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CreateElemParam/4 # Symbol/5 s.new#5/9 s.new#6/10 s.new#4/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & CreateElemParam/4 # Symbol/5 # Char/9 s.Char#1/10 s.Offset#1/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Char], context[9] ) )
        continue;
      //DEBUG: s.Char#1: 10
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 {REMOVED TILE} s.Offset#1/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #6/5 Reuse: # ElChar/9 AsIs: s.Char#1/10 } Tile{ ]] }
      refalrts::reinit_svar( context[5], context[6] );
      refalrts::update_ident(context[9], identifiers[ident_ElChar]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[10] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CreateElemParam/4 # Symbol/5 # Number/9 s.Number#1/10 s.Offset#1/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_Number], context[9] ) )
      continue;
    //DEBUG: s.Number#1: 10
    //DEBUG: s.Offset#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 {REMOVED TILE} s.Offset#1/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #6/5 Reuse: # ElNumber/9 AsIs: s.Number#1/10 } Tile{ ]] }
    refalrts::reinit_svar( context[5], context[6] );
    refalrts::update_ident(context[9], identifiers[ident_ElNumber]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateElemParam/4 s.new#4/5 s.new#5/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & CreateElemParam/4 # TkOpenBracket/5 s.Offset#1/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[5] ) )
        continue;
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkOpenBracket/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenBracket/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ElOpenBracket]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkCloseBracket/5 s.Offset#1/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[5] ) )
        continue;
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkCloseBracket/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseBracket/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ElCloseBracket]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkOpenADT/5 s.Offset#1/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[5] ) )
        continue;
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkOpenADT/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenADT/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ElOpenADT]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkCloseADT/5 s.Offset#1/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[5] ) )
        continue;
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkCloseADT/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseADT/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ElCloseADT]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkOpenCall/5 s.Offset#1/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[5] ) )
        continue;
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkOpenCall/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenCall/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ElOpenCall]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CreateElemParam/4 # TkCloseCall/5 s.Offset#1/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[5] ) )
      continue;
    //DEBUG: s.Offset#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkCloseCall/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseCall/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_ElCloseCall]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateElemParam/4 # Symbol/5 s.new#5/9 e.new#6/7 s.new#4/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Symbol], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#6 as range 7
    do {
      // </0 & CreateElemParam/4 # Symbol/5 # Name/9 e.Name#1/10 s.Offset#1/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Name], context[9] ) )
        continue;
      // closed e.Name#1 as range 10
      //DEBUG: s.Offset#1: 6
      //DEBUG: e.Name#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # Symbol/5 # Name/9 {REMOVED TILE} s.Offset#1/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: s.Offset1 #6/0 HalfReuse: # ElName/4 } Tile{ AsIs: e.Name#1/10 } Tile{ ]] }
      refalrts::reinit_svar( context[0], context[6] );
      refalrts::reinit_ident(context[4], identifiers[ident_ElName]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CreateElemParam/4 # Symbol/5 # Identifier/9 e.Name#1/10 s.Offset#1/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_Identifier], context[9] ) )
      continue;
    // closed e.Name#1 as range 10
    //DEBUG: s.Offset#1: 6
    //DEBUG: e.Name#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Symbol/5 # Identifier/9 {REMOVED TILE} s.Offset#1/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Offset1 #6/0 HalfReuse: # ElIdent/4 } Tile{ AsIs: e.Name#1/10 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[6] );
    refalrts::reinit_ident(context[4], identifiers[ident_ElIdent]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateElemParam/4 s.new#4/5 s.new#5/6 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CreateElemParam/4 # TkClosureHead/5 s.Offset#1/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[5] ) )
      continue;
    //DEBUG: s.Offset#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkClosureHead/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElClosureHead/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_ElClosureHead]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateElemParam/4 # TkUnwrappedClosure/5 s.Offset#1/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[5] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Offset#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkUnwrappedClosure/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElUnwrappedClosure/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_ElUnwrappedClosure]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateElemParam("CreateElemParam", 2644489627U, 1267806288U, func_CreateElemParam);


static refalrts::FnResult func_gen_GenPushLink_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & GenPushLink=1/4 (/7 )/8 e.Commands#2/2 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenPushLink=1/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Reverse/8 AsIs: e.Commands#2/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_Reverse]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenPushLink_A1("GenPushLink=1", 2644489627U, 1267806288U, func_gen_GenPushLink_A1);


static refalrts::FnResult func_gen_GenPushLink_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & GenPushLink=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenPushLink=1\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 e.new#3/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 9
  do {
    // </0 & GenPushLink=1\1/4 (/7 e.new#4/14 )/8 (/11 s.new#5/13 s.new#6/18 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.new#4 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/19 )/8 (/11 # TkOpenCall/13 s.Offset#2/18 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[13] ) )
        continue;
      // closed e.Stack#2 as range 19
      //DEBUG: s.Offset#2: 18
      //DEBUG: e.Stack#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenPushLink=1\1/4 {REMOVED TILE} # TkOpenCall/13 s.Offset#2/18 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/19 HalfReuse: s.Offset2 #18/8 HalfReuse: )/11 } Tile{ ]] }
      refalrts::reinit_svar( context[8], context[18] );
      refalrts::reinit_close_bracket(context[11]);
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/19 )/8 (/11 # TkOpenADT/13 s.Offset#2/18 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[13] ) )
        continue;
      // closed e.Stack#2 as range 19
      //DEBUG: s.Offset#2: 18
      //DEBUG: e.Stack#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenPushLink=1\1/4 {REMOVED TILE} # TkOpenADT/13 s.Offset#2/18 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/19 HalfReuse: s.Offset2 #18/8 HalfReuse: )/11 } Tile{ ]] }
      refalrts::reinit_svar( context[8], context[18] );
      refalrts::reinit_close_bracket(context[11]);
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/19 )/8 (/11 # TkOpenBracket/13 s.Offset#2/18 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[13] ) )
        continue;
      // closed e.Stack#2 as range 19
      //DEBUG: s.Offset#2: 18
      //DEBUG: e.Stack#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenPushLink=1\1/4 {REMOVED TILE} # TkOpenBracket/13 s.Offset#2/18 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/19 HalfReuse: s.Offset2 #18/8 HalfReuse: )/11 } Tile{ ]] }
      refalrts::reinit_svar( context[8], context[18] );
      refalrts::reinit_close_bracket(context[11]);
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/19 )/8 (/11 # TkClosureHead/13 s.Offset#2/18 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[13] ) )
        continue;
      // closed e.Stack#2 as range 19
      //DEBUG: s.Offset#2: 18
      //DEBUG: e.Stack#2: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenPushLink=1\1/4 {REMOVED TILE} # TkClosureHead/13 s.Offset#2/18 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/19 HalfReuse: s.Offset2 #18/8 HalfReuse: )/11 } Tile{ ]] }
      refalrts::reinit_svar( context[8], context[18] );
      refalrts::reinit_close_bracket(context[11]);
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenPushLink=1\1/4 (/7 e.new#7/19 s.new#8/21 )/8 (/11 s.new#9/13 s.new#10/18 )/12 >/1
    context[19] = context[14];
    context[20] = context[15];
    if( ! refalrts::svar_right( context[21], context[19], context[20] ) )
      continue;
    // closed e.new#7 as range 19
    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/22 s.OpenOffset#2/21 )/8 (/11 # TkCloseCall/13 s.Offset#2/18 )/12 >/1
      context[22] = context[19];
      context[23] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[13] ) )
        continue;
      // closed e.Stack#2 as range 22
      //DEBUG: s.OpenOffset#2: 21
      //DEBUG: s.Offset#2: 18
      //DEBUG: e.Stack#2: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/22 } Tile{ HalfReuse: )/4 AsIs: (/7 } Tile{ HalfReuse: # CmdPushStack/1 } Tile{ AsIs: s.OpenOffset#2/21 AsIs: )/8 AsIs: (/11 Reuse: # CmdPushStack/13 AsIs: s.Offset#2/18 AsIs: )/12 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdPushStack]);
      refalrts::update_ident(context[13], identifiers[ident_CmdPushStack]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[0], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[4], context[7] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/22 s.OpenOffset#2/21 )/8 (/11 # TkCloseADT/13 s.Offset#2/18 )/12 >/1
      context[22] = context[19];
      context[23] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[13] ) )
        continue;
      // closed e.Stack#2 as range 22
      //DEBUG: s.OpenOffset#2: 21
      //DEBUG: s.Offset#2: 18
      //DEBUG: e.Stack#2: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & GenPushLink=1\1/4 (/7 {REMOVED TILE} s.OpenOffset#2/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/22 } Tile{ HalfReuse: )/1 } Tile{ HalfReuse: (/8 HalfReuse: # CmdLinkBrackets/11 HalfReuse: s.OpenOffset2 #21/13 AsIs: s.Offset#2/18 AsIs: )/12 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[11], identifiers[ident_CmdLinkBrackets]);
      refalrts::reinit_svar( context[13], context[21] );
      refalrts::link_brackets( context[8], context[12] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/22 s.OpenOffset#2/21 )/8 (/11 # TkCloseBracket/13 s.Offset#2/18 )/12 >/1
      context[22] = context[19];
      context[23] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[13] ) )
        continue;
      // closed e.Stack#2 as range 22
      //DEBUG: s.OpenOffset#2: 21
      //DEBUG: s.Offset#2: 18
      //DEBUG: e.Stack#2: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & GenPushLink=1\1/4 (/7 {REMOVED TILE} s.OpenOffset#2/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/22 } Tile{ HalfReuse: )/1 } Tile{ HalfReuse: (/8 HalfReuse: # CmdLinkBrackets/11 HalfReuse: s.OpenOffset2 #21/13 AsIs: s.Offset#2/18 AsIs: )/12 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[11], identifiers[ident_CmdLinkBrackets]);
      refalrts::reinit_svar( context[13], context[21] );
      refalrts::link_brackets( context[8], context[12] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/22 s.HeadOffset#2/21 )/8 (/11 # TkUnwrappedClosure/13 s.Offset#2/18 )/12 >/1
    context[22] = context[19];
    context[23] = context[20];
    if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[13] ) )
      continue;
    // closed e.Stack#2 as range 22
    //DEBUG: s.HeadOffset#2: 21
    //DEBUG: s.Offset#2: 18
    //DEBUG: e.Stack#2: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/22 } Tile{ HalfReuse: )/4 AsIs: (/7 } # PatchCreateUnwrappedClosure/24 Tile{ AsIs: s.HeadOffset#2/21 } Tile{ HalfReuse: s.Offset2 #18/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdWrapClosure/13 AsIs: s.Offset#2/18 AsIs: )/12 } Tile{ ]] }
    refalrts::alloc_ident(vm, context[24], identifiers[ident_PatchCreateUnwrappedClosure]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_svar( context[1], context[18] );
    refalrts::update_ident(context[13], identifiers[ident_CmdWrapClosure]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/5 )/8 (/11 s.tag#2/13 e.Info#2/9 )/12 >/1
  // closed e.Stack#2 as range 5
  // closed e.Info#2 as range 9
  //DEBUG: s.tag#2: 13
  //DEBUG: e.Stack#2: 5
  //DEBUG: e.Info#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenPushLink=1\1/4 {REMOVED TILE} (/11 s.tag#2/13 e.Info#2/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenPushLink_A1L1("GenPushLink=1\\1", 2644489627U, 1267806288U, func_gen_GenPushLink_A1L1);


static refalrts::FnResult func_GenPushLink(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & GenPushLink/4 e.MarkedResult#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.MarkedResult#1 as range 2
  //DEBUG: e.MarkedResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenPushLink=1/4 } </5 & MapAccum@1/6 (/7 )/8 Tile{ AsIs: e.MarkedResult#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_MapAccum_Z1]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_GenPushLink_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenPushLink("GenPushLink", 2644489627U, 1267806288U, func_GenPushLink);


static refalrts::FnResult func_PatchClosureLogic(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & PatchClosureLogic/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & PatchClosureLogic/4 e.Commands-B#1/7 (/13 # CmdWrapClosure/15 s.Offset#1/16 )/14 e.Commands-E#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_CmdWrapClosure], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Commands-E#1 as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.Commands-B#1: 7
      //DEBUG: e.Commands-E#1: 9
      //DEBUG: s.Offset#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & PatchClosureLogic/4 } Tile{ AsIs: e.Commands-B#1/7 } Tile{ AsIs: e.Commands-E#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: (/13 AsIs: # CmdWrapClosure/15 AsIs: s.Offset#1/16 AsIs: )/14 } Tile{ ]] }
      refalrts::link_brackets( context[13], context[14] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PatchClosureLogic/4 e.new#1/5 t.new#2/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_right( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#1 as range 5
    do {
      // </0 & PatchClosureLogic/4 e.Commands-B#1/16 (/22 # CmdCreateElem/24 s.CreateMode#1/27 s.Offset#1/26 # ElUnwrappedClosure/25 )/23 e.Commands-E#1/18 (/7 # PatchCreateUnwrappedClosure/13 s.HeadOffset#1/14 s.Offset#1/15 )/8 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_PatchCreateUnwrappedClosure], context[11], context[12] );
      if( ! context[13] )
        continue;
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[18] = context[9];
        context[19] = context[10];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left( identifiers[ident_CmdCreateElem], context[20], context[21] );
        if( ! context[24] )
          continue;
        context[25] = refalrts::ident_right( identifiers[ident_ElUnwrappedClosure], context[20], context[21] );
        if( ! context[25] )
          continue;
        if( ! refalrts::repeated_stvar_right( vm, context[26], context[15], context[20], context[21] ) )
          continue;
        // closed e.Commands-E#1 as range 18
        if( ! refalrts::svar_left( context[27], context[20], context[21] ) )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        //DEBUG: s.HeadOffset#1: 14
        //DEBUG: s.Offset#1: 15
        //DEBUG: e.Commands-B#1: 16
        //DEBUG: e.Commands-E#1: 18
        //DEBUG: s.CreateMode#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 # PatchCreateUnwrappedClosure/13 s.HeadOffset#1/14 s.Offset#1/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & PatchClosureLogic/4 AsIs: e.Commands-B#1/16 AsIs: (/22 AsIs: # CmdCreateElem/24 AsIs: s.CreateMode#1/27 AsIs: s.Offset#1/26 AsIs: # ElUnwrappedClosure/25 HalfReuse: s.HeadOffset1 #14/23 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Commands-E#1/18 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_svar( context[23], context[14] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[22], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        refalrts::splice_to_freelist_open( vm, context[23], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[16], context[17], context[9], context[10] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PatchClosureLogic/4 e.Commands#1/9 t.OtherCommand#1/7 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Commands#1 as range 9
    //DEBUG: t.OtherCommand#1: 7
    //DEBUG: e.Commands#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & PatchClosureLogic/4 } Tile{ AsIs: e.Commands#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: t.OtherCommand#1/7 } Tile{ ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PatchClosureLogic/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PatchClosureLogic/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchClosureLogic("PatchClosureLogic", 2644489627U, 1267806288U, func_PatchClosureLogic);


static refalrts::FnResult func_Reverse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Reverse/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Reverse/4 e.Items#1/5 t.Last#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_right( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Items#1 as range 5
    //DEBUG: t.Last#1: 7
    //DEBUG: e.Items#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Last#1/7 } Tile{ AsIs: </0 AsIs: & Reverse/4 } Tile{ AsIs: e.Items#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reverse/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reverse/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Reverse("Reverse", 2644489627U, 1267806288U, func_Reverse);


static refalrts::FnResult func_gen_FlatTilesInResult_L1S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FlatTilesInResult\1$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FlatTilesInResult\1$1\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & FlatTilesInResult\1$1\1/4 (/7 s.new#3/9 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & FlatTilesInResult\1$1\1/4 (/7 # RIGHT-EDGE/9 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1$1\1/4 (/7 # RIGHT-EDGE/9 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FlatTilesInResult\1$1\1/4 (/7 # LEFT-EDGE/9 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[9] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1$1\1/4 (/7 # LEFT-EDGE/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlatTilesInResult\1$1\1/4 (/7 s.new#3/9 t.new#4/10 )/8 >/1
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FlatTilesInResult\1$1\1/4 (/7 # AsIs/9 t.Item#3/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_AsIs], context[9] ) )
      continue;
    //DEBUG: t.Item#3: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1$1\1/4 (/7 # AsIs/9 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#3/10 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FlatTilesInResult\1$1\1/4 (/7 # HalfReuse/9 t.Item#3/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[9] ) )
      continue;
    //DEBUG: t.Item#3: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1$1\1/4 (/7 # HalfReuse/9 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#3/10 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlatTilesInResult\1$1\1/4 (/7 # Reuse/9 t.Item#3/10 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_Reuse], context[9] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Item#3: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1$1\1/4 (/7 # Reuse/9 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#3/10 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FlatTilesInResult_L1S1L1("FlatTilesInResult\\1$1\\1", 2644489627U, 1267806288U, func_gen_FlatTilesInResult_L1S1L1);


static refalrts::FnResult func_gen_FlatTilesInResult_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FlatTilesInResult\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FlatTilesInResult\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & FlatTilesInResult\1/4 (/7 # Tile/9 e.Tile#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Tile], context[9] ) )
      continue;
    // closed e.Tile#2 as range 10
    //DEBUG: e.Tile#2: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # Tile/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 } Tile{ AsIs: e.Tile#2/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlatTilesInResult\1/4 (/7 s.tag#2/9 e.info#2/5 )/8 >/1
  // closed e.info#2 as range 5
  //DEBUG: s.tag#2: 9
  //DEBUG: e.info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.tag#2/9 AsIs: e.info#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FlatTilesInResult_L1("FlatTilesInResult\\1", 2644489627U, 1267806288U, func_gen_FlatTilesInResult_L1);


static refalrts::FnResult func_FlatTilesInResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FlatTilesInResult/4 e.Result#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Result#1 as range 2
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@5/4 AsIs: e.Result#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlatTilesInResult("FlatTilesInResult", 2644489627U, 1267806288U, func_FlatTilesInResult);


static refalrts::FnResult func_gen_GenSplices_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & GenSplices$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenSplices$1\1/4 (/7 e.new#1/5 t.new#2/9 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & GenSplices$1\1/4 (/7 t.new#3/9 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & GenSplices$1\1/4 (/7 (/9 # AsIs/13 (/16 # TkVariable/18 'e'/19 e.Index#2/14 s.Depth#2/21 s.Offset#2/20 )/17 )/10 )/8 >/1
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_AsIs], context[11], context[12] );
      if( ! context[13] )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      context[18] = refalrts::ident_left( identifiers[ident_TkVariable], context[14], context[15] );
      if( ! context[18] )
        continue;
      context[19] = refalrts::char_left( 'e', context[14], context[15] );
      if( ! context[19] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_right( context[20], context[14], context[15] ) )
        continue;
      if( ! refalrts::svar_right( context[21], context[14], context[15] ) )
        continue;
      // closed e.Index#2 as range 14
      //DEBUG: s.Offset#2: 20
      //DEBUG: s.Depth#2: 21
      //DEBUG: e.Index#2: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenSplices$1\1/4 (/7 (/9 # AsIs/13 {REMOVED TILE} e.Index#2/14 s.Depth#2/21 {REMOVED TILE} )/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/16 Reuse: # CmdInsertVar/18 AsIs: 'e'/19 } Tile{ AsIs: s.Offset#2/20 AsIs: )/17 } Tile{ ]] }
      refalrts::update_ident(context[18], identifiers[ident_CmdInsertVar]);
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[17] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenSplices$1\1/4 (/7 t.OneItem#2/9 )/8 >/1
    //DEBUG: t.OneItem#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/11 # CmdInsertTile/12 </13 & BeginOffset/14 t.OneItem#2/9/15 Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & EndOffset/7 AsIs: t.OneItem#2/9 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[11]);
    refalrts::alloc_ident(vm, context[12], identifiers[ident_CmdInsertTile]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_BeginOffset]);
    refalrts::copy_evar(vm, context[15], context[16], context[9], context[10]);
    refalrts::reinit_close_call(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_EndOffset]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[11], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenSplices$1\1/4 (/7 t.Begin#2/11 e.Inner#2/5 t.End#2/9 )/8 >/1
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Inner#2 as range 5
  //DEBUG: t.End#2: 9
  //DEBUG: t.Begin#2: 11
  //DEBUG: e.Inner#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Inner#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 Tile{ HalfReuse: # CmdInsertTile/0 HalfReuse: </4 HalfReuse: & BeginOffset/7 AsIs: t.Begin#2/11 } >/14 </15 & EndOffset/16 Tile{ AsIs: t.End#2/9 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_EndOffset]);
  refalrts::reinit_ident(context[0], identifiers[ident_CmdInsertTile]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_BeginOffset]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[13], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenSplices_S1L1("GenSplices$1\\1", 2644489627U, 1267806288U, func_gen_GenSplices_S1L1);


static refalrts::FnResult func_GenSplices(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & GenSplices/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenSplices/4 (/7 e.new#1/5 )/8 e.new#2/2 (/11 # Tile/13 e.new#3/9 )/12 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = refalrts::ident_left( identifiers[ident_Tile], context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  // closed e.new#3 as range 9
  do {
    // </0 & GenSplices/4 (/7 e.Trash#1/14 )/8 (/22 # Tile/24 e.LeftTile#1/20 )/23 e.Result#1/16 (/11 # Tile/13 e.RightTile#1/18 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = context[9];
    context[19] = context[10];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left( identifiers[ident_Tile], context[20], context[21] );
    if( ! context[24] )
      continue;
    // closed e.Trash#1 as range 14
    // closed e.LeftTile#1 as range 20
    // closed e.Result#1 as range 16
    // closed e.RightTile#1 as range 18
    //DEBUG: e.Trash#1: 14
    //DEBUG: e.LeftTile#1: 20
    //DEBUG: e.Result#1: 16
    //DEBUG: e.RightTile#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/25 # CmdSetRes/26 Tile{ HalfReuse: </11 HalfReuse: & CalcRes/13 AsIs: e.RightTile#1/18 HalfReuse: >/12 HalfReuse: )/1 } Tile{ AsIs: </0 Reuse: & Map@6/4 HalfReuse: </7 } & CollectTiles/27 Tile{ AsIs: e.Result#1/16 } >/28 >/29 Tile{ HalfReuse: </8 HalfReuse: & GenTrash/22 HalfReuse: (/24 AsIs: e.LeftTile#1/20 AsIs: )/23 } Tile{ AsIs: e.Trash#1/14 } >/30 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_ident(vm, context[26], identifiers[ident_CmdSetRes]);
    refalrts::alloc_name(vm, context[27], functions[efunc_CollectTiles]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::reinit_open_call(context[11]);
    refalrts::reinit_name(context[13], functions[efunc_CalcRes]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z6]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[22], functions[efunc_GenTrash]);
    refalrts::reinit_open_bracket(context[24]);
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[8] );
    refalrts::link_brackets( context[24], context[23] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[7] );
    refalrts::link_brackets( context[25], context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[8], context[23] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenSplices/4 (/7 # RemovedTile/14 )/8 (/11 # Tile/13 e.OneTile#1/9 )/12 >/1
  context[14] = refalrts::ident_left( identifiers[ident_RemovedTile], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OneTile#1 as range 9
  //DEBUG: e.OneTile#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenSplices/4 (/7 # RemovedTile/14 )/8 (/11 # Tile/13 e.OneTile#1/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenSplices("GenSplices", 2644489627U, 1267806288U, func_GenSplices);


static refalrts::FnResult func_CalcRes(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CalcRes/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CalcRes/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CalcRes/4 (/5 # RIGHT-EDGE/9 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left( identifiers[ident_RIGHTm_EDGE], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CalcRes/4 (/5 # RIGHT-EDGE/9 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # RIGHT-EDGE/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_RIGHTm_EDGE]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CalcRes/4 t.First#1/5 e.Tile#1/2 >/1
  // closed e.Tile#1 as range 2
  //DEBUG: t.First#1: 5
  //DEBUG: e.Tile#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Tile#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BeginOffset/4 AsIs: t.First#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_BeginOffset]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CalcRes("CalcRes", 2644489627U, 1267806288U, func_CalcRes);


static refalrts::FnResult func_CollectTiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & CollectTiles/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CollectTiles/4 (/9 # Tile/11 e.Tile#1/7 )/10 e.Other#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_Tile], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Tile#1 as range 7
    // closed e.Other#1 as range 5
    //DEBUG: e.Tile#1: 7
    //DEBUG: e.Other#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other#1/5 } Tile{ HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Tile#1/7 AsIs: )/10 } Tile{ ]] }
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::link_brackets( context[11], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles/4 e.Allocated#1/7 (/13 # Tile/15 e.Tile#1/11 )/14 e.Other#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left( identifiers[ident_Tile], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Tile#1 as range 11
      // closed e.Other#1 as range 9
      //DEBUG: e.Allocated#1: 7
      //DEBUG: e.Tile#1: 11
      //DEBUG: e.Other#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other#1/9 } Tile{ HalfReuse: >/13 HalfReuse: (/15 AsIs: e.Tile#1/11 AsIs: )/14 } </16 & CollectTiles-Alloc/17 Tile{ AsIs: e.Allocated#1/7 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[16]);
      refalrts::alloc_name(vm, context[17], functions[efunc_CollectTilesm_Alloc]);
      refalrts::reinit_close_call(context[13]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::link_brackets( context[15], context[14] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CollectTiles/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CollectTiles/4 e.Allocated#1/2 >/1
  // closed e.Allocated#1 as range 2
  //DEBUG: e.Allocated#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CollectTiles-Alloc/4 AsIs: e.Allocated#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CollectTilesm_Alloc]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectTiles("CollectTiles", 2644489627U, 1267806288U, func_CollectTiles);


static refalrts::FnResult func_CollectTilesm_Alloc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & CollectTiles-Alloc/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CollectTiles-Alloc/4 (/9 # TkVariableCopy/11 'e'/12 e.Index#1/7 s.Level#1/15 s.Sample#1/14 s.Offset#1/13 )/10 e.Alloc#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_TkVariableCopy], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( 'e', context[7], context[8] );
    if( ! context[12] )
      continue;
    // closed e.Alloc#1 as range 5
    if( ! refalrts::svar_right( context[13], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[14], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[7], context[8] ) )
      continue;
    // closed e.Index#1 as range 7
    //DEBUG: e.Alloc#1: 5
    //DEBUG: s.Offset#1: 13
    //DEBUG: s.Sample#1: 14
    //DEBUG: s.Level#1: 15
    //DEBUG: e.Index#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </16 & CollectTiles-Alloc/17 Tile{ AsIs: e.Alloc#1/5 } Tile{ HalfReuse: >/0 HalfReuse: (/4 AsIs: (/9 AsIs: # TkVariableCopy/11 AsIs: 'e'/12 AsIs: e.Index#1/7 AsIs: s.Level#1/15 AsIs: s.Sample#1/14 AsIs: s.Offset#1/13 AsIs: )/10 } Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_CollectTilesm_Alloc]);
    refalrts::reinit_close_call(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[4], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles-Alloc/4 e.Alloc#1/5 (/9 # TkVariableCopy/11 'e'/12 e.Index#1/7 s.Level#1/15 s.Sample#1/14 s.Offset#1/13 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_TkVariableCopy], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( 'e', context[7], context[8] );
    if( ! context[12] )
      continue;
    // closed e.Alloc#1 as range 5
    if( ! refalrts::svar_right( context[13], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[14], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[7], context[8] ) )
      continue;
    // closed e.Index#1 as range 7
    //DEBUG: e.Alloc#1: 5
    //DEBUG: s.Offset#1: 13
    //DEBUG: s.Sample#1: 14
    //DEBUG: s.Level#1: 15
    //DEBUG: e.Index#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 Tile{ AsIs: (/9 AsIs: # TkVariableCopy/11 AsIs: 'e'/12 AsIs: e.Index#1/7 AsIs: s.Level#1/15 AsIs: s.Sample#1/14 AsIs: s.Offset#1/13 AsIs: )/10 HalfReuse: )/1 } Tile{ AsIs: </0 AsIs: & CollectTiles-Alloc/4 } Tile{ AsIs: e.Alloc#1/5 } >/17 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles-Alloc/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CollectTiles-Alloc/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CollectTiles-Alloc/4 e.Alloc#1/2 >/1
  // closed e.Alloc#1 as range 2
  //DEBUG: e.Alloc#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: e.Alloc#1/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectTilesm_Alloc("CollectTiles-Alloc", 2644489627U, 1267806288U, func_CollectTilesm_Alloc);


static refalrts::FnResult func_GenTrash(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GenTrash/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenTrash/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & GenTrash/4 (/7 e.LeftTile#1/9 )/8 e.Trash-B#1/13 # RemovedTile/17 e.Trash-E#1/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.LeftTile#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = refalrts::ident_left( identifiers[ident_RemovedTile], context[15], context[16] );
      if( ! context[17] )
        continue;
      // closed e.Trash-E#1 as range 15
      //DEBUG: e.LeftTile#1: 9
      //DEBUG: e.Trash-B#1: 13
      //DEBUG: e.Trash-E#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} # RemovedTile/17 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & GenTrash/4 AsIs: (/7 AsIs: e.LeftTile#1/9 AsIs: )/8 } Tile{ AsIs: e.Trash-B#1/13 } Tile{ AsIs: e.Trash-E#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenTrash/4 (/7 e.LeftTile#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.LeftTile#1 as range 9
    //DEBUG: e.LeftTile#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.LeftTile#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdUseRes/4 HalfReuse: )/7 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdUseRes]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenTrash/4 (/7 e.new#4/5 t.new#5/9 )/8 e.new#3/2 >/1
  // closed e.new#3 as range 2
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & GenTrash/4 (/7 (/9 # LEFT-EDGE/15 )/10 )/8 e.Trash#1/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    context[15] = refalrts::ident_left( identifiers[ident_LEFTm_EDGE], context[13], context[14] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Trash#1 as range 11
    //DEBUG: e.Trash#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenTrash/4 {REMOVED TILE} )/8 e.Trash#1/11 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 HalfReuse: # CmdTrash/9 AsIs: # LEFT-EDGE/15 AsIs: )/10 } Tile{ ]] }
    refalrts::reinit_ident(context[9], identifiers[ident_CmdTrash]);
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenTrash/4 (/7 e.LeftTile#1/5 t.Last#1/9 )/8 e.Trash#1/2 >/1
  // closed e.LeftTile#1 as range 5
  // closed e.Trash#1 as range 2
  //DEBUG: t.Last#1: 9
  //DEBUG: e.LeftTile#1: 5
  //DEBUG: e.Trash#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.LeftTile#1/5 {REMOVED TILE} e.Trash#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdTrash/4 HalfReuse: </7 } & EndOffset/11 Tile{ AsIs: t.Last#1/9 HalfReuse: >/8 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_name(vm, context[11], functions[efunc_EndOffset]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdTrash]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenTrash("GenTrash", 2644489627U, 1267806288U, func_GenTrash);


static refalrts::FnResult func_BeginOffset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & BeginOffset/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & BeginOffset/4 (/7 s.new#1/9 e.new#2/5 t.new#3/10 )/8 >/1
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
  context[11] = refalrts::tvar_right( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & BeginOffset/4 (/7 s.new#4/9 t.new#5/10 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & BeginOffset/4 (/7 # AsIs/9 t.Item#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_AsIs], context[9] ) )
        continue;
      //DEBUG: t.Item#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # AsIs/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & BeginOffset/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[9] ) )
        continue;
      //DEBUG: t.Item#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # HalfReuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & BeginOffset/4 (/7 # Reuse/9 t.Item#1/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Reuse], context[9] ) )
      continue;
    //DEBUG: t.Item#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # Reuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & BeginOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1
  if( ! refalrts::svar_term( context[10], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#1 as range 5
  //DEBUG: s.Offset#1: 10
  //DEBUG: s.Tag#1: 9
  //DEBUG: e.Info#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & BeginOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
  refalrts::reinit_svar( context[1], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BeginOffset("BeginOffset", 2644489627U, 1267806288U, func_BeginOffset);


static refalrts::FnResult func_EndOffset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & EndOffset/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EndOffset/4 (/7 s.new#1/9 e.new#2/5 t.new#3/10 )/8 >/1
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
  context[11] = refalrts::tvar_right( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & EndOffset/4 (/7 s.new#4/9 t.new#5/10 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & EndOffset/4 (/7 # AsIs/9 t.Item#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_AsIs], context[9] ) )
        continue;
      //DEBUG: t.Item#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # AsIs/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EndOffset/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[9] ) )
        continue;
      //DEBUG: t.Item#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # HalfReuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EndOffset/4 (/7 # Reuse/9 t.Item#1/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Reuse], context[9] ) )
      continue;
    //DEBUG: t.Item#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # Reuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EndOffset/4 (/7 s.new#4/9 e.new#6/5 s.new#5/10 )/8 >/1
  if( ! refalrts::svar_term( context[10], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 5
  do {
    // </0 & EndOffset/4 (/7 s.new#7/9 s.new#9/14 e.new#10/12 s.new#11/15 s.new#8/10 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[12], context[13] ) )
      continue;
    // closed e.new#10 as range 12
    do {
      // </0 & EndOffset/4 (/7 s.new#12/9 's'/14 e.new#15/16 s.new#14/15 s.new#13/10 )/8 >/1
      context[16] = context[12];
      context[17] = context[13];
      if( ! refalrts::char_term( 's', context[14] ) )
        continue;
      // closed e.new#15 as range 16
      do {
        // </0 & EndOffset/4 (/7 # TkVariable/9 's'/14 e.Index#1/18 s.Depth#1/15 s.Offset#1/10 )/8 >/1
        context[18] = context[16];
        context[19] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
          continue;
        // closed e.Index#1 as range 18
        //DEBUG: s.Depth#1: 15
        //DEBUG: s.Offset#1: 10
        //DEBUG: e.Index#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & EndOffset/4 (/7 # TkVariable/9 's'/14 e.Index#1/18 s.Depth#1/15 s.Offset#1/10 )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
        refalrts::reinit_svar( context[1], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & EndOffset/4 (/7 # TkVariableCopy/9 's'/14 e.Index#1/18 s.Depth#1/20 s.Sample#1/15 s.Offset#1/10 )/8 >/1
      context[18] = context[16];
      context[19] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_TkVariableCopy], context[9] ) )
        continue;
      if( ! refalrts::svar_right( context[20], context[18], context[19] ) )
        continue;
      // closed e.Index#1 as range 18
      //DEBUG: s.Sample#1: 15
      //DEBUG: s.Offset#1: 10
      //DEBUG: s.Depth#1: 20
      //DEBUG: e.Index#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & EndOffset/4 (/7 # TkVariableCopy/9 's'/14 e.Index#1/18 s.Depth#1/20 s.Sample#1/15 s.Offset#1/10 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
      refalrts::reinit_svar( context[1], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EndOffset/4 (/7 # TkVariable/9 s.Mode#1/14 e.Index#1/16 s.Depth#1/15 s.Offset#1/10 )/8 >/1
      context[16] = context[12];
      context[17] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
        continue;
      // closed e.Index#1 as range 16
      //DEBUG: s.Mode#1: 14
      //DEBUG: s.Depth#1: 15
      //DEBUG: s.Offset#1: 10
      //DEBUG: e.Index#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/14 e.Index#1/16 s.Depth#1/15 s.Offset#1/10 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/7 HalfReuse: s.Offset1 #10/9 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::reinit_number(context[7], 1UL);
      refalrts::reinit_svar( context[9], context[10] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EndOffset/4 (/7 # TkVariableCopy/9 s.Mode#1/14 e.Index#1/16 s.Depth#1/18 s.Sample#1/15 s.Offset#1/10 )/8 >/1
    context[16] = context[12];
    context[17] = context[13];
    if( ! refalrts::ident_term( identifiers[ident_TkVariableCopy], context[9] ) )
      continue;
    if( ! refalrts::svar_right( context[18], context[16], context[17] ) )
      continue;
    // closed e.Index#1 as range 16
    //DEBUG: s.Mode#1: 14
    //DEBUG: s.Sample#1: 15
    //DEBUG: s.Offset#1: 10
    //DEBUG: s.Depth#1: 18
    //DEBUG: e.Index#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/14 e.Index#1/16 s.Depth#1/18 s.Sample#1/15 s.Offset#1/10 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/7 HalfReuse: s.Offset1 #10/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_number(context[7], 1UL);
    refalrts::reinit_svar( context[9], context[10] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EndOffset/4 (/7 # TkString/9 e.String#1/12 s.Offset#1/10 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TkString], context[9] ) )
      continue;
    // closed e.String#1 as range 12
    //DEBUG: s.Offset#1: 10
    //DEBUG: e.String#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.String#1/12 s.Offset#1/10 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/7 HalfReuse: s.Offset1 #10/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_number(context[7], 1UL);
    refalrts::reinit_svar( context[9], context[10] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EndOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1
  // closed e.Info#1 as range 5
  //DEBUG: s.Tag#1: 9
  //DEBUG: s.Offset#1: 10
  //DEBUG: e.Info#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EndOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
  refalrts::reinit_svar( context[1], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EndOffset("EndOffset", 2644489627U, 1267806288U, func_EndOffset);


static refalrts::FnResult func_gen_AddOffsets_L1S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & AddOffsets\1$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddOffsets\1$1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & AddOffsets\1$1\1/4 (/7 e.PatternVars#1/11 )/8 (/9 # HalfReuse/15 (/18 # TkVariable/20 's'/21 e.Index#3/16 s.Level#3/23 s.Offset#3/22 )/19 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    context[15] = refalrts::ident_left( identifiers[ident_HalfReuse], context[13], context[14] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left( identifiers[ident_TkVariable], context[16], context[17] );
    if( ! context[20] )
      continue;
    context[21] = refalrts::char_left( 's', context[16], context[17] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.PatternVars#1 as range 11
    if( ! refalrts::svar_right( context[22], context[16], context[17] ) )
      continue;
    if( ! refalrts::svar_right( context[23], context[16], context[17] ) )
      continue;
    // closed e.Index#3 as range 16
    //DEBUG: e.PatternVars#1: 11
    //DEBUG: s.Offset#3: 22
    //DEBUG: s.Level#3: 23
    //DEBUG: e.Index#3: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # HalfReuse/15 AsIs: (/18 AsIs: # TkVariable/20 HalfReuse: </21 } Tile{ HalfReuse: & GetSampleOffset/7 AsIs: e.PatternVars#1/11 HalfReuse: (/8 } Tile{ HalfReuse: 's'/4 } Tile{ AsIs: e.Index#3/16 } Tile{ AsIs: s.Level#3/23 } Tile{ HalfReuse: )/0 } Tile{ AsIs: >/1 } Tile{ AsIs: s.Offset#3/22 AsIs: )/19 AsIs: )/10 } Tile{ ]] }
    refalrts::reinit_open_call(context[21]);
    refalrts::reinit_name(context[7], functions[efunc_GetSampleOffset]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_char(context[4], 's');
    refalrts::reinit_close_bracket(context[0]);
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[8], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[10] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddOffsets\1$1\1/4 (/7 e.PatternVars#1/5 )/8 t.Other#3/9 >/1
  // closed e.PatternVars#1 as range 5
  //DEBUG: t.Other#3: 9
  //DEBUG: e.PatternVars#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AddOffsets\1$1\1/4 (/7 e.PatternVars#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#3/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddOffsets_L1S1L1("AddOffsets\\1$1\\1", 2644489627U, 1267806288U, func_gen_AddOffsets_L1S1L1);


static refalrts::FnResult func_gen_AddOffsets_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & AddOffsets\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddOffsets\1/4 (/7 e.new#1/5 )/8 s.new#2/13 (/11 s.new#3/14 e.new#4/9 )/12 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 9
  do {
    // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/15 )/8 s.Offset#2/13 (/11 # Tile/14 e.Tile#2/17 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_Tile], context[14] ) )
      continue;
    // closed e.PatternVars#1 as range 15
    // closed e.Tile#2 as range 17
    //DEBUG: s.Offset#2: 13
    //DEBUG: e.PatternVars#1: 15
    //DEBUG: e.Tile#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#2/13 AsIs: (/11 } Tile{ HalfReuse: # Tile/7 } Tile{ AsIs: </0 Reuse: & Map@7/4 } Tile{ AsIs: e.PatternVars#1/15 } Tile{ HalfReuse: (/14 AsIs: e.Tile#2/17 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_ident(context[7], identifiers[ident_Tile]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z7]);
    refalrts::reinit_open_bracket(context[14]);
    refalrts::link_brackets( context[11], context[8] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[13], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AddOffsets\1/4 (/7 e.new#6/15 )/8 s.new#5/13 (/11 # TkVariable/14 s.new#7/19 e.new#8/17 s.new#9/20 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[14] ) )
      continue;
    // closed e.new#6 as range 15
    if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_right( context[20], context[17], context[18] ) )
      continue;
    // closed e.new#8 as range 17
    do {
      // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/21 )/8 s.Offset#2/13 (/11 # TkVariable/14 's'/19 e.Index#2/23 s.Level#2/20 )/12 >/1
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      if( ! refalrts::char_term( 's', context[19] ) )
        continue;
      // closed e.PatternVars#1 as range 21
      // closed e.Index#2 as range 23
      //DEBUG: s.Offset#2: 13
      //DEBUG: s.Level#2: 20
      //DEBUG: e.PatternVars#1: 21
      //DEBUG: e.Index#2: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 1/25 >/26 Tile{ HalfReuse: (/8 } # TkVariableCopy/27 </28 & GetSampleOffset/29 Tile{ AsIs: e.PatternVars#1/21 } Tile{ HalfReuse: (/14 AsIs: 's'/19 AsIs: e.Index#2/23 AsIs: s.Level#2/20 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
      refalrts::alloc_number(vm, context[25], 1UL);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_ident(vm, context[27], identifiers[ident_TkVariableCopy]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_GetSampleOffset]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::reinit_svar( context[7], context[13] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::link_brackets( context[8], context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[28] );
      refalrts::link_brackets( context[14], context[12] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[11] );
      res = refalrts::splice_evar( res, context[14], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/21 )/8 s.Offset#2/13 (/11 # TkVariable/14 't'/19 e.Index#2/23 s.Level#2/20 )/12 >/1
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      if( ! refalrts::char_term( 't', context[19] ) )
        continue;
      // closed e.PatternVars#1 as range 21
      // closed e.Index#2 as range 23
      //DEBUG: s.Offset#2: 13
      //DEBUG: s.Level#2: 20
      //DEBUG: e.PatternVars#1: 21
      //DEBUG: e.Index#2: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 2/25 >/26 Tile{ HalfReuse: (/8 } # TkVariableCopy/27 </28 & GetSampleOffset/29 Tile{ AsIs: e.PatternVars#1/21 } Tile{ HalfReuse: (/14 AsIs: 't'/19 AsIs: e.Index#2/23 AsIs: s.Level#2/20 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
      refalrts::alloc_number(vm, context[25], 2UL);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_ident(vm, context[27], identifiers[ident_TkVariableCopy]);
      refalrts::alloc_open_call(vm, context[28]);
      refalrts::alloc_name(vm, context[29], functions[efunc_GetSampleOffset]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::reinit_svar( context[7], context[13] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::link_brackets( context[8], context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[28] );
      refalrts::link_brackets( context[14], context[12] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[11] );
      res = refalrts::splice_evar( res, context[14], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/21 )/8 s.Offset#2/13 (/11 # TkVariable/14 'e'/19 e.Index#2/23 s.Level#2/20 )/12 >/1
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[17];
    context[24] = context[18];
    if( ! refalrts::char_term( 'e', context[19] ) )
      continue;
    // closed e.PatternVars#1 as range 21
    // closed e.Index#2 as range 23
    //DEBUG: s.Offset#2: 13
    //DEBUG: s.Level#2: 20
    //DEBUG: e.PatternVars#1: 21
    //DEBUG: e.Index#2: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 2/25 >/26 Tile{ HalfReuse: (/8 } # TkVariableCopy/27 </28 & GetSampleOffset/29 Tile{ AsIs: e.PatternVars#1/21 } Tile{ HalfReuse: (/14 AsIs: 'e'/19 AsIs: e.Index#2/23 AsIs: s.Level#2/20 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
    refalrts::alloc_number(vm, context[25], 2UL);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_TkVariableCopy]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_GetSampleOffset]);
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_svar( context[7], context[13] );
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_open_bracket(context[14]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::link_brackets( context[8], context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[28] );
    refalrts::link_brackets( context[14], context[12] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[11] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/15 )/8 s.Offset#2/13 (/11 # TkString/14 e.String#2/17 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_TkString], context[14] ) )
      continue;
    // closed e.PatternVars#1 as range 15
    // closed e.String#2 as range 17
    //DEBUG: s.Offset#2: 13
    //DEBUG: e.PatternVars#1: 15
    //DEBUG: e.String#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.PatternVars#1/15 {REMOVED TILE} s.Offset#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 HalfReuse: s.Offset2 #13/7 } Tile{ HalfReuse: >/8 } Tile{ AsIs: (/11 AsIs: # TkString/14 AsIs: e.String#2/17 HalfReuse: s.Offset2 #13/12 HalfReuse: )/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Inc2]);
    refalrts::reinit_svar( context[7], context[13] );
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_svar( context[12], context[13] );
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 s.Tag#2/14 e.Info#2/9 )/12 >/1
  // closed e.PatternVars#1 as range 5
  // closed e.Info#2 as range 9
  //DEBUG: s.Offset#2: 13
  //DEBUG: s.Tag#2: 14
  //DEBUG: e.PatternVars#1: 5
  //DEBUG: e.Info#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.PatternVars#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: 1/7 } Tile{ AsIs: s.Offset#2/13 } Tile{ HalfReuse: >/8 } Tile{ AsIs: (/11 AsIs: s.Tag#2/14 AsIs: e.Info#2/9 HalfReuse: s.Offset2 #13/12 HalfReuse: )/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_number(context[7], 1UL);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_svar( context[12], context[13] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddOffsets_L1("AddOffsets\\1", 2644489627U, 1267806288U, func_gen_AddOffsets_L1);


static refalrts::FnResult func_AddOffsets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & AddOffsets/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 e.MarkedResult#1/2 >/1
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
  // closed e.PatternVars#1 as range 6
  // closed e.MarkedResult#1 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: e.PatternVars#1: 6
  //DEBUG: e.MarkedResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } [*]/10 & AddOffsets\1/11 Tile{ AsIs: (/8 AsIs: e.PatternVars#1/6 AsIs: )/9 } {*}/12 Tile{ AsIs: s.ContextOffset#1/5 } </13 & CollectStrings/14 Tile{ AsIs: e.MarkedResult#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_AddOffsets_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[10]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_CollectStrings]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_MapReduce]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddOffsets("AddOffsets", 2644489627U, 1267806288U, func_AddOffsets);


static refalrts::FnResult func_GetSampleOffset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & GetSampleOffset/4 e.PatternVars-B#1/11 (/17 s.Mode#1/19 (/22 e.Index#1/24 s.Level#1/26 )/23 e.Offsets#1/15 s.SampleOffset#1/27 )/18 e.PatternVars-E#1/13 (/7 s.Mode#1/9 e.Index#1/5 s.Level#1/10 )/8 >/1
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
  if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[13] = context[2];
    context[14] = context[3];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    if( ! refalrts::repeated_stvar_left( vm, context[19], context[9], context[15], context[16] ) )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[15], context[16] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    if( ! refalrts::repeated_evar_left( vm, context[24], context[25], context[5], context[6], context[20], context[21] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[26], context[10], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.PatternVars-E#1 as range 13
    if( ! refalrts::svar_right( context[27], context[15], context[16] ) )
      continue;
    // closed e.Offsets#1 as range 15
    //DEBUG: s.Mode#1: 9
    //DEBUG: s.Level#1: 10
    //DEBUG: e.Index#1: 5
    //DEBUG: e.PatternVars-B#1: 11
    //DEBUG: e.PatternVars-E#1: 13
    //DEBUG: s.SampleOffset#1: 27
    //DEBUG: e.Offsets#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GetSampleOffset/4 e.PatternVars-B#1/11 (/17 s.Mode#1/19 (/22 e.Index#1/24 s.Level#1/26 )/23 e.Offsets#1/15 s.SampleOffset#1/27 )/18 e.PatternVars-E#1/13 (/7 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Mode#1/9 AsIs: e.Index#1/5 AsIs: s.Level#1/10 HalfReuse: s.SampleOffset1 #27/8 } Tile{ ]] }
    refalrts::reinit_svar( context[8], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_GetSampleOffset("GetSampleOffset", 2644489627U, 1267806288U, func_GetSampleOffset);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
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
      // </0 & Map@1/4 (/7 e.new#3/11 )/8 e.new#4/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#3 as range 11
      // closed e.new#4 as range 9
      do {
        // </0 & Map@1/4 (/7 s.new#5/17 e.new#6/13 )/8 e.new#7/15 >/1
        context[13] = context[11];
        context[14] = context[12];
        context[15] = context[9];
        context[16] = context[10];
        // closed e.new#7 as range 15
        if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
          continue;
        // closed e.new#6 as range 13
        do {
          // </0 & Map@1/4 (/7 # Tile/17 e.0#0/18 )/8 e.Tail#1/20 >/1
          context[18] = context[13];
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          if( ! refalrts::ident_term( identifiers[ident_Tile], context[17] ) )
            continue;
          // closed e.0#0 as range 18
          // closed e.Tail#1 as range 20
          //DEBUG: e.0#0: 18
          //DEBUG: e.Tail#1: 20

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & Map@1/4 (/7 # Tile/17 e.0#0/18 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/20 AsIs: >/1 ]] }
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@1/4 (/7 s.new#8/17 e.new#9/18 s.new#10/22 )/8 e.new#11/20 >/1
        context[18] = context[13];
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        // closed e.new#11 as range 20
        if( ! refalrts::svar_right( context[22], context[18], context[19] ) )
          continue;
        // closed e.new#9 as range 18
        do {
          // </0 & Map@1/4 (/7 # TkVariableCopy/17 s.new#13/27 e.new#14/23 s.new#15/29 s.new#16/28 s.new#12/22 )/8 e.new#17/25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::ident_term( identifiers[ident_TkVariableCopy], context[17] ) )
            continue;
          // closed e.new#17 as range 25
          if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
            continue;
          if( ! refalrts::svar_right( context[28], context[23], context[24] ) )
            continue;
          if( ! refalrts::svar_right( context[29], context[23], context[24] ) )
            continue;
          // closed e.new#14 as range 23
          do {
            // </0 & Map@1/4 (/7 # TkVariableCopy/17 't'/27 e.4#0/30 s.Level#2/29 s.SampleOffset#2/28 s.Offset#2/22 )/8 e.Tail#1/32 >/1
            context[30] = context[23];
            context[31] = context[24];
            context[32] = context[25];
            context[33] = context[26];
            if( ! refalrts::char_term( 't', context[27] ) )
              continue;
            // closed e.4#0 as range 30
            // closed e.Tail#1 as range 32
            //DEBUG: s.Level#2: 29
            //DEBUG: s.SampleOffset#2: 28
            //DEBUG: s.Offset#2: 22
            //DEBUG: e.4#0: 30
            //DEBUG: e.Tail#1: 32

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} e.4#0/30 s.Level#2/29 s.SampleOffset#2/28 s.Offset#2/22 {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCopyVar/4 HalfReuse: 'e'/7 HalfReuse: s.Offset2 #22/17 HalfReuse: s.SampleOffset2 #28/27 } )/34 </35 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/32 AsIs: >/1 ]] }
            refalrts::alloc_close_bracket(vm, context[34]);
            refalrts::alloc_open_call(vm, context[35]);
            refalrts::reinit_open_bracket(context[0]);
            refalrts::reinit_ident(context[4], identifiers[ident_CmdCopyVar]);
            refalrts::reinit_char(context[7], 'e');
            refalrts::reinit_svar( context[17], context[22] );
            refalrts::reinit_svar( context[27], context[28] );
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[35] );
            refalrts::link_brackets( context[0], context[34] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[34], context[35] );
            refalrts::splice_to_freelist_open( vm, context[27], res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@1/4 (/7 # TkVariableCopy/17 s.Mode#2/27 e.4#0/30 s.Level#2/29 s.SampleOffset#2/28 s.Offset#2/22 )/8 e.Tail#1/32 >/1
          context[30] = context[23];
          context[31] = context[24];
          context[32] = context[25];
          context[33] = context[26];
          // closed e.4#0 as range 30
          // closed e.Tail#1 as range 32
          //DEBUG: s.Mode#2: 27
          //DEBUG: s.Level#2: 29
          //DEBUG: s.SampleOffset#2: 28
          //DEBUG: s.Offset#2: 22
          //DEBUG: e.4#0: 30
          //DEBUG: e.Tail#1: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.4#0/30 s.Level#2/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCopyVar/17 AsIs: s.Mode#2/27 } Tile{ AsIs: s.Offset#2/22 } Tile{ AsIs: s.SampleOffset#2/28 } Tile{ HalfReuse: )/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/32 AsIs: >/1 ]] }
          refalrts::update_ident(context[17], identifiers[ident_CmdCopyVar]);
          refalrts::reinit_close_bracket(context[4]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[4] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[0], context[0] );
          res = refalrts::splice_evar( res, context[4], context[4] );
          res = refalrts::splice_evar( res, context[28], context[28] );
          res = refalrts::splice_evar( res, context[22], context[22] );
          res = refalrts::splice_evar( res, context[7], context[27] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@1/4 (/7 # TkString/17 e.1#0/23 s.Offset#2/22 )/8 e.Tail#1/25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::ident_term( identifiers[ident_TkString], context[17] ) )
          continue;
        // closed e.1#0 as range 23
        // closed e.Tail#1 as range 25
        //DEBUG: s.Offset#2: 22
        //DEBUG: e.1#0: 23
        //DEBUG: e.Tail#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/22 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset2 #22/17 } # ElString/27 Tile{ AsIs: e.1#0/23 } )/28 </29 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/25 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[27], identifiers[ident_ElString]);
        refalrts::alloc_close_bracket(vm, context[28]);
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
        refalrts::reinit_svar( context[17], context[22] );
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[29] );
        refalrts::link_brackets( context[0], context[28] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[27], context[27] );
        refalrts::splice_to_freelist_open( vm, context[17], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 (/7 e.#0/13 )/8 e.Tail#1/15 >/1
      context[13] = context[11];
      context[14] = context[12];
      context[15] = context[9];
      context[16] = context[10];
      // closed e.#0 as range 13
      // closed e.Tail#1 as range 15
      //DEBUG: e.#0: 13
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 } </17 & CreateElemParam/18 Tile{ AsIs: e.#0/13 } >/19 )/20 </21 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_CreateElemParam]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_close_bracket(vm, context[20]);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
      refalrts::reinit_ident(context[7], identifiers[ident_Allocate]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[0], context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[17], context[18] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult-Allocations\1*5/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_GenResultm_Allocations_L1D5]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", 2644489627U, 1267806288U, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
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
      // </0 & Map@2/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & Map@2/4 (/7 s.new#6/13 t.new#7/18 )/8 e.new#8/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new#8 as range 16
        context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
        if( ! context[19] )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        do {
          // </0 & Map@2/4 (/7 # AsIs/13 t.0#0/18 )/8 e.Tail#1/20 >/1
          context[20] = context[16];
          context[21] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_AsIs], context[13] ) )
            continue;
          // closed e.Tail#1 as range 20
          //DEBUG: t.0#0: 18
          //DEBUG: e.Tail#1: 20

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} & Map@2/4 (/7 # AsIs/13 t.0#0/18 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/20 AsIs: >/1 ]] }
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@2/4 (/7 s.new#9/13 (/18 e.new#10/22 )/19 )/8 e.new#11/20 >/1
        context[20] = context[16];
        context[21] = context[17];
        context[22] = 0;
        context[23] = 0;
        if( ! refalrts::brackets_term( context[22], context[23], context[18] ) )
          continue;
        // closed e.new#10 as range 22
        // closed e.new#11 as range 20
        do {
          // </0 & Map@2/4 (/7 # HalfReuse/13 (/18 e.new#12/24 )/19 )/8 e.new#13/26 >/1
          context[24] = context[22];
          context[25] = context[23];
          context[26] = context[20];
          context[27] = context[21];
          if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[13] ) )
            continue;
          // closed e.new#12 as range 24
          // closed e.new#13 as range 26
          do {
            // </0 & Map@2/4 (/7 # HalfReuse/13 (/18 # TkVariable/32 's'/33 e.6#0/28 s.SampleOffset#3/35 s.Offset#3/34 )/19 )/8 e.Tail#1/30 >/1
            context[28] = context[24];
            context[29] = context[25];
            context[30] = context[26];
            context[31] = context[27];
            context[32] = refalrts::ident_left( identifiers[ident_TkVariable], context[28], context[29] );
            if( ! context[32] )
              continue;
            context[33] = refalrts::char_left( 's', context[28], context[29] );
            if( ! context[33] )
              continue;
            // closed e.Tail#1 as range 30
            if( ! refalrts::svar_right( context[34], context[28], context[29] ) )
              continue;
            if( ! refalrts::svar_right( context[35], context[28], context[29] ) )
              continue;
            // closed e.6#0 as range 28
            //DEBUG: e.Tail#1: 30
            //DEBUG: s.Offset#3: 34
            //DEBUG: s.SampleOffset#3: 35
            //DEBUG: e.6#0: 28

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} </0 & Map@2/4 {REMOVED TILE} e.6#0/28 s.SampleOffset#3/35 s.Offset#3/34 {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdReinitSVar/13 HalfReuse: s.Offset3 #34/18 HalfReuse: s.SampleOffset3 #35/32 HalfReuse: )/33 } Tile{ HalfReuse: </19 HalfReuse: & Map@2/8 AsIs: e.Tail#1/30 AsIs: >/1 ]] }
            refalrts::update_ident(context[13], identifiers[ident_CmdReinitSVar]);
            refalrts::reinit_svar( context[18], context[34] );
            refalrts::reinit_svar( context[32], context[35] );
            refalrts::reinit_close_bracket(context[33]);
            refalrts::reinit_open_call(context[19]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[19] );
            refalrts::link_brackets( context[7], context[33] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[19];
            res = refalrts::splice_evar( res, context[7], context[33] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 (/7 # HalfReuse/13 (/18 e.2#0/28 )/19 )/8 e.Tail#1/30 >/1
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[26];
          context[31] = context[27];
          // closed e.2#0 as range 28
          // closed e.Tail#1 as range 30
          //DEBUG: e.2#0: 28
          //DEBUG: e.Tail#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Reinit/7 HalfReuse: </13 HalfReuse: & CreateElemParam/18 AsIs: e.2#0/28 HalfReuse: >/19 AsIs: )/8 } </32 & Map@2/33 Tile{ AsIs: e.Tail#1/30 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::alloc_name(vm, context[33], functions[efunc_gen_Map_Z2]);
          refalrts::reinit_open_bracket(context[0]);
          refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
          refalrts::reinit_ident(context[7], identifiers[ident_Reinit]);
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[18], functions[efunc_CreateElemParam]);
          refalrts::reinit_close_call(context[19]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[32] );
          refalrts::link_brackets( context[0], context[8] );
          refalrts::push_stack( vm, context[19] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@2/4 (/7 # Reuse/13 (/18 e.2#0/24 )/19 )/8 e.Tail#1/26 >/1
        context[24] = context[22];
        context[25] = context[23];
        context[26] = context[20];
        context[27] = context[21];
        if( ! refalrts::ident_term( identifiers[ident_Reuse], context[13] ) )
          continue;
        // closed e.2#0 as range 24
        // closed e.Tail#1 as range 26
        //DEBUG: e.2#0: 24
        //DEBUG: e.Tail#1: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Update/7 HalfReuse: </13 HalfReuse: & CreateElemParam/18 AsIs: e.2#0/24 HalfReuse: >/19 AsIs: )/8 } </28 & Map@2/29 Tile{ AsIs: e.Tail#1/26 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[28]);
        refalrts::alloc_name(vm, context[29], functions[efunc_gen_Map_Z2]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdCreateElem]);
        refalrts::reinit_ident(context[7], identifiers[ident_Update]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[18], functions[efunc_CreateElemParam]);
        refalrts::reinit_close_call(context[19]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[28] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@2/4 (/7 s.new#6/13 )/8 e.new#7/14 >/1
      context[14] = context[9];
      context[15] = context[10];
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.new#7 as range 14
      do {
        // </0 & Map@2/4 (/7 # LEFT-EDGE/13 )/8 e.Tail#1/16 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[13] ) )
          continue;
        // closed e.Tail#1 as range 16
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Map@2/4 (/7 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & Map@2/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[13];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@2/4 (/7 # RIGHT-EDGE/13 )/8 e.Tail#1/16 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[13] ) )
        continue;
      // closed e.Tail#1 as range 16
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Map@2/4 (/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & Map@2/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult-ReinitUpdate\1$1\1*6/4 AsIs: t.Next#1/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_GenResultm_ReinitUpdate_L1S1L1D6]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", 2644489627U, 1267806288U, func_gen_Map_Z2);


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
  do {
    // </0 & Map@3/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@3/4 (/7 # Tile/13 e.0#0/11 )/8 e.Tail#1/9 >/1
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 } Tile{ AsIs: e.0#0/11 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@3/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
      refalrts::reinit_close_call(context[7]);
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[7], context[13] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Next#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Map@3/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@3/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", 2644489627U, 1267806288U, func_gen_Map_Z3);


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

static refalrts::NativeReference nat_ref_gen_MapAccum_Z1("MapAccum@1", 2644489627U, 1267806288U, func_gen_MapAccum_Z1);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Map@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@4/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@4/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & Map@4/4 (/7 s.new#6/13 )/8 e.new#7/14 >/1
        context[14] = context[9];
        context[15] = context[10];
        if( ! refalrts::empty_seq( context[11], context[12] ) )
          continue;
        // closed e.new#7 as range 14
        do {
          // </0 & Map@4/4 (/7 # RIGHT-EDGE/13 )/8 e.Tail#1/16 >/1
          context[16] = context[14];
          context[17] = context[15];
          if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[13] ) )
            continue;
          // closed e.Tail#1 as range 16
          //DEBUG: e.Tail#1: 16

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Map@4/4 (/7 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & Map@4/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[13];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@4/4 (/7 # LEFT-EDGE/13 )/8 e.Tail#1/16 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[13] ) )
          continue;
        // closed e.Tail#1 as range 16
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & Map@4/4 (/7 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & Map@4/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[13];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@4/4 (/7 s.new#6/13 t.new#7/18 )/8 e.new#8/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.new#8 as range 16
      context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
      if( ! context[19] )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      do {
        // </0 & Map@4/4 (/7 # AsIs/13 t.0#0/18 )/8 e.Tail#1/20 >/1
        context[20] = context[16];
        context[21] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_AsIs], context[13] ) )
          continue;
        // closed e.Tail#1 as range 20
        //DEBUG: t.0#0: 18
        //DEBUG: e.Tail#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} & Map@4/4 (/7 # AsIs/13 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.0#0/18 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail#1/20 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@4/4 (/7 # HalfReuse/13 t.0#0/18 )/8 e.Tail#1/20 >/1
        context[20] = context[16];
        context[21] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[13] ) )
          continue;
        // closed e.Tail#1 as range 20
        //DEBUG: t.0#0: 18
        //DEBUG: e.Tail#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} & Map@4/4 (/7 # HalfReuse/13 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: t.0#0/18 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail#1/20 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@4/4 (/7 # Reuse/13 t.0#0/18 )/8 e.Tail#1/20 >/1
      context[20] = context[16];
      context[21] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_Reuse], context[13] ) )
        continue;
      // closed e.Tail#1 as range 20
      //DEBUG: t.0#0: 18
      //DEBUG: e.Tail#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} & Map@4/4 (/7 # Reuse/13 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.0#0/18 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail#1/20 AsIs: >/1 ]] }
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@4/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatTilesInResult\1$1\1*5/4 AsIs: t.Next#1/7 } >/11 </12 & Map@4/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z4]);
    refalrts::update_name(context[4], functions[efunc_gen_FlatTilesInResult_L1S1L1D5]);
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

  // </0 & Map@4/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@4/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", 2644489627U, 1267806288U, func_gen_Map_Z4);


static refalrts::FnResult func_gen_Map_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Map@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@5/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@5/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & Map@5/4 (/7 # Tile/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Tile], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 } Tile{ AsIs: e.0#0/14 } Tile{ HalfReuse: >/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@5/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
        refalrts::reinit_close_call(context[7]);
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[7], context[13] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@5/4 (/7 s.tag#2/13 e.0#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      // closed e.0#0 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: s.tag#2: 13
      //DEBUG: e.0#0: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.tag#2/13 AsIs: e.0#0/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@5/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FlatTilesInResult\1*2/4 AsIs: t.Next#1/7 } >/11 </12 & Map@5/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z5]);
    refalrts::update_name(context[4], functions[efunc_gen_FlatTilesInResult_L1D2]);
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

  // </0 & Map@5/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@5/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", 2644489627U, 1267806288U, func_gen_Map_Z5);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & Map@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@6/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@6/4 (/7 e.new#3/11 t.new#4/13 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      context[14] = refalrts::tvar_right( context[13], context[11], context[12] );
      if( ! context[14] )
        continue;
      // closed e.new#3 as range 11
      do {
        // </0 & Map@6/4 (/7 t.new#6/13 )/8 e.new#7/15 >/1
        context[15] = context[9];
        context[16] = context[10];
        if( ! refalrts::empty_seq( context[11], context[12] ) )
          continue;
        // closed e.new#7 as range 15
        do {
          // </0 & Map@6/4 (/7 (/13 # AsIs/21 (/24 # TkVariable/26 'e'/27 e.8#0/22 s.Depth#2/29 s.Offset#2/28 )/25 )/14 )/8 e.Tail#1/17 >/1
          context[17] = context[15];
          context[18] = context[16];
          context[19] = 0;
          context[20] = 0;
          if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
            continue;
          context[21] = refalrts::ident_left( identifiers[ident_AsIs], context[19], context[20] );
          if( ! context[21] )
            continue;
          context[22] = 0;
          context[23] = 0;
          context[24] = refalrts::brackets_left( context[22], context[23], context[19], context[20] );
          if( ! context[24] )
            continue;
          refalrts::bracket_pointers(context[24], context[25]);
          context[26] = refalrts::ident_left( identifiers[ident_TkVariable], context[22], context[23] );
          if( ! context[26] )
            continue;
          context[27] = refalrts::char_left( 'e', context[22], context[23] );
          if( ! context[27] )
            continue;
          if( ! refalrts::empty_seq( context[19], context[20] ) )
            continue;
          // closed e.Tail#1 as range 17
          if( ! refalrts::svar_right( context[28], context[22], context[23] ) )
            continue;
          if( ! refalrts::svar_right( context[29], context[22], context[23] ) )
            continue;
          // closed e.8#0 as range 22
          //DEBUG: e.Tail#1: 17
          //DEBUG: s.Offset#2: 28
          //DEBUG: s.Depth#2: 29
          //DEBUG: e.8#0: 22

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & Map@6/4 (/7 (/13 # AsIs/21 {REMOVED TILE} e.8#0/22 s.Depth#2/29 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/24 Reuse: # CmdInsertVar/26 AsIs: 'e'/27 } Tile{ AsIs: s.Offset#2/28 AsIs: )/25 HalfReuse: </14 HalfReuse: & Map@6/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
          refalrts::update_ident(context[26], identifiers[ident_CmdInsertVar]);
          refalrts::reinit_open_call(context[14]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[14] );
          refalrts::link_brackets( context[24], context[25] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[28];
          res = refalrts::splice_evar( res, context[24], context[27] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@6/4 (/7 t.#0/13 )/8 e.Tail#1/17 >/1
        context[17] = context[15];
        context[18] = context[16];
        // closed e.Tail#1 as range 17
        //DEBUG: t.#0: 13
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdInsertTile/4 HalfReuse: </7 } & BeginOffset/19 t.#0/13/20 >/22 </23 & EndOffset/24 Tile{ AsIs: t.#0/13 } >/25 )/26 </27 Tile{ HalfReuse: & Map@6/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[19], functions[efunc_BeginOffset]);
        refalrts::copy_evar(vm, context[20], context[21], context[13], context[14]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::alloc_name(vm, context[24], functions[efunc_EndOffset]);
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_close_bracket(vm, context[26]);
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdInsertTile]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[27] );
        refalrts::link_brackets( context[0], context[26] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[25], context[27] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[19], context[24] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@6/4 (/7 t.#0/19 e.1#0/15 t.0#0/13 )/8 e.Tail#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[9];
      context[18] = context[10];
      // closed e.Tail#1 as range 17
      context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.1#0 as range 15
      //DEBUG: t.0#0: 13
      //DEBUG: e.Tail#1: 17
      //DEBUG: t.#0: 19
      //DEBUG: e.1#0: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.1#0/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/21 Tile{ HalfReuse: # CmdInsertTile/0 HalfReuse: </4 HalfReuse: & BeginOffset/7 AsIs: t.#0/19 } >/22 </23 & EndOffset/24 Tile{ AsIs: t.0#0/13 } >/25 )/26 </27 Tile{ HalfReuse: & Map@6/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[21]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_EndOffset]);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::reinit_ident(context[0], identifiers[ident_CmdInsertTile]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_BeginOffset]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z6]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[21], context[26] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[25], context[27] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[22], context[24] );
      res = refalrts::splice_evar( res, context[0], context[20] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenSplices$1\1*3/4 AsIs: t.Next#1/7 } >/11 </12 & Map@6/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z6]);
    refalrts::update_name(context[4], functions[efunc_gen_GenSplices_S1L1D3]);
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

  // </0 & Map@6/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@6/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", 2644489627U, 1267806288U, func_gen_Map_Z6);


static refalrts::FnResult func_gen_Map_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & Map@7/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@7/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & Map@7/4 e.new#3/9 (/7 t.new#4/13 e.new#5/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.new#3 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & Map@7/4 e.PatternVars#1/15 (/7 (/13 # HalfReuse/21 (/24 # TkVariable/26 's'/27 e.6#0/22 s.Level#3/29 s.Offset#3/28 )/25 )/14 e.Tail#1/17 )/8 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      context[21] = refalrts::ident_left( identifiers[ident_HalfReuse], context[19], context[20] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      context[26] = refalrts::ident_left( identifiers[ident_TkVariable], context[22], context[23] );
      if( ! context[26] )
        continue;
      context[27] = refalrts::char_left( 's', context[22], context[23] );
      if( ! context[27] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.PatternVars#1 as range 15
      // closed e.Tail#1 as range 17
      if( ! refalrts::svar_right( context[28], context[22], context[23] ) )
        continue;
      if( ! refalrts::svar_right( context[29], context[22], context[23] ) )
        continue;
      // closed e.6#0 as range 22
      //DEBUG: e.PatternVars#1: 15
      //DEBUG: e.Tail#1: 17
      //DEBUG: s.Offset#3: 28
      //DEBUG: s.Level#3: 29
      //DEBUG: e.6#0: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: # HalfReuse/21 AsIs: (/24 AsIs: # TkVariable/26 HalfReuse: </27 } Tile{ Reuse: & GetSampleOffset/4 AsIs: e.PatternVars#1/15 AsIs: (/7 } 's'/30 Tile{ AsIs: e.6#0/22 } Tile{ AsIs: s.Level#3/29 } )/31 >/32 Tile{ AsIs: s.Offset#3/28 AsIs: )/25 } )/33 Tile{ AsIs: </0 } & Map@7/34 e.PatternVars#1/15/35 Tile{ HalfReuse: (/14 AsIs: e.Tail#1/17 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[30], 's');
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z7]);
      refalrts::copy_evar(vm, context[35], context[36], context[15], context[16]);
      refalrts::reinit_open_call(context[27]);
      refalrts::update_name(context[4], functions[efunc_GetSampleOffset]);
      refalrts::reinit_open_bracket(context[14]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[14], context[8] );
      refalrts::link_brackets( context[13], context[33] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[27] );
      refalrts::link_brackets( context[7], context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[33], context[33] );
      res = refalrts::splice_evar( res, context[28], context[25] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[4], context[7] );
      res = refalrts::splice_evar( res, context[13], context[27] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@7/4 e.PatternVars#1/15 (/7 t.Next#1/13 e.Tail#1/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    // closed e.PatternVars#1 as range 15
    // closed e.Tail#1 as range 17
    //DEBUG: t.Next#1: 13
    //DEBUG: e.PatternVars#1: 15
    //DEBUG: e.Tail#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/13 } Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: e.PatternVars#1/15 AsIs: (/7 } Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@7/4 e.PatternVars#1/2 (/7 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.PatternVars#1 as range 2
  //DEBUG: e.PatternVars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map@7/4 e.PatternVars#1/2 (/7 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z7("Map@7", 2644489627U, 1267806288U, func_gen_Map_Z7);


static refalrts::FnResult func_gen_DoMapAccum_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
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
      // </0 & DoMapAccum@1/4 (/9 e.new#8/21 )/10 (/15 s.new#9/25 e.new#10/23 )/16 e.new#11/17 (/7 e.new#12/19 )/8 >/1
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
      // closed e.new#8 as range 21
      // closed e.new#11 as range 17
      // closed e.new#12 as range 19
      if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
        continue;
      // closed e.new#10 as range 23
      do {
        // </0 & DoMapAccum@1/4 (/9 e.new#13/26 )/10 (/15 s.new#14/25 s.new#15/34 )/16 e.new#16/30 (/7 e.new#17/32 )/8 >/1
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        context[29] = context[24];
        context[30] = context[17];
        context[31] = context[18];
        context[32] = context[19];
        context[33] = context[20];
        // closed e.new#13 as range 26
        // closed e.new#16 as range 30
        // closed e.new#17 as range 32
        if( ! refalrts::svar_left( context[34], context[28], context[29] ) )
          continue;
        if( ! refalrts::empty_seq( context[28], context[29] ) )
          continue;
        do {
          // </0 & DoMapAccum@1/4 (/9 e.#0/35 )/10 (/15 # TkOpenCall/25 s.Offset#2/34 )/16 e.Tail#1/37 (/7 e.Scanned#1/39 )/8 >/1
          context[35] = context[26];
          context[36] = context[27];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[25] ) )
            continue;
          // closed e.#0 as range 35
          // closed e.Tail#1 as range 37
          // closed e.Scanned#1 as range 39
          //DEBUG: s.Offset#2: 34
          //DEBUG: e.#0: 35
          //DEBUG: e.Tail#1: 37
          //DEBUG: e.Scanned#1: 39

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/34 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/37 AsIs: (/7 AsIs: e.Scanned#1/39 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: (/9 AsIs: e.#0/35 HalfReuse: s.Offset2 #34/10 HalfReuse: )/15 HalfReuse: )/25 } Tile{ HalfReuse: >/4 } Tile{ ]] }
          refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
          refalrts::reinit_open_bracket(context[1]);
          refalrts::reinit_svar( context[10], context[34] );
          refalrts::reinit_close_bracket(context[15]);
          refalrts::reinit_close_bracket(context[25]);
          refalrts::reinit_close_call(context[4]);
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[1], context[25] );
          refalrts::link_brackets( context[9], context[15] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[4], context[4] );
          res = refalrts::splice_evar( res, context[9], context[25] );
          res = refalrts::splice_evar( res, context[16], context[1] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 (/9 e.#0/35 )/10 (/15 # TkOpenADT/25 s.Offset#2/34 )/16 e.Tail#1/37 (/7 e.Scanned#1/39 )/8 >/1
          context[35] = context[26];
          context[36] = context[27];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[25] ) )
            continue;
          // closed e.#0 as range 35
          // closed e.Tail#1 as range 37
          // closed e.Scanned#1 as range 39
          //DEBUG: s.Offset#2: 34
          //DEBUG: e.#0: 35
          //DEBUG: e.Tail#1: 37
          //DEBUG: e.Scanned#1: 39

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/34 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/37 AsIs: (/7 AsIs: e.Scanned#1/39 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: (/9 AsIs: e.#0/35 HalfReuse: s.Offset2 #34/10 HalfReuse: )/15 HalfReuse: )/25 } Tile{ HalfReuse: >/4 } Tile{ ]] }
          refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
          refalrts::reinit_open_bracket(context[1]);
          refalrts::reinit_svar( context[10], context[34] );
          refalrts::reinit_close_bracket(context[15]);
          refalrts::reinit_close_bracket(context[25]);
          refalrts::reinit_close_call(context[4]);
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[1], context[25] );
          refalrts::link_brackets( context[9], context[15] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[4], context[4] );
          res = refalrts::splice_evar( res, context[9], context[25] );
          res = refalrts::splice_evar( res, context[16], context[1] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 (/9 e.#0/35 )/10 (/15 # TkOpenBracket/25 s.Offset#2/34 )/16 e.Tail#1/37 (/7 e.Scanned#1/39 )/8 >/1
          context[35] = context[26];
          context[36] = context[27];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[25] ) )
            continue;
          // closed e.#0 as range 35
          // closed e.Tail#1 as range 37
          // closed e.Scanned#1 as range 39
          //DEBUG: s.Offset#2: 34
          //DEBUG: e.#0: 35
          //DEBUG: e.Tail#1: 37
          //DEBUG: e.Scanned#1: 39

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/34 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/37 AsIs: (/7 AsIs: e.Scanned#1/39 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: (/9 AsIs: e.#0/35 HalfReuse: s.Offset2 #34/10 HalfReuse: )/15 HalfReuse: )/25 } Tile{ HalfReuse: >/4 } Tile{ ]] }
          refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
          refalrts::reinit_open_bracket(context[1]);
          refalrts::reinit_svar( context[10], context[34] );
          refalrts::reinit_close_bracket(context[15]);
          refalrts::reinit_close_bracket(context[25]);
          refalrts::reinit_close_call(context[4]);
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[1], context[25] );
          refalrts::link_brackets( context[9], context[15] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[4], context[4] );
          res = refalrts::splice_evar( res, context[9], context[25] );
          res = refalrts::splice_evar( res, context[16], context[1] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 (/9 e.#0/35 )/10 (/15 # TkClosureHead/25 s.Offset#2/34 )/16 e.Tail#1/37 (/7 e.Scanned#1/39 )/8 >/1
          context[35] = context[26];
          context[36] = context[27];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[32];
          context[40] = context[33];
          if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[25] ) )
            continue;
          // closed e.#0 as range 35
          // closed e.Tail#1 as range 37
          // closed e.Scanned#1 as range 39
          //DEBUG: s.Offset#2: 34
          //DEBUG: e.#0: 35
          //DEBUG: e.Tail#1: 37
          //DEBUG: e.Scanned#1: 39

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/34 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/37 AsIs: (/7 AsIs: e.Scanned#1/39 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: (/9 AsIs: e.#0/35 HalfReuse: s.Offset2 #34/10 HalfReuse: )/15 HalfReuse: )/25 } Tile{ HalfReuse: >/4 } Tile{ ]] }
          refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
          refalrts::reinit_open_bracket(context[1]);
          refalrts::reinit_svar( context[10], context[34] );
          refalrts::reinit_close_bracket(context[15]);
          refalrts::reinit_close_bracket(context[25]);
          refalrts::reinit_close_call(context[4]);
          refalrts::push_stack( vm, context[4] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[1], context[25] );
          refalrts::link_brackets( context[9], context[15] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[4], context[4] );
          res = refalrts::splice_evar( res, context[9], context[25] );
          res = refalrts::splice_evar( res, context[16], context[1] );
          refalrts::splice_to_freelist_open( vm, context[0], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@1/4 (/9 e.new#18/35 s.new#19/41 )/10 (/15 s.new#20/25 s.new#21/34 )/16 e.new#22/37 (/7 e.new#23/39 )/8 >/1
        context[35] = context[26];
        context[36] = context[27];
        context[37] = context[30];
        context[38] = context[31];
        context[39] = context[32];
        context[40] = context[33];
        // closed e.new#22 as range 37
        // closed e.new#23 as range 39
        if( ! refalrts::svar_right( context[41], context[35], context[36] ) )
          continue;
        // closed e.new#18 as range 35
        do {
          // </0 & DoMapAccum@1/4 (/9 e.1#0/42 s.OpenOffset#2/41 )/10 (/15 # TkCloseCall/25 s.Offset#2/34 )/16 e.Tail#1/44 (/7 e.Scanned#1/46 )/8 >/1
          context[42] = context[35];
          context[43] = context[36];
          context[44] = context[37];
          context[45] = context[38];
          context[46] = context[39];
          context[47] = context[40];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[25] ) )
            continue;
          // closed e.1#0 as range 42
          // closed e.Tail#1 as range 44
          // closed e.Scanned#1 as range 46
          //DEBUG: s.OpenOffset#2: 41
          //DEBUG: s.Offset#2: 34
          //DEBUG: e.1#0: 42
          //DEBUG: e.Tail#1: 44
          //DEBUG: e.Scanned#1: 46

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux@1/4 } Tile{ AsIs: e.Tail#1/44 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/46 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: (/9 } Tile{ AsIs: e.1#0/42 } )/48 (/49 # CmdPushStack/50 Tile{ AsIs: s.OpenOffset#2/41 AsIs: )/10 AsIs: (/15 Reuse: # CmdPushStack/25 AsIs: s.Offset#2/34 AsIs: )/16 } )/51 >/52 Tile{ ]] }
          refalrts::alloc_close_bracket(vm, context[48]);
          refalrts::alloc_open_bracket(vm, context[49]);
          refalrts::alloc_ident(vm, context[50], identifiers[ident_CmdPushStack]);
          refalrts::alloc_close_bracket(vm, context[51]);
          refalrts::alloc_close_call(vm, context[52]);
          refalrts::update_name(context[4], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
          refalrts::reinit_open_bracket(context[1]);
          refalrts::update_ident(context[25], identifiers[ident_CmdPushStack]);
          refalrts::push_stack( vm, context[52] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[1], context[51] );
          refalrts::link_brackets( context[15], context[16] );
          refalrts::link_brackets( context[49], context[10] );
          refalrts::link_brackets( context[9], context[48] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[51], context[52] );
          res = refalrts::splice_evar( res, context[41], context[16] );
          res = refalrts::splice_evar( res, context[48], context[50] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[9], context[9] );
          res = refalrts::splice_evar( res, context[7], context[1] );
          res = refalrts::splice_evar( res, context[44], context[45] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 (/9 e.1#0/42 s.OpenOffset#2/41 )/10 (/15 # TkCloseADT/25 s.Offset#2/34 )/16 e.Tail#1/44 (/7 e.Scanned#1/46 )/8 >/1
          context[42] = context[35];
          context[43] = context[36];
          context[44] = context[37];
          context[45] = context[38];
          context[46] = context[39];
          context[47] = context[40];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[25] ) )
            continue;
          // closed e.1#0 as range 42
          // closed e.Tail#1 as range 44
          // closed e.Scanned#1 as range 46
          //DEBUG: s.OpenOffset#2: 41
          //DEBUG: s.Offset#2: 34
          //DEBUG: e.1#0: 42
          //DEBUG: e.Tail#1: 44
          //DEBUG: e.Scanned#1: 46

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/44 AsIs: (/7 AsIs: e.Scanned#1/46 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: (/9 } Tile{ AsIs: e.1#0/42 } Tile{ AsIs: )/10 AsIs: (/15 Reuse: # CmdLinkBrackets/25 } Tile{ AsIs: s.OpenOffset#2/41 } Tile{ AsIs: s.Offset#2/34 } Tile{ HalfReuse: )/4 } )/48 >/49 Tile{ ]] }
          refalrts::alloc_close_bracket(vm, context[48]);
          refalrts::alloc_close_call(vm, context[49]);
          refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
          refalrts::reinit_open_bracket(context[1]);
          refalrts::update_ident(context[25], identifiers[ident_CmdLinkBrackets]);
          refalrts::reinit_close_bracket(context[4]);
          refalrts::push_stack( vm, context[49] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[1], context[48] );
          refalrts::link_brackets( context[15], context[4] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[4], context[4] );
          res = refalrts::splice_evar( res, context[34], context[34] );
          res = refalrts::splice_evar( res, context[41], context[41] );
          res = refalrts::splice_evar( res, context[10], context[25] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[9], context[9] );
          res = refalrts::splice_evar( res, context[16], context[1] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoMapAccum@1/4 (/9 e.1#0/42 s.OpenOffset#2/41 )/10 (/15 # TkCloseBracket/25 s.Offset#2/34 )/16 e.Tail#1/44 (/7 e.Scanned#1/46 )/8 >/1
          context[42] = context[35];
          context[43] = context[36];
          context[44] = context[37];
          context[45] = context[38];
          context[46] = context[39];
          context[47] = context[40];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[25] ) )
            continue;
          // closed e.1#0 as range 42
          // closed e.Tail#1 as range 44
          // closed e.Scanned#1 as range 46
          //DEBUG: s.OpenOffset#2: 41
          //DEBUG: s.Offset#2: 34
          //DEBUG: e.1#0: 42
          //DEBUG: e.Tail#1: 44
          //DEBUG: e.Scanned#1: 46

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/44 AsIs: (/7 AsIs: e.Scanned#1/46 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: (/9 } Tile{ AsIs: e.1#0/42 } Tile{ AsIs: )/10 AsIs: (/15 Reuse: # CmdLinkBrackets/25 } Tile{ AsIs: s.OpenOffset#2/41 } Tile{ AsIs: s.Offset#2/34 } Tile{ HalfReuse: )/4 } )/48 >/49 Tile{ ]] }
          refalrts::alloc_close_bracket(vm, context[48]);
          refalrts::alloc_close_call(vm, context[49]);
          refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
          refalrts::reinit_open_bracket(context[1]);
          refalrts::update_ident(context[25], identifiers[ident_CmdLinkBrackets]);
          refalrts::reinit_close_bracket(context[4]);
          refalrts::push_stack( vm, context[49] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[1], context[48] );
          refalrts::link_brackets( context[15], context[4] );
          refalrts::link_brackets( context[9], context[10] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[4], context[4] );
          res = refalrts::splice_evar( res, context[34], context[34] );
          res = refalrts::splice_evar( res, context[41], context[41] );
          res = refalrts::splice_evar( res, context[10], context[25] );
          res = refalrts::splice_evar( res, context[42], context[43] );
          res = refalrts::splice_evar( res, context[9], context[9] );
          res = refalrts::splice_evar( res, context[16], context[1] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoMapAccum@1/4 (/9 e.1#0/42 s.HeadOffset#2/41 )/10 (/15 # TkUnwrappedClosure/25 s.Offset#2/34 )/16 e.Tail#1/44 (/7 e.Scanned#1/46 )/8 >/1
        context[42] = context[35];
        context[43] = context[36];
        context[44] = context[37];
        context[45] = context[38];
        context[46] = context[39];
        context[47] = context[40];
        if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[25] ) )
          continue;
        // closed e.1#0 as range 42
        // closed e.Tail#1 as range 44
        // closed e.Scanned#1 as range 46
        //DEBUG: s.HeadOffset#2: 41
        //DEBUG: s.Offset#2: 34
        //DEBUG: e.1#0: 42
        //DEBUG: e.Tail#1: 44
        //DEBUG: e.Scanned#1: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/44 AsIs: (/7 AsIs: e.Scanned#1/46 AsIs: )/8 HalfReuse: (/1 } (/48 Tile{ AsIs: e.1#0/42 } Tile{ HalfReuse: )/4 AsIs: (/9 } # PatchCreateUnwrappedClosure/49 Tile{ AsIs: s.HeadOffset#2/41 } s.Offset#2/34/50 Tile{ AsIs: )/10 AsIs: (/15 Reuse: # CmdWrapClosure/25 AsIs: s.Offset#2/34 } )/51 )/52 >/53 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[48]);
        refalrts::alloc_ident(vm, context[49], identifiers[ident_PatchCreateUnwrappedClosure]);
        refalrts::copy_stvar(vm, context[50], context[34]);
        refalrts::alloc_close_bracket(vm, context[51]);
        refalrts::alloc_close_bracket(vm, context[52]);
        refalrts::alloc_close_call(vm, context[53]);
        refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
        refalrts::reinit_open_bracket(context[1]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::update_ident(context[25], identifiers[ident_CmdWrapClosure]);
        refalrts::push_stack( vm, context[53] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[1], context[52] );
        refalrts::link_brackets( context[15], context[51] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[48], context[4] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[51], context[53] );
        res = refalrts::splice_evar( res, context[10], context[34] );
        res = refalrts::splice_evar( res, context[50], context[50] );
        res = refalrts::splice_evar( res, context[41], context[41] );
        res = refalrts::splice_evar( res, context[49], context[49] );
        res = refalrts::splice_evar( res, context[4], context[9] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[48], context[48] );
        res = refalrts::splice_evar( res, context[16], context[1] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoMapAccum@1/4 (/9 e.#0/26 )/10 (/15 s.tag#2/25 e.1#0/28 )/16 e.Tail#1/30 (/7 e.Scanned#1/32 )/8 >/1
      context[26] = context[21];
      context[27] = context[22];
      context[28] = context[23];
      context[29] = context[24];
      context[30] = context[17];
      context[31] = context[18];
      context[32] = context[19];
      context[33] = context[20];
      // closed e.#0 as range 26
      // closed e.1#0 as range 28
      // closed e.Tail#1 as range 30
      // closed e.Scanned#1 as range 32
      //DEBUG: s.tag#2: 25
      //DEBUG: e.#0: 26
      //DEBUG: e.1#0: 28
      //DEBUG: e.Tail#1: 30
      //DEBUG: e.Scanned#1: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.tag#2/25 e.1#0/28 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & DoMapAccum-Aux@1/16 AsIs: e.Tail#1/30 AsIs: (/7 AsIs: e.Scanned#1/32 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: (/9 AsIs: e.#0/26 AsIs: )/10 HalfReuse: )/15 } Tile{ HalfReuse: >/4 } Tile{ ]] }
      refalrts::reinit_name(context[16], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_close_bracket(context[15]);
      refalrts::reinit_close_call(context[4]);
      refalrts::push_stack( vm, context[4] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[1], context[15] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[9], context[15] );
      res = refalrts::splice_evar( res, context[16], context[1] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
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
    //RESULT: Tile{ [[ } </21 & DoMapAccum-Aux@1/22 Tile{ AsIs: e.Tail#1/17 } Tile{ AsIs: (/7 AsIs: e.Scanned#1/19 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: </0 Reuse: & GenPushLink=1\1*9/4 AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/23 )/24 >/25 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_DoMapAccumm_Aux_Z1]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::update_name(context[4], functions[efunc_gen_GenPushLink_A1L1D9]);
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

static refalrts::NativeReference nat_ref_gen_DoMapAccum_Z1("DoMapAccum@1", 2644489627U, 1267806288U, func_gen_DoMapAccum_Z1);


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

static refalrts::NativeReference nat_ref_gen_DoMapAccumm_Aux_Z1("DoMapAccum-Aux@1", 2644489627U, 1267806288U, func_gen_DoMapAccumm_Aux_Z1);


//End of file
