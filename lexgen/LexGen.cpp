// This file automatically generated from 'LexGen.ref'
// Don't edit! Edit 'LexGen.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2263320127_1537337479

enum efunc {
  efunc_gen_Mu_C1 = 0,
  efunc_Mu = 1,
  efunc_u_u_Stepm_Start = 2,
  efunc_u_u_Mum_Aux = 3,
  efunc_u_u_Stepm_End = 4,
  efunc_gen_u_u_Mum_Aux_S13B1 = 5,
  efunc_u_u_FindMuPtr = 6,
  efunc_Add = 7,
  efunc_Div = 8,
  efunc_Mod = 9,
  efunc_Mul = 10,
  efunc_Residue = 11,
  efunc_Sub = 12,
  efunc_Type = 13,
  efunc_Up = 14,
  efunc_Evm_met = 15,
  efunc_gen_Residue_C1 = 16,
  efunc_gen_Go_L1 = 17,
  efunc_ParseCommandLine = 18,
  efunc_gen_Go_L2 = 19,
  efunc_Transform = 20,
  efunc_LoadFile = 21,
  efunc_SaveFile = 22,
  efunc_Go = 23,
  efunc_Fetch = 24,
  efunc_ArgList = 25,
  efunc_Pipe = 26,
  efunc_PrintVersion = 27,
  efunc_gen_Transform_L1 = 28,
  efunc_Lengthm_T = 29,
  efunc_ErrorAt = 30,
  efunc_gen_Transform_L2 = 31,
  efunc_gen_Transform_L3S1L1 = 32,
  efunc_gen_Transform_L3S1L2 = 33,
  efunc_gen_Transform_L3S2L1 = 34,
  efunc_gen_Transform_L3S2L2 = 35,
  efunc_Flexm_Check = 36,
  efunc_gen_Transform_L3S2L3 = 37,
  efunc_gen_Transform_L3 = 38,
  efunc_DFAm_Tokens = 39,
  efunc_Map = 40,
  efunc_DFAm_Parse = 41,
  efunc_DFAm_Compile = 42,
  efunc_GenerateFromDFA = 43,
  efunc_Flexm_Tokens = 44,
  efunc_Flexm_Parse = 45,
  efunc_Flexm_Desugar = 46,
  efunc_Flexm_Compile = 47,
  efunc_gen_Lengthm_T_L1 = 48,
  efunc_Inc = 49,
  efunc_MapReduce = 50,
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
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], functions[efunc_gen_Mu_C1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], functions[efunc_u_u_Stepm_Start] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_u_u_Mum_Aux] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[8] ) )
    return refalrts::cNoMemory;
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
    refalrts::update_name( context[4], functions[efunc_u_u_Stepm_End] );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
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

static refalrts::NativeReference nat_ref_Mu("Mu", 2263320127U, 1537337479U, func_Mu);


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
    if( ! refalrts::alloc_number( vm, context[9], 1537337479UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_u_u_FindMuPtr] );
    refalrts::reinit_number( context[5], 2263320127UL );
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
  refalrts::update_name( context[4], functions[efunc_u_u_FindMuPtr] );
  refalrts::reinit_number( context[5], 2263320127UL );
  refalrts::reinit_number( context[7], 1537337479UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 2263320127U, 1537337479U, func_gen_u_u_Mum_Aux_S13B1);


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
      refalrts::reinit_name( context[1], functions[efunc_Add] );
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
      refalrts::reinit_name( context[1], functions[efunc_Div] );
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
      refalrts::reinit_name( context[1], functions[efunc_Mod] );
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
      refalrts::reinit_name( context[1], functions[efunc_Mul] );
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
      refalrts::reinit_name( context[1], functions[efunc_Residue] );
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
      refalrts::reinit_name( context[1], functions[efunc_Sub] );
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
      refalrts::reinit_name( context[1], functions[efunc_Add] );
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
      refalrts::reinit_name( context[1], functions[efunc_Div] );
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
      refalrts::reinit_name( context[1], functions[efunc_Mod] );
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
      refalrts::reinit_name( context[1], functions[efunc_Mul] );
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
      refalrts::reinit_name( context[1], functions[efunc_Residue] );
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
    refalrts::reinit_name( context[1], functions[efunc_Sub] );
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
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], functions[efunc_gen_u_u_Mum_Aux_S13B1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Type] );
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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 2263320127U, 1537337479U, func_u_u_Mum_Aux);


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
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], functions[efunc_gen_Residue_C1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], functions[efunc_u_u_Stepm_Start] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_u_u_Mum_Aux] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[8] ) )
    return refalrts::cNoMemory;
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
    refalrts::update_name( context[4], functions[efunc_u_u_Stepm_End] );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
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

static refalrts::NativeReference nat_ref_Residue("Residue", 2263320127U, 1537337479U, func_Residue);


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
  refalrts::reinit_name( context[8], functions[efunc_ParseCommandLine] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Go_L1("Go\\1", 2263320127U, 1537337479U, func_gen_Go_L1);


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
    // </0 & Go\2/4 # InPlace/5 e.FileName#2/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_InPlace], context[5] ) )
      continue;
    // closed e.FileName#2 as range 2
    //DEBUG: e.FileName#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SaveFile/4 HalfReuse: (/5 AsIs: e.FileName#2/2 HalfReuse: )/1 } </6 & Transform/7 (/8 e.FileName#2/2/9 )/11 </12 & LoadFile/13 e.FileName#2/2/14 >/16 >/17 >/18 Tile{ ]] }
    if( ! refalrts::alloc_open_call( vm, context[6] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[7], functions[efunc_Transform] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[8] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[9], context[10], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[13], functions[efunc_LoadFile] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[14], context[15], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[18] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_SaveFile] );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[12] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[18] );
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
    if( ! refalrts::alloc_open_call( vm, context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[18], functions[efunc_SaveFile] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[22], context[23], "/* Automatically generated file, don\'t edit! */", 47 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[26], context[27], "/* Edit file \'", 14 ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[28], context[29], context[8], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[30], context[31], "\' */", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[35] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[36], context[37], context[8], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[38] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[5], functions[efunc_Transform] );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[15], functions[efunc_LoadFile] );
    refalrts::reinit_close_call( context[16] );
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

static refalrts::NativeReference nat_ref_gen_Go_L2("Go\\2", 2263320127U, 1537337479U, func_gen_Go_L2);


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
  if( ! refalrts::alloc_chars( vm, context[5], context[6], "exGen", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], functions[efunc_Fetch] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], functions[efunc_ArgList] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_Pipe] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], functions[efunc_gen_Go_L1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[16], functions[efunc_gen_Go_L2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_PrintVersion] );
  refalrts::reinit_char( context[1], 'L' );
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
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
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
    // </0 & Transform\1/4 (/7 e.Source#1/5 )/8 e.LinesBefore#2/11 (/17 '/'/19 '*'/20 'G'/21 'E'/22 'N'/23 ':'/24 e.GenMode#2/15 )/18 e.DescriptionAndTail#2/13 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.Source#1 as range 5
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[13] = context[9];
      context[14] = context[10];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::char_left( '/', context[15], context[16] );
      if( ! context[19] )
        continue;
      context[20] = refalrts::char_left( '*', context[15], context[16] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::char_left( 'G', context[15], context[16] );
      if( ! context[21] )
        continue;
      context[22] = refalrts::char_left( 'E', context[15], context[16] );
      if( ! context[22] )
        continue;
      context[23] = refalrts::char_left( 'N', context[15], context[16] );
      if( ! context[23] )
        continue;
      context[24] = refalrts::char_left( ':', context[15], context[16] );
      if( ! context[24] )
        continue;
      // closed e.GenMode#2 as range 15
      // closed e.DescriptionAndTail#2 as range 13
      //DEBUG: e.Source#1: 5
      //DEBUG: e.LinesBefore#2: 11
      //DEBUG: e.GenMode#2: 15
      //DEBUG: e.DescriptionAndTail#2: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Source#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } Tile{ HalfReuse: & Length-T/8 AsIs: e.LinesBefore#2/11 AsIs: (/17 AsIs: '/'/19 AsIs: '*'/20 AsIs: 'G'/21 AsIs: 'E'/22 AsIs: 'N'/23 AsIs: ':'/24 AsIs: e.GenMode#2/15 AsIs: )/18 } Tile{ AsIs: >/1 } )/25 Tile{ AsIs: (/7 } e.GenMode#2/15/26 )/28 Tile{ AsIs: e.DescriptionAndTail#2/13 } Tile{ ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[25] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(vm, context[26], context[27], context[15], context[16]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[28] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_open_call( context[4] );
      refalrts::reinit_name( context[8], functions[efunc_Lengthm_T] );
      refalrts::link_brackets( context[7], context[28] );
      refalrts::link_brackets( context[0], context[25] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[8], context[18] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
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
  if( ! refalrts::alloc_number( vm, context[9], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[10], context[11], "Lexer description not found", 27 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_ErrorAt] );
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

static refalrts::NativeReference nat_ref_gen_Transform_L1("Transform\\1", 2263320127U, 1537337479U, func_gen_Transform_L1);


static refalrts::FnResult func_gen_Transform_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
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
    // </0 & Transform\2/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 e.GenMode#2/13 )/16 e.Description#2/20 (/26 'G'/28 'E'/29 'N'/30 ':'/31 'E'/32 'N'/33 'D'/34 '*'/35 '/'/36 )/27 e.Deleted#2/22 >/1
    context[18] = context[2];
    context[19] = context[3];
    // closed e.Source#1 as range 5
    // closed e.LinesBefore#2 as range 9
    // closed e.GenMode#2 as range 13
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[18];
      context[23] = context[19];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::char_left( 'G', context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = refalrts::char_left( 'E', context[24], context[25] );
      if( ! context[29] )
        continue;
      context[30] = refalrts::char_left( 'N', context[24], context[25] );
      if( ! context[30] )
        continue;
      context[31] = refalrts::char_left( ':', context[24], context[25] );
      if( ! context[31] )
        continue;
      context[32] = refalrts::char_left( 'E', context[24], context[25] );
      if( ! context[32] )
        continue;
      context[33] = refalrts::char_left( 'N', context[24], context[25] );
      if( ! context[33] )
        continue;
      context[34] = refalrts::char_left( 'D', context[24], context[25] );
      if( ! context[34] )
        continue;
      context[35] = refalrts::char_left( '*', context[24], context[25] );
      if( ! context[35] )
        continue;
      context[36] = refalrts::char_left( '/', context[24], context[25] );
      if( ! context[36] )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.Deleted#2 as range 22
      //DEBUG: s.Length#2: 17
      //DEBUG: e.Source#1: 5
      //DEBUG: e.LinesBefore#2: 9
      //DEBUG: e.GenMode#2: 13
      //DEBUG: e.Description#2: 20
      //DEBUG: e.Deleted#2: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Transform\2/4 (/7 e.Source#1/5 )/8 {REMOVED TILE} {REMOVED TILE} (/26 'G'/28 'E'/29 'N'/30 ':'/31 'E'/32 'N'/33 'D'/34 '*'/35 '/'/36 )/27 e.Deleted#2/22 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: s.Length#2/17 AsIs: e.LinesBefore#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.GenMode#2/13 AsIs: )/16 } Tile{ AsIs: e.Description#2/20 } Tile{ ]] }
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[11], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[18], context[19] ) );
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
  if( ! refalrts::alloc_char( vm, context[18], 'n' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[19], context[20], "f description not found", 23 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_ErrorAt] );
  refalrts::reinit_char( context[11], 'E' );
  refalrts::reinit_char( context[12], 'd' );
  refalrts::reinit_char( context[15], ' ' );
  refalrts::reinit_char( context[16], 'o' );
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

static refalrts::NativeReference nat_ref_gen_Transform_L2("Transform\\2", 2263320127U, 1537337479U, func_gen_Transform_L2);


static refalrts::FnResult func_gen_Transform_L3S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
    // </0 & Transform\3$1\1/4 (/7 e.Source#1/5 )/8 (/11 # TError/13 s.LineNumber#3/14 e.Text#3/9 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_TError], context[13] ) )
      continue;
    // closed e.Source#1 as range 5
    // closed e.Text#3 as range 9
    //DEBUG: s.LineNumber#3: 14
    //DEBUG: e.Source#1: 5
    //DEBUG: e.Text#3: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 # TError/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.LineNumber#3/14 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Text#3/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], functions[efunc_ErrorAt] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
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
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_svar( context[7], context[14] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_Transform_L3S1L1("Transform\\3$1\\1", 2263320127U, 1537337479U, func_gen_Transform_L3S1L1);


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
  if( ! refalrts::alloc_chars( vm, context[13], context[14], "EN", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[15], context[16], "*/", 2 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'G' );
  refalrts::reinit_char( context[4], 'E' );
  refalrts::reinit_char( context[7], 'N' );
  refalrts::reinit_char( context[8], ':' );
  refalrts::reinit_char( context[1], 'D' );
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

static refalrts::NativeReference nat_ref_gen_Transform_L3S1L2("Transform\\3$1\\2", 2263320127U, 1537337479U, func_gen_Transform_L3S1L2);


static refalrts::FnResult func_gen_Transform_L3S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
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
    // </0 & Transform\3$2\1/4 (/7 e.new#3/5 )/8 (/9 s.new#4/13 s.new#5/14 e.new#6/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    // closed e.new#6 as range 11
    do {
      // </0 & Transform\3$2\1/4 (/7 e.Source#1/5 )/8 (/9 # TError/13 s.LineNumber#3/14 e.Text#3/11 )/10 >/1
      if( ! refalrts::ident_term( identifiers[ident_TError], context[13] ) )
        continue;
      // closed e.Source#1 as range 5
      // closed e.Text#3 as range 11
      //DEBUG: s.LineNumber#3: 14
      //DEBUG: e.Source#1: 5
      //DEBUG: e.Text#3: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/9 # TError/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: (/7 } Tile{ AsIs: s.LineNumber#3/14 } Tile{ AsIs: e.Source#1/5 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Text#3/11 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name( context[4], functions[efunc_ErrorAt] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[10], context[10] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Transform\3$2\1/4 (/7 e.Source#1/5 )/8 (/9 s.TokType#3/13 s.LineNumber#3/14 e.Info#3/11 )/10 >/1
    // closed e.Source#1 as range 5
    // closed e.Info#3 as range 11
    //DEBUG: s.TokType#3: 13
    //DEBUG: s.LineNumber#3: 14
    //DEBUG: e.Source#1: 5
    //DEBUG: e.Info#3: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.TokType#3/13 s.LineNumber#3/14 {REMOVED TILE} )/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 } Tile{ HalfReuse: s.TokType3 #13/0 HalfReuse: (/4 HalfReuse: s.LineNumber3 #14/7 AsIs: e.Source#1/5 AsIs: )/8 } Tile{ AsIs: e.Info#3/11 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_svar( context[0], context[13] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_svar( context[7], context[14] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
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

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L1("Transform\\3$2\\1", 2263320127U, 1537337479U, func_gen_Transform_L3S2L1);


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
  if (! refalrts::copy_evar(vm, context[5], context[6], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Flexm_Check] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L2("Transform\\3$2\\2", 2263320127U, 1537337479U, func_gen_Transform_L3S2L2);


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
  if( ! refalrts::alloc_chars( vm, context[13], context[14], "EN", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[15], context[16], "*/", 2 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'G' );
  refalrts::reinit_char( context[4], 'E' );
  refalrts::reinit_char( context[7], 'N' );
  refalrts::reinit_char( context[8], ':' );
  refalrts::reinit_char( context[1], 'D' );
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

static refalrts::NativeReference nat_ref_gen_Transform_L3S2L3("Transform\\3$2\\3", 2263320127U, 1537337479U, func_gen_Transform_L3S2L3);


static refalrts::FnResult func_gen_Transform_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
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
    // </0 & Transform\3/4 (/7 e.new#6/5 )/8 (/11 s.new#7/17 e.new#8/9 )/12 (/15 e.new#9/18 s.new#10/23 s.new#11/22 s.new#12/21 s.new#13/20 )/16 e.new#14/2 >/1
    context[18] = context[13];
    context[19] = context[14];
    // closed e.new#6 as range 5
    // closed e.new#8 as range 9
    // closed e.new#14 as range 2
    if( ! refalrts::svar_right( context[20], context[18], context[19] ) )
      continue;
    if( ! refalrts::svar_right( context[21], context[18], context[19] ) )
      continue;
    if( ! refalrts::svar_right( context[22], context[18], context[19] ) )
      continue;
    if( ! refalrts::svar_right( context[23], context[18], context[19] ) )
      continue;
    // closed e.new#9 as range 18
    do {
      // </0 & Transform\3/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 'T'/26 'O'/27 'K'/23 'E'/22 'N'/21 'S'/20 )/16 e.Description#2/2 >/1
      context[24] = context[18];
      context[25] = context[19];
      if( ! refalrts::char_term( 'K', context[23] ) )
        continue;
      if( ! refalrts::char_term( 'E', context[22] ) )
        continue;
      if( ! refalrts::char_term( 'N', context[21] ) )
        continue;
      if( ! refalrts::char_term( 'S', context[20] ) )
        continue;
      context[26] = refalrts::char_left( 'T', context[24], context[25] );
      if( ! context[26] )
        continue;
      context[27] = refalrts::char_left( 'O', context[24], context[25] );
      if( ! context[27] )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.Source#1 as range 5
      // closed e.LinesBefore#2 as range 9
      // closed e.Description#2 as range 2
      //DEBUG: s.Length#2: 17
      //DEBUG: e.Source#1: 5
      //DEBUG: e.LinesBefore#2: 9
      //DEBUG: e.Description#2: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Length#2/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </28 Tile{ HalfReuse: & Fetch/20 HalfReuse: s.Length2 #17/16 AsIs: e.Description#2/2 HalfReuse: </1 } & Pipe/29 & DFA-Tokens/30 (/31 & Map/32 Tile{ HalfReuse: [*]/0 Reuse: & Transform\3$1\1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 HalfReuse: {*}/11 } Tile{ AsIs: )/12 HalfReuse: & DFA-Parse/15 HalfReuse: & DFA-Compile/26 HalfReuse: & GenerateFromDFA/27 HalfReuse: [*]/23 HalfReuse: & Transform\3$1\2/22 HalfReuse: (/21 } Tile{ AsIs: e.LinesBefore#2/9 } )/33 (/34 e.Description#2/2/35 )/37 {*}/38 >/39 >/40 Tile{ ]] }
      if( ! refalrts::alloc_open_call( vm, context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[29], functions[efunc_Pipe] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[30], functions[efunc_DFAm_Tokens] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[32], functions[efunc_Map] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[34] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(vm, context[35], context[36], context[2], context[3]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[37] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_unwrapped_closure( vm, context[38], context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[40] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_name( context[20], functions[efunc_Fetch] );
      refalrts::reinit_svar( context[16], context[17] );
      refalrts::reinit_open_call( context[1] );
      refalrts::reinit_closure_head( context[0] );
      refalrts::update_name( context[4], functions[efunc_gen_Transform_L3S1L1] );
      refalrts::reinit_unwrapped_closure( context[11], context[0] );
      refalrts::reinit_name( context[15], functions[efunc_DFAm_Parse] );
      refalrts::reinit_name( context[26], functions[efunc_DFAm_Compile] );
      refalrts::reinit_name( context[27], functions[efunc_GenerateFromDFA] );
      refalrts::reinit_closure_head( context[23] );
      refalrts::reinit_name( context[22], functions[efunc_gen_Transform_L3S1L2] );
      refalrts::reinit_open_bracket( context[21] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[1] );
      refalrts::link_brackets( context[34], context[37] );
      refalrts::link_brackets( context[21], context[33] );
      refalrts::link_brackets( context[31], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[40] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[12], context[21] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[20], context[1] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      refalrts::wrap_closure( context[11] );
      refalrts::wrap_closure( context[38] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Transform\3/4 (/7 e.Source#1/5 )/8 (/11 s.Length#2/17 e.LinesBefore#2/9 )/12 (/15 'F'/23 'L'/22 'E'/21 'X'/20 )/16 e.Description#2/2 >/1
    if( ! refalrts::char_term( 'F', context[23] ) )
      continue;
    if( ! refalrts::char_term( 'L', context[22] ) )
      continue;
    if( ! refalrts::char_term( 'E', context[21] ) )
      continue;
    if( ! refalrts::char_term( 'X', context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Source#1 as range 5
    // closed e.LinesBefore#2 as range 9
    // closed e.Description#2 as range 2
    //DEBUG: s.Length#2: 17
    //DEBUG: e.Source#1: 5
    //DEBUG: e.LinesBefore#2: 9
    //DEBUG: e.Description#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </24 & Fetch/25 Tile{ AsIs: s.Length#2/17 } Tile{ AsIs: e.Description#2/2 } </26 & Pipe/27 & Flex-Tokens/28 (/29 & Map/30 Tile{ HalfReuse: [*]/0 Reuse: & Transform\3$2\1/4 AsIs: (/7 AsIs: e.Source#1/5 AsIs: )/8 HalfReuse: {*}/11 } Tile{ AsIs: )/12 HalfReuse: & Flex-Parse/15 HalfReuse: & Transform\3$2\2/23 HalfReuse: & Flex-Desugar/22 HalfReuse: & Flex-Compile/21 HalfReuse: [*]/20 HalfReuse: & Transform\3$2\3/16 } (/31 Tile{ AsIs: e.LinesBefore#2/9 } )/32 (/33 e.Description#2/2/34 )/36 {*}/37 >/38 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[25], functions[efunc_Fetch] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[27], functions[efunc_Pipe] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[28], functions[efunc_Flexm_Tokens] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[30], functions[efunc_Map] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[33] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[34], context[35], context[2], context[3]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( vm, context[37], context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[38] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], functions[efunc_gen_Transform_L3S2L1] );
    refalrts::reinit_unwrapped_closure( context[11], context[0] );
    refalrts::reinit_name( context[15], functions[efunc_Flexm_Parse] );
    refalrts::reinit_name( context[23], functions[efunc_gen_Transform_L3S2L2] );
    refalrts::reinit_name( context[22], functions[efunc_Flexm_Desugar] );
    refalrts::reinit_name( context[21], functions[efunc_Flexm_Compile] );
    refalrts::reinit_closure_head( context[20] );
    refalrts::reinit_name( context[16], functions[efunc_gen_Transform_L3S2L3] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[26] );
    refalrts::link_brackets( context[33], context[36] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[29], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[32], context[38] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[26], context[30] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    refalrts::wrap_closure( context[11] );
    refalrts::wrap_closure( context[37] );
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
  if( ! refalrts::alloc_chars( vm, context[18], context[19], "own generation mode ", 20 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_ErrorAt] );
  refalrts::reinit_char( context[11], 'U' );
  refalrts::reinit_char( context[12], 'n' );
  refalrts::reinit_char( context[15], 'k' );
  refalrts::reinit_char( context[16], 'n' );
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

static refalrts::NativeReference nat_ref_gen_Transform_L3("Transform\\3", 2263320127U, 1537337479U, func_gen_Transform_L3);


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
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[10], functions[efunc_Fetch] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[12], functions[efunc_Pipe] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[13], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], functions[efunc_gen_Transform_L2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[16] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[20], context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[22], functions[efunc_gen_Transform_L3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[27], context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[28] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_Transform_L1] );
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

static refalrts::NativeReference nat_ref_Transform("Transform", 2263320127U, 1537337479U, func_Transform);


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

static refalrts::NativeReference nat_ref_Flexm_Compile("Flex-Compile", 2263320127U, 1537337479U, func_Flexm_Compile);


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
  refalrts::update_name( context[4], functions[efunc_Inc] );
  refalrts::reinit_close_call( context[7] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_Lengthm_T_L1("Length-T\\1", 2263320127U, 1537337479U, func_gen_Lengthm_T_L1);


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
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[6], functions[efunc_MapReduce] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], functions[efunc_gen_Lengthm_T_L1] );
  refalrts::reinit_number( context[4], 0UL );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Lengthm_T("Length-T", 2263320127U, 1537337479U, func_Lengthm_T);


//End of file
