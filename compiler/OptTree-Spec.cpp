// This file automatically generated from 'OptTree-Spec.ref'
// Don't edit! Edit 'OptTree-Spec.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1581151196_2180691721
static const refalrts::IdentReference ident_k37_("%");
static const refalrts::IdentReference ident_k42_("*");
static const refalrts::IdentReference ident_k43_("+");
static const refalrts::IdentReference ident_m_("-");
static const refalrts::IdentReference ident_k47_("/");
static const refalrts::IdentReference ident_k63_("?");
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
static refalrts::ExternalReference ref_Evm_met("Ev-met", 1581151196U, 2180691721U);
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
static refalrts::ExternalReference ref_Mu("Mu", 1581151196U, 2180691721U);
static refalrts::ExternalReference ref_gen_Mu_C1("Mu?1", 1581151196U, 2180691721U);
static refalrts::ExternalReference ref_Mul("Mul", 0U, 0U);
static refalrts::ExternalReference ref_OptTreem_Spec("OptTree-Spec", 0U, 0U);
static refalrts::ExternalReference ref_OptTreem_Specm_ExtractOptInfo("OptTree-Spec-ExtractOptInfo", 0U, 0U);
static refalrts::ExternalReference ref_OptTreem_Specm_Finalize("OptTree-Spec-Finalize", 0U, 0U);
static refalrts::ExternalReference ref_Residue("Residue", 1581151196U, 2180691721U);
static refalrts::ExternalReference ref_gen_Residue_C1("Residue?1", 1581151196U, 2180691721U);
static refalrts::ExternalReference ref_Sub("Sub", 0U, 0U);
static refalrts::ExternalReference ref_Type("Type", 0U, 0U);
static refalrts::ExternalReference ref_Up("Up", 1581151196U, 2180691721U);
static refalrts::ExternalReference ref_u_u_FindMuPtr("__FindMuPtr", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Mum_Aux("__Mu-Aux", 1581151196U, 2180691721U);
static refalrts::ExternalReference ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 1581151196U, 2180691721U);
static refalrts::ExternalReference ref_u_u_Stepm_End("__Step-End", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Stepm_Start("__Step-Start", 0U, 0U);

static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_name( vm, context[9], ref_gen_Mu_C1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_u_u_Stepm_Start.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_u_u_Mum_Aux.ref(vm) ) )
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
    refalrts::update_name( context[4], ref_u_u_Stepm_End.ref(vm) );
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

static refalrts::NativeReference nat_ref_Mu("Mu", 1581151196U, 2180691721U, func_Mu);


static refalrts::FnResult func_gen_u_u_Mum_Aux_S13B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
    if( ! refalrts::alloc_number( vm, context[9], 2180691721UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref(vm) );
    refalrts::reinit_number( context[5], 1581151196UL );
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
  refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref(vm) );
  refalrts::reinit_number( context[5], 1581151196UL );
  refalrts::reinit_number( context[7], 2180691721UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 1581151196U, 2180691721U, func_gen_u_u_Mum_Aux_S13B1);


static refalrts::FnResult func_u_u_Mum_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
      refalrts::reinit_name( context[1], ref_Add.ref(vm) );
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
      refalrts::reinit_name( context[1], ref_Div.ref(vm) );
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
      refalrts::reinit_name( context[1], ref_Mod.ref(vm) );
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
      refalrts::reinit_name( context[1], ref_Mul.ref(vm) );
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
      refalrts::reinit_name( context[1], ref_Residue.ref(vm) );
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
      refalrts::reinit_name( context[1], ref_Sub.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # +/5 >/1
      if( ! refalrts::ident_term(  ident_k43_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # +/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name( context[1], ref_Add.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # //5 >/1
      if( ! refalrts::ident_term(  ident_k47_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # //5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name( context[1], ref_Div.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # %/5 >/1
      if( ! refalrts::ident_term(  ident_k37_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # %/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name( context[1], ref_Mod.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # */5 >/1
      if( ! refalrts::ident_term(  ident_k42_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # */5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name( context[1], ref_Mul.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # ?/5 >/1
      if( ! refalrts::ident_term(  ident_k63_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # ?/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name( context[1], ref_Residue.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux/4 # -/5 >/1
    if( ! refalrts::ident_term(  ident_m_.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # -/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
    refalrts::reinit_name( context[1], ref_Sub.ref(vm) );
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
  if( ! refalrts::alloc_name( vm, context[8], ref_gen_u_u_Mum_Aux_S13B1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Type.ref(vm) );
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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 1581151196U, 2180691721U, func_u_u_Mum_Aux);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_name( vm, context[9], ref_gen_Residue_C1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_u_u_Stepm_Start.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_u_u_Mum_Aux.ref(vm) ) )
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
    refalrts::update_name( context[4], ref_u_u_Stepm_End.ref(vm) );
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

static refalrts::NativeReference nat_ref_Residue("Residue", 1581151196U, 2180691721U, func_Residue);


static refalrts::FnResult func_OptTreem_Specm_ExtractOptInfo(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & OptTree-Spec-ExtractOptInfo/4 s.OptSpec#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: s.OptSpec#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.OptSpec#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ HalfReuse: )/1 } )/6 Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( vm, context[6] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[6] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Specm_ExtractOptInfo("OptTree-Spec-ExtractOptInfo", 0U, 0U, func_OptTreem_Specm_ExtractOptInfo);


static refalrts::FnResult func_OptTreem_Spec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & OptTree-Spec/4 s.OptSpec#1/5 (/8 e.SpecInfo#1/6 )/9 e.AST#1/2 >/1
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
  // closed e.SpecInfo#1 as range 6
  // closed e.AST#1 as range 2
  //DEBUG: s.OptSpec#1: 5
  //DEBUG: e.SpecInfo#1: 6
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Spec/4 s.OptSpec#1/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.SpecInfo#1/6 AsIs: )/9 } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Spec("OptTree-Spec", 0U, 0U, func_OptTreem_Spec);


static refalrts::FnResult func_OptTreem_Specm_Finalize(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OptTree-Spec-Finalize/4 s.OptSpec#1/5 (/8 (/12 )/13 )/9 e.AST#1/2 >/1
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
  context[12] = refalrts::brackets_left( context[10], context[11], context[6], context[7] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  if( ! refalrts::empty_seq( context[10], context[11] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: s.OptSpec#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & OptTree-Spec-Finalize/4 s.OptSpec#1/5 (/8 (/12 )/13 )/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_Specm_Finalize("OptTree-Spec-Finalize", 0U, 0U, func_OptTreem_Specm_Finalize);


//End of file
