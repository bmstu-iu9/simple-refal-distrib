// This file automatically generated from 'Flex-Lexer.ref'
// Don't edit! Edit 'Flex-Lexer.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3150413876_1105445155

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
  efunc_EscapeString = 14,
  efunc_Inc = 15,
  efunc_Pipe = 16,
  efunc_Map = 17,
  efunc_gen_Flexm_Tokens_L1 = 18,
  efunc_LowLevelTokens = 19,
  efunc_SecondPass = 20,
  efunc_gen_Flexm_Tokens_L2 = 21,
  efunc_MapReduce = 22,
  efunc_gen_Flexm_Tokens_L3 = 23,
  efunc_gen_Flexm_Tokens_L4 = 24,
  efunc_Fetch = 25,
  efunc_Root = 26,
  efunc_CharFromNum = 27,
  efunc_Reduce = 28,
  efunc_gen_CharFromNum_L1 = 29,
  efunc_DigitFromChar = 30,
  efunc_Chr = 31,
  efunc_gen_DigitFromChar_L1 = 32,
  efunc_ReadRegexp = 33,
  efunc_ReadArrow = 34,
  efunc_Number = 35,
  efunc_Name = 36,
  efunc_ErrorMessage = 37,
  efunc_EscRegexp = 38,
  efunc_StartGroup = 39,
  efunc_ReadInclude = 40,
  efunc_EscRegexpm_XCode = 41,
  efunc_EscRegexpm_OCode = 42,
  efunc_ReadGroup = 43,
  efunc_ReadBody = 44,
  efunc_EscRegexpm_OCodem_C1 = 45,
  efunc_EscGroup = 46,
  efunc_EscGroupm_XCode = 47,
  efunc_EscGroupm_OCode = 48,
  efunc_EscGroupm_OCodem_C1 = 49,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_TName = 6,
  ident_TEquals = 7,
  ident_TArrow = 8,
  ident_TSkip = 9,
  ident_TErrorMessage = 10,
  ident_TChar = 11,
  ident_TStartRegexp = 12,
  ident_TEndRegexp = 13,
  ident_TStartGroup = 14,
  ident_TEndGroup = 15,
  ident_TInclude = 16,
  ident_TAny = 17,
  ident_TOpenBracket = 18,
  ident_TCloseBracket = 19,
  ident_TAlt = 20,
  ident_TBegin = 21,
  ident_TEnd = 22,
  ident_TOptional = 23,
  ident_TZeroMany = 24,
  ident_TOneMany = 25,
  ident_TInvertGroup = 26,
  ident_TGroupRange = 27,
  ident_TError = 28,
  ident_TStateStart = 29,
  ident_TComma = 30,
  ident_TStateEnd = 31,
  ident_TEOF = 32,
  ident_TNewLine = 33,
  ident_TGenericEscChar = 34,
  ident_TSpecChar = 35,
  ident_TQuantifier = 36,
  ident_TUnexpecteChar = 37,
  ident_TokenError = 38,
  ident_TkHexNumber = 39,
  ident_TkOctNumber = 40,
  ident_TkNumber = 41,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 3150413876U, 1105445155U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 1105445155UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 3150413876UL);
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
  refalrts::reinit_number(context[5], 3150413876UL);
  refalrts::reinit_number(context[7], 1105445155UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 3150413876U, 1105445155U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 3150413876U, 1105445155U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 3150413876U, 1105445155U, func_Residue);


static refalrts::FnResult func_Flexm_TextFromToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Flex-TextFromToken/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Flex-TextFromToken/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
    // </0 & Flex-TextFromToken/4 (/7 s.new#3/9 t.new#4/12 e.new#5/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
    if( ! context[13] )
      continue;
    // closed e.new#5 as range 10
    do {
      // </0 & Flex-TextFromToken/4 (/7 # TName/9 t.Pos#1/12 e.Name#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TName], context[9] ) )
        continue;
      // closed e.Name#1 as range 10
      //DEBUG: t.Pos#1: 12
      //DEBUG: e.Name#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Pos#1/12 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/7 HalfReuse: 'e'/9 } Tile{ HalfReuse: ' '/1 } Tile{ AsIs: e.Name#1/10 } Tile{ ]] }
      refalrts::reinit_char(context[0], 'n');
      refalrts::reinit_char(context[4], 'a');
      refalrts::reinit_char(context[7], 'm');
      refalrts::reinit_char(context[9], 'e');
      refalrts::reinit_char(context[1], ' ');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Flex-TextFromToken/4 (/7 s.new#6/9 t.new#7/12 )/8 >/1
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    do {
      // </0 & Flex-TextFromToken/4 (/7 # TEquals/9 t.Pos#1/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TEquals], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TEquals/9 t.Pos#1/12 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '='/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '=');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TArrow/9 t.Pos#1/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TArrow], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Pos#1/12 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '-'/4 HalfReuse: '>'/7 HalfReuse: '\"'/9 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '-');
      refalrts::reinit_char(context[7], '>');
      refalrts::reinit_char(context[9], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Flex-TextFromToken/4 (/7 # TSkip/9 t.Pos#1/12 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TSkip], context[9] ) )
      continue;
    //DEBUG: t.Pos#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Flex-TextFromToken/4 (/7 # TSkip/9 t.Pos#1/12 )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '-'/1 ]] }
    refalrts::reinit_char(context[1], '-');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Flex-TextFromToken/4 (/7 # TErrorMessage/9 e.Message#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TErrorMessage], context[9] ) )
      continue;
    // closed e.Message#1 as range 5
    //DEBUG: e.Message#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"Use"/10 Tile{ HalfReuse: 'r'/1 }" error messa"/12 Tile{ HalfReuse: 'g'/0 HalfReuse: 'e'/4 HalfReuse: ' '/7 HalfReuse: '\"'/9 AsIs: e.Message#1/5 HalfReuse: '\"'/8 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[10], context[11], "Use", 3);
    refalrts::alloc_chars(vm, context[12], context[13], " error messa", 12);
    refalrts::reinit_char(context[1], 'r');
    refalrts::reinit_char(context[0], 'g');
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_char(context[9], '\"');
    refalrts::reinit_char(context[8], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flex-TextFromToken/4 (/7 s.new#3/9 t.new#4/10 e.new#5/5 )/8 >/1
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 5
  do {
    // </0 & Flex-TextFromToken/4 (/7 # TChar/9 t.Pos#1/10 s.Char#1/14 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TChar], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: t.Pos#1: 10
    //DEBUG: s.Char#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TChar/9 t.Pos#1/10 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeString/7 } Tile{ AsIs: s.Char#1/14 HalfReuse: >/8 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char(context[0], '\'');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_EscapeString]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_char(context[1], '\'');
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Flex-TextFromToken/4 (/7 s.new#6/9 t.new#7/10 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & Flex-TextFromToken/4 (/7 # TStartRegexp/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TStartRegexp], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Pos#1/10 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '/'/4 HalfReuse: '\"'/7 HalfReuse: ' '/9 }"(star"/12 Tile{ HalfReuse: 't'/8 HalfReuse: ')'/1 ]] }
      refalrts::alloc_chars(vm, context[12], context[13], "(star", 5);
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '/');
      refalrts::reinit_char(context[7], '\"');
      refalrts::reinit_char(context[9], ' ');
      refalrts::reinit_char(context[8], 't');
      refalrts::reinit_char(context[1], ')');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TEndRegexp/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TEndRegexp], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} t.Pos#1/10 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '/'/4 HalfReuse: '\"'/7 HalfReuse: ' '/9 }"(en"/12 Tile{ HalfReuse: 'd'/8 HalfReuse: ')'/1 ]] }
      refalrts::alloc_chars(vm, context[12], context[13], "(en", 3);
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '/');
      refalrts::reinit_char(context[7], '\"');
      refalrts::reinit_char(context[9], ' ');
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_char(context[1], ')');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TStartGroup/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TStartGroup], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TStartGroup/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '['/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '[');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Flex-TextFromToken/4 (/7 # TEndGroup/9 t.Pos#1/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TEndGroup], context[9] ) )
      continue;
    //DEBUG: t.Pos#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TEndGroup/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: ']'/4 HalfReuse: '\"'/7 } Tile{ ]] }
    refalrts::reinit_char(context[0], '\"');
    refalrts::reinit_char(context[4], ']');
    refalrts::reinit_char(context[7], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Flex-TextFromToken/4 (/7 # TInclude/9 t.Pos#1/10 e.Name#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TInclude], context[9] ) )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: t.Pos#1: 10
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Flex-TextFromToken/4 (/7 # TInclude/9 t.Pos#1/10 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '{'/0 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: '}'/1 ]] }
    refalrts::reinit_char(context[0], '{');
    refalrts::reinit_char(context[1], '}');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Flex-TextFromToken/4 (/7 s.new#6/9 t.new#7/10 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & Flex-TextFromToken/4 (/7 # TAny/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TAny], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TAny/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '.'/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '.');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TOpenBracket/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TOpenBracket], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TOpenBracket/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '('/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '(');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TCloseBracket/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TCloseBracket], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TCloseBracket/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: ')'/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], ')');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TAlt/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TAlt], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TAlt/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '|'/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '|');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TBegin/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TBegin], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TBegin/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '^'/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '^');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TEnd/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TEnd], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TEnd/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '$'/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '$');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TOptional/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TOptional], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TOptional/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '?'/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '?');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TZeroMany/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TZeroMany], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TZeroMany/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '*'/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '*');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TOneMany/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TOneMany], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TOneMany/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '+'/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '+');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Flex-TextFromToken/4 (/7 # TInvertGroup/9 t.Pos#1/10 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TInvertGroup], context[9] ) )
        continue;
      //DEBUG: t.Pos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # TInvertGroup/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '^'/4 HalfReuse: '\"'/7 } Tile{ ]] }
      refalrts::reinit_char(context[0], '\"');
      refalrts::reinit_char(context[4], '^');
      refalrts::reinit_char(context[7], '\"');
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Flex-TextFromToken/4 (/7 # TGroupRange/9 t.Pos#1/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TGroupRange], context[9] ) )
      continue;
    //DEBUG: t.Pos#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TGroupRange/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '-'/4 HalfReuse: '\"'/7 } Tile{ ]] }
    refalrts::reinit_char(context[0], '\"');
    refalrts::reinit_char(context[4], '-');
    refalrts::reinit_char(context[7], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Flex-TextFromToken/4 (/7 # TError/9 t.Pos#1/10 e.Message#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TError], context[9] ) )
      continue;
    // closed e.Message#1 as range 5
    //DEBUG: t.Pos#1: 10
    //DEBUG: e.Message#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Pos#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 't'/0 HalfReuse: 'o'/4 HalfReuse: 'k'/7 HalfReuse: 'e'/9 }"n "/12 Tile{ HalfReuse: 'e'/8 HalfReuse: 'r'/1 }"ror "/14 Tile{ AsIs: e.Message#1/5 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[12], context[13], "n ", 2);
    refalrts::alloc_chars(vm, context[14], context[15], "ror ", 4);
    refalrts::reinit_char(context[0], 't');
    refalrts::reinit_char(context[4], 'o');
    refalrts::reinit_char(context[7], 'k');
    refalrts::reinit_char(context[9], 'e');
    refalrts::reinit_char(context[8], 'e');
    refalrts::reinit_char(context[1], 'r');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flex-TextFromToken/4 (/7 s.new#6/9 t.new#7/10 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Flex-TextFromToken/4 (/7 # TStateStart/9 t.Pos#1/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStateStart], context[9] ) )
      continue;
    //DEBUG: t.Pos#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TStateStart/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '<'/4 HalfReuse: '\"'/7 } Tile{ ]] }
    refalrts::reinit_char(context[0], '\"');
    refalrts::reinit_char(context[4], '<');
    refalrts::reinit_char(context[7], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Flex-TextFromToken/4 (/7 # TComma/9 t.Pos#1/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TComma], context[9] ) )
      continue;
    //DEBUG: t.Pos#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TComma/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: ','/4 HalfReuse: '\"'/7 } Tile{ ]] }
    refalrts::reinit_char(context[0], '\"');
    refalrts::reinit_char(context[4], ',');
    refalrts::reinit_char(context[7], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Flex-TextFromToken/4 (/7 # TStateEnd/9 t.Pos#1/10 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TStateEnd], context[9] ) )
      continue;
    //DEBUG: t.Pos#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TStateEnd/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\"'/0 HalfReuse: '>'/4 HalfReuse: '\"'/7 } Tile{ ]] }
    refalrts::reinit_char(context[0], '\"');
    refalrts::reinit_char(context[4], '>');
    refalrts::reinit_char(context[7], '\"');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flex-TextFromToken/4 (/7 # TEOF/9 t.Pos#1/10 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_TEOF], context[9] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Pos#1: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} # TEOF/9 t.Pos#1/10 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'O'/4 HalfReuse: 'F'/7 } Tile{ ]] }
  refalrts::reinit_char(context[0], 'E');
  refalrts::reinit_char(context[4], 'O');
  refalrts::reinit_char(context[7], 'F');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flexm_TextFromToken("Flex-TextFromToken", 0U, 0U, func_Flexm_TextFromToken);


static refalrts::FnResult func_gen_Flexm_Tokens_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Flex-Tokens\1/4 (/7 e.Line#2/5 )/8 >/1
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
  // closed e.Line#2 as range 5
  //DEBUG: e.Line#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Flex-Tokens\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Line#2/5 } Tile{ HalfReuse: '\n'/1 ]] }
  refalrts::reinit_char(context[1], '\n');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Flexm_Tokens_L1("Flex-Tokens\\1", 3150413876U, 1105445155U, func_gen_Flexm_Tokens_L1);


static refalrts::FnResult func_gen_Flexm_Tokens_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Flex-Tokens\2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Flex-Tokens\2/4 e.Tokens#2/5 (/9 # TEOF/11 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_TEOF], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.Tokens#2 as range 5
    //DEBUG: e.Tokens#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Flex-Tokens\2/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/5 } Tile{ AsIs: (/9 AsIs: # TEOF/11 AsIs: )/10 } Tile{ ]] }
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flex-Tokens\2/4 e.Tokens#2/2 >/1
  // closed e.Tokens#2 as range 2
  //DEBUG: e.Tokens#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/2 } Tile{ HalfReuse: (/0 HalfReuse: # TEOF/4 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TEOF]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Flexm_Tokens_L2("Flex-Tokens\\2", 3150413876U, 1105445155U, func_gen_Flexm_Tokens_L2);


static refalrts::FnResult func_gen_Flexm_Tokens_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Flex-Tokens\3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Flex-Tokens\3/4 s.new#1/9 (/7 s.new#2/10 e.new#3/5 )/8 >/1
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
  // closed e.new#3 as range 5
  do {
    // </0 & Flex-Tokens\3/4 s.LineNumber#2/9 (/7 # TNewLine/10 '\n'/13 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TNewLine], context[10] ) )
      continue;
    context[13] = refalrts::char_left( '\n', context[11], context[12] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: s.LineNumber#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TNewLine/10 '\n'/13 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.LineNumber#2/9 HalfReuse: >/7 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Inc]);
    refalrts::reinit_close_call(context[7]);
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flex-Tokens\3/4 s.LineNumber#2/9 (/7 s.Type#2/10 e.Info#2/5 )/8 >/1
  // closed e.Info#2 as range 5
  //DEBUG: s.LineNumber#2: 9
  //DEBUG: s.Type#2: 10
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Flex-Tokens\3/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.LineNumber#2/9 AsIs: (/7 AsIs: s.Type#2/10 } Tile{ HalfReuse: s.LineNumber2 #9/8 } Tile{ AsIs: e.Info#2/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_svar( context[8], context[9] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Flexm_Tokens_L3("Flex-Tokens\\3", 3150413876U, 1105445155U, func_gen_Flexm_Tokens_L3);


static refalrts::FnResult func_gen_Flexm_Tokens_L4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Flex-Tokens\4/4 s.LineNumber#2/5 e.Tokens#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#2 as range 2
  //DEBUG: s.LineNumber#2: 5
  //DEBUG: e.Tokens#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Flex-Tokens\4/4 s.LineNumber#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tokens#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Flexm_Tokens_L4("Flex-Tokens\\4", 3150413876U, 1105445155U, func_gen_Flexm_Tokens_L4);


static refalrts::FnResult func_Flexm_Tokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Flex-Tokens/4 s.FirstLineNumber#1/5 e.DescriptionLines#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.DescriptionLines#1 as range 2
  //DEBUG: s.FirstLineNumber#1: 5
  //DEBUG: e.DescriptionLines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.DescriptionLines#1/2 } </6 & Pipe/7 (/8 & Map/9 & Flex-Tokens\1/10 )/11 & LowLevelTokens/12 (/13 & Map/14 & SecondPass/15 )/16 & Flex-Tokens\2/17 (/18 & MapReduce/19 & Flex-Tokens\3/20 </21 & Inc/22 Tile{ AsIs: s.FirstLineNumber#1/5 } >/23 )/24 & Flex-Tokens\4/25 >/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Pipe]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Flexm_Tokens_L1]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_LowLevelTokens]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[15], functions[efunc_SecondPass]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_Flexm_Tokens_L2]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_MapReduce]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_Flexm_Tokens_L3]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_Inc]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_gen_Flexm_Tokens_L4]);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[6] );
  refalrts::link_brackets( context[18], context[24] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flexm_Tokens("Flex-Tokens", 0U, 0U, func_Flexm_Tokens);


static refalrts::FnResult func_LowLevelTokens(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & LowLevelTokens/4 e.Text#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Text#1 as range 2
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Root/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Root]);
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

static refalrts::NativeReference nat_ref_LowLevelTokens("LowLevelTokens", 3150413876U, 1105445155U, func_LowLevelTokens);


static refalrts::FnResult func_SecondPass(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & SecondPass/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SecondPass/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
    // </0 & SecondPass/4 (/7 # TNewLine/9 '\n'/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TNewLine], context[9] ) )
      continue;
    context[12] = refalrts::char_left( '\n', context[10], context[11] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TNewLine/9 AsIs: '\n'/12 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SecondPass/4 (/7 # TName/9 e.Name#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TName], context[9] ) )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TName/9 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SecondPass/4 (/7 s.new#3/9 e.new#4/10 s.new#5/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_right( context[12], context[10], context[11] ) )
      continue;
    // closed e.new#4 as range 10
    do {
      // </0 & SecondPass/4 (/7 s.new#6/9 s.new#7/12 )/8 >/1
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      do {
        // </0 & SecondPass/4 (/7 # TEquals/9 '='/12 )/8 >/1
        if( ! refalrts::char_term( '=', context[12] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TEquals], context[9] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TEquals/9 HalfReuse: )/12 } Tile{ ]] }
        refalrts::reinit_close_bracket(context[12]);
        refalrts::link_brackets( context[7], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[12] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SecondPass/4 (/7 # TArrow/9 '>'/12 )/8 >/1
        if( ! refalrts::char_term( '>', context[12] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TArrow], context[9] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TArrow/9 HalfReuse: )/12 } Tile{ ]] }
        refalrts::reinit_close_bracket(context[12]);
        refalrts::link_brackets( context[7], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[12] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SecondPass/4 (/7 # TGenericEscChar/9 s.new#8/12 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_TGenericEscChar], context[9] ) )
          continue;
        do {
          // </0 & SecondPass/4 (/7 # TGenericEscChar/9 'n'/12 )/8 >/1
          if( ! refalrts::char_term( 'n', context[12] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TChar/9 Reuse: '\n'/12 AsIs: )/8 } Tile{ ]] }
          refalrts::update_ident(context[9], identifiers[ident_TChar]);
          refalrts::update_char(context[12], '\n');
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & SecondPass/4 (/7 # TGenericEscChar/9 't'/12 )/8 >/1
          if( ! refalrts::char_term( 't', context[12] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TChar/9 Reuse: '\t'/12 AsIs: )/8 } Tile{ ]] }
          refalrts::update_ident(context[9], identifiers[ident_TChar]);
          refalrts::update_char(context[12], '\t');
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & SecondPass/4 (/7 # TGenericEscChar/9 'r'/12 )/8 >/1
          if( ! refalrts::char_term( 'r', context[12] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TChar/9 Reuse: '\r'/12 AsIs: )/8 } Tile{ ]] }
          refalrts::update_ident(context[9], identifiers[ident_TChar]);
          refalrts::update_char(context[12], '\r');
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[7], context[8] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & SecondPass/4 (/7 # TGenericEscChar/9 '\\'/12 )/8 >/1
        if( ! refalrts::char_term( '\\', context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TChar/9 AsIs: '\\'/12 AsIs: )/8 } Tile{ ]] }
        refalrts::update_ident(context[9], identifiers[ident_TChar]);
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SecondPass/4 (/7 # TChar/9 s.Char#1/12 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_TChar], context[9] ) )
          continue;
        //DEBUG: s.Char#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TChar/9 AsIs: s.Char#1/12 AsIs: )/8 } Tile{ ]] }
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SecondPass/4 (/7 s.new#8/9 '/'/12 )/8 >/1
        if( ! refalrts::char_term( '/', context[12] ) )
          continue;
        do {
          // </0 & SecondPass/4 (/7 # TStartRegexp/9 '/'/12 )/8 >/1
          if( ! refalrts::ident_term( identifiers[ident_TStartRegexp], context[9] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TStartRegexp/9 HalfReuse: )/12 } Tile{ ]] }
          refalrts::reinit_close_bracket(context[12]);
          refalrts::link_brackets( context[7], context[12] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[7], context[12] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & SecondPass/4 (/7 # TEndRegexp/9 '/'/12 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_TEndRegexp], context[9] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TEndRegexp/9 HalfReuse: )/12 } Tile{ ]] }
        refalrts::reinit_close_bracket(context[12]);
        refalrts::link_brackets( context[7], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[12] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SecondPass/4 (/7 # TStartGroup/9 '['/12 )/8 >/1
        if( ! refalrts::char_term( '[', context[12] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_TStartGroup], context[9] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TStartGroup/9 HalfReuse: )/12 } Tile{ ]] }
        refalrts::reinit_close_bracket(context[12]);
        refalrts::link_brackets( context[7], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[12] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SecondPass/4 (/7 # TEndGroup/9 ']'/12 )/8 >/1
      if( ! refalrts::char_term( ']', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TEndGroup], context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TEndGroup/9 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket(context[12]);
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SecondPass/4 (/7 # TInclude/9 e.Name#1/10 '}'/12 )/8 >/1
      if( ! refalrts::char_term( '}', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TInclude], context[9] ) )
        continue;
      // closed e.Name#1 as range 10
      //DEBUG: e.Name#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TInclude/9 AsIs: e.Name#1/10 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket(context[12]);
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SecondPass/4 (/7 s.new#6/9 s.new#7/12 )/8 >/1
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    do {
      // </0 & SecondPass/4 (/7 # TSpecChar/9 s.new#8/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TSpecChar], context[9] ) )
        continue;
      do {
        // </0 & SecondPass/4 (/7 # TSpecChar/9 '.'/12 )/8 >/1
        if( ! refalrts::char_term( '.', context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 (/7 # TSpecChar/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TAny/8 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[8], identifiers[ident_TAny]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[12], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SecondPass/4 (/7 # TSpecChar/9 '('/12 )/8 >/1
        if( ! refalrts::char_term( '(', context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 (/7 # TSpecChar/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TOpenBracket/8 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[8], identifiers[ident_TOpenBracket]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[12], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SecondPass/4 (/7 # TSpecChar/9 ')'/12 )/8 >/1
        if( ! refalrts::char_term( ')', context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 (/7 # TSpecChar/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TCloseBracket/8 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[8], identifiers[ident_TCloseBracket]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[12], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SecondPass/4 (/7 # TSpecChar/9 '|'/12 )/8 >/1
        if( ! refalrts::char_term( '|', context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 (/7 # TSpecChar/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TAlt/8 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[8], identifiers[ident_TAlt]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[12], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SecondPass/4 (/7 # TSpecChar/9 '^'/12 )/8 >/1
        if( ! refalrts::char_term( '^', context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 (/7 # TSpecChar/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TBegin/8 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[8], identifiers[ident_TBegin]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[12], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SecondPass/4 (/7 # TSpecChar/9 '$'/12 )/8 >/1
      if( ! refalrts::char_term( '$', context[12] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SecondPass/4 (/7 # TSpecChar/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TEnd/8 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[8], identifiers[ident_TEnd]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[12], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SecondPass/4 (/7 # TQuantifier/9 s.new#8/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_TQuantifier], context[9] ) )
        continue;
      do {
        // </0 & SecondPass/4 (/7 # TQuantifier/9 '?'/12 )/8 >/1
        if( ! refalrts::char_term( '?', context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 (/7 # TQuantifier/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TOptional/8 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[8], identifiers[ident_TOptional]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[12], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SecondPass/4 (/7 # TQuantifier/9 '*'/12 )/8 >/1
        if( ! refalrts::char_term( '*', context[12] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SecondPass/4 (/7 # TQuantifier/9 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TZeroMany/8 HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket(context[12]);
        refalrts::reinit_ident(context[8], identifiers[ident_TZeroMany]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[12], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SecondPass/4 (/7 # TQuantifier/9 '+'/12 )/8 >/1
      if( ! refalrts::char_term( '+', context[12] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SecondPass/4 (/7 # TQuantifier/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 HalfReuse: # TOneMany/8 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_ident(context[8], identifiers[ident_TOneMany]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[12], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SecondPass/4 (/7 # TInvertGroup/9 '^'/12 )/8 >/1
      if( ! refalrts::char_term( '^', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TInvertGroup], context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TInvertGroup/9 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket(context[12]);
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SecondPass/4 (/7 # TGroupRange/9 '-'/12 )/8 >/1
      if( ! refalrts::char_term( '-', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TGroupRange], context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TGroupRange/9 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket(context[12]);
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SecondPass/4 (/7 # TUnexpecteChar/9 s.Char#1/12 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TUnexpecteChar], context[9] ) )
      continue;
    //DEBUG: s.Char#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/13 # TError/14"Unexpected char"/15 Tile{ HalfReuse: ' '/0 HalfReuse: '\''/4 HalfReuse: </7 HalfReuse: & EscapeString/9 AsIs: s.Char#1/12 HalfReuse: >/8 HalfReuse: '\''/1 } )/17 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[13]);
    refalrts::alloc_ident(vm, context[14], identifiers[ident_TError]);
    refalrts::alloc_chars(vm, context[15], context[16], "Unexpected char", 15);
    refalrts::alloc_close_bracket(vm, context[17]);
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_char(context[4], '\'');
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_EscapeString]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_char(context[1], '\'');
    refalrts::link_brackets( context[13], context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[13], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SecondPass/4 (/7 # TokenError/9 e.Message#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TokenError], context[9] ) )
      continue;
    // closed e.Message#1 as range 5
    //DEBUG: e.Message#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # TError/9 AsIs: e.Message#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident(context[9], identifiers[ident_TError]);
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SecondPass/4 (/7 s.new#3/9 s.new#4/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    do {
      // </0 & SecondPass/4 (/7 # TStateStart/9 '<'/12 )/8 >/1
      if( ! refalrts::char_term( '<', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TStateStart], context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TStateStart/9 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket(context[12]);
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SecondPass/4 (/7 # TComma/9 ','/12 )/8 >/1
      if( ! refalrts::char_term( ',', context[12] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_TComma], context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TComma/9 HalfReuse: )/12 } Tile{ ]] }
      refalrts::reinit_close_bracket(context[12]);
      refalrts::link_brackets( context[7], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[12] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SecondPass/4 (/7 # TStateEnd/9 '>'/12 )/8 >/1
    if( ! refalrts::char_term( '>', context[12] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_TStateEnd], context[9] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TStateEnd/9 HalfReuse: )/12 } Tile{ ]] }
    refalrts::reinit_close_bracket(context[12]);
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SecondPass/4 (/7 # TkHexNumber/9 e.HexCode#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkHexNumber], context[9] ) )
      continue;
    // closed e.HexCode#1 as range 5
    //DEBUG: e.HexCode#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TChar/0 HalfReuse: </4 HalfReuse: & CharFromNum/7 HalfReuse: 16/9 AsIs: e.HexCode#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::reinit_ident(context[0], identifiers[ident_TChar]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_CharFromNum]);
    refalrts::reinit_number(context[9], 16UL);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[10], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SecondPass/4 (/7 # TkOctNumber/9 e.OctCode#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TkOctNumber], context[9] ) )
      continue;
    // closed e.OctCode#1 as range 5
    //DEBUG: e.OctCode#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # TChar/0 HalfReuse: </4 HalfReuse: & CharFromNum/7 HalfReuse: 8/9 AsIs: e.OctCode#1/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::reinit_ident(context[0], identifiers[ident_TChar]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_CharFromNum]);
    refalrts::reinit_number(context[9], 8UL);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[10], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SecondPass/4 (/7 # TSkip/9 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_TSkip], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TSkip/9 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SecondPass/4 (/7 # TErrorMessage/9 e.Message#1/10 '\"'/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_TErrorMessage], context[9] ) )
      continue;
    context[12] = refalrts::char_right( '\"', context[10], context[11] );
    if( ! context[12] )
      continue;
    // closed e.Message#1 as range 10
    //DEBUG: e.Message#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TErrorMessage/9 AsIs: e.Message#1/10 HalfReuse: )/12 } Tile{ ]] }
    refalrts::reinit_close_bracket(context[12]);
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SecondPass/4 (/7 # TEOF/9 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_TEOF], context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SecondPass/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # TEOF/9 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SecondPass("SecondPass", 3150413876U, 1105445155U, func_SecondPass);


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

static refalrts::NativeReference nat_ref_gen_CharFromNum_L1("CharFromNum\\1", 3150413876U, 1105445155U, func_gen_CharFromNum_L1);


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

static refalrts::NativeReference nat_ref_CharFromNum("CharFromNum", 3150413876U, 1105445155U, func_CharFromNum);


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

static refalrts::NativeReference nat_ref_gen_DigitFromChar_L1("DigitFromChar\\1", 3150413876U, 1105445155U, func_gen_DigitFromChar_L1);


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

static refalrts::NativeReference nat_ref_DigitFromChar("DigitFromChar", 3150413876U, 1105445155U, func_DigitFromChar);


static refalrts::FnResult func_Root(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Root/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Root/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Root/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 ' '/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ' ', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\t'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\t', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\r'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\r', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Accum#1/5 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } Tile{ HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TNewLine/12 Tile{ AsIs: e.Accum#1/5 } '\n'/13 )/14 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TNewLine]);
      refalrts::alloc_char(vm, context[13], '\n');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '/'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '/', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TStartRegexp/4 } Tile{ AsIs: e.Accum#1/5 } '/'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '/');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TStartRegexp]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '-'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '-', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadArrow/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadArrow]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '='/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '=', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TEquals/12 Tile{ AsIs: e.Accum#1/5 } '='/13 )/14 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TEquals]);
      refalrts::alloc_char(vm, context[13], '=');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '8'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '9'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Number]);
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'G'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'H'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'I'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'J'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'K'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'L'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'M'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'N'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'O'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'O', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'P'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'P', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'R'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'R', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'S'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'S', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'T'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'T', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'U'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'U', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'V'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'V', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'W'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'W', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 'Z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Name]);
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '<'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '<', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TStateStart/12 Tile{ AsIs: e.Accum#1/5 } '<'/13 )/14 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TStateStart]);
      refalrts::alloc_char(vm, context[13], '<');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 ','/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ',', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TComma/12 Tile{ AsIs: e.Accum#1/5 } ','/13 )/14 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TComma]);
      refalrts::alloc_char(vm, context[13], ',');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '>'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '>', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TStateEnd/12 Tile{ AsIs: e.Accum#1/5 } '>'/13 )/14 Tile{ AsIs: </0 AsIs: & Root/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TStateEnd]);
      refalrts::alloc_char(vm, context[13], '>');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Root/4 (/7 e.Accum#1/5 )/8 '\"'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\"', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorMessage/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ErrorMessage]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Root/4 (/7 e.Accum#1/5 )/8 s.Any#1/11 e.Text#1/9 >/1
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: s.Any#1: 11
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # TUnexpecteChar/13 Tile{ AsIs: e.Accum#1/5 } Tile{ AsIs: s.Any#1/11 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Root/4 AsIs: (/7 } )/14 Tile{ AsIs: e.Text#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TUnexpecteChar]);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Root/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5
  //DEBUG: e.Accum#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TEOF/7 AsIs: e.Accum#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_TEOF]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Root("Root", 3150413876U, 1105445155U, func_Root);


static refalrts::FnResult func_ReadRegexp(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ReadRegexp/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ReadRegexp/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ReadRegexp/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '/'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '/', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TEndRegexp/4 } Tile{ AsIs: e.Accum#1/5 } '/'/12 Tile{ HalfReuse: )/7 } </13 & Root/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '/');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_Root]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TEndRegexp]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '\n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TNewLine/4 } Tile{ AsIs: e.Accum#1/5 } '\n'/12 Tile{ HalfReuse: )/7 } </13 & Root/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '\n');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_Root]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TNewLine]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '\\'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\\', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexp]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '['/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '[', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TStartGroup/4 } Tile{ AsIs: e.Accum#1/5 } '['/12 Tile{ HalfReuse: )/7 } </13 & StartGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '[');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_StartGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TStartGroup]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '?'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '?', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TQuantifier/12 Tile{ AsIs: e.Accum#1/5 } '?'/13 )/14 Tile{ AsIs: </0 AsIs: & ReadRegexp/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TQuantifier]);
      refalrts::alloc_char(vm, context[13], '?');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '*'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '*', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TQuantifier/12 Tile{ AsIs: e.Accum#1/5 } '*'/13 )/14 Tile{ AsIs: </0 AsIs: & ReadRegexp/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TQuantifier]);
      refalrts::alloc_char(vm, context[13], '*');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '+'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '+', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TQuantifier/12 Tile{ AsIs: e.Accum#1/5 } '+'/13 )/14 Tile{ AsIs: </0 AsIs: & ReadRegexp/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TQuantifier]);
      refalrts::alloc_char(vm, context[13], '+');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '.'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '.', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TSpecChar/12 Tile{ AsIs: e.Accum#1/5 } '.'/13 )/14 Tile{ AsIs: </0 AsIs: & ReadRegexp/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TSpecChar]);
      refalrts::alloc_char(vm, context[13], '.');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '('/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '(', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TSpecChar/12 Tile{ AsIs: e.Accum#1/5 } '('/13 )/14 Tile{ AsIs: </0 AsIs: & ReadRegexp/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TSpecChar]);
      refalrts::alloc_char(vm, context[13], '(');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 ')'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ')', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TSpecChar/12 Tile{ AsIs: e.Accum#1/5 } ')'/13 )/14 Tile{ AsIs: </0 AsIs: & ReadRegexp/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TSpecChar]);
      refalrts::alloc_char(vm, context[13], ')');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '|'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '|', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TSpecChar/12 Tile{ AsIs: e.Accum#1/5 } '|'/13 )/14 Tile{ AsIs: </0 AsIs: & ReadRegexp/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TSpecChar]);
      refalrts::alloc_char(vm, context[13], '|');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '^'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '^', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TSpecChar/12 Tile{ AsIs: e.Accum#1/5 } '^'/13 )/14 Tile{ AsIs: </0 AsIs: & ReadRegexp/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TSpecChar]);
      refalrts::alloc_char(vm, context[13], '^');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '$'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '$', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TSpecChar/12 Tile{ AsIs: e.Accum#1/5 } '$'/13 )/14 Tile{ AsIs: </0 AsIs: & ReadRegexp/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TSpecChar]);
      refalrts::alloc_char(vm, context[13], '$');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 '{'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '{', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadInclude/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadInclude]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 s.Any#1/11 e.Text#1/9 >/1
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: s.Any#1: 11
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # TChar/13 Tile{ AsIs: e.Accum#1/5 } Tile{ AsIs: s.Any#1/11 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ReadRegexp/4 AsIs: (/7 } )/14 Tile{ AsIs: e.Text#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TChar]);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ReadRegexp/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5
  //DEBUG: e.Accum#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected EOF in Regex"/9 Tile{ HalfReuse: 'p'/8 HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "nexpected EOF in Regex", 22);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
  refalrts::reinit_char(context[7], 'U');
  refalrts::reinit_char(context[8], 'p');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReadRegexp("ReadRegexp", 3150413876U, 1105445155U, func_ReadRegexp);


static refalrts::FnResult func_ReadArrow(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ReadArrow/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ReadArrow/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ReadArrow/4 (/7 e.Accum#1/5 )/8 '>'/11 e.Text#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = refalrts::char_left( '>', context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TArrow/4 } Tile{ AsIs: e.Accum#1/5 } '>'/12 Tile{ HalfReuse: )/7 } </13 & Root/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[12], '>');
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Root]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TArrow]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ReadArrow/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TSkip/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TSkip]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Root]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReadArrow("ReadArrow", 3150413876U, 1105445155U, func_ReadArrow);


static refalrts::FnResult func_Number(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Number/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Number/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Number/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & Number/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Number/4 (/7 e.Accum#1/5 )/8 '8'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Number/4 (/7 e.Accum#1/5 )/8 '9'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '9', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Number/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], '9');
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Number/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkNumber/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkNumber]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Root]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Number("Number", 3150413876U, 1105445155U, func_Number);


static refalrts::FnResult func_Name(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Name/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Name/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Name/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '8'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 '9'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'a'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'b'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'c'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'd'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'e'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'f'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'f', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'f');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'g'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'g', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'g');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'h'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'h', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'h');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'i'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'i', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'i');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'j'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'j', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'j');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'k'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'k', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'k');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'l'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'l', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'l');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'm'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'm', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'm');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'n');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'o'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'o', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'o');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'p'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'p', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'p');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'q');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'r'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'r');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 's'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 's', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 's');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 't'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 't');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'u'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'u', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'u');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'v'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'v', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'v');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'w'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'w', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'w');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'x'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'x');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'y');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'z');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'G'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'H'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'I'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'J'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'K'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'L'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'M'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'N'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'O'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'O', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'P'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'P', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'R'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'R', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'S'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'S', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'T'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'T', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'U'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'U', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'V'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'V', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'W'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'W', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Name/4 (/7 e.Accum#1/5 )/8 'Z'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( 'Z', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Name/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], 'Z');
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Name/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TName/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & Root/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TName]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Root]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Name("Name", 3150413876U, 1105445155U, func_Name);


static refalrts::FnResult func_ErrorMessage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ErrorMessage/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ErrorMessage/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ErrorMessage/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & ErrorMessage/4 (/7 e.Accum#1/5 )/8 '\"'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\"', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TErrorMessage/4 } Tile{ AsIs: e.Accum#1/5 } '\"'/12 Tile{ HalfReuse: )/7 } </13 & Root/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '\"');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_Root]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TErrorMessage]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ErrorMessage/4 (/7 e.Accum#1/5 )/8 s.Any#1/11 e.Text#1/9 >/1
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: s.Any#1: 11
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Any#1/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ErrorMessage/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: s.Any1 #11/8 } )/12 Tile{ AsIs: e.Text#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::reinit_svar( context[8], context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ErrorMessage/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5
  //DEBUG: e.Accum#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nclosed error messag"/9 Tile{ HalfReuse: 'e'/8 HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "nclosed error messag", 20);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
  refalrts::reinit_char(context[7], 'U');
  refalrts::reinit_char(context[8], 'e');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ErrorMessage("ErrorMessage", 3150413876U, 1105445155U, func_ErrorMessage);


static refalrts::FnResult func_EscRegexp(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & EscRegexp/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscRegexp/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & EscRegexp/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '\\'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\\', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TGenericEscChar/4 } Tile{ AsIs: e.Accum#1/5 } '\\'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '\\');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TGenericEscChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 'n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TGenericEscChar/4 } Tile{ AsIs: e.Accum#1/5 } 'n'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], 'n');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TGenericEscChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 't'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TGenericEscChar/4 } Tile{ AsIs: e.Accum#1/5 } 't'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], 't');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TGenericEscChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 'r'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TGenericEscChar/4 } Tile{ AsIs: e.Accum#1/5 } 'r'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], 'r');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TGenericEscChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '/'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '/', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TChar/4 } Tile{ AsIs: e.Accum#1/5 } '/'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '/');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 'x'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-XCode/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_XCode]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-XCode/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_XCode]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCode]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCode]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCode]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCode]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCode]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCode]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCode]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCode]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '.'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '.', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TChar/4 } Tile{ AsIs: e.Accum#1/5 } '.'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '.');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '('/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '(', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TChar/4 } Tile{ AsIs: e.Accum#1/5 } '('/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '(');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 ')'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ')', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TChar/4 } Tile{ AsIs: e.Accum#1/5 } ')'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], ')');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '|'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '|', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TChar/4 } Tile{ AsIs: e.Accum#1/5 } '|'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '|');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '^'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '^', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TChar/4 } Tile{ AsIs: e.Accum#1/5 } '^'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '^');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 '$'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '$', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TChar/4 } Tile{ AsIs: e.Accum#1/5 } '$'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '$');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 s.Any#1/11 e.Text#1/9 >/1
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: s.Any#1: 11
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE} s.Any#1/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # TokenError/13"Bad escaped symbol"/14 Tile{ AsIs: )/8 } Tile{ AsIs: </0 Reuse: & ReadRegexp/4 AsIs: (/7 } )/16 Tile{ AsIs: e.Text#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TokenError]);
    refalrts::alloc_chars(vm, context[14], context[15], "Bad escaped symbol", 18);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_ReadRegexp]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscRegexp/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5
  //DEBUG: e.Accum#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected EOF in Regex"/9 Tile{ HalfReuse: 'p'/8 HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "nexpected EOF in Regex", 22);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
  refalrts::reinit_char(context[7], 'U');
  refalrts::reinit_char(context[8], 'p');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscRegexp("EscRegexp", 3150413876U, 1105445155U, func_EscRegexp);


static refalrts::FnResult func_StartGroup(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & StartGroup/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StartGroup/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & StartGroup/4 (/7 e.Accum#1/5 )/8 '^'/11 e.Text#1/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = refalrts::char_left( '^', context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TInvertGroup/4 } Tile{ AsIs: e.Accum#1/5 } '^'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[12], '^');
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TInvertGroup]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StartGroup/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadGroup/4 AsIs: (/7 AsIs: e.Accum#1/5 AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_ReadGroup]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StartGroup("StartGroup", 3150413876U, 1105445155U, func_StartGroup);


static refalrts::FnResult func_ReadInclude(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ReadInclude/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ReadInclude/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ReadInclude/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'G'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'H'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'I'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'J'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'K'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'L'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'M'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'N'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'O'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'O', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'P'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'P', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'Q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'R'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'R', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'S'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'S', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'T'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'T', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'U'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'U', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'V'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'V', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'W'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'W', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'Y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 'Z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_ReadBody]);
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 s.Any#1/11 e.Text#1/9 >/1
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: s.Any#1: 11
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE} s.Any#1/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # TokenError/13"Expected Name in Include"/14 Tile{ AsIs: )/8 } Tile{ AsIs: </0 Reuse: & ReadRegexp/4 AsIs: (/7 } )/16 Tile{ AsIs: e.Text#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TokenError]);
    refalrts::alloc_chars(vm, context[14], context[15], "Expected Name in Include", 24);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_ReadRegexp]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ReadInclude/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5
  //DEBUG: e.Accum#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected EOF in Includ"/9 Tile{ HalfReuse: 'e'/8 HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "nexpected EOF in Includ", 23);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
  refalrts::reinit_char(context[7], 'U');
  refalrts::reinit_char(context[8], 'e');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReadInclude("ReadInclude", 3150413876U, 1105445155U, func_ReadInclude);


static refalrts::FnResult func_EscRegexpm_XCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & EscRegexp-XCode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscRegexp-XCode/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & EscRegexp-XCode/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 '8'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 '9'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'a'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'b'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'c'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'd'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'e'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 'f'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( 'f', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscRegexp-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], 'f');
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscRegexp-XCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkHexNumber/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & ReadRegexp/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkHexNumber]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_ReadRegexp]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscRegexpm_XCode("EscRegexp-XCode", 3150413876U, 1105445155U, func_EscRegexpm_XCode);


static refalrts::FnResult func_EscRegexpm_OCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & EscRegexp-OCode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscRegexp-OCode/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & EscRegexp-OCode/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & EscRegexp-OCode/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCodem_C1]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCodem_C1]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCodem_C1]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCodem_C1]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCodem_C1]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCodem_C1]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCodem_C1]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EscRegexp-OCode/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '7', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscRegexp-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_EscRegexpm_OCodem_C1]);
    refalrts::reinit_char(context[8], '7');
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscRegexp-OCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkOctNumber/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & ReadRegexp/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkOctNumber]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_ReadRegexp]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscRegexpm_OCode("EscRegexp-OCode", 3150413876U, 1105445155U, func_EscRegexpm_OCode);


static refalrts::FnResult func_ReadGroup(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ReadGroup/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ReadGroup/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ReadGroup/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & ReadGroup/4 (/7 e.Accum#1/5 )/8 ']'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ']', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TEndGroup/4 } Tile{ AsIs: e.Accum#1/5 } ']'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], ']');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TEndGroup]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadGroup/4 (/7 e.Accum#1/5 )/8 '-'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '-', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } # TGroupRange/12 Tile{ AsIs: e.Accum#1/5 } '-'/13 )/14 Tile{ AsIs: </0 AsIs: & ReadGroup/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[12], identifiers[ident_TGroupRange]);
      refalrts::alloc_char(vm, context[13], '-');
      refalrts::alloc_close_bracket(vm, context[14]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadGroup/4 (/7 e.Accum#1/5 )/8 '\\'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\\', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroup]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ReadGroup/4 (/7 e.Accum#1/5 )/8 s.Any#1/11 e.Text#1/9 >/1
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: s.Any#1: 11
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # TChar/13 Tile{ AsIs: e.Accum#1/5 } Tile{ AsIs: s.Any#1/11 } Tile{ AsIs: )/8 } Tile{ AsIs: </0 AsIs: & ReadGroup/4 AsIs: (/7 } )/14 Tile{ AsIs: e.Text#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TChar]);
    refalrts::alloc_close_bracket(vm, context[14]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ReadGroup/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5
  //DEBUG: e.Accum#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected EOF in Regex"/9 Tile{ HalfReuse: 'p'/8 HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "nexpected EOF in Regex", 22);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
  refalrts::reinit_char(context[7], 'U');
  refalrts::reinit_char(context[8], 'p');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReadGroup("ReadGroup", 3150413876U, 1105445155U, func_ReadGroup);


static refalrts::FnResult func_ReadBody(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ReadBody/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ReadBody/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ReadBody/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 '8'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 '9'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'a'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'b'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'c'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'd'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'e'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'f'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'f', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'f');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'g'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'g', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'g'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'g');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'h'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'h', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'h'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'h');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'i'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'i', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'i'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'i');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'j'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'j', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'j'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'j');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'k'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'k', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'k'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'k');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'l'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'l', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'l'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'l');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'm'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'm', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'm'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'm');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'n'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'n');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'o'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'o', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'o'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'o');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'p'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'p', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'p'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'p');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'q');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'r'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'r'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'r');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 's'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 's', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 's'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 's');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 't'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 't'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 't');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'u'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'u', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'u'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'u');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'v'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'v', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'v'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'v');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'w'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'w', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'w'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'w');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'x'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'x'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'x');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'y');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'z');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'G'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'G', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'G'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'G');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'H'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'H', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'H'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'H');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'I'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'I', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'I'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'I');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'J'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'J', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'J'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'J');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'K'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'K', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'K'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'K');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'L'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'L', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'L'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'L');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'M'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'M', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'M'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'M');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'N'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'N', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'N'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'N');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'O'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'O', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'O'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'O');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'P'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'P', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'P'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'P');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'Q'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Q', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Q'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Q');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'R'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'R', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'R'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'R');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'S'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'S', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'S'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'S');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'T'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'T', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'T'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'T');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'U'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'U', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'U'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'U');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'V'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'V', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'V'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'V');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'W'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'W', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'W'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'W');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'X'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'X');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'Y'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Y', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Y'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Y');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 'Z'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'Z', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ReadBody/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'Z'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'Z');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 '}'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '}', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TInclude/4 } Tile{ AsIs: e.Accum#1/5 } '}'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[12], '}');
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TInclude]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ReadBody/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TokenError/10"Unclused include"/11 )/13 Tile{ AsIs: </0 Reuse: & ReadRegexp/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TokenError]);
  refalrts::alloc_chars(vm, context[11], context[12], "Unclused include", 16);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_ReadRegexp]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ReadBody("ReadBody", 3150413876U, 1105445155U, func_ReadBody);


static refalrts::FnResult func_EscRegexpm_OCodem_C1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & EscRegexp-OCode-C1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscRegexp-OCode-C1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & EscRegexp-OCode-C1/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & EscRegexp-OCode-C1/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '0'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '0');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode-C1/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '1'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '1');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode-C1/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '2'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '2');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode-C1/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '3'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '3');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode-C1/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '4'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '4');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode-C1/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '5'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '5');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscRegexp-OCode-C1/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '6'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '6');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EscRegexp-OCode-C1/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '7', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '7'/12 Tile{ HalfReuse: )/7 } </13 & ReadRegexp/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[12], '7');
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_ReadRegexp]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscRegexp-OCode-C1/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkOctNumber/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & ReadRegexp/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkOctNumber]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_ReadRegexp]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscRegexpm_OCodem_C1("EscRegexp-OCode-C1", 3150413876U, 1105445155U, func_EscRegexpm_OCodem_C1);


static refalrts::FnResult func_EscGroup(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & EscGroup/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscGroup/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & EscGroup/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 '\\'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '\\', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TGenericEscChar/4 } Tile{ AsIs: e.Accum#1/5 } '\\'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '\\');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TGenericEscChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 'n'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'n', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TGenericEscChar/4 } Tile{ AsIs: e.Accum#1/5 } 'n'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], 'n');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TGenericEscChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 't'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 't', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TGenericEscChar/4 } Tile{ AsIs: e.Accum#1/5 } 't'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], 't');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TGenericEscChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 'r'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'r', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TGenericEscChar/4 } Tile{ AsIs: e.Accum#1/5 } 'r'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], 'r');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TGenericEscChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 ']'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( ']', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TChar/4 } Tile{ AsIs: e.Accum#1/5 } ']'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], ']');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 '-'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '-', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TChar/4 } Tile{ AsIs: e.Accum#1/5 } '-'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '-');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TChar]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 'x'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'x', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-XCode/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_XCode]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 'X'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'X', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 e.Accum#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-XCode/4 } Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_XCode]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCode]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCode]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCode]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCode]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCode]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCode]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCode]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCode]);
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 s.Any#1/11 e.Text#1/9 >/1
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: s.Any#1: 11
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.Accum#1/5 {REMOVED TILE} s.Any#1/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # TokenError/13"Bad escaped symbol"/14 Tile{ AsIs: )/8 } Tile{ AsIs: </0 Reuse: & ReadGroup/4 AsIs: (/7 } )/16 Tile{ AsIs: e.Text#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_TokenError]);
    refalrts::alloc_chars(vm, context[14], context[15], "Bad escaped symbol", 18);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_ReadGroup]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[12], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscGroup/4 (/7 e.Accum#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Accum#1 as range 5
  //DEBUG: e.Accum#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Accum#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TokenError/4 HalfReuse: 'U'/7 }"nexpected EOF in Regex"/9 Tile{ HalfReuse: 'p'/8 HalfReuse: )/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "nexpected EOF in Regex", 22);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_TokenError]);
  refalrts::reinit_char(context[7], 'U');
  refalrts::reinit_char(context[8], 'p');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscGroup("EscGroup", 3150413876U, 1105445155U, func_EscGroup);


static refalrts::FnResult func_EscGroupm_XCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & EscGroup-XCode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscGroup-XCode/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & EscGroup-XCode/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '7', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '7');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 '8'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '8', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '8'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '8');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 '9'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '9', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '9'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], '9');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'A'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'A', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'A'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'A');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'B'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'B', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'B'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'B');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'C'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'C', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'C'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'C');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'D'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'D', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'D'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'D');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'E'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'E', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'E'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'E');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'F'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'F', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'F'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'F');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'a'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'a', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'a'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'a');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'b'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'b', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'b'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'b');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'c'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'c', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'c'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'c');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'd'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'd', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'd'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'e'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( 'e', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'e'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char(context[8], 'e');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 'f'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( 'f', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EscGroup-XCode/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: 'f'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::reinit_char(context[8], 'f');
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscGroup-XCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkHexNumber/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & ReadGroup/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkHexNumber]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_ReadGroup]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscGroupm_XCode("EscGroup-XCode", 3150413876U, 1105445155U, func_EscGroupm_XCode);


static refalrts::FnResult func_EscGroupm_OCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & EscGroup-OCode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscGroup-OCode/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & EscGroup-OCode/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & EscGroup-OCode/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '0'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCodem_C1]);
      refalrts::reinit_char(context[8], '0');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '1'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCodem_C1]);
      refalrts::reinit_char(context[8], '1');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '2'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCodem_C1]);
      refalrts::reinit_char(context[8], '2');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '3'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCodem_C1]);
      refalrts::reinit_char(context[8], '3');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '4'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCodem_C1]);
      refalrts::reinit_char(context[8], '4');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '5'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCodem_C1]);
      refalrts::reinit_char(context[8], '5');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '6'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_EscGroupm_OCodem_C1]);
      refalrts::reinit_char(context[8], '6');
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[11] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EscGroup-OCode/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '7', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EscGroup-OCode-C1/4 AsIs: (/7 AsIs: e.Accum#1/5 HalfReuse: '7'/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_EscGroupm_OCodem_C1]);
    refalrts::reinit_char(context[8], '7');
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscGroup-OCode/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkOctNumber/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & ReadGroup/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkOctNumber]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_ReadGroup]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscGroupm_OCode("EscGroup-OCode", 3150413876U, 1105445155U, func_EscGroupm_OCode);


static refalrts::FnResult func_EscGroupm_OCodem_C1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & EscGroup-OCode-C1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EscGroup-OCode-C1/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & EscGroup-OCode-C1/4 (/7 e.new#3/5 )/8 s.new#4/11 e.new#5/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.new#3 as range 5
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & EscGroup-OCode-C1/4 (/7 e.Accum#1/5 )/8 '0'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '0', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '0'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '0');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode-C1/4 (/7 e.Accum#1/5 )/8 '1'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '1', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '1'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '1');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode-C1/4 (/7 e.Accum#1/5 )/8 '2'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '2', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '2'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '2');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode-C1/4 (/7 e.Accum#1/5 )/8 '3'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '3', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '3'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '3');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode-C1/4 (/7 e.Accum#1/5 )/8 '4'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '4', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '4'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '4');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode-C1/4 (/7 e.Accum#1/5 )/8 '5'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '5', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '5'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '5');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EscGroup-OCode-C1/4 (/7 e.Accum#1/5 )/8 '6'/11 e.Text#1/9 >/1
      if( ! refalrts::char_term( '6', context[11] ) )
        continue;
      // closed e.Accum#1 as range 5
      // closed e.Text#1 as range 9
      //DEBUG: e.Accum#1: 5
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '6'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[12], '6');
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
      refalrts::reinit_close_bracket(context[7]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[11]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[13] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EscGroup-OCode-C1/4 (/7 e.Accum#1/5 )/8 '7'/11 e.Text#1/9 >/1
    if( ! refalrts::char_term( '7', context[11] ) )
      continue;
    // closed e.Accum#1 as range 5
    // closed e.Text#1 as range 9
    //DEBUG: e.Accum#1: 5
    //DEBUG: e.Text#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkOctNumber/4 } Tile{ AsIs: e.Accum#1/5 } '7'/12 Tile{ HalfReuse: )/7 } </13 & ReadGroup/14 Tile{ HalfReuse: (/8 HalfReuse: )/11 AsIs: e.Text#1/9 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[12], '7');
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_ReadGroup]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_TkOctNumber]);
    refalrts::reinit_close_bracket(context[7]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EscGroup-OCode-C1/4 (/7 e.Accum#1/5 )/8 e.Text#1/2 >/1
  // closed e.Accum#1 as range 5
  // closed e.Text#1 as range 2
  //DEBUG: e.Accum#1: 5
  //DEBUG: e.Text#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # TkOctNumber/10 Tile{ AsIs: e.Accum#1/5 } )/11 Tile{ AsIs: </0 Reuse: & ReadGroup/4 AsIs: (/7 } Tile{ AsIs: )/8 AsIs: e.Text#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_TkOctNumber]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_ReadGroup]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EscGroupm_OCodem_C1("EscGroup-OCode-C1", 3150413876U, 1105445155U, func_EscGroupm_OCodem_C1);


//End of file
