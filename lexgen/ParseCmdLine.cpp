// This file automatically generated from 'ParseCmdLine.ref'
// Don't edit! Edit 'ParseCmdLine.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3106221105_686891782
#define COOKIE1_ 3106221105U
#define COOKIE2_ 686891782U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_gen_Apply_Z3 = 4,
  efunc_gen_Apply_Z0 = 5,
  efunc_Reduce = 6,
  efunc_gen_Reduce_S1A1 = 7,
  efunc_gen_Apply_Z2 = 8,
  efunc_Apply = 9,
  efunc_DoMapAccum = 10,
  efunc_gen_DoMapAccum_S1A1 = 11,
  efunc_Add = 12,
  efunc_Sub = 13,
  efunc_Fetch = 14,
  efunc_Pipe = 15,
  efunc_gen_Pipe_S2L1 = 16,
  efunc_gen_Pipe_S3L1 = 17,
  efunc_Prout = 18,
  efunc_Exit = 19,
  efunc_Symb = 20,
  efunc_gen_ParseCommandLine_B1S2B1 = 21,
  efunc_SkipVersion = 22,
  efunc_gen_ParseCommandLine_B1S4C1 = 23,
  efunc_gen_Map_Z1 = 24,
  efunc_gen_Map_Z2 = 25,
  efunc_gen_ParseCommandLine_B1 = 26,
  efunc_GetOpt = 27,
  efunc_gen_ParseCommandLine_A1 = 28,
  efunc_Mu = 29,
  efunc_Up = 30,
  efunc_Evm_met = 31,
  efunc_Residue = 32,
  efunc_u_u_Metau_Residue = 33,
  efunc_MapAccum = 34,
  efunc_UnBracket = 35,
  efunc_DelAccumulator = 36,
  efunc_Inc = 37,
  efunc_Dec = 38,
  efunc_ParseCommandLine = 39,
  efunc_FormatError = 40,
  efunc_Help = 41,
  efunc_HelpOnError = 42,
  efunc_gen_Apply_Z4 = 43,
  efunc_gen_ParseCommandLine_B1S6L1D3 = 44,
  efunc_gen_Map_Z0 = 45,
  efunc_gen_ParseCommandLine_B1S6L1Z0 = 46,
  efunc_PrintVersion = 47,
  efunc_gen_ParseCommandLine_L1Z0 = 48,
};


enum ident {
  ident_To = 0,
  ident_From = 1,
  ident_FILE = 2,
  ident_InPlace = 3,
  ident_Version = 4,
  ident_Required = 5,
  ident_Help = 6,
  ident_None = 7,
  ident_Mu = 8,
  ident_Up = 9,
  ident_Evm_met = 10,
  ident_Residue = 11,
  ident_u_u_Metau_Residue = 12,
  ident_Apply = 13,
  ident_Map = 14,
  ident_Reduce = 15,
  ident_Fetch = 16,
  ident_MapAccum = 17,
  ident_DoMapAccum = 18,
  ident_UnBracket = 19,
  ident_DelAccumulator = 20,
  ident_Inc = 21,
  ident_Dec = 22,
  ident_Pipe = 23,
  ident_ParseCommandLine = 24,
  ident_SkipVersion = 25,
  ident_FormatError = 26,
  ident_HelpOnError = 27,
  ident_NoRequiredParam = 28,
  ident_UnknownShortOption = 29,
  ident_UnknownLongOption = 30,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Mu/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


static refalrts::FnResult func_u_u_Metau_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & __Meta_Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Metau_Residue("__Meta_Residue", COOKIE1_, COOKIE2_, func_u_u_Metau_Residue);


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
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.Argument#1/7 HalfReuse: & $table/1 } >/9 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
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
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
    // </0 & Map/4 t.new#3/5 t.new#4/9 e.new#5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & Map/4 s.Fn#1/5 t.Next#1/9 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.Tail#1 as range 11
      //DEBUG: t.Next#1: 9
      //DEBUG: s.Fn#1: 5
      //DEBUG: e.Tail#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: t.Next#1/9 } & $table/13 >/14 </15 & Map/16 s.Fn#1/5/17 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[13], functions[efunc_d_table]);
      refalrts::alloc_close_call(vm, context[14]);
      refalrts::alloc_open_call(vm, context[15]);
      refalrts::alloc_name(vm, context[16], functions[efunc_Map]);
      refalrts::copy_stvar(vm, context[17], context[5]);
      refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Map/4 (/5 t.#0/15 e.0#0/13 )/6 t.Next#1/9 e.Tail#1/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
        continue;
      // closed e.Tail#1 as range 11
      context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
      if( ! context[16] )
        continue;
      // closed e.0#0 as range 13
      //DEBUG: t.Next#1: 9
      //DEBUG: e.Tail#1: 11
      //DEBUG: t.#0: 15
      //DEBUG: e.0#0: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </17 & Apply@3/18 t.#0/15/19 e.0#0/13/21 Tile{ AsIs: t.Next#1/9 } >/23 Tile{ AsIs: </0 AsIs: & Map/4 AsIs: (/5 AsIs: t.#0/15 AsIs: e.0#0/13 AsIs: )/6 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_Apply_Z3]);
      refalrts::copy_evar(vm, context[19], context[20], context[15], context[16]);
      refalrts::copy_evar(vm, context[21], context[22], context[13], context[14]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[5], context[6] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[17], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map/4 t.Fn#1/5 t.Next#1/9 e.Tail#1/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail#1 as range 11
    //DEBUG: t.Fn#1: 5
    //DEBUG: t.Next#1: 9
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.Fn#1/5 AsIs: t.Next#1/9 } >/13 </14 & Map/15 t.Fn#1/5/16 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_name(vm, context[15], functions[efunc_Map]);
    refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[17] );
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


static refalrts::FnResult func_gen_Reduce_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Reduce$1=1/4 t.Fn#1/5 (/9 e.Tail#1/7 )/10 t.Acc#2/11 >/1
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
  // closed e.Tail#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Tail#1: 7
  //DEBUG: t.Acc#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#2/11 } Tile{ AsIs: e.Tail#1/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Reduce]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1("Reduce$1=1", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1);


static refalrts::FnResult func_Reduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
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
    //RESULT: Tile{ [[ } </13 & Reduce$1=1/14 t.Fn#1/5/15 (/17 Tile{ AsIs: e.Tail#1/9 } )/18 Tile{ AsIs: </0 Reuse: & Apply@2/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/19 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[17] );
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


static refalrts::FnResult func_gen_DoMapAccum_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoMapAccum$1=1/4 t.Fn#1/5 (/9 e.Scanned#1/7 )/10 (/13 e.Tail#1/11 )/14 t.Acc#2/15 e.StepScanned#2/2 >/1
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
  // closed e.Tail#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#2 as range 2
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 11
  //DEBUG: t.Acc#2: 15
  //DEBUG: e.StepScanned#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#2/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned#1/7 } Tile{ AsIs: e.StepScanned#2/2 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoMapAccum_S1A1("DoMapAccum$1=1", COOKIE1_, COOKIE2_, func_gen_DoMapAccum_S1A1);


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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 Tile{ AsIs: e.Tail#1/15 } )/20 </21 & Apply@2/22 t.Fn#1/5/23 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Apply_Z2]);
    refalrts::copy_evar(vm, context[23], context[24], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_gen_DoMapAccum_S1A1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[20], context[24] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[19] );
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
  res = refalrts::splice_elem( res, context[5] );
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
    res = refalrts::splice_elem( res, context[8] );
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
  res = refalrts::splice_elem( res, context[5] );
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
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_elem( res, context[11] );
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


static refalrts::FnResult func_gen_ParseCommandLine_B1S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & ParseCommandLine:1$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine:1$2:1/4 (/7 e.new#1/5 )/8 s.new#2/9 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & ParseCommandLine:1$2:1/4 (/7 e.From#3/10 )/8 s.PosFrom#3/9 (/16 # To/18 s.PosTo#4/19 e.To#4/14 )/17 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_To], context[14], context[15] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    // closed e.From#3 as range 10
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    // closed e.To#4 as range 14
    //DEBUG: s.PosFrom#3: 9
    //DEBUG: e.From#3: 10
    //DEBUG: s.PosTo#4: 19
    //DEBUG: e.To#4: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.PosFrom#3/9 {REMOVED TILE} {REMOVED TILE} s.PosTo#4/19 {REMOVED TILE} )/17 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # From/4 AsIs: (/7 AsIs: e.From#3/10 AsIs: )/8 } Tile{ AsIs: # To/18 } Tile{ AsIs: (/16 } Tile{ AsIs: e.To#4/14 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_From]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine:1$2:1/4 (/7 e.From#3/5 )/8 s.PosFrom#3/9 e.Other#4/2 >/1
  // closed e.From#3 as range 5
  // closed e.Other#4 as range 2
  //DEBUG: s.PosFrom#3: 9
  //DEBUG: e.From#3: 5
  //DEBUG: e.Other#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.From#3/5 {REMOVED TILE} e.Other#4/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'C'/7 }"ommand line argument "/10 </12 Tile{ HalfReuse: & Symb/8 AsIs: s.PosFrom#3/9 } >/13": expected argument --to"/14 >/16 </17 & Prout/18"Use:"/19 >/21 </22 & Prout/23"    lexgen filename.sref - for rewritting file\n"/24 >/26 </27 & Prout/28"    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n"/29 >/31 </32 & Prout/33"    --from, -f - source file"/34 >/36 </37 & Prout/38"    --to, -o - target file"/39 >/41 </42 & Prout/43"    --help - print this help"/44 >/46 </47 & Prout/48"    --version - print version"/49 >/51 </52 & Exit/53 1/54 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "ommand line argument ", 21);
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_chars(vm, context[14], context[15], ": expected argument --to", 24);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[19], context[20], "Use:", 4);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[24], context[25], "    lexgen filename.sref - for rewritting file\n", 47);
  refalrts::alloc_close_call(vm, context[26]);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[29], context[30], "    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n", 76);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[34], context[35], "    --from, -f - source file", 28);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::alloc_open_call(vm, context[37]);
  refalrts::alloc_name(vm, context[38], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[39], context[40], "    --to, -o - target file", 26);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::alloc_open_call(vm, context[42]);
  refalrts::alloc_name(vm, context[43], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[44], context[45], "    --help - print this help", 28);
  refalrts::alloc_close_call(vm, context[46]);
  refalrts::alloc_open_call(vm, context[47]);
  refalrts::alloc_name(vm, context[48], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[49], context[50], "    --version - print version", 29);
  refalrts::alloc_close_call(vm, context[51]);
  refalrts::alloc_open_call(vm, context[52]);
  refalrts::alloc_name(vm, context[53], functions[efunc_Exit]);
  refalrts::alloc_number(vm, context[54], 1UL);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::reinit_char(context[7], 'C');
  refalrts::reinit_name(context[8], functions[efunc_Symb]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[52] );
  refalrts::push_stack( vm, context[51] );
  refalrts::push_stack( vm, context[47] );
  refalrts::push_stack( vm, context[46] );
  refalrts::push_stack( vm, context[42] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[54] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_B1S2B1("ParseCommandLine:1$2:1", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_B1S2B1);


static refalrts::FnResult func_gen_ParseCommandLine_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 76 elems
  refalrts::Iter context[76];
  refalrts::zeros( context, 76 );
  // </0 & ParseCommandLine:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseCommandLine:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & ParseCommandLine:1/4 (/7 e.new#5/13 )/8 (/11 )/12 e.new#4/15 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.new#5 as range 13
    // closed e.new#4 as range 15
    do {
      // </0 & ParseCommandLine:1/4 (/7 e.Errors#2/17 )/8 (/11 )/12 (/23 # FILE/25 s.Pos#3/26 e.FileName#3/21 )/24 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[16];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left( identifiers[ident_FILE], context[21], context[22] );
      if( ! context[25] )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.Errors#2 as range 17
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      // closed e.FileName#3 as range 21
      //DEBUG: e.Errors#2: 17
      //DEBUG: s.Pos#3: 26
      //DEBUG: e.FileName#3: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ParseCommandLine:1/4 (/7 e.Errors#2/17 )/8 (/11 )/12 (/23 # FILE/25 s.Pos#3/26 {REMOVED TILE} )/24 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: # InPlace/0 } Tile{ AsIs: e.FileName#3/21 } Tile{ ]] }
      refalrts::reinit_ident(context[0], identifiers[ident_InPlace]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine:1/4 (/7 e.Errors#2/17 )/8 (/11 )/12 e.Begin#3/21 (/27 # From/29 s.PosFrom#3/30 e.From#3/25 )/28 e.End#3/23 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[16];
      // closed e.Errors#2 as range 17
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[19];
        context[24] = context[20];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        context[29] = refalrts::ident_left( identifiers[ident_From], context[25], context[26] );
        if( ! context[29] )
          continue;
        // closed e.End#3 as range 23
        if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
          continue;
        // closed e.From#3 as range 25
        //DEBUG: e.Errors#2: 17
        //DEBUG: e.Begin#3: 21
        //DEBUG: e.End#3: 23
        //DEBUG: s.PosFrom#3: 30
        //DEBUG: e.From#3: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} e.Errors#2/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # From/29 s.PosFrom#3/30 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseCommandLine:1$2:1/4 AsIs: (/7 } Tile{ AsIs: e.From#3/25 } Tile{ AsIs: )/8 HalfReuse: s.PosFrom3 #30/11 HalfReuse: </12 } Tile{ HalfReuse: & SkipVersion/27 } Tile{ AsIs: e.Begin#3/21 } Tile{ AsIs: e.End#3/23 } Tile{ HalfReuse: >/28 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_B1S2B1]);
        refalrts::reinit_svar( context[11], context[30] );
        refalrts::reinit_open_call(context[12]);
        refalrts::reinit_name(context[27], functions[efunc_SkipVersion]);
        refalrts::reinit_close_call(context[28]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine:1/4 (/7 e.Errors#2/17 )/8 (/11 )/12 e.Begin#3/21 (/27 # To/29 s.Pos#3/30 e.To#3/25 )/28 e.End#3/23 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[16];
      // closed e.Errors#2 as range 17
      context[21] = 0;
      context[22] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[23] = context[19];
        context[24] = context[20];
        context[25] = 0;
        context[26] = 0;
        context[27] = refalrts::brackets_left( context[25], context[26], context[23], context[24] );
        if( ! context[27] )
          continue;
        refalrts::bracket_pointers(context[27], context[28]);
        context[29] = refalrts::ident_left( identifiers[ident_To], context[25], context[26] );
        if( ! context[29] )
          continue;
        // closed e.End#3 as range 23
        if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
          continue;
        // closed e.To#3 as range 25
        //DEBUG: e.Errors#2: 17
        //DEBUG: e.Begin#3: 21
        //DEBUG: e.End#3: 23
        //DEBUG: s.Pos#3: 30
        //DEBUG: e.To#3: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} e.Errors#2/17 {REMOVED TILE} e.Begin#3/21 {REMOVED TILE} e.To#3/25 {REMOVED TILE} e.End#3/23 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'C'/7 } Tile{ HalfReuse: 'o'/28 } 'm'/31 Tile{ HalfReuse: 'm'/8 HalfReuse: 'a'/11 HalfReuse: 'n'/12 }"d line argument "/32 Tile{ HalfReuse: </27 HalfReuse: & Symb/29 AsIs: s.Pos#3/30 } >/34": exptected argument --from"/35 >/37 </38 & Prout/39"Use:"/40 >/42 </43 & Prout/44"    lexgen filename.sref - for rewritting file\n"/45 >/47 </48 & Prout/49"    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n"/50 >/52 </53 & Prout/54"    --from, -f - source file"/55 >/57 </58 & Prout/59"    --to, -o - target file"/60 >/62 </63 & Prout/64"    --help - print this help"/65 >/67 </68 & Prout/69"    --version - print version"/70 >/72 </73 & Exit/74 1/75 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[31], 'm');
        refalrts::alloc_chars(vm, context[32], context[33], "d line argument ", 16);
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::alloc_chars(vm, context[35], context[36], ": exptected argument --from", 27);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_name(vm, context[39], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[40], context[41], "Use:", 4);
        refalrts::alloc_close_call(vm, context[42]);
        refalrts::alloc_open_call(vm, context[43]);
        refalrts::alloc_name(vm, context[44], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[45], context[46], "    lexgen filename.sref - for rewritting file\n", 47);
        refalrts::alloc_close_call(vm, context[47]);
        refalrts::alloc_open_call(vm, context[48]);
        refalrts::alloc_name(vm, context[49], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[50], context[51], "    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n", 76);
        refalrts::alloc_close_call(vm, context[52]);
        refalrts::alloc_open_call(vm, context[53]);
        refalrts::alloc_name(vm, context[54], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[55], context[56], "    --from, -f - source file", 28);
        refalrts::alloc_close_call(vm, context[57]);
        refalrts::alloc_open_call(vm, context[58]);
        refalrts::alloc_name(vm, context[59], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[60], context[61], "    --to, -o - target file", 26);
        refalrts::alloc_close_call(vm, context[62]);
        refalrts::alloc_open_call(vm, context[63]);
        refalrts::alloc_name(vm, context[64], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[65], context[66], "    --help - print this help", 28);
        refalrts::alloc_close_call(vm, context[67]);
        refalrts::alloc_open_call(vm, context[68]);
        refalrts::alloc_name(vm, context[69], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[70], context[71], "    --version - print version", 29);
        refalrts::alloc_close_call(vm, context[72]);
        refalrts::alloc_open_call(vm, context[73]);
        refalrts::alloc_name(vm, context[74], functions[efunc_Exit]);
        refalrts::alloc_number(vm, context[75], 1UL);
        refalrts::update_name(context[4], functions[efunc_Prout]);
        refalrts::reinit_char(context[7], 'C');
        refalrts::reinit_char(context[28], 'o');
        refalrts::reinit_char(context[8], 'm');
        refalrts::reinit_char(context[11], 'a');
        refalrts::reinit_char(context[12], 'n');
        refalrts::reinit_open_call(context[27]);
        refalrts::reinit_name(context[29], functions[efunc_Symb]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[73] );
        refalrts::push_stack( vm, context[72] );
        refalrts::push_stack( vm, context[68] );
        refalrts::push_stack( vm, context[67] );
        refalrts::push_stack( vm, context[63] );
        refalrts::push_stack( vm, context[62] );
        refalrts::push_stack( vm, context[58] );
        refalrts::push_stack( vm, context[57] );
        refalrts::push_stack( vm, context[53] );
        refalrts::push_stack( vm, context[52] );
        refalrts::push_stack( vm, context[48] );
        refalrts::push_stack( vm, context[47] );
        refalrts::push_stack( vm, context[43] );
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[34], context[75] );
        res = refalrts::splice_evar( res, context[27], context[30] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_elem( res, context[28] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[21], context[22], context[19], context[20] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseCommandLine:1/4 (/7 e.Errors#2/17 )/8 (/11 )/12 (/23 # Version/25 s.Num#3/26 )/24 e.VersionFlags#3/19 >/1
      context[17] = context[13];
      context[18] = context[14];
      context[19] = context[15];
      context[20] = context[16];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left( identifiers[ident_Version], context[21], context[22] );
      if( ! context[25] )
        continue;
      // closed e.Errors#2 as range 17
      // closed e.VersionFlags#3 as range 19
      if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      //DEBUG: e.Errors#2: 17
      //DEBUG: e.VersionFlags#3: 19
      //DEBUG: s.Num#3: 26
      //17: e.Errors#2
      //19: e.VersionFlags#3
      //26: s.Num#3
      //32: e.VersionFlags#3

      refalrts::reset_allocator(vm);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[29], functions[efunc_gen_ParseCommandLine_B1S4C1]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_SkipVersion]);
      refalrts::copy_evar(vm, context[32], context[33], context[19], context[20]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[27] );
      res = refalrts::splice_elem( res, context[28] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[30] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[32], context[33] );
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
        // </27 & ParseCommandLine:1$4?1/31 >/28
        context[29] = 0;
        context[30] = 0;
        context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
        if( ! refalrts::empty_seq( context[29], context[30] ) )
          continue;
        //DEBUG: e.Errors#2: 17
        //DEBUG: e.VersionFlags#3: 19
        //DEBUG: s.Num#3: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & ParseCommandLine:1/4 (/7 e.Errors#2/17 )/8 (/11 )/12 (/23 # Version/25 s.Num#3/26 )/24 e.VersionFlags#3/19 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: </27 Reuse: & Exit/31 HalfReuse: 0/28 AsIs: >/1 ]] }
        refalrts::update_name(context[31], functions[efunc_Exit]);
        refalrts::reinit_number(context[28], 0UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[27];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      refalrts::splice_to_freelist(vm, context[27], context[28]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseCommandLine:1/4 (/7 e.Errors#2/17 )/8 (/11 )/12 e.AnyOther#3/19 >/1
    context[17] = context[13];
    context[18] = context[14];
    context[19] = context[15];
    context[20] = context[16];
    // closed e.Errors#2 as range 17
    // closed e.AnyOther#3 as range 19
    //DEBUG: e.Errors#2: 17
    //DEBUG: e.AnyOther#3: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Errors#2/17 {REMOVED TILE} e.AnyOther#3/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'C'/7 } 'o'/21 Tile{ HalfReuse: 'm'/8 HalfReuse: 'm'/11 HalfReuse: 'a'/12 }"nd line error: unrecognized command line"/22 >/24 </25 & Prout/26"Use:"/27 >/29 </30 & Prout/31"    lexgen filename.sref - for rewritting file\n"/32 >/34 </35 & Prout/36"    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n"/37 >/39 </40 & Prout/41"    --from, -f - source file"/42 >/44 </45 & Prout/46"    --to, -o - target file"/47 >/49 </50 & Prout/51"    --help - print this help"/52 >/54 </55 & Prout/56"    --version - print version"/57 >/59 </60 & Exit/61 1/62 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[21], 'o');
    refalrts::alloc_chars(vm, context[22], context[23], "nd line error: unrecognized command line", 40);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Prout]);
    refalrts::alloc_chars(vm, context[27], context[28], "Use:", 4);
    refalrts::alloc_close_call(vm, context[29]);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_Prout]);
    refalrts::alloc_chars(vm, context[32], context[33], "    lexgen filename.sref - for rewritting file\n", 47);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_Prout]);
    refalrts::alloc_chars(vm, context[37], context[38], "    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n", 76);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::alloc_open_call(vm, context[40]);
    refalrts::alloc_name(vm, context[41], functions[efunc_Prout]);
    refalrts::alloc_chars(vm, context[42], context[43], "    --from, -f - source file", 28);
    refalrts::alloc_close_call(vm, context[44]);
    refalrts::alloc_open_call(vm, context[45]);
    refalrts::alloc_name(vm, context[46], functions[efunc_Prout]);
    refalrts::alloc_chars(vm, context[47], context[48], "    --to, -o - target file", 26);
    refalrts::alloc_close_call(vm, context[49]);
    refalrts::alloc_open_call(vm, context[50]);
    refalrts::alloc_name(vm, context[51], functions[efunc_Prout]);
    refalrts::alloc_chars(vm, context[52], context[53], "    --help - print this help", 28);
    refalrts::alloc_close_call(vm, context[54]);
    refalrts::alloc_open_call(vm, context[55]);
    refalrts::alloc_name(vm, context[56], functions[efunc_Prout]);
    refalrts::alloc_chars(vm, context[57], context[58], "    --version - print version", 29);
    refalrts::alloc_close_call(vm, context[59]);
    refalrts::alloc_open_call(vm, context[60]);
    refalrts::alloc_name(vm, context[61], functions[efunc_Exit]);
    refalrts::alloc_number(vm, context[62], 1UL);
    refalrts::update_name(context[4], functions[efunc_Prout]);
    refalrts::reinit_char(context[7], 'C');
    refalrts::reinit_char(context[8], 'm');
    refalrts::reinit_char(context[11], 'm');
    refalrts::reinit_char(context[12], 'a');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[60] );
    refalrts::push_stack( vm, context[59] );
    refalrts::push_stack( vm, context[55] );
    refalrts::push_stack( vm, context[54] );
    refalrts::push_stack( vm, context[50] );
    refalrts::push_stack( vm, context[49] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[40] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[62] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseCommandLine:1/4 (/7 e.Errors#2/5 )/8 (/11 e.Errors#2/13 )/12 e.AnyOther#3/2 >/1
  // closed e.Errors#2 as range 5
  if( ! refalrts::repeated_evar_left( vm, context[13], context[14], context[5], context[6], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AnyOther#3 as range 2
  //DEBUG: e.Errors#2: 5
  //DEBUG: e.AnyOther#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Errors#2/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.AnyOther#3/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 } Tile{ AsIs: e.Errors#2/13 } Tile{ HalfReuse: >/8 HalfReuse: </11 } Tile{ HalfReuse: & Prout/12 } Tile{ HalfReuse: 'U'/7 }"se:"/15 >/17 </18 & Prout/19"    lexgen filename.sref - for rewritting file\n"/20 >/22 </23 & Prout/24"    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n"/25 >/27 </28 & Prout/29"    --from, -f - source file"/30 >/32 </33 & Prout/34"    --to, -o - target file"/35 >/37 </38 & Prout/39"    --help - print this help"/40 >/42 </43 & Prout/44"    --version - print version"/45 >/47 </48 & Exit/49 1/50 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[15], context[16], "se:", 3);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[20], context[21], "    lexgen filename.sref - for rewritting file\n", 47);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[25], context[26], "    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n", 76);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[30], context[31], "    --from, -f - source file", 28);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[35], context[36], "    --to, -o - target file", 26);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::alloc_open_call(vm, context[38]);
  refalrts::alloc_name(vm, context[39], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[40], context[41], "    --help - print this help", 28);
  refalrts::alloc_close_call(vm, context[42]);
  refalrts::alloc_open_call(vm, context[43]);
  refalrts::alloc_name(vm, context[44], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[45], context[46], "    --version - print version", 29);
  refalrts::alloc_close_call(vm, context[47]);
  refalrts::alloc_open_call(vm, context[48]);
  refalrts::alloc_name(vm, context[49], functions[efunc_Exit]);
  refalrts::alloc_number(vm, context[50], 1UL);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_name(context[12], functions[efunc_Prout]);
  refalrts::reinit_char(context[7], 'U');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[48] );
  refalrts::push_stack( vm, context[47] );
  refalrts::push_stack( vm, context[43] );
  refalrts::push_stack( vm, context[42] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[50] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_B1("ParseCommandLine:1", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_B1);


static refalrts::FnResult func_gen_ParseCommandLine_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ParseCommandLine=1/4 (/7 e.Errors#2/5 )/8 e.Options#2/2 >/1
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
  // closed e.Errors#2 as range 5
  // closed e.Options#2 as range 2
  //DEBUG: e.Errors#2: 5
  //DEBUG: e.Options#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseCommandLine:1/4 AsIs: (/7 AsIs: e.Errors#2/5 AsIs: )/8 } (/9 e.Errors#2/5/10 )/12 </13 & Map@2/14 Tile{ AsIs: e.Options#2/2 } >/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::copy_evar(vm, context[10], context[11], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z2]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[9], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseCommandLine_A1("ParseCommandLine=1", COOKIE1_, COOKIE2_, func_gen_ParseCommandLine_A1);


static refalrts::FnResult func_ParseCommandLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & ParseCommandLine/4 e.Options#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Options#1 as range 2
  //DEBUG: e.Options#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseCommandLine=1/4 } </5 & GetOpt/6 (/7 (/8 # From/9 # Required/10 'f'/11 (/12"from"/13 )/15 )/16 (/17 # To/18 # Required/19 'o'/20 (/21"to"/22 )/24 )/25 (/26 # Help/27 # None/28"h?"/29 (/31"help"/32 )/34 )/35 (/36 # Version/37 # None/38 'v'/39 (/40"version"/41 )/43 )/44 )/45 Tile{ AsIs: e.Options#1/2 } >/46 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_GetOpt]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_From]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[11], 'f');
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "from", 4);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_To]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_Required]);
  refalrts::alloc_char(vm, context[20], 'o');
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_chars(vm, context[22], context[23], "to", 2);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_ident(vm, context[27], identifiers[ident_Help]);
  refalrts::alloc_ident(vm, context[28], identifiers[ident_None]);
  refalrts::alloc_chars(vm, context[29], context[30], "h?", 2);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_chars(vm, context[32], context[33], "help", 4);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_open_bracket(vm, context[36]);
  refalrts::alloc_ident(vm, context[37], identifiers[ident_Version]);
  refalrts::alloc_ident(vm, context[38], identifiers[ident_None]);
  refalrts::alloc_char(vm, context[39], 'v');
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_chars(vm, context[41], context[42], "version", 7);
  refalrts::alloc_close_bracket(vm, context[43]);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::alloc_close_call(vm, context[46]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[46] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[45] );
  refalrts::link_brackets( context[36], context[44] );
  refalrts::link_brackets( context[40], context[43] );
  refalrts::link_brackets( context[26], context[35] );
  refalrts::link_brackets( context[31], context[34] );
  refalrts::link_brackets( context[17], context[25] );
  refalrts::link_brackets( context[21], context[24] );
  refalrts::link_brackets( context[8], context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[46] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[45] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseCommandLine("ParseCommandLine", 0U, 0U, func_ParseCommandLine);


static refalrts::FnResult func_SkipVersion(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & SkipVersion/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & SkipVersion/4 e.Options-B#1/7 (/13 # Version/15 s.Num#1/16 )/14 e.Options-E#1/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Version], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Options-E#1 as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.Options-B#1: 7
      //DEBUG: e.Options-E#1: 9
      //DEBUG: s.Num#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 # Version/15 s.Num#1/16 )/14 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & SkipVersion/4 } Tile{ AsIs: e.Options-B#1/7 } Tile{ AsIs: e.Options-E#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SkipVersion/4 e.Options#1/2 >/1
  // closed e.Options#1 as range 2
  //DEBUG: e.Options#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SkipVersion/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Options#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SkipVersion("SkipVersion", COOKIE1_, COOKIE2_, func_SkipVersion);


static refalrts::FnResult func_FormatError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & FormatError/4 s.Pos#1/5 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2
  //DEBUG: s.Pos#1: 5
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 }"Command line argument "/6 </8 & Symb/9 Tile{ AsIs: s.Pos#1/5 } >/10": "/11 Tile{ AsIs: e.Message#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "Command line argument ", 22);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Symb]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_chars(vm, context[11], context[12], ": ", 2);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FormatError("FormatError", COOKIE1_, COOKIE2_, func_FormatError);


static refalrts::FnResult func_Help(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & Help/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'U'/1 }"se:"/5 >/7 </8 & Prout/9"    lexgen filename.sref - for rewritting file\n"/10 >/12 </13 & Prout/14"    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n"/15 >/17 </18 & Prout/19"    --from, -f - source file"/20 >/22 </23 & Prout/24"    --to, -o - target file"/25 >/27 </28 & Prout/29"    --help - print this help"/30 >/32 </33 & Prout/34"    --version - print version"/35 >/37 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "se:", 3);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[10], context[11], "    lexgen filename.sref - for rewritting file\n", 47);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[15], context[16], "    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n", 76);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[20], context[21], "    --from, -f - source file", 28);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[25], context[26], "    --to, -o - target file", 26);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[30], context[31], "    --help - print this help", 28);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[35], context[36], "    --version - print version", 29);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::reinit_char(context[1], 'U');
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[37] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Help("Help", COOKIE1_, COOKIE2_, func_Help);


static refalrts::FnResult func_HelpOnError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & HelpOnError/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'U'/1 }"se:"/5 >/7 </8 & Prout/9"    lexgen filename.sref - for rewritting file\n"/10 >/12 </13 & Prout/14"    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n"/15 >/17 </18 & Prout/19"    --from, -f - source file"/20 >/22 </23 & Prout/24"    --to, -o - target file"/25 >/27 </28 & Prout/29"    --help - print this help"/30 >/32 </33 & Prout/34"    --version - print version"/35 >/37 </38 & Exit/39 1/40 >/41 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "se:", 3);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[10], context[11], "    lexgen filename.sref - for rewritting file\n", 47);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[15], context[16], "    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n", 76);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[20], context[21], "    --from, -f - source file", 28);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[25], context[26], "    --to, -o - target file", 26);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[30], context[31], "    --help - print this help", 28);
  refalrts::alloc_close_call(vm, context[32]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[35], context[36], "    --version - print version", 29);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::alloc_open_call(vm, context[38]);
  refalrts::alloc_name(vm, context[39], functions[efunc_Exit]);
  refalrts::alloc_number(vm, context[40], 1UL);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::reinit_char(context[1], 'U');
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[41] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HelpOnError("HelpOnError", COOKIE1_, COOKIE2_, func_HelpOnError);


static refalrts::FnResult func_gen_Apply_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@2/4 t.new#1/5 t.new#2/7 t.new#3/9 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Apply@2/4 s.Fn#1/5 t.Acc#1/7 t.Next#1/9 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 9
    //DEBUG: s.Fn#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 HalfReuse: & $table/1 } >/11 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@2/4 (/5 t.Closure#1/13 e.Bounded#1/11 )/6 t.Acc#1/7 t.Next#1/9 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded#1 as range 11
    //DEBUG: t.Acc#1: 7
    //DEBUG: t.Next#1: 9
    //DEBUG: t.Closure#1: 13
    //DEBUG: e.Bounded#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@4/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: t.Acc#1/7 AsIs: t.Next#1/9 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Apply_Z4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@2/4 t.dyn#0/5 t.Acc#1/7 t.Next#1/9 >/1
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.Acc#1: 7
  //DEBUG: t.Next#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/9 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z2("Apply@2", COOKIE1_, COOKIE2_, func_gen_Apply_Z2);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@1/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@1/4 (/7 s.new#3/13 s.new#4/14 e.new#5/11 )/8 e.new#6/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#6 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      // closed e.new#5 as range 11
      do {
        // </0 & Map@1/4 (/7 s.Pos#4/13 # NoRequiredParam/14 e.1#0/15 )/8 e.Tail#1/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_NoRequiredParam], context[14] ) )
          continue;
        // closed e.1#0 as range 15
        // closed e.Tail#1 as range 17
        //DEBUG: s.Pos#4: 13
        //DEBUG: e.1#0: 15
        //DEBUG: e.Tail#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'C'/7 }"ommand line argument "/19 </21 & Symb/22 Tile{ AsIs: s.Pos#4/13 HalfReuse: >/14 }": option "/23 Tile{ AsIs: e.1#0/15 }" expects parameter"/25 >/27 </28 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "ommand line argument ", 21);
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[22], functions[efunc_Symb]);
        refalrts::alloc_chars(vm, context[23], context[24], ": option ", 9);
        refalrts::alloc_chars(vm, context[25], context[26], " expects parameter", 18);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::alloc_open_call(vm, context[28]);
        refalrts::update_name(context[4], functions[efunc_Prout]);
        refalrts::reinit_char(context[7], 'C');
        refalrts::reinit_close_call(context[14]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[14] );
        refalrts::push_stack( vm, context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[25], context[28] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[19], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 s.Pos#4/13 # UnknownShortOption/14 s.Option#4/19 )/8 e.Tail#1/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_UnknownShortOption], context[14] ) )
          continue;
        // closed e.Tail#1 as range 17
        if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
          continue;
        if( ! refalrts::empty_seq( context[15], context[16] ) )
          continue;
        //DEBUG: s.Pos#4: 13
        //DEBUG: e.Tail#1: 17
        //DEBUG: s.Option#4: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'C'/7 }"ommand line argument "/20 </22 & Symb/23 Tile{ AsIs: s.Pos#4/13 } >/24": unknown option "/25 Tile{ HalfReuse: '-'/14 AsIs: s.Option#4/19 } >/27 </28 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[20], context[21], "ommand line argument ", 21);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::alloc_chars(vm, context[25], context[26], ": unknown option ", 17);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::alloc_open_call(vm, context[28]);
        refalrts::update_name(context[4], functions[efunc_Prout]);
        refalrts::reinit_char(context[7], 'C');
        refalrts::reinit_char(context[14], '-');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[14], context[19] );
        res = refalrts::splice_evar( res, context[24], context[26] );
        res = refalrts::splice_elem( res, context[13] );
        res = refalrts::splice_evar( res, context[20], context[23] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 (/7 s.Pos#4/13 # UnknownLongOption/14 e.1#0/15 )/8 e.Tail#1/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[9];
      context[18] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_UnknownLongOption], context[14] ) )
        continue;
      // closed e.1#0 as range 15
      // closed e.Tail#1 as range 17
      //DEBUG: s.Pos#4: 13
      //DEBUG: e.1#0: 15
      //DEBUG: e.Tail#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'C'/7 }"ommand line argument "/19 </21 & Symb/22 Tile{ AsIs: s.Pos#4/13 HalfReuse: >/14 }": unknown option --"/23 Tile{ AsIs: e.1#0/15 } >/25 </26 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/17 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[19], context[20], "ommand line argument ", 21);
      refalrts::alloc_open_call(vm, context[21]);
      refalrts::alloc_name(vm, context[22], functions[efunc_Symb]);
      refalrts::alloc_chars(vm, context[23], context[24], ": unknown option --", 19);
      refalrts::alloc_close_call(vm, context[25]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::update_name(context[4], functions[efunc_Prout]);
      refalrts::reinit_char(context[7], 'C');
      refalrts::reinit_close_call(context[14]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[19], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseCommandLine:1$6\1*3/4 AsIs: t.Next#1/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_B1S6L1D3]);
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

  do {
    // </0 & Map@1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ParseCommandLine:1$6\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_B1S6L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
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
      // </0 & Map@2/4 (/7 s.new#3/13 s.new#4/14 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      do {
        // </0 & Map@2/4 (/7 # Help/13 s.Num#3/14 )/8 e.Tail#1/15 >/1
        context[15] = context[9];
        context[16] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Help], context[13] ) )
          continue;
        // closed e.Tail#1 as range 15
        //DEBUG: s.Num#3: 14
        //DEBUG: e.Tail#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Num#3/14 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'U'/7 HalfReuse: 's'/13 }"e:"/17 >/19 </20 & Prout/21"    lexgen filename.sref - for rewritting file\n"/22 >/24 </25 & Prout/26"    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n"/27 >/29 </30 & Prout/31"    --from, -f - source file"/32 >/34 </35 & Prout/36"    --to, -o - target file"/37 >/39 </40 & Prout/41"    --help - print this help"/42 >/44 </45 & Prout/46"    --version - print version"/47 >/49 </50 & Exit/51 0/52 >/53 </54 Tile{ HalfReuse: & Map@2/8 AsIs: e.Tail#1/15 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[17], context[18], "e:", 2);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[22], context[23], "    lexgen filename.sref - for rewritting file\n", 47);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[26], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[27], context[28], "    lexgen --from=file1.sref --to=file2.sref - for writting to other target\n", 76);
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[32], context[33], "    --from, -f - source file", 28);
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[37], context[38], "    --to, -o - target file", 26);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_name(vm, context[41], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[42], context[43], "    --help - print this help", 28);
        refalrts::alloc_close_call(vm, context[44]);
        refalrts::alloc_open_call(vm, context[45]);
        refalrts::alloc_name(vm, context[46], functions[efunc_Prout]);
        refalrts::alloc_chars(vm, context[47], context[48], "    --version - print version", 29);
        refalrts::alloc_close_call(vm, context[49]);
        refalrts::alloc_open_call(vm, context[50]);
        refalrts::alloc_name(vm, context[51], functions[efunc_Exit]);
        refalrts::alloc_number(vm, context[52], 0UL);
        refalrts::alloc_close_call(vm, context[53]);
        refalrts::alloc_open_call(vm, context[54]);
        refalrts::update_name(context[4], functions[efunc_Prout]);
        refalrts::reinit_char(context[7], 'U');
        refalrts::reinit_char(context[13], 's');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[54] );
        refalrts::push_stack( vm, context[53] );
        refalrts::push_stack( vm, context[50] );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[45] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[20] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[17], context[54] );
        refalrts::splice_to_freelist_open( vm, context[13], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@2/4 (/7 # Version/13 s.Num#3/14 )/8 e.Tail#1/15 >/1
      context[15] = context[9];
      context[16] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Version], context[13] ) )
        continue;
      // closed e.Tail#1 as range 15
      //DEBUG: s.Num#3: 14
      //DEBUG: e.Tail#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Version/13 AsIs: s.Num#3/14 AsIs: )/8 } </17 & PrintVersion/18"LexGen"/19 >/21 Tile{ AsIs: </0 AsIs: & Map@2/4 } Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_PrintVersion]);
      refalrts::alloc_chars(vm, context[19], context[20], "LexGen", 6);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[17] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[17], context[21] );
      res = refalrts::splice_evar( res, context[7], context[8] );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@2/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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

  do {
    // </0 & Map@2/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ParseCommandLine\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ParseCommandLine_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_Apply_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@3/4 t.new#1/5 e.new#2/2 t.new#3/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply@3/4 s.Fn#1/5 e.X#0/9 t.X#0/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X#0 as range 9
    //DEBUG: t.X#0: 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.X#0: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.X#0/9 AsIs: t.X#0/7 HalfReuse: & $table/1 } >/11 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@3/4 (/5 t.Closure#1/13 e.Bounded#1/11 )/6 e.X#0/9 t.X#0/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    // closed e.X#0 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded#1 as range 11
    //DEBUG: t.X#0: 7
    //DEBUG: e.X#0: 9
    //DEBUG: t.Closure#1: 13
    //DEBUG: e.Bounded#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@3/4 } Tile{ AsIs: t.Closure#1/13 } Tile{ AsIs: e.Bounded#1/11 } Tile{ AsIs: e.X#0/9 } Tile{ AsIs: t.X#0/7 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@3/4 t.dyn#0/5 e.X#0/2 t.X#0/7 >/1
  // closed e.X#0 as range 2
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.X#0: 7
  //DEBUG: e.X#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: e.X#0/2 AsIs: t.X#0/7 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z3("Apply@3", COOKIE1_, COOKIE2_, func_gen_Apply_Z3);


static refalrts::FnResult func_gen_Apply_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Apply@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Apply@4/4 t.new#1/5 e.new#2/2 t.new#3/9 t.new#4/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Apply@4/4 s.Fn#1/5 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X#0 as range 11
    //DEBUG: t.X#0: 9
    //DEBUG: t.X0#0: 7
    //DEBUG: s.Fn#1: 5
    //DEBUG: e.X#0: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn#1/5 AsIs: e.X#0/11 AsIs: t.X#0/9 AsIs: t.X0#0/7 HalfReuse: & $table/1 } >/13 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::reinit_name(context[1], functions[efunc_d_table]);
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Apply@4/4 (/5 t.Closure#1/15 e.Bounded#1/13 )/6 e.X#0/11 t.X#0/9 t.X0#0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
      continue;
    // closed e.X#0 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Bounded#1 as range 13
    //DEBUG: t.X#0: 9
    //DEBUG: t.X0#0: 7
    //DEBUG: e.X#0: 11
    //DEBUG: t.Closure#1: 15
    //DEBUG: e.Bounded#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@4/4 } Tile{ AsIs: t.Closure#1/15 } Tile{ AsIs: e.Bounded#1/13 } Tile{ AsIs: e.X#0/11 } Tile{ AsIs: t.X#0/9 AsIs: t.X0#0/7 AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Apply@4/4 t.dyn#0/5 e.X#0/2 t.X#0/9 t.X0#0/7 >/1
  // closed e.X#0 as range 2
  //DEBUG: t.dyn#0: 5
  //DEBUG: t.X#0: 9
  //DEBUG: t.X0#0: 7
  //DEBUG: e.X#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn#0/5 AsIs: e.X#0/2 AsIs: t.X#0/9 AsIs: t.X0#0/7 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z4("Apply@4", COOKIE1_, COOKIE2_, func_gen_Apply_Z4);


//End of file
