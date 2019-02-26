// This file automatically generated from 'GenericMatch.ref'
// Don't edit! Edit 'GenericMatch.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1054970354_4139937217
static const refalrts::IdentReference ident_k37_("%");
static const refalrts::IdentReference ident_k42_("*");
static const refalrts::IdentReference ident_k43_("+");
static const refalrts::IdentReference ident_m_("-");
static const refalrts::IdentReference ident_k47_("/");
static const refalrts::IdentReference ident_k63_("?");
static const refalrts::IdentReference ident_ADTm_Brackets("ADT-Brackets");
static const refalrts::IdentReference ident_Add("Add");
static const refalrts::IdentReference ident_Brackets("Brackets");
static const refalrts::IdentReference ident_CallBrackets("CallBrackets");
static const refalrts::IdentReference ident_Clear("Clear");
static const refalrts::IdentReference ident_Closure("Closure");
static const refalrts::IdentReference ident_Div("Div");
static const refalrts::IdentReference ident_Failure("Failure");
static const refalrts::IdentReference ident_False("False");
static const refalrts::IdentReference ident_Mod("Mod");
static const refalrts::IdentReference ident_Mul("Mul");
static const refalrts::IdentReference ident_Residue("Residue");
static const refalrts::IdentReference ident_Sub("Sub");
static const refalrts::IdentReference ident_TkChar("TkChar");
static const refalrts::IdentReference ident_TkIdentifier("TkIdentifier");
static const refalrts::IdentReference ident_TkName("TkName");
static const refalrts::IdentReference ident_TkNumber("TkNumber");
static const refalrts::IdentReference ident_TkVariable("TkVariable");
static const refalrts::IdentReference ident_True("True");
static const refalrts::IdentReference ident_Undefined("Undefined");
static refalrts::ExternalReference ref_Evm_met("Ev-met", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_GenericMatch("GenericMatch", 0U, 0U);
static refalrts::ExternalReference ref_GenericMatchm_Aux("GenericMatch-Aux", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_GenericMatchm_Aux_S1B1("GenericMatch-Aux$1:1", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_GenericMatchm_Aux_S1C1("GenericMatch-Aux$1?1", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_GenericMatchm_Aux_S1C2("GenericMatch-Aux$1?2", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_GenericMatchm_Aux_S2B1("GenericMatch-Aux$2:1", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_GenericMatchm_Aux_S2C1("GenericMatch-Aux$2?1", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_GenericMatchm_Aux_S2C2("GenericMatch-Aux$2?2", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_IsSVarSubset("IsSVarSubset", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_IsSVarSubset_S1C1("IsSVarSubset$1?1", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_IsSymbol("IsSymbol", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_IsTerm("IsTerm", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_Mu("Mu", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_Mu_C1("Mu?1", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_Residue("Residue", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_Residue_C1("Residue?1", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_TermMatch("TermMatch", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_TermMatch_S1C1("TermMatch$1?1", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_TermMatch_S3C1("TermMatch$3?1", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_Type("Type", 0U, 0U);
static refalrts::ExternalReference ref_Up("Up", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_u_u_FindMuPtr("__FindMuPtr", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Mum_Aux("__Mu-Aux", 1054970354U, 4139937217U);
static refalrts::ExternalReference ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 1054970354U, 4139937217U);
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

static refalrts::NativeReference nat_ref_Mu("Mu", 1054970354U, 4139937217U, func_Mu);


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
    if( ! refalrts::alloc_number( vm, context[9], 4139937217UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref(vm) );
    refalrts::reinit_number( context[5], 1054970354UL );
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
  refalrts::reinit_number( context[5], 1054970354UL );
  refalrts::reinit_number( context[7], 4139937217UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 1054970354U, 4139937217U, func_gen_u_u_Mum_Aux_S13B1);


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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Add/1 ]] }
      refalrts::reinit_ident( context[1], ident_Add.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Div/1 ]] }
      refalrts::reinit_ident( context[1], ident_Div.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Mod/1 ]] }
      refalrts::reinit_ident( context[1], ident_Mod.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Mul/1 ]] }
      refalrts::reinit_ident( context[1], ident_Mul.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Residue/1 ]] }
      refalrts::reinit_ident( context[1], ident_Residue.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Sub/1 ]] }
      refalrts::reinit_ident( context[1], ident_Sub.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Add/1 ]] }
      refalrts::reinit_ident( context[1], ident_Add.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Div/1 ]] }
      refalrts::reinit_ident( context[1], ident_Div.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Mod/1 ]] }
      refalrts::reinit_ident( context[1], ident_Mod.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Mul/1 ]] }
      refalrts::reinit_ident( context[1], ident_Mul.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Residue/1 ]] }
      refalrts::reinit_ident( context[1], ident_Residue.ref(vm) );
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
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Sub/1 ]] }
    refalrts::reinit_ident( context[1], ident_Sub.ref(vm) );
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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 1054970354U, 4139937217U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 1054970354U, 4139937217U, func_Residue);


static refalrts::FnResult func_GenericMatch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & GenericMatch/4 (/7 e.Pattern#1/5 )/8 (/11 e.LPattern#1/9 )/12 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.LPattern#1 as range 9
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.LPattern#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenericMatch-Aux/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.LPattern#1/9 AsIs: )/12 HalfReuse: (/1 } )/13 >/14 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_GenericMatchm_Aux.ref(vm) );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[1], context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenericMatch("GenericMatch", 0U, 0U, func_GenericMatch);


static refalrts::FnResult func_gen_GenericMatchm_Aux_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GenericMatch-Aux$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenericMatch-Aux$1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 s.new#4/17 e.new#5/2 >/1
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
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & GenericMatch-Aux$1:1/4 (/7 e.Pe#1/5 )/8 (/11 e.He#1/9 )/12 (/15 e.Substs#1/13 )/16 # Clear/17 e.TermSubsts#4/2 >/1
    if( ! refalrts::ident_term(  ident_Clear.ref(vm), context[17] ) )
      continue;
    // closed e.Pe#1 as range 5
    // closed e.He#1 as range 9
    // closed e.Substs#1 as range 13
    // closed e.TermSubsts#4 as range 2
    //DEBUG: e.Pe#1: 5
    //DEBUG: e.He#1: 9
    //DEBUG: e.Substs#1: 13
    //DEBUG: e.TermSubsts#4: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Clear/17 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenericMatch-Aux/4 AsIs: (/7 AsIs: e.Pe#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.He#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Substs#1/13 } Tile{ AsIs: e.TermSubsts#4/2 } Tile{ AsIs: )/16 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_GenericMatchm_Aux.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenericMatch-Aux$1:1/4 (/7 e.new#6/5 )/8 (/11 e.new#7/9 )/12 (/15 e.new#8/13 )/16 s.new#9/17 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 5
  // closed e.new#7 as range 9
  // closed e.new#8 as range 13
  do {
    // </0 & GenericMatch-Aux$1:1/4 (/7 e.Pe#1/5 )/8 (/11 e.He#1/9 )/12 (/15 e.Substs#1/13 )/16 # Failure/17 >/1
    if( ! refalrts::ident_term(  ident_Failure.ref(vm), context[17] ) )
      continue;
    // closed e.Pe#1 as range 5
    // closed e.He#1 as range 9
    // closed e.Substs#1 as range 13
    //DEBUG: e.Pe#1: 5
    //DEBUG: e.He#1: 9
    //DEBUG: e.Substs#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenericMatch-Aux$1:1/4 (/7 e.Pe#1/5 )/8 (/11 e.He#1/9 )/12 (/15 e.Substs#1/13 )/16 # Failure/17 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Failure/1 ]] }
    refalrts::reinit_ident( context[1], ident_Failure.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenericMatch-Aux$1:1/4 (/7 e.Pe#1/5 )/8 (/11 e.He#1/9 )/12 (/15 e.Substs#1/13 )/16 # Undefined/17 >/1
  if( ! refalrts::ident_term(  ident_Undefined.ref(vm), context[17] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pe#1 as range 5
  // closed e.He#1 as range 9
  // closed e.Substs#1 as range 13
  //DEBUG: e.Pe#1: 5
  //DEBUG: e.He#1: 9
  //DEBUG: e.Substs#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenericMatch-Aux$1:1/4 (/7 e.Pe#1/5 )/8 (/11 e.He#1/9 )/12 (/15 e.Substs#1/13 )/16 # Undefined/17 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Undefined/1 ]] }
  refalrts::reinit_ident( context[1], ident_Undefined.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenericMatchm_Aux_S1B1("GenericMatch-Aux$1:1", 1054970354U, 4139937217U, func_gen_GenericMatchm_Aux_S1B1);


static refalrts::FnResult func_gen_GenericMatchm_Aux_S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GenericMatch-Aux$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenericMatch-Aux$2:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 s.new#4/17 e.new#5/2 >/1
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
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & GenericMatch-Aux$2:1/4 (/7 e.Pe#1/5 )/8 (/11 e.He#1/9 )/12 (/15 e.Substs#1/13 )/16 # Clear/17 e.TermSubsts#4/2 >/1
    if( ! refalrts::ident_term(  ident_Clear.ref(vm), context[17] ) )
      continue;
    // closed e.Pe#1 as range 5
    // closed e.He#1 as range 9
    // closed e.Substs#1 as range 13
    // closed e.TermSubsts#4 as range 2
    //DEBUG: e.Pe#1: 5
    //DEBUG: e.He#1: 9
    //DEBUG: e.Substs#1: 13
    //DEBUG: e.TermSubsts#4: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Clear/17 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenericMatch-Aux/4 AsIs: (/7 AsIs: e.Pe#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.He#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Substs#1/13 } Tile{ AsIs: e.TermSubsts#4/2 } Tile{ AsIs: )/16 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_GenericMatchm_Aux.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenericMatch-Aux$2:1/4 (/7 e.new#6/5 )/8 (/11 e.new#7/9 )/12 (/15 e.new#8/13 )/16 s.new#9/17 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 5
  // closed e.new#7 as range 9
  // closed e.new#8 as range 13
  do {
    // </0 & GenericMatch-Aux$2:1/4 (/7 e.Pe#1/5 )/8 (/11 e.He#1/9 )/12 (/15 e.Substs#1/13 )/16 # Failure/17 >/1
    if( ! refalrts::ident_term(  ident_Failure.ref(vm), context[17] ) )
      continue;
    // closed e.Pe#1 as range 5
    // closed e.He#1 as range 9
    // closed e.Substs#1 as range 13
    //DEBUG: e.Pe#1: 5
    //DEBUG: e.He#1: 9
    //DEBUG: e.Substs#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenericMatch-Aux$2:1/4 (/7 e.Pe#1/5 )/8 (/11 e.He#1/9 )/12 (/15 e.Substs#1/13 )/16 # Failure/17 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Failure/1 ]] }
    refalrts::reinit_ident( context[1], ident_Failure.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenericMatch-Aux$2:1/4 (/7 e.Pe#1/5 )/8 (/11 e.He#1/9 )/12 (/15 e.Substs#1/13 )/16 # Undefined/17 >/1
  if( ! refalrts::ident_term(  ident_Undefined.ref(vm), context[17] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pe#1 as range 5
  // closed e.He#1 as range 9
  // closed e.Substs#1 as range 13
  //DEBUG: e.Pe#1: 5
  //DEBUG: e.He#1: 9
  //DEBUG: e.Substs#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenericMatch-Aux$2:1/4 (/7 e.Pe#1/5 )/8 (/11 e.He#1/9 )/12 (/15 e.Substs#1/13 )/16 # Undefined/17 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Undefined/1 ]] }
  refalrts::reinit_ident( context[1], ident_Undefined.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenericMatchm_Aux_S2B1("GenericMatch-Aux$2:1", 1054970354U, 4139937217U, func_gen_GenericMatchm_Aux_S2B1);


static refalrts::FnResult func_GenericMatchm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & GenericMatch-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & GenericMatch-Aux/4 (/9 e.new#1/7 )/10 (/13 e.new#2/11 )/14 (/17 e.new#3/15 )/18 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[5], context[6] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.new#1 as range 7
    // closed e.new#2 as range 11
    // closed e.new#3 as range 15
    do {
      // </0 & GenericMatch-Aux/4 (/9 t.Pt#1/23 e.Pe#1/19 )/10 (/13 t.Ht#1/25 e.He#1/21 )/14 (/17 e.Substs#1/15 )/18 >/1
      context[19] = context[7];
      context[20] = context[8];
      context[21] = context[11];
      context[22] = context[12];
      // closed e.Substs#1 as range 15
      context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      // closed e.Pe#1 as range 19
      context[26] = refalrts::tvar_left( context[25], context[21], context[22] );
      if( ! context[26] )
        continue;
      // closed e.He#1 as range 21
      //DEBUG: e.Substs#1: 15
      //DEBUG: t.Pt#1: 23
      //DEBUG: e.Pe#1: 19
      //DEBUG: t.Ht#1: 25
      //DEBUG: e.He#1: 21
      //15: e.Substs#1
      //19: e.Pe#1
      //21: e.He#1
      //23: t.Pt#1
      //25: t.Ht#1
      //32: t.Ht#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      if( ! refalrts::alloc_open_call( vm, context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[29], ref_gen_GenericMatchm_Aux_S1C1.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[31], ref_IsTerm.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[32], context[25]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[28] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[27] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[30] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_stvar( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </27 & GenericMatch-Aux$1?1/31 # True/32 >/28
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
        context[32] = refalrts::ident_left(  ident_True.ref(vm), context[29], context[30] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        //DEBUG: e.Substs#1: 15
        //DEBUG: t.Pt#1: 23
        //DEBUG: e.Pe#1: 19
        //DEBUG: t.Ht#1: 25
        //DEBUG: e.He#1: 21
        //15: e.Substs#1
        //19: e.Pe#1
        //21: e.He#1
        //23: t.Pt#1
        //25: t.Ht#1
        //38: t.Pt#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        if( ! refalrts::alloc_open_call( vm, context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[35], ref_gen_GenericMatchm_Aux_S1C2.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[37], ref_IsTerm.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[38], context[23]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[39] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[34] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[33] );
        res = refalrts::splice_elem( res, context[34] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[36] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_stvar( res, context[38] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[33] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </33 & GenericMatch-Aux$1?2/37 # True/38 >/34
          context[35] = 0;
          context[36] = 0;
          context[37] = refalrts::call_left( context[35], context[36], context[33], context[34] );
          context[38] = refalrts::ident_left(  ident_True.ref(vm), context[35], context[36] );
          if( ! context[38] )
            continue;
          if( ! refalrts::empty_seq( context[35], context[36] ) )
            continue;
          //DEBUG: e.Substs#1: 15
          //DEBUG: t.Pt#1: 23
          //DEBUG: e.Pe#1: 19
          //DEBUG: t.Ht#1: 25
          //DEBUG: e.He#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/28 </33 & GenericMatch-Aux$1?2/37 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & GenericMatch-Aux$1:1/9 } Tile{ HalfReuse: (/38 } Tile{ AsIs: e.Pe#1/19 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.He#1/21 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Substs#1/15 AsIs: )/18 HalfReuse: {*}/27 HalfReuse: </31 HalfReuse: & TermMatch/32 } Tile{ AsIs: t.Pt#1/23 } Tile{ AsIs: t.Ht#1/25 } Tile{ AsIs: >/34 AsIs: >/1 ]] }
          refalrts::reinit_closure_head( context[4] );
          refalrts::reinit_name( context[9], ref_gen_GenericMatchm_Aux_S1B1.ref(vm) );
          refalrts::reinit_open_bracket( context[38] );
          refalrts::reinit_unwrapped_closure( context[27], context[4] );
          refalrts::reinit_open_call( context[31] );
          refalrts::reinit_name( context[32], ref_TermMatch.ref(vm) );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[31] );
          refalrts::link_brackets( context[17], context[18] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[38], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[34];
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[23], context[24] );
          res = refalrts::splice_evar( res, context[14], context[32] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[10], context[13] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[38], context[38] );
          refalrts::splice_to_freelist_open( vm, context[9], res );
          refalrts::wrap_closure( context[27] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[33], context[34]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[27], context[28]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenericMatch-Aux/4 (/9 e.Pe#1/19 t.Pt#1/23 )/10 (/13 e.He#1/21 t.Ht#1/25 )/14 (/17 e.Substs#1/15 )/18 >/1
      context[19] = context[7];
      context[20] = context[8];
      context[21] = context[11];
      context[22] = context[12];
      // closed e.Substs#1 as range 15
      context[24] = refalrts::tvar_right( context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      // closed e.Pe#1 as range 19
      context[26] = refalrts::tvar_right( context[25], context[21], context[22] );
      if( ! context[26] )
        continue;
      // closed e.He#1 as range 21
      //DEBUG: e.Substs#1: 15
      //DEBUG: t.Pt#1: 23
      //DEBUG: e.Pe#1: 19
      //DEBUG: t.Ht#1: 25
      //DEBUG: e.He#1: 21
      //15: e.Substs#1
      //19: e.Pe#1
      //21: e.He#1
      //23: t.Pt#1
      //25: t.Ht#1
      //32: t.Ht#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      if( ! refalrts::alloc_open_call( vm, context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[29], ref_gen_GenericMatchm_Aux_S2C1.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[31], ref_IsTerm.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[32], context[25]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[28] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[27] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[30] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_stvar( res, context[32] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_elem( res, context[30] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_elem( res, context[27] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </27 & GenericMatch-Aux$2?1/31 # True/32 >/28
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
        context[32] = refalrts::ident_left(  ident_True.ref(vm), context[29], context[30] );
        if( ! context[32] )
          continue;
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        //DEBUG: e.Substs#1: 15
        //DEBUG: t.Pt#1: 23
        //DEBUG: e.Pe#1: 19
        //DEBUG: t.Ht#1: 25
        //DEBUG: e.He#1: 21
        //15: e.Substs#1
        //19: e.Pe#1
        //21: e.He#1
        //23: t.Pt#1
        //25: t.Ht#1
        //38: t.Pt#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        if( ! refalrts::alloc_open_call( vm, context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[35], ref_gen_GenericMatchm_Aux_S2C2.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[37], ref_IsTerm.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[38], context[23]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[39] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[34] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[33] );
        res = refalrts::splice_elem( res, context[34] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[36] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_stvar( res, context[38] );
        res = refalrts::splice_elem( res, context[37] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[33] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </33 & GenericMatch-Aux$2?2/37 # True/38 >/34
          context[35] = 0;
          context[36] = 0;
          context[37] = refalrts::call_left( context[35], context[36], context[33], context[34] );
          context[38] = refalrts::ident_left(  ident_True.ref(vm), context[35], context[36] );
          if( ! context[38] )
            continue;
          if( ! refalrts::empty_seq( context[35], context[36] ) )
            continue;
          //DEBUG: e.Substs#1: 15
          //DEBUG: t.Pt#1: 23
          //DEBUG: e.Pe#1: 19
          //DEBUG: t.Ht#1: 25
          //DEBUG: e.He#1: 21

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} </33 & GenericMatch-Aux$2?2/37 # True/38 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & GenericMatch-Aux$2:1/9 } Tile{ HalfReuse: (/28 } Tile{ AsIs: e.Pe#1/19 } Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.He#1/21 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Substs#1/15 AsIs: )/18 HalfReuse: {*}/27 HalfReuse: </31 HalfReuse: & TermMatch/32 } Tile{ AsIs: t.Pt#1/23 } Tile{ AsIs: t.Ht#1/25 } Tile{ AsIs: >/34 AsIs: >/1 ]] }
          refalrts::reinit_closure_head( context[4] );
          refalrts::reinit_name( context[9], ref_gen_GenericMatchm_Aux_S2B1.ref(vm) );
          refalrts::reinit_open_bracket( context[28] );
          refalrts::reinit_unwrapped_closure( context[27], context[4] );
          refalrts::reinit_open_call( context[31] );
          refalrts::reinit_name( context[32], ref_TermMatch.ref(vm) );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[31] );
          refalrts::link_brackets( context[17], context[18] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[28], context[10] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[34];
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[23], context[24] );
          res = refalrts::splice_evar( res, context[14], context[32] );
          res = refalrts::splice_evar( res, context[21], context[22] );
          res = refalrts::splice_evar( res, context[10], context[13] );
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[28], context[28] );
          refalrts::splice_to_freelist_open( vm, context[9], res );
          refalrts::wrap_closure( context[27] );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[33], context[34]);
        continue;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[27], context[28]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenericMatch-Aux/4 (/9 )/10 (/13 )/14 (/17 e.Substs#1/15 )/18 >/1
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.Substs#1 as range 15
      //DEBUG: e.Substs#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & GenericMatch-Aux/4 (/9 )/10 (/13 )/14 (/17 {REMOVED TILE} )/18 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: # Clear/0 } Tile{ AsIs: e.Substs#1/15 } Tile{ ]] }
      refalrts::reinit_ident( context[0], ident_Clear.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenericMatch-Aux/4 (/9 e.P#1/7 )/10 (/13 (/23 # TkVariable/25 'e'/26 e.Index#1/21 )/24 )/14 (/17 e.Substs#1/15 )/18 >/1
    context[19] = context[11];
    context[20] = context[12];
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  ident_TkVariable.ref(vm), context[21], context[22] );
    if( ! context[25] )
      continue;
    context[26] = refalrts::char_left( 'e', context[21], context[22] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    // closed e.P#1 as range 7
    // closed e.Index#1 as range 21
    // closed e.Substs#1 as range 15
    //DEBUG: e.P#1: 7
    //DEBUG: e.Index#1: 21
    //DEBUG: e.Substs#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenericMatch-Aux/4 (/9 {REMOVED TILE} )/10 (/13 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Clear/17 AsIs: e.Substs#1/15 HalfReuse: (/18 } Tile{ AsIs: e.P#1/7 } Tile{ HalfReuse: ':'/23 HalfReuse: (/25 AsIs: 'e'/26 AsIs: e.Index#1/21 AsIs: )/24 AsIs: )/14 } Tile{ ]] }
    refalrts::reinit_ident( context[17], ident_Clear.ref(vm) );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_char( context[23], ':' );
    refalrts::reinit_open_bracket( context[25] );
    refalrts::link_brackets( context[18], context[14] );
    refalrts::link_brackets( context[25], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenericMatch-Aux/4 e.Else#1/2 >/1
  // closed e.Else#1 as range 2
  //DEBUG: e.Else#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenericMatch-Aux/4 e.Else#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Undefined/1 ]] }
  refalrts::reinit_ident( context[1], ident_Undefined.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenericMatchm_Aux("GenericMatch-Aux", 1054970354U, 4139937217U, func_GenericMatchm_Aux);


static refalrts::FnResult func_TermMatch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & TermMatch/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & TermMatch/4 t.new#1/5 t.new#2/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & TermMatch/4 t.Symbol#1/5 t.Symbol#1/7 >/1
    if( ! refalrts::repeated_stvar_term( vm, context[7], context[5] ) )
      continue;
    //DEBUG: t.Symbol#1: 5
    //5: t.Symbol#1
    //7: t.Symbol#1
    //14: t.Symbol#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    if( ! refalrts::alloc_open_call( vm, context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[11], ref_gen_TermMatch_S1C1.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[13], ref_IsSymbol.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[14], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[10] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    res = refalrts::splice_elem( res, context[10] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[12] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_stvar( res, context[14] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function(vm);
    do {
      // </9 & TermMatch$1?1/13 # True/14 >/10
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::call_left( context[11], context[12], context[9], context[10] );
      context[14] = refalrts::ident_left(  ident_True.ref(vm), context[11], context[12] );
      if( ! context[14] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: t.Symbol#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & TermMatch/4 t.Symbol#1/5 t.Symbol#1/7 </9 & TermMatch$1?1/13 # True/14 >/10 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Clear/1 ]] }
      refalrts::reinit_ident( context[1], ident_Clear.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[9], context[10]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & TermMatch/4 t.new#3/5 (/7 s.new#4/11 e.new#5/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 9
    do {
      // </0 & TermMatch/4 t.new#6/5 (/7 # TkVariable/11 s.new#7/14 e.new#8/12 )/8 >/1
      context[12] = context[9];
      context[13] = context[10];
      if( ! refalrts::ident_term(  ident_TkVariable.ref(vm), context[11] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.new#8 as range 12
      do {
        // </0 & TermMatch/4 t.TVar#1/5 (/7 # TkVariable/11 't'/14 e.HIndex#1/12 )/8 >/1
        if( ! refalrts::char_term( 't', context[14] ) )
          continue;
        // closed e.HIndex#1 as range 12
        //DEBUG: t.TVar#1: 5
        //DEBUG: e.HIndex#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: # Clear/0 HalfReuse: (/4 AsIs: t.TVar#1/5 HalfReuse: ':'/7 HalfReuse: (/11 AsIs: 't'/14 AsIs: e.HIndex#1/12 AsIs: )/8 HalfReuse: )/1 ]] }
        refalrts::reinit_ident( context[0], ident_Clear.ref(vm) );
        refalrts::reinit_open_bracket( context[4] );
        refalrts::reinit_char( context[7], ':' );
        refalrts::reinit_open_bracket( context[11] );
        refalrts::reinit_close_bracket( context[1] );
        refalrts::link_brackets( context[4], context[1] );
        refalrts::link_brackets( context[11], context[8] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & TermMatch/4 t.SVar#1/5 (/7 # TkVariable/11 's'/14 e.HIndex#1/12 )/8 >/1
      if( ! refalrts::char_term( 's', context[14] ) )
        continue;
      // closed e.HIndex#1 as range 12
      //DEBUG: t.SVar#1: 5
      //DEBUG: e.HIndex#1: 12
      //5: t.SVar#1
      //12: e.HIndex#1
      //20: t.SVar#1

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      if( ! refalrts::alloc_open_call( vm, context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[17], ref_gen_TermMatch_S3C1.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[19], ref_IsSVarSubset.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(vm, context[20], context[5]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[16] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[15] );
      res = refalrts::splice_elem( res, context[16] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[18] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_stvar( res, context[20] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function(vm);
      do {
        // </15 & TermMatch$3?1/19 # True/20 >/16
        context[17] = 0;
        context[18] = 0;
        context[19] = refalrts::call_left( context[17], context[18], context[15], context[16] );
        context[20] = refalrts::ident_left(  ident_True.ref(vm), context[17], context[18] );
        if( ! context[20] )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        //DEBUG: t.SVar#1: 5
        //DEBUG: e.HIndex#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & TermMatch$3?1/19 # True/20 >/16 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: # Clear/0 HalfReuse: (/4 AsIs: t.SVar#1/5 HalfReuse: ':'/7 HalfReuse: (/11 AsIs: 's'/14 AsIs: e.HIndex#1/12 AsIs: )/8 HalfReuse: )/15 } Tile{ ]] }
        refalrts::reinit_ident( context[0], ident_Clear.ref(vm) );
        refalrts::reinit_open_bracket( context[4] );
        refalrts::reinit_char( context[7], ':' );
        refalrts::reinit_open_bracket( context[11] );
        refalrts::reinit_close_bracket( context[15] );
        refalrts::link_brackets( context[4], context[15] );
        refalrts::link_brackets( context[11], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        refalrts::splice_to_freelist_open( vm, context[15], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[15], context[16]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & TermMatch/4 (/5 s.new#6/14 e.new#7/12 )/6 (/7 s.new#8/11 e.new#9/9 )/8 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[5] ) )
      continue;
    // closed e.new#9 as range 9
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#7 as range 12
    do {
      // </0 & TermMatch/4 (/5 # Brackets/14 e.TBody#1/12 )/6 (/7 # Brackets/11 e.HBody#1/9 )/8 >/1
      if( ! refalrts::ident_term(  ident_Brackets.ref(vm), context[14] ) )
        continue;
      if( ! refalrts::ident_term(  ident_Brackets.ref(vm), context[11] ) )
        continue;
      // closed e.TBody#1 as range 12
      // closed e.HBody#1 as range 9
      //DEBUG: e.TBody#1: 12
      //DEBUG: e.HBody#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # Brackets/14 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenericMatch/4 AsIs: (/5 } Tile{ AsIs: e.TBody#1/12 } Tile{ HalfReuse: )/7 HalfReuse: (/11 AsIs: e.HBody#1/9 AsIs: )/8 AsIs: >/1 ]] }
      refalrts::update_name( context[4], ref_GenericMatch.ref(vm) );
      refalrts::reinit_close_bracket( context[7] );
      refalrts::reinit_open_bracket( context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[8] );
      refalrts::link_brackets( context[5], context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      res = refalrts::splice_evar( res, context[12], context[13] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & TermMatch/4 (/5 # ADT-Brackets/14 (/21 e.Name#1/19 )/22 e.TBody#1/15 )/6 (/7 # ADT-Brackets/11 (/25 e.Name#1/27 )/26 e.HBody#1/17 )/8 >/1
    context[15] = context[12];
    context[16] = context[13];
    context[17] = context[9];
    context[18] = context[10];
    if( ! refalrts::ident_term(  ident_ADTm_Brackets.ref(vm), context[14] ) )
      continue;
    if( ! refalrts::ident_term(  ident_ADTm_Brackets.ref(vm), context[11] ) )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[17], context[18] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    // closed e.Name#1 as range 19
    if( ! refalrts::repeated_evar_left( vm, context[27], context[28], context[19], context[20], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.TBody#1 as range 15
    // closed e.HBody#1 as range 17
    //DEBUG: e.Name#1: 19
    //DEBUG: e.TBody#1: 15
    //DEBUG: e.HBody#1: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # ADT-Brackets/14 (/21 e.Name#1/19 {REMOVED TILE} {REMOVED TILE} )/6 (/7 # ADT-Brackets/11 (/25 e.Name#1/27 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenericMatch/4 AsIs: (/5 } Tile{ AsIs: e.TBody#1/15 } Tile{ AsIs: )/22 } Tile{ HalfReuse: (/26 AsIs: e.HBody#1/17 AsIs: )/8 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_GenericMatch.ref(vm) );
    refalrts::reinit_open_bracket( context[26] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[26], context[8] );
    refalrts::link_brackets( context[5], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & TermMatch/4 t.T#1/5 t.H#1/7 >/1
  //DEBUG: t.T#1: 5
  //DEBUG: t.H#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & TermMatch/4 t.T#1/5 t.H#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # Failure/1 ]] }
  refalrts::reinit_ident( context[1], ident_Failure.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TermMatch("TermMatch", 1054970354U, 4139937217U, func_TermMatch);


static refalrts::FnResult func_IsSVarSubset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & IsSVarSubset/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsSVarSubset/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsSVarSubset/4 t.Symbol#1/5 >/1
    //DEBUG: t.Symbol#1: 5
    //5: t.Symbol#1
    //12: t.Symbol#1

    refalrts::reset_allocator(vm);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    if( ! refalrts::alloc_open_call( vm, context[7] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[9], ref_gen_IsSVarSubset_S1C1.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[11], ref_IsSymbol.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(vm, context[12], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[8] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    res = refalrts::splice_elem( res, context[8] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[10] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_stvar( res, context[12] );
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
      // </7 & IsSVarSubset$1?1/11 # True/12 >/8
      context[9] = 0;
      context[10] = 0;
      context[11] = refalrts::call_left( context[9], context[10], context[7], context[8] );
      context[12] = refalrts::ident_left(  ident_True.ref(vm), context[9], context[10] );
      if( ! context[12] )
        continue;
      if( ! refalrts::empty_seq( context[9], context[10] ) )
        continue;
      //DEBUG: t.Symbol#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 t.Symbol#1/5 </7 & IsSVarSubset$1?1/11 # True/12 >/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident( context[1], ident_True.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    refalrts::splice_to_freelist(vm, context[7], context[8]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IsSVarSubset/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & IsSVarSubset/4 (/5 # TkVariable/9 's'/12 e.Tindex#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term(  ident_TkVariable.ref(vm), context[9] ) )
        continue;
      context[12] = refalrts::char_left( 's', context[10], context[11] );
      if( ! context[12] )
        continue;
      // closed e.Tindex#1 as range 10
      //DEBUG: e.Tindex#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 (/5 # TkVariable/9 's'/12 e.Tindex#1/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident( context[1], ident_True.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsSVarSubset/4 (/5 # Closure/9 e.Body#1/7 )/6 >/1
    if( ! refalrts::ident_term(  ident_Closure.ref(vm), context[9] ) )
      continue;
    // closed e.Body#1 as range 7
    //DEBUG: e.Body#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 (/5 # Closure/9 e.Body#1/7 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident( context[1], ident_True.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsSVarSubset/4 t.OtherTerm#1/5 >/1
  //DEBUG: t.OtherTerm#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsSVarSubset/4 t.OtherTerm#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident( context[1], ident_False.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsSVarSubset("IsSVarSubset", 1054970354U, 4139937217U, func_IsSVarSubset);


static refalrts::FnResult func_IsTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & IsTerm/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsTerm/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsTerm/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & IsTerm/4 (/5 # TkVariable/9 'e'/12 e.Index#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term(  ident_TkVariable.ref(vm), context[9] ) )
        continue;
      context[12] = refalrts::char_left( 'e', context[10], context[11] );
      if( ! context[12] )
        continue;
      // closed e.Index#1 as range 10
      //DEBUG: e.Index#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsTerm/4 (/5 # TkVariable/9 'e'/12 e.Index#1/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
      refalrts::reinit_ident( context[1], ident_False.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsTerm/4 (/5 # CallBrackets/9 e.Nested#1/7 )/6 >/1
    if( ! refalrts::ident_term(  ident_CallBrackets.ref(vm), context[9] ) )
      continue;
    // closed e.Nested#1 as range 7
    //DEBUG: e.Nested#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsTerm/4 (/5 # CallBrackets/9 e.Nested#1/7 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident( context[1], ident_False.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsTerm/4 t.OtherTerm#1/5 >/1
  //DEBUG: t.OtherTerm#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsTerm/4 t.OtherTerm#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
  refalrts::reinit_ident( context[1], ident_True.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsTerm("IsTerm", 1054970354U, 4139937217U, func_IsTerm);


static refalrts::FnResult func_IsSymbol(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & IsSymbol/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsSymbol/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IsSymbol/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & IsSymbol/4 (/5 # TkIdentifier/9 e.Name#1/7 )/6 >/1
      if( ! refalrts::ident_term(  ident_TkIdentifier.ref(vm), context[9] ) )
        continue;
      // closed e.Name#1 as range 7
      //DEBUG: e.Name#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsSymbol/4 (/5 # TkIdentifier/9 e.Name#1/7 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident( context[1], ident_True.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsSymbol/4 (/5 s.new#4/9 t.new#5/12 e.new#6/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
    if( ! context[13] )
      continue;
    // closed e.new#6 as range 10
    do {
      // </0 & IsSymbol/4 (/5 # TkName/9 t.SrcPos#1/12 e.Name#1/10 )/6 >/1
      if( ! refalrts::ident_term(  ident_TkName.ref(vm), context[9] ) )
        continue;
      // closed e.Name#1 as range 10
      //DEBUG: t.SrcPos#1: 12
      //DEBUG: e.Name#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsSymbol/4 (/5 # TkName/9 t.SrcPos#1/12 e.Name#1/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident( context[1], ident_True.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsSymbol/4 (/5 s.new#7/9 s.new#8/12 )/6 >/1
    if( ! refalrts::svar_term( context[12], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    do {
      // </0 & IsSymbol/4 (/5 # TkNumber/9 s.Number#1/12 )/6 >/1
      if( ! refalrts::ident_term(  ident_TkNumber.ref(vm), context[9] ) )
        continue;
      //DEBUG: s.Number#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsSymbol/4 (/5 # TkNumber/9 s.Number#1/12 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident( context[1], ident_True.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & IsSymbol/4 (/5 # TkChar/9 s.HChar#1/12 )/6 >/1
    if( ! refalrts::ident_term(  ident_TkChar.ref(vm), context[9] ) )
      continue;
    //DEBUG: s.HChar#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & IsSymbol/4 (/5 # TkChar/9 s.HChar#1/12 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident( context[1], ident_True.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsSymbol/4 t.OtherTerm#1/5 >/1
  //DEBUG: t.OtherTerm#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsSymbol/4 t.OtherTerm#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident( context[1], ident_False.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsSymbol("IsSymbol", 1054970354U, 4139937217U, func_IsSymbol);


//End of file
