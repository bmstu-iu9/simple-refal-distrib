// This file automatically generated from 'DFA-Parser.ref'
// Don't edit! Edit 'DFA-Parser.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_529858301_2130041524

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
  efunc_DFAm_Parse = 17,
  efunc_ErrorAt = 18,
  efunc_ParseElements = 19,
  efunc_ParseSetDescr = 20,
  efunc_ParseSentence = 21,
  efunc_UnexpectedToken = 22,
  efunc_gen_ParseSetDescr_S1L1 = 23,
  efunc_ExtractSets = 24,
  efunc_Fetch = 25,
  efunc_gen_ParseSentence_S1L1 = 26,
  efunc_ExtractAlternatives = 27,
  efunc_gen_ExtractAlternatives_L1 = 28,
  efunc_gen_ExtractAlternatives_L2 = 29,
  efunc_ExtractAlternativesm_Head = 30,
  efunc_gen_ExtractAlternatives_L3 = 31,
  efunc_ExtractAlternativesm_Flush = 32,
  efunc_gen_ExtractAlternatives_L4 = 33,
  efunc_ExtractAlternativesm_NextState = 34,
  efunc_gen_ExtractAlternatives_L5 = 35,
  efunc_gen_ExtractAlternatives_L6 = 36,
  efunc_Pipe = 37,
  efunc_DFAm_TextFromToken = 38,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_TEOF = 6,
  ident_TSetName = 7,
  ident_TName = 8,
  ident_TDot = 9,
  ident_Set = 10,
  ident_TEquals = 11,
  ident_TLiteral = 12,
  ident_Chars = 13,
  ident_Sentence = 14,
  ident_None = 15,
  ident_Finitive = 16,
  ident_TAlternative = 17,
  ident_TFlush = 18,
  ident_Empty = 19,
  ident_TNamedFlush = 20,
  ident_TErrorFlush = 21,
  ident_Unnamed = 22,
  ident_Flush = 23,
  ident_FlushError = 24,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 529858301U, 2130041524U, func_Mu);


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
    if( ! refalrts::alloc_number( vm, context[9], 2130041524UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_u_u_FindMuPtr] );
    refalrts::reinit_number( context[5], 529858301UL );
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
  refalrts::reinit_number( context[5], 529858301UL );
  refalrts::reinit_number( context[7], 2130041524UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 529858301U, 2130041524U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 529858301U, 2130041524U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 529858301U, 2130041524U, func_Residue);


static refalrts::FnResult func_DFAm_Parse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DFA-Parse/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & DFA-Parse/4 (/9 # TEOF/11 t.SrcPos#1/12 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_TEOF], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/12 } 'I'/14 Tile{ HalfReuse: 'l'/9 HalfReuse: 'l'/11 }"egal empty descriptio"/15 Tile{ HalfReuse: 'n'/10 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( vm, context[14], 'I' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[15], context[16], "egal empty descriptio", 21 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_ErrorAt] );
    refalrts::reinit_char( context[9], 'l' );
    refalrts::reinit_char( context[11], 'l' );
    refalrts::reinit_char( context[10], 'n' );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DFA-Parse/4 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ParseElements/6 (/7 (/8"Any"/9 )/11 )/12 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[6], functions[efunc_ParseElements] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[9], context[10], "Any", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DFAm_Parse("DFA-Parse", 0U, 0U, func_DFAm_Parse);


static refalrts::FnResult func_ParseElements(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & ParseElements/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseElements/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 e.new#4/2 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & ParseElements/4 (/7 e.new#5/5 )/8 (/11 e.new#6/9 )/12 (/13 s.new#7/17 t.new#8/18 e.new#9/15 )/14 e.new#10/2 >/1
    context[15] = 0;
    context[16] = 0;
    if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
      continue;
    // closed e.new#5 as range 5
    // closed e.new#6 as range 9
    // closed e.new#10 as range 2
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.new#9 as range 15
    do {
      // </0 & ParseElements/4 (/7 e.new#11/5 )/8 (/11 e.new#12/9 )/12 (/13 # TSetName/17 t.new#13/18 e.new#14/15 )/14 e.new#15/2 >/1
      if( ! refalrts::ident_term( identifiers[ident_TSetName], context[17] ) )
        continue;
      // closed e.new#11 as range 5
      // closed e.new#12 as range 9
      // closed e.new#14 as range 15
      // closed e.new#15 as range 2
      do {
        // </0 & ParseElements/4 (/7 e.SetNames-B#1/22 (/28 e.Name#1/30 )/29 e.SetNames-E#1/24 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TSetName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
        context[20] = context[5];
        context[21] = context[6];
        // closed e.RuleNames#1 as range 9
        // closed e.Name#1 as range 15
        // closed e.Tail#1 as range 2
        context[22] = 0;
        context[23] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[24] = context[20];
          context[25] = context[21];
          context[26] = 0;
          context[27] = 0;
          context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
          if( ! context[28] )
            continue;
          refalrts::bracket_pointers(context[28], context[29]);
          if( ! refalrts::repeated_evar_left( vm, context[30], context[31], context[15], context[16], context[26], context[27] ) )
            continue;
          if( ! refalrts::empty_seq( context[26], context[27] ) )
            continue;
          // closed e.SetNames-E#1 as range 24
          //DEBUG: t.SrcPos#1: 18
          //DEBUG: e.RuleNames#1: 9
          //DEBUG: e.Name#1: 15
          //DEBUG: e.Tail#1: 2
          //DEBUG: e.SetNames-B#1: 22
          //DEBUG: e.SetNames-E#1: 24

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames-B#1/22 {REMOVED TILE} e.SetNames-E#1/24 {REMOVED TILE} e.RuleNames#1/9 {REMOVED TILE} {REMOVED TILE} e.Name#1/15 {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ HalfReuse: 'S'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/13 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'a'/7 } Tile{ HalfReuse: 'm'/14 }"e "/32 Tile{ HalfReuse: ':'/28 AsIs: e.Name#1/30 HalfReuse: ':'/29 }" redeclared"/34 Tile{ AsIs: >/1 ]] }
          if( ! refalrts::alloc_chars( vm, context[32], context[33], "e ", 2 ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_chars( vm, context[34], context[35], " redeclared", 11 ) )
            return refalrts::cNoMemory;
          refalrts::update_name( context[4], functions[efunc_ErrorAt] );
          refalrts::reinit_char( context[8], 'S' );
          refalrts::reinit_char( context[11], 'e' );
          refalrts::reinit_char( context[12], 't' );
          refalrts::reinit_char( context[13], ' ' );
          refalrts::reinit_char( context[17], 'n' );
          refalrts::reinit_char( context[7], 'a' );
          refalrts::reinit_char( context[14], 'm' );
          refalrts::reinit_char( context[28], ':' );
          refalrts::reinit_char( context[29], ':' );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[34], context[35] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[14], context[14] );
          res = refalrts::splice_evar( res, context[7], context[7] );
          res = refalrts::splice_evar( res, context[12], context[17] );
          res = refalrts::splice_evar( res, context[8], context[11] );
          res = refalrts::splice_evar( res, context[18], context[19] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[22], context[23], context[20], context[21] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TSetName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
      // closed e.SetNames#1 as range 5
      // closed e.RuleNames#1 as range 9
      // closed e.Name#1 as range 15
      // closed e.Tail#1 as range 2
      //DEBUG: t.SrcPos#1: 18
      //DEBUG: e.SetNames#1: 5
      //DEBUG: e.RuleNames#1: 9
      //DEBUG: e.Name#1: 15
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr/4 AsIs: (/7 AsIs: e.SetNames#1/5 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/15 } Tile{ HalfReuse: )/17 } )/20 Tile{ AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ AsIs: (/13 } e.Name#1/15/21 Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[20] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(vm, context[21], context[22], context[15], context[16]))
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], functions[efunc_ParseSetDescr] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[17] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[20] );
      refalrts::link_brackets( context[8], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseElements/4 (/7 e.new#11/5 )/8 (/11 e.new#12/9 )/12 (/13 # TName/17 t.new#13/18 e.new#14/15 )/14 e.new#15/2 >/1
      if( ! refalrts::ident_term( identifiers[ident_TName], context[17] ) )
        continue;
      // closed e.new#11 as range 5
      // closed e.new#12 as range 9
      // closed e.new#14 as range 15
      // closed e.new#15 as range 2
      do {
        // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames-B#1/22 (/28 e.Name#1/30 )/29 e.RuleNames-E#1/24 )/12 (/13 # TName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
        context[20] = context[9];
        context[21] = context[10];
        // closed e.SetNames#1 as range 5
        // closed e.Name#1 as range 15
        // closed e.Tail#1 as range 2
        context[22] = 0;
        context[23] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[24] = context[20];
          context[25] = context[21];
          context[26] = 0;
          context[27] = 0;
          context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
          if( ! context[28] )
            continue;
          refalrts::bracket_pointers(context[28], context[29]);
          if( ! refalrts::repeated_evar_left( vm, context[30], context[31], context[15], context[16], context[26], context[27] ) )
            continue;
          if( ! refalrts::empty_seq( context[26], context[27] ) )
            continue;
          // closed e.RuleNames-E#1 as range 24
          //DEBUG: t.SrcPos#1: 18
          //DEBUG: e.SetNames#1: 5
          //DEBUG: e.Name#1: 15
          //DEBUG: e.Tail#1: 2
          //DEBUG: e.RuleNames-B#1: 22
          //DEBUG: e.RuleNames-E#1: 24

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/5 {REMOVED TILE} e.RuleNames-B#1/22 {REMOVED TILE} e.RuleNames-E#1/24 {REMOVED TILE} {REMOVED TILE} e.Name#1/15 {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ HalfReuse: 'N'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'm'/7 } 'e'/32 Tile{ HalfReuse: ' '/28 AsIs: e.Name#1/30 HalfReuse: ' '/29 } Tile{ HalfReuse: 'r'/12 HalfReuse: 'e'/13 HalfReuse: 'd'/17 } Tile{ HalfReuse: 'e'/14 }"clared"/33 Tile{ AsIs: >/1 ]] }
          if( ! refalrts::alloc_char( vm, context[32], 'e' ) )
            return refalrts::cNoMemory;
          if( ! refalrts::alloc_chars( vm, context[33], context[34], "clared", 6 ) )
            return refalrts::cNoMemory;
          refalrts::update_name( context[4], functions[efunc_ErrorAt] );
          refalrts::reinit_char( context[8], 'N' );
          refalrts::reinit_char( context[11], 'a' );
          refalrts::reinit_char( context[7], 'm' );
          refalrts::reinit_char( context[28], ' ' );
          refalrts::reinit_char( context[29], ' ' );
          refalrts::reinit_char( context[12], 'r' );
          refalrts::reinit_char( context[13], 'e' );
          refalrts::reinit_char( context[17], 'd' );
          refalrts::reinit_char( context[14], 'e' );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[33], context[34] );
          res = refalrts::splice_evar( res, context[14], context[14] );
          res = refalrts::splice_evar( res, context[12], context[17] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[32], context[32] );
          res = refalrts::splice_evar( res, context[7], context[7] );
          res = refalrts::splice_evar( res, context[8], context[11] );
          res = refalrts::splice_evar( res, context[18], context[19] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[22], context[23], context[20], context[21] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TName/17 t.SrcPos#1/18 e.Name#1/15 )/14 e.Tail#1/2 >/1
      // closed e.SetNames#1 as range 5
      // closed e.RuleNames#1 as range 9
      // closed e.Name#1 as range 15
      // closed e.Tail#1 as range 2
      //DEBUG: t.SrcPos#1: 18
      //DEBUG: e.SetNames#1: 5
      //DEBUG: e.RuleNames#1: 9
      //DEBUG: e.Name#1: 15
      //DEBUG: e.Tail#1: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence/4 AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 HalfReuse: (/12 } e.Name#1/15/20 Tile{ HalfReuse: )/13 HalfReuse: )/17 AsIs: t.SrcPos#1/18 } (/22 Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
      if (! refalrts::copy_evar(vm, context[20], context[21], context[15], context[16]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[22] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], functions[efunc_ParseSentence] );
      refalrts::reinit_open_bracket( context[12] );
      refalrts::reinit_close_bracket( context[13] );
      refalrts::reinit_close_bracket( context[17] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[22], context[14] );
      refalrts::link_brackets( context[11], context[17] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[13], context[19] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_TEOF], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Tail#1 as range 2
    //DEBUG: t.SrcPos#1: 18
    //DEBUG: e.SetNames#1: 5
    //DEBUG: e.RuleNames#1: 9
    //DEBUG: e.Tail#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 (/13 # TEOF/17 t.SrcPos#1/18 )/14 e.Tail#1/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Tail#1 as range 2
  //DEBUG: t.Unexpected#1: 13
  //DEBUG: e.SetNames#1: 5
  //DEBUG: e.RuleNames#1: 9
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/7 } Tile{ HalfReuse: 'a'/8 HalfReuse: 'm'/11 } Tile{ HalfReuse: 'e'/12 }" or set name"/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( vm, context[15], context[16], " or set name", 12 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_UnexpectedToken] );
  refalrts::reinit_char( context[7], 'n' );
  refalrts::reinit_char( context[8], 'a' );
  refalrts::reinit_char( context[11], 'm' );
  refalrts::reinit_char( context[12], 'e' );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseElements("ParseElements", 529858301U, 2130041524U, func_ParseElements);


static refalrts::FnResult func_gen_ParseSetDescr_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & ParseSetDescr$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSetDescr$1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 (/13 e.new#3/11 )/14 (/17 e.new#4/15 )/18 (/21 e.new#5/19 )/22 t.new#6/23 e.new#7/2 >/1
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
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
  // closed e.new#3 as range 11
  // closed e.new#4 as range 15
  // closed e.new#5 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 2
  do {
    // </0 & ParseSetDescr$1\1/4 (/7 e.new#8/5 )/8 t.new#9/9 (/13 e.new#10/11 )/14 (/17 e.new#11/15 )/18 (/21 e.new#12/19 )/22 (/23 # TDot/27 t.new#13/28 )/24 e.new#14/2 >/1
    context[25] = 0;
    context[26] = 0;
    if( ! refalrts::brackets_term( context[25], context[26], context[23] ) )
      continue;
    context[27] = refalrts::ident_left( identifiers[ident_TDot], context[25], context[26] );
    if( ! context[27] )
      continue;
    // closed e.new#8 as range 5
    // closed e.new#10 as range 11
    // closed e.new#11 as range 15
    // closed e.new#12 as range 19
    // closed e.new#14 as range 2
    context[29] = refalrts::tvar_left( context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    do {
      // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Name#1 as range 5
      // closed e.SetNames#1 as range 11
      // closed e.RuleNames#1 as range 15
      // closed e.Tail#2 as range 2
      //DEBUG: t.SetNamePos#1: 9
      //DEBUG: t.SrcPos#2: 28
      //DEBUG: e.Name#1: 5
      //DEBUG: e.SetNames#1: 11
      //DEBUG: e.RuleNames#1: 15
      //DEBUG: e.Tail#2: 2

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#2/28 HalfReuse: 'S'/24 } Tile{ HalfReuse: 'e'/13 } Tile{ HalfReuse: 't'/14 HalfReuse: ' '/17 } Tile{ HalfReuse: ':'/8 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: ':'/18 HalfReuse: ' '/21 HalfReuse: 'n'/22 HalfReuse: 'o'/23 HalfReuse: 't'/27 } Tile{ HalfReuse: ' '/7 }"have content"/30 Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_chars( vm, context[30], context[31], "have content", 12 ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], functions[efunc_ErrorAt] );
      refalrts::reinit_char( context[24], 'S' );
      refalrts::reinit_char( context[13], 'e' );
      refalrts::reinit_char( context[14], 't' );
      refalrts::reinit_char( context[17], ' ' );
      refalrts::reinit_char( context[8], ':' );
      refalrts::reinit_char( context[18], ':' );
      refalrts::reinit_char( context[21], ' ' );
      refalrts::reinit_char( context[22], 'n' );
      refalrts::reinit_char( context[23], 'o' );
      refalrts::reinit_char( context[27], 't' );
      refalrts::reinit_char( context[7], ' ' );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[27] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[14], context[17] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[28], context[24] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
    // closed e.Name#1 as range 5
    // closed e.SetNames#1 as range 11
    // closed e.RuleNames#1 as range 15
    // closed e.Body#2 as range 19
    // closed e.Tail#2 as range 2
    //DEBUG: t.SetNamePos#1: 9
    //DEBUG: t.SrcPos#2: 28
    //DEBUG: e.Name#1: 5
    //DEBUG: e.SetNames#1: 11
    //DEBUG: e.RuleNames#1: 15
    //DEBUG: e.Body#2: 19
    //DEBUG: e.Tail#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/28 )/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Set/4 } Tile{ AsIs: t.SetNamePos#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/19 AsIs: )/22 HalfReuse: </23 HalfReuse: & ParseElements/27 } Tile{ AsIs: (/13 AsIs: e.SetNames#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], identifiers[ident_Set] );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_name( context[27], functions[efunc_ParseElements] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[0], context[22] );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[13], context[18] );
    res = refalrts::splice_evar( res, context[21], context[27] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 t.Unexpected#2/23 e.Tail#2/2 >/1
  // closed e.Name#1 as range 5
  // closed e.SetNames#1 as range 11
  // closed e.RuleNames#1 as range 15
  // closed e.Body#2 as range 19
  // closed e.Tail#2 as range 2
  //DEBUG: t.SetNamePos#1: 9
  //DEBUG: t.Unexpected#2: 23
  //DEBUG: e.Name#1: 5
  //DEBUG: e.SetNames#1: 11
  //DEBUG: e.RuleNames#1: 15
  //DEBUG: e.Body#2: 19
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name#1/5 {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'd'/14 HalfReuse: 'o'/17 } Tile{ HalfReuse: 't'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'a'/22 } Tile{ HalfReuse: 't'/13 } Tile{ HalfReuse: ' '/8 } Tile{ HalfReuse: 'e'/7 }"nd of set"/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( vm, context[25], context[26], "nd of set", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_UnexpectedToken] );
  refalrts::reinit_char( context[14], 'd' );
  refalrts::reinit_char( context[17], 'o' );
  refalrts::reinit_char( context[18], 't' );
  refalrts::reinit_char( context[21], ' ' );
  refalrts::reinit_char( context[22], 'a' );
  refalrts::reinit_char( context[13], 't' );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_char( context[7], 'e' );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSetDescr_S1L1("ParseSetDescr$1\\1", 529858301U, 2130041524U, func_gen_ParseSetDescr_S1L1);


static refalrts::FnResult func_ParseSetDescr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & ParseSetDescr/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSetDescr/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 (/17 e.new#4/15 )/18 t.new#5/19 e.new#6/2 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#4 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & ParseSetDescr/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 )/18 (/19 # TEquals/23 t.SrcPos#1/24 )/20 e.Tail#1/2 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[19] ) )
      continue;
    context[23] = refalrts::ident_left( identifiers[ident_TEquals], context[21], context[22] );
    if( ! context[23] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Name#1 as range 15
    // closed e.Tail#1 as range 2
    context[25] = refalrts::tvar_left( context[24], context[21], context[22] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: t.SetNamePos#1: 13
    //DEBUG: e.SetNames#1: 5
    //DEBUG: e.RuleNames#1: 9
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Tail#1: 2
    //DEBUG: t.SrcPos#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </26 & ExtractSets/27 Tile{ AsIs: (/19 } Tile{ AsIs: )/20 AsIs: e.Tail#1/2 AsIs: >/1 } [*]/28 Tile{ HalfReuse: & ParseSetDescr$1\1/23 } Tile{ AsIs: (/17 AsIs: e.Name#1/15 AsIs: )/18 } Tile{ AsIs: t.SetNamePos#1/13 } Tile{ AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } {*}/29 >/30 Tile{ ]] }
    if( ! refalrts::alloc_open_call( vm, context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[27], functions[efunc_ExtractSets] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_closure_head( vm, context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( vm, context[29], context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[30] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_Fetch] );
    refalrts::reinit_name( context[23], functions[efunc_gen_ParseSetDescr_S1L1] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[26] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    refalrts::wrap_closure( context[29] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSetDescr/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 )/18 t.Unexpected#1/19 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Name#1 as range 15
  // closed e.Tail#1 as range 2
  //DEBUG: t.SetNamePos#1: 13
  //DEBUG: t.Unexpected#1: 19
  //DEBUG: e.SetNames#1: 5
  //DEBUG: e.RuleNames#1: 9
  //DEBUG: e.Name#1: 15
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], functions[efunc_UnexpectedToken] );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::reinit_char( context[11], '=' );
  refalrts::reinit_char( context[18], '\"' );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSetDescr("ParseSetDescr", 529858301U, 2130041524U, func_ParseSetDescr);


static refalrts::FnResult func_ExtractSets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ExtractSets/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractSets/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ExtractSets/4 (/7 e.new#3/5 )/8 (/13 s.new#4/15 t.new#5/16 e.new#6/11 )/14 e.new#7/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.new#3 as range 5
    // closed e.new#7 as range 9
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    // closed e.new#6 as range 11
    do {
      // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/13 # TLiteral/15 t.SrcPos#1/16 e.Content#1/11 )/14 e.Tail#1/9 >/1
      if( ! refalrts::ident_term( identifiers[ident_TLiteral], context[15] ) )
        continue;
      // closed e.Found#1 as range 5
      // closed e.Content#1 as range 11
      // closed e.Tail#1 as range 9
      //DEBUG: t.SrcPos#1: 16
      //DEBUG: e.Found#1: 5
      //DEBUG: e.Content#1: 11
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Chars/13 } Tile{ AsIs: e.Content#1/11 } Tile{ HalfReuse: )/15 } Tile{ AsIs: )/14 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[13], identifiers[ident_Chars] );
      refalrts::reinit_close_bracket( context[15] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[14] );
      refalrts::link_brackets( context[8], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[13], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 (/13 # TSetName/15 t.SrcPos#1/16 e.Name#1/11 )/14 e.Tail#1/9 >/1
    if( ! refalrts::ident_term( identifiers[ident_TSetName], context[15] ) )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Name#1 as range 11
    // closed e.Tail#1 as range 9
    //DEBUG: t.SrcPos#1: 16
    //DEBUG: e.Found#1: 5
    //DEBUG: e.Name#1: 11
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 HalfReuse: # Set/13 } Tile{ AsIs: t.SrcPos#1/16 } Tile{ AsIs: e.Name#1/11 } Tile{ HalfReuse: )/15 } Tile{ AsIs: )/14 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[13], identifiers[ident_Set] );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::link_brackets( context[8], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 e.OtherTail#1/2 >/1
  // closed e.Found#1 as range 5
  // closed e.OtherTail#1 as range 2
  //DEBUG: e.Found#1: 5
  //DEBUG: e.OtherTail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractSets/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ AsIs: e.OtherTail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractSets("ExtractSets", 529858301U, 2130041524U, func_ExtractSets);


static refalrts::FnResult func_gen_ParseSentence_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & ParseSentence$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentence$1\1/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 (/17 e.new#4/15 )/18 (/21 e.new#5/19 )/22 t.new#6/23 e.new#7/2 >/1
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
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  // closed e.new#4 as range 15
  // closed e.new#5 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 2
  do {
    // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 (/23 # TDot/27 t.SrcPos#2/28 )/24 e.Tail#2/2 >/1
    context[25] = 0;
    context[26] = 0;
    if( ! refalrts::brackets_term( context[25], context[26], context[23] ) )
      continue;
    context[27] = refalrts::ident_left( identifiers[ident_TDot], context[25], context[26] );
    if( ! context[27] )
      continue;
    // closed e.Name#1 as range 7
    // closed e.SetNames#1 as range 11
    // closed e.RuleNames#1 as range 15
    // closed e.Body#2 as range 19
    // closed e.Tail#2 as range 2
    context[29] = refalrts::tvar_left( context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    //DEBUG: t.SentNamePos#1: 5
    //DEBUG: e.Name#1: 7
    //DEBUG: e.SetNames#1: 11
    //DEBUG: e.RuleNames#1: 15
    //DEBUG: e.Body#2: 19
    //DEBUG: e.Tail#2: 2
    //DEBUG: t.SrcPos#2: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TDot/27 t.SrcPos#2/28 )/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Sentence/4 AsIs: t.SentNamePos#1/5 AsIs: (/9 } Tile{ AsIs: e.Name#1/7 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/19 AsIs: )/22 HalfReuse: </23 } Tile{ HalfReuse: & ParseElements/10 AsIs: (/13 AsIs: e.SetNames#1/11 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/15 AsIs: )/18 } Tile{ AsIs: e.Tail#2/2 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], identifiers[ident_Sentence] );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_name( context[10], functions[efunc_ParseElements] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[0], context[22] );
    refalrts::link_brackets( context[9], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[10], context[18] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 t.Unexpected#2/23 e.Tail#2/2 >/1
  // closed e.Name#1 as range 7
  // closed e.SetNames#1 as range 11
  // closed e.RuleNames#1 as range 15
  // closed e.Body#2 as range 19
  // closed e.Tail#2 as range 2
  //DEBUG: t.SentNamePos#1: 5
  //DEBUG: t.Unexpected#2: 23
  //DEBUG: e.Name#1: 7
  //DEBUG: e.SetNames#1: 11
  //DEBUG: e.RuleNames#1: 15
  //DEBUG: e.Body#2: 19
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.SentNamePos#1/5 {REMOVED TILE} e.Name#1/7 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'e'/14 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'd'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'o'/10 HalfReuse: 'f'/13 } Tile{ HalfReuse: ' '/22 } Tile{ HalfReuse: 's'/9 }"entence"/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( vm, context[25], context[26], "entence", 7 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_UnexpectedToken] );
  refalrts::reinit_char( context[14], 'e' );
  refalrts::reinit_char( context[17], 'n' );
  refalrts::reinit_char( context[18], 'd' );
  refalrts::reinit_char( context[21], ' ' );
  refalrts::reinit_char( context[10], 'o' );
  refalrts::reinit_char( context[13], 'f' );
  refalrts::reinit_char( context[22], ' ' );
  refalrts::reinit_char( context[9], 's' );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_S1L1("ParseSentence$1\\1", 529858301U, 2130041524U, func_gen_ParseSentence_S1L1);


static refalrts::FnResult func_ParseSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & ParseSentence/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentence/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 (/17 e.new#4/15 )/18 t.new#5/19 e.new#6/2 >/1
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
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#4 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & ParseSentence/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 )/18 (/19 # TEquals/23 t.SrcPos#1/24 )/20 e.Tail#1/2 >/1
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[19] ) )
      continue;
    context[23] = refalrts::ident_left( identifiers[ident_TEquals], context[21], context[22] );
    if( ! context[23] )
      continue;
    // closed e.SetNames#1 as range 5
    // closed e.RuleNames#1 as range 9
    // closed e.Name#1 as range 15
    // closed e.Tail#1 as range 2
    context[25] = refalrts::tvar_left( context[24], context[21], context[22] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: e.SetNames#1: 5
    //DEBUG: e.RuleNames#1: 9
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Tail#1: 2
    //DEBUG: t.SrcPos#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } & Fetch/26 </27 Tile{ HalfReuse: & ExtractAlternatives/18 AsIs: (/19 } Tile{ AsIs: )/20 AsIs: e.Tail#1/2 AsIs: >/1 } [*]/28 Tile{ HalfReuse: & ParseSentence$1\1/23 } Tile{ AsIs: t.SentNamePos#1/13 AsIs: (/17 } Tile{ AsIs: e.Name#1/15 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.SetNames#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/9 AsIs: )/12 } {*}/29 >/30 Tile{ ]] }
    if( ! refalrts::alloc_name( vm, context[26], functions[efunc_Fetch] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_closure_head( vm, context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( vm, context[29], context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[30] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[18], functions[efunc_ExtractAlternatives] );
    refalrts::reinit_name( context[23], functions[efunc_gen_ParseSentence_S1L1] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[4] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[4], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    refalrts::wrap_closure( context[29] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentence/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 )/18 t.Unexpected#1/19 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Name#1 as range 15
  // closed e.Tail#1 as range 2
  //DEBUG: t.SentNamePos#1: 13
  //DEBUG: t.Unexpected#1: 19
  //DEBUG: e.SetNames#1: 5
  //DEBUG: e.RuleNames#1: 9
  //DEBUG: e.Name#1: 15
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], functions[efunc_UnexpectedToken] );
  refalrts::reinit_char( context[8], '\"' );
  refalrts::reinit_char( context[11], '=' );
  refalrts::reinit_char( context[18], '\"' );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSentence("ParseSentence", 529858301U, 2130041524U, func_ParseSentence);


static refalrts::FnResult func_gen_ExtractAlternatives_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ExtractAlternatives\1/4 (/7 s.TokType#2/9 t.SrcPos#2/10 e.Info#2/5 )/8 e.Tail#2/2 >/1
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
  // closed e.Tail#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5
  //DEBUG: e.Tail#2: 2
  //DEBUG: s.TokType#2: 9
  //DEBUG: t.SrcPos#2: 10
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\1/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } t.SrcPos#2/10/12 Tile{ AsIs: (/7 AsIs: s.TokType#2/9 AsIs: t.SrcPos#2/10 AsIs: e.Info#2/5 AsIs: )/8 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  if (! refalrts::copy_evar(vm, context[12], context[13], context[10], context[11]))
    return refalrts::cNoMemory;
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L1("ExtractAlternatives\\1", 529858301U, 2130041524U, func_gen_ExtractAlternatives_L1);


static refalrts::FnResult func_gen_ExtractAlternatives_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 t.NextToken#2/7 e.Tail#2/2 >/1
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
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.NextToken#2: 7
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-Head/4 } Tile{ AsIs: t.NextToken#2/7 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], functions[efunc_ExtractAlternativesm_Head] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L2("ExtractAlternatives\\2", 529858301U, 2130041524U, func_gen_ExtractAlternatives_L2);


static refalrts::FnResult func_gen_ExtractAlternatives_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 t.NextToken#2/9 e.Tail#2/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.NextToken#2: 9
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 } Tile{ AsIs: t.NextToken#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], functions[efunc_ExtractAlternativesm_Flush] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L3("ExtractAlternatives\\3", 529858301U, 2130041524U, func_gen_ExtractAlternatives_L3);


static refalrts::FnResult func_gen_ExtractAlternatives_L4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractAlternatives\4/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextToken#2/11 e.Tail#2/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.Flush#2: 9
  //DEBUG: t.NextToken#2: 11
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 } Tile{ AsIs: t.NextToken#2/11 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name( context[4], functions[efunc_ExtractAlternativesm_NextState] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L4("ExtractAlternatives\\4", 529858301U, 2130041524U, func_gen_ExtractAlternatives_L4);


static refalrts::FnResult func_gen_ExtractAlternatives_L5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ExtractAlternatives\5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives\5/4 t.new#1/5 t.new#2/7 t.new#3/9 t.new#4/11 e.new#5/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 # None/9 # Finitive/11 e.Tail#2/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_None], context[9] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[11] ) )
      continue;
    // closed e.Tail#2 as range 2
    //DEBUG: t.BeginSrcPos#2: 5
    //DEBUG: t.Head#2: 7
    //DEBUG: e.Tail#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Head#2/7 {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: t.BeginSrcPos#2/5 } 'E'/13 Tile{ HalfReuse: 'O'/9 HalfReuse: 'F'/11 }" alternative must have flush"/14 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( vm, context[13], 'E' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( vm, context[14], context[15], " alternative must have flush", 28 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_ErrorAt] );
    refalrts::reinit_char( context[9], 'O' );
    refalrts::reinit_char( context[11], 'F' );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextState#2/11 e.Tail#2/2 >/1
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.Flush#2: 9
  //DEBUG: t.NextState#2: 11
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Head#2/7 AsIs: t.Flush#2/9 AsIs: t.NextState#2/11 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L5("ExtractAlternatives\\5", 529858301U, 2130041524U, func_gen_ExtractAlternatives_L5);


static refalrts::FnResult func_gen_ExtractAlternatives_L6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & ExtractAlternatives\6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives\6/4 (/7 e.new#1/5 )/8 t.new#2/9 t.new#3/11 t.new#4/13 e.new#5/2 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/5 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 (/19 # TAlternative/21 t.SrcPos#2/22 )/20 e.Tail#2/15 >/1
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left( identifiers[ident_TAlternative], context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.Found#1 as range 5
    // closed e.Tail#2 as range 15
    context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: t.Head#2: 9
    //DEBUG: t.Flush#2: 11
    //DEBUG: t.NextState#2: 13
    //DEBUG: e.Found#1: 5
    //DEBUG: e.Tail#2: 15
    //DEBUG: t.SrcPos#2: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.SrcPos#2/22 )/20 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives/4 AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 HalfReuse: )/19 HalfReuse: )/21 } Tile{ AsIs: e.Tail#2/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], functions[efunc_ExtractAlternatives] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_close_bracket( context[19] );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::link_brackets( context[8], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[21], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/5 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 e.Tail#2/2 >/1
  // closed e.Found#1 as range 5
  // closed e.Tail#2 as range 2
  //DEBUG: t.Head#2: 9
  //DEBUG: t.Flush#2: 11
  //DEBUG: t.NextState#2: 13
  //DEBUG: e.Found#1: 5
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::link_brackets( context[8], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L6("ExtractAlternatives\\6", 529858301U, 2130041524U, func_gen_ExtractAlternatives_L6);


static refalrts::FnResult func_ExtractAlternatives(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 e.Tail#1/2 >/1
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
  // closed e.Found#1 as range 5
  // closed e.Tail#1 as range 2
  //DEBUG: e.Found#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: e.Tail#1/2 } </11 & Pipe/12 & ExtractAlternatives\1/13 & ExtractAlternatives\2/14 & ExtractAlternatives\3/15 & ExtractAlternatives\4/16 & ExtractAlternatives\5/17 Tile{ HalfReuse: [*]/0 Reuse: & ExtractAlternatives\6/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } {*}/18 >/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[10], functions[efunc_Fetch] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[12], functions[efunc_Pipe] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[13], functions[efunc_gen_ExtractAlternatives_L1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_gen_ExtractAlternatives_L2] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], functions[efunc_gen_ExtractAlternatives_L3] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[16], functions[efunc_gen_ExtractAlternatives_L4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[17], functions[efunc_gen_ExtractAlternatives_L5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[18], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_ExtractAlternatives_L6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternatives("ExtractAlternatives", 529858301U, 2130041524U, func_ExtractAlternatives);


static refalrts::FnResult func_ExtractAlternativesm_Head(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & ExtractAlternatives-Head/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives-Head/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ExtractAlternatives-Head/4 (/5 s.new#3/9 t.new#4/10 e.new#5/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TLiteral/9 t.SrcPos#1/10 e.Content#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TLiteral], context[9] ) )
        continue;
      // closed e.Content#1 as range 7
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Content#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Chars/9 } Tile{ AsIs: e.Content#1/7 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident( context[9], identifiers[ident_Chars] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TSetName/9 t.SrcPos#1/10 e.Content#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TSetName], context[9] ) )
        continue;
      // closed e.Content#1 as range 7
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Content#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Set/9 AsIs: t.SrcPos#1/10 AsIs: e.Content#1/7 AsIs: )/6 } Tile{ ]] }
      refalrts::update_ident( context[9], identifiers[ident_Set] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TFlush], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      //DEBUG: t.SrcPos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TFlush/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident( context[4], identifiers[ident_Empty] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TNamedFlush/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TNamedFlush], context[9] ) )
        continue;
      // closed e.Name#1 as range 7
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TNamedFlush/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident( context[4], identifiers[ident_Empty] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TErrorFlush/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TErrorFlush], context[9] ) )
        continue;
      // closed e.Message#1 as range 7
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Message#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TErrorFlush/9 AsIs: t.SrcPos#1/10 AsIs: e.Message#1/7 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident( context[4], identifiers[ident_Empty] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TName], context[9] ) )
        continue;
      // closed e.Name#1 as range 7
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TName/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident( context[4], identifiers[ident_Empty] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TAlternative/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[9] ) )
        continue;
      // closed e.Message#1 as range 7
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Message#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: e.Message#1/7 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident( context[4], identifiers[ident_Empty] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-Head/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_TDot], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], identifiers[ident_Empty] );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives-Head/4 t.Unexpected#1/5 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2
  //DEBUG: t.Unexpected#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 }" definition of state"/7 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( vm, context[7], context[8], " definition of state", 20 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_UnexpectedToken] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_Head("ExtractAlternatives-Head", 529858301U, 2130041524U, func_ExtractAlternativesm_Head);


static refalrts::FnResult func_ExtractAlternativesm_Flush(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & ExtractAlternatives-Flush/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives-Flush/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ExtractAlternatives-Flush/4 (/5 s.new#2/9 t.new#3/10 e.new#4/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.new#4 as range 7
    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TFlush], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      //DEBUG: t.SrcPos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Unnamed/1 ]] }
      refalrts::reinit_ident( context[1], identifiers[ident_Unnamed] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TNamedFlush/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TNamedFlush], context[9] ) )
        continue;
      // closed e.Name#1 as range 7
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Flush/9 } Tile{ AsIs: e.Name#1/7 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident( context[9], identifiers[ident_Flush] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TErrorFlush/9 t.SrcPos#1/10 e.Message#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TErrorFlush], context[9] ) )
        continue;
      // closed e.Message#1 as range 7
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Message#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # FlushError/9 } Tile{ AsIs: e.Message#1/7 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident( context[9], identifiers[ident_FlushError] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TName], context[9] ) )
        continue;
      // closed e.Name#1 as range 7
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TName/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident( context[4], identifiers[ident_None] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-Flush/4 (/5 s.new#5/9 t.new#6/10 )/6 >/1
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[9] ) )
        continue;
      //DEBUG: t.SrcPos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident( context[4], identifiers[ident_None] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-Flush/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_TDot], context[9] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], identifiers[ident_None] );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives-Flush/4 t.Unexpected#1/5 >/1
  //DEBUG: t.Unexpected#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: 'f'/1 }"lush or next state name"/7 >/9 Tile{ ]] }
  if( ! refalrts::alloc_chars( vm, context[7], context[8], "lush or next state name", 23 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_UnexpectedToken] );
  refalrts::reinit_char( context[1], 'f' );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_Flush("ExtractAlternatives-Flush", 529858301U, 2130041524U, func_ExtractAlternativesm_Flush);


static refalrts::FnResult func_ExtractAlternativesm_NextState(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & ExtractAlternatives-NextState/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives-NextState/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ExtractAlternatives-NextState/4 (/5 s.new#2/9 t.new#3/10 e.new#4/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.new#4 as range 7
    do {
      // </0 & ExtractAlternatives-NextState/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TName], context[9] ) )
        continue;
      // closed e.Name#1 as range 7
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-NextState/4 (/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/7 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[9] );
      refalrts::link_brackets( context[9], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-NextState/4 (/5 s.new#5/9 t.new#6/10 )/6 >/1
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & ExtractAlternatives-NextState/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[9] ) )
        continue;
      //DEBUG: t.SrcPos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident( context[4], identifiers[ident_Finitive] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-NextState/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_TDot], context[9] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident( context[4], identifiers[ident_Finitive] );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives-NextState/4 t.Unexpected#1/5 >/1
  //DEBUG: t.Unexpected#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: 'n'/1 }"ext state name or next alternative"/7 >/9 Tile{ ]] }
  if( ! refalrts::alloc_chars( vm, context[7], context[8], "ext state name or next alternative", 34 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_UnexpectedToken] );
  refalrts::reinit_char( context[1], 'n' );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_NextState("ExtractAlternatives-NextState", 529858301U, 2130041524U, func_ExtractAlternativesm_NextState);


static refalrts::FnResult func_UnexpectedToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & UnexpectedToken/4 (/7 s.Type#1/9 t.SrcPos#1/10 e.Unexpected#1/5 )/8 e.Message#1/2 >/1
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
  // closed e.Message#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Unexpected#1 as range 5
  //DEBUG: e.Message#1: 2
  //DEBUG: s.Type#1: 9
  //DEBUG: t.SrcPos#1: 10
  //DEBUG: e.Unexpected#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/10 }"Unexpected "/12 </14 Tile{ HalfReuse: & DFA-TextFromToken/7 AsIs: s.Type#1/9 } Tile{ AsIs: e.Unexpected#1/5 } >/15" expected"/16 Tile{ HalfReuse: ' '/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( vm, context[12], context[13], "Unexpected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[16], context[17], " expected", 9 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_ErrorAt] );
  refalrts::reinit_name( context[7], functions[efunc_DFAm_TextFromToken] );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnexpectedToken("UnexpectedToken", 529858301U, 2130041524U, func_UnexpectedToken);


//End of file
