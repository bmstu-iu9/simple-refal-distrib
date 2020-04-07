// This file automatically generated from 'HighLevelRASL-Common.ref'
// Don't edit! Edit 'HighLevelRASL-Common.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1810824600_1680635620
#define COOKIE1_ 1810824600U
#define COOKIE2_ 1680635620U

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
  efunc_Inc2 = 23,
  efunc_Symb = 24,
  efunc_Offset = 25,
  efunc_DisplayName = 26,
  efunc_EscapeChar = 27,
  efunc_gen_Map_Z1 = 28,
  efunc_PrintVar = 29,
  efunc_SafeDisplayName = 30,
  efunc_TextFromExpr = 31,
  efunc_gen_Map_Z2 = 32,
  efunc_TextFromExprm_Prepare = 33,
  efunc_gen_Map_Z3 = 34,
  efunc_TextFromExprm_Preparem_Chars = 35,
  efunc_gen_GenInitSubst_A5 = 36,
  efunc_gen_GenInitSubst_A4 = 37,
  efunc_gen_GenInitSubst_A3 = 38,
  efunc_gen_GenInitSubst_A2 = 39,
  efunc_GenInitSubst = 40,
  efunc_gen_GenPattern_A1 = 41,
  efunc_FoldOpenELoops = 42,
  efunc_PutVariableDebugTable = 43,
  efunc_gen_GenResult_A1 = 44,
  efunc_SentenceTail = 45,
  efunc_gen_Map_Z4 = 46,
  efunc_CollectStrings = 47,
  efunc_BuildString = 48,
  efunc_gen_CollectStrings_S1L1 = 49,
  efunc_MapAccum = 50,
  efunc_gen_MakeSavers_A1L1 = 51,
  efunc_gen_MakeSavers_A1 = 52,
  efunc_gen_TextFromExpr_L1D26 = 53,
  efunc_gen_SafeDisplayName_L1D6 = 54,
  efunc_gen_PutVariableDebugTable_L1D1 = 55,
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
    refalrts::alloc_number(vm, context[9], 1680635620UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 1810824600UL);
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
  refalrts::reinit_number(context[5], 1810824600UL);
  refalrts::reinit_number(context[7], 1680635620UL);
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
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
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
    //TRASH: {REMOVED TILE} s.ContextOffset#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/7 Tile{ HalfReuse: s.ContextOffset1 #5/6 AsIs: >/1 ]] }
    refalrts::alloc_number(vm, context[7], 1UL);
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_svar( context[6], context[5] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IncVarOffset/4 s.ContextOffset#1/5 's'/6 >/1
  if( ! refalrts::char_term( 's', context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ContextOffset#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.ContextOffset#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/7 Tile{ HalfReuse: s.ContextOffset1 #5/6 AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[7], 1UL);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_svar( context[6], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
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
    // </0 & PrintVar/4 s.Mode#1/5 e.Index#1/7 # NoDepth/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_NoDepth], context[6] ) )
      continue;
    // closed e.Index#1 as range 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Index#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} # NoDepth/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Mode1 #5/0 HalfReuse: '.'/4 } Tile{ AsIs: e.Index#1/7 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[5] );
    refalrts::reinit_char(context[4], '.');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
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
        // </0 & TextFromExpr\1/4 (/5 # TkOpenADT/9 e.new#8/13 s.new#7/12 )/6 >/1
        context[13] = context[10];
        context[14] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[9] ) )
          continue;
        // closed e.new#8 as range 13
        do {
          // </0 & TextFromExpr\1/4 (/5 # TkOpenADT/9 s.ContextOffset#2/17 e.Name#2/15 s.NameOffset#2/12 )/6 >/1
          context[15] = context[13];
          context[16] = context[14];
          if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
            continue;
          // closed e.Name#2 as range 15
          //DEBUG: s.NameOffset#2: 12
          //DEBUG: s.ContextOffset#2: 17
          //DEBUG: e.Name#2: 15

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.NameOffset#2/12 {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </5 HalfReuse: & Offset/9 AsIs: s.ContextOffset#2/17 } >/18 </19 & DisplayName/20 Tile{ AsIs: e.Name#2/15 } >/21 </22 & Offset/23 Tile{ HalfReuse: s.NameOffset2 #12/6 AsIs: >/1 ]] }
          refalrts::alloc_close_call(vm, context[18]);
          refalrts::alloc_open_call(vm, context[19]);
          refalrts::alloc_name(vm, context[20], functions[efunc_DisplayName]);
          refalrts::alloc_close_call(vm, context[21]);
          refalrts::alloc_open_call(vm, context[22]);
          refalrts::alloc_name(vm, context[23], functions[efunc_Offset]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '[');
          refalrts::reinit_open_call(context[5]);
          refalrts::reinit_name(context[9], functions[efunc_Offset]);
          refalrts::reinit_svar( context[6], context[12] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[22] );
          refalrts::push_stack( vm, context[21] );
          refalrts::push_stack( vm, context[19] );
          refalrts::push_stack( vm, context[18] );
          refalrts::push_stack( vm, context[5] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[6];
          res = refalrts::splice_evar( res, context[21], context[23] );
          res = refalrts::splice_evar( res, context[15], context[16] );
          res = refalrts::splice_evar( res, context[18], context[20] );
          refalrts::splice_to_freelist_open( vm, context[17], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & TextFromExpr\1/4 (/5 # TkOpenADT/9 s.ContextOffset#2/12 )/6 >/1
        if( ! refalrts::empty_seq( context[13], context[14] ) )
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
      // </0 & TextFromExpr\1/4 (/5 # TkChars/9 e.Chars#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TkChars], context[9] ) )
        continue;
      // closed e.Chars#2 as range 10
      //DEBUG: e.Chars#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & TextFromExpr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/5 HalfReuse: '\''/9 AsIs: e.Chars#2/10 HalfReuse: '\''/6 } Tile{ ]] }
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

        // </0 & TextFromExpr\1/4 (/5 # Symbol/9 # Name/15 e.Name#2/16 s.Offset#2/12 )/6 >/1
        context[16] = context[13];
        context[17] = context[14];
        if( ! refalrts::ident_term( identifiers[ident_Name], context[15] ) )
          continue;
        // closed e.Name#2 as range 16
        //DEBUG: s.Offset#2: 12
        //DEBUG: e.Name#2: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/12 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '&'/4 HalfReuse: ' '/5 HalfReuse: </9 HalfReuse: & DisplayName/15 } Tile{ AsIs: e.Name#2/16 } >/18 </19 & Offset/20 Tile{ HalfReuse: s.Offset2 #12/6 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_Offset]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '&');
        refalrts::reinit_char(context[5], ' ');
        refalrts::reinit_open_call(context[9]);
        refalrts::reinit_name(context[15], functions[efunc_DisplayName]);
        refalrts::reinit_svar( context[6], context[12] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[9] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[6];
        res = refalrts::splice_evar( res, context[18], context[20] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::splice_to_freelist_open( vm, context[15], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & TextFromExpr\1/4 (/5 # TkString/9 e.String#2/13 s.Offset#2/12 )/6 >/1
        context[13] = context[10];
        context[14] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_TkString], context[9] ) )
          continue;
        // closed e.String#2 as range 13
        //DEBUG: s.Offset#2: 12
        //DEBUG: e.String#2: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/12 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: </4 HalfReuse: & Map@1/5 } Tile{ AsIs: e.String#2/13 } Tile{ HalfReuse: >/9 } '\"'/15 </16 & Offset/17 Tile{ HalfReuse: s.Offset2 #12/6 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[15], '\"');
        refalrts::alloc_open_call(vm, context[16]);
        refalrts::alloc_name(vm, context[17], functions[efunc_Offset]);
        refalrts::reinit_char(context[0], '\"');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[5], functions[efunc_gen_Map_Z1]);
        refalrts::reinit_close_call(context[9]);
        refalrts::reinit_svar( context[6], context[12] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[9] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[6];
        res = refalrts::splice_evar( res, context[15], context[17] );
        res = refalrts::splice_evar( res, context[9], context[9] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
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
          // </0 & TextFromExpr\1/4 (/5 # TkVariable/9 s.Mode#2/15 e.Index#2/19 s.Depth#2/18 s.Offset#2/12 )/6 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[9] ) )
            continue;
          // closed e.Index#2 as range 19
          //DEBUG: s.Mode#2: 15
          //DEBUG: s.Depth#2: 18
          //DEBUG: s.Offset#2: 12
          //DEBUG: e.Index#2: 19

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/12 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </5 HalfReuse: & PrintVar/9 AsIs: s.Mode#2/15 AsIs: e.Index#2/19 AsIs: s.Depth#2/18 } >/21 Tile{ AsIs: </0 } & Offset/22 Tile{ HalfReuse: s.Offset2 #12/6 AsIs: >/1 ]] }
          refalrts::alloc_close_call(vm, context[21]);
          refalrts::alloc_name(vm, context[22], functions[efunc_Offset]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_open_call(context[5]);
          refalrts::reinit_name(context[9], functions[efunc_PrintVar]);
          refalrts::reinit_svar( context[6], context[12] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[21] );
          refalrts::push_stack( vm, context[5] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[6];
          res = refalrts::splice_evar( res, context[22], context[22] );
          res = refalrts::splice_evar( res, context[0], context[0] );
          res = refalrts::splice_evar( res, context[21], context[21] );
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

      // </0 & TextFromExpr\1/4 (/5 # Symbol/9 # Identifier/15 e.Name#2/16 s.Offset#2/12 )/6 >/1
      context[16] = context[13];
      context[17] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_Symbol], context[9] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Identifier], context[15] ) )
        continue;
      // closed e.Name#2 as range 16
      //DEBUG: s.Offset#2: 12
      //DEBUG: e.Name#2: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '#'/4 HalfReuse: ' '/5 HalfReuse: </9 HalfReuse: & SafeDisplayName/15 } Tile{ AsIs: e.Name#2/16 } >/18 </19 & Offset/20 Tile{ HalfReuse: s.Offset2 #12/6 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[18]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_Offset]);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], '#');
      refalrts::reinit_char(context[5], ' ');
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[15], functions[efunc_SafeDisplayName]);
      refalrts::reinit_svar( context[6], context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[18], context[20] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & TextFromExpr\1/4 (/5 # Tile/9 e.SubRange#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Tile], context[9] ) )
        continue;
      // closed e.SubRange#2 as range 10
      //DEBUG: e.SubRange#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" Til"/12 Tile{ HalfReuse: 'e'/0 HalfReuse: '{'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/10 HalfReuse: >/6 HalfReuse: ' '/1 } '}'/14 Tile{ ]] }
      refalrts::alloc_chars(vm, context[12], context[13], " Til", 4);
      refalrts::alloc_char(vm, context[14], '}');
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
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & TextFromExpr\1/4 (/5 # AsIs/9 e.SubRange#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_AsIs], context[9] ) )
        continue;
      // closed e.SubRange#2 as range 10
      //DEBUG: e.SubRange#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" As"/12 Tile{ HalfReuse: 'I'/1 } Tile{ HalfReuse: 's'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/10 HalfReuse: >/6 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[12], context[13], " As", 3);
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
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & TextFromExpr\1/4 (/5 # Reuse/9 e.SubRange#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Reuse], context[9] ) )
        continue;
      // closed e.SubRange#2 as range 10
      //DEBUG: e.SubRange#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" Re"/12 Tile{ HalfReuse: 'u'/1 } 's'/14 Tile{ HalfReuse: 'e'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/10 HalfReuse: >/6 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[12], context[13], " Re", 3);
      refalrts::alloc_char(vm, context[14], 's');
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
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & TextFromExpr\1/4 (/5 # HalfReuse/9 e.SubRange#2/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[9] ) )
        continue;
      // closed e.SubRange#2 as range 10
      //DEBUG: e.SubRange#2: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" Ha"/12 Tile{ HalfReuse: 'l'/1 }"fReus"/14 Tile{ HalfReuse: 'e'/0 HalfReuse: ':'/4 HalfReuse: </5 HalfReuse: & TextFromExpr/9 AsIs: e.SubRange#2/10 HalfReuse: >/6 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[12], context[13], " Ha", 3);
      refalrts::alloc_chars(vm, context[14], context[15], "fReus", 5);
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
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[12], context[13] );
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

static refalrts::NativeReference nat_ref_gen_TextFromExpr_L1("TextFromExpr\\1", COOKIE1_, COOKIE2_, func_gen_TextFromExpr_L1);


static refalrts::FnResult func_TextFromExpr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
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
  //RESULT: Tile{ [[ } </5 & Map@2/6 Tile{ AsIs: </0 Reuse: & TextFromExpr-Prepare/4 AsIs: e.Expr#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Map_Z2]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_TextFromExprm_Prepare]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
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

static refalrts::NativeReference nat_ref_gen_SafeDisplayName_L1("SafeDisplayName\\1", COOKIE1_, COOKIE2_, func_gen_SafeDisplayName_L1);


static refalrts::FnResult func_SafeDisplayName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
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
  //RESULT: Tile{ [[ } </5 & Map@3/6 Tile{ AsIs: </0 Reuse: & DisplayName/4 AsIs: e.Name#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Map_Z3]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_DisplayName]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SafeDisplayName("SafeDisplayName", COOKIE1_, COOKIE2_, func_SafeDisplayName);


static refalrts::FnResult func_TextFromExprm_Prepare(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
      // </0 & TextFromExpr-Prepare/4 (/7 e.new#3/11 s.new#4/14 s.new#5/13 )/8 e.new#6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#6 as range 9
      if( ! refalrts::svar_right( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_right( context[14], context[11], context[12] ) )
        continue;
      // closed e.new#3 as range 11
      do {
        // </0 & TextFromExpr-Prepare/4 (/7 # Symbol/19 # Char/20 s.Char#1/14 # NoOffset/13 )/8 e.Tail#1/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_NoOffset], context[13] ) )
          continue;
        context[19] = refalrts::ident_left( identifiers[ident_Symbol], context[15], context[16] );
        if( ! context[19] )
          continue;
        context[20] = refalrts::ident_left( identifiers[ident_Char], context[15], context[16] );
        if( ! context[20] )
          continue;
        if( ! refalrts::empty_seq( context[15], context[16] ) )
          continue;
        // closed e.Tail#1 as range 17
        //DEBUG: s.Char#1: 14
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </21 & TextFromExpr-Prepare-Chars/22 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: (/7 AsIs: # Symbol/19 AsIs: # Char/20 AsIs: s.Char#1/14 AsIs: # NoOffset/13 AsIs: )/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[22], functions[efunc_TextFromExprm_Preparem_Chars]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[21] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[0], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[21], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & TextFromExpr-Prepare/4 (/7 # TkOpenADT/14 s.BracketOffset#1/13 )/8 (/19 # Symbol/21 # Name/22 e.Name#1/17 s.NameOffset#1/23 )/20 e.Tail#1/15 >/1
      context[15] = context[9];
      context[16] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[14] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left( identifiers[ident_Symbol], context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::ident_left( identifiers[ident_Name], context[17], context[18] );
      if( ! context[22] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.Tail#1 as range 15
      if( ! refalrts::svar_right( context[23], context[17], context[18] ) )
        continue;
      // closed e.Name#1 as range 17
      //DEBUG: s.BracketOffset#1: 13
      //DEBUG: e.Tail#1: 15
      //DEBUG: s.NameOffset#1: 23
      //DEBUG: e.Name#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 # TkOpenADT/14 s.BracketOffset#1/13 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # TkOpenADT/21 HalfReuse: s.BracketOffset1 #13/22 AsIs: e.Name#1/17 AsIs: s.NameOffset#1/23 AsIs: )/20 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[21], identifiers[ident_TkOpenADT]);
      refalrts::reinit_svar( context[22], context[13] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & TextFromExpr-Prepare/4 t.Other#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Other#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#1/7 } Tile{ AsIs: </0 AsIs: & TextFromExpr-Prepare/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_TextFromExprm_Prepare("TextFromExpr-Prepare", COOKIE1_, COOKIE2_, func_TextFromExprm_Prepare);


static refalrts::FnResult func_TextFromExprm_Preparem_Chars(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
    // </0 & TextFromExpr-Prepare-Chars/4 (/7 e.Chars#1/9 )/8 (/15 # Symbol/17 # Char/18 s.Char#1/20 # NoOffset/19 )/16 e.Tail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left( identifiers[ident_Symbol], context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = refalrts::ident_left( identifiers[ident_Char], context[13], context[14] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::ident_right( identifiers[ident_NoOffset], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.Chars#1 as range 9
    // closed e.Tail#1 as range 11
    if( ! refalrts::svar_left( context[20], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: e.Chars#1: 9
    //DEBUG: e.Tail#1: 11
    //DEBUG: s.Char#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Char#1/20 # NoOffset/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & TextFromExpr-Prepare-Chars/4 AsIs: (/7 AsIs: e.Chars#1/9 HalfReuse: </8 HalfReuse: & EscapeChar/15 HalfReuse: s.Char1 #20/17 HalfReuse: >/18 } Tile{ AsIs: )/16 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[15], functions[efunc_EscapeChar]);
    refalrts::reinit_svar( context[17], context[20] );
    refalrts::reinit_close_call(context[18]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    refalrts::splice_to_freelist_open( vm, context[18], res );
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

static refalrts::NativeReference nat_ref_TextFromExprm_Preparem_Chars("TextFromExpr-Prepare-Chars", COOKIE1_, COOKIE2_, func_TextFromExprm_Preparem_Chars);


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

static refalrts::NativeReference nat_ref_Offset("Offset", COOKIE1_, COOKIE2_, func_Offset);


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

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A5("GenInitSubst=5", COOKIE1_, COOKIE2_, func_gen_GenInitSubst_A5);


static refalrts::FnResult func_gen_GenInitSubst_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=5/4 AsIs: s.0#2/5 AsIs: (/8 AsIs: e.FuncName#1/6 AsIs: )/9 } Tile{ AsIs: s.4#5/17 } Tile{ AsIs: s.2#4/10 AsIs: (/13 AsIs: e.Pattern#1/11 AsIs: )/14 AsIs: s.1#3/15 } </18 & Add/19 Tile{ AsIs: s.ContextTop#1/16 } 5/20 >/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[20], 5UL);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_GenInitSubst_A5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A4("GenInitSubst=4", COOKIE1_, COOKIE2_, func_gen_GenInitSubst_A4);


static refalrts::FnResult func_gen_GenInitSubst_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.2#4/16 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=4/4 AsIs: s.0#2/5 AsIs: (/8 AsIs: e.FuncName#1/6 AsIs: )/9 HalfReuse: s.24 #16/12 } (/17 Tile{ AsIs: e.Pattern#1/10 } Tile{ AsIs: )/13 AsIs: s.1#3/14 AsIs: s.ContextTop#1/15 } </18 & Add/19 s.ContextTop#1/15/20 4/21 >/22 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[20], context[15]);
  refalrts::alloc_number(vm, context[21], 4UL);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_gen_GenInitSubst_A4]);
  refalrts::reinit_svar( context[12], context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[17], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( vm, context[12], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A3("GenInitSubst=3", COOKIE1_, COOKIE2_, func_gen_GenInitSubst_A3);


static refalrts::FnResult func_gen_GenInitSubst_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=3/4 AsIs: s.0#2/5 AsIs: (/8 AsIs: e.FuncName#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Pattern#1/10 AsIs: )/13 } Tile{ AsIs: s.1#3/15 } Tile{ AsIs: s.ContextTop#1/14 } </16 & Add/17 s.ContextTop#1/14/18 2/19 >/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[18], context[14]);
  refalrts::alloc_number(vm, context[19], 2UL);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_gen_GenInitSubst_A3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A2("GenInitSubst=2", COOKIE1_, COOKIE2_, func_gen_GenInitSubst_A2);


static refalrts::FnResult func_gen_GenInitSubst_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
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
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: & GenInitSubst=2/0 HalfReuse: s.02 #14/4 AsIs: (/7 AsIs: e.FuncName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: s.ContextTop#1/13 } </16 & Add/17 s.ContextTop#1/13/18 1/19 >/20 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[18], context[13]);
  refalrts::alloc_number(vm, context[19], 1UL);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::reinit_name(context[0], functions[efunc_gen_GenInitSubst_A2]);
  refalrts::reinit_svar( context[4], context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenInitSubst_A1("GenInitSubst=1", COOKIE1_, COOKIE2_, func_gen_GenInitSubst_A1);


static refalrts::FnResult func_GenInitSubst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenInitSubst=2/4 AsIs: s.ContextTop#1/5 AsIs: (/8 AsIs: e.FuncName#1/6 AsIs: )/9 } (/10 Tile{ AsIs: e.Pattern#1/2 } )/11 s.ContextTop#1/5/12 </13 & Add/14 s.ContextTop#1/5/15 1/16 >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::copy_stvar(vm, context[12], context[5]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_number(vm, context[16], 1UL);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_gen_GenInitSubst_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
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

static refalrts::NativeReference nat_ref_gen_GenPattern_A1("GenPattern=1", COOKIE1_, COOKIE2_, func_gen_GenPattern_A1);


static refalrts::FnResult func_GenPattern(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenPattern=1/4 AsIs: s.FnGenSubst#1/5 } </10 & GenInitSubst/11 0/12 Tile{ AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 AsIs: e.Pattern#1/2 AsIs: >/1 } >/13 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_GenInitSubst]);
  refalrts::alloc_number(vm, context[12], 0UL);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_GenPattern_A1]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
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

static refalrts::NativeReference nat_ref_gen_GenResult_A1("GenResult=1", COOKIE1_, COOKIE2_, func_gen_GenResult_A1);


static refalrts::FnResult func_GenResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenResult=1/4 } Tile{ AsIs: (/8 } Tile{ AsIs: e.PatternCommands#1/2 } Tile{ AsIs: )/9 AsIs: (/12 } e.PatternVars#1/15/23 )/25 </26 Tile{ HalfReuse: & SentenceTail/13 AsIs: s.ContextOffset#1/14 AsIs: (/17 AsIs: e.PatternVars#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.MarkedPattern#1/19 AsIs: )/22 } Tile{ AsIs: e.Conditions#1/6 } (/27 Tile{ AsIs: s.FnGenResult#1/5 } Tile{ AsIs: e.Result#1/10 } )/28 >/29 Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[23], context[24], context[15], context[16]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_gen_GenResult_A1]);
  refalrts::reinit_name(context[13], functions[efunc_SentenceTail]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[12], context[25] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[13], context[22] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
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

static refalrts::NativeReference nat_ref_gen_PutVariableDebugTable_L1("PutVariableDebugTable\\1", COOKIE1_, COOKIE2_, func_gen_PutVariableDebugTable_L1);


static refalrts::FnResult func_PutVariableDebugTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & PutVariableDebugTable/4 e.PatternVars#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.PatternVars#1 as range 2
  //DEBUG: e.PatternVars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: e.PatternVars#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
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

static refalrts::NativeReference nat_ref_gen_CollectStrings_S1L1("CollectStrings$1\\1", COOKIE1_, COOKIE2_, func_gen_CollectStrings_S1L1);


static refalrts::FnResult func_CollectStrings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
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
      // </0 & CollectStrings/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
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
        // </0 & CollectStrings/4 (/7 # Symbol/13 # Char/18 s.Value1#1/25 )/8 (/21 # Symbol/23 # Char/24 s.Value2#1/26 )/22 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
          continue;
        context[18] = refalrts::ident_left( identifiers[ident_Char], context[14], context[15] );
        if( ! context[18] )
          continue;
        context[19] = 0;
        context[20] = 0;
        context[21] = refalrts::brackets_left( context[19], context[20], context[16], context[17] );
        if( ! context[21] )
          continue;
        refalrts::bracket_pointers(context[21], context[22]);
        context[23] = refalrts::ident_left( identifiers[ident_Symbol], context[19], context[20] );
        if( ! context[23] )
          continue;
        context[24] = refalrts::ident_left( identifiers[ident_Char], context[19], context[20] );
        if( ! context[24] )
          continue;
        // closed e.Tail#1 as range 16
        if( ! refalrts::svar_left( context[25], context[14], context[15] ) )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        if( ! refalrts::svar_left( context[26], context[19], context[20] ) )
          continue;
        if( ! refalrts::empty_seq( context[19], context[20] ) )
          continue;
        //DEBUG: e.Tail#1: 16
        //DEBUG: s.Value1#1: 25
        //DEBUG: s.Value2#1: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} s.Value1#1/25 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ HalfReuse: </8 HalfReuse: & BuildString/21 HalfReuse: (/23 HalfReuse: s.Value11 #25/24 AsIs: s.Value2#1/26 AsIs: )/22 AsIs: e.Tail#1/16 AsIs: >/1 } Tile{ HalfReuse: & CollectStrings$1\1/13 HalfReuse: >/18 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_Fetch]);
        refalrts::reinit_open_call(context[8]);
        refalrts::reinit_name(context[21], functions[efunc_BuildString]);
        refalrts::reinit_open_bracket(context[23]);
        refalrts::reinit_svar( context[24], context[25] );
        refalrts::reinit_name(context[13], functions[efunc_gen_CollectStrings_S1L1]);
        refalrts::reinit_close_call(context[18]);
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[8] );
        refalrts::link_brackets( context[23], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[13], context[18] );
        res = refalrts::splice_evar( res, context[8], context[1] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CollectStrings/4 (/7 # Brackets/13 e.InBrackets#1/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
          continue;
        // closed e.InBrackets#1 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.InBrackets#1: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/13 AsIs: e.InBrackets#1/14 HalfReuse: >/8 } )/18 </19 & CollectStrings/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_CollectStrings]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[13], functions[efunc_CollectStrings]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[0], context[18] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & CollectStrings/4 (/7 # CallBrackets/13 e.InBrackets#1/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[13] ) )
          continue;
        // closed e.InBrackets#1 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.InBrackets#1: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/13 AsIs: e.InBrackets#1/14 HalfReuse: >/8 } )/18 </19 & CollectStrings/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_CollectStrings]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[13], functions[efunc_CollectStrings]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[0], context[18] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & CollectStrings/4 (/7 # ADT-Brackets/13 e.InBrackets#1/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
        continue;
      // closed e.InBrackets#1 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.InBrackets#1: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 HalfReuse: </7 HalfReuse: & CollectStrings/13 AsIs: e.InBrackets#1/14 HalfReuse: >/8 } )/18 </19 & CollectStrings/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[18]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_CollectStrings]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_ADTm_Brackets]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[13], functions[efunc_CollectStrings]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[0], context[18] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[18], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CollectStrings/4 t.OtherTerm#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.OtherTerm#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/7 } Tile{ AsIs: </0 AsIs: & CollectStrings/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
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
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
    // </0 & BuildString/4 (/7 e.Chars#1/9 )/8 (/15 # Symbol/17 # Char/18 s.Value#1/19 )/16 e.Tail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left( identifiers[ident_Symbol], context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = refalrts::ident_left( identifiers[ident_Char], context[13], context[14] );
    if( ! context[18] )
      continue;
    // closed e.Chars#1 as range 9
    // closed e.Tail#1 as range 11
    if( ! refalrts::svar_left( context[19], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: e.Chars#1: 9
    //DEBUG: e.Tail#1: 11
    //DEBUG: s.Value#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Symbol/17 # Char/18 s.Value#1/19 )/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BuildString/4 AsIs: (/7 AsIs: e.Chars#1/9 HalfReuse: s.Value1 #19/8 HalfReuse: )/15 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[8], context[19] );
    refalrts::reinit_close_bracket(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( vm, context[15], res );
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

static refalrts::NativeReference nat_ref_BuildString("BuildString", COOKIE1_, COOKIE2_, func_BuildString);


static refalrts::FnResult func_gen_MakeSavers_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeSavers=1/4 (/7 s.ContextOffset#2/9 e.CmdSaves#2/5 )/8 e.SubstitutesAndJunks#2/2 >/1
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
  // closed e.SubstitutesAndJunks#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.CmdSaves#2 as range 5
  //DEBUG: e.SubstitutesAndJunks#2: 2
  //DEBUG: s.ContextOffset#2: 9
  //DEBUG: e.CmdSaves#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 s.ContextOffset#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.ContextOffset2 #9/0 HalfReuse: (/4 } Tile{ AsIs: e.CmdSaves#2/5 } Tile{ AsIs: )/8 } Tile{ AsIs: e.SubstitutesAndJunks#2/2 } Tile{ ]] }
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

static refalrts::NativeReference nat_ref_gen_MakeSavers_A1("MakeSavers=1", COOKIE1_, COOKIE2_, func_gen_MakeSavers_A1);


static refalrts::FnResult func_gen_MakeSavers_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
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
    // </0 & MakeSavers=1\1/4 (/7 s.ContextOffset#2/13 e.CmdSaves#2/15 )/8 (/11 # Junk/14 e.Junk#2/17 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_Junk], context[14] ) )
      continue;
    // closed e.CmdSaves#2 as range 15
    // closed e.Junk#2 as range 17
    //DEBUG: s.ContextOffset#2: 13
    //DEBUG: e.CmdSaves#2: 15
    //DEBUG: e.Junk#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MakeSavers=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.ContextOffset#2/13 AsIs: e.CmdSaves#2/15 AsIs: )/8 AsIs: (/11 AsIs: # Junk/14 AsIs: e.Junk#2/17 AsIs: )/12 } Tile{ ]] }
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
    // </0 & MakeSavers=1\1/4 (/7 s.new#10/13 e.new#11/16 )/8 (/11 # E/14 s.new#12/15 e.new#13/18 )/12 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[9];
    context[19] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_E], context[14] ) )
      continue;
    // closed e.new#11 as range 16
    // closed e.new#13 as range 18
    do {
      // </0 & MakeSavers=1\1/4 (/7 s.ContextOffset#2/13 e.CmdSaves#2/20 )/8 (/11 # E/14 s.Num#2/15 )/12 >/1
      context[20] = context[16];
      context[21] = context[17];
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.CmdSaves#2 as range 20
      //DEBUG: s.ContextOffset#2: 13
      //DEBUG: s.Num#2: 15
      //DEBUG: e.CmdSaves#2: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & MakeSavers=1\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.ContextOffset#2/13 AsIs: e.CmdSaves#2/20 AsIs: )/8 AsIs: (/11 AsIs: # E/14 AsIs: s.Num#2/15 AsIs: )/12 } Tile{ ]] }
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

    // </0 & MakeSavers=1\1/4 (/7 s.ContextOffset#2/13 e.CmdSaves#2/20 )/8 (/11 # E/14 s.Num#2/15 e.Range#2/22 )/12 >/1
    context[20] = context[16];
    context[21] = context[17];
    context[22] = context[18];
    context[23] = context[19];
    // closed e.CmdSaves#2 as range 20
    // closed e.Range#2 as range 22
    //DEBUG: s.ContextOffset#2: 13
    //DEBUG: s.Num#2: 15
    //DEBUG: e.CmdSaves#2: 20
    //DEBUG: e.Range#2: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Inc2/7 AsIs: s.ContextOffset#2/13 } >/24 Tile{ AsIs: e.CmdSaves#2/20 } (/25 # CmdSave/26 Tile{ AsIs: s.Num#2/15 } s.ContextOffset#2/13/27 Tile{ AsIs: )/12 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # E/14 } s.ContextOffset#2/13/28 Tile{ AsIs: e.Range#2/22 } Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_ident(vm, context[26], identifiers[ident_CmdSave]);
    refalrts::copy_stvar(vm, context[27], context[13]);
    refalrts::copy_stvar(vm, context[28], context[13]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Inc2]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[25], context[12] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[8], context[14] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[24], context[24] );
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

static refalrts::NativeReference nat_ref_gen_MakeSavers_A1L1("MakeSavers=1\\1", COOKIE1_, COOKIE2_, func_gen_MakeSavers_A1L1);


static refalrts::FnResult func_MakeSavers(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & MakeSavers/4 s.OriginContextOffset#1/5 e.SubstitutesAndJunks#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SubstitutesAndJunks#1 as range 2
  //DEBUG: s.OriginContextOffset#1: 5
  //DEBUG: e.SubstitutesAndJunks#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeSavers=1/4 } </6 & MapAccum/7 & MakeSavers=1\1/8 (/9 Tile{ AsIs: s.OriginContextOffset#1/5 } )/10 Tile{ AsIs: e.SubstitutesAndJunks#1/2 } >/11 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_MapAccum]);
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


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscapeChar/4 AsIs: t.Next#1/7 } >/9 </10 & Map@1/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_EscapeChar]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
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
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
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
        // </0 & Map@2/4 (/7 s.new#6/13 e.new#7/14 s.new#8/18 )/8 e.new#9/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new#9 as range 16
        if( ! refalrts::svar_right( context[18], context[14], context[15] ) )
          continue;
        // closed e.new#7 as range 14
        do {
          // </0 & Map@2/4 (/7 s.new#10/13 s.new#11/18 )/8 e.new#12/19 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::empty_seq( context[14], context[15] ) )
            continue;
          // closed e.new#12 as range 19
          do {
            // </0 & Map@2/4 (/7 # TkOpenBracket/13 s.ContextOffset#2/18 )/8 e.Tail#1/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_TkOpenBracket], context[13] ) )
              continue;
            // closed e.Tail#1 as range 21
            //DEBUG: s.ContextOffset#2: 18
            //DEBUG: e.Tail#1: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 HalfReuse: </7 HalfReuse: & Offset/13 AsIs: s.ContextOffset#2/18 HalfReuse: >/8 } </23 & Map@2/24 Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_call(vm, context[23]);
            refalrts::alloc_name(vm, context[24], functions[efunc_gen_Map_Z2]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '(');
            refalrts::reinit_open_call(context[7]);
            refalrts::reinit_name(context[13], functions[efunc_Offset]);
            refalrts::reinit_close_call(context[8]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[23] );
            refalrts::push_stack( vm, context[8] );
            refalrts::push_stack( vm, context[7] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[23], context[24] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@2/4 (/7 # TkCloseBracket/13 s.ContextOffset#2/18 )/8 e.Tail#1/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_TkCloseBracket], context[13] ) )
              continue;
            // closed e.Tail#1 as range 21
            //DEBUG: s.ContextOffset#2: 18
            //DEBUG: e.Tail#1: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ')'/4 HalfReuse: </7 HalfReuse: & Offset/13 AsIs: s.ContextOffset#2/18 HalfReuse: >/8 } </23 & Map@2/24 Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_call(vm, context[23]);
            refalrts::alloc_name(vm, context[24], functions[efunc_gen_Map_Z2]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], ')');
            refalrts::reinit_open_call(context[7]);
            refalrts::reinit_name(context[13], functions[efunc_Offset]);
            refalrts::reinit_close_call(context[8]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[23] );
            refalrts::push_stack( vm, context[8] );
            refalrts::push_stack( vm, context[7] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[23], context[24] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@2/4 (/7 # TkOpenCall/13 s.ContextOffset#2/18 )/8 e.Tail#1/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_TkOpenCall], context[13] ) )
              continue;
            // closed e.Tail#1 as range 21
            //DEBUG: s.ContextOffset#2: 18
            //DEBUG: e.Tail#1: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '<'/4 HalfReuse: </7 HalfReuse: & Offset/13 AsIs: s.ContextOffset#2/18 HalfReuse: >/8 } </23 & Map@2/24 Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_call(vm, context[23]);
            refalrts::alloc_name(vm, context[24], functions[efunc_gen_Map_Z2]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '<');
            refalrts::reinit_open_call(context[7]);
            refalrts::reinit_name(context[13], functions[efunc_Offset]);
            refalrts::reinit_close_call(context[8]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[23] );
            refalrts::push_stack( vm, context[8] );
            refalrts::push_stack( vm, context[7] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[23], context[24] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 (/7 # TkCloseCall/13 s.ContextOffset#2/18 )/8 e.Tail#1/21 >/1
          context[21] = context[19];
          context[22] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_TkCloseCall], context[13] ) )
            continue;
          // closed e.Tail#1 as range 21
          //DEBUG: s.ContextOffset#2: 18
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '>'/4 HalfReuse: </7 HalfReuse: & Offset/13 AsIs: s.ContextOffset#2/18 HalfReuse: >/8 } </23 & Map@2/24 Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_gen_Map_Z2]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '>');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[13], functions[efunc_Offset]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[23] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[23], context[24] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 (/7 # TkOpenADT/13 e.new#11/19 s.new#10/18 )/8 e.new#12/21 >/1
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_TkOpenADT], context[13] ) )
            continue;
          // closed e.new#11 as range 19
          // closed e.new#12 as range 21
          do {
            // </0 & Map@2/4 (/7 # TkOpenADT/13 s.ContextOffset#2/27 e.2#0/23 s.NameOffset#2/18 )/8 e.Tail#1/25 >/1
            context[23] = context[19];
            context[24] = context[20];
            context[25] = context[21];
            context[26] = context[22];
            // closed e.Tail#1 as range 25
            if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
              continue;
            // closed e.2#0 as range 23
            //DEBUG: s.NameOffset#2: 18
            //DEBUG: e.Tail#1: 25
            //DEBUG: s.ContextOffset#2: 27
            //DEBUG: e.2#0: 23

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </7 HalfReuse: & Offset/13 AsIs: s.ContextOffset#2/27 } >/28 </29 & DisplayName/30 Tile{ AsIs: e.2#0/23 } >/31 </32 & Offset/33 Tile{ AsIs: s.NameOffset#2/18 } >/34 </35 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/25 AsIs: >/1 ]] }
            refalrts::alloc_close_call(vm, context[28]);
            refalrts::alloc_open_call(vm, context[29]);
            refalrts::alloc_name(vm, context[30], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[31]);
            refalrts::alloc_open_call(vm, context[32]);
            refalrts::alloc_name(vm, context[33], functions[efunc_Offset]);
            refalrts::alloc_close_call(vm, context[34]);
            refalrts::alloc_open_call(vm, context[35]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '[');
            refalrts::reinit_open_call(context[7]);
            refalrts::reinit_name(context[13], functions[efunc_Offset]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[35] );
            refalrts::push_stack( vm, context[34] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[31] );
            refalrts::push_stack( vm, context[29] );
            refalrts::push_stack( vm, context[28] );
            refalrts::push_stack( vm, context[7] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[34], context[35] );
            res = refalrts::splice_evar( res, context[18], context[18] );
            res = refalrts::splice_evar( res, context[31], context[33] );
            res = refalrts::splice_evar( res, context[23], context[24] );
            res = refalrts::splice_evar( res, context[28], context[30] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 (/7 # TkOpenADT/13 s.ContextOffset#2/18 )/8 e.Tail#1/23 >/1
          context[23] = context[21];
          context[24] = context[22];
          if( ! refalrts::empty_seq( context[19], context[20] ) )
            continue;
          // closed e.Tail#1 as range 23
          //DEBUG: s.ContextOffset#2: 18
          //DEBUG: e.Tail#1: 23

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: </7 HalfReuse: & Offset/13 AsIs: s.ContextOffset#2/18 HalfReuse: >/8 } </25 & Map@2/26 Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[25]);
          refalrts::alloc_name(vm, context[26], functions[efunc_gen_Map_Z2]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '[');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[13], functions[efunc_Offset]);
          refalrts::reinit_close_call(context[8]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[8] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[23], context[24] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 (/7 s.new#10/13 s.new#11/18 )/8 e.new#12/19 >/1
          context[19] = context[16];
          context[20] = context[17];
          if( ! refalrts::empty_seq( context[14], context[15] ) )
            continue;
          // closed e.new#12 as range 19
          do {
            // </0 & Map@2/4 (/7 # TkCloseADT/13 s.ContextOffset#2/18 )/8 e.Tail#1/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_TkCloseADT], context[13] ) )
              continue;
            // closed e.Tail#1 as range 21
            //DEBUG: s.ContextOffset#2: 18
            //DEBUG: e.Tail#1: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ']'/4 HalfReuse: </7 HalfReuse: & Offset/13 AsIs: s.ContextOffset#2/18 HalfReuse: >/8 } </23 & Map@2/24 Tile{ AsIs: e.Tail#1/21 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_call(vm, context[23]);
            refalrts::alloc_name(vm, context[24], functions[efunc_gen_Map_Z2]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], ']');
            refalrts::reinit_open_call(context[7]);
            refalrts::reinit_name(context[13], functions[efunc_Offset]);
            refalrts::reinit_close_call(context[8]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[23] );
            refalrts::push_stack( vm, context[8] );
            refalrts::push_stack( vm, context[7] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[21], context[22] );
            res = refalrts::splice_evar( res, context[23], context[24] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@2/4 (/7 # TkClosureHead/13 s.ContextOffset#2/18 )/8 e.Tail#1/21 >/1
            context[21] = context[19];
            context[22] = context[20];
            if( ! refalrts::ident_term( identifiers[ident_TkClosureHead], context[13] ) )
              continue;
            // closed e.Tail#1 as range 21
            //DEBUG: s.ContextOffset#2: 18
            //DEBUG: e.Tail#1: 21

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: '*'/7 HalfReuse: ']'/13 } </23 & Offset/24 Tile{ AsIs: s.ContextOffset#2/18 } >/25 </26 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
            refalrts::alloc_open_call(vm, context[23]);
            refalrts::alloc_name(vm, context[24], functions[efunc_Offset]);
            refalrts::alloc_close_call(vm, context[25]);
            refalrts::alloc_open_call(vm, context[26]);
            refalrts::reinit_char(context[0], ' ');
            refalrts::reinit_char(context[4], '[');
            refalrts::reinit_char(context[7], '*');
            refalrts::reinit_char(context[13], ']');
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[25] );
            refalrts::push_stack( vm, context[23] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[25], context[26] );
            res = refalrts::splice_evar( res, context[18], context[18] );
            res = refalrts::splice_evar( res, context[23], context[24] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 (/7 # TkUnwrappedClosure/13 s.ContextOffset#2/18 )/8 e.Tail#1/21 >/1
          context[21] = context[19];
          context[22] = context[20];
          if( ! refalrts::ident_term( identifiers[ident_TkUnwrappedClosure], context[13] ) )
            continue;
          // closed e.Tail#1 as range 21
          //DEBUG: s.ContextOffset#2: 18
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '{'/4 HalfReuse: '*'/7 HalfReuse: '}'/13 } </23 & Offset/24 Tile{ AsIs: s.ContextOffset#2/18 } >/25 </26 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[23]);
          refalrts::alloc_name(vm, context[24], functions[efunc_Offset]);
          refalrts::alloc_close_call(vm, context[25]);
          refalrts::alloc_open_call(vm, context[26]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '{');
          refalrts::reinit_char(context[7], '*');
          refalrts::reinit_char(context[13], '}');
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[23] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[18], context[18] );
          res = refalrts::splice_evar( res, context[23], context[24] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@2/4 (/7 # Symbol/13 # Char/23 s.Char#2/24 s.Offset#2/18 )/8 e.Tail#1/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
          continue;
        context[23] = refalrts::ident_left( identifiers[ident_Char], context[19], context[20] );
        if( ! context[23] )
          continue;
        // closed e.Tail#1 as range 21
        if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
          continue;
        if( ! refalrts::empty_seq( context[19], context[20] ) )
          continue;
        //DEBUG: s.Offset#2: 18
        //DEBUG: e.Tail#1: 21
        //DEBUG: s.Char#2: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Char#2/24 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ }" \'"/25 Tile{ AsIs: </0 Reuse: & EscapeChar/4 HalfReuse: s.Char2 #24/7 HalfReuse: >/13 HalfReuse: '\''/23 } </27 & Offset/28 Tile{ AsIs: s.Offset#2/18 } >/29 </30 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[25], context[26], " \'", 2);
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::alloc_name(vm, context[28], functions[efunc_Offset]);
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::update_name(context[4], functions[efunc_EscapeChar]);
        refalrts::reinit_svar( context[7], context[24] );
        refalrts::reinit_close_call(context[13]);
        refalrts::reinit_char(context[23], '\'');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[23] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 (/7 # TkChars/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_TkChars], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '\''/4 } Tile{ AsIs: e.0#0/14 } Tile{ HalfReuse: '\''/7 HalfReuse: </13 } Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '\'');
        refalrts::reinit_char(context[7], '\'');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[7], context[13] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 (/7 s.new#6/13 e.new#7/14 s.new#8/18 )/8 e.new#9/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        // closed e.new#9 as range 16
        if( ! refalrts::svar_right( context[18], context[14], context[15] ) )
          continue;
        // closed e.new#7 as range 14
        do {
          // </0 & Map@2/4 (/7 # Symbol/13 s.new#11/23 e.new#12/19 s.new#10/18 )/8 e.new#13/21 >/1
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
            continue;
          // closed e.new#13 as range 21
          if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
            continue;
          // closed e.new#12 as range 19
          do {
            // </0 & Map@2/4 (/7 # Symbol/13 # Number/23 s.new#15/28 s.new#14/18 )/8 e.new#16/26 >/1
            context[24] = context[19];
            context[25] = context[20];
            context[26] = context[21];
            context[27] = context[22];
            if( ! refalrts::ident_term( identifiers[ident_Number], context[23] ) )
              continue;
            // closed e.new#16 as range 26
            if( ! refalrts::svar_left( context[28], context[24], context[25] ) )
              continue;
            if( ! refalrts::empty_seq( context[24], context[25] ) )
              continue;
            do {
              // </0 & Map@2/4 (/7 # Symbol/13 # Number/23 # Cookie1/28 s.Offset#2/18 )/8 e.Tail#1/29 >/1
              context[29] = context[26];
              context[30] = context[27];
              if( ! refalrts::ident_term( identifiers[ident_Cookie1], context[28] ) )
                continue;
              // closed e.Tail#1 as range 29
              //DEBUG: s.Offset#2: 18
              //DEBUG: e.Tail#1: 29

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ }" <Cook"/31 Tile{ HalfReuse: 'i'/0 HalfReuse: 'e'/4 HalfReuse: '1'/7 HalfReuse: '>'/13 HalfReuse: </23 HalfReuse: & Offset/28 AsIs: s.Offset#2/18 HalfReuse: >/8 } </33 & Map@2/34 Tile{ AsIs: e.Tail#1/29 } Tile{ AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[31], context[32], " <Cook", 6);
              refalrts::alloc_open_call(vm, context[33]);
              refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z2]);
              refalrts::reinit_char(context[0], 'i');
              refalrts::reinit_char(context[4], 'e');
              refalrts::reinit_char(context[7], '1');
              refalrts::reinit_char(context[13], '>');
              refalrts::reinit_open_call(context[23]);
              refalrts::reinit_name(context[28], functions[efunc_Offset]);
              refalrts::reinit_close_call(context[8]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[33] );
              refalrts::push_stack( vm, context[8] );
              refalrts::push_stack( vm, context[23] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[29], context[30] );
              res = refalrts::splice_evar( res, context[33], context[34] );
              res = refalrts::splice_evar( res, context[0], context[8] );
              res = refalrts::splice_evar( res, context[31], context[32] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@2/4 (/7 # Symbol/13 # Number/23 # Cookie2/28 s.Offset#2/18 )/8 e.Tail#1/29 >/1
              context[29] = context[26];
              context[30] = context[27];
              if( ! refalrts::ident_term( identifiers[ident_Cookie2], context[28] ) )
                continue;
              // closed e.Tail#1 as range 29
              //DEBUG: s.Offset#2: 18
              //DEBUG: e.Tail#1: 29

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ }" <Cook"/31 Tile{ HalfReuse: 'i'/0 HalfReuse: 'e'/4 HalfReuse: '2'/7 HalfReuse: '>'/13 HalfReuse: </23 HalfReuse: & Offset/28 AsIs: s.Offset#2/18 HalfReuse: >/8 } </33 & Map@2/34 Tile{ AsIs: e.Tail#1/29 } Tile{ AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[31], context[32], " <Cook", 6);
              refalrts::alloc_open_call(vm, context[33]);
              refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z2]);
              refalrts::reinit_char(context[0], 'i');
              refalrts::reinit_char(context[4], 'e');
              refalrts::reinit_char(context[7], '2');
              refalrts::reinit_char(context[13], '>');
              refalrts::reinit_open_call(context[23]);
              refalrts::reinit_name(context[28], functions[efunc_Offset]);
              refalrts::reinit_close_call(context[8]);
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[33] );
              refalrts::push_stack( vm, context[8] );
              refalrts::push_stack( vm, context[23] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[1];
              res = refalrts::splice_evar( res, context[29], context[30] );
              res = refalrts::splice_evar( res, context[33], context[34] );
              res = refalrts::splice_evar( res, context[0], context[8] );
              res = refalrts::splice_evar( res, context[31], context[32] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@2/4 (/7 # Symbol/13 # Number/23 s.Number#2/28 s.Offset#2/18 )/8 e.Tail#1/29 >/1
            context[29] = context[26];
            context[30] = context[27];
            // closed e.Tail#1 as range 29
            //DEBUG: s.Number#2: 28
            //DEBUG: s.Offset#2: 18
            //DEBUG: e.Tail#1: 29

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} s.Number#2/28 {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } ' '/31 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Number2 #28/7 HalfReuse: >/13 HalfReuse: </23 } & Offset/32 Tile{ AsIs: s.Offset#2/18 } >/33 </34 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/29 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[31], ' ');
            refalrts::alloc_name(vm, context[32], functions[efunc_Offset]);
            refalrts::alloc_close_call(vm, context[33]);
            refalrts::alloc_open_call(vm, context[34]);
            refalrts::update_name(context[4], functions[efunc_Symb]);
            refalrts::reinit_svar( context[7], context[28] );
            refalrts::reinit_close_call(context[13]);
            refalrts::reinit_open_call(context[23]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[34] );
            refalrts::push_stack( vm, context[33] );
            refalrts::push_stack( vm, context[23] );
            refalrts::push_stack( vm, context[13] );
            refalrts::push_stack( vm, context[0] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[33], context[34] );
            res = refalrts::splice_evar( res, context[18], context[18] );
            res = refalrts::splice_evar( res, context[32], context[32] );
            res = refalrts::splice_evar( res, context[0], context[23] );
            res = refalrts::splice_evar( res, context[31], context[31] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 (/7 # Symbol/13 # Name/23 e.2#0/24 s.Offset#2/18 )/8 e.Tail#1/26 >/1
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          context[27] = context[22];
          if( ! refalrts::ident_term( identifiers[ident_Name], context[23] ) )
            continue;
          // closed e.2#0 as range 24
          // closed e.Tail#1 as range 26
          //DEBUG: s.Offset#2: 18
          //DEBUG: e.2#0: 24
          //DEBUG: e.Tail#1: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '&'/4 HalfReuse: ' '/7 HalfReuse: </13 HalfReuse: & DisplayName/23 } Tile{ AsIs: e.2#0/24 } >/28 </29 & Offset/30 Tile{ AsIs: s.Offset#2/18 } >/31 </32 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/26 AsIs: >/1 ]] }
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_open_call(vm, context[29]);
          refalrts::alloc_name(vm, context[30], functions[efunc_Offset]);
          refalrts::alloc_close_call(vm, context[31]);
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::reinit_char(context[0], ' ');
          refalrts::reinit_char(context[4], '&');
          refalrts::reinit_char(context[7], ' ');
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[23], functions[efunc_DisplayName]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[29] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[31], context[32] );
          res = refalrts::splice_evar( res, context[18], context[18] );
          res = refalrts::splice_evar( res, context[28], context[30] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 (/7 # TkString/13 e.1#0/19 s.Offset#2/18 )/8 e.Tail#1/21 >/1
          context[19] = context[14];
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_TkString], context[13] ) )
            continue;
          // closed e.1#0 as range 19
          // closed e.Tail#1 as range 21
          //DEBUG: s.Offset#2: 18
          //DEBUG: e.1#0: 19
          //DEBUG: e.Tail#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Offset#2/18 {REMOVED TILE}
          //RESULT: Tile{ [[ } '\"'/23 </24 & Map@1/25 Tile{ AsIs: e.1#0/19 } >/26 '\"'/27 Tile{ AsIs: </0 Reuse: & Offset/4 HalfReuse: s.Offset2 #18/7 HalfReuse: >/13 } </28 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[23], '\"');
          refalrts::alloc_open_call(vm, context[24]);
          refalrts::alloc_name(vm, context[25], functions[efunc_gen_Map_Z1]);
          refalrts::alloc_close_call(vm, context[26]);
          refalrts::alloc_char(vm, context[27], '\"');
          refalrts::alloc_open_call(vm, context[28]);
          refalrts::update_name(context[4], functions[efunc_Offset]);
          refalrts::reinit_svar( context[7], context[18] );
          refalrts::reinit_close_call(context[13]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[13] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[24] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[28], context[28] );
          res = refalrts::splice_evar( res, context[0], context[13] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[23], context[25] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@2/4 (/7 s.new#10/13 s.new#12/23 e.new#13/19 s.new#11/18 )/8 e.new#14/21 >/1
        context[19] = context[14];
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        // closed e.new#14 as range 21
        if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
          continue;
        // closed e.new#13 as range 19
        do {
          // </0 & Map@2/4 (/7 s.new#15/13 s.new#17/23 e.new#18/24 s.new#19/28 s.new#16/18 )/8 e.new#20/26 >/1
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          context[27] = context[22];
          // closed e.new#20 as range 26
          if( ! refalrts::svar_right( context[28], context[24], context[25] ) )
            continue;
          // closed e.new#18 as range 24
          do {
            // </0 & Map@2/4 (/7 # TkVariable/13 s.Mode#2/23 e.3#0/29 s.Depth#2/28 s.Offset#2/18 )/8 e.Tail#1/31 >/1
            context[29] = context[24];
            context[30] = context[25];
            context[31] = context[26];
            context[32] = context[27];
            if( ! refalrts::ident_term( identifiers[ident_TkVariable], context[13] ) )
              continue;
            // closed e.3#0 as range 29
            // closed e.Tail#1 as range 31
            //DEBUG: s.Mode#2: 23
            //DEBUG: s.Depth#2: 28
            //DEBUG: s.Offset#2: 18
            //DEBUG: e.3#0: 29
            //DEBUG: e.Tail#1: 31

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </7 HalfReuse: & PrintVar/13 AsIs: s.Mode#2/23 AsIs: e.3#0/29 AsIs: s.Depth#2/28 } >/33 Tile{ AsIs: </0 } & Offset/34 Tile{ AsIs: s.Offset#2/18 } >/35 </36 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/31 AsIs: >/1 ]] }
            refalrts::alloc_close_call(vm, context[33]);
            refalrts::alloc_name(vm, context[34], functions[efunc_Offset]);
            refalrts::alloc_close_call(vm, context[35]);
            refalrts::alloc_open_call(vm, context[36]);
            refalrts::reinit_char(context[4], ' ');
            refalrts::reinit_open_call(context[7]);
            refalrts::reinit_name(context[13], functions[efunc_PrintVar]);
            refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[36] );
            refalrts::push_stack( vm, context[35] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[33] );
            refalrts::push_stack( vm, context[7] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[35], context[36] );
            res = refalrts::splice_evar( res, context[18], context[18] );
            res = refalrts::splice_evar( res, context[34], context[34] );
            res = refalrts::splice_evar( res, context[0], context[0] );
            res = refalrts::splice_evar( res, context[33], context[33] );
            res = refalrts::splice_evar( res, context[4], context[28] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 (/7 # TkVariableCopy/13 s.Mode#2/23 e.4#0/29 s.Depth#2/33 s.SampleOffset#2/28 s.CopyOffset#2/18 )/8 e.Tail#1/31 >/1
          context[29] = context[24];
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[27];
          if( ! refalrts::ident_term( identifiers[ident_TkVariableCopy], context[13] ) )
            continue;
          // closed e.Tail#1 as range 31
          if( ! refalrts::svar_right( context[33], context[29], context[30] ) )
            continue;
          // closed e.4#0 as range 29
          //DEBUG: s.Mode#2: 23
          //DEBUG: s.SampleOffset#2: 28
          //DEBUG: s.CopyOffset#2: 18
          //DEBUG: e.Tail#1: 31
          //DEBUG: s.Depth#2: 33
          //DEBUG: e.4#0: 29

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: </7 HalfReuse: & PrintVar/13 AsIs: s.Mode#2/23 AsIs: e.4#0/29 AsIs: s.Depth#2/33 } >/34 Tile{ AsIs: </0 } & Offset/35 Tile{ AsIs: s.SampleOffset#2/28 } >/36 </37 & Offset/38 Tile{ AsIs: s.CopyOffset#2/18 } >/39 </40 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/31 AsIs: >/1 ]] }
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::alloc_name(vm, context[35], functions[efunc_Offset]);
          refalrts::alloc_close_call(vm, context[36]);
          refalrts::alloc_open_call(vm, context[37]);
          refalrts::alloc_name(vm, context[38], functions[efunc_Offset]);
          refalrts::alloc_close_call(vm, context[39]);
          refalrts::alloc_open_call(vm, context[40]);
          refalrts::reinit_char(context[4], ' ');
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[13], functions[efunc_PrintVar]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[39] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[36] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_evar( res, context[18], context[18] );
          res = refalrts::splice_evar( res, context[36], context[38] );
          res = refalrts::splice_evar( res, context[28], context[28] );
          res = refalrts::splice_evar( res, context[35], context[35] );
          res = refalrts::splice_evar( res, context[0], context[0] );
          res = refalrts::splice_evar( res, context[34], context[34] );
          res = refalrts::splice_evar( res, context[4], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@2/4 (/7 # Symbol/13 # Identifier/23 e.2#0/24 s.Offset#2/18 )/8 e.Tail#1/26 >/1
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        if( ! refalrts::ident_term( identifiers[ident_Symbol], context[13] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_Identifier], context[23] ) )
          continue;
        // closed e.2#0 as range 24
        // closed e.Tail#1 as range 26
        //DEBUG: s.Offset#2: 18
        //DEBUG: e.2#0: 24
        //DEBUG: e.Tail#1: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '#'/4 HalfReuse: ' '/7 HalfReuse: </13 HalfReuse: & SafeDisplayName/23 } Tile{ AsIs: e.2#0/24 } >/28 </29 & Offset/30 Tile{ AsIs: s.Offset#2/18 } >/31 </32 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/26 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_Offset]);
        refalrts::alloc_close_call(vm, context[31]);
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '#');
        refalrts::reinit_char(context[7], ' ');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[23], functions[efunc_SafeDisplayName]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[28], context[30] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 (/7 # Tile/13 e.0#0/14 )/8 e.Tail#1/16 >/1
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'T'/4 HalfReuse: 'i'/7 HalfReuse: 'l'/13 }"e{"/18 </20 & TextFromExpr/21 Tile{ AsIs: e.0#0/14 } >/22" }"/23 </25 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[18], context[19], "e{", 2);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_TextFromExpr]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_chars(vm, context[23], context[24], " }", 2);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], 'T');
        refalrts::reinit_char(context[7], 'i');
        refalrts::reinit_char(context[13], 'l');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[25] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 (/7 # AsIs/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_AsIs], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'A'/4 HalfReuse: 's'/7 HalfReuse: 'I'/13 }"s:"/18 </20 & TextFromExpr/21 Tile{ AsIs: e.0#0/14 } >/22 </23 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[18], context[19], "s:", 2);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_TextFromExpr]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], 'A');
        refalrts::reinit_char(context[7], 's');
        refalrts::reinit_char(context[13], 'I');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 (/7 # Reuse/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Reuse], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'R'/4 HalfReuse: 'e'/7 HalfReuse: 'u'/13 }"se:"/18 </20 & TextFromExpr/21 Tile{ AsIs: e.0#0/14 } >/22 </23 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[18], context[19], "se:", 3);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_TextFromExpr]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], 'R');
        refalrts::reinit_char(context[7], 'e');
        refalrts::reinit_char(context[13], 'u');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 (/7 # HalfReuse/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_HalfReuse], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'H'/4 HalfReuse: 'a'/7 HalfReuse: 'l'/13 }"fReuse:"/18 </20 & TextFromExpr/21 Tile{ AsIs: e.0#0/14 } >/22 </23 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[18], context[19], "fReuse:", 7);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_TextFromExpr]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_open_call(vm, context[23]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], 'H');
        refalrts::reinit_char(context[7], 'a');
        refalrts::reinit_char(context[13], 'l');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[18], context[21] );
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
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '['/4 HalfReuse: '['/7 HalfReuse: </13 HalfReuse: & Map@2/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_char(context[4], '[');
        refalrts::reinit_char(context[7], '[');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
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
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: ']'/4 HalfReuse: ']'/7 HalfReuse: </13 HalfReuse: & Map@2/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_char(context[4], ']');
      refalrts::reinit_char(context[7], ']');
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map@2/4 # RemovedTile/7 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::ident_term( identifiers[ident_RemovedTile], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }" {REMOVED TILE"/11 Tile{ HalfReuse: '}'/0 HalfReuse: </4 HalfReuse: & Map@2/7 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[11], context[12], " {REMOVED TILE", 14);
      refalrts::reinit_char(context[0], '}');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & TextFromExpr\1*26/4 AsIs: t.Next#1/7 } >/11 </12 & Map@2/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z2]);
    refalrts::update_name(context[4], functions[efunc_gen_TextFromExpr_L1D26]);
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
      // </0 & Map@3/4 s.new#3/7 e.new#4/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::svar_term( context[7], context[7] ) )
        continue;
      // closed e.new#4 as range 9
      do {
        // </0 & Map@3/4 '\n'/7 e.Tail#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '\n', context[7] ) )
          continue;
        // closed e.Tail#1 as range 11
        //DEBUG: e.Tail#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: 'n'/0 HalfReuse: </4 HalfReuse: & Map@3/7 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[13], '$');
        refalrts::reinit_char(context[0], 'n');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[13], context[13] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 '\r'/7 e.Tail#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '\r', context[7] ) )
          continue;
        // closed e.Tail#1 as range 11
        //DEBUG: e.Tail#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: 'r'/0 HalfReuse: </4 HalfReuse: & Map@3/7 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[13], '$');
        refalrts::reinit_char(context[0], 'r');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[13], context[13] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 ' '/7 e.Tail#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( ' ', context[7] ) )
          continue;
        // closed e.Tail#1 as range 11
        //DEBUG: e.Tail#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: '_'/0 HalfReuse: </4 HalfReuse: & Map@3/7 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[13], '$');
        refalrts::reinit_char(context[0], '_');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[13], context[13] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 '\t'/7 e.Tail#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '\t', context[7] ) )
          continue;
        // closed e.Tail#1 as range 11
        //DEBUG: e.Tail#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: 't'/0 HalfReuse: </4 HalfReuse: & Map@3/7 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[13], '$');
        refalrts::reinit_char(context[0], 't');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[13], context[13] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 '$'/7 e.Tail#1/11 >/1
        context[11] = context[9];
        context[12] = context[10];
        if( ! refalrts::char_term( '$', context[7] ) )
          continue;
        // closed e.Tail#1 as range 11
        //DEBUG: e.Tail#1: 11

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } '$'/13 Tile{ HalfReuse: '$'/0 HalfReuse: </4 HalfReuse: & Map@3/7 AsIs: e.Tail#1/11 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[13], '$');
        refalrts::reinit_char(context[0], '$');
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_gen_Map_Z3]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[0];
        res = refalrts::splice_evar( res, context[13], context[13] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 s.Other#2/7 e.Tail#1/11 >/1
      context[11] = context[9];
      context[12] = context[10];
      // closed e.Tail#1 as range 11
      //DEBUG: s.Other#2: 7
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Other#2/7 } Tile{ AsIs: </0 AsIs: & Map@3/4 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[7] );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SafeDisplayName\1*6/4 AsIs: t.Next#1/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_gen_SafeDisplayName_L1D6]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
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
      // </0 & Map@4/4 (/7 s.Mode#2/13 (/16 e.2#0/14 )/17 s.FirstOffset#2/18 e.3#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      // closed e.2#0 as range 14
      if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
        continue;
      // closed e.3#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.Mode#2: 13
      //DEBUG: e.2#0: 14
      //DEBUG: s.FirstOffset#2: 18
      //DEBUG: e.3#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#2/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.3#0/11 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdVariableDebugTable/4 HalfReuse: s.Mode2 #13/7 } Tile{ AsIs: e.2#0/14 } Tile{ AsIs: s.FirstOffset#2/18 } Tile{ AsIs: )/17 } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CmdVariableDebugTable]);
      refalrts::reinit_svar( context[7], context[13] );
      refalrts::reinit_open_call(context[16]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::link_brackets( context[0], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutVariableDebugTable\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@4/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z4]);
    refalrts::update_name(context[4], functions[efunc_gen_PutVariableDebugTable_L1D1]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", COOKIE1_, COOKIE2_, func_gen_Map_Z4);


//End of file
