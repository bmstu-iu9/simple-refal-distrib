// This file automatically generated from '../common/Escape.ref'
// Don't edit! Edit '../common/Escape.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2340599971_2476243008

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
  efunc_OctDigit = 14,
  efunc_Fetch = 15,
  efunc_TermCompare = 16,
  efunc_gen_EscapeChar_S7L1 = 17,
  efunc_Ord = 18,
  efunc_Map = 19,
  efunc_EscapeChar = 20,
  efunc_Reduce = 21,
  efunc_gen_CharFromNum_L1 = 22,
  efunc_DigitFromChar = 23,
  efunc_Chr = 24,
  efunc_gen_DigitFromChar_L1 = 25,
  efunc_DoUnEscapeStringm_SR = 26,
  efunc_HexDigits = 27,
  efunc_DoUnEscapeStringm_SRm_Hex = 28,
  efunc_DecDigits = 29,
  efunc_DoUnEscapeStringm_SRm_DecOct = 30,
  efunc_OctDigits = 31,
  efunc_DoUnEscapeStringm_SRm_Escape = 32,
  efunc_Prefix3 = 33,
  efunc_CharFromNum = 34,
  efunc_SingularEscape = 35,
  efunc_gen_DoUnEscapeStringm_SRm_Escape_S2L1 = 36,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_Success = 6,
  ident_Fail = 7,
  ident_BadEscapeCode = 8,
  ident_Fails = 9,
  ident_BadEscapeSymbol = 10,
  ident_EOLAfterSlash = 11,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 2340599971U, 2476243008U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 2476243008UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 2340599971UL);
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
  refalrts::reinit_number(context[5], 2340599971UL);
  refalrts::reinit_number(context[7], 2476243008UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 2340599971U, 2476243008U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 2340599971U, 2476243008U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 2340599971U, 2476243008U, func_Residue);


static refalrts::FnResult func_OctDigit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & OctDigit/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OctDigit/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & OctDigit/4 0/5 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 0/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '0'/1 ]] }
    refalrts::reinit_char(context[1], '0');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 1/5 >/1
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '1'/1 ]] }
    refalrts::reinit_char(context[1], '1');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 2/5 >/1
    if( ! refalrts::number_term( 2UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 2/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '2'/1 ]] }
    refalrts::reinit_char(context[1], '2');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 3/5 >/1
    if( ! refalrts::number_term( 3UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 3/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '3'/1 ]] }
    refalrts::reinit_char(context[1], '3');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 4/5 >/1
    if( ! refalrts::number_term( 4UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 4/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '4'/1 ]] }
    refalrts::reinit_char(context[1], '4');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 5/5 >/1
    if( ! refalrts::number_term( 5UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 5/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '5'/1 ]] }
    refalrts::reinit_char(context[1], '5');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & OctDigit/4 6/5 >/1
    if( ! refalrts::number_term( 6UL, context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & OctDigit/4 6/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '6'/1 ]] }
    refalrts::reinit_char(context[1], '6');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OctDigit/4 7/5 >/1
  if( ! refalrts::number_term( 7UL, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OctDigit/4 7/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '7'/1 ]] }
  refalrts::reinit_char(context[1], '7');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OctDigit("OctDigit", 2340599971U, 2476243008U, func_OctDigit);


static refalrts::FnResult func_gen_EscapeChar_S7L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & EscapeChar$7\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscapeChar$7\1/4 s.new#1/5 s.new#2/6 s.new#3/7 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & EscapeChar$7\1/4 s.Other#1/5 '<'/6 s.Code#2/7 >/1
    if( ! refalrts::char_term( '<', context[6] ) )
      continue;
    //DEBUG: s.Other#1: 5
    //DEBUG: s.Code#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Other#1/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } '\\'/8 Tile{ AsIs: </0 Reuse: & OctDigit/4 } </9 Tile{ HalfReuse: & Div/6 AsIs: s.Code#2/7 } 64/10 >/11 >/12 </13 & OctDigit/14 </15 & Mod/16 </17 & Div/18 s.Code#2/7/19 8/20 >/21 8/22 >/23 >/24 </25 & OctDigit/26 </27 & Mod/28 s.Code#2/7/29 8/30 >/31 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[8], '\\');
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_number(vm, context[10], 64UL);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_OctDigit]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_Mod]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_Div]);
    refalrts::copy_stvar(vm, context[19], context[7]);
    refalrts::alloc_number(vm, context[20], 8UL);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_number(vm, context[22], 8UL);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_OctDigit]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_Mod]);
    refalrts::copy_stvar(vm, context[29], context[7]);
    refalrts::alloc_number(vm, context[30], 8UL);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_OctDigit]);
    refalrts::reinit_name(context[6], functions[efunc_Div]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[31] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscapeChar$7\1/4 s.Other#1/5 s.Compare#2/6 s.Code#2/7 >/1
  //DEBUG: s.Other#1: 5
  //DEBUG: s.Compare#2: 6
  //DEBUG: s.Code#2: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EscapeChar$7\1/4 s.Other#1/5 s.Compare#2/6 s.Code#2/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Other1 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EscapeChar_S7L1("EscapeChar$7\\1", 2340599971U, 2476243008U, func_gen_EscapeChar_S7L1);


static refalrts::FnResult func_EscapeChar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & EscapeChar/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscapeChar/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & EscapeChar/4 '\n'/5 >/1
    if( ! refalrts::char_term( '\n', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'n'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\t'/5 >/1
    if( ! refalrts::char_term( '\t', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 't'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], 't');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\r'/5 >/1
    if( ! refalrts::char_term( '\r', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: 'r'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], 'r');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\''/5 >/1
    if( ! refalrts::char_term( '\'', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\''/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\"'/5 >/1
    if( ! refalrts::char_term( '\"', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ Reuse: '\\'/5 HalfReuse: '\"'/1 ]] }
    refalrts::update_char(context[5], '\\');
    refalrts::reinit_char(context[1], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EscapeChar/4 '\\'/5 >/1
    if( ! refalrts::char_term( '\\', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & EscapeChar/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: '\\'/5 HalfReuse: '\\'/1 ]] }
    refalrts::reinit_char(context[1], '\\');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscapeChar/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & Fetch/7 </8 & TermCompare/9 s.Other#1/5/10 ' '/11 >/12 Tile{ AsIs: </0 Reuse: & Ord/4 AsIs: s.Other#1/5 AsIs: >/1 } [*]/13 & EscapeChar$7\1/14 s.Other#1/5/15 {*}/16 >/17 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_TermCompare]);
  refalrts::copy_stvar(vm, context[10], context[5]);
  refalrts::alloc_char(vm, context[11], ' ');
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_closure_head(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_EscapeChar_S7L1]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_unwrapped_closure(vm, context[16], context[13]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_Ord]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscapeChar("EscapeChar", 0U, 0U, func_EscapeChar);


static refalrts::FnResult func_EscapeString(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & EscapeString/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & EscapeChar/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_EscapeChar]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscapeString("EscapeString", 0U, 0U, func_EscapeString);


static refalrts::FnResult func_gen_CharFromNum_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & CharFromNum\1/4 s.Base#1/5 s.Accum#2/6 s.Next#2/7 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Base#1: 5
  //DEBUG: s.Accum#2: 6
  //DEBUG: s.Next#2: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } </8 & Mul/9 Tile{ AsIs: s.Accum#2/6 } Tile{ AsIs: s.Base#1/5 } >/10 Tile{ AsIs: s.Next#2/7 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Mul]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CharFromNum_L1("CharFromNum\\1", 2340599971U, 2476243008U, func_gen_CharFromNum_L1);


static refalrts::FnResult func_CharFromNum(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CharFromNum/4 s.Base#1/5 e.Chars#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Chars#1 as range 2
  //DEBUG: s.Base#1: 5
  //DEBUG: e.Chars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Chr/4 } </6 & Reduce/7 [*]/8 & CharFromNum\1/9 Tile{ AsIs: s.Base#1/5 } {*}/10 0/11 </12 & Map/13 & DigitFromChar/14 Tile{ AsIs: e.Chars#1/2 } >/15 >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Reduce]);
  refalrts::alloc_closure_head(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_gen_CharFromNum_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[10], context[8]);
  refalrts::alloc_number(vm, context[11], 0UL);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[14], functions[efunc_DigitFromChar]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_Chr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CharFromNum("CharFromNum", 0U, 0U, func_CharFromNum);


static refalrts::FnResult func_gen_DigitFromChar_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & DigitFromChar\1/4 s.Char#1/5 e.Assoc-B#2/6 (/12 s.Digit#2/14 e.Vars-B#2/15 s.Char#1/19 e.Vars-E#2/17 )/13 e.Assoc-E#2/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[8], context[9] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Assoc-E#2 as range 8
    if( ! refalrts::svar_left( context[14], context[10], context[11] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[10];
      context[18] = context[11];
      if( ! refalrts::repeated_stvar_left( vm, context[19], context[5], context[17], context[18] ) )
        continue;
      // closed e.Vars-E#2 as range 17
      //DEBUG: s.Char#1: 5
      //DEBUG: e.Assoc-B#2: 6
      //DEBUG: e.Assoc-E#2: 8
      //DEBUG: s.Digit#2: 14
      //DEBUG: e.Vars-B#2: 15
      //DEBUG: e.Vars-E#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DigitFromChar\1/4 s.Char#1/5 e.Assoc-B#2/6 (/12 s.Digit#2/14 e.Vars-B#2/15 s.Char#1/19 e.Vars-E#2/17 )/13 e.Assoc-E#2/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Digit2 #14/1 ]] }
      refalrts::reinit_svar( context[1], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[15], context[16], context[10], context[11] ) );
  } while ( refalrts::open_evar_advance( context[6], context[7], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_DigitFromChar_L1("DigitFromChar\\1", 2340599971U, 2476243008U, func_gen_DigitFromChar_L1);


static refalrts::FnResult func_DigitFromChar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 79 elems
  refalrts::Iter context[79];
  refalrts::zeros( context, 79 );
  // </0 & DigitFromChar/4 s.Char#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Char#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } (/6 0/7 '0'/8 )/9 (/10 1/11 '1'/12 )/13 (/14 2/15 '2'/16 )/17 (/18 3/19 '3'/20 )/21 (/22 4/23 '4'/24 )/25 (/26 5/27 '5'/28 )/29 (/30 6/31 '6'/32 )/33 (/34 7/35 '7'/36 )/37 (/38 8/39 '8'/40 )/41 (/42 9/43 '9'/44 )/45 (/46 10/47"Aa"/48 )/50 (/51 11/52"Bb"/53 )/55 (/56 12/57"Cc"/58 )/60 (/61 13/62"Dd"/63 )/65 (/66 14/67"Ee"/68 )/70 (/71 15/72"Ff"/73 )/75 [*]/76 & DigitFromChar\1/77 Tile{ AsIs: s.Char#1/5 } {*}/78 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_number(vm, context[7], 0UL);
  refalrts::alloc_char(vm, context[8], '0');
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_number(vm, context[11], 1UL);
  refalrts::alloc_char(vm, context[12], '1');
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_number(vm, context[15], 2UL);
  refalrts::alloc_char(vm, context[16], '2');
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_number(vm, context[19], 3UL);
  refalrts::alloc_char(vm, context[20], '3');
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_number(vm, context[23], 4UL);
  refalrts::alloc_char(vm, context[24], '4');
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_number(vm, context[27], 5UL);
  refalrts::alloc_char(vm, context[28], '5');
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_number(vm, context[31], 6UL);
  refalrts::alloc_char(vm, context[32], '6');
  refalrts::alloc_close_bracket(vm, context[33]);
  refalrts::alloc_open_bracket(vm, context[34]);
  refalrts::alloc_number(vm, context[35], 7UL);
  refalrts::alloc_char(vm, context[36], '7');
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_number(vm, context[39], 8UL);
  refalrts::alloc_char(vm, context[40], '8');
  refalrts::alloc_close_bracket(vm, context[41]);
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::alloc_number(vm, context[43], 9UL);
  refalrts::alloc_char(vm, context[44], '9');
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::alloc_open_bracket(vm, context[46]);
  refalrts::alloc_number(vm, context[47], 10UL);
  refalrts::alloc_chars(vm, context[48], context[49], "Aa", 2);
  refalrts::alloc_close_bracket(vm, context[50]);
  refalrts::alloc_open_bracket(vm, context[51]);
  refalrts::alloc_number(vm, context[52], 11UL);
  refalrts::alloc_chars(vm, context[53], context[54], "Bb", 2);
  refalrts::alloc_close_bracket(vm, context[55]);
  refalrts::alloc_open_bracket(vm, context[56]);
  refalrts::alloc_number(vm, context[57], 12UL);
  refalrts::alloc_chars(vm, context[58], context[59], "Cc", 2);
  refalrts::alloc_close_bracket(vm, context[60]);
  refalrts::alloc_open_bracket(vm, context[61]);
  refalrts::alloc_number(vm, context[62], 13UL);
  refalrts::alloc_chars(vm, context[63], context[64], "Dd", 2);
  refalrts::alloc_close_bracket(vm, context[65]);
  refalrts::alloc_open_bracket(vm, context[66]);
  refalrts::alloc_number(vm, context[67], 14UL);
  refalrts::alloc_chars(vm, context[68], context[69], "Ee", 2);
  refalrts::alloc_close_bracket(vm, context[70]);
  refalrts::alloc_open_bracket(vm, context[71]);
  refalrts::alloc_number(vm, context[72], 15UL);
  refalrts::alloc_chars(vm, context[73], context[74], "Ff", 2);
  refalrts::alloc_close_bracket(vm, context[75]);
  refalrts::alloc_closure_head(vm, context[76]);
  refalrts::alloc_name(vm, context[77], functions[efunc_gen_DigitFromChar_L1]);
  refalrts::alloc_unwrapped_closure(vm, context[78], context[76]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[71], context[75] );
  refalrts::link_brackets( context[66], context[70] );
  refalrts::link_brackets( context[61], context[65] );
  refalrts::link_brackets( context[56], context[60] );
  refalrts::link_brackets( context[51], context[55] );
  refalrts::link_brackets( context[46], context[50] );
  refalrts::link_brackets( context[42], context[45] );
  refalrts::link_brackets( context[38], context[41] );
  refalrts::link_brackets( context[34], context[37] );
  refalrts::link_brackets( context[30], context[33] );
  refalrts::link_brackets( context[26], context[29] );
  refalrts::link_brackets( context[22], context[25] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[10], context[13] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[78], context[78] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[77] );
  refalrts::use( res );
  refalrts::wrap_closure( context[78] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DigitFromChar("DigitFromChar", 2340599971U, 2476243008U, func_DigitFromChar);


static refalrts::FnResult func_UnEscapeStringm_SR(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & UnEscapeString-SR/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoUnEscapeString-SR/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_DoUnEscapeStringm_SR]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnEscapeStringm_SR("UnEscapeString-SR", 0U, 0U, func_UnEscapeStringm_SR);


static refalrts::FnResult func_OctDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & OctDigits/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 }"34567"/5 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "34567", 5);
  refalrts::reinit_char(context[0], '0');
  refalrts::reinit_char(context[4], '1');
  refalrts::reinit_char(context[1], '2');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OctDigits("OctDigits", 2340599971U, 2476243008U, func_OctDigits);


static refalrts::FnResult func_DecDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & DecDigits/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 }"3456789"/5 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "3456789", 7);
  refalrts::reinit_char(context[0], '0');
  refalrts::reinit_char(context[4], '1');
  refalrts::reinit_char(context[1], '2');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DecDigits("DecDigits", 2340599971U, 2476243008U, func_DecDigits);


static refalrts::FnResult func_HexDigits(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & HexDigits/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: '0'/0 HalfReuse: '1'/4 HalfReuse: '2'/1 }"34567AaBbCcDdEeFf"/5 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "34567AaBbCcDdEeFf", 17);
  refalrts::reinit_char(context[0], '0');
  refalrts::reinit_char(context[4], '1');
  refalrts::reinit_char(context[1], '2');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HexDigits("HexDigits", 2340599971U, 2476243008U, func_HexDigits);


static refalrts::FnResult func_DoUnEscapeStringm_SR(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & DoUnEscapeString-SR/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnEscapeString-SR/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DoUnEscapeString-SR/4 (/7 e.new#3/9 )/8 s.new#4/13 e.new#5/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new#3 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new#5 as range 11
    do {
      // </0 & DoUnEscapeString-SR/4 (/7 e.new#6/14 )/8 '\\'/13 e.new#7/16 >/1
      context[14] = context[9];
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[12];
      if( ! refalrts::char_term( '\\', context[13] ) )
        continue;
      // closed e.new#6 as range 14
      // closed e.new#7 as range 16
      do {
        // </0 & DoUnEscapeString-SR/4 (/7 e.new#8/18 )/8 '\\'/13 s.new#9/22 e.new#10/20 >/1
        context[18] = context[14];
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        // closed e.new#8 as range 18
        if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
          continue;
        // closed e.new#10 as range 20
        do {
          // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/23 )/8 '\\'/13 'x'/22 e.HexAndTail#1/25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::char_term( 'x', context[22] ) )
            continue;
          // closed e.Scanned#1 as range 23
          // closed e.HexAndTail#1 as range 25
          //DEBUG: e.Scanned#1: 23
          //DEBUG: e.HexAndTail#1: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-Hex/4 AsIs: (/7 AsIs: e.Scanned#1/23 AsIs: )/8 HalfReuse: (/13 HalfReuse: </22 } & HexDigits/27 >/28 )/29 (/30 )/31 Tile{ AsIs: e.HexAndTail#1/25 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[27], functions[efunc_HexDigits]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_close_bracket(vm, context[29]);
          refalrts::alloc_open_bracket(vm, context[30]);
          refalrts::alloc_close_bracket(vm, context[31]);
          refalrts::update_name(context[4], functions[efunc_DoUnEscapeStringm_SRm_Hex]);
          refalrts::reinit_open_bracket(context[13]);
          refalrts::reinit_open_call(context[22]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[30], context[31] );
          refalrts::link_brackets( context[13], context[29] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[22] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[27], context[31] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/23 )/8 '\\'/13 'X'/22 e.HexAndTail#1/25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::char_term( 'X', context[22] ) )
            continue;
          // closed e.Scanned#1 as range 23
          // closed e.HexAndTail#1 as range 25
          //DEBUG: e.Scanned#1: 23
          //DEBUG: e.HexAndTail#1: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-Hex/4 AsIs: (/7 AsIs: e.Scanned#1/23 AsIs: )/8 HalfReuse: (/13 HalfReuse: </22 } & HexDigits/27 >/28 )/29 (/30 )/31 Tile{ AsIs: e.HexAndTail#1/25 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[27], functions[efunc_HexDigits]);
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_close_bracket(vm, context[29]);
          refalrts::alloc_open_bracket(vm, context[30]);
          refalrts::alloc_close_bracket(vm, context[31]);
          refalrts::update_name(context[4], functions[efunc_DoUnEscapeStringm_SRm_Hex]);
          refalrts::reinit_open_bracket(context[13]);
          refalrts::reinit_open_call(context[22]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[30], context[31] );
          refalrts::link_brackets( context[13], context[29] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[22] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[27], context[31] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/23 )/8 '\\'/13 'd'/22 e.DecAndTail#1/25 >/1
          context[23] = context[18];
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[21];
          if( ! refalrts::char_term( 'd', context[22] ) )
            continue;
          // closed e.Scanned#1 as range 23
          // closed e.DecAndTail#1 as range 25
          //DEBUG: e.Scanned#1: 23
          //DEBUG: e.DecAndTail#1: 25

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/23 AsIs: )/8 HalfReuse: (/13 HalfReuse: 10/22 } </27 & DecDigits/28 >/29 )/30 (/31 )/32 Tile{ AsIs: e.DecAndTail#1/25 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[27]);
          refalrts::alloc_name(vm, context[28], functions[efunc_DecDigits]);
          refalrts::alloc_close_call(vm, context[29]);
          refalrts::alloc_close_bracket(vm, context[30]);
          refalrts::alloc_open_bracket(vm, context[31]);
          refalrts::alloc_close_bracket(vm, context[32]);
          refalrts::update_name(context[4], functions[efunc_DoUnEscapeStringm_SRm_DecOct]);
          refalrts::reinit_open_bracket(context[13]);
          refalrts::reinit_number(context[22], 10UL);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[31], context[32] );
          refalrts::link_brackets( context[13], context[30] );
          refalrts::push_stack( vm, context[29] );
          refalrts::push_stack( vm, context[27] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[27], context[32] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/23 )/8 '\\'/13 'D'/22 e.DecAndTail#1/25 >/1
        context[23] = context[18];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::char_term( 'D', context[22] ) )
          continue;
        // closed e.Scanned#1 as range 23
        // closed e.DecAndTail#1 as range 25
        //DEBUG: e.Scanned#1: 23
        //DEBUG: e.DecAndTail#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/23 AsIs: )/8 HalfReuse: (/13 HalfReuse: 10/22 } </27 & DecDigits/28 >/29 )/30 (/31 )/32 Tile{ AsIs: e.DecAndTail#1/25 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[27]);
        refalrts::alloc_name(vm, context[28], functions[efunc_DecDigits]);
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::alloc_close_bracket(vm, context[30]);
        refalrts::alloc_open_bracket(vm, context[31]);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::update_name(context[4], functions[efunc_DoUnEscapeStringm_SRm_DecOct]);
        refalrts::reinit_open_bracket(context[13]);
        refalrts::reinit_number(context[22], 10UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[31], context[32] );
        refalrts::link_brackets( context[13], context[30] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[27] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[27], context[32] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/18 )/8 '\\'/13 e.EscapedAndTail#1/20 >/1
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[17];
      // closed e.Scanned#1 as range 18
      // closed e.EscapedAndTail#1 as range 20
      //DEBUG: e.Scanned#1: 18
      //DEBUG: e.EscapedAndTail#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-Escape/4 AsIs: (/7 AsIs: e.Scanned#1/18 AsIs: )/8 HalfReuse: (/13 } </22 & OctDigits/23 >/24 )/25 Tile{ AsIs: e.EscapedAndTail#1/20 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_OctDigits]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::update_name(context[4], functions[efunc_DoUnEscapeStringm_SRm_Escape]);
      refalrts::reinit_open_bracket(context[13]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[25] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[22], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/14 )/8 s.SimpleChar#1/13 e.Tail#1/16 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[12];
    // closed e.Scanned#1 as range 14
    // closed e.Tail#1 as range 16
    //DEBUG: s.SimpleChar#1: 13
    //DEBUG: e.Scanned#1: 14
    //DEBUG: e.Tail#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.SimpleChar#1/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/14 HalfReuse: s.SimpleChar1 #13/8 } )/18 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::reinit_svar( context[8], context[13] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoUnEscapeString-SR/4 (/7 e.Scanned#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  //DEBUG: e.Scanned#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & DoUnEscapeString-SR/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Success/0 } Tile{ AsIs: e.Scanned#1/5 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Success]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SR("DoUnEscapeString-SR", 2340599971U, 2476243008U, func_DoUnEscapeStringm_SR);


static refalrts::FnResult func_DoUnEscapeStringm_SRm_Hex(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & DoUnEscapeString-SR-Hex/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 e.new#4/2 >/1
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
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  // closed e.new#4 as range 2
  do {
    // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.Scanned#1/17 )/8 (/11 e.ValidDigits-B#1/26 s.Digit#1/30 e.ValidDigits-E#1/28 )/12 (/15 e.ScannedNumber#1/21 )/16 s.Digit#1/25 e.Tail#1/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.Scanned#1 as range 17
    // closed e.ScannedNumber#1 as range 21
    if( ! refalrts::svar_left( context[25], context[23], context[24] ) )
      continue;
    // closed e.Tail#1 as range 23
    context[26] = 0;
    context[27] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[28] = context[19];
      context[29] = context[20];
      if( ! refalrts::repeated_stvar_left( vm, context[30], context[25], context[28], context[29] ) )
        continue;
      // closed e.ValidDigits-E#1 as range 28
      //DEBUG: e.Scanned#1: 17
      //DEBUG: e.ScannedNumber#1: 21
      //DEBUG: s.Digit#1: 25
      //DEBUG: e.Tail#1: 23
      //DEBUG: e.ValidDigits-B#1: 26
      //DEBUG: e.ValidDigits-E#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Digit#1/25 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-SR-Hex/4 AsIs: (/7 AsIs: e.Scanned#1/17 AsIs: )/8 AsIs: (/11 AsIs: e.ValidDigits-B#1/26 AsIs: s.Digit#1/30 AsIs: e.ValidDigits-E#1/28 AsIs: )/12 AsIs: (/15 AsIs: e.ScannedNumber#1/21 HalfReuse: s.Digit1 #30/16 } )/31 Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[31]);
      refalrts::reinit_svar( context[16], context[30] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[31] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[31], context[31] );
      refalrts::splice_to_freelist_open( vm, context[16], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[26], context[27], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.Scanned#1/17 )/8 (/11 e.ValidDigits#1/19 )/12 (/15 )/16 e.Tail#1/21 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[2];
    context[22] = context[3];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Scanned#1 as range 17
    // closed e.ValidDigits#1 as range 19
    // closed e.Tail#1 as range 21
    //DEBUG: e.Scanned#1: 17
    //DEBUG: e.ValidDigits#1: 19
    //DEBUG: e.Tail#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Scanned#1/17 )/8 (/11 e.ValidDigits#1/19 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fail/0 HalfReuse: # BadEscapeCode/4 HalfReuse: '\\'/7 } Tile{ HalfReuse: 'x'/12 HalfReuse: </15 HalfReuse: & Prefix3/16 AsIs: e.Tail#1/21 AsIs: >/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Fail]);
    refalrts::reinit_ident(context[4], identifiers[ident_BadEscapeCode]);
    refalrts::reinit_char(context[7], '\\');
    refalrts::reinit_char(context[12], 'x');
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[16], functions[efunc_Prefix3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoUnEscapeString-SR-Hex/4 (/7 e.Scanned#1/5 )/8 (/11 e.ValidDitits#1/9 )/12 (/15 e.ScannedHex#1/13 )/16 e.Tail#1/2 >/1
  // closed e.Scanned#1 as range 5
  // closed e.ValidDitits#1 as range 9
  // closed e.ScannedHex#1 as range 13
  // closed e.Tail#1 as range 2
  //DEBUG: e.Scanned#1: 5
  //DEBUG: e.ValidDitits#1: 9
  //DEBUG: e.ScannedHex#1: 13
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.ValidDitits#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: </8 HalfReuse: & CharFromNum/11 } Tile{ HalfReuse: 16/15 } Tile{ AsIs: e.ScannedHex#1/13 } Tile{ HalfReuse: >/12 } Tile{ AsIs: )/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoUnEscapeStringm_SR]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_CharFromNum]);
  refalrts::reinit_number(context[15], 16UL);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::splice_to_freelist_open( vm, context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SRm_Hex("DoUnEscapeString-SR-Hex", 2340599971U, 2476243008U, func_DoUnEscapeStringm_SRm_Hex);


static refalrts::FnResult func_Prefix3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Prefix3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Prefix3/4 s.1#1/7 s.2#1/8 s.3#1/9 s.4#1/10 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: s.1#1: 7
    //DEBUG: s.2#1: 8
    //DEBUG: s.3#1: 9
    //DEBUG: s.4#1: 10
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.4#1/10 e.Tail#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.1#1/7 AsIs: s.2#1/8 AsIs: s.3#1/9 } Tile{ HalfReuse: '.'/0 HalfReuse: '.'/4 } Tile{ HalfReuse: '.'/1 ]] }
    refalrts::reinit_char(context[0], '.');
    refalrts::reinit_char(context[4], '.');
    refalrts::reinit_char(context[1], '.');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Prefix3/4 e.ShortExpr#1/2 >/1
  // closed e.ShortExpr#1 as range 2
  //DEBUG: e.ShortExpr#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Prefix3/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ShortExpr#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Prefix3("Prefix3", 2340599971U, 2476243008U, func_Prefix3);


static refalrts::FnResult func_DoUnEscapeStringm_SRm_DecOct(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & DoUnEscapeString-SR-DecOct/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.new#1/5 )/8 (/11 s.new#2/17 e.new#3/9 )/12 (/15 e.new#4/13 )/16 e.new#5/2 >/1
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
    // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/18 )/8 (/11 s.Base#1/17 e.ValidDigits#1/20 )/12 (/15 s.D1#1/26 s.D2#1/27 s.D3#1/28 )/16 e.Tail#1/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[2];
    context[25] = context[3];
    // closed e.Scanned#1 as range 18
    // closed e.ValidDigits#1 as range 20
    // closed e.Tail#1 as range 24
    if( ! refalrts::svar_left( context[26], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_left( context[27], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_left( context[28], context[22], context[23] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    //DEBUG: s.Base#1: 17
    //DEBUG: e.Scanned#1: 18
    //DEBUG: e.ValidDigits#1: 20
    //DEBUG: e.Tail#1: 24
    //DEBUG: s.D1#1: 26
    //DEBUG: s.D2#1: 27
    //DEBUG: s.D3#1: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.ValidDigits#1/20 )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/18 HalfReuse: </8 HalfReuse: & CharFromNum/11 AsIs: s.Base#1/17 } Tile{ AsIs: s.D1#1/26 AsIs: s.D2#1/27 AsIs: s.D3#1/28 } Tile{ HalfReuse: >/15 } Tile{ AsIs: )/16 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_DoUnEscapeStringm_SR]);
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[11], functions[efunc_CharFromNum]);
    refalrts::reinit_close_call(context[15]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    refalrts::splice_to_freelist_open( vm, context[17], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/18 )/8 (/11 s.Base#1/17 e.ValidDigits-B#1/27 s.Digit#1/31 e.ValidDigits-E#1/29 )/12 (/15 e.ScannedNumber#1/22 )/16 s.Digit#1/26 e.Tail#1/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[2];
    context[25] = context[3];
    // closed e.Scanned#1 as range 18
    // closed e.ScannedNumber#1 as range 22
    if( ! refalrts::svar_left( context[26], context[24], context[25] ) )
      continue;
    // closed e.Tail#1 as range 24
    context[27] = 0;
    context[28] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[29] = context[20];
      context[30] = context[21];
      if( ! refalrts::repeated_stvar_left( vm, context[31], context[26], context[29], context[30] ) )
        continue;
      // closed e.ValidDigits-E#1 as range 29
      //DEBUG: s.Base#1: 17
      //DEBUG: e.Scanned#1: 18
      //DEBUG: e.ScannedNumber#1: 22
      //DEBUG: s.Digit#1: 26
      //DEBUG: e.Tail#1: 24
      //DEBUG: e.ValidDigits-B#1: 27
      //DEBUG: e.ValidDigits-E#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Digit#1/26 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/18 AsIs: )/8 AsIs: (/11 AsIs: s.Base#1/17 AsIs: e.ValidDigits-B#1/27 AsIs: s.Digit#1/31 AsIs: e.ValidDigits-E#1/29 AsIs: )/12 AsIs: (/15 AsIs: e.ScannedNumber#1/22 HalfReuse: s.Digit1 #31/16 } )/32 Tile{ AsIs: e.Tail#1/24 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::reinit_svar( context[16], context[31] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[32] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[32], context[32] );
      refalrts::splice_to_freelist_open( vm, context[16], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[27], context[28], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/18 )/8 (/11 s.Base#1/17 e.ValidDigits#1/20 )/12 (/15 )/16 e.Tail#1/22 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[2];
    context[23] = context[3];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Scanned#1 as range 18
    // closed e.ValidDigits#1 as range 20
    // closed e.Tail#1 as range 22
    //DEBUG: s.Base#1: 17
    //DEBUG: e.Scanned#1: 18
    //DEBUG: e.ValidDigits#1: 20
    //DEBUG: e.Tail#1: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Scanned#1/18 )/8 (/11 s.Base#1/17 e.ValidDigits#1/20 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: # Fail/0 HalfReuse: # BadEscapeCode/4 HalfReuse: '\\'/7 } Tile{ HalfReuse: 'd'/12 HalfReuse: </15 HalfReuse: & Prefix3/16 AsIs: e.Tail#1/22 AsIs: >/1 ]] }
    refalrts::reinit_ident(context[0], identifiers[ident_Fail]);
    refalrts::reinit_ident(context[4], identifiers[ident_BadEscapeCode]);
    refalrts::reinit_char(context[7], '\\');
    refalrts::reinit_char(context[12], 'd');
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[16], functions[efunc_Prefix3]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoUnEscapeString-SR-DecOct/4 (/7 e.Scanned#1/5 )/8 (/11 s.Base#1/17 e.ValidDigits#1/9 )/12 (/15 e.ScannedNumber#1/13 )/16 e.Tail#1/2 >/1
  // closed e.Scanned#1 as range 5
  // closed e.ValidDigits#1 as range 9
  // closed e.ScannedNumber#1 as range 13
  // closed e.Tail#1 as range 2
  //DEBUG: s.Base#1: 17
  //DEBUG: e.Scanned#1: 5
  //DEBUG: e.ValidDigits#1: 9
  //DEBUG: e.ScannedNumber#1: 13
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.ValidDigits#1/9 )/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/5 HalfReuse: </8 HalfReuse: & CharFromNum/11 AsIs: s.Base#1/17 } Tile{ AsIs: e.ScannedNumber#1/13 } Tile{ HalfReuse: >/15 } Tile{ AsIs: )/16 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoUnEscapeStringm_SR]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_CharFromNum]);
  refalrts::reinit_close_call(context[15]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[17], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SRm_DecOct("DoUnEscapeString-SR-DecOct", 2340599971U, 2476243008U, func_DoUnEscapeStringm_SRm_DecOct);


static refalrts::FnResult func_gen_DoUnEscapeStringm_SRm_Escape_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoUnEscapeString-SR-Escape$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnEscapeString-SR-Escape$2\1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 s.new#4/14 s.new#5/13 >/1
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
  if( ! refalrts::svar_right( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & DoUnEscapeString-SR-Escape$2\1/4 (/7 e.Scanned#1/15 )/8 (/11 e.Tail#1/17 )/12 s.Next#1/21 # Success/14 s.Char#2/13 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Success], context[14] ) )
      continue;
    // closed e.Scanned#1 as range 15
    // closed e.Tail#1 as range 17
    if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    //DEBUG: s.Char#2: 13
    //DEBUG: e.Scanned#1: 15
    //DEBUG: e.Tail#1: 17
    //DEBUG: s.Next#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Next#1/21 # Success/14 s.Char#2/13 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR/4 AsIs: (/7 AsIs: e.Scanned#1/15 HalfReuse: s.Char2 #13/8 HalfReuse: )/11 AsIs: e.Tail#1/17 HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_DoUnEscapeStringm_SR]);
    refalrts::reinit_svar( context[8], context[13] );
    refalrts::reinit_close_bracket(context[11]);
    refalrts::reinit_close_call(context[12]);
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[12], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoUnEscapeString-SR-Escape$2\1/4 (/7 e.Scanned#1/5 )/8 (/11 e.Tail#1/9 )/12 s.Next#1/14 # Fails/13 >/1
  if( ! refalrts::ident_term( identifiers[ident_Fails], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  // closed e.Tail#1 as range 9
  //DEBUG: s.Next#1: 14
  //DEBUG: e.Scanned#1: 5
  //DEBUG: e.Tail#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Scanned#1/5 )/8 (/11 e.Tail#1/9 )/12 s.Next#1/14 # Fails/13 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # Fails/0 HalfReuse: # BadEscapeSymbol/4 HalfReuse: '\\'/7 } Tile{ HalfReuse: s.Next1 #14/1 ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_Fails]);
  refalrts::reinit_ident(context[4], identifiers[ident_BadEscapeSymbol]);
  refalrts::reinit_char(context[7], '\\');
  refalrts::reinit_svar( context[1], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoUnEscapeStringm_SRm_Escape_S2L1("DoUnEscapeString-SR-Escape$2\\1", 2340599971U, 2476243008U, func_gen_DoUnEscapeStringm_SRm_Escape_S2L1);


static refalrts::FnResult func_DoUnEscapeStringm_SRm_Escape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & DoUnEscapeString-SR-Escape/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.new#4/13 )/8 (/11 e.new#5/15 )/12 s.new#6/19 e.new#7/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.new#4 as range 13
    // closed e.new#5 as range 15
    if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
      continue;
    // closed e.new#7 as range 17
    do {
      // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/20 )/8 (/11 e.Octs-B#1/26 s.Oct#1/30 e.Octs-E#1/28 )/12 s.Oct#1/19 e.Tail#1/24 >/1
      context[20] = context[13];
      context[21] = context[14];
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      // closed e.Scanned#1 as range 20
      // closed e.Tail#1 as range 24
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[28] = context[22];
        context[29] = context[23];
        if( ! refalrts::repeated_stvar_left( vm, context[30], context[19], context[28], context[29] ) )
          continue;
        // closed e.Octs-E#1 as range 28
        //DEBUG: s.Oct#1: 19
        //DEBUG: e.Scanned#1: 20
        //DEBUG: e.Tail#1: 24
        //DEBUG: e.Octs-B#1: 26
        //DEBUG: e.Octs-E#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoUnEscapeString-SR-DecOct/4 AsIs: (/7 AsIs: e.Scanned#1/20 AsIs: )/8 AsIs: (/11 } 8/31 Tile{ AsIs: e.Octs-B#1/26 } Tile{ AsIs: s.Oct#1/30 AsIs: e.Octs-E#1/28 AsIs: )/12 } (/32 Tile{ AsIs: s.Oct#1/19 } )/33 Tile{ AsIs: e.Tail#1/24 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_number(vm, context[31], 8UL);
        refalrts::alloc_open_bracket(vm, context[32]);
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::update_name(context[4], functions[efunc_DoUnEscapeStringm_SRm_DecOct]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[32], context[33] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[33], context[33] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        res = refalrts::splice_evar( res, context[30], context[12] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[31], context[31] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[26], context[27], context[22], context[23] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/20 )/8 (/11 e.Octs#1/22 )/12 s.Next#1/19 e.Tail#1/24 >/1
    context[20] = context[13];
    context[21] = context[14];
    context[22] = context[15];
    context[23] = context[16];
    context[24] = context[17];
    context[25] = context[18];
    // closed e.Scanned#1 as range 20
    // closed e.Octs#1 as range 22
    // closed e.Tail#1 as range 24
    //DEBUG: s.Next#1: 19
    //DEBUG: e.Scanned#1: 20
    //DEBUG: e.Octs#1: 22
    //DEBUG: e.Tail#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Octs#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </26 & Fetch/27 </28 & SingularEscape/29 s.Next#1/19/30 >/31 Tile{ HalfReuse: [*]/0 Reuse: & DoUnEscapeString-SR-Escape$2\1/4 AsIs: (/7 AsIs: e.Scanned#1/20 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Tail#1/24 } Tile{ AsIs: )/12 AsIs: s.Next#1/19 } {*}/32 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_SingularEscape]);
    refalrts::copy_stvar(vm, context[30], context[19]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_unwrapped_closure(vm, context[32], context[0]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_DoUnEscapeStringm_SRm_Escape_S2L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[26] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[26], context[31] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    refalrts::wrap_closure( context[32] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/5 )/8 (/11 e.Octs#1/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 5
  // closed e.Octs#1 as range 9
  //DEBUG: e.Scanned#1: 5
  //DEBUG: e.Octs#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoUnEscapeString-SR-Escape/4 (/7 e.Scanned#1/5 )/8 (/11 e.Octs#1/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/12 HalfReuse: # EOLAfterSlash/1 ]] }
  refalrts::reinit_ident(context[12], identifiers[ident_Fails]);
  refalrts::reinit_ident(context[1], identifiers[ident_EOLAfterSlash]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoUnEscapeStringm_SRm_Escape("DoUnEscapeString-SR-Escape", 2340599971U, 2476243008U, func_DoUnEscapeStringm_SRm_Escape);


static refalrts::FnResult func_SingularEscape(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & SingularEscape/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SingularEscape/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SingularEscape/4 'r'/5 >/1
    if( ! refalrts::char_term( 'r', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\r'/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_Success]);
    refalrts::reinit_char(context[1], '\r');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 'n'/5 >/1
    if( ! refalrts::char_term( 'n', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\n'/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_Success]);
    refalrts::reinit_char(context[1], '\n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 't'/5 >/1
    if( ! refalrts::char_term( 't', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\t'/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_Success]);
    refalrts::reinit_char(context[1], '\t');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 'a'/5 >/1
    if( ! refalrts::char_term( 'a', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\007'/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_Success]);
    refalrts::reinit_char(context[1], '\007');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 'b'/5 >/1
    if( ! refalrts::char_term( 'b', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\010'/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_Success]);
    refalrts::reinit_char(context[1], '\010');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 'f'/5 >/1
    if( ! refalrts::char_term( 'f', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\014'/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_Success]);
    refalrts::reinit_char(context[1], '\014');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 'v'/5 >/1
    if( ! refalrts::char_term( 'v', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\013'/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_Success]);
    refalrts::reinit_char(context[1], '\013');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 '\\'/5 >/1
    if( ! refalrts::char_term( '\\', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\\'/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_Success]);
    refalrts::reinit_char(context[1], '\\');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 '\''/5 >/1
    if( ! refalrts::char_term( '\'', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_Success]);
    refalrts::reinit_char(context[1], '\'');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SingularEscape/4 '\"'/5 >/1
    if( ! refalrts::char_term( '\"', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SingularEscape/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Success/5 HalfReuse: '\"'/1 ]] }
    refalrts::reinit_ident(context[5], identifiers[ident_Success]);
    refalrts::reinit_char(context[1], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SingularEscape/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SingularEscape/4 s.Other#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Fails/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_Fails]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SingularEscape("SingularEscape", 2340599971U, 2476243008U, func_SingularEscape);


//End of file
