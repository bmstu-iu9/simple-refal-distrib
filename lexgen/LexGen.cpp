// This file automatically generated from 'LexGen.ref'
// Don't edit! Edit 'LexGen.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_4019561559_2055412973

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
  efunc_ParseCommandLine = 14,
  efunc_Transform = 15,
  efunc_LoadFile = 16,
  efunc_SaveFile = 17,
  efunc_Fetch = 18,
  efunc_ArgList = 19,
  efunc_Pipe = 20,
  efunc_gen_Go_L1 = 21,
  efunc_gen_Go_L2 = 22,
  efunc_PrintVersion = 23,
  efunc_Lengthm_T = 24,
  efunc_ErrorAt = 25,
  efunc_Flexm_Check = 26,
  efunc_DFAm_Tokens = 27,
  efunc_Map = 28,
  efunc_gen_Transform_L3S1L1 = 29,
  efunc_DFAm_Parse = 30,
  efunc_DFAm_Compile = 31,
  efunc_GenerateFromDFA = 32,
  efunc_gen_Transform_L3S1L2 = 33,
  efunc_Flexm_Tokens = 34,
  efunc_gen_Transform_L3S2L1 = 35,
  efunc_Flexm_Parse = 36,
  efunc_gen_Transform_L3S2L2 = 37,
  efunc_Flexm_Desugar = 38,
  efunc_Flexm_Compile = 39,
  efunc_gen_Transform_L3S2L3 = 40,
  efunc_gen_Transform_L2 = 41,
  efunc_gen_Transform_L3 = 42,
  efunc_gen_Transform_L1 = 43,
  efunc_Inc = 44,
  efunc_MapReduce = 45,
  efunc_gen_Lengthm_T_L1 = 46,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_InPlace = 6,
  ident_From = 7,
  ident_To = 8,
  ident_BadCommandLine = 9,
  ident_TError = 10,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 4019561559U, 2055412973U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 2055412973UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 4019561559UL);
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
  refalrts::reinit_number(context[5], 4019561559UL);
  refalrts::reinit_number(context[7], 2055412973UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 4019561559U, 2055412973U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 4019561559U, 2055412973U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 4019561559U, 2055412973U, func_Residue);


static refalrts::FnResult func_gen_Go_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Go\1/4 (/7 e.ProgName#2/5 )/8 e.Options#2/2 >/1
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
  // closed e.ProgName#2 as range 5
  // closed e.Options#2 as range 2
  //DEBUG: e.ProgName#2: 5
  //DEBUG: e.Options#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & Go\1/4 (/7 e.ProgName#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & ParseCommandLine/8 AsIs: e.Options#2/2 AsIs: >/1 ]] }
  refalrts::reinit_name(context[8], functions[efunc_ParseCommandLine]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_L1("Go\\1", 4019561559U, 2055412973U, func_gen_Go_L1);


static refalrts::FnResult func_gen_Go_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & Go\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Go\2/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Go\2/4 # InPlace/5 e.FileName#2/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_InPlace], context[5] ) )
      continue;
    // closed e.FileName#2 as range 6
    //DEBUG: e.FileName#2: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 HalfReuse: (/5 AsIs: e.FileName#2/6 HalfReuse: )/1 } </8 & Transform/9 (/10 e.FileName#2/6/11 )/13 </14 & LoadFile/15 e.FileName#2/6/16 >/18 >/19 >/20 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_Transform]);
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::copy_evar(vm, context[11], context[12], context[6], context[7]);
    refalrts::alloc_close_bracket(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_LoadFile]);
    refalrts::copy_evar(vm, context[16], context[17], context[6], context[7]);
    refalrts::alloc_close_call(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::update_name(context[4], functions[efunc_SaveFile]);
    refalrts::reinit_open_bracket(context[5]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[14] );
    refalrts::link_brackets( context[10], context[13] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Go\2/4 # From/5 (/10 e.From#2/8 )/11 # To/12 (/15 e.To#2/13 )/16 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_From], context[5] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    context[12] = refalrts::ident_left( identifiers[ident_To], context[6], context[7] );
    if( ! context[12] )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[6], context[7] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    // closed e.From#2 as range 8
    // closed e.To#2 as range 13
    //DEBUG: e.From#2: 8
    //DEBUG: e.To#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & SaveFile/18 (/19 Tile{ AsIs: e.To#2/13 } )/20 (/21"/* Automatically generated file, don\'t edit! */"/22 )/24 (/25"/* Edit file \'"/26 e.From#2/8/28"\' */"/30 )/32 (/33 )/34 (/35 Tile{ HalfReuse: )/0 HalfReuse: </4 HalfReuse: & Transform/5 AsIs: (/10 AsIs: e.From#2/8 AsIs: )/11 HalfReuse: </12 HalfReuse: & LoadFile/15 } e.From#2/8/36 >/38 Tile{ HalfReuse: >/16 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_SaveFile]);
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_chars(vm, context[22], context[23], "/* Automatically generated file, don\'t edit! */", 47);
    refalrts::alloc_close_bracket(vm, context[24]);
    refalrts::alloc_open_bracket(vm, context[25]);
    refalrts::alloc_chars(vm, context[26], context[27], "/* Edit file \'", 14);
    refalrts::copy_evar(vm, context[28], context[29], context[8], context[9]);
    refalrts::alloc_chars(vm, context[30], context[31], "\' */", 4);
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::copy_evar(vm, context[36], context[37], context[8], context[9]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_Transform]);
    refalrts::reinit_open_call(context[12]);
    refalrts::reinit_name(context[15], functions[efunc_LoadFile]);
    refalrts::reinit_close_call(context[16]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[12] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::link_brackets( context[35], context[0] );
    refalrts::link_brackets( context[33], context[34] );
    refalrts::link_brackets( context[25], context[32] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[20], context[35] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Go\2/4 # BadCommandLine/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_BadCommandLine], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Go\2/4 # BadCommandLine/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_L2("Go\\2", 4019561559U, 2055412973U, func_gen_Go_L2);


static refalrts::FnResult func_Go(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Go/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintVersion/4 HalfReuse: 'L'/1 }"exGen"/5 >/7 </8 & Fetch/9 </10 & ArgList/11 >/12 </13 & Pipe/14 & Go\1/15 & Go\2/16 >/17 >/18 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "exGen", 5);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_ArgList]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Pipe]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_Go_L1]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_Go_L2]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_PrintVersion]);
  refalrts::reinit_char(context[1], 'L');
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Go("Go", 0U, 0U, func_Go);


static refalrts::FnResult func_gen_Transform_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Transform\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Transform\1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Transform\1/4 (/7 e.Source#1/9 )/8 e.LinesBefore#2/13 (/19 '/'/21 '*'/22 'G'/23 'E'/24 'N'/25 ':'/26 e.GenMode#2/17 )/20 e.DescriptionAndTail#2/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Source#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::char_left( '/', context[17], context[18] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_left( '*', context[17], context[18] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_left( 'G', context[17], context[18] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_left( 'E', context[17], context[18] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::char_left( 'N', context[17], context[18] );
      if( ! context[25] )
        continue;
      context[26] = refalrts::char_left( ':', context[17], context[18] );
      if( ! context[26] )
        continue;
      // closed e.GenMode#2 as range 17
      // closed e.DescriptionAndTail#2 as range 15
      //DEBUG: e.Source#1: 9
      //DEBUG: e.LinesBefore#2: 13
      //DEBUG: e.GenMode#2: 17
      //DEBUG: e.DescriptionAndTail#2: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Source#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } Tile{ HalfReuse: & Length-T/8 AsIs: e.LinesBefore#2/13 AsIs: (/19 AsIs: '/'/21 AsIs: '*'/22 AsIs: 'G'/23 AsIs: 'E'/24 AsIs: 'N'/25 AsIs: ':'/26 AsIs: e.GenMode#2/17 AsIs: )/20 } Tile{ AsIs: >/1 } )/27 Tile{ AsIs: (/7 } e.GenMode#2/17/28 )/30 Tile{ AsIs: e.DescriptionAndTail#2/15 } Tile{ ]] }
      refalrts::alloc_close_bracket(vm, context[27]);
      refalrts::copy_evar(vm, context[28], context[29], context[17], context[18]);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[8], functions[efunc_Lengthm_T]);
      refalrts::link_brackets( context[7], context[30] );
      refalrts::link_brackets( context[0], context[27] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[8], context[20] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Transform\1/4 (/7 e.Source#1/5 )/8 e.Other#2/2 >/1
  // closed e.Source#1 as range 5
  // closed e.Other#2 as range 2
  //DEBUG: e.Source#1: 5
  //DEBUG: e.Other#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Other#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } 1/9 Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 }"Lexer description not found"/10 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[9], 1UL);
  refalrts::alloc_chars(vm, context[10], context[11], "Lexer description not found", 27);
  refalrts::update_name(context[4], functions[efunc_ErrorAt]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L1("Transform\\1", 4019561559U, 2055412973U, func_gen_Transform_L1);


static refalrts::FnResult func_gen_Transform_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & Transform\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Transform\2/4 (/7 e.new#1/5 )/8 (/11 s.new#2/17 e.new#3/9 )/12 (/15 e.new#4/13 )/16 e.new#5/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#4 as range 13
  // closed e.new#5 as range 2
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 9
  do {
    // </0 & Transform\2/4 (/7 e.Source#1/18 )/8 (/11 s.Length#2/17 e.LinesBefore#2/20 )/12 (/15 e.GenMode#2/22 )/16 e.Description#2/26 (/32 'G'/34 'E'/35 'N'/36 ':'/37 'E'/38 'N'/39 'D'/40 '*'/41 '/'/42 )/33 e.Deleted#2/28 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[2];
    context[25] = context[3];
    // closed e.Source#1 as range 18
    // closed e.LinesBefore#2 as range 20
    // closed e.GenMode#2 as range 22
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[28] = context[24];
      context[29] = context[25];
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::char_left( 'G', context[30], context[31] );
      if( ! context[34] )
        continue;
      context[35] = refalrts::char_left( 'E', context[30], context[31] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( 'N', context[30], context[31] );
      if( ! context[36] )
        continue;
      context[37] = refalrts::char_left( ':', context[30], context[31] );
      if( ! context[37] )
        continue;
      context[38] = refalrts::char_left( 'E', context[30], context[31] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::char_left( 'N', context[30], context[31] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_left( 'D', context[30], context[31] );
      if( ! context[40] )
        continue;
      context[41] = refalrts::char_left( '*', context[30], context[31] );
      if( ! context[41] )
        continue;
      context[42] = refalrts::char_left( '/', context[30], context[31] );
      if( ! context[42] )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      // closed e.Deleted#2 as range 28
      //DEBUG: s.Length#2: 17
      //DEBUG: e.Source#1: 18
      //DEBUG: e.LinesBefore#2: 20
      //DEBUG: e.GenMode#2: 22
      //DEBUG: e.Description#2: 26
      //DEBUG: e.Deleted#2: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Transform\2/4 (/7 e.Source#1/18 )/8 {REMOVED TILE} {REMOVED TILE} (/32 'G'/34 'E'/35 'N'/36 ':'/37 'E'/38 'N'/39 'D'/40 '*'/41 '/'/42 )/33 e.Deleted#2/28 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: s.Length#2/17 AsIs: e.LinesBefore#2/20 AsIs: )/12 AsIs: (/15 AsIs: e.GenMode#2/22 AsIs: )/16 } Tile{ AsIs: e.Description#2/26 } Tile{ ]] }
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[26], context[27], context[24], context[25] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Transform\2/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.GenMode#2/13 )/16 e.Other#2/2 >/1
  // closed e.Source#1 as range 5
  // closed e.LinesBefore#2 as range 9
  // closed e.GenMode#2 as range 13
  // closed e.Other#2 as range 2
  //DEBUG: s.Length#2: 17
  //DEBUG: e.Source#1: 5
  //DEBUG: e.LinesBefore#2: 9
  //DEBUG: e.GenMode#2: 13
  //DEBUG: e.Other#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LinesBefore#2/9 {REMOVED TILE} e.GenMode#2/13 {REMOVED TILE} e.Other#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 HalfReuse: 'E'/11 } 'n'/18 Tile{ HalfReuse: 'd'/12 HalfReuse: ' '/15 } Tile{ HalfReuse: 'o'/16 }"f description not found"/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[18], 'n');
  refalrts::alloc_chars(vm, context[19], context[20], "f description not found", 23);
  refalrts::update_name(context[4], functions[efunc_ErrorAt]);
  refalrts::reinit_char(context[11], 'E');
  refalrts::reinit_char(context[12], 'd');
  refalrts::reinit_char(context[15], ' ');
  refalrts::reinit_char(context[16], 'o');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L2("Transform\\2", 4019561559U, 2055412973U, func_gen_Transform_L2);


static refalrts::FnResult func_gen_Transform_L3S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Transform\3$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Transform\3$1\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 s.new#3/14 e.new#4/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 9
  do {
    // </0 & Transform\3$1\1/4 (/7 e.Source#1/15 )/8 (/11 # TError/13 s.LineNumber#3/14 e.Text#3/17 )/12 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_TError], context[13] ) )
      continue;
    // closed e.Source#1 as range 15
    // closed e.Text#3 as range 17
    //DEBUG: s.LineNumber#3: 14
    //DEBUG: e.Source#1: 15
    //DEBUG: e.Text#3: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 # TError/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.LineNumber#3/14 } Tile{ AsIs: e.Source#1/15 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Text#3/17 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Transform\3$1\1/4 (/7 e.Source#1/5 )/8 (/11 s.TokType#3/13 s.LineNumber#3/14 e.Info#3/9 )/12 >/1
  // closed e.Source#1 as range 5
  // closed e.Info#3 as range 9
  //DEBUG: s.TokType#3: 13
  //DEBUG: s.LineNumber#3: 14
  //DEBUG: e.Source#1: 5
  //DEBUG: e.Info#3: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TokType#3/13 s.LineNumber#3/14 {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } Tile{ HalfReuse: s.TokType3 #13/0 HalfReuse: (/4 HalfReuse: s.LineNumber3 #14/7 AsIs: e.Source#1/5 AsIs: )/8 } Tile{ AsIs: e.Info#3/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[0], context[13] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_svar( context[7], context[14] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S1L1("Transform\\3$1\\1", 4019561559U, 2055412973U, func_gen_Transform_L3S1L1);


static refalrts::FnResult func_gen_Transform_L3S1L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Transform\3$1\2/4 (/7 e.LinesBefore#2/5 )/8 (/11 e.Description#2/9 )/12 e.Generated#3/2 >/1
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
  // closed e.LinesBefore#2 as range 5
  // closed e.Description#2 as range 9
  // closed e.Generated#3 as range 2
  //DEBUG: e.LinesBefore#2: 5
  //DEBUG: e.Description#2: 9
  //DEBUG: e.Generated#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/5 } Tile{ AsIs: e.Description#2/9 } Tile{ AsIs: (/11 } Tile{ HalfReuse: 'G'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/7 } Tile{ HalfReuse: ':'/8 }"EN"/13 Tile{ HalfReuse: 'D'/1 }"*/"/15 Tile{ AsIs: )/12 } Tile{ AsIs: e.Generated#3/2 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[13], context[14], "EN", 2);
  refalrts::alloc_chars(vm, context[15], context[16], "*/", 2);
  refalrts::reinit_char(context[0], 'G');
  refalrts::reinit_char(context[4], 'E');
  refalrts::reinit_char(context[7], 'N');
  refalrts::reinit_char(context[8], ':');
  refalrts::reinit_char(context[1], 'D');
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S1L2("Transform\\3$1\\2", 4019561559U, 2055412973U, func_gen_Transform_L3S1L2);


static refalrts::FnResult func_gen_Transform_L3S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Transform\3$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Transform\3$2\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & Transform\3$2\1/4 (/7 e.new#3/11 )/8 (/9 s.new#4/15 s.new#5/16 e.new#6/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.new#3 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    // closed e.new#6 as range 13
    do {
      // </0 & Transform\3$2\1/4 (/7 e.Source#1/17 )/8 (/9 # TError/15 s.LineNumber#3/16 e.Text#3/19 )/10 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      if( ! refalrts::ident_term( identifiers[ident_TError], context[15] ) )
        continue;
      // closed e.Source#1 as range 17
      // closed e.Text#3 as range 19
      //DEBUG: s.LineNumber#3: 16
      //DEBUG: e.Source#1: 17
      //DEBUG: e.Text#3: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/9 # TError/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.LineNumber#3/16 } Tile{ AsIs: e.Source#1/17 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Text#3/19 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ErrorAt]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Transform\3$2\1/4 (/7 e.Source#1/17 )/8 (/9 s.TokType#3/15 s.LineNumber#3/16 e.Info#3/19 )/10 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Source#1 as range 17
    // closed e.Info#3 as range 19
    //DEBUG: s.TokType#3: 15
    //DEBUG: s.LineNumber#3: 16
    //DEBUG: e.Source#1: 17
    //DEBUG: e.Info#3: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TokType#3/15 s.LineNumber#3/16 {REMOVED TILE} )/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 } Tile{ HalfReuse: s.TokType3 #15/0 HalfReuse: (/4 HalfReuse: s.LineNumber3 #16/7 AsIs: e.Source#1/17 AsIs: )/8 } Tile{ AsIs: e.Info#3/19 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_svar( context[0], context[15] );
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_svar( context[7], context[16] );
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[9], context[1] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Transform\3$2\1/4 (/7 e.Source#1/5 )/8 t.Other#3/9 >/1
  // closed e.Source#1 as range 5
  //DEBUG: t.Other#3: 9
  //DEBUG: e.Source#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Transform\3$2\1/4 (/7 e.Source#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#3/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L1("Transform\\3$2\\1", 4019561559U, 2055412973U, func_gen_Transform_L3S2L1);


static refalrts::FnResult func_gen_Transform_L3S2L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Transform\3$2\2/4 e.AST#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#3 as range 2
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Flex-Check/4 AsIs: e.AST#3/2 AsIs: >/1 } e.AST#3/2/5 Tile{ ]] }
  refalrts::copy_evar(vm, context[5], context[6], context[2], context[3]);
  refalrts::update_name(context[4], functions[efunc_Flexm_Check]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L2("Transform\\3$2\\2", 4019561559U, 2055412973U, func_gen_Transform_L3S2L2);


static refalrts::FnResult func_gen_Transform_L3S2L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Transform\3$2\3/4 (/7 e.LinesBefore#2/5 )/8 (/11 e.Description#2/9 )/12 e.Generated#3/2 >/1
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
  // closed e.LinesBefore#2 as range 5
  // closed e.Description#2 as range 9
  // closed e.Generated#3 as range 2
  //DEBUG: e.LinesBefore#2: 5
  //DEBUG: e.Description#2: 9
  //DEBUG: e.Generated#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.LinesBefore#2/5 } Tile{ AsIs: e.Description#2/9 } Tile{ AsIs: (/11 } Tile{ HalfReuse: 'G'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/7 } Tile{ HalfReuse: ':'/8 }"EN"/13 Tile{ HalfReuse: 'D'/1 }"*/"/15 Tile{ AsIs: )/12 } Tile{ AsIs: e.Generated#3/2 } Tile{ ]] }
  refalrts::alloc_chars(vm, context[13], context[14], "EN", 2);
  refalrts::alloc_chars(vm, context[15], context[16], "*/", 2);
  refalrts::reinit_char(context[0], 'G');
  refalrts::reinit_char(context[4], 'E');
  refalrts::reinit_char(context[7], 'N');
  refalrts::reinit_char(context[8], ':');
  refalrts::reinit_char(context[1], 'D');
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L3("Transform\\3$2\\3", 4019561559U, 2055412973U, func_gen_Transform_L3S2L3);


static refalrts::FnResult func_gen_Transform_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & Transform\3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Transform\3/4 (/7 e.new#1/5 )/8 (/11 s.new#2/17 e.new#3/9 )/12 (/15 e.new#4/13 )/16 e.new#5/2 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#4 as range 13
  // closed e.new#5 as range 2
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 9
  do {
    // </0 & Transform\3/4 (/7 e.new#6/18 )/8 (/11 s.new#7/17 e.new#8/20 )/12 (/15 e.new#9/22 s.new#10/29 s.new#11/28 s.new#12/27 s.new#13/26 )/16 e.new#14/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[2];
    context[25] = context[3];
    // closed e.new#6 as range 18
    // closed e.new#8 as range 20
    // closed e.new#14 as range 24
    if( ! refalrts::svar_right( context[26], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_right( context[27], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_right( context[28], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_right( context[29], context[22], context[23] ) )
      continue;
    // closed e.new#9 as range 22
    do {
      // </0 & Transform\3/4 (/7 e.Source#1/30 )/8 (/11 s.Length#2/17 e.LinesBefore#2/32 )/12 (/15 'T'/38 'O'/39 'K'/29 'E'/28 'N'/27 'S'/26 )/16 e.Description#2/36 >/1
      context[30] = context[18];
      context[31] = context[19];
      context[32] = context[20];
      context[33] = context[21];
      context[34] = context[22];
      context[35] = context[23];
      context[36] = context[24];
      context[37] = context[25];
      if( ! refalrts::char_term( 'K', context[29] ) )
        continue;
      if( ! refalrts::char_term( 'E', context[28] ) )
        continue;
      if( ! refalrts::char_term( 'N', context[27] ) )
        continue;
      if( ! refalrts::char_term( 'S', context[26] ) )
        continue;
      context[38] = refalrts::char_left( 'T', context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::char_left( 'O', context[34], context[35] );
      if( ! context[39] )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      // closed e.Source#1 as range 30
      // closed e.LinesBefore#2 as range 32
      // closed e.Description#2 as range 36
      //DEBUG: s.Length#2: 17
      //DEBUG: e.Source#1: 30
      //DEBUG: e.LinesBefore#2: 32
      //DEBUG: e.Description#2: 36

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Length#2/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </40 Tile{ HalfReuse: & Fetch/26 HalfReuse: s.Length2 #17/16 AsIs: e.Description#2/36 HalfReuse: </1 } & Pipe/41 & DFA-Tokens/42 (/43 & Map/44 Tile{ HalfReuse: [*]/0 Reuse: & Transform\3$1\1/4 AsIs: (/7 AsIs: e.Source#1/30 AsIs: )/8 HalfReuse: {*}/11 } Tile{ AsIs: )/12 HalfReuse: & DFA-Parse/15 HalfReuse: & DFA-Compile/38 HalfReuse: & GenerateFromDFA/39 HalfReuse: [*]/29 HalfReuse: & Transform\3$1\2/28 HalfReuse: (/27 } Tile{ AsIs: e.LinesBefore#2/32 } )/45 (/46 e.Description#2/36/47 )/49 {*}/50 >/51 >/52 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_Pipe]);
      refalrts::alloc_name(vm, context[42], functions[efunc_DFAm_Tokens]);
      refalrts::alloc_open_bracket(vm, context[43]);
      refalrts::alloc_name(vm, context[44], functions[efunc_Map]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::copy_evar(vm, context[47], context[48], context[36], context[37]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_unwrapped_closure(vm, context[50], context[29]);
      refalrts::alloc_close_call(vm, context[51]);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::reinit_name(context[26], functions[efunc_Fetch]);
      refalrts::reinit_svar( context[16], context[17] );
      refalrts::reinit_open_call(context[1]);
      refalrts::reinit_closure_head(context[0]);
      refalrts::update_name(context[4], functions[efunc_gen_Transform_L3S1L1]);
      refalrts::reinit_unwrapped_closure(context[11], context[0]);
      refalrts::reinit_name(context[15], functions[efunc_DFAm_Parse]);
      refalrts::reinit_name(context[38], functions[efunc_DFAm_Compile]);
      refalrts::reinit_name(context[39], functions[efunc_GenerateFromDFA]);
      refalrts::reinit_closure_head(context[29]);
      refalrts::reinit_name(context[28], functions[efunc_gen_Transform_L3S1L2]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[51] );
      refalrts::push_stack( vm, context[1] );
      refalrts::link_brackets( context[46], context[49] );
      refalrts::link_brackets( context[27], context[45] );
      refalrts::link_brackets( context[43], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[45], context[52] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[12], context[27] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[41], context[44] );
      res = refalrts::splice_evar( res, context[26], context[1] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      refalrts::wrap_closure( context[11] );
      refalrts::wrap_closure( context[50] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Transform\3/4 (/7 e.Source#1/30 )/8 (/11 s.Length#2/17 e.LinesBefore#2/32 )/12 (/15 'F'/29 'L'/28 'E'/27 'X'/26 )/16 e.Description#2/34 >/1
    context[30] = context[18];
    context[31] = context[19];
    context[32] = context[20];
    context[33] = context[21];
    context[34] = context[24];
    context[35] = context[25];
    if( ! refalrts::char_term( 'F', context[29] ) )
      continue;
    if( ! refalrts::char_term( 'L', context[28] ) )
      continue;
    if( ! refalrts::char_term( 'E', context[27] ) )
      continue;
    if( ! refalrts::char_term( 'X', context[26] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.Source#1 as range 30
    // closed e.LinesBefore#2 as range 32
    // closed e.Description#2 as range 34
    //DEBUG: s.Length#2: 17
    //DEBUG: e.Source#1: 30
    //DEBUG: e.LinesBefore#2: 32
    //DEBUG: e.Description#2: 34

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </36 & Fetch/37 Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Description#2/34 } </38 & Pipe/39 & Flex-Tokens/40 (/41 & Map/42 Tile{ HalfReuse: [*]/0 Reuse: & Transform\3$2\1/4 AsIs: (/7 AsIs: e.Source#1/30 AsIs: )/8 HalfReuse: {*}/11 } Tile{ AsIs: )/12 HalfReuse: & Flex-Parse/15 HalfReuse: & Transform\3$2\2/29 HalfReuse: & Flex-Desugar/28 HalfReuse: & Flex-Compile/27 HalfReuse: [*]/26 HalfReuse: & Transform\3$2\3/16 } (/43 Tile{ AsIs: e.LinesBefore#2/32 } )/44 (/45 e.Description#2/34/46 )/48 {*}/49 >/50 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_name(vm, context[37], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_Pipe]);
    refalrts::alloc_name(vm, context[40], functions[efunc_Flexm_Tokens]);
    refalrts::alloc_open_bracket(vm, context[41]);
    refalrts::alloc_name(vm, context[42], functions[efunc_Map]);
    refalrts::alloc_open_bracket(vm, context[43]);
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::alloc_open_bracket(vm, context[45]);
    refalrts::copy_evar(vm, context[46], context[47], context[34], context[35]);
    refalrts::alloc_close_bracket(vm, context[48]);
    refalrts::alloc_unwrapped_closure(vm, context[49], context[26]);
    refalrts::alloc_close_call(vm, context[50]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_Transform_L3S2L1]);
    refalrts::reinit_unwrapped_closure(context[11], context[0]);
    refalrts::reinit_name(context[15], functions[efunc_Flexm_Parse]);
    refalrts::reinit_name(context[29], functions[efunc_gen_Transform_L3S2L2]);
    refalrts::reinit_name(context[28], functions[efunc_Flexm_Desugar]);
    refalrts::reinit_name(context[27], functions[efunc_Flexm_Compile]);
    refalrts::reinit_closure_head(context[26]);
    refalrts::reinit_name(context[16], functions[efunc_gen_Transform_L3S2L3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[50] );
    refalrts::push_stack( vm, context[38] );
    refalrts::link_brackets( context[45], context[48] );
    refalrts::link_brackets( context[43], context[44] );
    refalrts::link_brackets( context[41], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[44], context[50] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[43], context[43] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[38], context[42] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    refalrts::wrap_closure( context[11] );
    refalrts::wrap_closure( context[49] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Transform\3/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.OtherGenMode#2/13 )/16 e.Description#2/2 >/1
  // closed e.Source#1 as range 5
  // closed e.LinesBefore#2 as range 9
  // closed e.OtherGenMode#2 as range 13
  // closed e.Description#2 as range 2
  //DEBUG: s.Length#2: 17
  //DEBUG: e.Source#1: 5
  //DEBUG: e.LinesBefore#2: 9
  //DEBUG: e.OtherGenMode#2: 13
  //DEBUG: e.Description#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.LinesBefore#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Description#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/8 HalfReuse: 'U'/11 } Tile{ HalfReuse: 'n'/12 HalfReuse: 'k'/15 } Tile{ HalfReuse: 'n'/16 }"own generation mode "/18 Tile{ AsIs: e.OtherGenMode#2/13 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[18], context[19], "own generation mode ", 20);
  refalrts::update_name(context[4], functions[efunc_ErrorAt]);
  refalrts::reinit_char(context[11], 'U');
  refalrts::reinit_char(context[12], 'n');
  refalrts::reinit_char(context[15], 'k');
  refalrts::reinit_char(context[16], 'n');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3("Transform\\3", 4019561559U, 2055412973U, func_gen_Transform_L3);


static refalrts::FnResult func_Transform(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Transform/4 (/7 e.Source#1/5 )/8 e.Lines#1/2 >/1
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
  // closed e.Source#1 as range 5
  // closed e.Lines#1 as range 2
  //DEBUG: e.Source#1: 5
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: e.Lines#1/2 } </11 & Pipe/12 Tile{ HalfReuse: [*]/0 Reuse: & Transform\1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 } {*}/13 [*]/14 & Transform\2/15 (/16 e.Source#1/5/17 )/19 {*}/20 [*]/21 & Transform\3/22 (/23 e.Source#1/5/24 )/26 {*}/27 >/28 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Pipe]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::alloc_closure_head(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_Transform_L2]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_unwrapped_closure(vm, context[20], context[14]);
  refalrts::alloc_closure_head(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_Transform_L3]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_unwrapped_closure(vm, context[27], context[21]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_Transform_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[23], context[26] );
  refalrts::link_brackets( context[16], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[28] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  refalrts::wrap_closure( context[20] );
  refalrts::wrap_closure( context[27] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Transform("Transform", 4019561559U, 2055412973U, func_Transform);


static refalrts::FnResult func_Flexm_Compile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Flex-Compile/4 e.AnyInput#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AnyInput#1 as range 2
  //DEBUG: e.AnyInput#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Flex-Compile/4 e.AnyInput#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flexm_Compile("Flex-Compile", 4019561559U, 2055412973U, func_Flexm_Compile);


static refalrts::FnResult func_gen_Lengthm_T_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Length-T\1/4 s.Next#2/9 (/7 e.Line#2/5 )/8 >/1
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
  // closed e.Line#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Line#2: 5
  //DEBUG: s.Next#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Next#2/9 HalfReuse: >/7 } Tile{ HalfReuse: (/8 } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Inc]);
  refalrts::reinit_close_call(context[7]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[8], context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Lengthm_T_L1("Length-T\\1", 4019561559U, 2055412973U, func_gen_Lengthm_T_L1);


static refalrts::FnResult func_Lengthm_T(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Length-T/4 e.Lines#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Lines#1 as range 2
  //DEBUG: e.Lines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & MapReduce/6 Tile{ HalfReuse: & Length-T\1/0 HalfReuse: 0/4 AsIs: e.Lines#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_MapReduce]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Lengthm_T_L1]);
  refalrts::reinit_number(context[4], 0UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Lengthm_T("Length-T", 4019561559U, 2055412973U, func_Lengthm_T);


//End of file
