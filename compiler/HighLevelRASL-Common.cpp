// This file automatically generated from 'HighLevelRASL-Common.ref'
// Don't edit! Edit 'HighLevelRASL-Common.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_493465829_3610772638

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
  efunc_Inc2 = 14,
  efunc_Inc = 15,
  efunc_Symb = 16,
  efunc_Offset = 17,
  efunc_DisplayName = 18,
  efunc_EscapeChar = 19,
  efunc_Map = 20,
  efunc_PrintVar = 21,
  efunc_SafeDisplayName = 22,
  efunc_TextFromExpr = 23,
  efunc_gen_TextFromExpr_L1 = 24,
  efunc_TextFromExprm_Prepare = 25,
  efunc_gen_SafeDisplayName_L1 = 26,
  efunc_TextFromExprm_Preparem_Chars = 27,
  efunc_gen_GenInitSubst_A5 = 28,
  efunc_gen_GenInitSubst_A4 = 29,
  efunc_gen_GenInitSubst_A3 = 30,
  efunc_gen_GenInitSubst_A2 = 31,
  efunc_gen_GenInitSubst_A1 = 32,
  efunc_gen_GenPattern_A1 = 33,
  efunc_GenInitSubst = 34,
  efunc_FoldOpenELoops = 35,
  efunc_PutVariableDebugTable = 36,
  efunc_gen_GenResult_A1 = 37,
  efunc_SentenceTail = 38,
  efunc_gen_PutVariableDebugTable_L1 = 39,
  efunc_CollectStrings = 40,
  efunc_Fetch = 41,
  efunc_BuildString = 42,
  efunc_gen_CollectStrings_S1L1 = 43,
  efunc_MapReduce = 44,
  efunc_gen_MakeSavers_A1L1 = 45,
  efunc_gen_MakeSavers_A1 = 46,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_NoDepth = 6,
  ident_TkOpenBracket = 7,
  ident_TkCloseBracket = 8,
  ident_TkOpenCall = 9,
  ident_TkCloseCall = 10,
  ident_TkOpenADT = 11,
  ident_TkCloseADT = 12,
  ident_TkClosureHead = 13,
  ident_TkUnwrappedClosure = 14,
  ident_Symbol = 15,
  ident_Char = 16,
  ident_TkChars = 17,
  ident_Number = 18,
  ident_Cookie1 = 19,
  ident_Cookie2 = 20,
  ident_Name = 21,
  ident_TkString = 22,
  ident_TkVariable = 23,
  ident_TkVariableCopy = 24,
  ident_Identifier = 25,
  ident_Tile = 26,
  ident_AsIs = 27,
  ident_Reuse = 28,
  ident_HalfReuse = 29,
  ident_LEFTm_EDGE = 30,
  ident_RIGHTm_EDGE = 31,
  ident_RemovedTile = 32,
  ident_NoOffset = 33,
  ident_Junk = 34,
  ident_E = 35,
  ident_CmdCallSave = 36,
  ident_AlgLeft = 37,
  ident_CmdInitB0m_Lite = 38,
  ident_CmdIssueMemory = 39,
  ident_CmdOpenedE = 40,
  ident_CmdOpenELoop = 41,
  ident_CmdVariableDebugTable = 42,
  ident_Brackets = 43,
  ident_CallBrackets = 44,
  ident_ADTm_Brackets = 45,
  ident_CmdSave = 46,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 493465829U, 3610772638U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 3610772638UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 493465829UL);
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
  refalrts::reinit_number(context[5], 493465829UL);
  refalrts::reinit_number(context[7], 3610772638UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 493465829U, 3610772638U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 493465829U, 3610772638U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 493465829U, 3610772638U, func_Residue);


static refalrts::FnResult func_Inc2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Inc2/4 s.Num#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & Add/0 HalfReuse: 2/4 AsIs: s.Num#1/5 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::reinit_name(context[0], functions[efunc_Add]);
  refalrts::reinit_number(context[4], 2UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Inc2("Inc2", 0U, 0U, func_Inc2);


static refalrts::FnResult func_IncVarOffset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & IncVarOffset/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IncVarOffset/4 s.new#1/5 s.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IncVarOffset/4 s.ContextOffset#1/5 'e'/6 >/1
    if( ! refalrts::char_term( 'e', context[6] ) )
      continue;
    //DEBUG: s.ContextOffset#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Inc2]);
    refalrts::reinit_close_call(context[6]);
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IncVarOffset/4 s.ContextOffset#1/5 't'/6 >/1
    if( ! refalrts::char_term( 't', context[6] ) )
      continue;
    //DEBUG: s.ContextOffset#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Inc]);
    refalrts::reinit_close_call(context[6]);
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IncVarOffset/4 s.ContextOffset#1/5 's'/6 >/1
  if( ! refalrts::char_term( 's', context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ContextOffset#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.ContextOffset#1/5 HalfReuse: >/6 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_Inc]);
  refalrts::reinit_close_call(context[6]);
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IncVarOffset("IncVarOffset", 0U, 0U, func_IncVarOffset);


static refalrts::FnResult func_PrintVar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & PrintVar/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrintVar/4 s.new#1/5 e.new#2/2 s.new#3/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & PrintVar/4 s.Mode#1/5 e.Index#1/2 # NoDepth/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_NoDepth], context[6] ) )
      continue;
    // closed e.Index#1 as range 2
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Index#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} # NoDepth/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Mode1 #5/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/2 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[5] );
    refalrts::reinit_char(context[4], '.');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintVar/4 s.Mode#1/5 e.Index#1/2 s.Depth#1/6 >/1
  // closed e.Index#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Depth#1: 6
  //DEBUG: e.Index#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Mode1 #5/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/2 } '#'/7 </8 & Symb/9 Tile{ AsIs: s.Depth#1/6 AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[7], '#');
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Symb]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_char(context[4], '.');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintVar("PrintVar", 0U, 0U, func_PrintVar);


static refalrts::FnResult func_gen_TextFromExpr_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & TextFromExpr\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & TextFromExpr\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & TextFromExpr\1/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & TextFromExpr\1/4 (/5 s.new#4/9 e.new#5/10 s.new#6/12 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::svar_right( context[12], context[10], context[11] ) )
        continue;
      // closed e.new#5 as range 10
      do {
        // </0 & TextFromExpr\1/4 (/5 s.new#7/9 s.new#8/12 )/6 >/1
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;
        do {
          // </0 & TextFromExpr\1/4 (/5 # TkOpenBracket/9 s.ContextOffset#2/12 )/6 >/1
          if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[9] ) )
            continue;
          //DEBUG: s.ContextOffset#2: 12

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/12 HalfReuse: >/6 } Tile{ ]] }
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '(');
          refalrts::reinit_open_call(context[5]);
          refalrts::reinit_name(context[9], functions[efunc_Offset]);
          refalrts::reinit_close_call(context[6]);
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[5] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          refalrts::splice_to_freelist_open( vm, context[6], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & TextFromExpr\1/4 (/5 # TkCloseBracket/9 s.ContextOffset#2/12 )/6 >/1
          if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[9] ) )
            continue;
          //DEBUG: s.ContextOffset#2: 12

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ')'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/12 HalfReuse: >/6 } Tile{ ]] }
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], ')');
          refalrts::reinit_open_call(context[5]);
          refalrts::reinit_name(context[9], functions[efunc_Offset]);
          refalrts::reinit_close_call(context[6]);
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[5] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          refalrts::splice_to_freelist_open( vm, context[6], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & TextFromExpr\1/4 (/5 # TkOpenCall/9 s.ContextOffset#2/12 )/6 >/1
          if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[9] ) )
            continue;
          //DEBUG: s.ContextOffset#2: 12

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '<'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/12 HalfReuse: >/6 } Tile{ ]] }
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '<');
          refalrts::reinit_open_call(context[5]);
          refalrts::reinit_name(context[9], functions[efunc_Offset]);
          refalrts::reinit_close_call(context[6]);
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[5] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          refalrts::splice_to_freelist_open( vm, context[6], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & TextFromExpr\1/4 (/5 # TkCloseCall/9 s.ContextOffset#2/12 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[9] ) )
          continue;
        //DEBUG: s.ContextOffset#2: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '>'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/12 HalfReuse: >/6 } Tile{ ]] }
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '>');
        refalrts::reinit_open_call(context[5]);
        refalrts::reinit_name(context[9], functions[efunc_Offset]);
        refalrts::reinit_close_call(context[6]);
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[5] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & TextFromExpr\1/4 (/5 # TkOpenADT/9 e.new#8/10 s.new#7/12 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[9] ) )
          continue;
        // closed e.new#8 as range 10
        do {
          // </0 & TextFromExpr\1/4 (/5 # TkOpenADT/9 s.ContextOffset#2/15 e.Name#2/13 s.NameOffset#2/12 )/6 >/1
          context[13] = context[10];
          context[14] = context[11];
          if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
            continue;
          // closed e.Name#2 as range 13
          //DEBUG: s.NameOffset#2: 12
          //DEBUG: s.ContextOffset#2: 15
          //DEBUG: e.Name#2: 13

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.NameOffset#2/12 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/15 } >/16 </17 & DisplayName/18 Tile{ AsIs: e.Name#2/13 } >/19 </20 & Offset/21 Tile{ HalfReuse: s.NameOffset2 #12/6 AsIs: >/1 ]] }
          refalrts::alloc_close_call(vm, context[16]);
          refalrts::alloc_open_call(vm, context[17]);
          refalrts::alloc_name(vm, context[18], functions[efunc_DisplayName]);
          refalrts::alloc_close_call(vm, context[19]);
          refalrts::alloc_open_call(vm, context[20]);
          refalrts::alloc_name(vm, context[21], functions[efunc_Offset]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '[');
          refalrts::reinit_open_call(context[5]);
          refalrts::reinit_name(context[9], functions[efunc_Offset]);
          refalrts::reinit_svar( context[6], context[12] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[20] );
          refalrts::push_stack( vm, context[19] );
          refalrts::push_stack( vm, context[17] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[5] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[6];
          res = refalrts::splice_evar( res, context[19], context[21] );
          res = refalrts::splice_evar( res, context[13], context[14] );
          res = refalrts::splice_evar( res, context[16], context[18] );
          refalrts::splice_to_freelist_open( vm, context[15], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & TextFromExpr\1/4 (/5 # TkOpenADT/9 s.ContextOffset#2/12 )/6 >/1
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;
        //DEBUG: s.ContextOffset#2: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/12 HalfReuse: >/6 } Tile{ ]] }
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '[');
        refalrts::reinit_open_call(context[5]);
        refalrts::reinit_name(context[9], functions[efunc_Offset]);
        refalrts::reinit_close_call(context[6]);
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[5] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & TextFromExpr\1/4 (/5 s.new#7/9 s.new#8/12 )/6 >/1
        if( ! refalrts::empty_seq( context[10], context[11] ) )
          continue;
        do {
          // </0 & TextFromExpr\1/4 (/5 # TkCloseADT/9 s.ContextOffset#2/12 )/6 >/1
          if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[9] ) )
            continue;
          //DEBUG: s.ContextOffset#2: 12

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ']'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/12 HalfReuse: >/6 } Tile{ ]] }
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], ']');
          refalrts::reinit_open_call(context[5]);
          refalrts::reinit_name(context[9], functions[efunc_Offset]);
          refalrts::reinit_close_call(context[6]);
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[5] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          refalrts::splice_to_freelist_open( vm, context[6], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & TextFromExpr\1/4 (/5 # TkClosureHead/9 s.ContextOffset#2/12 )/6 >/1
          if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[9] ) )
            continue;
          //DEBUG: s.ContextOffset#2: 12

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 } '['/13 Tile{ HalfReuse: '*'/0 HalfReuse: ']'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/12 HalfReuse: >/6 } Tile{ ]] }
          refalrts::alloc_char(vm, context[13], '[');
          refalrts::reinit_char(context[1], ' ');
          refalrts::reinit_char(context[0], '*');
          refalrts::reinit_char(context[4], ']');
          refalrts::reinit_open_call(context[5]);
          refalrts::reinit_name(context[9], functions[efunc_Offset]);
          refalrts::reinit_close_call(context[6]);
          refalrts::push_stack( vm, context[6] );
          refalrts::push_stack( vm, context[5] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[0], context[6] );
          res = refalrts::splice_evar( res, context[13], context[13] );
          res = refalrts::splice_evar( res, context[1], context[1] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & TextFromExpr\1/4 (/5 # TkUnwrappedClosure/9 s.ContextOffset#2/12 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[9] ) )
          continue;
        //DEBUG: s.ContextOffset#2: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 } '{'/13 Tile{ HalfReuse: '*'/0 HalfReuse: '}'/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/12 HalfReuse: >/6 } Tile{ ]] }
        refalrts::alloc_char(vm, context[13], '{');
        refalrts::reinit_char(context[1], ' ');
        refalrts::reinit_char(context[0], '*');
        refalrts::reinit_char(context[4], '}');
        refalrts::reinit_open_call(context[5]);
        refalrts::reinit_name(context[9], functions[efunc_Offset]);
        refalrts::reinit_close_call(context[6]);
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[5] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & TextFromExpr\1/4 (/5 # Symbol/9 # Char/15 s.Char#2/16 s.Offset#2/12 )/6 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
        continue;
      context[15] = refalrts::ident_left( identifiers[ident_Char], context[13], context[14] );
      if( ! context[15] )
        continue;
      if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      //DEBUG: s.Offset#2: 12
      //DEBUG: s.Char#2: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Char#2/16 s.Offset#2/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </5 HalfReuse: & EscapeChar/9 HalfReuse: s.Char2 #16/15 } >/17 '\''/18 </19 & Offset/20 Tile{ HalfReuse: s.Offset2 #12/6 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::alloc_char(vm, context[18], '\'');
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_Offset]);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], '\'');
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
      refalrts::reinit_svar( context[15], context[16] );
      refalrts::reinit_svar( context[6], context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[17], context[20] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & TextFromExpr\1/4 (/5 # TkChars/9 e.Chars#2/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TkChars], context[9] ) )
        continue;
      // closed e.Chars#2 as range 7
      //DEBUG: e.Chars#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & TextFromExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/5 HalfReuse: '\''/9 AsIs: e.Chars#2/7 HalfReuse: '\''/6 } Tile{ ]] }
      refalrts::reinit_char(context[5], ' ');
      refalrts::reinit_char(context[9], '\'');
      refalrts::reinit_char(context[6], '\'');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & TextFromExpr\1/4 (/5 s.new#4/9 e.new#5/10 s.new#6/12 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::svar_right( context[12], context[10], context[11] ) )
        continue;
      // closed e.new#5 as range 10
      do {
        // </0 & TextFromExpr\1/4 (/5 # Symbol/9 s.new#8/15 e.new#9/13 s.new#7/12 )/6 >/1
        context[13] = context[10];
        context[14] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
          continue;
        if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
          continue;
        // closed e.new#9 as range 13
        do {
          // </0 & TextFromExpr\1/4 (/5 # Symbol/9 # Number/15 s.new#11/18 s.new#10/12 )/6 >/1
          context[16] = context[13];
          context[17] = context[14];
          if( ! refalrts::ident_term( identifiers[ident_Number], context[15] ) )
            continue;
          if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
            continue;
          if( ! refalrts::empty_seq( context[16], context[17] ) )
            continue;
          do {
            // </0 & TextFromExpr\1/4 (/5 # Symbol/9 # Number/15 # Cookie1/18 s.Offset#2/12 )/6 >/1
            if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[18] ) )
              continue;
            //DEBUG: s.Offset#2: 12

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" <C"/19 Tile{ HalfReuse: 'o'/1 }"ok"/21 Tile{ HalfReuse: 'i'/0 HalfReuse: 'e'/4 HalfReuse: '1'/5 HalfReuse: '>'/9 HalfReuse: </15 HalfReuse: & Offset/18 AsIs: s.Offset#2/12 HalfReuse: >/6 } Tile{ ]] }
            refalrts::alloc_chars(vm, context[19], context[20], " <C", 3);
            refalrts::alloc_chars(vm, context[21], context[22], "ok", 2);
            refalrts::reinit_char(context[1], 'o');
            refalrts::reinit_char(context[0], 'i');
            refalrts::reinit_char(context[4], 'e');
            refalrts::reinit_char(context[5], '1');
            refalrts::reinit_char(context[9], '>');
            refalrts::reinit_open_call(context[15]);
            refalrts::reinit_name(context[18], functions[efunc_Offset]);
            refalrts::reinit_close_call(context[6]);
            refalrts::push_stack( vm, context[6] );
            refalrts::push_stack( vm, context[15] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[0], context[6] );
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[1], context[1] );
            res = refalrts::splice_evar( res, context[19], context[20] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & TextFromExpr\1/4 (/5 # Symbol/9 # Number/15 # Cookie2/18 s.Offset#2/12 )/6 >/1
            if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[18] ) )
              continue;
            //DEBUG: s.Offset#2: 12

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ }" <C"/19 Tile{ HalfReuse: 'o'/1 }"ok"/21 Tile{ HalfReuse: 'i'/0 HalfReuse: 'e'/4 HalfReuse: '2'/5 HalfReuse: '>'/9 HalfReuse: </15 HalfReuse: & Offset/18 AsIs: s.Offset#2/12 HalfReuse: >/6 } Tile{ ]] }
            refalrts::alloc_chars(vm, context[19], context[20], " <C", 3);
            refalrts::alloc_chars(vm, context[21], context[22], "ok", 2);
            refalrts::reinit_char(context[1], 'o');
            refalrts::reinit_char(context[0], 'i');
            refalrts::reinit_char(context[4], 'e');
            refalrts::reinit_char(context[5], '2');
            refalrts::reinit_char(context[9], '>');
            refalrts::reinit_open_call(context[15]);
            refalrts::reinit_name(context[18], functions[efunc_Offset]);
            refalrts::reinit_close_call(context[6]);
            refalrts::push_stack( vm, context[6] );
            refalrts::push_stack( vm, context[15] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = arg_end->next;
            res = refalrts::splice_evar( res, context[0], context[6] );
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[1], context[1] );
            res = refalrts::splice_evar( res, context[19], context[20] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & TextFromExpr\1/4 (/5 # Symbol/9 # Number/15 s.Number#2/18 s.Offset#2/12 )/6 >/1
          //DEBUG: s.Number#2: 18
          //DEBUG: s.Offset#2: 12

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Number#2/18 s.Offset#2/12 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & Symb/5 HalfReuse: s.Number2 #18/9 HalfReuse: >/15 } </19 & Offset/20 Tile{ HalfReuse: s.Offset2 #12/6 AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[19]);
          refalrts::alloc_name(vm, context[20], functions[efunc_Offset]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_open_call(context[4]);
          refalrts::reinit_name(context[5], functions[efunc_Symb]);
          refalrts::reinit_svar( context[9], context[18] );
          refalrts::reinit_close_call(context[15]);
          refalrts::reinit_svar( context[6], context[12] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[19] );
          refalrts::push_stack( vm, context[15] );
          refalrts::push_stack( vm, context[4] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[6];
          res = refalrts::splice_evar( res, context[19], context[20] );
          refalrts::splice_to_freelist_open( vm, context[15], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & TextFromExpr\1/4 (/5 # Symbol/9 # Name/15 e.Name#2/13 s.Offset#2/12 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_Name], context[15] ) )
          continue;
        // closed e.Name#2 as range 13
        //DEBUG: s.Offset#2: 12
        //DEBUG: e.Name#2: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/12 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '&'/4 HalfReuse: ' '/5 HalfReuse: </9 HalfReuse: & DisplayName/15 } Tile{ AsIs: e.Name#2/13 } >/16 </17 & Offset/18 Tile{ HalfReuse: s.Offset2 #12/6 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[16]);
        refalrts::alloc_open_call(vm, context[17]);
        refalrts::alloc_name(vm, context[18], functions[efunc_Offset]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '&');
        refalrts::reinit_char(context[5], ' ');
        refalrts::reinit_open_call(context[9]);
        refalrts::reinit_name(context[15], functions[efunc_DisplayName]);
        refalrts::reinit_svar( context[6], context[12] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[17] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[6];
        res = refalrts::splice_evar( res, context[16], context[18] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::splice_to_freelist_open( vm, context[15], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & TextFromExpr\1/4 (/5 # TkString/9 e.String#2/10 s.Offset#2/12 )/6 >/1
        if( ! refalrts::ident_term( identifiers[ident_TkString], context[9] ) )
          continue;
        // closed e.String#2 as range 10
        //DEBUG: s.Offset#2: 12
        //DEBUG: e.String#2: 10

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/12 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: </4 HalfReuse: & Map/5 HalfReuse: & EscapeChar/9 } Tile{ AsIs: e.String#2/10 } >/13 '\"'/14 </15 & Offset/16 Tile{ HalfReuse: s.Offset2 #12/6 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[13]);
        refalrts::alloc_char(vm, context[14], '\"');
        refalrts::alloc_open_call(vm, context[15]);
        refalrts::alloc_name(vm, context[16], functions[efunc_Offset]);
        refalrts::reinit_char(context[0], '\"');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[5], functions[efunc_Map]);
        refalrts::reinit_name(context[9], functions[efunc_EscapeChar]);
        refalrts::reinit_svar( context[6], context[12] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[6];
        res = refalrts::splice_evar( res, context[13], context[16] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & TextFromExpr\1/4 (/5 s.new#7/9 s.new#9/15 e.new#10/13 s.new#8/12 )/6 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      // closed e.new#10 as range 13
      do {
        // </0 & TextFromExpr\1/4 (/5 s.new#11/9 s.new#13/15 e.new#14/16 s.new#15/18 s.new#12/12 )/6 >/1
        context[16] = context[13];
        context[17] = context[14];
        if( ! refalrts::svar_right( context[18], context[16], context[17] ) )
          continue;
        // closed e.new#14 as range 16
        do {
          // </0 & TextFromExpr\1/4 (/5 # TkVariable/9 s.Mode#2/15 e.Index#2/16 s.Depth#2/18 s.Offset#2/12 )/6 >/1
          if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
            continue;
          // closed e.Index#2 as range 16
          //DEBUG: s.Mode#2: 15
          //DEBUG: s.Depth#2: 18
          //DEBUG: s.Offset#2: 12
          //DEBUG: e.Index#2: 16

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/12 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </5 HalfReuse: & PrintVar/9 AsIs: s.Mode#2/15 AsIs: e.Index#2/16 AsIs: s.Depth#2/18 } >/19 Tile{ AsIs: </0 } & Offset/20 Tile{ HalfReuse: s.Offset2 #12/6 AsIs: >/1 ]] }
          refalrts::alloc_close_call(vm, context[19]);
          refalrts::alloc_name(vm, context[20], functions[efunc_Offset]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_open_call(context[5]);
          refalrts::reinit_name(context[9], functions[efunc_PrintVar]);
          refalrts::reinit_svar( context[6], context[12] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[19] );
          refalrts::push_stack( vm, context[5] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[6];
          res = refalrts::splice_evar( res, context[20], context[20] );
          res = refalrts::splice_evar( res, context[0], context[0] );
          res = refalrts::splice_evar( res, context[19], context[19] );
          res = refalrts::splice_evar( res, context[4], context[18] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & TextFromExpr\1/4 (/5 # TkVariableCopy/9 s.Mode#2/15 e.Index#2/19 s.Depth#2/21 s.SampleOffset#2/18 s.CopyOffset#2/12 )/6 >/1
        context[19] = context[16];
        context[20] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_TkVariableCopy], context[9] ) )
          continue;
        if( ! refalrts::svar_right( context[21], context[19], context[20] ) )
          continue;
        // closed e.Index#2 as range 19
        //DEBUG: s.Mode#2: 15
        //DEBUG: s.SampleOffset#2: 18
        //DEBUG: s.CopyOffset#2: 12
        //DEBUG: s.Depth#2: 21
        //DEBUG: e.Index#2: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.CopyOffset#2/12 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </5 HalfReuse: & PrintVar/9 AsIs: s.Mode#2/15 AsIs: e.Index#2/19 AsIs: s.Depth#2/21 } >/22 Tile{ AsIs: </0 } & Offset/23 Tile{ AsIs: s.SampleOffset#2/18 } >/24 </25 & Offset/26 Tile{ HalfReuse: s.CopyOffset2 #12/6 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_Offset]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[26], functions[efunc_Offset]);
        refalrts::reinit_char(context[4], ' ');
        refalrts::reinit_open_call(context[5]);
        refalrts::reinit_name(context[9], functions[efunc_PrintVar]);
        refalrts::reinit_svar( context[6], context[12] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[5] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[6];
        res = refalrts::splice_evar( res, context[24], context[26] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[4], context[21] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & TextFromExpr\1/4 (/5 # Symbol/9 # Identifier/15 e.Name#2/13 s.Offset#2/12 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Identifier], context[15] ) )
        continue;
      // closed e.Name#2 as range 13
      //DEBUG: s.Offset#2: 12
      //DEBUG: e.Name#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '#'/4 HalfReuse: ' '/5 HalfReuse: </9 HalfReuse: & SafeDisplayName/15 } Tile{ AsIs: e.Name#2/13 } >/16 </17 & Offset/18 Tile{ HalfReuse: s.Offset2 #12/6 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_Offset]);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], '#');
      refalrts::reinit_char(context[5], ' ');
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[15], functions[efunc_SafeDisplayName]);
      refalrts::reinit_svar( context[6], context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[16], context[18] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & TextFromExpr\1/4 (/5 # Tile/9 e.SubRange#2/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Tile], context[9] ) )
        continue;
      // closed e.SubRange#2 as range 7
      //DEBUG: e.SubRange#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" Til"/10 Tile{ HalfReuse: 'e'/0 HalfReuse: '{'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 HalfReuse: ' '/1 } '}'/12 Tile{ ]] }
      refalrts::alloc_chars(vm, context[10], context[11], " Til", 4);
      refalrts::alloc_char(vm, context[12], '}');
      refalrts::reinit_char(context[0], 'e');
      refalrts::reinit_char(context[4], '{');
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_TextFromExpr]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_char(context[1], ' ');
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & TextFromExpr\1/4 (/5 # AsIs/9 e.SubRange#2/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_AsIs], context[9] ) )
        continue;
      // closed e.SubRange#2 as range 7
      //DEBUG: e.SubRange#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" As"/10 Tile{ HalfReuse: 'I'/1 } Tile{ HalfReuse: 's'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[10], context[11], " As", 3);
      refalrts::reinit_char(context[1], 'I');
      refalrts::reinit_char(context[0], 's');
      refalrts::reinit_char(context[4], ':');
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_TextFromExpr]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & TextFromExpr\1/4 (/5 # Reuse/9 e.SubRange#2/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_Reuse], context[9] ) )
        continue;
      // closed e.SubRange#2 as range 7
      //DEBUG: e.SubRange#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" Re"/10 Tile{ HalfReuse: 'u'/1 } 's'/12 Tile{ HalfReuse: 'e'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[10], context[11], " Re", 3);
      refalrts::alloc_char(vm, context[12], 's');
      refalrts::reinit_char(context[1], 'u');
      refalrts::reinit_char(context[0], 'e');
      refalrts::reinit_char(context[4], ':');
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_TextFromExpr]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & TextFromExpr\1/4 (/5 # HalfReuse/9 e.SubRange#2/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[9] ) )
        continue;
      // closed e.SubRange#2 as range 7
      //DEBUG: e.SubRange#2: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" Ha"/10 Tile{ HalfReuse: 'l'/1 }"fReus"/12 Tile{ HalfReuse: 'e'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/7 HalfReuse: >/6 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[10], context[11], " Ha", 3);
      refalrts::alloc_chars(vm, context[12], context[13], "fReus", 5);
      refalrts::reinit_char(context[1], 'l');
      refalrts::reinit_char(context[0], 'e');
      refalrts::reinit_char(context[4], ':');
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_TextFromExpr]);
      refalrts::reinit_close_call(context[6]);
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & TextFromExpr\1/4 (/5 s.new#4/9 )/6 >/1
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & TextFromExpr\1/4 (/5 # LEFT-EDGE/9 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & TextFromExpr\1/4 (/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: '['/6 HalfReuse: '['/1 ]] }
      refalrts::reinit_char(context[9], ' ');
      refalrts::reinit_char(context[6], '[');
      refalrts::reinit_char(context[1], '[');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & TextFromExpr\1/4 (/5 # RIGHT-EDGE/9 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[9] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & TextFromExpr\1/4 (/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/9 HalfReuse: ']'/6 HalfReuse: ']'/1 ]] }
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_char(context[6], ']');
    refalrts::reinit_char(context[1], ']');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & TextFromExpr\1/4 # RemovedTile/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_RemovedTile], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '{'/4 HalfReuse: 'R'/5 HalfReuse: 'E'/1 }"MOVED TILE}"/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "MOVED TILE}", 11);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], '{');
  refalrts::reinit_char(context[5], 'R');
  refalrts::reinit_char(context[1], 'E');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_TextFromExpr_L1("TextFromExpr\\1", 493465829U, 3610772638U, func_gen_TextFromExpr_L1);


static refalrts::FnResult func_TextFromExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & TextFromExpr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map/6 & TextFromExpr\1/7 Tile{ AsIs: </0 Reuse: & TextFromExpr-Prepare/4 AsIs: e.Expr#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_TextFromExpr_L1]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_TextFromExprm_Prepare]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TextFromExpr("TextFromExpr", 0U, 0U, func_TextFromExpr);


static refalrts::FnResult func_gen_SafeDisplayName_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & SafeDisplayName\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SafeDisplayName\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SafeDisplayName\1/4 '\n'/5 >/1
    if( ! refalrts::char_term( '\n', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SafeDisplayName\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '$'/5 HalfReuse: 'n'/1 ]] }
    refalrts::update_char(context[5], '$');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SafeDisplayName\1/4 '\r'/5 >/1
    if( ! refalrts::char_term( '\r', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SafeDisplayName\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '$'/5 HalfReuse: 'r'/1 ]] }
    refalrts::update_char(context[5], '$');
    refalrts::reinit_char(context[1], 'r');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SafeDisplayName\1/4 ' '/5 >/1
    if( ! refalrts::char_term( ' ', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SafeDisplayName\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '$'/5 HalfReuse: '_'/1 ]] }
    refalrts::update_char(context[5], '$');
    refalrts::reinit_char(context[1], '_');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SafeDisplayName\1/4 '\t'/5 >/1
    if( ! refalrts::char_term( '\t', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SafeDisplayName\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '$'/5 HalfReuse: 't'/1 ]] }
    refalrts::update_char(context[5], '$');
    refalrts::reinit_char(context[1], 't');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SafeDisplayName\1/4 '$'/5 >/1
    if( ! refalrts::char_term( '$', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SafeDisplayName\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: '$'/5 HalfReuse: '$'/1 ]] }
    refalrts::reinit_char(context[1], '$');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SafeDisplayName\1/4 s.Other#2/5 >/1
  //DEBUG: s.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SafeDisplayName\1/4 s.Other#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Other2 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SafeDisplayName_L1("SafeDisplayName\\1", 493465829U, 3610772638U, func_gen_SafeDisplayName_L1);


static refalrts::FnResult func_SafeDisplayName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & SafeDisplayName/4 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Map/6 & SafeDisplayName\1/7 Tile{ AsIs: </0 Reuse: & DisplayName/4 AsIs: e.Name#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_SafeDisplayName_L1]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_DisplayName]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SafeDisplayName("SafeDisplayName", 493465829U, 3610772638U, func_SafeDisplayName);


static refalrts::FnResult func_TextFromExprm_Prepare(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & TextFromExpr-Prepare/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & TextFromExpr-Prepare/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & TextFromExpr-Prepare/4 (/7 e.new#3/9 s.new#4/12 s.new#5/11 )/8 e.new#6/5 >/1
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
        continue;
      // closed e.new#6 as range 5
      if( ! refalrts::svar_right( context[11], context[9], context[10] ) )
        continue;
      if( ! refalrts::svar_right( context[12], context[9], context[10] ) )
        continue;
      // closed e.new#3 as range 9
      do {
        // </0 & TextFromExpr-Prepare/4 (/7 # Symbol/15 # Char/16 s.Char#1/12 # NoOffset/11 )/8 e.Tail#1/5 >/1
        context[13] = context[9];
        context[14] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[11] ) )
          continue;
        context[15] = refalrts::ident_left( identifiers[ident_Symbol], context[13], context[14] );
        if( ! context[15] )
          continue;
        context[16] = refalrts::ident_left( identifiers[ident_Char], context[13], context[14] );
        if( ! context[16] )
          continue;
        if( ! refalrts::empty_seq( context[13], context[14] ) )
          continue;
        // closed e.Tail#1 as range 5
        //DEBUG: s.Char#1: 12
        //DEBUG: e.Tail#1: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </17 & TextFromExpr-Prepare-Chars/18 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 AsIs: # Symbol/15 AsIs: # Char/16 AsIs: s.Char#1/12 AsIs: # NoOffset/11 AsIs: )/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[17]);
        refalrts::alloc_name(vm, context[18], functions[efunc_TextFromExprm_Preparem_Chars]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[17] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[0], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & TextFromExpr-Prepare/4 (/7 # TkOpenADT/12 s.BracketOffset#1/11 )/8 (/17 # Symbol/19 # Name/20 e.Name#1/15 s.NameOffset#1/21 )/18 e.Tail#1/13 >/1
      context[13] = context[5];
      context[14] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[12] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left( identifiers[ident_Symbol], context[15], context[16] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::ident_left( identifiers[ident_Name], context[15], context[16] );
      if( ! context[20] )
        continue;
      if( ! refalrts::empty_seq( context[9], context[10] ) )
        continue;
      // closed e.Tail#1 as range 13
      if( ! refalrts::svar_right( context[21], context[15], context[16] ) )
        continue;
      // closed e.Name#1 as range 15
      //DEBUG: s.BracketOffset#1: 11
      //DEBUG: e.Tail#1: 13
      //DEBUG: s.NameOffset#1: 21
      //DEBUG: e.Name#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 # TkOpenADT/12 s.BracketOffset#1/11 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/17 Reuse: # TkOpenADT/19 HalfReuse: s.BracketOffset1 #11/20 AsIs: e.Name#1/15 AsIs: s.NameOffset#1/21 AsIs: )/18 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[19], identifiers[ident_TkOpenADT]);
      refalrts::reinit_svar( context[20], context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & TextFromExpr-Prepare/4 t.Other#1/7 e.Tail#1/5 >/1
    // closed e.Tail#1 as range 5
    //DEBUG: t.Other#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#1/7 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
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

  // </0 & TextFromExpr-Prepare/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & TextFromExpr-Prepare/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TextFromExprm_Prepare("TextFromExpr-Prepare", 493465829U, 3610772638U, func_TextFromExprm_Prepare);


static refalrts::FnResult func_TextFromExprm_Preparem_Chars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & TextFromExpr-Prepare-Chars/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.Chars#1/5 )/8 (/13 # Symbol/15 # Char/16 s.Char#1/18 # NoOffset/17 )/14 e.Tail#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left( identifiers[ident_Symbol], context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = refalrts::ident_left( identifiers[ident_Char], context[11], context[12] );
    if( ! context[16] )
      continue;
    context[17] = refalrts::ident_right( identifiers[ident_NoOffset], context[11], context[12] );
    if( ! context[17] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 9
    if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Chars#1: 5
    //DEBUG: e.Tail#1: 9
    //DEBUG: s.Char#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Char#1/18 # NoOffset/17 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & TextFromExpr-Prepare-Chars/4 AsIs: (/7 AsIs: e.Chars#1/5 HalfReuse: </8 HalfReuse: & EscapeChar/13 HalfReuse: s.Char1 #18/15 HalfReuse: >/16 } Tile{ AsIs: )/14 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[13], functions[efunc_EscapeChar]);
    refalrts::reinit_svar( context[15], context[18] );
    refalrts::reinit_close_call(context[16]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    refalrts::splice_to_freelist_open( vm, context[16], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.Chars#1/5 )/8 e.Tail#1/2 >/1
  // closed e.Chars#1 as range 5
  // closed e.Tail#1 as range 2
  //DEBUG: e.Chars#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkChars/4 } Tile{ AsIs: e.Chars#1/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & TextFromExpr-Prepare/8 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkChars]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_TextFromExprm_Prepare]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TextFromExprm_Preparem_Chars("TextFromExpr-Prepare-Chars", 493465829U, 3610772638U, func_TextFromExprm_Preparem_Chars);


static refalrts::FnResult func_Offset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Offset/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Offset/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Offset/4 # NoOffset/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Offset/4 # NoOffset/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Offset/4 s.Offset#1/5 >/1
  //DEBUG: s.Offset#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } '/'/6 Tile{ AsIs: </0 Reuse: & Symb/4 AsIs: s.Offset#1/5 AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[6], '/');
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Offset("Offset", 493465829U, 3610772638U, func_Offset);


static refalrts::FnResult func_gen_GenInitSubst_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & GenInitSubst=5/4 s.0#2/5 (/8 e.FuncName#1/6 )/9 s.4#5/10 s.2#4/11 (/14 e.Pattern#1/12 )/15 s.1#3/16 s.5#6/17 >/1
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
  // closed e.FuncName#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Pattern#1 as range 12
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0#2: 5
  //DEBUG: e.FuncName#1: 6
  //DEBUG: s.4#5: 10
  //DEBUG: s.2#4: 11
  //DEBUG: e.Pattern#1: 12
  //DEBUG: s.1#3: 16
  //DEBUG: s.5#6: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.5#6/17 HalfReuse: (/1 } # Junk/18 Tile{ HalfReuse: (/0 HalfReuse: # TkOpenCall/4 AsIs: s.0#2/5 HalfReuse: )/8 } (/19 # Symbol/20 # Name/21 Tile{ AsIs: e.FuncName#1/6 } Tile{ AsIs: s.4#5/10 } Tile{ AsIs: )/9 } )/22 (/23 # E/24 Tile{ HalfReuse: s.24 #11/14 AsIs: e.Pattern#1/12 AsIs: )/15 } (/25 # Junk/26 (/27 # TkCloseCall/28 Tile{ AsIs: s.1#3/16 } )/29 )/30 (/31 (/32 # CmdCallSave/33 # AlgLeft/34 s.0#2/5/35 Tile{ AsIs: s.2#4/11 } )/36 )/37 Tile{ ]] }
  refalrts::alloc_ident(vm, context[18], identifiers[ident_Junk]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_Symbol]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_Name]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_ident(vm, context[24], identifiers[ident_E]);
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_ident(vm, context[26], identifiers[ident_Junk]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_ident(vm, context[28], identifiers[ident_TkCloseCall]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_ident(vm, context[33], identifiers[ident_CmdCallSave]);
  refalrts::alloc_ident(vm, context[34], identifiers[ident_AlgLeft]);
  refalrts::copy_stvar(vm, context[35], context[5]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkOpenCall]);
  refalrts::reinit_close_bracket(context[8]);
  refalrts::reinit_svar( context[14], context[11] );
  refalrts::link_brackets( context[31], context[37] );
  refalrts::link_brackets( context[32], context[36] );
  refalrts::link_brackets( context[25], context[30] );
  refalrts::link_brackets( context[27], context[29] );
  refalrts::link_brackets( context[23], context[15] );
  refalrts::link_brackets( context[1], context[22] );
  refalrts::link_brackets( context[19], context[9] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[29], context[35] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[17], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A5("GenInitSubst=5", 493465829U, 3610772638U, func_gen_GenInitSubst_A5);


static refalrts::FnResult func_gen_GenInitSubst_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & GenInitSubst=4/4 s.0#2/5 (/8 e.FuncName#1/6 )/9 s.2#4/10 (/13 e.Pattern#1/11 )/14 s.1#3/15 s.ContextTop#1/16 s.4#5/17 >/1
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
  // closed e.FuncName#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Pattern#1 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0#2: 5
  //DEBUG: e.FuncName#1: 6
  //DEBUG: s.2#4: 10
  //DEBUG: e.Pattern#1: 11
  //DEBUG: s.1#3: 15
  //DEBUG: s.ContextTop#1: 16
  //DEBUG: s.4#5: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.4#5/17 {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: [*]/0 Reuse: & GenInitSubst=5/4 AsIs: s.0#2/5 AsIs: (/8 } Tile{ AsIs: e.FuncName#1/6 } )/19 Tile{ HalfReuse: s.45 #17/9 AsIs: s.2#4/10 AsIs: (/13 AsIs: e.Pattern#1/11 AsIs: )/14 AsIs: s.1#3/15 } {*}/20 </21 & Add/22 Tile{ AsIs: s.ContextTop#1/16 } 5/23 >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_unwrapped_closure(vm, context[20], context[0]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[23], 5UL);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenInitSubst_A5]);
  refalrts::reinit_svar( context[9], context[17] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[8], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[9], context[15] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A4("GenInitSubst=4", 493465829U, 3610772638U, func_gen_GenInitSubst_A4);


static refalrts::FnResult func_gen_GenInitSubst_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & GenInitSubst=3/4 s.0#2/5 (/8 e.FuncName#1/6 )/9 (/12 e.Pattern#1/10 )/13 s.1#3/14 s.ContextTop#1/15 s.2#4/16 >/1
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
  // closed e.FuncName#1 as range 6
  // closed e.Pattern#1 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0#2: 5
  //DEBUG: e.FuncName#1: 6
  //DEBUG: e.Pattern#1: 10
  //DEBUG: s.1#3: 14
  //DEBUG: s.ContextTop#1: 15
  //DEBUG: s.2#4: 16

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.2#4/16 {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & GenInitSubst=4/4 AsIs: s.0#2/5 AsIs: (/8 AsIs: e.FuncName#1/6 AsIs: )/9 HalfReuse: s.24 #16/12 } (/18 Tile{ AsIs: e.Pattern#1/10 } Tile{ AsIs: )/13 AsIs: s.1#3/14 AsIs: s.ContextTop#1/15 } {*}/19 </20 & Add/21 s.ContextTop#1/15/22 4/23 >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_unwrapped_closure(vm, context[19], context[0]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[22], context[15]);
  refalrts::alloc_number(vm, context[23], 4UL);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenInitSubst_A4]);
  refalrts::reinit_svar( context[12], context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[18], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[24] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A3("GenInitSubst=3", 493465829U, 3610772638U, func_gen_GenInitSubst_A3);


static refalrts::FnResult func_gen_GenInitSubst_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & GenInitSubst=2/4 s.0#2/5 (/8 e.FuncName#1/6 )/9 (/12 e.Pattern#1/10 )/13 s.ContextTop#1/14 s.1#3/15 >/1
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
  // closed e.FuncName#1 as range 6
  // closed e.Pattern#1 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.0#2: 5
  //DEBUG: e.FuncName#1: 6
  //DEBUG: e.Pattern#1: 10
  //DEBUG: s.ContextTop#1: 14
  //DEBUG: s.1#3: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </16 Tile{ HalfReuse: [*]/0 Reuse: & GenInitSubst=3/4 AsIs: s.0#2/5 AsIs: (/8 AsIs: e.FuncName#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Pattern#1/10 AsIs: )/13 } Tile{ AsIs: s.1#3/15 } Tile{ AsIs: s.ContextTop#1/14 } {*}/17 </18 & Add/19 s.ContextTop#1/14/20 2/21 >/22 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[0]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[20], context[14]);
  refalrts::alloc_number(vm, context[21], 2UL);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenInitSubst_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[22] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A2("GenInitSubst=2", 493465829U, 3610772638U, func_gen_GenInitSubst_A2);


static refalrts::FnResult func_gen_GenInitSubst_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & GenInitSubst=1/4 (/7 e.FuncName#1/5 )/8 (/11 e.Pattern#1/9 )/12 s.ContextTop#1/13 s.0#2/14 >/1
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
  // closed e.FuncName#1 as range 5
  // closed e.Pattern#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FuncName#1: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: s.ContextTop#1: 13
  //DEBUG: s.0#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.0#2/14 {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 [*]/16 Tile{ HalfReuse: & GenInitSubst=2/0 HalfReuse: s.02 #14/4 AsIs: (/7 AsIs: e.FuncName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: s.ContextTop#1/13 } {*}/17 </18 & Add/19 s.ContextTop#1/13/20 1/21 >/22 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_closure_head(vm, context[16]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[16]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[20], context[13]);
  refalrts::alloc_number(vm, context[21], 1UL);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::reinit_name(context[0], functions[efunc_gen_GenInitSubst_A2]);
  refalrts::reinit_svar( context[4], context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[22] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A1("GenInitSubst=1", 493465829U, 3610772638U, func_gen_GenInitSubst_A1);


static refalrts::FnResult func_GenInitSubst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & GenInitSubst/4 s.ContextTop#1/5 (/8 e.FuncName#1/6 )/9 e.Pattern#1/2 >/1
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
  // closed e.FuncName#1 as range 6
  // closed e.Pattern#1 as range 2
  //DEBUG: s.ContextTop#1: 5
  //DEBUG: e.FuncName#1: 6
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & GenInitSubst=1/10 Tile{ AsIs: (/8 AsIs: e.FuncName#1/6 AsIs: )/9 } (/11 Tile{ AsIs: e.Pattern#1/2 } )/12 Tile{ AsIs: s.ContextTop#1/5 } {*}/13 s.ContextTop#1/5/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_GenInitSubst_A1]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[4]);
  refalrts::copy_stvar(vm, context[14], context[5]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenInitSubst("GenInitSubst", 0U, 0U, func_GenInitSubst);


static refalrts::FnResult func_gen_GenPattern_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & GenPattern=1/4 s.FnGenSubst#1/9 s.ContextTop#2/10 e.Substitutes#2/2 (/7 e.Commands#2/5 )/8 >/1
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
  // closed e.Commands#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitutes#2 as range 2
  //DEBUG: e.Commands#2: 5
  //DEBUG: s.FnGenSubst#1: 9
  //DEBUG: s.ContextTop#2: 10
  //DEBUG: e.Substitutes#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 AsIs: s.FnGenSubst#1/9 AsIs: s.ContextTop#2/10 AsIs: e.Substitutes#2/2 AsIs: (/7 } Tile{ HalfReuse: )/0 } (/11 (/12 # CmdInitB0-Lite/13 )/14 Tile{ AsIs: e.Commands#2/5 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_CmdInitB0m_Lite]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::link_brackets( context[11], context[8] );
  refalrts::link_brackets( context[12], context[14] );
  refalrts::link_brackets( context[7], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenPattern_A1("GenPattern=1", 493465829U, 3610772638U, func_gen_GenPattern_A1);


static refalrts::FnResult func_GenPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & GenPattern/4 s.FnGenSubst#1/5 (/8 e.Name#1/6 )/9 e.Pattern#1/2 >/1
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
  // closed e.Name#1 as range 6
  // closed e.Pattern#1 as range 2
  //DEBUG: s.FnGenSubst#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & GenPattern=1/10 Tile{ AsIs: s.FnGenSubst#1/5 } {*}/11 </12 & GenInitSubst/13 0/14 Tile{ AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: e.Pattern#1/2 AsIs: >/1 } >/15 Tile{ ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_GenPattern_A1]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[4]);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_GenInitSubst]);
  refalrts::alloc_number(vm, context[14], 0UL);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenPattern("GenPattern", 0U, 0U, func_GenPattern);


static refalrts::FnResult func_gen_GenResult_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & GenResult=1/4 (/7 e.PatternCommands#1/5 )/8 (/11 e.PatternVars#1/9 )/12 s.ContextCount#2/13 e.SentenceTailCommands#2/2 >/1
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
  // closed e.PatternCommands#1 as range 5
  // closed e.PatternVars#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SentenceTailCommands#2 as range 2
  //DEBUG: e.PatternCommands#1: 5
  //DEBUG: e.PatternVars#1: 9
  //DEBUG: s.ContextCount#2: 13
  //DEBUG: e.SentenceTailCommands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.ContextCount#2/13 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 & FoldOpenELoops/15 (/16 Tile{ HalfReuse: # CmdIssueMemory/0 HalfReuse: s.ContextCount2 #13/4 HalfReuse: )/7 AsIs: e.PatternCommands#1/5 HalfReuse: </8 HalfReuse: & PutVariableDebugTable/11 AsIs: e.PatternVars#1/9 HalfReuse: >/12 } Tile{ AsIs: e.SentenceTailCommands#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_FoldOpenELoops]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::reinit_ident(context[0], identifiers[ident_CmdIssueMemory]);
  refalrts::reinit_svar( context[4], context[13] );
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_PutVariableDebugTable]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[16], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResult_A1("GenResult=1", 493465829U, 3610772638U, func_gen_GenResult_A1);


static refalrts::FnResult func_GenResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & GenResult/4 s.FnGenResult#1/5 (/8 e.Conditions#1/6 )/9 (/12 e.Result#1/10 )/13 s.ContextOffset#1/14 (/17 e.PatternVars#1/15 )/18 (/21 e.MarkedPattern#1/19 )/22 e.PatternCommands#1/2 >/1
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
  // closed e.Conditions#1 as range 6
  // closed e.Result#1 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.PatternVars#1 as range 15
  // closed e.MarkedPattern#1 as range 19
  // closed e.PatternCommands#1 as range 2
  //DEBUG: s.FnGenResult#1: 5
  //DEBUG: e.Conditions#1: 6
  //DEBUG: e.Result#1: 10
  //DEBUG: s.ContextOffset#1: 14
  //DEBUG: e.PatternVars#1: 15
  //DEBUG: e.MarkedPattern#1: 19
  //DEBUG: e.PatternCommands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & GenResult=1/23 Tile{ AsIs: (/8 } Tile{ AsIs: e.PatternCommands#1/2 } Tile{ AsIs: )/9 AsIs: (/12 } e.PatternVars#1/15/24 )/26 {*}/27 </28 Tile{ HalfReuse: & SentenceTail/13 AsIs: s.ContextOffset#1/14 AsIs: (/17 AsIs: e.PatternVars#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.MarkedPattern#1/19 AsIs: )/22 } Tile{ AsIs: e.Conditions#1/6 } (/29 Tile{ AsIs: s.FnGenResult#1/5 } Tile{ AsIs: e.Result#1/10 } )/30 >/31 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[23], functions[efunc_gen_GenResult_A1]);
  refalrts::copy_evar(vm, context[24], context[25], context[15], context[16]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_unwrapped_closure(vm, context[27], context[4]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[13], functions[efunc_SentenceTail]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[28] );
  refalrts::link_brackets( context[29], context[30] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[12], context[26] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[13], context[22] );
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[27] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResult("GenResult", 0U, 0U, func_GenResult);


static refalrts::FnResult func_FoldOpenELoops(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & FoldOpenELoops/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & FoldOpenELoops/4 e.Commands-B#1/7 (/13 # CmdOpenedE/15 # AlgLeft/16 s.BracketNum#1/17 s.VarNumber#1/18 )/14 e.Commands-E#1/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_CmdOpenedE], context[11], context[12] );
      if( ! context[15] )
        continue;
      context[16] = refalrts::ident_left( identifiers[ident_AlgLeft], context[11], context[12] );
      if( ! context[16] )
        continue;
      // closed e.Commands-E#1 as range 9
      if( ! refalrts::svar_left( context[17], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.Commands-B#1: 7
      //DEBUG: e.Commands-E#1: 9
      //DEBUG: s.BracketNum#1: 17
      //DEBUG: s.VarNumber#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands-B#1/7 } Tile{ AsIs: (/13 Reuse: # CmdOpenELoop/15 AsIs: # AlgLeft/16 AsIs: s.BracketNum#1/17 AsIs: s.VarNumber#1/18 HalfReuse: </14 } Tile{ AsIs: & FoldOpenELoops/4 } Tile{ AsIs: e.Commands-E#1/9 } Tile{ HalfReuse: >/0 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident(context[15], identifiers[ident_CmdOpenELoop]);
      refalrts::reinit_open_call(context[14]);
      refalrts::reinit_close_call(context[0]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[13], context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FoldOpenELoops/4 e.Commands#1/2 >/1
  // closed e.Commands#1 as range 2
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FoldOpenELoops/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FoldOpenELoops("FoldOpenELoops", 0U, 0U, func_FoldOpenELoops);


static refalrts::FnResult func_gen_PutVariableDebugTable_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & PutVariableDebugTable\1/4 (/7 s.Mode#2/9 (/12 e.Index#2/10 )/13 s.FirstOffset#2/14 e.Offsets#2/5 )/8 >/1
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
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Index#2 as range 10
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Offsets#2 as range 5
  //DEBUG: s.Mode#2: 9
  //DEBUG: e.Index#2: 10
  //DEBUG: s.FirstOffset#2: 14
  //DEBUG: e.Offsets#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode#2/9 (/12 {REMOVED TILE} )/13 s.FirstOffset#2/14 e.Offsets#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdVariableDebugTable/4 HalfReuse: s.Mode2 #9/7 } Tile{ AsIs: e.Index#2/10 } Tile{ HalfReuse: s.FirstOffset2 #14/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdVariableDebugTable]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_svar( context[8], context[14] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PutVariableDebugTable_L1("PutVariableDebugTable\\1", 493465829U, 3610772638U, func_gen_PutVariableDebugTable_L1);


static refalrts::FnResult func_PutVariableDebugTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PutVariableDebugTable/4 e.PatternVars#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.PatternVars#1 as range 2
  //DEBUG: e.PatternVars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & PutVariableDebugTable\1/4 AsIs: e.PatternVars#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_PutVariableDebugTable_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutVariableDebugTable("PutVariableDebugTable", 0U, 0U, func_PutVariableDebugTable);


static refalrts::FnResult func_gen_CollectStrings_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CollectStrings$1\1/4 (/7 e.Chars#2/5 )/8 e.Tail#2/2 >/1
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
  // closed e.Chars#2 as range 5
  // closed e.Tail#2 as range 2
  //DEBUG: e.Chars#2: 5
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkString/4 } Tile{ AsIs: e.Chars#2/5 } Tile{ HalfReuse: )/7 } </9 Tile{ HalfReuse: & CollectStrings/8 AsIs: e.Tail#2/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TkString]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_CollectStrings]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CollectStrings_S1L1("CollectStrings$1\\1", 493465829U, 3610772638U, func_gen_CollectStrings_S1L1);


static refalrts::FnResult func_CollectStrings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & CollectStrings/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CollectStrings/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & CollectStrings/4 (/7 s.new#3/11 e.new#4/9 )/8 e.new#5/5 >/1
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
        continue;
      // closed e.new#5 as range 5
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.new#4 as range 9
      do {
        // </0 & CollectStrings/4 (/7 # Symbol/11 # Char/16 s.Value1#1/23 )/8 (/19 # Symbol/21 # Char/22 s.Value2#1/24 )/20 e.Tail#1/14 >/1
        context[12] = context[9];
        context[13] = context[10];
        context[14] = context[5];
        context[15] = context[6];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[11] ) )
          continue;
        context[16] = refalrts::ident_left( identifiers[ident_Char], context[12], context[13] );
        if( ! context[16] )
          continue;
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::brackets_left( context[17], context[18], context[14], context[15] );
        if( ! context[19] )
          continue;
        refalrts::bracket_pointers(context[19], context[20]);
        context[21] = refalrts::ident_left( identifiers[ident_Symbol], context[17], context[18] );
        if( ! context[21] )
          continue;
        context[22] = refalrts::ident_left( identifiers[ident_Char], context[17], context[18] );
        if( ! context[22] )
          continue;
        // closed e.Tail#1 as range 14
        if( ! refalrts::svar_left( context[23], context[12], context[13] ) )
          continue;
        if( ! refalrts::empty_seq( context[12], context[13] ) )
          continue;
        if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        //DEBUG: e.Tail#1: 14
        //DEBUG: s.Value1#1: 23
        //DEBUG: s.Value2#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} s.Value1#1/23 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </8 HalfReuse: & BuildString/19 HalfReuse: (/21 HalfReuse: s.Value11 #23/22 AsIs: s.Value2#1/24 AsIs: )/20 AsIs: e.Tail#1/14 AsIs: >/1 } Tile{ HalfReuse: & CollectStrings$1\1/11 HalfReuse: >/16 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[8]);
        refalrts::reinit_name(context[19], functions[efunc_BuildString]);
        refalrts::reinit_open_bracket(context[21]);
        refalrts::reinit_svar( context[22], context[23] );
        refalrts::reinit_name(context[11], functions[efunc_gen_CollectStrings_S1L1]);
        refalrts::reinit_close_call(context[16]);
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[8] );
        refalrts::link_brackets( context[21], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[11], context[16] );
        res = refalrts::splice_evar( res, context[8], context[1] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CollectStrings/4 (/7 # Brackets/11 e.InBrackets#1/9 )/8 e.Tail#1/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[11] ) )
          continue;
        // closed e.InBrackets#1 as range 9
        // closed e.Tail#1 as range 5
        //DEBUG: e.InBrackets#1: 9
        //DEBUG: e.Tail#1: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/11 AsIs: e.InBrackets#1/9 HalfReuse: >/8 } )/12 </13 & CollectStrings/14 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[12]);
        refalrts::alloc_open_call(vm, context[13]);
        refalrts::alloc_name(vm, context[14], functions[efunc_CollectStrings]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_CollectStrings]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[0], context[12] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[12], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CollectStrings/4 (/7 # CallBrackets/11 e.InBrackets#1/9 )/8 e.Tail#1/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[11] ) )
          continue;
        // closed e.InBrackets#1 as range 9
        // closed e.Tail#1 as range 5
        //DEBUG: e.InBrackets#1: 9
        //DEBUG: e.Tail#1: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/11 AsIs: e.InBrackets#1/9 HalfReuse: >/8 } )/12 </13 & CollectStrings/14 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[12]);
        refalrts::alloc_open_call(vm, context[13]);
        refalrts::alloc_name(vm, context[14], functions[efunc_CollectStrings]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_CollectStrings]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[0], context[12] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[12], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CollectStrings/4 (/7 # ADT-Brackets/11 e.InBrackets#1/9 )/8 e.Tail#1/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[11] ) )
        continue;
      // closed e.InBrackets#1 as range 9
      // closed e.Tail#1 as range 5
      //DEBUG: e.InBrackets#1: 9
      //DEBUG: e.Tail#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/11 AsIs: e.InBrackets#1/9 HalfReuse: >/8 } )/12 </13 & CollectStrings/14 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[12]);
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_CollectStrings]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[11], functions[efunc_CollectStrings]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[0], context[12] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CollectStrings/4 t.OtherTerm#1/7 e.Tail#1/5 >/1
    // closed e.Tail#1 as range 5
    //DEBUG: t.OtherTerm#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/7 } Tile{ AsIs: </0 AsIs: & CollectStrings/4 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
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

  // </0 & CollectStrings/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CollectStrings/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectStrings("CollectStrings", 0U, 0U, func_CollectStrings);


static refalrts::FnResult func_BuildString(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & BuildString/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & BuildString/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 (/13 # Symbol/15 # Char/16 s.Value#1/17 )/14 e.Tail#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left( identifiers[ident_Symbol], context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = refalrts::ident_left( identifiers[ident_Char], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.Chars#1 as range 5
    // closed e.Tail#1 as range 9
    if( ! refalrts::svar_left( context[17], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Chars#1: 5
    //DEBUG: e.Tail#1: 9
    //DEBUG: s.Value#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Symbol/15 # Char/16 s.Value#1/17 )/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BuildString/4 AsIs: (/7 AsIs: e.Chars#1/5 HalfReuse: s.Value1 #17/8 HalfReuse: )/13 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[8], context[17] );
    refalrts::reinit_close_bracket(context[13]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[13], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & BuildString/4 (/7 e.Chars#1/5 )/8 e.Tail#1/2 >/1
  // closed e.Chars#1 as range 5
  // closed e.Tail#1 as range 2
  //DEBUG: e.Chars#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & BuildString/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Chars#1/5 AsIs: )/8 } Tile{ AsIs: e.Tail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BuildString("BuildString", 493465829U, 3610772638U, func_BuildString);


static refalrts::FnResult func_gen_MakeSavers_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeSavers=1/4 (/7 s.ContextOffset#2/9 e.CmdSaves#2/5 )/8 e.SubstitutesAnsJunks#2/2 >/1
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
  // closed e.SubstitutesAnsJunks#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CmdSaves#2 as range 5
  //DEBUG: e.SubstitutesAnsJunks#2: 2
  //DEBUG: s.ContextOffset#2: 9
  //DEBUG: e.CmdSaves#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 s.ContextOffset#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #9/0 HalfReuse: (/4 } Tile{ AsIs: e.CmdSaves#2/5 } Tile{ AsIs: )/8 } Tile{ AsIs: e.SubstitutesAnsJunks#2/2 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeSavers_A1("MakeSavers=1", 493465829U, 3610772638U, func_gen_MakeSavers_A1);


static refalrts::FnResult func_gen_MakeSavers_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & MakeSavers=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeSavers=1\1/4 (/7 s.new#1/13 e.new#2/5 )/8 (/11 s.new#3/14 e.new#4/9 )/12 >/1
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
  // closed e.new#2 as range 5
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 9
  do {
    // </0 & MakeSavers=1\1/4 (/7 s.ContextOffset#2/13 e.CmdSaves#2/5 )/8 (/11 # Junk/14 e.Junk#2/9 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_Junk], context[14] ) )
      continue;
    // closed e.CmdSaves#2 as range 5
    // closed e.Junk#2 as range 9
    //DEBUG: s.ContextOffset#2: 13
    //DEBUG: e.CmdSaves#2: 5
    //DEBUG: e.Junk#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MakeSavers=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.ContextOffset#2/13 AsIs: e.CmdSaves#2/5 AsIs: )/8 AsIs: (/11 AsIs: # Junk/14 AsIs: e.Junk#2/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeSavers=1\1/4 (/7 s.new#5/13 e.new#6/5 )/8 (/11 s.new#7/14 s.new#8/15 e.new#9/9 )/12 >/1
  // closed e.new#6 as range 5
  if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#9 as range 9
  do {
    // </0 & MakeSavers=1\1/4 (/7 s.new#10/13 e.new#11/5 )/8 (/11 # E/14 s.new#12/15 e.new#13/9 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_E], context[14] ) )
      continue;
    // closed e.new#11 as range 5
    // closed e.new#13 as range 9
    do {
      // </0 & MakeSavers=1\1/4 (/7 s.ContextOffset#2/13 e.CmdSaves#2/5 )/8 (/11 # E/14 s.Num#2/15 )/12 >/1
      if( ! refalrts::empty_seq( context[9], context[10] ) )
        continue;
      // closed e.CmdSaves#2 as range 5
      //DEBUG: s.ContextOffset#2: 13
      //DEBUG: s.Num#2: 15
      //DEBUG: e.CmdSaves#2: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & MakeSavers=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.ContextOffset#2/13 AsIs: e.CmdSaves#2/5 AsIs: )/8 AsIs: (/11 AsIs: # E/14 AsIs: s.Num#2/15 AsIs: )/12 } Tile{ ]] }
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & MakeSavers=1\1/4 (/7 s.ContextOffset#2/13 e.CmdSaves#2/5 )/8 (/11 # E/14 s.Num#2/15 (/20 # TkVariable/22 'e'/23 e.Index#2/18 )/21 )/12 >/1
      context[16] = context[9];
      context[17] = context[10];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = refalrts::ident_left( identifiers[ident_TkVariable], context[18], context[19] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_left( 'e', context[18], context[19] );
      if( ! context[23] )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.CmdSaves#2 as range 5
      // closed e.Index#2 as range 18
      //DEBUG: s.ContextOffset#2: 13
      //DEBUG: s.Num#2: 15
      //DEBUG: e.CmdSaves#2: 5
      //DEBUG: e.Index#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & MakeSavers=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.ContextOffset#2/13 AsIs: e.CmdSaves#2/5 AsIs: )/8 AsIs: (/11 AsIs: # E/14 AsIs: s.Num#2/15 AsIs: (/20 AsIs: # TkVariable/22 AsIs: 'e'/23 AsIs: e.Index#2/18 AsIs: )/21 AsIs: )/12 } Tile{ ]] }
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MakeSavers=1\1/4 (/7 s.ContextOffset#2/13 e.CmdSaves#2/5 )/8 (/11 # E/14 s.Num#2/15 e.Range#2/9 )/12 >/1
    // closed e.CmdSaves#2 as range 5
    // closed e.Range#2 as range 9
    //DEBUG: s.ContextOffset#2: 13
    //DEBUG: s.Num#2: 15
    //DEBUG: e.CmdSaves#2: 5
    //DEBUG: e.Range#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Inc2/7 AsIs: s.ContextOffset#2/13 } >/16 Tile{ AsIs: e.CmdSaves#2/5 } (/17 # CmdSave/18 Tile{ AsIs: s.Num#2/15 } s.ContextOffset#2/13/19 Tile{ AsIs: )/12 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # E/14 } s.ContextOffset#2/13/20 Tile{ AsIs: e.Range#2/9 } Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_ident(vm, context[18], identifiers[ident_CmdSave]);
    refalrts::copy_stvar(vm, context[19], context[13]);
    refalrts::copy_stvar(vm, context[20], context[13]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Inc2]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[17], context[12] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[8], context[14] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeSavers=1\1/4 (/7 s.ContextOffset#2/13 e.CmdSaves#2/5 )/8 (/11 s.S-or-T#2/14 s.Num#2/15 e.Range#2/9 )/12 >/1
  // closed e.CmdSaves#2 as range 5
  // closed e.Range#2 as range 9
  //DEBUG: s.ContextOffset#2: 13
  //DEBUG: s.S-or-T#2: 14
  //DEBUG: s.Num#2: 15
  //DEBUG: e.CmdSaves#2: 5
  //DEBUG: e.Range#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MakeSavers=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.ContextOffset#2/13 AsIs: e.CmdSaves#2/5 AsIs: )/8 AsIs: (/11 AsIs: s.S-or-T#2/14 AsIs: s.Num#2/15 AsIs: e.Range#2/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeSavers_A1L1("MakeSavers=1\\1", 493465829U, 3610772638U, func_gen_MakeSavers_A1L1);


static refalrts::FnResult func_MakeSavers(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & MakeSavers/4 s.OriginContextOffset#1/5 e.SubstitutesAnsJunks#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SubstitutesAnsJunks#1 as range 2
  //DEBUG: s.OriginContextOffset#1: 5
  //DEBUG: e.SubstitutesAnsJunks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeSavers=1/4 } </6 & MapReduce/7 & MakeSavers=1\1/8 (/9 Tile{ AsIs: s.OriginContextOffset#1/5 } )/10 Tile{ AsIs: e.SubstitutesAnsJunks#1/2 } >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_MapReduce]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_MakeSavers_A1L1]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_gen_MakeSavers_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[6] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeSavers("MakeSavers", 0U, 0U, func_MakeSavers);


//End of file
