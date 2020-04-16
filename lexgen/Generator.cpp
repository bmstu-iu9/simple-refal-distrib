// This file automatically generated from 'Generator.ref'
// Don't edit! Edit 'Generator.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_491559890_698219708
#define COOKIE1_ 491559890U
#define COOKIE2_ 698219708U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_WriteFunction = 4,
  efunc_WriteAlternative = 5,
  efunc_WriteAlternativem_Aux = 6,
  efunc_NextStatem_L = 7,
  efunc_Head = 8,
  efunc_NextStatem_R = 9,
  efunc_Fetch = 10,
  efunc_Flush = 11,
  efunc_gen_WriteAlternativem_Aux_S2L1 = 12,
  efunc_EscapeChar = 13,
  efunc_Mu = 14,
  efunc_Up = 15,
  efunc_Evm_met = 16,
  efunc_Residue = 17,
  efunc_u_u_Metau_Residue = 18,
  efunc_GenerateFromDFA = 19,
};


enum ident {
  ident_None = 0,
  ident_Empty = 1,
  ident_Any = 2,
  ident_Unnamed = 3,
  ident_Flush = 4,
  ident_FlushError = 5,
  ident_Finitive = 6,
  ident_Mu = 7,
  ident_Up = 8,
  ident_Evm_met = 9,
  ident_Residue = 10,
  ident_u_u_Metau_Residue = 11,
  ident_GenerateFromDFA = 12,
  ident_WriteFunction = 13,
  ident_WriteAlternative = 14,
  ident_WriteAlternativem_Aux = 15,
  ident_Head = 16,
  ident_NextStatem_L = 17,
  ident_NextStatem_R = 18,
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
  res = refalrts::splice_evar( res, context[8], context[8] );
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
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
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
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 </8 & __Step-Drop/9 >/10 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
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


static refalrts::FnResult func_GenerateFromDFA(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & GenerateFromDFA/4 e.Rules#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rules#1 as range 2
  //DEBUG: e.Rules#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & WriteFunction/4 AsIs: e.Rules#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_WriteFunction]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenerateFromDFA("GenerateFromDFA", 0U, 0U, func_GenerateFromDFA);


static refalrts::FnResult func_WriteFunction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & WriteFunction/4 (/7 (/11 e.NextRule#1/9 )/12 e.Alternatives#1/5 )/8 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextRule#1 as range 9
  // closed e.Alternatives#1 as range 5
  //DEBUG: e.NextRule#1: 9
  //DEBUG: e.Alternatives#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: )/7 AsIs: (/11 AsIs: e.NextRule#1/9 HalfReuse: ' '/12 } '{'/13 )/14 Tile{ AsIs: </0 } & Map/15 & WriteAlternative/16 Tile{ AsIs: e.Alternatives#1/5 } >/17 (/18 Tile{ HalfReuse: '}'/8 HalfReuse: )/1 ]] }
  refalrts::alloc_char(vm, context[13], '{');
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[16], functions[efunc_WriteAlternative]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[7]);
  refalrts::reinit_char(context[12], ' ');
  refalrts::reinit_char(context[8], '}');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[18], context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[4], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WriteFunction("WriteFunction", COOKIE1_, COOKIE2_, func_WriteFunction);


static refalrts::FnResult func_WriteAlternative(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & WriteAlternative/4 t.Alternative#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Alternative#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/7"  (e.Accum)"/8 Tile{ AsIs: </0 Reuse: & WriteAlternative-Aux/4 AsIs: t.Alternative#1/5 AsIs: >/1 } ';'/10 )/11 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_chars(vm, context[8], context[9], "  (e.Accum)", 11);
  refalrts::alloc_char(vm, context[10], ';');
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_WriteAlternativem_Aux]);
  refalrts::link_brackets( context[7], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WriteAlternative("WriteAlternative", COOKIE1_, COOKIE2_, func_WriteAlternative);


static refalrts::FnResult func_gen_WriteAlternativem_Aux_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & WriteAlternative-Aux$2\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & WriteAlternative-Aux$2\1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux$2\1/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/1 ]] }
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WriteAlternative-Aux$2\1/4 e.ResultNotEmpty#2/2 >/1
  // closed e.ResultNotEmpty#2 as range 2
  //DEBUG: e.ResultNotEmpty#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & WriteAlternative-Aux$2\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ResultNotEmpty#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_WriteAlternativem_Aux_S2L1("WriteAlternative-Aux$2\\1", COOKIE1_, COOKIE2_, func_gen_WriteAlternativem_Aux_S2L1);


static refalrts::FnResult func_WriteAlternativem_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & WriteAlternative-Aux/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & WriteAlternative-Aux/4 (/7 s.new#1/9 t.new#2/10 t.new#3/12 )/8 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & WriteAlternative-Aux/4 (/7 s.Head#1/9 # None/10 t.NextState#1/12 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_None], context[10] ) )
      continue;
    //DEBUG: t.NextState#1: 12
    //DEBUG: s.Head#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Head/4 HalfReuse: s.Head1 #9/7 } >/14 </15 & NextState-L/16 t.NextState#1/12/17 >/19 </20 Tile{ HalfReuse: & NextState-R/10 AsIs: t.NextState#1/12 }"e.Accum"/21 </23 & Head/24 Tile{ AsIs: s.Head#1/9 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_NextStatem_L]);
    refalrts::copy_evar(vm, context[17], context[18], context[12], context[13]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_chars(vm, context[21], context[22], "e.Accum", 7);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Head]);
    refalrts::update_name(context[4], functions[efunc_Head]);
    refalrts::reinit_svar( context[7], context[9] );
    refalrts::reinit_name(context[10], functions[efunc_NextStatem_R]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[14], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WriteAlternative-Aux/4 (/7 s.Head#1/9 t.Flush#1/10 t.NextState#1/12 )/8 >/1
  //DEBUG: t.Flush#1: 10
  //DEBUG: t.NextState#1: 12
  //DEBUG: s.Head#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Head/4 HalfReuse: s.Head1 #9/7 } >/14 </15 & NextState-L/16 t.NextState#1/12/17 >/19 </20 & Fetch/21 </22 & Flush/23 Tile{ AsIs: s.Head#1/9 AsIs: t.Flush#1/10 } >/24 </25 & NextState-R/26 Tile{ AsIs: t.NextState#1/12 } >/27 Tile{ HalfReuse: & WriteAlternative-Aux$2\1/8 AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_NextStatem_L]);
  refalrts::copy_evar(vm, context[17], context[18], context[12], context[13]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Flush]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_NextStatem_R]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::update_name(context[4], functions[efunc_Head]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_name(context[8], functions[efunc_gen_WriteAlternativem_Aux_S2L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[14], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WriteAlternativem_Aux("WriteAlternative-Aux", COOKIE1_, COOKIE2_, func_WriteAlternativem_Aux);


static refalrts::FnResult func_Head(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Head/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Head/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Head/4 # Empty/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Empty], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Head/4 # Empty/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Head/4 # Any/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Any], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 's'/4 HalfReuse: '.'/5 HalfReuse: 'A'/1 }"ny"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "ny", 2);
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_char(context[4], 's');
    refalrts::reinit_char(context[5], '.');
    refalrts::reinit_char(context[1], 'A');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Head/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }" \'"/6 Tile{ AsIs: </0 Reuse: & EscapeChar/4 AsIs: s.Other#1/5 AsIs: >/1 } '\''/8 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], " \'", 2);
  refalrts::alloc_char(vm, context[8], '\'');
  refalrts::update_name(context[4], functions[efunc_EscapeChar]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Head("Head", COOKIE1_, COOKIE2_, func_Head);


static refalrts::FnResult func_Flush(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Flush/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Flush/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Flush/4 s.Head#1/5 # Unnamed/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_Unnamed], context[6] ) )
      continue;
    //DEBUG: s.Head#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Flush/4 s.Head#1/5 # Unnamed/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flush/4 s.new#3/5 (/6 s.new#4/10 e.new#5/8 )/7 >/1
  context[8] = 0;
  context[9] = 0;
  if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 8
  do {
    // </0 & Flush/4 s.Head#1/5 (/6 # Flush/10 e.FlushName#1/11 )/7 >/1
    context[11] = context[8];
    context[12] = context[9];
    if( ! refalrts::ident_term( identifiers[ident_Flush], context[10] ) )
      continue;
    // closed e.FlushName#1 as range 11
    //DEBUG: s.Head#1: 5
    //DEBUG: e.FlushName#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/7 HalfReuse: '('/1 } Tile{ AsIs: e.FlushName#1/11 }" e.Accum"/13 Tile{ AsIs: </0 Reuse: & Head/4 AsIs: s.Head#1/5 HalfReuse: >/6 HalfReuse: ')'/10 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[13], context[14], " e.Accum", 8);
    refalrts::reinit_char(context[7], ' ');
    refalrts::reinit_char(context[1], '(');
    refalrts::update_name(context[4], functions[efunc_Head]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_char(context[10], ')');
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Flush/4 s.Head#1/5 (/6 # FlushError/10 e.Message#1/8 )/7 >/1
  if( ! refalrts::ident_term( identifiers[ident_FlushError], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 8
  //DEBUG: s.Head#1: 5
  //DEBUG: e.Message#1: 8

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Head#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: '('/4 }"TokenError"/11 Tile{ HalfReuse: ' '/6 HalfReuse: '\''/10 AsIs: e.Message#1/8 HalfReuse: '\''/7 HalfReuse: ')'/1 ]] }
  refalrts::alloc_chars(vm, context[11], context[12], "TokenError", 10);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], '(');
  refalrts::reinit_char(context[6], ' ');
  refalrts::reinit_char(context[10], '\'');
  refalrts::reinit_char(context[7], '\'');
  refalrts::reinit_char(context[1], ')');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Flush("Flush", COOKIE1_, COOKIE2_, func_Flush);


static refalrts::FnResult func_NextStatem_L(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & NextState-L/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NextState-L/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & NextState-L/4 # Finitive/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NextState-L/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/5 HalfReuse: '='/1 ]] }
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], '=');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NextState-L/4 (/5 e.NextStateName#1/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextStateName#1 as range 7
  //DEBUG: e.NextStateName#1: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.NextStateName#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: ' '/0 HalfReuse: 'e'/4 HalfReuse: '.'/5 }"Text"/9 Tile{ HalfReuse: ' '/6 HalfReuse: '='/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "Text", 4);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_char(context[4], 'e');
  refalrts::reinit_char(context[5], '.');
  refalrts::reinit_char(context[6], ' ');
  refalrts::reinit_char(context[1], '=');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NextStatem_L("NextState-L", COOKIE1_, COOKIE2_, func_NextStatem_L);


static refalrts::FnResult func_NextStatem_R(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & NextState-R/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NextState-R/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & NextState-R/4 # Finitive/5 e.NextStateAccum#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[5] ) )
      continue;
    // closed e.NextStateAccum#1 as range 7
    //DEBUG: e.NextStateAccum#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NextState-R/4 # Finitive/5 e.NextStateAccum#1/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NextState-R/4 (/5 e.NextStateName#1/7 )/6 e.NextStateAccum#1/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NextStateName#1 as range 7
  // closed e.NextStateAccum#1 as range 2
  //DEBUG: e.NextStateName#1: 7
  //DEBUG: e.NextStateAccum#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/4 HalfReuse: '<'/5 AsIs: e.NextStateName#1/7 HalfReuse: ' '/6 } '('/9 Tile{ AsIs: e.NextStateAccum#1/2 } Tile{ HalfReuse: ')'/0 }" e.Text"/10 Tile{ HalfReuse: '>'/1 ]] }
  refalrts::alloc_char(vm, context[9], '(');
  refalrts::alloc_chars(vm, context[10], context[11], " e.Text", 7);
  refalrts::reinit_char(context[4], ' ');
  refalrts::reinit_char(context[5], '<');
  refalrts::reinit_char(context[6], ' ');
  refalrts::reinit_char(context[0], ')');
  refalrts::reinit_char(context[1], '>');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[4], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NextStatem_R("NextState-R", COOKIE1_, COOKIE2_, func_NextStatem_R);


//End of file
