// This file automatically generated from 'DFA-Compiler.ref'
// Don't edit! Edit 'DFA-Compiler.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_584535852_1175513718
#define COOKIE1_ 584535852U
#define COOKIE2_ 1175513718U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Fetch = 3,
  efunc_gen_ResolvingSets_L1 = 4,
  efunc_SetSubstitute = 5,
  efunc_gen_ResolvingSets_L2 = 6,
  efunc_Pipe = 7,
  efunc_Map = 8,
  efunc_SetCheckRecursion = 9,
  efunc_Reduce = 10,
  efunc_gen_DFAm_Compile_L1 = 11,
  efunc_gen_DFAm_Compile_L2 = 12,
  efunc_SubstituteSetsToRules = 13,
  efunc_NormalizeRule = 14,
  efunc_PrepareFunctions = 15,
  efunc_gen_NormalizeContent_Z1 = 16,
  efunc_UniqueSet = 17,
  efunc_WarningAt = 18,
  efunc_ErrorAt = 19,
  efunc_SetDiff = 20,
  efunc_gen_DefaultCatchEOF_D2 = 21,
  efunc_gen_WarningIfUncatched_D1 = 22,
  efunc_MapAccum = 23,
  efunc_NormalizeAlternative = 24,
  efunc_SplitAlternatives = 25,
  efunc_gen_NormalizeRule_L2 = 26,
  efunc_gen_NormalizeRule_L1 = 27,
  efunc_DoPrepareFunctions = 28,
  efunc_gen_DoPrepareFunctions_S2L1 = 29,
  efunc_gen_DoPrepareFunctions_S4L1 = 30,
  efunc_ExtractExpected = 31,
  efunc_Mu = 32,
  efunc_Up = 33,
  efunc_Evm_met = 34,
  efunc_Residue = 35,
  efunc_u_u_Metau_Residue = 36,
  efunc_DFAm_Compile = 37,
  efunc_ResolvingSets = 38,
  efunc_NormalizeContent = 39,
  efunc_WarningIfUncatched = 40,
  efunc_DefaultCatchAnyChar = 41,
  efunc_DefaultCatchEOF = 42,
  efunc_gen_NormalizeContent_Z0 = 43,
};


enum ident {
  ident_Set = 0,
  ident_NotUsed = 1,
  ident_Sentence = 2,
  ident_Any = 3,
  ident_Changed = 4,
  ident_NotChanged = 5,
  ident_Chars = 6,
  ident_Used = 7,
  ident_Empty = 8,
  ident_Finitive = 9,
  ident_EOFm_Catched = 10,
  ident_Flush = 11,
  ident_EOFm_NotCatched = 12,
  ident_Mu = 13,
  ident_Up = 14,
  ident_Evm_met = 15,
  ident_Residue = 16,
  ident_u_u_Metau_Residue = 17,
  ident_DFAm_Compile = 18,
  ident_UniqueSet = 19,
  ident_ResolvingSets = 20,
  ident_NormalizeContent = 21,
  ident_SetCheckRecursion = 22,
  ident_SetSubstitute = 23,
  ident_SubstituteSetsToRules = 24,
  ident_SetDiff = 25,
  ident_NormalizeAlternative = 26,
  ident_SplitAlternatives = 27,
  ident_NormalizeRule = 28,
  ident_WarningIfUncatched = 29,
  ident_DefaultCatchAnyChar = 30,
  ident_DefaultCatchEOF = 31,
  ident_PrepareFunctions = 32,
  ident_ExtractExpected = 33,
  ident_DoPrepareFunctions = 34,
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
  // </0 & Mu/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
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
  // </0 & Residue/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
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
  // </0 & __Meta_Residue/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg/2 AsIs: >/1 ]] }
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


static refalrts::FnResult func_gen_DFAm_Compile_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & DFA-Compile\1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DFA-Compile\1/4 (/7 (/11 e.new1/9 )/12 (/15 e.new2/13 )/16 )/8 (/19 s.new3/21 t.new4/22 (/26 e.new5/24 )/27 e.new6/17 )/20 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new1 as range 9
  // closed e.new2 as range 13
  if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[17], context[18] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.new5 as range 24
  // closed e.new6 as range 17
  do {
    // </0 & DFA-Compile\1/4 (/7 (/11 e.Sets/28 )/12 (/15 e.Rules/30 )/16 )/8 (/19 # Set/21 t.SrcPos/22 (/26 e.Name/32 )/27 e.Content/34 )/20 >/1
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[13];
    context[31] = context[14];
    context[32] = context[24];
    context[33] = context[25];
    context[34] = context[17];
    context[35] = context[18];
    if( ! refalrts::ident_term( identifiers[ident_Set], context[21] ) )
      continue;
    // closed e.Sets as range 28
    // closed e.Rules as range 30
    // closed e.Name as range 32
    // closed e.Content as range 34
    //DEBUG: t.SrcPos: 22
    //DEBUG: e.Sets: 28
    //DEBUG: e.Rules: 30
    //DEBUG: e.Name: 32
    //DEBUG: e.Content: 34

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DFA-Compile\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 } Tile{ AsIs: e.Sets/28 } Tile{ HalfReuse: (/21 AsIs: t.SrcPos/22 AsIs: (/26 AsIs: e.Name/32 AsIs: )/27 } Tile{ HalfReuse: # NotUsed/19 } Tile{ AsIs: e.Content/34 } Tile{ AsIs: )/20 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules/30 AsIs: )/16 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[21]);
    refalrts::reinit_ident(context[19], identifiers[ident_NotUsed]);
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[21], context[20] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[8] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[21], context[27] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DFA-Compile\1/4 (/7 (/11 e.Sets/9 )/12 (/15 e.Rules/13 )/16 )/8 (/19 # Sentence/21 t.SrcPos/22 (/26 e.Name/24 )/27 e.Content/17 )/20 >/1
  if( ! refalrts::ident_term( identifiers[ident_Sentence], context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets as range 9
  // closed e.Rules as range 13
  // closed e.Name as range 24
  // closed e.Content as range 17
  //DEBUG: t.SrcPos: 22
  //DEBUG: e.Sets: 9
  //DEBUG: e.Rules: 13
  //DEBUG: e.Name: 24
  //DEBUG: e.Content: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DFA-Compile\1/4 {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Sets/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Rules/13 } Tile{ HalfReuse: (/21 AsIs: t.SrcPos/22 AsIs: (/26 AsIs: e.Name/24 AsIs: )/27 AsIs: e.Content/17 AsIs: )/20 HalfReuse: )/1 } Tile{ AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[21]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[21], context[20] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[21], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Compile_L1("DFA-Compile\\1", COOKIE1_, COOKIE2_, func_gen_DFAm_Compile_L1);


static refalrts::FnResult func_gen_DFAm_Compile_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DFA-Compile\2/4 (/7 (/11 e.Sets/9 )/12 (/15 e.Rules/13 )/16 )/8 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets as range 9
  // closed e.Rules as range 13
  //DEBUG: e.Sets: 9
  //DEBUG: e.Rules: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/17 </18 & Fetch/19 Tile{ AsIs: e.Sets/9 } Tile{ AsIs: </0 Reuse: & Pipe/4 AsIs: (/7 HalfReuse: & Map/11 } & ResolvingSets\1/20 Tile{ AsIs: )/8 HalfReuse: & SetCheckRecursion/1 } & SetSubstitute/21 & ResolvingSets\2/22 >/23 >/24 Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Rules/13 AsIs: )/16 } Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Fetch]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_ResolvingSets_L1]);
  refalrts::alloc_name(vm, context[21], functions[efunc_SetSubstitute]);
  refalrts::alloc_name(vm, context[22], functions[efunc_gen_ResolvingSets_L2]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_Pipe]);
  refalrts::reinit_name(context[11], functions[efunc_Map]);
  refalrts::reinit_name(context[1], functions[efunc_SetCheckRecursion]);
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[17], context[12] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DFAm_Compile_L2("DFA-Compile\\2", COOKIE1_, COOKIE2_, func_gen_DFAm_Compile_L2);


static refalrts::FnResult func_DFAm_Compile(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DFA-Compile/4 e.Elements/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Elements as range 2
  //DEBUG: e.Elements: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Elements/2 HalfReuse: </1 } & Pipe/5 (/6 & Reduce/7 & DFA-Compile\1/8 (/9 (/10 )/11 (/12 )/13 )/14 )/15 & DFA-Compile\2/16 & SubstituteSetsToRules/17 (/18 & Map/19 & NormalizeRule/20 )/21 & PrepareFunctions/22 >/23 >/24 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Pipe]);
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Reduce]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_DFAm_Compile_L1]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_DFAm_Compile_L2]);
  refalrts::alloc_name(vm, context[17], functions[efunc_SubstituteSetsToRules]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[20], functions[efunc_NormalizeRule]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_PrepareFunctions]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::link_brackets( context[6], context[15] );
  refalrts::link_brackets( context[9], context[14] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DFAm_Compile("DFA-Compile", 0U, 0U, func_DFAm_Compile);


static refalrts::FnResult func_UniqueSet(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & UniqueSet/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & UniqueSet/4 e.Set-B/7 s.Repeated/11 e.Set-M/12 s.Repeated/16 e.Set-E/14 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      context[12] = 0;
      context[13] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[14] = context[9];
        context[15] = context[10];
        if( ! refalrts::repeated_stvar_left( vm, context[16], context[11], context[14], context[15] ) )
          continue;
        // closed e.Set-E as range 14
        //DEBUG: e.Set-B: 7
        //DEBUG: s.Repeated: 11
        //DEBUG: e.Set-M: 12
        //DEBUG: e.Set-E: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Repeated/16 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Set-B/7 } Tile{ AsIs: </0 AsIs: & UniqueSet/4 } Tile{ AsIs: s.Repeated/11 } Tile{ AsIs: e.Set-M/12 } Tile{ AsIs: e.Set-E/14 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_elem( res, context[11] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[12], context[13], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UniqueSet/4 e.Set/2 >/1
  // closed e.Set as range 2
  //DEBUG: e.Set: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UniqueSet/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Set/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UniqueSet("UniqueSet", COOKIE1_, COOKIE2_, func_UniqueSet);


static refalrts::FnResult func_gen_ResolvingSets_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ResolvingSets\1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ResolvingSets\1/4 (/7 t.new1/9 (/13 e.new2/11 )/14 s.new3/15 e.new4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new2 as range 11
  if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 5
  do {
    // </0 & ResolvingSets\1/4 (/7 t.SrcPos/9 (/13 e.Name/16 )/14 s.Used/15 # Any/20 )/8 >/1
    context[16] = context[11];
    context[17] = context[12];
    context[18] = context[5];
    context[19] = context[6];
    context[20] = refalrts::ident_left( identifiers[ident_Any], context[18], context[19] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.Name as range 16
    //DEBUG: t.SrcPos: 9
    //DEBUG: s.Used: 15
    //DEBUG: e.Name: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ResolvingSets\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.SrcPos/9 AsIs: (/13 AsIs: e.Name/16 AsIs: )/14 AsIs: s.Used/15 AsIs: # Any/20 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolvingSets\1/4 (/7 t.SrcPos/9 (/13 e.Name/11 )/14 s.Used/15 e.Content/5 )/8 >/1
  // closed e.Name as range 11
  // closed e.Content as range 5
  //DEBUG: t.SrcPos: 9
  //DEBUG: s.Used: 15
  //DEBUG: e.Name: 11
  //DEBUG: e.Content: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.SrcPos/9 AsIs: (/13 AsIs: e.Name/11 AsIs: )/14 AsIs: s.Used/15 } Tile{ AsIs: </0 Reuse: & NormalizeContent@1/4 } Tile{ AsIs: e.Content/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_NormalizeContent_Z1]);
  refalrts::reinit_close_call(context[8]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolvingSets_L1("ResolvingSets\\1", COOKIE1_, COOKIE2_, func_gen_ResolvingSets_L1);


static refalrts::FnResult func_gen_ResolvingSets_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ResolvingSets\2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ResolvingSets\2/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & ResolvingSets\2/4 # Changed/5 e.Sets$a/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Changed], context[5] ) )
      continue;
    // closed e.Sets$a as range 6
    //DEBUG: e.Sets$a: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.Sets$a/6 } </8 Tile{ HalfReuse: & Pipe/5 } (/9 & Map/10 & ResolvingSets\1/11 )/12 & SetCheckRecursion/13 & SetSubstitute/14 & ResolvingSets\2/15 >/16 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Map]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_ResolvingSets_L1]);
    refalrts::alloc_close_bracket(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_SetCheckRecursion]);
    refalrts::alloc_name(vm, context[14], functions[efunc_SetSubstitute]);
    refalrts::alloc_name(vm, context[15], functions[efunc_gen_ResolvingSets_L2]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_name(context[5], functions[efunc_Pipe]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[8] );
    refalrts::link_brackets( context[9], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_elem( res, context[5] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolvingSets\2/4 # NotChanged/5 e.Sets$a/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NotChanged], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sets$a as range 2
  //DEBUG: e.Sets$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ResolvingSets\2/4 # NotChanged/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets$a/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolvingSets_L2("ResolvingSets\\2", COOKIE1_, COOKIE2_, func_gen_ResolvingSets_L2);


static refalrts::FnResult func_ResolvingSets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & ResolvingSets/4 e.Sets/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Sets as range 2
  //DEBUG: e.Sets: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.Sets/2 HalfReuse: </1 } & Pipe/5 (/6 & Map/7 & ResolvingSets\1/8 )/9 & SetCheckRecursion/10 & SetSubstitute/11 & ResolvingSets\2/12 >/13 >/14 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Pipe]);
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Map]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_ResolvingSets_L1]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_SetCheckRecursion]);
  refalrts::alloc_name(vm, context[11], functions[efunc_SetSubstitute]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_ResolvingSets_L2]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolvingSets("ResolvingSets", COOKIE1_, COOKIE2_, func_ResolvingSets);


static refalrts::FnResult func_NormalizeContent(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & NormalizeContent/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & NormalizeContent/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & NormalizeContent/4 (/7 e.new5/9 )/8 t.new3/13 e.new4/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.new5 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.new4 as range 11
    do {
      // </0 & NormalizeContent/4 (/7 e.new9/15 )/8 (/13 s.new6/21 e.new7/19 )/14 e.new8/17 >/1
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
        continue;
      // closed e.new9 as range 15
      // closed e.new8 as range 17
      if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
        continue;
      // closed e.new7 as range 19
      do {
        // </0 & NormalizeContent/4 (/7 e.Chars/22 )/8 (/13 # Chars/21 e.Symbols/24 )/14 e.Tail/26 >/1
        context[22] = context[15];
        context[23] = context[16];
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[17];
        context[27] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_Chars], context[21] ) )
          continue;
        // closed e.Chars as range 22
        // closed e.Symbols as range 24
        // closed e.Tail as range 26
        //DEBUG: e.Chars: 22
        //DEBUG: e.Symbols: 24
        //DEBUG: e.Tail: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 } Tile{ HalfReuse: </13 HalfReuse: & UniqueSet/21 } Tile{ AsIs: e.Chars/22 } Tile{ AsIs: e.Symbols/24 } Tile{ HalfReuse: >/8 } Tile{ AsIs: )/14 AsIs: e.Tail/26 AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[21], functions[efunc_UniqueSet]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[14] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[13], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NormalizeContent/4 (/7 e.Chars/22 )/8 (/13 # Set/21 t.SrcPos/28 e.Name/24 )/14 e.Tail/26 >/1
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[19];
      context[25] = context[20];
      context[26] = context[17];
      context[27] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_Set], context[21] ) )
        continue;
      // closed e.Chars as range 22
      // closed e.Tail as range 26
      context[29] = refalrts::tvar_left( context[28], context[24], context[25] );
      if( ! context[29] )
        continue;
      // closed e.Name as range 24
      //DEBUG: e.Chars: 22
      //DEBUG: e.Tail: 26
      //DEBUG: t.SrcPos: 28
      //DEBUG: e.Name: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: # Set/21 AsIs: t.SrcPos/28 AsIs: e.Name/24 AsIs: )/14 } Tile{ AsIs: </0 AsIs: & NormalizeContent/4 AsIs: (/7 AsIs: e.Chars/22 AsIs: )/8 } Tile{ AsIs: e.Tail/26 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NormalizeContent/4 (/7 e.Chars/15 )/8 # Any/13 e.Tail/17 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_Any], context[13] ) )
      continue;
    // closed e.Chars as range 15
    // closed e.Tail as range 17
    //DEBUG: e.Chars: 15
    //DEBUG: e.Tail: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NormalizeContent/4 (/7 e.Chars/15 )/8 # Any/13 e.Tail/17 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Any/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Any]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NormalizeContent/4 (/7 e.Chars/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Chars as range 5
  //DEBUG: e.Chars: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Chars/7 AsIs: e.Chars/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_ident(context[7], identifiers[ident_Chars]);
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NormalizeContent("NormalizeContent", COOKIE1_, COOKIE2_, func_NormalizeContent);


static refalrts::FnResult func_SetCheckRecursion(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & SetCheckRecursion/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & SetCheckRecursion/4 e.Sets-B/7 (/13 t.SetNamePos/15 (/19 e.Name/17 )/20 s.Used/21 e.Content-B/22 (/28 # Set/30 t.SrcPos/33 e.Name/31 )/29 e.Content-E/24 )/14 e.Sets-E/9 >/1
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
      // closed e.Sets-E as range 9
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name as range 17
      if( ! refalrts::svar_left( context[21], context[11], context[12] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[11];
        context[25] = context[12];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = refalrts::ident_left( identifiers[ident_Set], context[26], context[27] );
        if( ! context[30] )
          continue;
        if( ! refalrts::repeated_evar_right( vm, context[31], context[32], context[17], context[18], context[26], context[27] ) )
          continue;
        // closed e.Content-E as range 24
        context[34] = refalrts::tvar_left( context[33], context[26], context[27] );
        if( ! context[34] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        //DEBUG: e.Sets-B: 7
        //DEBUG: e.Sets-E: 9
        //DEBUG: t.SetNamePos: 15
        //DEBUG: e.Name: 17
        //DEBUG: s.Used: 21
        //DEBUG: e.Content-B: 22
        //DEBUG: e.Content-E: 24
        //DEBUG: t.SrcPos: 33

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </28 HalfReuse: & WarningAt/30 AsIs: t.SrcPos/33 }"Recu"/35 Tile{ HalfReuse: 'r'/29 }"sive depended set "/37 Tile{ AsIs: e.Name/31 } >/39 Tile{ AsIs: </0 AsIs: & SetCheckRecursion/4 AsIs: e.Sets-B/7 AsIs: (/13 AsIs: t.SetNamePos/15 AsIs: (/19 AsIs: e.Name/17 AsIs: )/20 AsIs: s.Used/21 } Tile{ AsIs: e.Content-B/22 } Tile{ AsIs: e.Content-E/24 } Tile{ AsIs: )/14 AsIs: e.Sets-E/9 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[35], context[36], "Recu", 4);
        refalrts::alloc_chars(vm, context[37], context[38], "sive depended set ", 18);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::reinit_open_call(context[28]);
        refalrts::reinit_name(context[30], functions[efunc_WarningAt]);
        refalrts::reinit_char(context[29], 'r');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[28] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[0], context[21] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[28], context[34] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[22], context[23], context[11], context[12] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetCheckRecursion/4 e.Sets/2 >/1
  // closed e.Sets as range 2
  //DEBUG: e.Sets: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetCheckRecursion/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Sets/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetCheckRecursion("SetCheckRecursion", COOKIE1_, COOKIE2_, func_SetCheckRecursion);


static refalrts::FnResult func_SetSubstitute(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  // </0 & SetSubstitute/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & SetSubstitute/4 e.Sets-B/7 (/13 t.SetNamePos/15 (/19 e.Name/17 )/20 s.Used/21 e.Content-B/22 (/28 # Set/30 t.SrcPos/34 'A'/33 'n'/32 'y'/31 )/29 e.Content-E/24 )/14 e.Sets-E/9 >/1
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
      // closed e.Sets-E as range 9
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name as range 17
      if( ! refalrts::svar_left( context[21], context[11], context[12] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[11];
        context[25] = context[12];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = refalrts::ident_left( identifiers[ident_Set], context[26], context[27] );
        if( ! context[30] )
          continue;
        context[31] = refalrts::char_right( 'y', context[26], context[27] );
        if( ! context[31] )
          continue;
        context[32] = refalrts::char_right( 'n', context[26], context[27] );
        if( ! context[32] )
          continue;
        context[33] = refalrts::char_right( 'A', context[26], context[27] );
        if( ! context[33] )
          continue;
        // closed e.Content-E as range 24
        context[35] = refalrts::tvar_left( context[34], context[26], context[27] );
        if( ! context[35] )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        //DEBUG: e.Sets-B: 7
        //DEBUG: e.Sets-E: 9
        //DEBUG: t.SetNamePos: 15
        //DEBUG: e.Name: 17
        //DEBUG: s.Used: 21
        //DEBUG: e.Content-B: 22
        //DEBUG: e.Content-E: 24
        //DEBUG: t.SrcPos: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 {REMOVED TILE} e.Content-B/22 (/28 # Set/30 t.SrcPos/34 'A'/33 'n'/32 {REMOVED TILE} e.Content-E/24 )/14 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B/7 AsIs: (/13 AsIs: t.SetNamePos/15 AsIs: (/19 AsIs: e.Name/17 AsIs: )/20 AsIs: s.Used/21 } Tile{ HalfReuse: # Any/31 AsIs: )/29 } Tile{ AsIs: e.Sets-E/9 } Tile{ ]] }
        refalrts::reinit_ident(context[4], identifiers[ident_Changed]);
        refalrts::reinit_ident(context[31], identifiers[ident_Any]);
        refalrts::link_brackets( context[13], context[29] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[31], context[29] );
        res = refalrts::splice_evar( res, context[4], context[21] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[22], context[23], context[11], context[12] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SetSubstitute/4 e.Sets-B/7 (/13 t.SetNamePos/15 (/19 e.Name/17 )/20 s.UsedOuter/21 e.Content-B/22 (/30 # Set/32 t.SrcPos/33 e.IncName/28 )/31 e.Content-E/24 )/14 e.Sets-M/35 (/41 t.IncNamePos/43 (/47 e.IncName/49 )/48 s.UsedInner/51 e.IncContent/39 )/42 e.Sets-E/37 >/1
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
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name as range 17
      if( ! refalrts::svar_left( context[21], context[11], context[12] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[11];
        context[25] = context[12];
        context[26] = context[9];
        context[27] = context[10];
        context[28] = 0;
        context[29] = 0;
        context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
        if( ! context[30] )
          continue;
        refalrts::bracket_pointers(context[30], context[31]);
        context[32] = refalrts::ident_left( identifiers[ident_Set], context[28], context[29] );
        if( ! context[32] )
          continue;
        // closed e.Content-E as range 24
        context[34] = refalrts::tvar_left( context[33], context[28], context[29] );
        if( ! context[34] )
          continue;
        // closed e.IncName as range 28
        context[35] = 0;
        context[36] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[37] = context[26];
          context[38] = context[27];
          context[39] = 0;
          context[40] = 0;
          context[41] = refalrts::brackets_left( context[39], context[40], context[37], context[38] );
          if( ! context[41] )
            continue;
          refalrts::bracket_pointers(context[41], context[42]);
          // closed e.Sets-E as range 37
          context[44] = refalrts::tvar_left( context[43], context[39], context[40] );
          if( ! context[44] )
            continue;
          context[45] = 0;
          context[46] = 0;
          context[47] = refalrts::brackets_left( context[45], context[46], context[39], context[40] );
          if( ! context[47] )
            continue;
          refalrts::bracket_pointers(context[47], context[48]);
          if( ! refalrts::repeated_evar_left( vm, context[49], context[50], context[28], context[29], context[45], context[46] ) )
            continue;
          if( ! refalrts::empty_seq( context[45], context[46] ) )
            continue;
          if( ! refalrts::svar_left( context[51], context[39], context[40] ) )
            continue;
          // closed e.IncContent as range 39
          //DEBUG: e.Sets-B: 7
          //DEBUG: t.SetNamePos: 15
          //DEBUG: e.Name: 17
          //DEBUG: s.UsedOuter: 21
          //DEBUG: e.Content-B: 22
          //DEBUG: e.Content-E: 24
          //DEBUG: t.SrcPos: 33
          //DEBUG: e.IncName: 28
          //DEBUG: e.Sets-M: 35
          //DEBUG: e.Sets-E: 37
          //DEBUG: t.IncNamePos: 43
          //DEBUG: s.UsedInner: 51
          //DEBUG: e.IncContent: 39

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} (/30 {REMOVED TILE} t.SrcPos/33 e.IncName/28 )/31 {REMOVED TILE} {REMOVED TILE} s.UsedInner/51 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B/7 AsIs: (/13 AsIs: t.SetNamePos/15 AsIs: (/19 AsIs: e.Name/17 AsIs: )/20 AsIs: s.UsedOuter/21 } Tile{ AsIs: e.Content-B/22 } e.IncContent/39/52 Tile{ AsIs: e.Content-E/24 } Tile{ AsIs: )/14 AsIs: e.Sets-M/35 AsIs: (/41 AsIs: t.IncNamePos/43 AsIs: (/47 AsIs: e.IncName/49 AsIs: )/48 } Tile{ Reuse: # Used/32 } Tile{ AsIs: e.IncContent/39 } Tile{ AsIs: )/42 } Tile{ AsIs: e.Sets-E/37 } Tile{ ]] }
          refalrts::copy_evar(vm, context[52], context[53], context[39], context[40]);
          refalrts::reinit_ident(context[4], identifiers[ident_Changed]);
          refalrts::update_ident(context[32], identifiers[ident_Used]);
          refalrts::link_brackets( context[41], context[42] );
          refalrts::link_brackets( context[47], context[48] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[19], context[20] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_elem( res, context[42] );
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_elem( res, context[32] );
          res = refalrts::splice_evar( res, context[14], context[48] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[52], context[53] );
          res = refalrts::splice_evar( res, context[22], context[23] );
          res = refalrts::splice_evar( res, context[4], context[21] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[35], context[36], context[26], context[27] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[11], context[12] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SetSubstitute/4 e.Sets-B/7 (/13 t.IncNamePos/15 (/19 e.IncName/17 )/20 s.UsedInner/21 e.IncContent/11 )/14 e.Sets-M/22 (/28 t.SetNamePos/30 (/34 e.Name/32 )/35 s.UsedOuter/36 e.Content-B/37 (/43 # Set/45 t.SrcPos/48 e.IncName/46 )/44 e.Content-E/39 )/29 e.Sets-E/24 >/1
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
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.IncName as range 17
      if( ! refalrts::svar_left( context[21], context[11], context[12] ) )
        continue;
      // closed e.IncContent as range 11
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[9];
        context[25] = context[10];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        // closed e.Sets-E as range 24
        context[31] = refalrts::tvar_left( context[30], context[26], context[27] );
        if( ! context[31] )
          continue;
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::brackets_left( context[32], context[33], context[26], context[27] );
        if( ! context[34] )
          continue;
        refalrts::bracket_pointers(context[34], context[35]);
        // closed e.Name as range 32
        if( ! refalrts::svar_left( context[36], context[26], context[27] ) )
          continue;
        context[37] = 0;
        context[38] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[39] = context[26];
          context[40] = context[27];
          context[41] = 0;
          context[42] = 0;
          context[43] = refalrts::brackets_left( context[41], context[42], context[39], context[40] );
          if( ! context[43] )
            continue;
          refalrts::bracket_pointers(context[43], context[44]);
          context[45] = refalrts::ident_left( identifiers[ident_Set], context[41], context[42] );
          if( ! context[45] )
            continue;
          if( ! refalrts::repeated_evar_right( vm, context[46], context[47], context[17], context[18], context[41], context[42] ) )
            continue;
          // closed e.Content-E as range 39
          context[49] = refalrts::tvar_left( context[48], context[41], context[42] );
          if( ! context[49] )
            continue;
          if( ! refalrts::empty_seq( context[41], context[42] ) )
            continue;
          //DEBUG: e.Sets-B: 7
          //DEBUG: t.IncNamePos: 15
          //DEBUG: e.IncName: 17
          //DEBUG: s.UsedInner: 21
          //DEBUG: e.IncContent: 11
          //DEBUG: e.Sets-M: 22
          //DEBUG: e.Sets-E: 24
          //DEBUG: t.SetNamePos: 30
          //DEBUG: e.Name: 32
          //DEBUG: s.UsedOuter: 36
          //DEBUG: e.Content-B: 37
          //DEBUG: e.Content-E: 39
          //DEBUG: t.SrcPos: 48

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.UsedInner/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/43 {REMOVED TILE} t.SrcPos/48 e.IncName/46 )/44 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # Changed/4 AsIs: e.Sets-B/7 AsIs: (/13 AsIs: t.IncNamePos/15 AsIs: (/19 AsIs: e.IncName/17 AsIs: )/20 } Tile{ Reuse: # Used/45 } Tile{ AsIs: e.IncContent/11 } Tile{ AsIs: )/14 AsIs: e.Sets-M/22 AsIs: (/28 AsIs: t.SetNamePos/30 AsIs: (/34 AsIs: e.Name/32 AsIs: )/35 AsIs: s.UsedOuter/36 } Tile{ AsIs: e.Content-B/37 } e.IncContent/11/50 Tile{ AsIs: e.Content-E/39 } Tile{ AsIs: )/29 } Tile{ AsIs: e.Sets-E/24 } Tile{ ]] }
          refalrts::copy_evar(vm, context[50], context[51], context[11], context[12]);
          refalrts::reinit_ident(context[4], identifiers[ident_Changed]);
          refalrts::update_ident(context[45], identifiers[ident_Used]);
          refalrts::link_brackets( context[28], context[29] );
          refalrts::link_brackets( context[34], context[35] );
          refalrts::link_brackets( context[13], context[14] );
          refalrts::link_brackets( context[19], context[20] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_elem( res, context[29] );
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_evar( res, context[50], context[51] );
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_evar( res, context[14], context[36] );
          res = refalrts::splice_evar( res, context[11], context[12] );
          res = refalrts::splice_elem( res, context[45] );
          res = refalrts::splice_evar( res, context[4], context[20] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[37], context[38], context[26], context[27] ) );
      } while ( refalrts::open_evar_advance( context[22], context[23], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SetSubstitute/4 e.Sets-B/7 (/13 t.SetNamePos/15 (/19 e.Name/17 )/20 s.Used/21 e.Content-B/22 (/28 # Set/30 t.SrcPos/31 e.IncName/26 )/29 e.Content-E/24 )/14 e.Sets-E/9 >/1
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
      // closed e.Sets-E as range 9
      context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.Name as range 17
      if( ! refalrts::svar_left( context[21], context[11], context[12] ) )
        continue;
      context[22] = 0;
      context[23] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[24] = context[11];
        context[25] = context[12];
        context[26] = 0;
        context[27] = 0;
        context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
        if( ! context[28] )
          continue;
        refalrts::bracket_pointers(context[28], context[29]);
        context[30] = refalrts::ident_left( identifiers[ident_Set], context[26], context[27] );
        if( ! context[30] )
          continue;
        // closed e.Content-E as range 24
        context[32] = refalrts::tvar_left( context[31], context[26], context[27] );
        if( ! context[32] )
          continue;
        // closed e.IncName as range 26
        //DEBUG: e.Sets-B: 7
        //DEBUG: e.Sets-E: 9
        //DEBUG: t.SetNamePos: 15
        //DEBUG: e.Name: 17
        //DEBUG: s.Used: 21
        //DEBUG: e.Content-B: 22
        //DEBUG: e.Content-E: 24
        //DEBUG: t.SrcPos: 31
        //DEBUG: e.IncName: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} e.Sets-B/7 {REMOVED TILE} t.SetNamePos/15 {REMOVED TILE} e.Name/17 {REMOVED TILE} s.Used/21 e.Content-B/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content-E/24 {REMOVED TILE} e.Sets-E/9 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos/31 } Tile{ HalfReuse: 's'/20 } Tile{ HalfReuse: 'e'/29 } Tile{ HalfReuse: 't'/28 HalfReuse: ' '/30 } Tile{ AsIs: e.IncName/26 } Tile{ HalfReuse: ' '/14 } Tile{ HalfReuse: 'n'/19 } Tile{ HalfReuse: 'o'/13 }"t defined"/33 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[33], context[34], "t defined", 9);
        refalrts::update_name(context[4], functions[efunc_ErrorAt]);
        refalrts::reinit_char(context[20], 's');
        refalrts::reinit_char(context[29], 'e');
        refalrts::reinit_char(context[28], 't');
        refalrts::reinit_char(context[30], ' ');
        refalrts::reinit_char(context[14], ' ');
        refalrts::reinit_char(context[19], 'n');
        refalrts::reinit_char(context[13], 'o');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_elem( res, context[13] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_elem( res, context[14] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[28], context[30] );
        res = refalrts::splice_elem( res, context[29] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[22], context[23], context[11], context[12] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetSubstitute/4 e.Sets/2 >/1
  // closed e.Sets as range 2
  //DEBUG: e.Sets: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & SetSubstitute/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # NotChanged/0 } Tile{ AsIs: e.Sets/2 } Tile{ ]] }
  refalrts::reinit_ident(context[0], identifiers[ident_NotChanged]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetSubstitute("SetSubstitute", COOKIE1_, COOKIE2_, func_SetSubstitute);


static refalrts::FnResult func_SubstituteSetsToRules(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 85 elems
  refalrts::Iter context[85];
  refalrts::zeros( context, 85 );
  // </0 & SubstituteSetsToRules/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SubstituteSetsToRules/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  do {
    // </0 & SubstituteSetsToRules/4 (/7 (/19 t.new3/21 (/25 e.new4/23 )/26 s.new5/27 e.new6/17 )/20 e.new7/13 )/8 (/11 e.new8/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.new7 as range 13
    // closed e.new8 as range 15
    context[22] = refalrts::tvar_left( context[21], context[17], context[18] );
    if( ! context[22] )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[17], context[18] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    // closed e.new4 as range 23
    if( ! refalrts::svar_left( context[27], context[17], context[18] ) )
      continue;
    // closed e.new6 as range 17
    do {
      // </0 & SubstituteSetsToRules/4 (/7 (/19 t.new10/21 (/25 e.new13/28 )/26 s.new11/27 t.new12/36 )/20 e.new9/32 )/8 (/11 e.new14/34 )/12 >/1
      context[28] = context[23];
      context[29] = context[24];
      context[30] = context[17];
      context[31] = context[18];
      context[32] = context[13];
      context[33] = context[14];
      context[34] = context[15];
      context[35] = context[16];
      // closed e.new13 as range 28
      // closed e.new9 as range 32
      // closed e.new14 as range 34
      context[37] = refalrts::tvar_left( context[36], context[30], context[31] );
      if( ! context[37] )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      do {
        // </0 & SubstituteSetsToRules/4 (/7 (/19 t.SetNamePos/21 (/25 e.Name/38 )/26 s.Used/27 (/36 # Chars/46 e.Content/44 )/37 )/20 e.Sets/40 )/8 (/11 e.Rules-B/47 (/53 t.SentNamePos/55 (/59 e.RuleName/57 )/60 e.Alternatives-B/61 (/67 (/71 # Set/73 t.SrcPos/76 e.Name/74 )/72 t.Flush/78 t.NextState/80 )/68 e.Alternatives-E/63 )/54 e.Rules-E/49 )/12 >/1
        context[38] = context[28];
        context[39] = context[29];
        context[40] = context[32];
        context[41] = context[33];
        context[42] = context[34];
        context[43] = context[35];
        context[44] = 0;
        context[45] = 0;
        if( ! refalrts::brackets_term( context[44], context[45], context[36] ) )
          continue;
        context[46] = refalrts::ident_left( identifiers[ident_Chars], context[44], context[45] );
        if( ! context[46] )
          continue;
        // closed e.Name as range 38
        // closed e.Content as range 44
        // closed e.Sets as range 40
        context[47] = 0;
        context[48] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[49] = context[42];
          context[50] = context[43];
          context[51] = 0;
          context[52] = 0;
          context[53] = refalrts::brackets_left( context[51], context[52], context[49], context[50] );
          if( ! context[53] )
            continue;
          refalrts::bracket_pointers(context[53], context[54]);
          // closed e.Rules-E as range 49
          context[56] = refalrts::tvar_left( context[55], context[51], context[52] );
          if( ! context[56] )
            continue;
          context[57] = 0;
          context[58] = 0;
          context[59] = refalrts::brackets_left( context[57], context[58], context[51], context[52] );
          if( ! context[59] )
            continue;
          refalrts::bracket_pointers(context[59], context[60]);
          // closed e.RuleName as range 57
          context[61] = 0;
          context[62] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[63] = context[51];
            context[64] = context[52];
            context[65] = 0;
            context[66] = 0;
            context[67] = refalrts::brackets_left( context[65], context[66], context[63], context[64] );
            if( ! context[67] )
              continue;
            refalrts::bracket_pointers(context[67], context[68]);
            context[69] = 0;
            context[70] = 0;
            context[71] = refalrts::brackets_left( context[69], context[70], context[65], context[66] );
            if( ! context[71] )
              continue;
            refalrts::bracket_pointers(context[71], context[72]);
            context[73] = refalrts::ident_left( identifiers[ident_Set], context[69], context[70] );
            if( ! context[73] )
              continue;
            if( ! refalrts::repeated_evar_right( vm, context[74], context[75], context[38], context[39], context[69], context[70] ) )
              continue;
            // closed e.Alternatives-E as range 63
            context[77] = refalrts::tvar_left( context[76], context[69], context[70] );
            if( ! context[77] )
              continue;
            if( ! refalrts::empty_seq( context[69], context[70] ) )
              continue;
            context[79] = refalrts::tvar_left( context[78], context[65], context[66] );
            if( ! context[79] )
              continue;
            context[81] = refalrts::tvar_left( context[80], context[65], context[66] );
            if( ! context[81] )
              continue;
            if( ! refalrts::empty_seq( context[65], context[66] ) )
              continue;
            //DEBUG: t.SetNamePos: 21
            //DEBUG: s.Used: 27
            //DEBUG: e.Name: 38
            //DEBUG: e.Content: 44
            //DEBUG: e.Sets: 40
            //DEBUG: e.Rules-B: 47
            //DEBUG: e.Rules-E: 49
            //DEBUG: t.SentNamePos: 55
            //DEBUG: e.RuleName: 57
            //DEBUG: e.Alternatives-B: 61
            //DEBUG: e.Alternatives-E: 63
            //DEBUG: t.SrcPos: 76
            //DEBUG: t.Flush: 78
            //DEBUG: t.NextState: 80

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} s.Used/27 {REMOVED TILE} t.SrcPos/76 e.Name/74 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/19 AsIs: t.SetNamePos/21 AsIs: (/25 AsIs: e.Name/38 AsIs: )/26 } # Used/82 Tile{ AsIs: (/36 AsIs: # Chars/46 AsIs: e.Content/44 AsIs: )/37 AsIs: )/20 AsIs: e.Sets/40 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B/47 AsIs: (/53 AsIs: t.SentNamePos/55 AsIs: (/59 AsIs: e.RuleName/57 AsIs: )/60 AsIs: e.Alternatives-B/61 AsIs: (/67 AsIs: (/71 Reuse: # Chars/73 } e.Content/44/83 Tile{ AsIs: )/72 AsIs: t.Flush/78 AsIs: t.NextState/80 AsIs: )/68 AsIs: e.Alternatives-E/63 AsIs: )/54 AsIs: e.Rules-E/49 AsIs: )/12 AsIs: >/1 ]] }
            refalrts::alloc_ident(vm, context[82], identifiers[ident_Used]);
            refalrts::copy_evar(vm, context[83], context[84], context[44], context[45]);
            refalrts::update_ident(context[73], identifiers[ident_Chars]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[11], context[12] );
            refalrts::link_brackets( context[53], context[54] );
            refalrts::link_brackets( context[67], context[68] );
            refalrts::link_brackets( context[71], context[72] );
            refalrts::link_brackets( context[59], context[60] );
            refalrts::link_brackets( context[7], context[8] );
            refalrts::link_brackets( context[19], context[20] );
            refalrts::link_brackets( context[36], context[37] );
            refalrts::link_brackets( context[25], context[26] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[72];
            res = refalrts::splice_evar( res, context[83], context[84] );
            res = refalrts::splice_evar( res, context[36], context[73] );
            res = refalrts::splice_elem( res, context[82] );
            refalrts::splice_to_freelist_open( vm, context[26], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[61], context[62], context[51], context[52] ) );
        } while ( refalrts::open_evar_advance( context[47], context[48], context[42], context[43] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SubstituteSetsToRules/4 (/7 (/19 t.SetNamePos/21 (/25 e.Name/38 )/26 s.Used/27 # Any/36 )/20 e.Sets/40 )/8 (/11 e.Rules-B/44 (/50 t.SentNamePos/52 (/56 e.RuleName/54 )/57 e.Alternatives-B/58 (/64 (/68 # Set/70 t.SrcPos/73 e.Name/71 )/69 t.Flush/75 t.NextState/77 )/65 e.Alternatives-E/60 )/51 e.Rules-E/46 )/12 >/1
      context[38] = context[28];
      context[39] = context[29];
      context[40] = context[32];
      context[41] = context[33];
      context[42] = context[34];
      context[43] = context[35];
      if( ! refalrts::ident_term( identifiers[ident_Any], context[36] ) )
        continue;
      // closed e.Name as range 38
      // closed e.Sets as range 40
      context[44] = 0;
      context[45] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[46] = context[42];
        context[47] = context[43];
        context[48] = 0;
        context[49] = 0;
        context[50] = refalrts::brackets_left( context[48], context[49], context[46], context[47] );
        if( ! context[50] )
          continue;
        refalrts::bracket_pointers(context[50], context[51]);
        // closed e.Rules-E as range 46
        context[53] = refalrts::tvar_left( context[52], context[48], context[49] );
        if( ! context[53] )
          continue;
        context[54] = 0;
        context[55] = 0;
        context[56] = refalrts::brackets_left( context[54], context[55], context[48], context[49] );
        if( ! context[56] )
          continue;
        refalrts::bracket_pointers(context[56], context[57]);
        // closed e.RuleName as range 54
        context[58] = 0;
        context[59] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[60] = context[48];
          context[61] = context[49];
          context[62] = 0;
          context[63] = 0;
          context[64] = refalrts::brackets_left( context[62], context[63], context[60], context[61] );
          if( ! context[64] )
            continue;
          refalrts::bracket_pointers(context[64], context[65]);
          context[66] = 0;
          context[67] = 0;
          context[68] = refalrts::brackets_left( context[66], context[67], context[62], context[63] );
          if( ! context[68] )
            continue;
          refalrts::bracket_pointers(context[68], context[69]);
          context[70] = refalrts::ident_left( identifiers[ident_Set], context[66], context[67] );
          if( ! context[70] )
            continue;
          if( ! refalrts::repeated_evar_right( vm, context[71], context[72], context[38], context[39], context[66], context[67] ) )
            continue;
          // closed e.Alternatives-E as range 60
          context[74] = refalrts::tvar_left( context[73], context[66], context[67] );
          if( ! context[74] )
            continue;
          if( ! refalrts::empty_seq( context[66], context[67] ) )
            continue;
          context[76] = refalrts::tvar_left( context[75], context[62], context[63] );
          if( ! context[76] )
            continue;
          context[78] = refalrts::tvar_left( context[77], context[62], context[63] );
          if( ! context[78] )
            continue;
          if( ! refalrts::empty_seq( context[62], context[63] ) )
            continue;
          //DEBUG: t.SetNamePos: 21
          //DEBUG: s.Used: 27
          //DEBUG: e.Name: 38
          //DEBUG: e.Sets: 40
          //DEBUG: e.Rules-B: 44
          //DEBUG: e.Rules-E: 46
          //DEBUG: t.SentNamePos: 52
          //DEBUG: e.RuleName: 54
          //DEBUG: e.Alternatives-B: 58
          //DEBUG: e.Alternatives-E: 60
          //DEBUG: t.SrcPos: 73
          //DEBUG: t.Flush: 75
          //DEBUG: t.NextState: 77

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Used/27 {REMOVED TILE} {REMOVED TILE} t.SrcPos/73 e.Name/71 )/69 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: (/19 AsIs: t.SetNamePos/21 AsIs: (/25 AsIs: e.Name/38 AsIs: )/26 } Tile{ Reuse: # Used/70 } Tile{ AsIs: # Any/36 AsIs: )/20 AsIs: e.Sets/40 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B/44 AsIs: (/50 AsIs: t.SentNamePos/52 AsIs: (/56 AsIs: e.RuleName/54 AsIs: )/57 AsIs: e.Alternatives-B/58 AsIs: (/64 HalfReuse: # Any/68 } Tile{ AsIs: t.Flush/75 AsIs: t.NextState/77 AsIs: )/65 AsIs: e.Alternatives-E/60 AsIs: )/51 AsIs: e.Rules-E/46 AsIs: )/12 AsIs: >/1 ]] }
          refalrts::update_ident(context[70], identifiers[ident_Used]);
          refalrts::reinit_ident(context[68], identifiers[ident_Any]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[50], context[51] );
          refalrts::link_brackets( context[64], context[65] );
          refalrts::link_brackets( context[56], context[57] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[19], context[20] );
          refalrts::link_brackets( context[25], context[26] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[75];
          res = refalrts::splice_evar( res, context[36], context[68] );
          res = refalrts::splice_elem( res, context[70] );
          refalrts::splice_to_freelist_open( vm, context[26], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[58], context[59], context[48], context[49] ) );
      } while ( refalrts::open_evar_advance( context[44], context[45], context[42], context[43] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SubstituteSetsToRules/4 (/7 (/19 t.SetNamePos/21 (/25 e.Name/28 )/26 # NotUsed/27 e.Content/30 )/20 e.Sets/32 )/8 (/11 e.Rules/34 )/12 >/1
      context[28] = context[23];
      context[29] = context[24];
      context[30] = context[17];
      context[31] = context[18];
      context[32] = context[13];
      context[33] = context[14];
      context[34] = context[15];
      context[35] = context[16];
      if( ! refalrts::ident_term( identifiers[ident_NotUsed], context[27] ) )
        continue;
      // closed e.Name as range 28
      // closed e.Content as range 30
      // closed e.Sets as range 32
      // closed e.Rules as range 34
      //DEBUG: t.SetNamePos: 21
      //DEBUG: e.Name: 28
      //DEBUG: e.Content: 30
      //DEBUG: e.Sets: 32
      //DEBUG: e.Rules: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content/30 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 } Tile{ AsIs: t.SetNamePos/21 } 'S'/36 Tile{ HalfReuse: 'e'/7 HalfReuse: 't'/19 } ' '/37 Tile{ HalfReuse: ':'/25 AsIs: e.Name/28 HalfReuse: ':'/26 HalfReuse: ' '/27 }"is not used"/38 >/40 </41 & SubstituteSetsToRules/42 Tile{ HalfReuse: (/20 AsIs: e.Sets/32 AsIs: )/8 AsIs: (/11 AsIs: e.Rules/34 AsIs: )/12 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[36], 'S');
      refalrts::alloc_char(vm, context[37], ' ');
      refalrts::alloc_chars(vm, context[38], context[39], "is not used", 11);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_SubstituteSetsToRules]);
      refalrts::update_name(context[4], functions[efunc_WarningAt]);
      refalrts::reinit_char(context[7], 'e');
      refalrts::reinit_char(context[19], 't');
      refalrts::reinit_char(context[25], ':');
      refalrts::reinit_char(context[26], ':');
      refalrts::reinit_char(context[27], ' ');
      refalrts::reinit_open_bracket(context[20]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[41] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[20], context[8] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[38], context[42] );
      res = refalrts::splice_evar( res, context[25], context[27] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_evar( res, context[7], context[19] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SubstituteSetsToRules/4 (/7 (/19 t.SetNamePos/21 (/25 e.Name/28 )/26 # Used/27 e.Content/30 )/20 e.Sets/32 )/8 (/11 e.Rules/34 )/12 >/1
    context[28] = context[23];
    context[29] = context[24];
    context[30] = context[17];
    context[31] = context[18];
    context[32] = context[13];
    context[33] = context[14];
    context[34] = context[15];
    context[35] = context[16];
    if( ! refalrts::ident_term( identifiers[ident_Used], context[27] ) )
      continue;
    // closed e.Name as range 28
    // closed e.Content as range 30
    // closed e.Sets as range 32
    // closed e.Rules as range 34
    //DEBUG: t.SetNamePos: 21
    //DEBUG: e.Name: 28
    //DEBUG: e.Content: 30
    //DEBUG: e.Sets: 32
    //DEBUG: e.Rules: 34

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 (/19 t.SetNamePos/21 (/25 e.Name/28 )/26 # Used/27 e.Content/30 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 } Tile{ HalfReuse: (/20 AsIs: e.Sets/32 AsIs: )/8 AsIs: (/11 AsIs: e.Rules/34 AsIs: )/12 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[20]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[20], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.new3/9 )/12 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 9
  do {
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B/15 (/21 t.SentNamePos/23 (/27 e.RuleName/25 )/28 e.Alternatives-B/29 (/35 (/39 # Set/41 t.SrcPos/45 'A'/44 'n'/43 'y'/42 )/40 t.Flush/47 t.NextState/49 )/36 e.Alternatives-E/31 )/22 e.Rules-E/17 )/12 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[13];
      context[18] = context[14];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Rules-E as range 17
      context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[19], context[20] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.RuleName as range 25
      context[29] = 0;
      context[30] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[31] = context[19];
        context[32] = context[20];
        context[33] = 0;
        context[34] = 0;
        context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
        if( ! context[35] )
          continue;
        refalrts::bracket_pointers(context[35], context[36]);
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::brackets_left( context[37], context[38], context[33], context[34] );
        if( ! context[39] )
          continue;
        refalrts::bracket_pointers(context[39], context[40]);
        context[41] = refalrts::ident_left( identifiers[ident_Set], context[37], context[38] );
        if( ! context[41] )
          continue;
        context[42] = refalrts::char_right( 'y', context[37], context[38] );
        if( ! context[42] )
          continue;
        context[43] = refalrts::char_right( 'n', context[37], context[38] );
        if( ! context[43] )
          continue;
        context[44] = refalrts::char_right( 'A', context[37], context[38] );
        if( ! context[44] )
          continue;
        // closed e.Alternatives-E as range 31
        context[46] = refalrts::tvar_left( context[45], context[37], context[38] );
        if( ! context[46] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        context[48] = refalrts::tvar_left( context[47], context[33], context[34] );
        if( ! context[48] )
          continue;
        context[50] = refalrts::tvar_left( context[49], context[33], context[34] );
        if( ! context[50] )
          continue;
        if( ! refalrts::empty_seq( context[33], context[34] ) )
          continue;
        //DEBUG: e.Rules-B: 15
        //DEBUG: e.Rules-E: 17
        //DEBUG: t.SentNamePos: 23
        //DEBUG: e.RuleName: 25
        //DEBUG: e.Alternatives-B: 29
        //DEBUG: e.Alternatives-E: 31
        //DEBUG: t.SrcPos: 45
        //DEBUG: t.Flush: 47
        //DEBUG: t.NextState: 49

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} # Set/41 t.SrcPos/45 'A'/44 'n'/43 'y'/42 )/40 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SubstituteSetsToRules/4 AsIs: (/7 AsIs: )/8 AsIs: (/11 AsIs: e.Rules-B/15 AsIs: (/21 AsIs: t.SentNamePos/23 AsIs: (/27 AsIs: e.RuleName/25 AsIs: )/28 AsIs: e.Alternatives-B/29 AsIs: (/35 HalfReuse: # Any/39 } Tile{ AsIs: t.Flush/47 AsIs: t.NextState/49 AsIs: )/36 AsIs: e.Alternatives-E/31 AsIs: )/22 AsIs: e.Rules-E/17 AsIs: )/12 AsIs: >/1 ]] }
        refalrts::reinit_ident(context[39], identifiers[ident_Any]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[21], context[22] );
        refalrts::link_brackets( context[35], context[36] );
        refalrts::link_brackets( context[27], context[28] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[47];
        refalrts::splice_to_freelist_open( vm, context[39], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[29], context[30], context[19], context[20] ) );
    } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules-B/15 (/21 t.SentNamePos/23 (/27 e.RuleName/25 )/28 e.Alternatives-B/29 (/35 (/39 # Set/41 t.SrcPos/42 e.Name/37 )/40 t.Flush/44 t.NextState/46 )/36 e.Alternatives-E/31 )/22 e.Rules-E/17 )/12 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = 0;
    context[16] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[17] = context[13];
      context[18] = context[14];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e.Rules-E as range 17
      context[24] = refalrts::tvar_left( context[23], context[19], context[20] );
      if( ! context[24] )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[19], context[20] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.RuleName as range 25
      context[29] = 0;
      context[30] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[31] = context[19];
        context[32] = context[20];
        context[33] = 0;
        context[34] = 0;
        context[35] = refalrts::brackets_left( context[33], context[34], context[31], context[32] );
        if( ! context[35] )
          continue;
        refalrts::bracket_pointers(context[35], context[36]);
        context[37] = 0;
        context[38] = 0;
        context[39] = refalrts::brackets_left( context[37], context[38], context[33], context[34] );
        if( ! context[39] )
          continue;
        refalrts::bracket_pointers(context[39], context[40]);
        context[41] = refalrts::ident_left( identifiers[ident_Set], context[37], context[38] );
        if( ! context[41] )
          continue;
        // closed e.Alternatives-E as range 31
        context[43] = refalrts::tvar_left( context[42], context[37], context[38] );
        if( ! context[43] )
          continue;
        // closed e.Name as range 37
        context[45] = refalrts::tvar_left( context[44], context[33], context[34] );
        if( ! context[45] )
          continue;
        context[47] = refalrts::tvar_left( context[46], context[33], context[34] );
        if( ! context[47] )
          continue;
        if( ! refalrts::empty_seq( context[33], context[34] ) )
          continue;
        //DEBUG: e.Rules-B: 15
        //DEBUG: e.Rules-E: 17
        //DEBUG: t.SentNamePos: 23
        //DEBUG: e.RuleName: 25
        //DEBUG: e.Alternatives-B: 29
        //DEBUG: e.Alternatives-E: 31
        //DEBUG: t.SrcPos: 42
        //DEBUG: e.Name: 37
        //DEBUG: t.Flush: 44
        //DEBUG: t.NextState: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} e.Rules-B/15 {REMOVED TILE} t.SentNamePos/23 {REMOVED TILE} e.RuleName/25 {REMOVED TILE} e.Alternatives-B/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Flush/44 t.NextState/46 {REMOVED TILE} e.Alternatives-E/31 {REMOVED TILE} e.Rules-E/17 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos/42 } Tile{ HalfReuse: 'U'/40 } Tile{ HalfReuse: 'n'/35 HalfReuse: 'd'/39 HalfReuse: 'e'/41 } Tile{ HalfReuse: 'c'/7 HalfReuse: 'l'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'r'/12 } Tile{ HalfReuse: 'e'/22 } Tile{ HalfReuse: 'd'/36 } Tile{ HalfReuse: ' '/28 } Tile{ HalfReuse: 's'/27 } Tile{ HalfReuse: 'e'/21 }"t "/48 Tile{ AsIs: e.Name/37 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[48], context[49], "t ", 2);
        refalrts::update_name(context[4], functions[efunc_ErrorAt]);
        refalrts::reinit_char(context[40], 'U');
        refalrts::reinit_char(context[35], 'n');
        refalrts::reinit_char(context[39], 'd');
        refalrts::reinit_char(context[41], 'e');
        refalrts::reinit_char(context[7], 'c');
        refalrts::reinit_char(context[8], 'l');
        refalrts::reinit_char(context[11], 'a');
        refalrts::reinit_char(context[12], 'r');
        refalrts::reinit_char(context[22], 'e');
        refalrts::reinit_char(context[36], 'd');
        refalrts::reinit_char(context[28], ' ');
        refalrts::reinit_char(context[27], 's');
        refalrts::reinit_char(context[21], 'e');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_elem( res, context[27] );
        res = refalrts::splice_elem( res, context[28] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_elem( res, context[22] );
        res = refalrts::splice_elem( res, context[12] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        res = refalrts::splice_evar( res, context[35], context[41] );
        res = refalrts::splice_elem( res, context[40] );
        res = refalrts::splice_evar( res, context[42], context[43] );
        refalrts::splice_to_freelist_open( vm, context[4], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[29], context[30], context[19], context[20] ) );
    } while ( refalrts::open_evar_advance( context[15], context[16], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 e.Rules/9 )/12 >/1
  // closed e.Rules as range 9
  //DEBUG: e.Rules: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SubstituteSetsToRules/4 (/7 )/8 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Rules/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SubstituteSetsToRules("SubstituteSetsToRules", COOKIE1_, COOKIE2_, func_SubstituteSetsToRules);


static refalrts::FnResult func_SetDiff(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & SetDiff/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SetDiff/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  do {
    // </0 & SetDiff/4 (/7 e.Set/13 )/8 (/11 # Any/17 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = refalrts::ident_left( identifiers[ident_Any], context[15], context[16] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Set as range 13
    //DEBUG: e.Set: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetDiff/4 (/7 e.Set/13 )/8 (/11 # Any/17 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SetDiff/4 (/7 e.Set1-B/17 s.Common/23 e.Set1-E/19 )/8 (/11 e.Set2-B/24 s.Common/28 e.Set2-E/26 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      // closed e.Set1-E as range 19
      context[24] = 0;
      context[25] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[26] = context[21];
        context[27] = context[22];
        if( ! refalrts::repeated_stvar_left( vm, context[28], context[23], context[26], context[27] ) )
          continue;
        // closed e.Set2-E as range 26
        //DEBUG: e.Set1-B: 17
        //DEBUG: s.Common: 23
        //DEBUG: e.Set1-E: 19
        //DEBUG: e.Set2-B: 24
        //DEBUG: e.Set2-E: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Common/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Common/28 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetDiff/4 AsIs: (/7 } Tile{ AsIs: e.Set1-B/17 } Tile{ AsIs: e.Set1-E/19 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Set2-B/24 } Tile{ AsIs: e.Set2-E/26 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[8], context[11] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[24], context[25], context[21], context[22] ) );
    } while ( refalrts::open_evar_advance( context[17], context[18], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetDiff/4 (/7 e.SetDiff/5 )/8 (/11 e.Set2/9 )/12 >/1
  // closed e.SetDiff as range 5
  // closed e.Set2 as range 9
  //DEBUG: e.SetDiff: 5
  //DEBUG: e.Set2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetDiff/4 (/7 {REMOVED TILE} )/8 (/11 e.Set2/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.SetDiff/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetDiff("SetDiff", COOKIE1_, COOKIE2_, func_SetDiff);


static refalrts::FnResult func_NormalizeAlternative(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & NormalizeAlternative/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & NormalizeAlternative/4 (/7 s.new1/13 e.new2/5 )/8 (/11 t.new3/14 t.new4/16 t.new5/18 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 5
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::tvar_left( context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF/13 e.CatchedChars/20 )/8 (/11 (/14 # Chars/24 e.Alternative/22 )/15 t.Flush/16 t.Next/18 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[22] = 0;
    context[23] = 0;
    if( ! refalrts::brackets_term( context[22], context[23], context[14] ) )
      continue;
    context[24] = refalrts::ident_left( identifiers[ident_Chars], context[22], context[23] );
    if( ! context[24] )
      continue;
    // closed e.CatchedChars as range 20
    // closed e.Alternative as range 22
    //DEBUG: t.Flush: 16
    //DEBUG: t.Next: 18
    //DEBUG: s.CatchedEOF: 13
    //DEBUG: e.CatchedChars: 20
    //DEBUG: e.Alternative: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.CatchedEOF/13 } Tile{ AsIs: </0 Reuse: & UniqueSet/4 } Tile{ AsIs: e.CatchedChars/20 } Tile{ AsIs: e.Alternative/22 } Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: (/14 HalfReuse: </24 } & SetDiff/25 (/26 e.Alternative/22/27 )/29 (/30 e.CatchedChars/20/31 )/33 >/34 Tile{ AsIs: )/15 AsIs: t.Flush/16 AsIs: t.Next/18 AsIs: )/12 } Tile{ ]] }
    refalrts::alloc_name(vm, context[25], functions[efunc_SetDiff]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::copy_evar(vm, context[27], context[28], context[22], context[23]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::copy_evar(vm, context[31], context[32], context[20], context[21]);
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::update_name(context[4], functions[efunc_UniqueSet]);
    refalrts::reinit_open_call(context[24]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[24] );
    refalrts::link_brackets( context[30], context[33] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[12] );
    res = refalrts::splice_evar( res, context[25], context[34] );
    res = refalrts::splice_evar( res, context[8], context[24] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NormalizeAlternative/4 (/7 s.new6/13 e.new7/5 )/8 (/11 s.new8/14 t.new9/16 t.new10/18 )/12 >/1
  if( ! refalrts::svar_term( context[14], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 5
  do {
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF/13 e.CatchedChars/20 )/8 (/11 # Any/14 t.Flush/16 t.Next/18 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Any], context[14] ) )
      continue;
    // closed e.CatchedChars as range 20
    //DEBUG: t.Flush: 16
    //DEBUG: t.Next: 18
    //DEBUG: s.CatchedEOF: 13
    //DEBUG: e.CatchedChars: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NormalizeAlternative/4 {REMOVED TILE} e.CatchedChars/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.CatchedEOF/13 } Tile{ HalfReuse: # Any/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Any/14 AsIs: t.Flush/16 AsIs: t.Next/18 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Any]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NormalizeAlternative/4 (/7 s.new11/13 e.new12/5 )/8 (/11 # Empty/14 t.new13/16 t.new14/18 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_Empty], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new12 as range 5
  do {
    // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF/13 e.CatchedChars/20 )/8 (/11 # Empty/14 t.Flush/16 # Finitive/18 )/12 >/1
    context[20] = context[5];
    context[21] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[18] ) )
      continue;
    // closed e.CatchedChars as range 20
    //DEBUG: t.Flush: 16
    //DEBUG: s.CatchedEOF: 13
    //DEBUG: e.CatchedChars: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 s.CatchedEOF/13 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # EOF-Catched/4 } Tile{ AsIs: e.CatchedChars/20 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Empty/14 AsIs: t.Flush/16 AsIs: # Finitive/18 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_EOFm_Catched]);
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NormalizeAlternative/4 (/7 s.CatchedEOF/13 e.CatchedChars/5 )/8 (/11 # Empty/14 t.Flush/16 t.NextRule/18 )/12 >/1
  // closed e.CatchedChars as range 5
  //DEBUG: t.Flush: 16
  //DEBUG: t.NextRule: 18
  //DEBUG: s.CatchedEOF: 13
  //DEBUG: e.CatchedChars: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.CatchedEOF/13 e.CatchedChars/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # EOF-Catched/4 HalfReuse: # Any/7 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Empty/14 AsIs: t.Flush/16 AsIs: t.NextRule/18 AsIs: )/12 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_EOFm_Catched]);
  refalrts::reinit_ident(context[7], identifiers[ident_Any]);
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[12] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NormalizeAlternative("NormalizeAlternative", COOKIE1_, COOKIE2_, func_NormalizeAlternative);


static refalrts::FnResult func_SplitAlternatives(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & SplitAlternatives/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SplitAlternatives/4 t.new1/13 (/11 e.new2/9 )/12 (/7 t.new3/15 t.new4/17 t.new5/19 )/8 >/1
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
  // closed e.new2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::tvar_left( context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SplitAlternatives/4 t.new6/13 (/11 e.new7/21 )/12 (/7 s.new8/15 t.new9/17 t.new10/19 )/8 >/1
    context[21] = context[9];
    context[22] = context[10];
    if( ! refalrts::svar_term( context[15], context[15] ) )
      continue;
    // closed e.new7 as range 21
    do {
      // </0 & SplitAlternatives/4 t.SentNamePos/13 (/11 e.Name/23 )/12 (/7 # Empty/15 t.Flush/17 t.Next/19 )/8 >/1
      context[23] = context[21];
      context[24] = context[22];
      if( ! refalrts::ident_term( identifiers[ident_Empty], context[15] ) )
        continue;
      // closed e.Name as range 23
      //DEBUG: t.SentNamePos: 13
      //DEBUG: t.Flush: 17
      //DEBUG: t.Next: 19
      //DEBUG: e.Name: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SplitAlternatives/4 t.SentNamePos/13 (/11 e.Name/23 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Empty/15 AsIs: t.Flush/17 AsIs: t.Next/19 AsIs: )/8 } Tile{ ]] }
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SplitAlternatives/4 t.SentNamePos/13 (/11 e.Name/23 )/12 (/7 # Any/15 t.Flush/17 t.Next/19 )/8 >/1
    context[23] = context[21];
    context[24] = context[22];
    if( ! refalrts::ident_term( identifiers[ident_Any], context[15] ) )
      continue;
    // closed e.Name as range 23
    //DEBUG: t.SentNamePos: 13
    //DEBUG: t.Flush: 17
    //DEBUG: t.Next: 19
    //DEBUG: e.Name: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SplitAlternatives/4 t.SentNamePos/13 (/11 e.Name/23 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Any/15 AsIs: t.Flush/17 AsIs: t.Next/19 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SplitAlternatives/4 t.new6/13 (/11 e.new7/9 )/12 (/7 (/15 e.new8/21 )/16 t.new9/17 t.new10/19 )/8 >/1
  context[21] = 0;
  context[22] = 0;
  if( ! refalrts::brackets_term( context[21], context[22], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 9
  // closed e.new8 as range 21
  do {
    // </0 & SplitAlternatives/4 t.SentNamePos/13 (/11 e.Name/23 )/12 (/7 (/15 )/16 t.Flush/17 t.Next/19 )/8 >/1
    context[23] = context[9];
    context[24] = context[10];
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.Name as range 23
    //DEBUG: t.SentNamePos: 13
    //DEBUG: t.Flush: 17
    //DEBUG: t.Next: 19
    //DEBUG: e.Name: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Flush/17 t.Next/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos/13 HalfReuse: 'R'/11 }"ule "/25 Tile{ AsIs: e.Name/23 } Tile{ HalfReuse: ' '/12 HalfReuse: 'h'/7 HalfReuse: 'a'/15 HalfReuse: 's'/16 }" unreached alternative"/27 Tile{ HalfReuse: 's'/8 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[25], context[26], "ule ", 4);
    refalrts::alloc_chars(vm, context[27], context[28], " unreached alternative", 22);
    refalrts::update_name(context[4], functions[efunc_WarningAt]);
    refalrts::reinit_char(context[11], 'R');
    refalrts::reinit_char(context[12], ' ');
    refalrts::reinit_char(context[7], 'h');
    refalrts::reinit_char(context[15], 'a');
    refalrts::reinit_char(context[16], 's');
    refalrts::reinit_char(context[8], 's');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SplitAlternatives/4 t.new11/13 (/11 e.new12/9 )/12 (/7 (/15 s.new13/23 e.new14/21 )/16 t.new15/17 t.new16/19 )/8 >/1
  // closed e.new12 as range 9
  if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new14 as range 21
  do {
    // </0 & SplitAlternatives/4 t.SentNamePos/13 (/11 e.Name/24 )/12 (/7 (/15 s.Char/23 )/16 t.Flush/17 t.Next/19 )/8 >/1
    context[24] = context[9];
    context[25] = context[10];
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.Name as range 24
    //DEBUG: t.SentNamePos: 13
    //DEBUG: t.Flush: 17
    //DEBUG: t.Next: 19
    //DEBUG: s.Char: 23
    //DEBUG: e.Name: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & SplitAlternatives/4 t.SentNamePos/13 (/11 e.Name/24 )/12 (/7 (/15 s.Char/23 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: s.Char23 /16 AsIs: t.Flush/17 AsIs: t.Next/19 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_svar( context[16], context[23] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[8] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SplitAlternatives/4 t.SentNamePos/13 (/11 e.Name/9 )/12 (/7 (/15 s.Char/23 e.Tail/21 )/16 t.Flush/17 t.Next/19 )/8 >/1
  // closed e.Name as range 9
  // closed e.Tail as range 21
  //DEBUG: t.SentNamePos: 13
  //DEBUG: t.Flush: 17
  //DEBUG: t.Next: 19
  //DEBUG: s.Char: 23
  //DEBUG: e.Name: 9
  //DEBUG: e.Tail: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/24 Tile{ AsIs: s.Char/23 } t.Flush/17/25 t.Next/19/27 )/29 Tile{ AsIs: </0 AsIs: & SplitAlternatives/4 AsIs: t.SentNamePos/13 AsIs: (/11 AsIs: e.Name/9 AsIs: )/12 AsIs: (/7 AsIs: (/15 } Tile{ AsIs: e.Tail/21 } Tile{ AsIs: )/16 AsIs: t.Flush/17 AsIs: t.Next/19 AsIs: )/8 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::copy_evar(vm, context[25], context[26], context[17], context[18]);
  refalrts::copy_evar(vm, context[27], context[28], context[19], context[20]);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[24], context[29] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_elem( res, context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SplitAlternatives("SplitAlternatives", COOKIE1_, COOKIE2_, func_SplitAlternatives);


static refalrts::FnResult func_gen_NormalizeRule_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  // </0 & NormalizeRule\1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & NormalizeRule\1/4 t.new1/5 (/9 e.new2/7 )/10 (/13 s.new3/15 e.new4/11 )/14 e.new5/2 >/1
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
  // closed e.new2 as range 7
  // closed e.new5 as range 2
  if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 11
  do {
    // </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.0/16 # EOF-Catched/20 )/10 (/13 # Any/15 )/14 e.Alternatives$a/18 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[2];
    context[19] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Any], context[15] ) )
      continue;
    context[20] = refalrts::ident_right( identifiers[ident_EOFm_Catched], context[16], context[17] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.0 as range 16
    // closed e.Alternatives$a as range 18
    //DEBUG: t.SentNamePos: 5
    //DEBUG: e.0: 16
    //DEBUG: e.Alternatives$a: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} e.0/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Alternatives$a/18 } Tile{ HalfReuse: (/20 HalfReuse: # Any/10 AsIs: (/13 Reuse: # Flush/15 HalfReuse: 'T'/14 }"okenLexerInternalError-Unexpected"/21 Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: t.SentNamePos/5 HalfReuse: 'R'/9 }"oot"/23 )/25 )/26 </27 & DefaultCatchEOF*2/28 # Any/29 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[21], context[22], "okenLexerInternalError-Unexpected", 33);
    refalrts::alloc_chars(vm, context[23], context[24], "oot", 3);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_gen_DefaultCatchEOF_D2]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_Any]);
    refalrts::reinit_open_bracket(context[20]);
    refalrts::reinit_ident(context[10], identifiers[ident_Any]);
    refalrts::update_ident(context[15], identifiers[ident_Flush]);
    refalrts::reinit_char(context[14], 'T');
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_char(context[9], 'R');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[27] );
    refalrts::link_brackets( context[20], context[26] );
    refalrts::link_brackets( context[4], context[25] );
    refalrts::link_brackets( context[13], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[29] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[20], context[14] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeRule\1/4 t.new6/5 (/9 e.new8/16 )/10 (/13 s.new9/15 e.new10/18 # Any/22 )/14 e.new7/20 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[11];
    context[19] = context[12];
    context[20] = context[2];
    context[21] = context[3];
    context[22] = refalrts::ident_right( identifiers[ident_Any], context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.new8 as range 16
    // closed e.new10 as range 18
    // closed e.new7 as range 20
    do {
      // </0 & NormalizeRule\1/4 t.new11/5 (/9 e.new13/23 )/10 (/13 # EOF-Catched/15 e.new14/25 # Any/22 )/14 e.new12/27 >/1
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_EOFm_Catched], context[15] ) )
        continue;
      // closed e.new13 as range 23
      // closed e.new14 as range 25
      // closed e.new12 as range 27
      do {
        // </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.Name/29 )/10 (/13 # EOF-Catched/15 # Any/22 )/14 e.Alternatives$a/31 >/1
        context[29] = context[23];
        context[30] = context[24];
        context[31] = context[27];
        context[32] = context[28];
        if( ! refalrts::empty_seq( context[25], context[26] ) )
          continue;
        // closed e.Name as range 29
        // closed e.Alternatives$a as range 31
        //DEBUG: t.SentNamePos: 5
        //DEBUG: e.Name: 29
        //DEBUG: e.Alternatives$a: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.Name/29 )/10 (/13 # EOF-Catched/15 # Any/22 )/14 {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Alternatives$a/31 } Tile{ ]] }
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[31], context[32] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.Name/29 )/10 (/13 # EOF-Catched/15 e.0/31 # EOF-Catched/35 # Any/22 )/14 e.Alternatives$a/33 >/1
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      context[34] = context[28];
      context[35] = refalrts::ident_right( identifiers[ident_EOFm_Catched], context[31], context[32] );
      if( ! context[35] )
        continue;
      // closed e.Name as range 29
      // closed e.0 as range 31
      // closed e.Alternatives$a as range 33
      //DEBUG: t.SentNamePos: 5
      //DEBUG: e.Name: 29
      //DEBUG: e.0: 31
      //DEBUG: e.Alternatives$a: 33

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name/29 {REMOVED TILE} e.0/31 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Alternatives$a/33 } (/36 Tile{ HalfReuse: # Any/10 AsIs: (/13 Reuse: # Flush/15 }"TokenLexerInternalError-Unexpected"/37 Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: t.SentNamePos/5 HalfReuse: 'R'/9 } 'o'/39 Tile{ HalfReuse: 'o'/35 HalfReuse: 't'/22 AsIs: )/14 } Tile{ HalfReuse: )/1 ]] }
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_chars(vm, context[37], context[38], "TokenLexerInternalError-Unexpected", 34);
      refalrts::alloc_char(vm, context[39], 'o');
      refalrts::reinit_ident(context[10], identifiers[ident_Any]);
      refalrts::update_ident(context[15], identifiers[ident_Flush]);
      refalrts::reinit_close_bracket(context[0]);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_char(context[9], 'R');
      refalrts::reinit_char(context[35], 'o');
      refalrts::reinit_char(context[22], 't');
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[36], context[1] );
      refalrts::link_brackets( context[4], context[14] );
      refalrts::link_brackets( context[13], context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[35], context[14] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_evar( res, context[10], context[15] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NormalizeRule\1/4 t.new11/5 (/9 e.new13/23 )/10 (/13 s.new14/15 e.new15/25 # EOF-Catched/29 # Any/22 )/14 e.new12/27 >/1
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = refalrts::ident_right( identifiers[ident_EOFm_Catched], context[25], context[26] );
      if( ! context[29] )
        continue;
      // closed e.new13 as range 23
      // closed e.new15 as range 25
      // closed e.new12 as range 27
      do {
        // </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.Name/30 )/10 (/13 # EOF-NotCatched/15 e.0/32 # EOF-Catched/29 # Any/22 )/14 e.Alternatives$a/34 >/1
        context[30] = context[23];
        context[31] = context[24];
        context[32] = context[25];
        context[33] = context[26];
        context[34] = context[27];
        context[35] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_EOFm_NotCatched], context[15] ) )
          continue;
        // closed e.Name as range 30
        // closed e.0 as range 32
        // closed e.Alternatives$a as range 34
        //DEBUG: t.SentNamePos: 5
        //DEBUG: e.Name: 30
        //DEBUG: e.0: 32
        //DEBUG: e.Alternatives$a: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name/30 {REMOVED TILE} e.0/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Alternatives$a/34 } (/36 Tile{ HalfReuse: # Any/1 } (/37 # Flush/38"TokenLexerInternalError-Unexpected"/39 Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: t.SentNamePos/5 HalfReuse: 'R'/9 }"oot"/41 )/43 Tile{ AsIs: )/10 AsIs: (/13 Reuse: # Empty/15 } (/44 # Flush/45"TokenLexerInternalError-UnexpectedEOF"/46 Tile{ HalfReuse: )/29 Reuse: # Finitive/22 AsIs: )/14 } Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::alloc_open_bracket(vm, context[37]);
        refalrts::alloc_ident(vm, context[38], identifiers[ident_Flush]);
        refalrts::alloc_chars(vm, context[39], context[40], "TokenLexerInternalError-Unexpected", 34);
        refalrts::alloc_chars(vm, context[41], context[42], "oot", 3);
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::alloc_open_bracket(vm, context[44]);
        refalrts::alloc_ident(vm, context[45], identifiers[ident_Flush]);
        refalrts::alloc_chars(vm, context[46], context[47], "TokenLexerInternalError-UnexpectedEOF", 37);
        refalrts::reinit_ident(context[1], identifiers[ident_Any]);
        refalrts::reinit_close_bracket(context[0]);
        refalrts::reinit_open_bracket(context[4]);
        refalrts::reinit_char(context[9], 'R');
        refalrts::update_ident(context[15], identifiers[ident_Empty]);
        refalrts::reinit_close_bracket(context[29]);
        refalrts::update_ident(context[22], identifiers[ident_Finitive]);
        refalrts::link_brackets( context[13], context[14] );
        refalrts::link_brackets( context[44], context[29] );
        refalrts::link_brackets( context[36], context[10] );
        refalrts::link_brackets( context[4], context[43] );
        refalrts::link_brackets( context[37], context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[29], context[14] );
        res = refalrts::splice_evar( res, context[44], context[47] );
        res = refalrts::splice_evar( res, context[10], context[15] );
        res = refalrts::splice_evar( res, context[41], context[43] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[37], context[40] );
        res = refalrts::splice_elem( res, context[1] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.Name/30 )/10 (/13 s.CatchedEOF/15 e.0/32 # EOF-Catched/29 # Any/22 )/14 e.Alternatives$a/34 >/1
      context[30] = context[23];
      context[31] = context[24];
      context[32] = context[25];
      context[33] = context[26];
      context[34] = context[27];
      context[35] = context[28];
      // closed e.Name as range 30
      // closed e.0 as range 32
      // closed e.Alternatives$a as range 34
      //DEBUG: t.SentNamePos: 5
      //DEBUG: s.CatchedEOF: 15
      //DEBUG: e.Name: 30
      //DEBUG: e.0: 32
      //DEBUG: e.Alternatives$a: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name/30 {REMOVED TILE} {REMOVED TILE} e.0/32 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Alternatives$a/34 } (/36 # Any/37 (/38 # Flush/39"TokenLexerInternalError-Unexpected"/40 Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: t.SentNamePos/5 HalfReuse: 'R'/9 } 'o'/42 Tile{ HalfReuse: 'o'/29 HalfReuse: 't'/22 AsIs: )/14 } )/43 Tile{ AsIs: </0 Reuse: & DefaultCatchEOF*2/4 } Tile{ AsIs: s.CatchedEOF/15 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::alloc_ident(vm, context[37], identifiers[ident_Any]);
      refalrts::alloc_open_bracket(vm, context[38]);
      refalrts::alloc_ident(vm, context[39], identifiers[ident_Flush]);
      refalrts::alloc_chars(vm, context[40], context[41], "TokenLexerInternalError-Unexpected", 34);
      refalrts::alloc_char(vm, context[42], 'o');
      refalrts::alloc_close_bracket(vm, context[43]);
      refalrts::reinit_char(context[9], 'R');
      refalrts::reinit_char(context[29], 'o');
      refalrts::reinit_char(context[22], 't');
      refalrts::update_name(context[4], functions[efunc_gen_DefaultCatchEOF_D2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[36], context[43] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[38], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_evar( res, context[29], context[14] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      res = refalrts::splice_evar( res, context[36], context[41] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NormalizeRule\1/4 t.new11/5 (/9 e.new13/23 )/10 (/13 s.new14/15 # Any/22 )/14 e.new12/25 >/1
    context[23] = context[16];
    context[24] = context[17];
    context[25] = context[20];
    context[26] = context[21];
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.new13 as range 23
    // closed e.new12 as range 25
    do {
      // </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.Name/27 )/10 (/13 # EOF-Catched/15 # Any/22 )/14 e.Alternatives$a/29 >/1
      context[27] = context[23];
      context[28] = context[24];
      context[29] = context[25];
      context[30] = context[26];
      if( ! refalrts::ident_term( identifiers[ident_EOFm_Catched], context[15] ) )
        continue;
      // closed e.Name as range 27
      // closed e.Alternatives$a as range 29
      //DEBUG: t.SentNamePos: 5
      //DEBUG: e.Name: 27
      //DEBUG: e.Alternatives$a: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 (/13 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningIfUncatched*1/4 AsIs: t.SentNamePos/5 } Tile{ AsIs: e.Name/27 } Tile{ AsIs: # EOF-Catched/15 AsIs: # Any/22 HalfReuse: >/14 } Tile{ AsIs: e.Alternatives$a/29 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_gen_WarningIfUncatched_D1]);
      refalrts::reinit_close_call(context[14]);
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[15], context[14] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.Name/27 )/10 (/13 # EOF-NotCatched/15 # Any/22 )/14 e.Alternatives$a/29 >/1
      context[27] = context[23];
      context[28] = context[24];
      context[29] = context[25];
      context[30] = context[26];
      if( ! refalrts::ident_term( identifiers[ident_EOFm_NotCatched], context[15] ) )
        continue;
      // closed e.Name as range 27
      // closed e.Alternatives$a as range 29
      //DEBUG: t.SentNamePos: 5
      //DEBUG: e.Name: 27
      //DEBUG: e.Alternatives$a: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningIfUncatched*1/4 AsIs: t.SentNamePos/5 } Tile{ AsIs: e.Name/27 } Tile{ AsIs: # EOF-NotCatched/15 AsIs: # Any/22 HalfReuse: >/14 AsIs: e.Alternatives$a/29 HalfReuse: (/1 } Tile{ HalfReuse: # Empty/10 AsIs: (/13 } # Flush/31 Tile{ HalfReuse: 'T'/9 }"okenLexerInternalError-UnexpectedEOF"/32 )/34 # Finitive/35 )/36 Tile{ ]] }
      refalrts::alloc_ident(vm, context[31], identifiers[ident_Flush]);
      refalrts::alloc_chars(vm, context[32], context[33], "okenLexerInternalError-UnexpectedEOF", 36);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::alloc_ident(vm, context[35], identifiers[ident_Finitive]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::update_name(context[4], functions[efunc_gen_WarningIfUncatched_D1]);
      refalrts::reinit_close_call(context[14]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_ident(context[10], identifiers[ident_Empty]);
      refalrts::reinit_char(context[9], 'T');
      refalrts::link_brackets( context[1], context[36] );
      refalrts::link_brackets( context[13], context[34] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[32], context[36] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[10], context[13] );
      res = refalrts::splice_evar( res, context[15], context[1] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.Name/27 )/10 (/13 s.CatchedEOF/15 # Any/22 )/14 e.Alternatives$a/29 >/1
    context[27] = context[23];
    context[28] = context[24];
    context[29] = context[25];
    context[30] = context[26];
    // closed e.Name as range 27
    // closed e.Alternatives$a as range 29
    //DEBUG: t.SentNamePos: 5
    //DEBUG: s.CatchedEOF: 15
    //DEBUG: e.Name: 27
    //DEBUG: e.Alternatives$a: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningIfUncatched*1/4 AsIs: t.SentNamePos/5 } Tile{ AsIs: e.Name/27 } Tile{ AsIs: s.CatchedEOF/15 AsIs: # Any/22 HalfReuse: >/14 AsIs: e.Alternatives$a/29 HalfReuse: </1 } Tile{ HalfReuse: & DefaultCatchEOF*2/10 HalfReuse: s.CatchedEOF15 /13 } Tile{ HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_gen_WarningIfUncatched_D1]);
    refalrts::reinit_close_call(context[14]);
    refalrts::reinit_open_call(context[1]);
    refalrts::reinit_name(context[10], functions[efunc_gen_DefaultCatchEOF_D2]);
    refalrts::reinit_svar( context[13], context[15] );
    refalrts::reinit_close_call(context[9]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.Name/16 )/10 (/13 # EOF-Catched/15 e.CatchedChars/18 )/14 e.Alternatives$a/20 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[11];
    context[19] = context[12];
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_EOFm_Catched], context[15] ) )
      continue;
    // closed e.Name as range 16
    // closed e.CatchedChars as range 18
    // closed e.Alternatives$a as range 20
    //DEBUG: t.SentNamePos: 5
    //DEBUG: e.Name: 16
    //DEBUG: e.CatchedChars: 18
    //DEBUG: e.Alternatives$a: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningIfUncatched*1/4 AsIs: t.SentNamePos/5 } Tile{ AsIs: e.Name/16 } Tile{ AsIs: # EOF-Catched/15 AsIs: e.CatchedChars/18 HalfReuse: >/14 AsIs: e.Alternatives$a/20 HalfReuse: (/1 } # Any/22 Tile{ AsIs: (/9 } # Flush/23"TokenLexerInternalError-Unexpected"/24 Tile{ AsIs: )/10 AsIs: (/13 } t.SentNamePos/5/26"Root"/28 )/30 )/31 Tile{ ]] }
    refalrts::alloc_ident(vm, context[22], identifiers[ident_Any]);
    refalrts::alloc_ident(vm, context[23], identifiers[ident_Flush]);
    refalrts::alloc_chars(vm, context[24], context[25], "TokenLexerInternalError-Unexpected", 34);
    refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
    refalrts::alloc_chars(vm, context[28], context[29], "Root", 4);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_close_bracket(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_gen_WarningIfUncatched_D1]);
    refalrts::reinit_close_call(context[14]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[1], context[31] );
    refalrts::link_brackets( context[13], context[30] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[26], context[31] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.Name/16 )/10 (/13 # EOF-NotCatched/15 e.CatchedChars/18 )/14 e.Alternatives$a/20 >/1
    context[16] = context[7];
    context[17] = context[8];
    context[18] = context[11];
    context[19] = context[12];
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_EOFm_NotCatched], context[15] ) )
      continue;
    // closed e.Name as range 16
    // closed e.CatchedChars as range 18
    // closed e.Alternatives$a as range 20
    //DEBUG: t.SentNamePos: 5
    //DEBUG: e.Name: 16
    //DEBUG: e.CatchedChars: 18
    //DEBUG: e.Alternatives$a: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningIfUncatched*1/4 AsIs: t.SentNamePos/5 } Tile{ AsIs: e.Name/16 } Tile{ AsIs: # EOF-NotCatched/15 AsIs: e.CatchedChars/18 HalfReuse: >/14 AsIs: e.Alternatives$a/20 HalfReuse: (/1 } # Any/22 Tile{ AsIs: (/9 } # Flush/23"TokenLexerInternalError-Unexpected"/24 Tile{ AsIs: )/10 AsIs: (/13 } t.SentNamePos/5/26"Root"/28 )/30 )/31 (/32 # Empty/33 (/34 # Flush/35"TokenLexerInternalError-UnexpectedEOF"/36 )/38 # Finitive/39 )/40 Tile{ ]] }
    refalrts::alloc_ident(vm, context[22], identifiers[ident_Any]);
    refalrts::alloc_ident(vm, context[23], identifiers[ident_Flush]);
    refalrts::alloc_chars(vm, context[24], context[25], "TokenLexerInternalError-Unexpected", 34);
    refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
    refalrts::alloc_chars(vm, context[28], context[29], "Root", 4);
    refalrts::alloc_close_bracket(vm, context[30]);
    refalrts::alloc_close_bracket(vm, context[31]);
    refalrts::alloc_open_bracket(vm, context[32]);
    refalrts::alloc_ident(vm, context[33], identifiers[ident_Empty]);
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::alloc_ident(vm, context[35], identifiers[ident_Flush]);
    refalrts::alloc_chars(vm, context[36], context[37], "TokenLexerInternalError-UnexpectedEOF", 37);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_ident(vm, context[39], identifiers[ident_Finitive]);
    refalrts::alloc_close_bracket(vm, context[40]);
    refalrts::update_name(context[4], functions[efunc_gen_WarningIfUncatched_D1]);
    refalrts::reinit_close_call(context[14]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::link_brackets( context[32], context[40] );
    refalrts::link_brackets( context[34], context[38] );
    refalrts::link_brackets( context[1], context[31] );
    refalrts::link_brackets( context[13], context[30] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[26], context[40] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NormalizeRule\1/4 t.SentNamePos/5 (/9 e.Name/7 )/10 (/13 s.CatchedEOF/15 e.CatchedChars/11 )/14 e.Alternatives$a/2 >/1
  // closed e.Name as range 7
  // closed e.CatchedChars as range 11
  // closed e.Alternatives$a as range 2
  //DEBUG: t.SentNamePos: 5
  //DEBUG: s.CatchedEOF: 15
  //DEBUG: e.Name: 7
  //DEBUG: e.CatchedChars: 11
  //DEBUG: e.Alternatives$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningIfUncatched*1/4 AsIs: t.SentNamePos/5 } Tile{ AsIs: e.Name/7 } Tile{ AsIs: s.CatchedEOF/15 AsIs: e.CatchedChars/11 HalfReuse: >/14 AsIs: e.Alternatives$a/2 HalfReuse: (/1 } # Any/16 Tile{ AsIs: (/9 } # Flush/17"TokenLexerInternalError-Unexpected"/18 Tile{ AsIs: )/10 AsIs: (/13 } t.SentNamePos/5/20"Root"/22 )/24 )/25 </26 & DefaultCatchEOF*2/27 s.CatchedEOF/15/28 >/29 Tile{ ]] }
  refalrts::alloc_ident(vm, context[16], identifiers[ident_Any]);
  refalrts::alloc_ident(vm, context[17], identifiers[ident_Flush]);
  refalrts::alloc_chars(vm, context[18], context[19], "TokenLexerInternalError-Unexpected", 34);
  refalrts::copy_evar(vm, context[20], context[21], context[5], context[6]);
  refalrts::alloc_chars(vm, context[22], context[23], "Root", 4);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_gen_DefaultCatchEOF_D2]);
  refalrts::copy_stvar(vm, context[28], context[15]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_gen_WarningIfUncatched_D1]);
  refalrts::reinit_close_call(context[14]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[1], context[25] );
  refalrts::link_brackets( context[13], context[24] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[29] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[15], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NormalizeRule_L1("NormalizeRule\\1", COOKIE1_, COOKIE2_, func_gen_NormalizeRule_L1);


static refalrts::FnResult func_gen_NormalizeRule_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & NormalizeRule\2/4 t.SentNamePos/5 (/9 e.Name/7 )/10 e.Alternatives$a/2 >/1
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
  // closed e.Name as range 7
  // closed e.Alternatives$a as range 2
  //DEBUG: t.SentNamePos: 5
  //DEBUG: e.Name: 7
  //DEBUG: e.Alternatives$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: t.SentNamePos/5 AsIs: (/9 AsIs: e.Name/7 AsIs: )/10 AsIs: e.Alternatives$a/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NormalizeRule_L2("NormalizeRule\\2", COOKIE1_, COOKIE2_, func_gen_NormalizeRule_L2);


static refalrts::FnResult func_NormalizeRule(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & NormalizeRule/4 (/7 t.SentNamePos/9 (/13 e.Name/11 )/14 e.Alternatives/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Name as range 11
  // closed e.Alternatives as range 5
  //DEBUG: t.SentNamePos: 9
  //DEBUG: e.Name: 11
  //DEBUG: e.Alternatives: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 & Fetch/16 Tile{ AsIs: e.Alternatives/5 } </17 & Pipe/18 (/19 & MapAccum/20 & NormalizeAlternative/21 (/22 # EOF-NotCatched/23 )/24 Tile{ HalfReuse: )/0 HalfReuse: [*]/4 HalfReuse: & NormalizeRule\1/7 AsIs: t.SentNamePos/9 AsIs: (/13 AsIs: e.Name/11 AsIs: )/14 } {*}/25 (/26 & Map/27 (/28 & SplitAlternatives/29 t.SentNamePos/9/30 (/32 e.Name/11/33 )/35 )/36 )/37 [*]/38 & NormalizeRule\2/39 t.SentNamePos/9/40 (/42 e.Name/11/43 )/45 {*}/46 Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Pipe]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[21], functions[efunc_NormalizeAlternative]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_EOFm_NotCatched]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_unwrapped_closure(vm, context[25], context[4]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_Map]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_name(vm, context[29], functions[efunc_SplitAlternatives]);
  refalrts::copy_evar(vm, context[30], context[31], context[9], context[10]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::copy_evar(vm, context[33], context[34], context[11], context[12]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_close_bracket(vm, context[37]);
  refalrts::alloc_closure_head(vm, context[38]);
  refalrts::alloc_name(vm, context[39], functions[efunc_gen_NormalizeRule_L2]);
  refalrts::copy_evar(vm, context[40], context[41], context[9], context[10]);
  refalrts::alloc_open_bracket(vm, context[42]);
  refalrts::copy_evar(vm, context[43], context[44], context[11], context[12]);
  refalrts::alloc_close_bracket(vm, context[45]);
  refalrts::alloc_unwrapped_closure(vm, context[46], context[38]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_NormalizeRule_L1]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[42], context[45] );
  refalrts::link_brackets( context[26], context[37] );
  refalrts::link_brackets( context[28], context[36] );
  refalrts::link_brackets( context[32], context[35] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[19], context[0] );
  refalrts::link_brackets( context[22], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[25], context[46] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[17], context[24] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[25] );
  refalrts::wrap_closure( context[46] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NormalizeRule("NormalizeRule", COOKIE1_, COOKIE2_, func_NormalizeRule);


static refalrts::FnResult func_WarningIfUncatched(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & WarningIfUncatched/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & WarningIfUncatched/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & WarningIfUncatched/4 t.SentNamePos/5 e.Name/7 # EOF-Catched/10 # Any/9 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::ident_right( identifiers[ident_Any], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right( identifiers[ident_EOFm_Catched], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Name as range 7
    //DEBUG: t.SentNamePos: 5
    //DEBUG: e.Name: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & WarningIfUncatched/4 t.SentNamePos/5 e.Name/7 # EOF-Catched/10 # Any/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & WarningIfUncatched/4 t.SentNamePos/5 e.Name/9 # EOF-Catched/13 e.CharSet/11 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[11] = context[7];
      context[12] = context[8];
      context[13] = refalrts::ident_left( identifiers[ident_EOFm_Catched], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.CharSet as range 11
      //DEBUG: t.SentNamePos: 5
      //DEBUG: e.Name: 9
      //DEBUG: e.CharSet: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet/11 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos/5 } 'I'/14 Tile{ HalfReuse: 'n'/13 }" rule "/15 Tile{ AsIs: e.Name/9 }" some chars not catched, default alternative added"/17 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[14], 'I');
      refalrts::alloc_chars(vm, context[15], context[16], " rule ", 6);
      refalrts::alloc_chars(vm, context[17], context[18], " some chars not catched, default alternative added", 50);
      refalrts::update_name(context[4], functions[efunc_WarningAt]);
      refalrts::reinit_char(context[13], 'n');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & WarningIfUncatched/4 t.SentNamePos/5 e.Name/7 # EOF-NotCatched/10 # Any/9 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::ident_right( identifiers[ident_Any], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right( identifiers[ident_EOFm_NotCatched], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Name as range 7
    //DEBUG: t.SentNamePos: 5
    //DEBUG: e.Name: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos/5 }"In rule "/11 Tile{ AsIs: e.Name/7 }" EOF not catched, default alternative add"/13 Tile{ HalfReuse: 'e'/10 HalfReuse: 'd'/9 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "In rule ", 8);
    refalrts::alloc_chars(vm, context[13], context[14], " EOF not catched, default alternative add", 41);
    refalrts::update_name(context[4], functions[efunc_WarningAt]);
    refalrts::reinit_char(context[10], 'e');
    refalrts::reinit_char(context[9], 'd');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WarningIfUncatched/4 t.SentNamePos/5 e.Name/7 # EOF-NotCatched/11 e.CharSet/9 >/1
  context[7] = 0;
  context[8] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[9] = context[2];
    context[10] = context[3];
    context[11] = refalrts::ident_left( identifiers[ident_EOFm_NotCatched], context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.CharSet as range 9
    //DEBUG: t.SentNamePos: 5
    //DEBUG: e.Name: 7
    //DEBUG: e.CharSet: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos/5 } 'I'/12 Tile{ HalfReuse: 'n'/11 }" rule "/13 Tile{ AsIs: e.Name/7 }" some chars and EOF not catched, default alternatives added"/15 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[12], 'I');
    refalrts::alloc_chars(vm, context[13], context[14], " rule ", 6);
    refalrts::alloc_chars(vm, context[15], context[16], " some chars and EOF not catched, default alternatives added", 59);
    refalrts::update_name(context[4], functions[efunc_WarningAt]);
    refalrts::reinit_char(context[11], 'n');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_WarningIfUncatched("WarningIfUncatched", COOKIE1_, COOKIE2_, func_WarningIfUncatched);


static refalrts::FnResult func_DefaultCatchAnyChar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & DefaultCatchAnyChar/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DefaultCatchAnyChar/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & DefaultCatchAnyChar/4 t.SentNamePos/5 # Any/9 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::ident_left( identifiers[ident_Any], context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SentNamePos: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DefaultCatchAnyChar/4 t.SentNamePos/5 # Any/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DefaultCatchAnyChar/4 t.SentNamePos/5 e.CatchedChars/2 >/1
  // closed e.CatchedChars as range 2
  //DEBUG: t.SentNamePos: 5
  //DEBUG: e.CatchedChars: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.CatchedChars/2 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Any/4 } (/7 # Flush/8"TokenLexerInternalError-Unexpected"/9 )/11 (/12 Tile{ AsIs: t.SentNamePos/5 }"Root"/13 )/15 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_Flush]);
  refalrts::alloc_chars(vm, context[9], context[10], "TokenLexerInternalError-Unexpected", 34);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "Root", 4);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_Any]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DefaultCatchAnyChar("DefaultCatchAnyChar", COOKIE1_, COOKIE2_, func_DefaultCatchAnyChar);


static refalrts::FnResult func_DefaultCatchEOF(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & DefaultCatchEOF/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DefaultCatchEOF/4 s.new1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DefaultCatchEOF/4 # EOF-Catched/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_EOFm_Catched], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DefaultCatchEOF/4 # EOF-Catched/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DefaultCatchEOF/4 # EOF-NotCatched/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_EOFm_NotCatched], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/6 # Empty/7 (/8 # Flush/9"TokenLexerInternalError-UnexpectedEO"/10 Tile{ HalfReuse: 'F'/0 HalfReuse: )/4 Reuse: # Finitive/5 HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_Empty]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_ident(vm, context[9], identifiers[ident_Flush]);
  refalrts::alloc_chars(vm, context[10], context[11], "TokenLexerInternalError-UnexpectedEO", 36);
  refalrts::reinit_char(context[0], 'F');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::update_ident(context[5], identifiers[ident_Finitive]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[6], context[1] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DefaultCatchEOF("DefaultCatchEOF", COOKIE1_, COOKIE2_, func_DefaultCatchEOF);


static refalrts::FnResult func_PrepareFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & PrepareFunctions/4 e.Rules/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Rules as range 2
  //DEBUG: e.Rules: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoPrepareFunctions/6 (/7 )/8 (/9 (/10 (/11 0/12"runtime"/13 )/15"Root"/16 Tile{ HalfReuse: )/0 HalfReuse: )/4 AsIs: e.Rules/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_DoPrepareFunctions]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_number(vm, context[12], 0UL);
  refalrts::alloc_chars(vm, context[13], context[14], "runtime", 7);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_chars(vm, context[16], context[17], "Root", 4);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[9], context[4] );
  refalrts::link_brackets( context[10], context[0] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareFunctions("PrepareFunctions", COOKIE1_, COOKIE2_, func_PrepareFunctions);


static refalrts::FnResult func_ExtractExpected(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ExtractExpected/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & ExtractExpected/4 (/7 t.new1/9 t.new2/11 t.new3/13 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ExtractExpected/4 (/7 t.Head/9 t.Flush/11 # Finitive/13 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[13] ) )
      continue;
    //DEBUG: t.Head: 9
    //DEBUG: t.Flush: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ExtractExpected/4 (/7 t.Head/9 t.Flush/11 # Finitive/13 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractExpected/4 (/7 t.Head/9 t.Flush/11 (/13 t.SrcPos/17 e.NextName/15 )/14 )/8 >/1
  context[15] = 0;
  context[16] = 0;
  if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextName as range 15
  //DEBUG: t.Head: 9
  //DEBUG: t.Flush: 11
  //DEBUG: t.SrcPos: 17
  //DEBUG: e.NextName: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractExpected/4 (/7 t.Head/9 t.Flush/11 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/13 AsIs: t.SrcPos/17 AsIs: e.NextName/15 AsIs: )/14 } Tile{ ]] }
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractExpected("ExtractExpected", COOKIE1_, COOKIE2_, func_ExtractExpected);


static refalrts::FnResult func_gen_DoPrepareFunctions_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoPrepareFunctions$2\1/4 (/7 t.SentNamePos/9 (/13 e.Name/11 )/14 e.Content/5 )/8 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Name as range 11
  // closed e.Content as range 5
  //DEBUG: t.SentNamePos: 9
  //DEBUG: e.Name: 11
  //DEBUG: e.Content: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Content/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 } Tile{ AsIs: t.SentNamePos/9 HalfReuse: 'F'/13 } Tile{ HalfReuse: 'o'/14 } Tile{ HalfReuse: 'u'/7 } Tile{ HalfReuse: 'n'/8 }"d unused rule "/15 Tile{ AsIs: e.Name/11 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[15], context[16], "d unused rule ", 14);
  refalrts::update_name(context[4], functions[efunc_WarningAt]);
  refalrts::reinit_char(context[13], 'F');
  refalrts::reinit_char(context[14], 'o');
  refalrts::reinit_char(context[7], 'u');
  refalrts::reinit_char(context[8], 'n');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoPrepareFunctions_S2L1("DoPrepareFunctions$2\\1", COOKIE1_, COOKIE2_, func_gen_DoPrepareFunctions_S2L1);


static refalrts::FnResult func_gen_DoPrepareFunctions_S4L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DoPrepareFunctions$4\1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoPrepareFunctions$4\1/4 (/7 t.new1/9 t.new2/11 t.new3/13 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & DoPrepareFunctions$4\1/4 (/7 t.Head/9 t.Flush/11 # Finitive/13 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[13] ) )
      continue;
    //DEBUG: t.Head: 9
    //DEBUG: t.Flush: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions$4\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Head/9 AsIs: t.Flush/11 AsIs: # Finitive/13 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoPrepareFunctions$4\1/4 (/7 t.Head/9 t.Flush/11 (/13 t.GotoPos/17 e.NextName/15 )/14 )/8 >/1
  context[15] = 0;
  context[16] = 0;
  if( ! refalrts::brackets_term( context[15], context[16], context[13] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextName as range 15
  //DEBUG: t.Head: 9
  //DEBUG: t.Flush: 11
  //DEBUG: t.GotoPos: 17
  //DEBUG: e.NextName: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions$4\1/4 {REMOVED TILE} t.GotoPos/17 {REMOVED TILE} )/14 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: t.Head/9 AsIs: t.Flush/11 AsIs: (/13 } Tile{ AsIs: e.NextName/15 } Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[13], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[7], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoPrepareFunctions_S4L1("DoPrepareFunctions$4\\1", COOKIE1_, COOKIE2_, func_gen_DoPrepareFunctions_S4L1);


static refalrts::FnResult func_DoPrepareFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & DoPrepareFunctions/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoPrepareFunctions/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 2
  do {
    // </0 & DoPrepareFunctions/4 (/7 e.new5/13 )/8 (/11 )/12 e.new4/15 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.new5 as range 13
    // closed e.new4 as range 15
    do {
      // </0 & DoPrepareFunctions/4 (/7 e.Written/17 )/8 (/11 )/12 >/1
      context[17] = context[13];
      context[18] = context[14];
      if( ! refalrts::empty_seq( context[15], context[16] ) )
        continue;
      // closed e.Written as range 17
      //DEBUG: e.Written: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions/4 (/7 e.Written/17 )/8 (/11 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoPrepareFunctions/4 (/7 e.Written/17 )/8 (/11 )/12 e.Rules/19 >/1
    context[17] = context[13];
    context[18] = context[14];
    context[19] = context[15];
    context[20] = context[16];
    // closed e.Written as range 17
    // closed e.Rules as range 19
    //DEBUG: e.Written: 17
    //DEBUG: e.Rules: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & DoPrepareFunctions/4 (/7 e.Written/17 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </8 HalfReuse: & Map/11 HalfReuse: & DoPrepareFunctions$2\1/12 AsIs: e.Rules/19 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[11], functions[efunc_Map]);
    refalrts::reinit_name(context[12], functions[efunc_gen_DoPrepareFunctions_S2L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoPrepareFunctions/4 (/7 e.new5/5 )/8 (/11 (/15 t.new6/17 e.new7/13 )/16 e.new8/9 )/12 e.new4/2 >/1
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new5 as range 5
  // closed e.new8 as range 9
  // closed e.new4 as range 2
  context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 13
  do {
    // </0 & DoPrepareFunctions/4 (/7 e.Written-B/27 (/33 e.Next/35 )/34 e.Written-E/29 )/8 (/11 (/15 t.SrcPos/17 e.Next/21 )/16 e.Expected/23 )/12 e.Rules/25 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[2];
    context[26] = context[3];
    // closed e.Next as range 21
    // closed e.Expected as range 23
    // closed e.Rules as range 25
    context[27] = 0;
    context[28] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[29] = context[19];
      context[30] = context[20];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      if( ! refalrts::repeated_evar_left( vm, context[35], context[36], context[21], context[22], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      // closed e.Written-E as range 29
      //DEBUG: t.SrcPos: 17
      //DEBUG: e.Next: 21
      //DEBUG: e.Expected: 23
      //DEBUG: e.Rules: 25
      //DEBUG: e.Written-B: 27
      //DEBUG: e.Written-E: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/15 t.SrcPos/17 e.Next/21 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written-B/27 AsIs: (/33 AsIs: e.Next/35 AsIs: )/34 AsIs: e.Written-E/29 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Expected/23 } Tile{ AsIs: )/12 AsIs: e.Rules/25 AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[33], context[34] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[23], context[24] );
      refalrts::splice_to_freelist_open( vm, context[11], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[27], context[28], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoPrepareFunctions/4 (/7 e.Written/19 )/8 (/11 (/15 t.SrcPos/17 e.NextRule/21 )/16 e.Expected/23 )/12 e.Rules-B/27 (/33 t.SentNamePos/35 (/39 e.NextRule/41 )/40 e.Alternatives/31 )/34 e.Rules-E/29 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[2];
    context[26] = context[3];
    // closed e.Written as range 19
    // closed e.NextRule as range 21
    // closed e.Expected as range 23
    context[27] = 0;
    context[28] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[29] = context[25];
      context[30] = context[26];
      context[31] = 0;
      context[32] = 0;
      context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
      if( ! context[33] )
        continue;
      refalrts::bracket_pointers(context[33], context[34]);
      // closed e.Rules-E as range 29
      context[36] = refalrts::tvar_left( context[35], context[31], context[32] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[31], context[32] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      if( ! refalrts::repeated_evar_left( vm, context[41], context[42], context[21], context[22], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      // closed e.Alternatives as range 31
      //DEBUG: t.SrcPos: 17
      //DEBUG: e.Written: 19
      //DEBUG: e.NextRule: 21
      //DEBUG: e.Expected: 23
      //DEBUG: e.Rules-B: 27
      //DEBUG: e.Rules-E: 29
      //DEBUG: t.SentNamePos: 35
      //DEBUG: e.Alternatives: 31

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SentNamePos/35 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: (/39 AsIs: e.NextRule/41 AsIs: )/40 } Tile{ HalfReuse: </11 } & Map/43 & DoPrepareFunctions$4\1/44 Tile{ AsIs: e.Alternatives/31 } >/45 Tile{ HalfReuse: )/33 } Tile{ AsIs: </0 AsIs: & DoPrepareFunctions/4 AsIs: (/7 AsIs: e.Written/19 HalfReuse: (/8 } Tile{ AsIs: e.NextRule/21 } Tile{ AsIs: )/34 } )/46 Tile{ HalfReuse: (/16 AsIs: e.Expected/23 HalfReuse: </12 } & Map/47 & ExtractExpected/48 e.Alternatives/31/49 >/51 )/52 Tile{ AsIs: e.Rules-B/27 } Tile{ AsIs: e.Rules-E/29 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[43], functions[efunc_Map]);
      refalrts::alloc_name(vm, context[44], functions[efunc_gen_DoPrepareFunctions_S4L1]);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_name(vm, context[47], functions[efunc_Map]);
      refalrts::alloc_name(vm, context[48], functions[efunc_ExtractExpected]);
      refalrts::copy_evar(vm, context[49], context[50], context[31], context[32]);
      refalrts::alloc_close_call(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_open_bracket(context[16]);
      refalrts::reinit_open_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[52] );
      refalrts::push_stack( vm, context[51] );
      refalrts::push_stack( vm, context[12] );
      refalrts::link_brackets( context[7], context[46] );
      refalrts::link_brackets( context[8], context[34] );
      refalrts::link_brackets( context[15], context[33] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[39], context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[47], context[52] );
      res = refalrts::splice_evar( res, context[16], context[12] );
      res = refalrts::splice_elem( res, context[46] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_elem( res, context[15] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[27], context[28], context[25], context[26] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoPrepareFunctions/4 (/7 e.Written/5 )/8 (/11 (/15 t.SrcPos/17 e.NextRule/13 )/16 e.Expected/9 )/12 e.Rules/2 >/1
  // closed e.Written as range 5
  // closed e.NextRule as range 13
  // closed e.Expected as range 9
  // closed e.Rules as range 2
  //DEBUG: t.SrcPos: 17
  //DEBUG: e.Written: 5
  //DEBUG: e.NextRule: 13
  //DEBUG: e.Expected: 9
  //DEBUG: e.Rules: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Written/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Expected/9 {REMOVED TILE} e.Rules/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos/17 } Tile{ HalfReuse: 'R'/16 } Tile{ HalfReuse: 'u'/8 HalfReuse: 'l'/11 HalfReuse: 'e'/15 } Tile{ HalfReuse: ' '/12 } Tile{ AsIs: e.NextRule/13 } Tile{ HalfReuse: ' '/7 }"not found"/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[19], context[20], "not found", 9);
  refalrts::update_name(context[4], functions[efunc_ErrorAt]);
  refalrts::reinit_char(context[16], 'R');
  refalrts::reinit_char(context[8], 'u');
  refalrts::reinit_char(context[11], 'l');
  refalrts::reinit_char(context[15], 'e');
  refalrts::reinit_char(context[12], ' ');
  refalrts::reinit_char(context[7], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoPrepareFunctions("DoPrepareFunctions", COOKIE1_, COOKIE2_, func_DoPrepareFunctions);


static refalrts::FnResult func_gen_WarningIfUncatched_D1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & WarningIfUncatched*1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & WarningIfUncatched*1/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & WarningIfUncatched*1/4 t.SentNamePos/5 e.Name/9 # EOF-Catched/13 e.CharSet/11 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[11] = context[7];
      context[12] = context[8];
      context[13] = refalrts::ident_left( identifiers[ident_EOFm_Catched], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.CharSet as range 11
      //DEBUG: t.SentNamePos: 5
      //DEBUG: e.Name: 9
      //DEBUG: e.CharSet: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet/11 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos/5 } 'I'/14 Tile{ HalfReuse: 'n'/13 }" rule "/15 Tile{ AsIs: e.Name/9 }" some chars not catched, default alternative added"/17 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[14], 'I');
      refalrts::alloc_chars(vm, context[15], context[16], " rule ", 6);
      refalrts::alloc_chars(vm, context[17], context[18], " some chars not catched, default alternative added", 50);
      refalrts::update_name(context[4], functions[efunc_WarningAt]);
      refalrts::reinit_char(context[13], 'n');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::splice_to_freelist_open( vm, context[6], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & WarningIfUncatched*1/4 t.SentNamePos/5 e.Name/7 # EOF-NotCatched/10 # Any/9 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = refalrts::ident_right( identifiers[ident_Any], context[7], context[8] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right( identifiers[ident_EOFm_NotCatched], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.Name as range 7
    //DEBUG: t.SentNamePos: 5
    //DEBUG: e.Name: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos/5 }"In rule "/11 Tile{ AsIs: e.Name/7 }" EOF not catched, default alternative add"/13 Tile{ HalfReuse: 'e'/10 HalfReuse: 'd'/9 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[11], context[12], "In rule ", 8);
    refalrts::alloc_chars(vm, context[13], context[14], " EOF not catched, default alternative add", 41);
    refalrts::update_name(context[4], functions[efunc_WarningAt]);
    refalrts::reinit_char(context[10], 'e');
    refalrts::reinit_char(context[9], 'd');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WarningIfUncatched*1/4 t.SentNamePos/5 e.Name/7 # EOF-NotCatched/11 e.CharSet/9 >/1
  context[7] = 0;
  context[8] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[9] = context[2];
    context[10] = context[3];
    context[11] = refalrts::ident_left( identifiers[ident_EOFm_NotCatched], context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.CharSet as range 9
    //DEBUG: t.SentNamePos: 5
    //DEBUG: e.Name: 7
    //DEBUG: e.CharSet: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.CharSet/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & WarningAt/4 AsIs: t.SentNamePos/5 } 'I'/12 Tile{ HalfReuse: 'n'/11 }" rule "/13 Tile{ AsIs: e.Name/7 }" some chars and EOF not catched, default alternatives added"/15 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[12], 'I');
    refalrts::alloc_chars(vm, context[13], context[14], " rule ", 6);
    refalrts::alloc_chars(vm, context[15], context[16], " some chars and EOF not catched, default alternatives added", 59);
    refalrts::update_name(context[4], functions[efunc_WarningAt]);
    refalrts::reinit_char(context[11], 'n');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[12] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[7], context[8], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_WarningIfUncatched_D1("WarningIfUncatched*1", COOKIE1_, COOKIE2_, func_gen_WarningIfUncatched_D1);


static refalrts::FnResult func_gen_NormalizeContent_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & NormalizeContent@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & NormalizeContent@1/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & NormalizeContent@1/4 (/7 s.new3/13 e.new4/11 )/8 e.new5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new4 as range 11
      do {
        // </0 & NormalizeContent@1/4 (/7 # Chars/13 e.Symbols/14 )/8 e.Tail/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Chars], context[13] ) )
          continue;
        // closed e.Symbols as range 14
        // closed e.Tail as range 16
        //DEBUG: e.Symbols: 14
        //DEBUG: e.Tail: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & NormalizeContent/4 AsIs: (/7 HalfReuse: </13 } & UniqueSet/18 Tile{ AsIs: e.Symbols/14 } >/19 Tile{ AsIs: )/8 AsIs: e.Tail/16 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[18], functions[efunc_UniqueSet]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::update_name(context[4], functions[efunc_NormalizeContent]);
        refalrts::reinit_open_call(context[13]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_elem( res, context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NormalizeContent@1/4 (/7 # Set/13 t.SrcPos/18 e.Name/14 )/8 e.Tail/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_Set], context[13] ) )
        continue;
      // closed e.Tail as range 16
      context[19] = refalrts::tvar_left( context[18], context[14], context[15] );
      if( ! context[19] )
        continue;
      // closed e.Name as range 14
      //DEBUG: e.Tail: 16
      //DEBUG: t.SrcPos: 18
      //DEBUG: e.Name: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Set/13 AsIs: t.SrcPos/18 AsIs: e.Name/14 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & NormalizeContent@1/4 } Tile{ AsIs: e.Tail/16 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NormalizeContent@1/4 # Any/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Any], context[7] ) )
      continue;
    // closed e.Tail as range 9
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NormalizeContent@1/4 # Any/7 e.Tail/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Any/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_Any]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NormalizeContent@1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Chars/4 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Chars]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NormalizeContent@1/4 e.dyn1/2 >/1
  // closed e.dyn1 as range 2
  //DEBUG: e.dyn1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & NormalizeContent@0/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.dyn1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_NormalizeContent_Z0]);
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

static refalrts::NativeReference nat_ref_gen_NormalizeContent_Z1("NormalizeContent@1", COOKIE1_, COOKIE2_, func_gen_NormalizeContent_Z1);


//End of file
