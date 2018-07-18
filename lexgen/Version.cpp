// This file automatically generated from '../common/Version.ref'
// Don't edit! Edit '../common/Version.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3141374465_1100830417
static const refalrts::RefalIdentifier ident_k37_ = refalrts::ident_from_static("%");
static const refalrts::RefalIdentifier ident_k42_ = refalrts::ident_from_static("*");
static const refalrts::RefalIdentifier ident_k43_ = refalrts::ident_from_static("+");
static const refalrts::RefalIdentifier ident_m_ = refalrts::ident_from_static("-");
static const refalrts::RefalIdentifier ident_k47_ = refalrts::ident_from_static("/");
static const refalrts::RefalIdentifier ident_k63_ = refalrts::ident_from_static("?");
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
static refalrts::ExternalReference ref_Evm_met("Ev-met", 3141374465U, 1100830417U);
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
static refalrts::ExternalReference ref_Mu("Mu", 3141374465U, 1100830417U);
static refalrts::ExternalReference ref_gen_Mu_C1("Mu?1", 3141374465U, 1100830417U);
static refalrts::ExternalReference ref_Mul("Mul", 0U, 0U);
static refalrts::ExternalReference ref_PrintVersion("PrintVersion", 0U, 0U);
static refalrts::ExternalReference ref_Prout("Prout", 0U, 0U);
static refalrts::ExternalReference ref_Residue("Residue", 3141374465U, 1100830417U);
static refalrts::ExternalReference ref_gen_Residue_C1("Residue?1", 3141374465U, 1100830417U);
static refalrts::ExternalReference ref_Sub("Sub", 0U, 0U);
static refalrts::ExternalReference ref_Type("Type", 0U, 0U);
static refalrts::ExternalReference ref_Up("Up", 3141374465U, 1100830417U);
static refalrts::ExternalReference ref_u_u_FindMuPtr("__FindMuPtr", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Mum_Aux("__Mu-Aux", 3141374465U, 1100830417U);
static refalrts::ExternalReference ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 3141374465U, 1100830417U);
static refalrts::ExternalReference ref_u_u_Stepm_End("__Step-End", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Stepm_Start("__Step-Start", 0U, 0U);

static refalrts::FnResult func_Mu(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_Mu_C1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_u_u_Stepm_Start.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_u_u_Mum_Aux.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function();
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_u_u_Stepm_End.ref.function );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  refalrts::splice_to_freelist(context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Mu("Mu", 3141374465U, 1100830417U, func_Mu);


static refalrts::FnResult func_gen_u_u_Mum_Aux_S13B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux$13:1/4 'F'/5 s.SubType#2/6 s.FnPtr#2/7 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.FnPtr2 #7/1 ]] }
      refalrts::reinit_svar( context[1], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    // </0 & __Mu-Aux$13:1/4 'W'/5 s.SubType#2/6 s.FnName#2/7 >/1
    if( ! refalrts::char_term( 'W', context[5] ) )
      continue;
    //DEBUG: s.SubType#2: 6
    //DEBUG: s.FnName#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.SubType#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } <Cookie2>/9 Tile{ AsIs: s.FnName#2/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_number( context[9], 1100830417UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref.function );
    refalrts::reinit_number( context[5], 3141374465UL );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.0#2/6 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } Tile{ HalfReuse: <Cookie2>/7 } Tile{ AsIs: e.FnName#2/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref.function );
  refalrts::reinit_number( context[5], 3141374465UL );
  refalrts::reinit_number( context[7], 1100830417UL );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 3141374465U, 1100830417U, func_gen_u_u_Mum_Aux_S13B1);


static refalrts::FnResult func_u_u_Mum_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '+'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name( context[1], ref_Add.ref.function );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    do {
      // </0 & __Mu-Aux/4 '/'/5 >/1
      if( ! refalrts::char_term( '/', context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '/'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name( context[1], ref_Div.ref.function );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    do {
      // </0 & __Mu-Aux/4 '%'/5 >/1
      if( ! refalrts::char_term( '%', context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '%'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name( context[1], ref_Mod.ref.function );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    do {
      // </0 & __Mu-Aux/4 '*'/5 >/1
      if( ! refalrts::char_term( '*', context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '*'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name( context[1], ref_Mul.ref.function );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    do {
      // </0 & __Mu-Aux/4 '?'/5 >/1
      if( ! refalrts::char_term( '?', context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '?'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name( context[1], ref_Residue.ref.function );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    do {
      // </0 & __Mu-Aux/4 '-'/5 >/1
      if( ! refalrts::char_term( '-', context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '-'/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
      refalrts::reinit_name( context[1], ref_Sub.ref.function );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    do {
      // </0 & __Mu-Aux/4 # +/5 >/1
      if( ! refalrts::ident_term(  ident_k43_, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # +/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
      refalrts::reinit_name( context[1], ref_Add.ref.function );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    do {
      // </0 & __Mu-Aux/4 # //5 >/1
      if( ! refalrts::ident_term(  ident_k47_, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # //5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
      refalrts::reinit_name( context[1], ref_Div.ref.function );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    do {
      // </0 & __Mu-Aux/4 # %/5 >/1
      if( ! refalrts::ident_term(  ident_k37_, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # %/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
      refalrts::reinit_name( context[1], ref_Mod.ref.function );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    do {
      // </0 & __Mu-Aux/4 # */5 >/1
      if( ! refalrts::ident_term(  ident_k42_, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # */5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
      refalrts::reinit_name( context[1], ref_Mul.ref.function );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    do {
      // </0 & __Mu-Aux/4 # ?/5 >/1
      if( ! refalrts::ident_term(  ident_k63_, context[5] ) )
        continue;

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # ?/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
      refalrts::reinit_name( context[1], ref_Residue.ref.function );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    // </0 & __Mu-Aux/4 # -/5 >/1
    if( ! refalrts::ident_term(  ident_m_, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # -/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
    refalrts::reinit_name( context[1], ref_Sub.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // </0 & __Mu-Aux/4 t.Function#1/5 >/1
  //DEBUG: t.Function#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & __Mu-Aux$13:1/8 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: t.Function#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_gen_u_u_Mum_Aux_S13B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Type.ref.function );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 3141374465U, 1100830417U, func_u_u_Mum_Aux);


static refalrts::FnResult func_Residue(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_Residue_C1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_u_u_Stepm_Start.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_u_u_Mum_Aux.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function();
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_u_u_Stepm_End.ref.function );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  refalrts::splice_to_freelist(context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Residue("Residue", 3141374465U, 1100830417U, func_Residue);


static refalrts::FnResult func_PrintVersion(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & PrintVersion/4 e.Product#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Product#1 as range 2
  //DEBUG: e.Product#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 AsIs: e.Product#1/2 HalfReuse: ','/1 }" a part of Refal-5-lambda compiler toolkit, version 2.0.5.1"/5 >/7 </8 & Prout/9"Copyright (c) 2008-2016, Alexander Konovalov, 2016-2018, BMSTU IU9 Department"/10 >/12 </13 & Prout/14"All rights reserved.\n"/15 >/17 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[5], context[6], " a part of Refal-5-lambda compiler toolkit, version 2.0.5.1", 59 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_Prout.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "Copyright (c) 2008-2016, Alexander Konovalov, 2016-2018, BMSTU IU9 Department", 77 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_Prout.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[15], context[16], "All rights reserved.\n", 21 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Prout.ref.function );
  refalrts::reinit_char( context[1], ',' );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintVersion("PrintVersion", 0U, 0U, func_PrintVersion);


//End of file
