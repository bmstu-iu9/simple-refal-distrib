// This file automatically generated from 'HighLevelRASL-GenSubst-Simple.ref'
// Don't edit! Edit 'HighLevelRASL-GenSubst-Simple.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_194005290_338052078

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
  efunc_MapAccum = 19,
  efunc_Fetch = 20,
  efunc_Pipe = 21,
  efunc_gen_Pipe_S2L1 = 22,
  efunc_gen_Pipe_S3L1 = 23,
  efunc_DoGenSubst = 24,
  efunc_MakeSavers = 25,
  efunc_Inc2 = 26,
  efunc_gen_DoGenSubst_S36A3 = 27,
  efunc_IncVarOffset = 28,
  efunc_PrintVar = 29,
  efunc_TextFromExpr = 30,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_TkVariable = 6,
  ident_E = 7,
  ident_Junk = 8,
  ident_CmdOpenedE = 9,
  ident_AlgLeft = 10,
  ident_T = 11,
  ident_Symbol = 12,
  ident_Char = 13,
  ident_NoOffset = 14,
  ident_CmdChar = 15,
  ident_AlgTerm = 16,
  ident_Name = 17,
  ident_CmdName = 18,
  ident_Identifier = 19,
  ident_CmdIdent = 20,
  ident_Number = 21,
  ident_CmdNumber = 22,
  ident_Brackets = 23,
  ident_TkOpenBracket = 24,
  ident_TkCloseBracket = 25,
  ident_CmdBrackets = 26,
  ident_ADTm_Brackets = 27,
  ident_TkOpenADT = 28,
  ident_TkCloseADT = 29,
  ident_CmdADT = 30,
  ident_CmdRepeated = 31,
  ident_CmdVar = 32,
  ident_S = 33,
  ident_AlgRight = 34,
  ident_CmdEmpty = 35,
  ident_CmdComment = 36,
  ident_Offset = 37,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 194005290U, 338052078U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 338052078UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 194005290UL);
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
  refalrts::reinit_number(context[5], 194005290UL);
  refalrts::reinit_number(context[7], 338052078UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 194005290U, 338052078U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 194005290U, 338052078U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 194005290U, 338052078U, func_Residue);


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

static refalrts::NativeReference nat_ref_Apply("Apply", 194005290U, 338052078U, func_Apply);


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

static refalrts::NativeReference nat_ref_Map("Map", 194005290U, 338052078U, func_Map);


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

static refalrts::NativeReference nat_ref_Reduce("Reduce", 194005290U, 338052078U, func_Reduce);


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

static refalrts::NativeReference nat_ref_Fetch("Fetch", 194005290U, 338052078U, func_Fetch);


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

static refalrts::NativeReference nat_ref_MapAccum("MapAccum", 194005290U, 338052078U, func_MapAccum);


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

static refalrts::NativeReference nat_ref_DoMapAccum("DoMapAccum", 194005290U, 338052078U, func_DoMapAccum);


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

static refalrts::NativeReference nat_ref_DoMapAccumm_Aux("DoMapAccum-Aux", 194005290U, 338052078U, func_DoMapAccumm_Aux);


static refalrts::FnResult func_MapReduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & MapReduce/4 t.Fn#1/5 t.Acc#1/7 e.Tail#1/2 >/1
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
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapAccum/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_MapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MapReduce("MapReduce", 194005290U, 338052078U, func_MapReduce);


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

static refalrts::NativeReference nat_ref_UnBracket("UnBracket", 194005290U, 338052078U, func_UnBracket);


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

static refalrts::NativeReference nat_ref_DelAccumulator("DelAccumulator", 194005290U, 338052078U, func_DelAccumulator);


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

static refalrts::NativeReference nat_ref_Inc("Inc", 194005290U, 338052078U, func_Inc);


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

static refalrts::NativeReference nat_ref_Dec("Dec", 194005290U, 338052078U, func_Dec);


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

static refalrts::NativeReference nat_ref_gen_Pipe_S2L1("Pipe$2\\1", 194005290U, 338052078U, func_gen_Pipe_S2L1);


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

static refalrts::NativeReference nat_ref_gen_Pipe_S3L1("Pipe$3\\1", 194005290U, 338052078U, func_gen_Pipe_S3L1);


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

static refalrts::NativeReference nat_ref_Pipe("Pipe", 194005290U, 338052078U, func_Pipe);


static refalrts::FnResult func_Seq(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & Seq/4 e.Funcs#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Funcs#1 as range 2
  //DEBUG: e.Funcs#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Pipe/4 AsIs: e.Funcs#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Pipe]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Seq("Seq", 194005290U, 338052078U, func_Seq);


static refalrts::FnResult func_GenSubstm_Simple(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & GenSubst-Simple/4 s.ContextTop#1/13 e.Substitutes#1/2 (/11 e.Vars#1/9 )/12 (/7 e.PrefixCommands#1/5 )/8 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Vars#1 as range 9
  // closed e.PrefixCommands#1 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitutes#1 as range 2
  //DEBUG: e.Vars#1: 9
  //DEBUG: e.PrefixCommands#1: 5
  //DEBUG: s.ContextTop#1: 13
  //DEBUG: e.Substitutes#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 AsIs: s.ContextTop#1/13 AsIs: e.Substitutes#1/2 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 AsIs: e.PrefixCommands#1/5 AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenSubstm_Simple("GenSubst-Simple", 0U, 0U, func_GenSubstm_Simple);


static refalrts::FnResult func_gen_DoGenSubst_S36A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & DoGenSubst$36=3/4 (/7 e.Vars#1/5 )/8 (/11 e.Index#1/9 )/12 s.VarOffset#2/13 (/16 e.Commands#1/14 )/17 t.CmdOpenedE#3/18 s.ContextOffset#4/20 (/23 e.CmdSaves#4/21 )/24 e.SubstitutesAnsJunks#4/2 >/1
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
  // closed e.Vars#1 as range 5
  // closed e.Index#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Commands#1 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.CmdSaves#4 as range 21
  // closed e.SubstitutesAnsJunks#4 as range 2
  //DEBUG: e.Vars#1: 5
  //DEBUG: e.Index#1: 9
  //DEBUG: s.VarOffset#2: 13
  //DEBUG: e.Commands#1: 14
  //DEBUG: t.CmdOpenedE#3: 18
  //DEBUG: s.ContextOffset#4: 20
  //DEBUG: e.CmdSaves#4: 21
  //DEBUG: e.SubstitutesAnsJunks#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextOffset#4/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 HalfReuse: s.ContextOffset4 #20/7 } Tile{ AsIs: e.SubstitutesAnsJunks#4/2 } (/25 Tile{ AsIs: e.Vars#1/5 } Tile{ AsIs: (/23 } Tile{ HalfReuse: 'e'/8 AsIs: (/11 AsIs: e.Index#1/9 AsIs: )/12 AsIs: s.VarOffset#2/13 HalfReuse: )/16 } Tile{ AsIs: )/24 } (/26 Tile{ AsIs: e.Commands#1/14 } Tile{ AsIs: t.CmdOpenedE#3/18 } Tile{ AsIs: e.CmdSaves#4/21 } Tile{ AsIs: )/17 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
  refalrts::reinit_svar( context[7], context[20] );
  refalrts::reinit_char(context[8], 'e');
  refalrts::reinit_close_bracket(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[26], context[17] );
  refalrts::link_brackets( context[25], context[24] );
  refalrts::link_brackets( context[23], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[8], context[16] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoGenSubst_S36A3("DoGenSubst$36=3", 194005290U, 338052078U, func_gen_DoGenSubst_S36A3);


static refalrts::FnResult func_gen_DoGenSubst_S36A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & DoGenSubst$36=2/4 (/7 e.Vars#1/5 )/8 (/11 e.Index#1/9 )/12 s.VarOffset#2/13 (/16 e.Commands#1/14 )/17 s.ContextOffset#1/18 (/21 e.Junk#1/19 )/22 s.Num#1/23 (/26 e.Range#1/24 )/27 (/30 e.SubstitutesAnsJunks#1/28 )/31 t.CmdOpenedE#3/32 >/1
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
  // closed e.Vars#1 as range 5
  // closed e.Index#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Commands#1 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.Junk#1 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  context[28] = 0;
  context[29] = 0;
  context[30] = refalrts::brackets_left( context[28], context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[30], context[31]);
  // closed e.Range#1 as range 24
  // closed e.SubstitutesAnsJunks#1 as range 28
  context[33] = refalrts::tvar_left( context[32], context[2], context[3] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Vars#1: 5
  //DEBUG: e.Index#1: 9
  //DEBUG: s.VarOffset#2: 13
  //DEBUG: e.Commands#1: 14
  //DEBUG: s.ContextOffset#1: 18
  //DEBUG: e.Junk#1: 19
  //DEBUG: s.Num#1: 23
  //DEBUG: e.Range#1: 24
  //DEBUG: e.SubstitutesAnsJunks#1: 28
  //DEBUG: t.CmdOpenedE#3: 32

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst$36=3/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Index#1/9 AsIs: )/12 AsIs: s.VarOffset#2/13 AsIs: (/16 AsIs: e.Commands#1/14 AsIs: )/17 } Tile{ AsIs: t.CmdOpenedE#3/32 } </34 & MakeSavers/35 </36 & Inc2/37 Tile{ AsIs: s.ContextOffset#1/18 } >/38 Tile{ AsIs: (/30 } Tile{ HalfReuse: # Junk/21 AsIs: e.Junk#1/19 HalfReuse: (/22 } # TkVariable/39 'e'/40 e.Index#1/9/41 s.ContextOffset#1/18/43 Tile{ AsIs: )/31 } )/44 (/45 # E/46 Tile{ HalfReuse: s.Num1 #23/26 AsIs: e.Range#1/24 AsIs: )/27 } Tile{ AsIs: e.SubstitutesAnsJunks#1/28 } >/47 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_name(vm, context[35], functions[efunc_MakeSavers]);
  refalrts::alloc_open_call(vm, context[36]);
  refalrts::alloc_name(vm, context[37], functions[efunc_Inc2]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[40], 'e');
  refalrts::copy_evar(vm, context[41], context[42], context[9], context[10]);
  refalrts::copy_stvar(vm, context[43], context[18]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_open_bracket(vm, context[45]);
  refalrts::alloc_ident(vm, context[46], identifiers[ident_E]);
  refalrts::alloc_close_call(vm, context[47]);
  refalrts::update_name(context[4], functions[efunc_gen_DoGenSubst_S36A3]);
  refalrts::reinit_ident(context[21], identifiers[ident_Junk]);
  refalrts::reinit_open_bracket(context[22]);
  refalrts::reinit_svar( context[26], context[23] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[47] );
  refalrts::push_stack( vm, context[34] );
  refalrts::link_brackets( context[45], context[27] );
  refalrts::link_brackets( context[30], context[44] );
  refalrts::link_brackets( context[22], context[31] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[36] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[47], context[47] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[44], context[46] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[39], context[43] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[34], context[37] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  refalrts::splice_to_freelist_open( vm, context[17], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoGenSubst_S36A2("DoGenSubst$36=2", 194005290U, 338052078U, func_gen_DoGenSubst_S36A2);


static refalrts::FnResult func_gen_DoGenSubst_S36A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
  // </0 & DoGenSubst$36=1/4 (/7 e.Vars#1/5 )/8 (/11 e.Index#1/9 )/12 (/15 e.Commands#1/13 )/16 s.ContextOffset#1/17 (/20 e.Junk#1/18 )/21 s.Num#1/22 (/25 e.Range#1/23 )/26 (/29 e.SubstitutesAnsJunks#1/27 )/30 s.VarOffset#2/31 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Vars#1 as range 5
  // closed e.Index#1 as range 9
  // closed e.Commands#1 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.Junk#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  context[27] = 0;
  context[28] = 0;
  context[29] = refalrts::brackets_left( context[27], context[28], context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[29], context[30]);
  // closed e.Range#1 as range 23
  // closed e.SubstitutesAnsJunks#1 as range 27
  if( ! refalrts::svar_left( context[31], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Vars#1: 5
  //DEBUG: e.Index#1: 9
  //DEBUG: e.Commands#1: 13
  //DEBUG: s.ContextOffset#1: 17
  //DEBUG: e.Junk#1: 18
  //DEBUG: s.Num#1: 22
  //DEBUG: e.Range#1: 23
  //DEBUG: e.SubstitutesAnsJunks#1: 27
  //DEBUG: s.VarOffset#2: 31

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst$36=3/4 AsIs: (/7 AsIs: e.Vars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Index#1/9 AsIs: )/12 HalfReuse: s.VarOffset2 #31/15 } Tile{ AsIs: (/29 } Tile{ AsIs: e.Commands#1/13 } )/32 (/33 # CmdOpenedE/34 Tile{ HalfReuse: # AlgLeft/21 AsIs: s.Num#1/22 } Tile{ AsIs: s.VarOffset#2/31 } Tile{ AsIs: )/30 } </35 & MakeSavers/36 </37 Tile{ HalfReuse: & Inc2/16 AsIs: s.ContextOffset#1/17 HalfReuse: >/20 } (/38 # Junk/39 Tile{ AsIs: e.Junk#1/18 } (/40 # TkVariable/41 'e'/42 e.Index#1/9/43 s.ContextOffset#1/17/45 )/46 )/47 (/48 # E/49 Tile{ HalfReuse: s.Num1 #22/25 AsIs: e.Range#1/23 AsIs: )/26 } Tile{ AsIs: e.SubstitutesAnsJunks#1/27 } >/50 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_ident(vm, context[34], identifiers[ident_CmdOpenedE]);
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_MakeSavers]);
  refalrts::alloc_open_call(vm, context[37]);
  refalrts::alloc_open_bracket(vm, context[38]);
  refalrts::alloc_ident(vm, context[39], identifiers[ident_Junk]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_ident(vm, context[41], identifiers[ident_TkVariable]);
  refalrts::alloc_char(vm, context[42], 'e');
  refalrts::copy_evar(vm, context[43], context[44], context[9], context[10]);
  refalrts::copy_stvar(vm, context[45], context[17]);
  refalrts::alloc_close_bracket(vm, context[46]);
  refalrts::alloc_close_bracket(vm, context[47]);
  refalrts::alloc_open_bracket(vm, context[48]);
  refalrts::alloc_ident(vm, context[49], identifiers[ident_E]);
  refalrts::alloc_close_call(vm, context[50]);
  refalrts::update_name(context[4], functions[efunc_gen_DoGenSubst_S36A3]);
  refalrts::reinit_svar( context[15], context[31] );
  refalrts::reinit_ident(context[21], identifiers[ident_AlgLeft]);
  refalrts::reinit_name(context[16], functions[efunc_Inc2]);
  refalrts::reinit_close_call(context[20]);
  refalrts::reinit_svar( context[25], context[22] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[50] );
  refalrts::push_stack( vm, context[35] );
  refalrts::link_brackets( context[48], context[26] );
  refalrts::link_brackets( context[38], context[47] );
  refalrts::link_brackets( context[40], context[46] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[37] );
  refalrts::link_brackets( context[33], context[30] );
  refalrts::link_brackets( context[29], context[32] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[50], context[50] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[40], context[49] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoGenSubst_S36A1("DoGenSubst$36=1", 194005290U, 338052078U, func_gen_DoGenSubst_S36A1);


static refalrts::FnResult func_DoGenSubst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 73 elems
  refalrts::Iter context[73];
  refalrts::zeros( context, 73 );
  // </0 & DoGenSubst/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoGenSubst/4 s.new#1/13 e.new#2/2 (/11 e.new#3/9 )/12 (/7 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#3 as range 9
  // closed e.new#4 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # T/33 s.Num#1/45 (/41 # Symbol/43 # Char/44 s.Char#1/46 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_T], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_Symbol], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::ident_left( identifiers[ident_Char], context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::svar_left( context[46], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45
      //DEBUG: s.Char#1: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Char#1/46 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 } Tile{ HalfReuse: # Char/42 HalfReuse: s.Char1 #46/32 HalfReuse: # NoOffset/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/33 AsIs: s.Num#1/45 HalfReuse: s.Char1 #46/41 HalfReuse: )/43 HalfReuse: )/44 } >/47 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[42], identifiers[ident_Char]);
      refalrts::reinit_svar( context[32], context[46] );
      refalrts::reinit_ident(context[36], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdChar]);
      refalrts::update_ident(context[33], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[41], context[46] );
      refalrts::reinit_close_bracket(context[43]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[44] );
      refalrts::link_brackets( context[8], context[43] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[47] );
      res = refalrts::splice_evar( res, context[33], context[44] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      refalrts::splice_to_freelist_open( vm, context[31], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # T/33 s.Num#1/45 (/41 # Symbol/43 # Name/44 e.Name#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_T], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_Symbol], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::ident_left( identifiers[ident_Name], context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Name#1 as range 39
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Name#1: 39
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num#1/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Name/33 } e.Name#1/39/46 Tile{ HalfReuse: # NoOffset/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ Reuse: # AlgTerm/43 HalfReuse: s.Num1 #45/44 AsIs: e.Name#1/39 AsIs: )/42 AsIs: )/32 } Tile{ HalfReuse: >/41 } Tile{ ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Name]);
      refalrts::reinit_ident(context[36], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdName]);
      refalrts::update_ident(context[43], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[44], context[45] );
      refalrts::reinit_close_call(context[41]);
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[32] );
      refalrts::link_brackets( context[8], context[42] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[43], context[32] );
      res = refalrts::splice_evar( res, context[36], context[1] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # T/33 s.Num#1/45 (/41 # Symbol/43 # Identifier/44 e.Ident#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_T], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_Symbol], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::ident_left( identifiers[ident_Identifier], context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Ident#1 as range 39
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Ident#1: 39
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num#1/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Identifier/33 } e.Ident#1/39/46 Tile{ HalfReuse: # NoOffset/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ Reuse: # AlgTerm/43 HalfReuse: s.Num1 #45/44 AsIs: e.Ident#1/39 AsIs: )/42 AsIs: )/32 } Tile{ HalfReuse: >/41 } Tile{ ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Identifier]);
      refalrts::reinit_ident(context[36], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdIdent]);
      refalrts::update_ident(context[43], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[44], context[45] );
      refalrts::reinit_close_call(context[41]);
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[32] );
      refalrts::link_brackets( context[8], context[42] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[43], context[32] );
      res = refalrts::splice_evar( res, context[36], context[1] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # T/33 s.Num#1/45 (/41 # Symbol/43 # Number/44 s.Value#1/46 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_T], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_Symbol], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::ident_left( identifiers[ident_Number], context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::svar_left( context[46], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45
      //DEBUG: s.Value#1: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Value#1/46 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 } Tile{ HalfReuse: # Number/42 HalfReuse: s.Value1 #46/32 HalfReuse: # NoOffset/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/33 AsIs: s.Num#1/45 HalfReuse: s.Value1 #46/41 HalfReuse: )/43 HalfReuse: )/44 } >/47 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[42], identifiers[ident_Number]);
      refalrts::reinit_svar( context[32], context[46] );
      refalrts::reinit_ident(context[36], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdNumber]);
      refalrts::update_ident(context[33], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[41], context[46] );
      refalrts::reinit_close_bracket(context[43]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[44] );
      refalrts::link_brackets( context[8], context[43] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[47] );
      res = refalrts::splice_evar( res, context[33], context[44] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      refalrts::splice_to_freelist_open( vm, context[31], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # T/33 s.Num#1/44 (/41 # Brackets/43 e.SubRange#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_T], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_Brackets], context[39], context[40] );
      if( ! context[43] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.SubRange#1 as range 39
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[44], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.SubRange#1: 39
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 44

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </45 & Inc2/46 Tile{ AsIs: s.ContextOffset#1/13 } >/47 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # TkOpenBracket/31 Reuse: # NoOffset/33 } )/48 )/49 Tile{ AsIs: (/41 Reuse: # E/43 } s.ContextOffset#1/13/50 Tile{ AsIs: e.SubRange#1/39 } )/51 (/52 # Junk/53 Tile{ HalfReuse: (/42 HalfReuse: # TkCloseBracket/32 HalfReuse: # NoOffset/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgTerm/54 Tile{ AsIs: s.Num#1/44 } s.ContextOffset#1/13/55 )/56 )/57 >/58 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[45]);
      refalrts::alloc_name(vm, context[46], functions[efunc_Inc2]);
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::copy_stvar(vm, context[50], context[13]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_Junk]);
      refalrts::alloc_ident(vm, context[54], identifiers[ident_AlgTerm]);
      refalrts::copy_stvar(vm, context[55], context[13]);
      refalrts::alloc_close_bracket(vm, context[56]);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::alloc_close_call(vm, context[58]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkOpenBracket]);
      refalrts::update_ident(context[33], identifiers[ident_NoOffset]);
      refalrts::update_ident(context[43], identifiers[ident_E]);
      refalrts::reinit_open_bracket(context[42]);
      refalrts::reinit_ident(context[32], identifiers[ident_TkCloseBracket]);
      refalrts::reinit_ident(context[36], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdBrackets]);
      refalrts::push_stack( vm, context[58] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[57] );
      refalrts::link_brackets( context[8], context[56] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[52], context[37] );
      refalrts::link_brackets( context[42], context[38] );
      refalrts::link_brackets( context[41], context[51] );
      refalrts::link_brackets( context[26], context[49] );
      refalrts::link_brackets( context[27], context[48] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[45] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[55], context[58] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[54], context[54] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      res = refalrts::splice_evar( res, context[51], context[53] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[50], context[50] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[47], context[47] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # T/33 s.Num#1/48 (/41 # ADT-Brackets/43 (/46 e.Name#1/44 )/47 e.SubRange#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_T], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = 0;
      context[45] = 0;
      context[46] = refalrts::brackets_left( context[44], context[45], context[39], context[40] );
      if( ! context[46] )
        continue;
      refalrts::bracket_pointers(context[46], context[47]);
      // closed e.Junk1#1 as range 24
      // closed e.Name#1 as range 44
      // closed e.SubRange#1 as range 39
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[48], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Name#1: 44
      //DEBUG: e.SubRange#1: 39
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 48

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </49 & Inc2/50 Tile{ AsIs: s.ContextOffset#1/13 } >/51 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # TkOpenADT/31 Reuse: # NoOffset/33 } )/52 Tile{ AsIs: (/41 Reuse: # Symbol/43 HalfReuse: # Name/46 AsIs: e.Name#1/44 HalfReuse: # NoOffset/47 } )/53 )/54 (/55 # E/56 s.ContextOffset#1/13/57 Tile{ AsIs: e.SubRange#1/39 } )/58 (/59 # Junk/60 Tile{ HalfReuse: (/42 HalfReuse: # TkCloseADT/32 HalfReuse: # NoOffset/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdADT/1 } # AlgTerm/61 Tile{ AsIs: s.Num#1/48 } s.ContextOffset#1/13/62 e.Name#1/44/63 )/65 )/66 >/67 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_Inc2]);
      refalrts::alloc_close_call(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_close_bracket(vm, context[54]);
      refalrts::alloc_open_bracket(vm, context[55]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_E]);
      refalrts::copy_stvar(vm, context[57], context[13]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_open_bracket(vm, context[59]);
      refalrts::alloc_ident(vm, context[60], identifiers[ident_Junk]);
      refalrts::alloc_ident(vm, context[61], identifiers[ident_AlgTerm]);
      refalrts::copy_stvar(vm, context[62], context[13]);
      refalrts::copy_evar(vm, context[63], context[64], context[44], context[45]);
      refalrts::alloc_close_bracket(vm, context[65]);
      refalrts::alloc_close_bracket(vm, context[66]);
      refalrts::alloc_close_call(vm, context[67]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkOpenADT]);
      refalrts::update_ident(context[33], identifiers[ident_NoOffset]);
      refalrts::update_ident(context[43], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[46], identifiers[ident_Name]);
      refalrts::reinit_ident(context[47], identifiers[ident_NoOffset]);
      refalrts::reinit_open_bracket(context[42]);
      refalrts::reinit_ident(context[32], identifiers[ident_TkCloseADT]);
      refalrts::reinit_ident(context[36], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdADT]);
      refalrts::push_stack( vm, context[67] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[66] );
      refalrts::link_brackets( context[8], context[65] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[59], context[37] );
      refalrts::link_brackets( context[42], context[38] );
      refalrts::link_brackets( context[55], context[58] );
      refalrts::link_brackets( context[26], context[54] );
      refalrts::link_brackets( context[41], context[53] );
      refalrts::link_brackets( context[27], context[52] );
      refalrts::push_stack( vm, context[51] );
      refalrts::push_stack( vm, context[49] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[62], context[67] );
      res = refalrts::splice_evar( res, context[48], context[48] );
      res = refalrts::splice_evar( res, context[61], context[61] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      res = refalrts::splice_evar( res, context[58], context[60] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[53], context[57] );
      res = refalrts::splice_evar( res, context[41], context[47] );
      res = refalrts::splice_evar( res, context[52], context[52] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[51], context[51] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/28 # Junk/30 e.Junk1#1/26 )/29 (/33 # T/35 s.Num#1/46 (/43 # TkVariable/45 s.Mode#1/47 e.Index#1/41 )/44 )/34 (/38 # Junk/40 e.Junk2#1/36 )/39 e.Substs-E#1/22 (/11 e.Vars-B#1/48 (/54 s.Mode#1/56 (/59 e.Index#1/61 )/60 e.Offsets#1/52 s.SampleOffset#1/63 )/55 e.Vars-E#1/50 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[22], context[23] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left( identifiers[ident_Junk], context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[22], context[23] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left( identifiers[ident_T], context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[22], context[23] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      context[40] = refalrts::ident_left( identifiers[ident_Junk], context[36], context[37] );
      if( ! context[40] )
        continue;
      context[41] = 0;
      context[42] = 0;
      context[43] = refalrts::brackets_right( context[41], context[42], context[31], context[32] );
      if( ! context[43] )
        continue;
      refalrts::bracket_pointers(context[43], context[44]);
      context[45] = refalrts::ident_left( identifiers[ident_TkVariable], context[41], context[42] );
      if( ! context[45] )
        continue;
      // closed e.Junk1#1 as range 26
      // closed e.Junk2#1 as range 36
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[46], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      if( ! refalrts::svar_left( context[47], context[41], context[42] ) )
        continue;
      // closed e.Index#1 as range 41
      context[48] = 0;
      context[49] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[50] = context[24];
        context[51] = context[25];
        context[52] = 0;
        context[53] = 0;
        context[54] = refalrts::brackets_left( context[52], context[53], context[50], context[51] );
        if( ! context[54] )
          continue;
        refalrts::bracket_pointers(context[54], context[55]);
        if( ! refalrts::repeated_stvar_left( vm, context[56], context[47], context[52], context[53] ) )
          continue;
        context[57] = 0;
        context[58] = 0;
        context[59] = refalrts::brackets_left( context[57], context[58], context[52], context[53] );
        if( ! context[59] )
          continue;
        refalrts::bracket_pointers(context[59], context[60]);
        if( ! refalrts::repeated_evar_left( vm, context[61], context[62], context[41], context[42], context[57], context[58] ) )
          continue;
        if( ! refalrts::empty_seq( context[57], context[58] ) )
          continue;
        // closed e.Vars-E#1 as range 50
        if( ! refalrts::svar_right( context[63], context[52], context[53] ) )
          continue;
        // closed e.Offsets#1 as range 52
        //DEBUG: s.ContextOffset#1: 13
        //DEBUG: e.Commands#1: 18
        //DEBUG: e.Substs-B#1: 20
        //DEBUG: e.Junk1#1: 26
        //DEBUG: e.Junk2#1: 36
        //DEBUG: e.Substs-E#1: 22
        //DEBUG: s.Num#1: 46
        //DEBUG: s.Mode#1: 47
        //DEBUG: e.Index#1: 41
        //DEBUG: e.Vars-B#1: 48
        //DEBUG: e.Vars-E#1: 50
        //DEBUG: s.SampleOffset#1: 63
        //DEBUG: e.Offsets#1: 52

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/28 AsIs: # Junk/30 AsIs: e.Junk1#1/26 HalfReuse: (/29 HalfReuse: # TkVariable/33 HalfReuse: s.Mode1 #56/35 } Tile{ AsIs: e.Index#1/41 } Tile{ HalfReuse: s.Num1 #46/38 HalfReuse: )/40 AsIs: e.Junk2#1/36 AsIs: )/39 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars-B#1/48 AsIs: (/54 AsIs: s.Mode#1/56 AsIs: (/59 AsIs: e.Index#1/61 AsIs: )/60 AsIs: e.Offsets#1/52 AsIs: s.SampleOffset#1/63 HalfReuse: s.Num1 #46/55 } )/64 Tile{ AsIs: e.Vars-E#1/50 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } Tile{ HalfReuse: # AlgTerm/43 HalfReuse: s.Num1 #46/45 AsIs: s.Mode#1/47 } Tile{ AsIs: s.Num#1/46 } s.SampleOffset#1/63/65 Tile{ AsIs: )/44 AsIs: )/34 } >/66 Tile{ ]] }
        refalrts::alloc_close_bracket(vm, context[64]);
        refalrts::copy_stvar(vm, context[65], context[63]);
        refalrts::alloc_close_call(vm, context[66]);
        refalrts::reinit_open_bracket(context[29]);
        refalrts::reinit_ident(context[33], identifiers[ident_TkVariable]);
        refalrts::reinit_svar( context[35], context[56] );
        refalrts::reinit_svar( context[38], context[46] );
        refalrts::reinit_close_bracket(context[40]);
        refalrts::reinit_svar( context[55], context[46] );
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_ident(context[1], identifiers[ident_CmdRepeated]);
        refalrts::reinit_ident(context[43], identifiers[ident_AlgTerm]);
        refalrts::reinit_svar( context[45], context[46] );
        refalrts::push_stack( vm, context[66] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[34] );
        refalrts::link_brackets( context[8], context[44] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[54], context[64] );
        refalrts::link_brackets( context[59], context[60] );
        refalrts::link_brackets( context[28], context[39] );
        refalrts::link_brackets( context[29], context[40] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[66], context[66] );
        res = refalrts::splice_evar( res, context[44], context[34] );
        res = refalrts::splice_evar( res, context[65], context[65] );
        res = refalrts::splice_evar( res, context[46], context[46] );
        res = refalrts::splice_evar( res, context[43], context[47] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_evar( res, context[64], context[64] );
        res = refalrts::splice_evar( res, context[38], context[55] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[48], context[49], context[24], context[25] ) );
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # T/33 s.Num#1/45 (/41 # TkVariable/43 't'/44 e.Index#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_T], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_TkVariable], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::char_left( 't', context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Index#1 as range 39
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Index#1: 39
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num#1/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # TkVariable/31 HalfReuse: 't'/33 } e.Index#1/39/46 Tile{ HalfReuse: s.Num1 #45/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 HalfReuse: (/12 HalfReuse: 't'/7 } Tile{ HalfReuse: (/44 AsIs: e.Index#1/39 AsIs: )/42 HalfReuse: s.Num1 #45/32 } Tile{ HalfReuse: )/43 } )/48 Tile{ AsIs: (/41 } Tile{ AsIs: e.Commands#1/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkVariable]);
      refalrts::reinit_char(context[33], 't');
      refalrts::reinit_svar( context[36], context[45] );
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_char(context[7], 't');
      refalrts::reinit_open_bracket(context[44]);
      refalrts::reinit_svar( context[32], context[45] );
      refalrts::reinit_close_bracket(context[43]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[41], context[8] );
      refalrts::link_brackets( context[11], context[48] );
      refalrts::link_brackets( context[12], context[43] );
      refalrts::link_brackets( context[44], context[42] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[48], context[48] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[44], context[32] );
      res = refalrts::splice_evar( res, context[36], context[7] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # T/33 s.Num#1/45 (/41 # TkVariable/43 's'/44 e.Index#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_T], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_TkVariable], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::char_left( 's', context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Index#1 as range 39
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Index#1: 39
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # TkVariable/31 HalfReuse: 's'/33 } e.Index#1/39/46 Tile{ HalfReuse: s.Num1 #45/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/44 AsIs: e.Index#1/39 AsIs: )/42 HalfReuse: s.Num1 #45/32 } )/48 )/49 (/50 Tile{ AsIs: e.Commands#1/18 } Tile{ AsIs: (/41 Reuse: # CmdVar/43 } # AlgTerm/51 Tile{ AsIs: s.Num#1/45 } 's'/52 s.Num#1/45/53 )/54 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_ident(vm, context[51], identifiers[ident_AlgTerm]);
      refalrts::alloc_char(vm, context[52], 's');
      refalrts::copy_stvar(vm, context[53], context[45]);
      refalrts::alloc_close_bracket(vm, context[54]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkVariable]);
      refalrts::reinit_char(context[33], 's');
      refalrts::reinit_svar( context[36], context[45] );
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_char(context[7], 's');
      refalrts::reinit_open_bracket(context[44]);
      refalrts::reinit_svar( context[32], context[45] );
      refalrts::update_ident(context[43], identifiers[ident_CmdVar]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[50], context[8] );
      refalrts::link_brackets( context[41], context[54] );
      refalrts::link_brackets( context[11], context[49] );
      refalrts::link_brackets( context[12], context[48] );
      refalrts::link_brackets( context[44], context[42] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[52], context[54] );
      res = refalrts::splice_evar( res, context[45], context[45] );
      res = refalrts::splice_evar( res, context[51], context[51] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[48], context[50] );
      res = refalrts::splice_evar( res, context[44], context[32] );
      res = refalrts::splice_evar( res, context[36], context[7] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # S/33 s.Num#1/45 (/41 # Symbol/43 # Char/44 s.Char#1/46 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_S], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_Symbol], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::ident_left( identifiers[ident_Char], context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::svar_left( context[46], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45
      //DEBUG: s.Char#1: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Char#1/46 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 } Tile{ HalfReuse: # Char/42 HalfReuse: s.Char1 #46/32 HalfReuse: # NoOffset/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/33 AsIs: s.Num#1/45 HalfReuse: s.Char1 #46/41 HalfReuse: )/43 HalfReuse: )/44 } >/47 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[42], identifiers[ident_Char]);
      refalrts::reinit_svar( context[32], context[46] );
      refalrts::reinit_ident(context[36], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdChar]);
      refalrts::update_ident(context[33], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[41], context[46] );
      refalrts::reinit_close_bracket(context[43]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[44] );
      refalrts::link_brackets( context[8], context[43] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[47] );
      res = refalrts::splice_evar( res, context[33], context[44] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      refalrts::splice_to_freelist_open( vm, context[31], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # S/33 s.Num#1/45 (/41 # Symbol/43 # Name/44 e.Name#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_S], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_Symbol], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::ident_left( identifiers[ident_Name], context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Name#1 as range 39
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Name#1: 39
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num#1/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Name/33 } e.Name#1/39/46 Tile{ HalfReuse: # NoOffset/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ Reuse: # AlgTerm/43 HalfReuse: s.Num1 #45/44 AsIs: e.Name#1/39 AsIs: )/42 AsIs: )/32 } Tile{ HalfReuse: >/41 } Tile{ ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Name]);
      refalrts::reinit_ident(context[36], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdName]);
      refalrts::update_ident(context[43], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[44], context[45] );
      refalrts::reinit_close_call(context[41]);
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[32] );
      refalrts::link_brackets( context[8], context[42] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[43], context[32] );
      res = refalrts::splice_evar( res, context[36], context[1] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # S/33 s.Num#1/45 (/41 # Symbol/43 # Identifier/44 e.Ident#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_S], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_Symbol], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::ident_left( identifiers[ident_Identifier], context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Ident#1 as range 39
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Ident#1: 39
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num#1/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Identifier/33 } e.Ident#1/39/46 Tile{ HalfReuse: # NoOffset/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ Reuse: # AlgTerm/43 HalfReuse: s.Num1 #45/44 AsIs: e.Ident#1/39 AsIs: )/42 AsIs: )/32 } Tile{ HalfReuse: >/41 } Tile{ ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Identifier]);
      refalrts::reinit_ident(context[36], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdIdent]);
      refalrts::update_ident(context[43], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[44], context[45] );
      refalrts::reinit_close_call(context[41]);
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[32] );
      refalrts::link_brackets( context[8], context[42] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[43], context[32] );
      res = refalrts::splice_evar( res, context[36], context[1] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # S/33 s.Num#1/45 (/41 # Symbol/43 # Number/44 s.Value#1/46 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_S], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_Symbol], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::ident_left( identifiers[ident_Number], context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::svar_left( context[46], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45
      //DEBUG: s.Value#1: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Value#1/46 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 } Tile{ HalfReuse: # Number/42 HalfReuse: s.Value1 #46/32 HalfReuse: # NoOffset/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/33 AsIs: s.Num#1/45 HalfReuse: s.Value1 #46/41 HalfReuse: )/43 HalfReuse: )/44 } >/47 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[42], identifiers[ident_Number]);
      refalrts::reinit_svar( context[32], context[46] );
      refalrts::reinit_ident(context[36], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdNumber]);
      refalrts::update_ident(context[33], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[41], context[46] );
      refalrts::reinit_close_bracket(context[43]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[44] );
      refalrts::link_brackets( context[8], context[43] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[47] );
      res = refalrts::splice_evar( res, context[33], context[44] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      refalrts::splice_to_freelist_open( vm, context[31], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/28 # Junk/30 e.Junk1#1/26 )/29 (/33 # S/35 s.Num#1/46 (/43 # TkVariable/45 s.Mode#1/47 e.Index#1/41 )/44 )/34 (/38 # Junk/40 e.Junk2#1/36 )/39 e.Substs-E#1/22 (/11 e.Vars-B#1/48 (/54 s.Mode#1/56 (/59 e.Index#1/61 )/60 e.Offsets#1/52 s.SampleOffset#1/63 )/55 e.Vars-E#1/50 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[22], context[23] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left( identifiers[ident_Junk], context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[22], context[23] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left( identifiers[ident_S], context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[22], context[23] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      context[40] = refalrts::ident_left( identifiers[ident_Junk], context[36], context[37] );
      if( ! context[40] )
        continue;
      context[41] = 0;
      context[42] = 0;
      context[43] = refalrts::brackets_right( context[41], context[42], context[31], context[32] );
      if( ! context[43] )
        continue;
      refalrts::bracket_pointers(context[43], context[44]);
      context[45] = refalrts::ident_left( identifiers[ident_TkVariable], context[41], context[42] );
      if( ! context[45] )
        continue;
      // closed e.Junk1#1 as range 26
      // closed e.Junk2#1 as range 36
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[46], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      if( ! refalrts::svar_left( context[47], context[41], context[42] ) )
        continue;
      // closed e.Index#1 as range 41
      context[48] = 0;
      context[49] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[50] = context[24];
        context[51] = context[25];
        context[52] = 0;
        context[53] = 0;
        context[54] = refalrts::brackets_left( context[52], context[53], context[50], context[51] );
        if( ! context[54] )
          continue;
        refalrts::bracket_pointers(context[54], context[55]);
        if( ! refalrts::repeated_stvar_left( vm, context[56], context[47], context[52], context[53] ) )
          continue;
        context[57] = 0;
        context[58] = 0;
        context[59] = refalrts::brackets_left( context[57], context[58], context[52], context[53] );
        if( ! context[59] )
          continue;
        refalrts::bracket_pointers(context[59], context[60]);
        if( ! refalrts::repeated_evar_left( vm, context[61], context[62], context[41], context[42], context[57], context[58] ) )
          continue;
        if( ! refalrts::empty_seq( context[57], context[58] ) )
          continue;
        // closed e.Vars-E#1 as range 50
        if( ! refalrts::svar_right( context[63], context[52], context[53] ) )
          continue;
        // closed e.Offsets#1 as range 52
        //DEBUG: s.ContextOffset#1: 13
        //DEBUG: e.Commands#1: 18
        //DEBUG: e.Substs-B#1: 20
        //DEBUG: e.Junk1#1: 26
        //DEBUG: e.Junk2#1: 36
        //DEBUG: e.Substs-E#1: 22
        //DEBUG: s.Num#1: 46
        //DEBUG: s.Mode#1: 47
        //DEBUG: e.Index#1: 41
        //DEBUG: e.Vars-B#1: 48
        //DEBUG: e.Vars-E#1: 50
        //DEBUG: s.SampleOffset#1: 63
        //DEBUG: e.Offsets#1: 52

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/28 AsIs: # Junk/30 AsIs: e.Junk1#1/26 HalfReuse: (/29 HalfReuse: # TkVariable/33 HalfReuse: s.Mode1 #56/35 } Tile{ AsIs: e.Index#1/41 } Tile{ HalfReuse: s.Num1 #46/38 HalfReuse: )/40 AsIs: e.Junk2#1/36 AsIs: )/39 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars-B#1/48 AsIs: (/54 AsIs: s.Mode#1/56 AsIs: (/59 AsIs: e.Index#1/61 AsIs: )/60 AsIs: e.Offsets#1/52 AsIs: s.SampleOffset#1/63 HalfReuse: s.Num1 #46/55 } )/64 Tile{ AsIs: e.Vars-E#1/50 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } Tile{ HalfReuse: # AlgTerm/43 HalfReuse: s.Num1 #46/45 AsIs: s.Mode#1/47 } Tile{ AsIs: s.Num#1/46 } s.SampleOffset#1/63/65 Tile{ AsIs: )/44 AsIs: )/34 } >/66 Tile{ ]] }
        refalrts::alloc_close_bracket(vm, context[64]);
        refalrts::copy_stvar(vm, context[65], context[63]);
        refalrts::alloc_close_call(vm, context[66]);
        refalrts::reinit_open_bracket(context[29]);
        refalrts::reinit_ident(context[33], identifiers[ident_TkVariable]);
        refalrts::reinit_svar( context[35], context[56] );
        refalrts::reinit_svar( context[38], context[46] );
        refalrts::reinit_close_bracket(context[40]);
        refalrts::reinit_svar( context[55], context[46] );
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_ident(context[1], identifiers[ident_CmdRepeated]);
        refalrts::reinit_ident(context[43], identifiers[ident_AlgTerm]);
        refalrts::reinit_svar( context[45], context[46] );
        refalrts::push_stack( vm, context[66] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[34] );
        refalrts::link_brackets( context[8], context[44] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[54], context[64] );
        refalrts::link_brackets( context[59], context[60] );
        refalrts::link_brackets( context[28], context[39] );
        refalrts::link_brackets( context[29], context[40] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[66], context[66] );
        res = refalrts::splice_evar( res, context[44], context[34] );
        res = refalrts::splice_evar( res, context[65], context[65] );
        res = refalrts::splice_evar( res, context[46], context[46] );
        res = refalrts::splice_evar( res, context[43], context[47] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_evar( res, context[64], context[64] );
        res = refalrts::splice_evar( res, context[38], context[55] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[48], context[49], context[24], context[25] ) );
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # S/33 s.Num#1/45 (/41 # TkVariable/43 's'/44 e.Index#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_S], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_TkVariable], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::char_left( 's', context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Index#1 as range 39
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Index#1: 39
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num#1/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # TkVariable/31 HalfReuse: 's'/33 } e.Index#1/39/46 Tile{ HalfReuse: s.Num1 #45/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/44 AsIs: e.Index#1/39 AsIs: )/42 HalfReuse: s.Num1 #45/32 } Tile{ HalfReuse: )/43 } )/48 Tile{ AsIs: (/41 } Tile{ AsIs: e.Commands#1/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkVariable]);
      refalrts::reinit_char(context[33], 's');
      refalrts::reinit_svar( context[36], context[45] );
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_char(context[7], 's');
      refalrts::reinit_open_bracket(context[44]);
      refalrts::reinit_svar( context[32], context[45] );
      refalrts::reinit_close_bracket(context[43]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[41], context[8] );
      refalrts::link_brackets( context[11], context[48] );
      refalrts::link_brackets( context[12], context[43] );
      refalrts::link_brackets( context[44], context[42] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[48], context[48] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[44], context[32] );
      res = refalrts::splice_evar( res, context[36], context[7] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk#1/24 )/27 (/31 # E/33 s.Num#1/34 (/37 # Symbol/39 # Char/40 s.Char#1/41 )/38 e.Range#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_E], context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.Junk#1 as range 24
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_Symbol], context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::ident_left( identifiers[ident_Char], context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Range#1 as range 29
      if( ! refalrts::svar_left( context[41], context[35], context[36] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk#1: 24
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 34
      //DEBUG: e.Range#1: 29
      //DEBUG: s.Char#1: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num#1/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk#1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Char/33 } s.Char#1/41/42 # NoOffset/43 )/44 )/45 Tile{ AsIs: (/37 } # E/46 Tile{ HalfReuse: s.Num1 #34/38 AsIs: e.Range#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgLeft/39 HalfReuse: s.Num1 #34/40 AsIs: s.Char#1/41 } )/47 )/48 >/49 Tile{ ]] }
      refalrts::copy_stvar(vm, context[42], context[41]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_NoOffset]);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_ident(vm, context[46], identifiers[ident_E]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_call(vm, context[49]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Char]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdChar]);
      refalrts::update_ident(context[39], identifiers[ident_AlgLeft]);
      refalrts::reinit_svar( context[40], context[34] );
      refalrts::push_stack( vm, context[49] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[48] );
      refalrts::link_brackets( context[8], context[47] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[37], context[32] );
      refalrts::link_brackets( context[26], context[45] );
      refalrts::link_brackets( context[27], context[44] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[49] );
      res = refalrts::splice_evar( res, context[39], context[41] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[46], context[46] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[42], context[45] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk#1/24 )/27 (/31 # E/33 s.Num#1/34 (/37 # Symbol/39 # Number/40 s.Number#1/41 )/38 e.Range#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_E], context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.Junk#1 as range 24
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_Symbol], context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::ident_left( identifiers[ident_Number], context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Range#1 as range 29
      if( ! refalrts::svar_left( context[41], context[35], context[36] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk#1: 24
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 34
      //DEBUG: e.Range#1: 29
      //DEBUG: s.Number#1: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num#1/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk#1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Number/33 } s.Number#1/41/42 # NoOffset/43 )/44 )/45 Tile{ AsIs: (/37 } # E/46 Tile{ HalfReuse: s.Num1 #34/38 AsIs: e.Range#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgLeft/39 HalfReuse: s.Num1 #34/40 AsIs: s.Number#1/41 } )/47 )/48 >/49 Tile{ ]] }
      refalrts::copy_stvar(vm, context[42], context[41]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_NoOffset]);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_ident(vm, context[46], identifiers[ident_E]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_call(vm, context[49]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Number]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdNumber]);
      refalrts::update_ident(context[39], identifiers[ident_AlgLeft]);
      refalrts::reinit_svar( context[40], context[34] );
      refalrts::push_stack( vm, context[49] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[48] );
      refalrts::link_brackets( context[8], context[47] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[37], context[32] );
      refalrts::link_brackets( context[26], context[45] );
      refalrts::link_brackets( context[27], context[44] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[47], context[49] );
      res = refalrts::splice_evar( res, context[39], context[41] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[46], context[46] );
      res = refalrts::splice_evar( res, context[37], context[37] );
      res = refalrts::splice_evar( res, context[42], context[45] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk#1/24 )/27 (/31 # E/33 s.Num#1/34 (/37 # Symbol/39 # Name/40 e.Name#1/35 )/38 e.Range#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_E], context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.Junk#1 as range 24
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_Symbol], context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::ident_left( identifiers[ident_Name], context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Name#1 as range 35
      // closed e.Range#1 as range 29
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk#1: 24
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 34
      //DEBUG: e.Name#1: 35
      //DEBUG: e.Range#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Junk#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 } Tile{ AsIs: (/37 AsIs: # Symbol/39 AsIs: # Name/40 } Tile{ AsIs: e.Name#1/35 } # NoOffset/41 )/42 Tile{ AsIs: )/27 AsIs: (/31 AsIs: # E/33 } Tile{ HalfReuse: s.Num1 #34/38 AsIs: e.Range#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdName/1 } # AlgLeft/43 Tile{ AsIs: s.Num#1/34 } e.Name#1/35/44 )/46 )/47 >/48 Tile{ ]] }
      refalrts::alloc_ident(vm, context[41], identifiers[ident_NoOffset]);
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_AlgLeft]);
      refalrts::copy_evar(vm, context[44], context[45], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdName]);
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[47] );
      refalrts::link_brackets( context[8], context[46] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[31], context[32] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::link_brackets( context[37], context[42] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[46], context[48] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[27], context[33] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[37], context[40] );
      refalrts::splice_to_freelist_open( vm, context[28], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk#1/24 )/27 (/31 # E/33 s.Num#1/34 (/37 # Symbol/39 # Identifier/40 e.Name#1/35 )/38 e.Range#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_E], context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.Junk#1 as range 24
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_Symbol], context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::ident_left( identifiers[ident_Identifier], context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Name#1 as range 35
      // closed e.Range#1 as range 29
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk#1: 24
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 34
      //DEBUG: e.Name#1: 35
      //DEBUG: e.Range#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk#1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Identifier/33 } Tile{ AsIs: e.Name#1/35 } # NoOffset/41 )/42 )/43 Tile{ AsIs: (/37 Reuse: # E/39 } Tile{ HalfReuse: s.Num1 #34/38 AsIs: e.Range#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ Reuse: # AlgLeft/40 } Tile{ AsIs: s.Num#1/34 } e.Name#1/35/44 )/46 )/47 >/48 Tile{ ]] }
      refalrts::alloc_ident(vm, context[41], identifiers[ident_NoOffset]);
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::alloc_close_bracket(vm, context[43]);
      refalrts::copy_evar(vm, context[44], context[45], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Identifier]);
      refalrts::update_ident(context[39], identifiers[ident_E]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdIdent]);
      refalrts::update_ident(context[40], identifiers[ident_AlgLeft]);
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[47] );
      refalrts::link_brackets( context[8], context[46] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[37], context[32] );
      refalrts::link_brackets( context[26], context[43] );
      refalrts::link_brackets( context[27], context[42] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[46], context[48] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # E/28 s.Num#1/40 e.Range#1/24 (/36 # Symbol/38 # Char/39 s.Char#1/41 )/37 )/27 (/31 # Junk/33 e.Junk#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_E], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_Junk], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[24], context[25] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Symbol], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::ident_left( identifiers[ident_Char], context[34], context[35] );
      if( ! context[39] )
        continue;
      // closed e.Junk#1 as range 29
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range#1 as range 24
      if( ! refalrts::svar_left( context[41], context[34], context[35] ) )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk#1: 29
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 40
      //DEBUG: e.Range#1: 24
      //DEBUG: s.Char#1: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # E/28 AsIs: s.Num#1/40 AsIs: e.Range#1/24 HalfReuse: )/36 HalfReuse: (/38 Reuse: # Junk/39 } (/42 # Symbol/43 Tile{ HalfReuse: # Char/37 HalfReuse: s.Char1 #41/27 HalfReuse: # NoOffset/31 HalfReuse: )/33 AsIs: e.Junk#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdChar/1 } # AlgRight/44 s.Num#1/40/45 Tile{ AsIs: s.Char#1/41 } )/46 )/47 >/48 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[45], context[40]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::update_ident(context[39], identifiers[ident_Junk]);
      refalrts::reinit_ident(context[37], identifiers[ident_Char]);
      refalrts::reinit_svar( context[27], context[41] );
      refalrts::reinit_ident(context[31], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdChar]);
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[47] );
      refalrts::link_brackets( context[8], context[46] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::link_brackets( context[42], context[33] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[46], context[48] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_evar( res, context[37], context[1] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # E/28 s.Num#1/40 e.Range#1/24 (/36 # Symbol/38 # Number/39 s.Number#1/41 )/37 )/27 (/31 # Junk/33 e.Junk#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_E], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_Junk], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[24], context[25] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Symbol], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::ident_left( identifiers[ident_Number], context[34], context[35] );
      if( ! context[39] )
        continue;
      // closed e.Junk#1 as range 29
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range#1 as range 24
      if( ! refalrts::svar_left( context[41], context[34], context[35] ) )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk#1: 29
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 40
      //DEBUG: e.Range#1: 24
      //DEBUG: s.Number#1: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # E/28 AsIs: s.Num#1/40 AsIs: e.Range#1/24 HalfReuse: )/36 HalfReuse: (/38 Reuse: # Junk/39 } (/42 # Symbol/43 Tile{ HalfReuse: # Number/37 HalfReuse: s.Number1 #41/27 HalfReuse: # NoOffset/31 HalfReuse: )/33 AsIs: e.Junk#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } # AlgRight/44 s.Num#1/40/45 Tile{ AsIs: s.Number#1/41 } )/46 )/47 >/48 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[42]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[44], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[45], context[40]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::update_ident(context[39], identifiers[ident_Junk]);
      refalrts::reinit_ident(context[37], identifiers[ident_Number]);
      refalrts::reinit_svar( context[27], context[41] );
      refalrts::reinit_ident(context[31], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdNumber]);
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[47] );
      refalrts::link_brackets( context[8], context[46] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::link_brackets( context[42], context[33] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[46], context[48] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_evar( res, context[37], context[1] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # E/28 s.Num#1/40 e.Range#1/24 (/36 # Symbol/38 # Name/39 e.Name#1/34 )/37 )/27 (/31 # Junk/33 e.Junk#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_E], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_Junk], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[24], context[25] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Symbol], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::ident_left( identifiers[ident_Name], context[34], context[35] );
      if( ! context[39] )
        continue;
      // closed e.Name#1 as range 34
      // closed e.Junk#1 as range 29
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range#1 as range 24
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Name#1: 34
      //DEBUG: e.Junk#1: 29
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 40
      //DEBUG: e.Range#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # E/28 AsIs: s.Num#1/40 AsIs: e.Range#1/24 HalfReuse: )/36 HalfReuse: (/38 Reuse: # Junk/39 } (/41 # Symbol/42 # Name/43 e.Name#1/34/44 Tile{ HalfReuse: # NoOffset/31 HalfReuse: )/33 AsIs: e.Junk#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdName/1 } # AlgRight/46 s.Num#1/40/47 Tile{ AsIs: e.Name#1/34 } Tile{ AsIs: )/37 AsIs: )/27 } >/48 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[41]);
      refalrts::alloc_ident(vm, context[42], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Name]);
      refalrts::copy_evar(vm, context[44], context[45], context[34], context[35]);
      refalrts::alloc_ident(vm, context[46], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[47], context[40]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::update_ident(context[39], identifiers[ident_Junk]);
      refalrts::reinit_ident(context[31], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdName]);
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[27] );
      refalrts::link_brackets( context[8], context[37] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::link_brackets( context[41], context[33] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[48], context[48] );
      res = refalrts::splice_evar( res, context[37], context[27] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_evar( res, context[31], context[1] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # E/28 s.Num#1/40 e.Range#1/24 (/36 # Symbol/38 # Identifier/39 e.Name#1/34 )/37 )/27 (/31 # Junk/33 e.Junk#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_E], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_Junk], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[24], context[25] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Symbol], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::ident_left( identifiers[ident_Identifier], context[34], context[35] );
      if( ! context[39] )
        continue;
      // closed e.Name#1 as range 34
      // closed e.Junk#1 as range 29
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range#1 as range 24
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Name#1: 34
      //DEBUG: e.Junk#1: 29
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 40
      //DEBUG: e.Range#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # E/28 AsIs: s.Num#1/40 AsIs: e.Range#1/24 HalfReuse: )/36 HalfReuse: (/38 Reuse: # Junk/39 } (/41 # Symbol/42 # Identifier/43 e.Name#1/34/44 Tile{ HalfReuse: # NoOffset/31 HalfReuse: )/33 AsIs: e.Junk#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } # AlgRight/46 s.Num#1/40/47 Tile{ AsIs: e.Name#1/34 } Tile{ AsIs: )/37 AsIs: )/27 } >/48 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[41]);
      refalrts::alloc_ident(vm, context[42], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Identifier]);
      refalrts::copy_evar(vm, context[44], context[45], context[34], context[35]);
      refalrts::alloc_ident(vm, context[46], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[47], context[40]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::update_ident(context[39], identifiers[ident_Junk]);
      refalrts::reinit_ident(context[31], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdIdent]);
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[27] );
      refalrts::link_brackets( context[8], context[37] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::link_brackets( context[41], context[33] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[48], context[48] );
      res = refalrts::splice_evar( res, context[37], context[27] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_evar( res, context[31], context[1] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk#1/24 )/27 (/31 # E/33 s.Num#1/34 (/37 # Brackets/39 e.SubRange#1/35 )/38 e.Range#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_E], context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.Junk#1 as range 24
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_Brackets], context[35], context[36] );
      if( ! context[39] )
        continue;
      // closed e.SubRange#1 as range 35
      // closed e.Range#1 as range 29
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk#1: 24
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 34
      //DEBUG: e.SubRange#1: 35
      //DEBUG: e.Range#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </40 & Inc2/41 s.ContextOffset#1/13/42 >/43 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk#1/24 HalfReuse: (/27 HalfReuse: # TkOpenBracket/31 Reuse: # NoOffset/33 } )/44 )/45 Tile{ AsIs: (/37 Reuse: # E/39 } Tile{ AsIs: s.ContextOffset#1/13 } Tile{ AsIs: e.SubRange#1/35 } )/46 (/47 # Junk/48 (/49 # TkCloseBracket/50 # NoOffset/51 )/52 )/53 (/54 # E/55 Tile{ HalfReuse: s.Num1 #34/38 AsIs: e.Range#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgLeft/56 Tile{ AsIs: s.Num#1/34 } s.ContextOffset#1/13/57 )/58 )/59 >/60 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_Inc2]);
      refalrts::copy_stvar(vm, context[42], context[13]);
      refalrts::alloc_close_call(vm, context[43]);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_open_bracket(vm, context[47]);
      refalrts::alloc_ident(vm, context[48], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[49]);
      refalrts::alloc_ident(vm, context[50], identifiers[ident_TkCloseBracket]);
      refalrts::alloc_ident(vm, context[51], identifiers[ident_NoOffset]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_E]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_AlgLeft]);
      refalrts::copy_stvar(vm, context[57], context[13]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_close_call(vm, context[60]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkOpenBracket]);
      refalrts::update_ident(context[33], identifiers[ident_NoOffset]);
      refalrts::update_ident(context[39], identifiers[ident_E]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdBrackets]);
      refalrts::push_stack( vm, context[60] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[59] );
      refalrts::link_brackets( context[8], context[58] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[54], context[32] );
      refalrts::link_brackets( context[47], context[53] );
      refalrts::link_brackets( context[49], context[52] );
      refalrts::link_brackets( context[37], context[46] );
      refalrts::link_brackets( context[26], context[45] );
      refalrts::link_brackets( context[27], context[44] );
      refalrts::push_stack( vm, context[43] );
      refalrts::push_stack( vm, context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[57], context[60] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[56], context[56] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[46], context[55] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[40], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # E/28 s.Num#1/39 e.Range#1/24 (/36 # Brackets/38 e.SubRange#1/34 )/37 )/27 (/31 # Junk/33 e.Junk#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_E], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_Junk], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[24], context[25] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Brackets], context[34], context[35] );
      if( ! context[38] )
        continue;
      // closed e.SubRange#1 as range 34
      // closed e.Junk#1 as range 29
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[39], context[24], context[25] ) )
        continue;
      // closed e.Range#1 as range 24
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.SubRange#1: 34
      //DEBUG: e.Junk#1: 29
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 39
      //DEBUG: e.Range#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </40 & Inc2/41 Tile{ AsIs: s.ContextOffset#1/13 } >/42 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num#1/39 AsIs: e.Range#1/24 HalfReuse: )/36 HalfReuse: (/38 } # Junk/43 (/44 # TkOpenBracket/45 # NoOffset/46 )/47 )/48 (/49 # E/50 s.ContextOffset#1/13/51 Tile{ AsIs: e.SubRange#1/34 } )/52 (/53 # Junk/54 Tile{ HalfReuse: (/37 HalfReuse: # TkCloseBracket/27 HalfReuse: # NoOffset/31 HalfReuse: )/33 AsIs: e.Junk#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgRight/55 s.Num#1/39/56 s.ContextOffset#1/13/57 )/58 )/59 >/60 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_Inc2]);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_ident(vm, context[43], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[44]);
      refalrts::alloc_ident(vm, context[45], identifiers[ident_TkOpenBracket]);
      refalrts::alloc_ident(vm, context[46], identifiers[ident_NoOffset]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_open_bracket(vm, context[49]);
      refalrts::alloc_ident(vm, context[50], identifiers[ident_E]);
      refalrts::copy_stvar(vm, context[51], context[13]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_ident(vm, context[54], identifiers[ident_Junk]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[56], context[39]);
      refalrts::copy_stvar(vm, context[57], context[13]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_close_call(vm, context[60]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::reinit_open_bracket(context[37]);
      refalrts::reinit_ident(context[27], identifiers[ident_TkCloseBracket]);
      refalrts::reinit_ident(context[31], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdBrackets]);
      refalrts::push_stack( vm, context[60] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[59] );
      refalrts::link_brackets( context[8], context[58] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[53], context[32] );
      refalrts::link_brackets( context[37], context[33] );
      refalrts::link_brackets( context[49], context[52] );
      refalrts::link_brackets( context[38], context[48] );
      refalrts::link_brackets( context[44], context[47] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[55], context[60] );
      res = refalrts::splice_evar( res, context[37], context[1] );
      res = refalrts::splice_evar( res, context[52], context[54] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[43], context[51] );
      res = refalrts::splice_evar( res, context[26], context[38] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[42], context[42] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk#1/24 )/27 (/31 # E/33 s.Num#1/34 (/37 # ADT-Brackets/39 (/42 e.Name#1/40 )/43 e.SubRange#1/35 )/38 e.Range#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_E], context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.Junk#1 as range 24
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = 0;
      context[41] = 0;
      context[42] = refalrts::brackets_left( context[40], context[41], context[35], context[36] );
      if( ! context[42] )
        continue;
      refalrts::bracket_pointers(context[42], context[43]);
      // closed e.Name#1 as range 40
      // closed e.SubRange#1 as range 35
      // closed e.Range#1 as range 29
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk#1: 24
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 34
      //DEBUG: e.Name#1: 40
      //DEBUG: e.SubRange#1: 35
      //DEBUG: e.Range#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </44 & Inc2/45 Tile{ AsIs: s.ContextOffset#1/13 } >/46 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk#1/24 HalfReuse: (/27 HalfReuse: # TkOpenADT/31 Reuse: # NoOffset/33 } )/47 Tile{ AsIs: (/37 Reuse: # Symbol/39 HalfReuse: # Name/42 AsIs: e.Name#1/40 HalfReuse: # NoOffset/43 } )/48 )/49 (/50 # E/51 s.ContextOffset#1/13/52 Tile{ AsIs: e.SubRange#1/35 } )/53 (/54 # Junk/55 (/56 # TkCloseADT/57 # NoOffset/58 )/59 )/60 (/61 # E/62 Tile{ HalfReuse: s.Num1 #34/38 AsIs: e.Range#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdADT/1 } # AlgLeft/63 Tile{ AsIs: s.Num#1/34 } s.ContextOffset#1/13/64 e.Name#1/40/65 )/67 )/68 >/69 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[44]);
      refalrts::alloc_name(vm, context[45], functions[efunc_Inc2]);
      refalrts::alloc_close_call(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_ident(vm, context[51], identifiers[ident_E]);
      refalrts::copy_stvar(vm, context[52], context[13]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_TkCloseADT]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_NoOffset]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_open_bracket(vm, context[61]);
      refalrts::alloc_ident(vm, context[62], identifiers[ident_E]);
      refalrts::alloc_ident(vm, context[63], identifiers[ident_AlgLeft]);
      refalrts::copy_stvar(vm, context[64], context[13]);
      refalrts::copy_evar(vm, context[65], context[66], context[40], context[41]);
      refalrts::alloc_close_bracket(vm, context[67]);
      refalrts::alloc_close_bracket(vm, context[68]);
      refalrts::alloc_close_call(vm, context[69]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkOpenADT]);
      refalrts::update_ident(context[33], identifiers[ident_NoOffset]);
      refalrts::update_ident(context[39], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[42], identifiers[ident_Name]);
      refalrts::reinit_ident(context[43], identifiers[ident_NoOffset]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdADT]);
      refalrts::push_stack( vm, context[69] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[68] );
      refalrts::link_brackets( context[8], context[67] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[61], context[32] );
      refalrts::link_brackets( context[54], context[60] );
      refalrts::link_brackets( context[56], context[59] );
      refalrts::link_brackets( context[50], context[53] );
      refalrts::link_brackets( context[26], context[49] );
      refalrts::link_brackets( context[37], context[48] );
      refalrts::link_brackets( context[27], context[47] );
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[44] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[64], context[69] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[63], context[63] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[53], context[62] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[48], context[52] );
      res = refalrts::splice_evar( res, context[37], context[43] );
      res = refalrts::splice_evar( res, context[47], context[47] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[46], context[46] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # E/28 s.Num#1/43 e.Range#1/24 (/36 # ADT-Brackets/38 (/41 e.Name#1/39 )/42 e.SubRange#1/34 )/37 )/27 (/31 # Junk/33 e.Junk#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_E], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_Junk], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[24], context[25] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_left( context[39], context[40], context[34], context[35] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      // closed e.Name#1 as range 39
      // closed e.SubRange#1 as range 34
      // closed e.Junk#1 as range 29
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[43], context[24], context[25] ) )
        continue;
      // closed e.Range#1 as range 24
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Name#1: 39
      //DEBUG: e.SubRange#1: 34
      //DEBUG: e.Junk#1: 29
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 43
      //DEBUG: e.Range#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </44 & Inc2/45 Tile{ AsIs: s.ContextOffset#1/13 } >/46 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num#1/43 AsIs: e.Range#1/24 HalfReuse: )/36 HalfReuse: (/38 HalfReuse: # Junk/41 } (/47 # TkOpenADT/48 # NoOffset/49 Tile{ AsIs: )/42 } (/50 # Symbol/51 # Name/52 Tile{ AsIs: e.Name#1/39 } # NoOffset/53 )/54 )/55 (/56 # E/57 s.ContextOffset#1/13/58 Tile{ AsIs: e.SubRange#1/34 } )/59 (/60 # Junk/61 Tile{ HalfReuse: (/37 HalfReuse: # TkCloseADT/27 HalfReuse: # NoOffset/31 HalfReuse: )/33 AsIs: e.Junk#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdADT/1 } # AlgRight/62 s.Num#1/43/63 s.ContextOffset#1/13/64 e.Name#1/39/65 )/67 )/68 >/69 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[44]);
      refalrts::alloc_name(vm, context[45], functions[efunc_Inc2]);
      refalrts::alloc_close_call(vm, context[46]);
      refalrts::alloc_open_bracket(vm, context[47]);
      refalrts::alloc_ident(vm, context[48], identifiers[ident_TkOpenADT]);
      refalrts::alloc_ident(vm, context[49], identifiers[ident_NoOffset]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_ident(vm, context[51], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[52], identifiers[ident_Name]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_NoOffset]);
      refalrts::alloc_close_bracket(vm, context[54]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_E]);
      refalrts::copy_stvar(vm, context[58], context[13]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_open_bracket(vm, context[60]);
      refalrts::alloc_ident(vm, context[61], identifiers[ident_Junk]);
      refalrts::alloc_ident(vm, context[62], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[63], context[43]);
      refalrts::copy_stvar(vm, context[64], context[13]);
      refalrts::copy_evar(vm, context[65], context[66], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[67]);
      refalrts::alloc_close_bracket(vm, context[68]);
      refalrts::alloc_close_call(vm, context[69]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::reinit_ident(context[41], identifiers[ident_Junk]);
      refalrts::reinit_open_bracket(context[37]);
      refalrts::reinit_ident(context[27], identifiers[ident_TkCloseADT]);
      refalrts::reinit_ident(context[31], identifiers[ident_NoOffset]);
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdADT]);
      refalrts::push_stack( vm, context[69] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[68] );
      refalrts::link_brackets( context[8], context[67] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[60], context[32] );
      refalrts::link_brackets( context[37], context[33] );
      refalrts::link_brackets( context[56], context[59] );
      refalrts::link_brackets( context[38], context[55] );
      refalrts::link_brackets( context[50], context[54] );
      refalrts::link_brackets( context[47], context[42] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[44] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[62], context[69] );
      res = refalrts::splice_evar( res, context[37], context[1] );
      res = refalrts::splice_evar( res, context[59], context[61] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[53], context[58] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[50], context[52] );
      res = refalrts::splice_evar( res, context[42], context[42] );
      res = refalrts::splice_evar( res, context[47], context[49] );
      res = refalrts::splice_evar( res, context[26], context[41] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[46], context[46] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # E/33 s.Num#1/39 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_E], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[39], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 39

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/27 (/31 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 } Tile{ AsIs: e.Junk1#1/24 } Tile{ AsIs: e.Junk2#1/34 } Tile{ AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdEmpty/1 } Tile{ Reuse: # AlgLeft/33 AsIs: s.Num#1/39 AsIs: )/32 HalfReuse: )/36 HalfReuse: >/38 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdEmpty]);
      refalrts::update_ident(context[33], identifiers[ident_AlgLeft]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_close_call(context[38]);
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[36] );
      refalrts::link_brackets( context[8], context[32] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[38] );
      res = refalrts::splice_evar( res, context[37], context[1] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::splice_to_freelist_open( vm, context[28], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/28 # Junk/30 e.Junk#1/26 )/29 (/33 # E/35 s.Num#1/36 (/39 # TkVariable/41 s.Mode#1/42 e.Index#1/37 )/40 e.Range#1/31 )/34 e.Substs-E#1/22 (/11 e.Vars-B#1/43 (/49 s.Mode#1/51 (/54 e.Index#1/56 )/55 e.Offsets#1/47 s.SampleOffset#1/58 )/50 e.Vars-E#1/45 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[22], context[23] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left( identifiers[ident_Junk], context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[22], context[23] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left( identifiers[ident_E], context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Junk#1 as range 26
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[36], context[31], context[32] ) )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[31], context[32] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_TkVariable], context[37], context[38] );
      if( ! context[41] )
        continue;
      // closed e.Range#1 as range 31
      if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
        continue;
      // closed e.Index#1 as range 37
      context[43] = 0;
      context[44] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[45] = context[24];
        context[46] = context[25];
        context[47] = 0;
        context[48] = 0;
        context[49] = refalrts::brackets_left( context[47], context[48], context[45], context[46] );
        if( ! context[49] )
          continue;
        refalrts::bracket_pointers(context[49], context[50]);
        if( ! refalrts::repeated_stvar_left( vm, context[51], context[42], context[47], context[48] ) )
          continue;
        context[52] = 0;
        context[53] = 0;
        context[54] = refalrts::brackets_left( context[52], context[53], context[47], context[48] );
        if( ! context[54] )
          continue;
        refalrts::bracket_pointers(context[54], context[55]);
        if( ! refalrts::repeated_evar_left( vm, context[56], context[57], context[37], context[38], context[52], context[53] ) )
          continue;
        if( ! refalrts::empty_seq( context[52], context[53] ) )
          continue;
        // closed e.Vars-E#1 as range 45
        if( ! refalrts::svar_right( context[58], context[47], context[48] ) )
          continue;
        // closed e.Offsets#1 as range 47
        //DEBUG: s.ContextOffset#1: 13
        //DEBUG: e.Commands#1: 18
        //DEBUG: e.Substs-B#1: 20
        //DEBUG: e.Junk#1: 26
        //DEBUG: e.Substs-E#1: 22
        //DEBUG: s.Num#1: 36
        //DEBUG: e.Range#1: 31
        //DEBUG: s.Mode#1: 42
        //DEBUG: e.Index#1: 37
        //DEBUG: e.Vars-B#1: 43
        //DEBUG: e.Vars-E#1: 45
        //DEBUG: s.SampleOffset#1: 58
        //DEBUG: e.Offsets#1: 47

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </59 Tile{ HalfReuse: & IncVarOffset/39 HalfReuse: s.ContextOffset1 #13/41 AsIs: s.Mode#1/42 } >/60 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/28 AsIs: # Junk/30 AsIs: e.Junk#1/26 HalfReuse: (/29 HalfReuse: # TkVariable/33 HalfReuse: s.Mode1 #51/35 } Tile{ AsIs: e.Index#1/37 } Tile{ AsIs: s.ContextOffset#1/13 } )/61 )/62 (/63 # E/64 Tile{ HalfReuse: s.Num1 #36/40 AsIs: e.Range#1/31 AsIs: )/34 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars-B#1/43 AsIs: (/49 AsIs: s.Mode#1/51 AsIs: (/54 AsIs: e.Index#1/56 AsIs: )/55 AsIs: e.Offsets#1/47 AsIs: s.SampleOffset#1/58 HalfReuse: s.ContextOffset1 #13/50 } )/65 Tile{ AsIs: e.Vars-E#1/45 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgLeft/66 Tile{ AsIs: s.Num#1/36 } s.Mode#1/51/67 s.ContextOffset#1/13/68 s.SampleOffset#1/58/69 )/70 )/71 >/72 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_close_call(vm, context[60]);
        refalrts::alloc_close_bracket(vm, context[61]);
        refalrts::alloc_close_bracket(vm, context[62]);
        refalrts::alloc_open_bracket(vm, context[63]);
        refalrts::alloc_ident(vm, context[64], identifiers[ident_E]);
        refalrts::alloc_close_bracket(vm, context[65]);
        refalrts::alloc_ident(vm, context[66], identifiers[ident_AlgLeft]);
        refalrts::copy_stvar(vm, context[67], context[51]);
        refalrts::copy_stvar(vm, context[68], context[13]);
        refalrts::copy_stvar(vm, context[69], context[58]);
        refalrts::alloc_close_bracket(vm, context[70]);
        refalrts::alloc_close_bracket(vm, context[71]);
        refalrts::alloc_close_call(vm, context[72]);
        refalrts::reinit_name(context[39], functions[efunc_IncVarOffset]);
        refalrts::reinit_svar( context[41], context[13] );
        refalrts::reinit_open_bracket(context[29]);
        refalrts::reinit_ident(context[33], identifiers[ident_TkVariable]);
        refalrts::reinit_svar( context[35], context[51] );
        refalrts::reinit_svar( context[40], context[36] );
        refalrts::reinit_svar( context[50], context[13] );
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_ident(context[1], identifiers[ident_CmdRepeated]);
        refalrts::push_stack( vm, context[72] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[71] );
        refalrts::link_brackets( context[8], context[70] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[49], context[65] );
        refalrts::link_brackets( context[54], context[55] );
        refalrts::link_brackets( context[63], context[34] );
        refalrts::link_brackets( context[28], context[62] );
        refalrts::link_brackets( context[29], context[61] );
        refalrts::push_stack( vm, context[60] );
        refalrts::push_stack( vm, context[59] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[67], context[72] );
        res = refalrts::splice_evar( res, context[36], context[36] );
        res = refalrts::splice_evar( res, context[66], context[66] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        res = refalrts::splice_evar( res, context[65], context[65] );
        res = refalrts::splice_evar( res, context[40], context[50] );
        res = refalrts::splice_evar( res, context[61], context[64] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[28], context[35] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[60], context[60] );
        res = refalrts::splice_evar( res, context[39], context[42] );
        res = refalrts::splice_evar( res, context[59], context[59] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[43], context[44], context[24], context[25] ) );
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/28 # E/30 s.Num#1/41 e.Range#1/26 (/38 # TkVariable/40 s.Mode#1/42 e.Index#1/36 )/39 )/29 (/33 # Junk/35 e.Junk#1/31 )/34 e.Substs-E#1/22 (/11 e.Vars-B#1/43 (/49 s.Mode#1/51 (/54 e.Index#1/56 )/55 e.Offsets#1/47 s.SampleOffset#1/58 )/50 e.Vars-E#1/45 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = context[16];
      context[25] = context[17];
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[22], context[23] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = refalrts::ident_left( identifiers[ident_E], context[26], context[27] );
      if( ! context[30] )
        continue;
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[22], context[23] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      context[35] = refalrts::ident_left( identifiers[ident_Junk], context[31], context[32] );
      if( ! context[35] )
        continue;
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_right( context[36], context[37], context[26], context[27] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      context[40] = refalrts::ident_left( identifiers[ident_TkVariable], context[36], context[37] );
      if( ! context[40] )
        continue;
      // closed e.Junk#1 as range 31
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[41], context[26], context[27] ) )
        continue;
      // closed e.Range#1 as range 26
      if( ! refalrts::svar_left( context[42], context[36], context[37] ) )
        continue;
      // closed e.Index#1 as range 36
      context[43] = 0;
      context[44] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[45] = context[24];
        context[46] = context[25];
        context[47] = 0;
        context[48] = 0;
        context[49] = refalrts::brackets_left( context[47], context[48], context[45], context[46] );
        if( ! context[49] )
          continue;
        refalrts::bracket_pointers(context[49], context[50]);
        if( ! refalrts::repeated_stvar_left( vm, context[51], context[42], context[47], context[48] ) )
          continue;
        context[52] = 0;
        context[53] = 0;
        context[54] = refalrts::brackets_left( context[52], context[53], context[47], context[48] );
        if( ! context[54] )
          continue;
        refalrts::bracket_pointers(context[54], context[55]);
        if( ! refalrts::repeated_evar_left( vm, context[56], context[57], context[36], context[37], context[52], context[53] ) )
          continue;
        if( ! refalrts::empty_seq( context[52], context[53] ) )
          continue;
        // closed e.Vars-E#1 as range 45
        if( ! refalrts::svar_right( context[58], context[47], context[48] ) )
          continue;
        // closed e.Offsets#1 as range 47
        //DEBUG: s.ContextOffset#1: 13
        //DEBUG: e.Commands#1: 18
        //DEBUG: e.Substs-B#1: 20
        //DEBUG: e.Junk#1: 31
        //DEBUG: e.Substs-E#1: 22
        //DEBUG: s.Num#1: 41
        //DEBUG: e.Range#1: 26
        //DEBUG: s.Mode#1: 42
        //DEBUG: e.Index#1: 36
        //DEBUG: e.Vars-B#1: 43
        //DEBUG: e.Vars-E#1: 45
        //DEBUG: s.SampleOffset#1: 58
        //DEBUG: e.Offsets#1: 47

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </59 & IncVarOffset/60 Tile{ AsIs: s.ContextOffset#1/13 } Tile{ AsIs: s.Mode#1/42 } >/61 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/28 AsIs: # E/30 AsIs: s.Num#1/41 AsIs: e.Range#1/26 HalfReuse: )/38 HalfReuse: (/40 } # Junk/62 (/63 # TkVariable/64 s.Mode#1/51/65 Tile{ AsIs: e.Index#1/36 } Tile{ HalfReuse: s.ContextOffset1 #13/33 HalfReuse: )/35 AsIs: e.Junk#1/31 AsIs: )/34 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars-B#1/43 AsIs: (/49 AsIs: s.Mode#1/51 AsIs: (/54 AsIs: e.Index#1/56 AsIs: )/55 AsIs: e.Offsets#1/47 AsIs: s.SampleOffset#1/58 HalfReuse: s.ContextOffset1 #13/50 } )/66 Tile{ AsIs: e.Vars-E#1/45 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands#1/18 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } # AlgRight/67 s.Num#1/41/68 s.Mode#1/51/69 s.ContextOffset#1/13/70 s.SampleOffset#1/58/71 Tile{ AsIs: )/39 AsIs: )/29 } >/72 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_name(vm, context[60], functions[efunc_IncVarOffset]);
        refalrts::alloc_close_call(vm, context[61]);
        refalrts::alloc_ident(vm, context[62], identifiers[ident_Junk]);
        refalrts::alloc_open_bracket(vm, context[63]);
        refalrts::alloc_ident(vm, context[64], identifiers[ident_TkVariable]);
        refalrts::copy_stvar(vm, context[65], context[51]);
        refalrts::alloc_close_bracket(vm, context[66]);
        refalrts::alloc_ident(vm, context[67], identifiers[ident_AlgRight]);
        refalrts::copy_stvar(vm, context[68], context[41]);
        refalrts::copy_stvar(vm, context[69], context[51]);
        refalrts::copy_stvar(vm, context[70], context[13]);
        refalrts::copy_stvar(vm, context[71], context[58]);
        refalrts::alloc_close_call(vm, context[72]);
        refalrts::reinit_close_bracket(context[38]);
        refalrts::reinit_open_bracket(context[40]);
        refalrts::reinit_svar( context[33], context[13] );
        refalrts::reinit_close_bracket(context[35]);
        refalrts::reinit_svar( context[50], context[13] );
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_ident(context[1], identifiers[ident_CmdRepeated]);
        refalrts::push_stack( vm, context[72] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[29] );
        refalrts::link_brackets( context[8], context[39] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[49], context[66] );
        refalrts::link_brackets( context[54], context[55] );
        refalrts::link_brackets( context[40], context[34] );
        refalrts::link_brackets( context[63], context[35] );
        refalrts::link_brackets( context[28], context[38] );
        refalrts::push_stack( vm, context[61] );
        refalrts::push_stack( vm, context[59] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[72], context[72] );
        res = refalrts::splice_evar( res, context[39], context[29] );
        res = refalrts::splice_evar( res, context[67], context[71] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        res = refalrts::splice_evar( res, context[66], context[66] );
        res = refalrts::splice_evar( res, context[33], context[50] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[62], context[65] );
        res = refalrts::splice_evar( res, context[28], context[40] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[61], context[61] );
        res = refalrts::splice_evar( res, context[42], context[42] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[59], context[60] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[43], context[44], context[24], context[25] ) );
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk1#1/24 )/27 (/31 # E/33 s.Num#1/45 (/41 # TkVariable/43 'e'/44 e.Index#1/39 )/42 )/32 (/36 # Junk/38 e.Junk2#1/34 )/37 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_E], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[22], context[23] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_right( context[39], context[40], context[29], context[30] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_TkVariable], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::char_left( 'e', context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1#1 as range 24
      // closed e.Index#1 as range 39
      // closed e.Junk2#1 as range 34
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk1#1: 24
      //DEBUG: e.Index#1: 39
      //DEBUG: e.Junk2#1: 34
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset#1/13 AsIs: e.Substs-B#1/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1#1/24 HalfReuse: (/27 HalfReuse: # TkVariable/31 HalfReuse: 'e'/33 } e.Index#1/39/46 Tile{ HalfReuse: s.Num1 #45/36 HalfReuse: )/38 AsIs: e.Junk2#1/34 AsIs: )/37 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 HalfReuse: (/12 HalfReuse: 'e'/7 } (/48 e.Index#1/39/49 )/51 Tile{ AsIs: s.Num#1/45 } )/52 )/53 (/54 Tile{ AsIs: e.Commands#1/18 } (/55 # CmdComment/56" closed "/57 Tile{ HalfReuse: </41 HalfReuse: & PrintVar/43 AsIs: 'e'/44 AsIs: e.Index#1/39 HalfReuse: >/42 HalfReuse: ' '/32 }"as range "/59 # Offset/61 s.Num#1/45/62 )/63 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::copy_evar(vm, context[49], context[50], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::alloc_open_bracket(vm, context[55]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdComment]);
      refalrts::alloc_chars(vm, context[57], context[58], " closed ", 8);
      refalrts::alloc_chars(vm, context[59], context[60], "as range ", 9);
      refalrts::alloc_ident(vm, context[61], identifiers[ident_Offset]);
      refalrts::copy_stvar(vm, context[62], context[45]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkVariable]);
      refalrts::reinit_char(context[33], 'e');
      refalrts::reinit_svar( context[36], context[45] );
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_char(context[7], 'e');
      refalrts::reinit_open_call(context[41]);
      refalrts::reinit_name(context[43], functions[efunc_PrintVar]);
      refalrts::reinit_close_call(context[42]);
      refalrts::reinit_char(context[32], ' ');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[54], context[8] );
      refalrts::link_brackets( context[55], context[63] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[41] );
      refalrts::link_brackets( context[11], context[53] );
      refalrts::link_brackets( context[12], context[52] );
      refalrts::link_brackets( context[48], context[51] );
      refalrts::link_brackets( context[26], context[37] );
      refalrts::link_brackets( context[27], context[38] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[59], context[63] );
      res = refalrts::splice_evar( res, context[41], context[32] );
      res = refalrts::splice_evar( res, context[55], context[58] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[52], context[54] );
      res = refalrts::splice_evar( res, context[45], context[45] );
      res = refalrts::splice_evar( res, context[48], context[51] );
      res = refalrts::splice_evar( res, context[36], context[7] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk#1/24 )/27 (/31 # E/33 s.Num#1/34 (/37 # TkVariable/39 's'/40 e.Index#1/35 )/38 e.Range#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_E], context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.Junk#1 as range 24
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_TkVariable], context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_left( 's', context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Index#1 as range 35
      // closed e.Range#1 as range 29
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk#1: 24
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 34
      //DEBUG: e.Index#1: 35
      //DEBUG: e.Range#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Add/42 1/43 Tile{ AsIs: s.ContextOffset#1/13 } >/44 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk#1/24 HalfReuse: (/27 HalfReuse: # TkVariable/31 HalfReuse: 's'/33 } Tile{ AsIs: e.Index#1/35 } s.ContextOffset#1/13/45 )/46 )/47 (/48 # E/49 Tile{ HalfReuse: s.Num1 #34/38 AsIs: e.Range#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 HalfReuse: (/12 HalfReuse: 's'/7 } (/50 e.Index#1/35/51 )/53 s.ContextOffset#1/13/54 )/55 )/56 (/57 Tile{ AsIs: e.Commands#1/18 } Tile{ AsIs: (/37 Reuse: # CmdVar/39 HalfReuse: # AlgLeft/40 } Tile{ AsIs: s.Num#1/34 } 's'/58 s.ContextOffset#1/13/59 )/60 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[43], 1UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::copy_stvar(vm, context[45], context[13]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::alloc_ident(vm, context[49], identifiers[ident_E]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::copy_evar(vm, context[51], context[52], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::copy_stvar(vm, context[54], context[13]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_close_bracket(vm, context[56]);
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::alloc_char(vm, context[58], 's');
      refalrts::copy_stvar(vm, context[59], context[13]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkVariable]);
      refalrts::reinit_char(context[33], 's');
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_char(context[7], 's');
      refalrts::update_ident(context[39], identifiers[ident_CmdVar]);
      refalrts::reinit_ident(context[40], identifiers[ident_AlgLeft]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[57], context[8] );
      refalrts::link_brackets( context[37], context[60] );
      refalrts::link_brackets( context[11], context[56] );
      refalrts::link_brackets( context[12], context[55] );
      refalrts::link_brackets( context[50], context[53] );
      refalrts::link_brackets( context[48], context[32] );
      refalrts::link_brackets( context[26], context[47] );
      refalrts::link_brackets( context[27], context[46] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[58], context[60] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[37], context[40] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[50], context[57] );
      res = refalrts::splice_evar( res, context[38], context[7] );
      res = refalrts::splice_evar( res, context[45], context[49] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # Junk/28 e.Junk#1/24 )/27 (/31 # E/33 s.Num#1/34 (/37 # TkVariable/39 't'/40 e.Index#1/35 )/38 e.Range#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Junk], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_E], context[29], context[30] );
      if( ! context[33] )
        continue;
      // closed e.Junk#1 as range 24
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_TkVariable], context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_left( 't', context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Index#1 as range 35
      // closed e.Range#1 as range 29
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Junk#1: 24
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 34
      //DEBUG: e.Index#1: 35
      //DEBUG: e.Range#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Add/42 1/43 Tile{ AsIs: s.ContextOffset#1/13 } >/44 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk#1/24 HalfReuse: (/27 HalfReuse: # TkVariable/31 HalfReuse: 't'/33 } Tile{ AsIs: e.Index#1/35 } s.ContextOffset#1/13/45 )/46 )/47 (/48 # E/49 Tile{ HalfReuse: s.Num1 #34/38 AsIs: e.Range#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 HalfReuse: (/12 HalfReuse: 't'/7 } (/50 e.Index#1/35/51 )/53 s.ContextOffset#1/13/54 )/55 )/56 (/57 Tile{ AsIs: e.Commands#1/18 } Tile{ AsIs: (/37 Reuse: # CmdVar/39 HalfReuse: # AlgLeft/40 } Tile{ AsIs: s.Num#1/34 } 't'/58 s.ContextOffset#1/13/59 )/60 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[43], 1UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::copy_stvar(vm, context[45], context[13]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::alloc_ident(vm, context[49], identifiers[ident_E]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::copy_evar(vm, context[51], context[52], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::copy_stvar(vm, context[54], context[13]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_close_bracket(vm, context[56]);
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::alloc_char(vm, context[58], 't');
      refalrts::copy_stvar(vm, context[59], context[13]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkVariable]);
      refalrts::reinit_char(context[33], 't');
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_char(context[7], 't');
      refalrts::update_ident(context[39], identifiers[ident_CmdVar]);
      refalrts::reinit_ident(context[40], identifiers[ident_AlgLeft]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[57], context[8] );
      refalrts::link_brackets( context[37], context[60] );
      refalrts::link_brackets( context[11], context[56] );
      refalrts::link_brackets( context[12], context[55] );
      refalrts::link_brackets( context[50], context[53] );
      refalrts::link_brackets( context[48], context[32] );
      refalrts::link_brackets( context[26], context[47] );
      refalrts::link_brackets( context[27], context[46] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[58], context[60] );
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[37], context[40] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[50], context[57] );
      res = refalrts::splice_evar( res, context[38], context[7] );
      res = refalrts::splice_evar( res, context[45], context[49] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # E/28 s.Num#1/40 e.Range#1/24 (/36 # TkVariable/38 's'/39 e.Index#1/34 )/37 )/27 (/31 # Junk/33 e.Junk#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_E], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_Junk], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[24], context[25] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_TkVariable], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::char_left( 's', context[34], context[35] );
      if( ! context[39] )
        continue;
      // closed e.Index#1 as range 34
      // closed e.Junk#1 as range 29
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range#1 as range 24
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Index#1: 34
      //DEBUG: e.Junk#1: 29
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 40
      //DEBUG: e.Range#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Add/42 1/43 Tile{ AsIs: s.ContextOffset#1/13 } >/44 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num#1/40 AsIs: e.Range#1/24 HalfReuse: )/36 HalfReuse: (/38 HalfReuse: # Junk/39 } (/45 # TkVariable/46 's'/47 Tile{ AsIs: e.Index#1/34 } Tile{ HalfReuse: s.ContextOffset1 #13/31 HalfReuse: )/33 AsIs: e.Junk#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 HalfReuse: (/12 HalfReuse: 's'/7 } (/48 e.Index#1/34/49 )/51 s.ContextOffset#1/13/52 Tile{ AsIs: )/37 AsIs: )/27 } (/53 Tile{ AsIs: e.Commands#1/18 } (/54 # CmdVar/55 # AlgRight/56 s.Num#1/40/57 's'/58 s.ContextOffset#1/13/59 )/60 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[43], 1UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::alloc_ident(vm, context[46], identifiers[ident_TkVariable]);
      refalrts::alloc_char(vm, context[47], 's');
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::copy_evar(vm, context[49], context[50], context[34], context[35]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::copy_stvar(vm, context[52], context[13]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_CmdVar]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[57], context[40]);
      refalrts::alloc_char(vm, context[58], 's');
      refalrts::copy_stvar(vm, context[59], context[13]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::reinit_ident(context[39], identifiers[ident_Junk]);
      refalrts::reinit_svar( context[31], context[13] );
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_char(context[7], 's');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[53], context[8] );
      refalrts::link_brackets( context[54], context[60] );
      refalrts::link_brackets( context[11], context[27] );
      refalrts::link_brackets( context[12], context[37] );
      refalrts::link_brackets( context[48], context[51] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::link_brackets( context[45], context[33] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[54], context[60] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[53], context[53] );
      res = refalrts::splice_evar( res, context[37], context[27] );
      res = refalrts::splice_evar( res, context[48], context[52] );
      res = refalrts::splice_evar( res, context[31], context[7] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[26], context[39] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 e.Substs-B#1/20 (/26 # E/28 s.Num#1/40 e.Range#1/24 (/36 # TkVariable/38 't'/39 e.Index#1/34 )/37 )/27 (/31 # Junk/33 e.Junk#1/29 )/32 e.Substs-E#1/22 (/11 e.Vars#1/16 )/12 (/7 e.Commands#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars#1 as range 16
    // closed e.Commands#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_E], context[24], context[25] );
      if( ! context[28] )
        continue;
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::brackets_left( context[29], context[30], context[22], context[23] );
      if( ! context[31] )
        continue;
      refalrts::bracket_pointers(context[31], context[32]);
      context[33] = refalrts::ident_left( identifiers[ident_Junk], context[29], context[30] );
      if( ! context[33] )
        continue;
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_right( context[34], context[35], context[24], context[25] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_TkVariable], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::char_left( 't', context[34], context[35] );
      if( ! context[39] )
        continue;
      // closed e.Index#1 as range 34
      // closed e.Junk#1 as range 29
      // closed e.Substs-E#1 as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range#1 as range 24
      //DEBUG: s.ContextOffset#1: 13
      //DEBUG: e.Vars#1: 16
      //DEBUG: e.Commands#1: 18
      //DEBUG: e.Substs-B#1: 20
      //DEBUG: e.Index#1: 34
      //DEBUG: e.Junk#1: 29
      //DEBUG: e.Substs-E#1: 22
      //DEBUG: s.Num#1: 40
      //DEBUG: e.Range#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Add/42 1/43 Tile{ AsIs: s.ContextOffset#1/13 } >/44 Tile{ AsIs: e.Substs-B#1/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num#1/40 AsIs: e.Range#1/24 HalfReuse: )/36 HalfReuse: (/38 HalfReuse: # Junk/39 } (/45 # TkVariable/46 't'/47 Tile{ AsIs: e.Index#1/34 } Tile{ HalfReuse: s.ContextOffset1 #13/31 HalfReuse: )/33 AsIs: e.Junk#1/29 AsIs: )/32 AsIs: e.Substs-E#1/22 AsIs: (/11 AsIs: e.Vars#1/16 HalfReuse: (/12 HalfReuse: 't'/7 } (/48 e.Index#1/34/49 )/51 s.ContextOffset#1/13/52 Tile{ AsIs: )/37 AsIs: )/27 } (/53 Tile{ AsIs: e.Commands#1/18 } (/54 # CmdVar/55 # AlgRight/56 s.Num#1/40/57 't'/58 s.ContextOffset#1/13/59 )/60 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[43], 1UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::alloc_ident(vm, context[46], identifiers[ident_TkVariable]);
      refalrts::alloc_char(vm, context[47], 't');
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::copy_evar(vm, context[49], context[50], context[34], context[35]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::copy_stvar(vm, context[52], context[13]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_CmdVar]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[57], context[40]);
      refalrts::alloc_char(vm, context[58], 't');
      refalrts::copy_stvar(vm, context[59], context[13]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::reinit_ident(context[39], identifiers[ident_Junk]);
      refalrts::reinit_svar( context[31], context[13] );
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_char(context[7], 't');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[53], context[8] );
      refalrts::link_brackets( context[54], context[60] );
      refalrts::link_brackets( context[11], context[27] );
      refalrts::link_brackets( context[12], context[37] );
      refalrts::link_brackets( context[48], context[51] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::link_brackets( context[45], context[33] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[54], context[60] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[53], context[53] );
      res = refalrts::splice_evar( res, context[37], context[27] );
      res = refalrts::splice_evar( res, context[48], context[52] );
      res = refalrts::splice_evar( res, context[31], context[7] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[26], context[39] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGenSubst/4 s.new#5/13 (/16 # Junk/18 e.new#6/14 )/17 e.new#7/2 (/11 e.new#9/9 )/12 (/7 e.new#8/5 )/8 >/1
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = refalrts::ident_left( identifiers[ident_Junk], context[14], context[15] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 14
  // closed e.new#7 as range 2
  // closed e.new#9 as range 9
  // closed e.new#8 as range 5
  do {
    // </0 & DoGenSubst/4 s.ContextOffset#1/13 (/16 # Junk/18 e.Junk#1/19 )/17 (/29 # E/31 s.Num#1/32 (/35 # TkVariable/37 'e'/38 e.Index#1/33 )/36 e.Range#1/27 )/30 e.SubstitutesAnsJunks#1/21 (/11 e.Vars#1/23 )/12 (/7 e.Commands#1/25 )/8 >/1
    context[19] = context[14];
    context[20] = context[15];
    context[21] = context[2];
    context[22] = context[3];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[5];
    context[26] = context[6];
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[21], context[22] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = refalrts::ident_left( identifiers[ident_E], context[27], context[28] );
    if( ! context[31] )
      continue;
    // closed e.Junk#1 as range 19
    // closed e.SubstitutesAnsJunks#1 as range 21
    // closed e.Vars#1 as range 23
    // closed e.Commands#1 as range 25
    if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
      continue;
    context[33] = 0;
    context[34] = 0;
    context[35] = refalrts::brackets_left( context[33], context[34], context[27], context[28] );
    if( ! context[35] )
      continue;
    refalrts::bracket_pointers(context[35], context[36]);
    context[37] = refalrts::ident_left( identifiers[ident_TkVariable], context[33], context[34] );
    if( ! context[37] )
      continue;
    context[38] = refalrts::char_left( 'e', context[33], context[34] );
    if( ! context[38] )
      continue;
    // closed e.Index#1 as range 33
    // closed e.Range#1 as range 27
    //DEBUG: s.ContextOffset#1: 13
    //DEBUG: e.Junk#1: 19
    //DEBUG: e.SubstitutesAnsJunks#1: 21
    //DEBUG: e.Vars#1: 23
    //DEBUG: e.Commands#1: 25
    //DEBUG: s.Num#1: 32
    //DEBUG: e.Index#1: 33
    //DEBUG: e.Range#1: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </39 & DoGenSubst$36=3/40 Tile{ AsIs: (/11 AsIs: e.Vars#1/23 AsIs: )/12 AsIs: (/7 } e.Index#1/33/41 )/43 s.ContextOffset#1/13/44 (/45 Tile{ AsIs: e.Commands#1/25 } Tile{ AsIs: )/30 } (/46 # CmdOpenedE/47 # AlgLeft/48 s.Num#1/32/49 s.ContextOffset#1/13/50 )/51 </52 & MakeSavers/53 Tile{ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset#1/13 HalfReuse: >/16 HalfReuse: (/18 } # Junk/54 Tile{ AsIs: e.Junk#1/19 } Tile{ AsIs: (/35 AsIs: # TkVariable/37 AsIs: 'e'/38 AsIs: e.Index#1/33 HalfReuse: s.ContextOffset1 #13/36 } )/55 Tile{ AsIs: )/17 AsIs: (/29 AsIs: # E/31 AsIs: s.Num#1/32 } Tile{ AsIs: e.Range#1/27 } )/56 Tile{ AsIs: e.SubstitutesAnsJunks#1/21 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_gen_DoGenSubst_S36A3]);
    refalrts::copy_evar(vm, context[41], context[42], context[33], context[34]);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::copy_stvar(vm, context[44], context[13]);
    refalrts::alloc_open_bracket(vm, context[45]);
    refalrts::alloc_open_bracket(vm, context[46]);
    refalrts::alloc_ident(vm, context[47], identifiers[ident_CmdOpenedE]);
    refalrts::alloc_ident(vm, context[48], identifiers[ident_AlgLeft]);
    refalrts::copy_stvar(vm, context[49], context[32]);
    refalrts::copy_stvar(vm, context[50], context[13]);
    refalrts::alloc_close_bracket(vm, context[51]);
    refalrts::alloc_open_call(vm, context[52]);
    refalrts::alloc_name(vm, context[53], functions[efunc_MakeSavers]);
    refalrts::alloc_ident(vm, context[54], identifiers[ident_Junk]);
    refalrts::alloc_close_bracket(vm, context[55]);
    refalrts::alloc_close_bracket(vm, context[56]);
    refalrts::update_name(context[4], functions[efunc_Inc2]);
    refalrts::reinit_close_call(context[16]);
    refalrts::reinit_open_bracket(context[18]);
    refalrts::reinit_svar( context[36], context[13] );
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[52] );
    refalrts::link_brackets( context[29], context[56] );
    refalrts::link_brackets( context[18], context[17] );
    refalrts::link_brackets( context[35], context[55] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[46], context[51] );
    refalrts::link_brackets( context[45], context[30] );
    refalrts::link_brackets( context[7], context[43] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[56], context[56] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[17], context[32] );
    res = refalrts::splice_evar( res, context[55], context[55] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[54], context[54] );
    res = refalrts::splice_evar( res, context[0], context[18] );
    res = refalrts::splice_evar( res, context[46], context[53] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[43], context[45] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[11], context[7] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGenSubst/4 s.ContextOffset#1/13 (/16 # Junk/18 e.MarkedPattern#1/14 )/17 (/11 e.Vars#1/9 )/12 (/7 e.Commands#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern#1 as range 14
  // closed e.Vars#1 as range 9
  // closed e.Commands#1 as range 5
  //DEBUG: s.ContextOffset#1: 13
  //DEBUG: e.MarkedPattern#1: 14
  //DEBUG: e.Vars#1: 9
  //DEBUG: e.Commands#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.ContextOffset#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.ContextOffset1 #13/17 AsIs: (/11 AsIs: e.Vars#1/9 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.MarkedPattern#1/14 } )/19 Tile{ AsIs: (/16 Reuse: # CmdComment/18 } Tile{ AsIs: </0 Reuse: & TextFromExpr/4 } e.MarkedPattern#1/14/20 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Commands#1/5 } Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::copy_evar(vm, context[20], context[21], context[14], context[15]);
  refalrts::reinit_svar( context[17], context[13] );
  refalrts::update_ident(context[18], identifiers[ident_CmdComment]);
  refalrts::update_name(context[4], functions[efunc_TextFromExpr]);
  refalrts::link_brackets( context[16], context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoGenSubst("DoGenSubst", 194005290U, 338052078U, func_DoGenSubst);


//End of file
