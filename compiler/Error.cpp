// This file automatically generated from 'Error.ref'
// Don't edit! Edit 'Error.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1693563535_3901769303
#define COOKIE1_ 1693563535U
#define COOKIE2_ 3901769303U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_Map = 3,
  efunc_Apply = 4,
  efunc_Reduce = 5,
  efunc_gen_Reduce_S1A1 = 6,
  efunc_DoMapAccum = 7,
  efunc_gen_DoMapAccum_S1A1 = 8,
  efunc_Add = 9,
  efunc_Sub = 10,
  efunc_Fetch = 11,
  efunc_Pipe = 12,
  efunc_gen_Pipe_S2L1 = 13,
  efunc_gen_Pipe_S3L1 = 14,
  efunc_ErrorList = 15,
  efunc_WithFileName = 16,
  efunc_Sort = 17,
  efunc_CheckWarningsAsErrors = 18,
  efunc_gen_Map_Z1 = 19,
  efunc_gen_Map_Z2 = 20,
  efunc_PrintWarningsAsErrorsMessage = 21,
  efunc_CheckHasErrors = 22,
  efunc_gen_ELm_Destroy_A2 = 23,
  efunc_gen_ELm_Destroy_A1 = 24,
  efunc_FilterEnabledWarnings = 25,
  efunc_gen_Map_Z3 = 26,
  efunc_gen_CheckWarningsAsErrors_S1C1 = 27,
  efunc_SetsEq = 28,
  efunc_Configm_AllWarningIds = 29,
  efunc_Prout = 30,
  efunc_PrintErr = 31,
  efunc_StrFromPos = 32,
  efunc_Explode = 33,
  efunc_Symb = 34,
  efunc_Putout = 35,
  efunc_ELm_Destroy = 36,
  efunc_gen_ELm_CheckEntryDuplicates_A1 = 37,
  efunc_CheckEntries = 38,
  efunc_gen_Reduce_Z1 = 39,
  efunc_gen_CheckEntries_L1 = 40,
  efunc_ELm_Create = 41,
  efunc_GroupEntries = 42,
  efunc_ELm_AddErrorAt = 43,
  efunc_Mu = 44,
  efunc_Up = 45,
  efunc_Evm_met = 46,
  efunc_Residue = 47,
  efunc_u_u_Metau_Residue = 48,
  efunc_MapAccum = 49,
  efunc_UnBracket = 50,
  efunc_DelAccumulator = 51,
  efunc_Inc = 52,
  efunc_Dec = 53,
  efunc_ELm_AddError = 54,
  efunc_ELm_AddWarning = 55,
  efunc_ELm_AddWarningAt = 56,
  efunc_ELm_Concat = 57,
  efunc_IsWarningEnabled = 58,
  efunc_PrintMessageError = 59,
  efunc_PrintMessageWarning = 60,
  efunc_ELm_CheckEntryDuplicates = 61,
  efunc_AddEntryError = 62,
  efunc_gen_Map_Z0 = 63,
  efunc_gen_Reduce_S1A1Z1 = 64,
  efunc_gen_Reduce_Z0 = 65,
  efunc_gen_Reduce_S1A1Z0 = 66,
};


enum ident {
  ident_NoPos = 0,
  ident_FileLine = 1,
  ident_RowCol = 2,
  ident_FileRowCol = 3,
  ident_ELm_HasErrors = 4,
  ident_ELm_NoErrors = 5,
  ident_True = 6,
  ident_All = 7,
  ident_Some = 8,
  ident_None = 9,
  ident_False = 10,
  ident_stderr = 11,
  ident_Mu = 12,
  ident_Up = 13,
  ident_Evm_met = 14,
  ident_Residue = 15,
  ident_u_u_Metau_Residue = 16,
  ident_Apply = 17,
  ident_Map = 18,
  ident_Reduce = 19,
  ident_Fetch = 20,
  ident_MapAccum = 21,
  ident_DoMapAccum = 22,
  ident_UnBracket = 23,
  ident_DelAccumulator = 24,
  ident_Inc = 25,
  ident_Dec = 26,
  ident_Pipe = 27,
  ident_ErrorList = 28,
  ident_ELm_Create = 29,
  ident_ELm_AddError = 30,
  ident_ELm_AddWarning = 31,
  ident_ELm_AddErrorAt = 32,
  ident_WithFileName = 33,
  ident_ELm_AddWarningAt = 34,
  ident_ELm_Concat = 35,
  ident_ELm_Destroy = 36,
  ident_FilterEnabledWarnings = 37,
  ident_IsWarningEnabled = 38,
  ident_CheckHasErrors = 39,
  ident_CheckWarningsAsErrors = 40,
  ident_SetsEq = 41,
  ident_PrintWarningsAsErrorsMessage = 42,
  ident_PrintMessageError = 43,
  ident_PrintMessageWarning = 44,
  ident_StrFromPos = 45,
  ident_PrintErr = 46,
  ident_ELm_CheckEntryDuplicates = 47,
  ident_CheckEntries = 48,
  ident_AddEntryError = 49,
  ident_GroupEntries = 50,
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

static refalrts::NativeReference nat_ref_Apply("Apply", COOKIE1_, COOKIE2_, func_Apply);


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
    //RESULT: Tile{ [[ } </13 & Reduce$1=1/14 t.Fn#1/5/15 (/17 Tile{ AsIs: e.Tail#1/9 } )/18 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/19 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[18], context[18] );
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
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 Tile{ AsIs: e.Tail#1/15 } )/20 </21 & Apply/22 t.Fn#1/5/23 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_close_bracket(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Apply]);
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
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[20], context[24] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[19] );
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
  res = refalrts::splice_evar( res, context[5], context[5] );
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

static refalrts::NativeReference nat_ref_Pipe("Pipe", COOKIE1_, COOKIE2_, func_Pipe);


static refalrts::FnResult func_ELm_Create(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & EL-Create/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & ErrorList/4 } (/5 Tile{ AsIs: e.FileName#1/2 } )/6 (/7 )/8 (/9 )/10 Tile{ HalfReuse: ]/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::reinit_open_adt(context[0]);
  refalrts::update_name(context[4], functions[efunc_ErrorList]);
  refalrts::reinit_close_adt(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_Create("EL-Create", 0U, 0U, func_ELm_Create);


static refalrts::FnResult func_ELm_AddError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & EL-AddError/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 (/16 e.Errors#1/14 )/17 t.Warnings#1/18 ]/9 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_ErrorList], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.FileName#1 as range 10
  // closed e.Errors#1 as range 14
  // closed e.Message#1 as range 2
  context[19] = refalrts::tvar_left( context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FileName#1: 10
  //DEBUG: e.Errors#1: 14
  //DEBUG: e.Message#1: 2
  //DEBUG: t.Warnings#1: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Errors#1/14 HalfReuse: (/17 } Tile{ HalfReuse: # NoPos/1 } Tile{ AsIs: e.Message#1/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: t.Warnings#1/18 AsIs: ]/9 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[17]);
  refalrts::reinit_ident(context[1], identifiers[ident_NoPos]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[7], context[9] );
  refalrts::link_brackets( context[16], context[4] );
  refalrts::link_brackets( context[17], context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[9] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[7], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_AddError("EL-AddError", 0U, 0U, func_ELm_AddError);


static refalrts::FnResult func_ELm_AddWarning(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & EL-AddWarning/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 t.Errors#1/19 (/16 e.Warnings#1/14 )/17 ]/9 s.WarningId#1/18 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_ErrorList], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_right( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.FileName#1 as range 10
  // closed e.Warnings#1 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2
  context[20] = refalrts::tvar_left( context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FileName#1: 10
  //DEBUG: e.Warnings#1: 14
  //DEBUG: s.WarningId#1: 18
  //DEBUG: e.Message#1: 2
  //DEBUG: t.Errors#1: 19

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.WarningId#1/18 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: t.Errors#1/19 AsIs: (/16 AsIs: e.Warnings#1/14 HalfReuse: (/17 HalfReuse: s.WarningId1 #18/9 } # NoPos/21 Tile{ AsIs: e.Message#1/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ HalfReuse: ]/1 ]] }
  refalrts::alloc_ident(vm, context[21], identifiers[ident_NoPos]);
  refalrts::reinit_open_bracket(context[17]);
  refalrts::reinit_svar( context[9], context[18] );
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_close_adt(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[16], context[4] );
  refalrts::link_brackets( context[17], context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_AddWarning("EL-AddWarning", 0U, 0U, func_ELm_AddWarning);


static refalrts::FnResult func_ELm_AddErrorAt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 (/16 e.Errors#1/14 )/17 t.Warnings#1/18 ]/9 t.SrcPos#1/20 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_ErrorList], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.FileName#1 as range 10
  // closed e.Errors#1 as range 14
  context[19] = refalrts::tvar_left( context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = refalrts::tvar_left( context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2
  //DEBUG: e.FileName#1: 10
  //DEBUG: e.Errors#1: 14
  //DEBUG: t.Warnings#1: 18
  //DEBUG: t.SrcPos#1: 20
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Errors#1/14 HalfReuse: (/17 } Tile{ AsIs: </0 Reuse: & WithFileName/4 } Tile{ AsIs: t.SrcPos#1/20 } e.FileName#1/10/22 Tile{ AsIs: >/1 } Tile{ AsIs: e.Message#1/2 } )/24 )/25 Tile{ AsIs: t.Warnings#1/18 AsIs: ]/9 } Tile{ ]] }
  refalrts::copy_evar(vm, context[22], context[23], context[10], context[11]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::reinit_open_bracket(context[17]);
  refalrts::update_name(context[4], functions[efunc_WithFileName]);
  refalrts::link_brackets( context[7], context[9] );
  refalrts::link_brackets( context[16], context[25] );
  refalrts::link_brackets( context[17], context[24] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[9] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_AddErrorAt("EL-AddErrorAt", 0U, 0U, func_ELm_AddErrorAt);


static refalrts::FnResult func_WithFileName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & WithFileName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & WithFileName/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & WithFileName/4 s.new#3/5 e.new#4/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.new#4 as range 7
    do {
      // </0 & WithFileName/4 # NoPos/5 e.FileName#1/9 >/1
      context[9] = context[7];
      context[10] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_NoPos], context[5] ) )
        continue;
      // closed e.FileName#1 as range 9
      //DEBUG: e.FileName#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & WithFileName/4 # NoPos/5 e.FileName#1/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoPos/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_NoPos]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WithFileName/4 s.LineNumber#1/5 e.FileName#1/9 >/1
    context[9] = context[7];
    context[10] = context[8];
    // closed e.FileName#1 as range 9
    //DEBUG: s.LineNumber#1: 5
    //DEBUG: e.FileName#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # FileLine/4 AsIs: s.LineNumber#1/5 AsIs: e.FileName#1/9 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_FileLine]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & WithFileName/4 (/5 # RowCol/11 s.Row#1/12 s.Col#1/13 )/6 e.FileName#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_RowCol], context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.FileName#1 as range 7
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: e.FileName#1: 7
    //DEBUG: s.Row#1: 12
    //DEBUG: s.Col#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # FileRowCol/5 HalfReuse: (/11 AsIs: s.Row#1/12 AsIs: s.Col#1/13 AsIs: )/6 AsIs: e.FileName#1/7 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[5], identifiers[ident_FileRowCol]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[4], context[1] );
    refalrts::link_brackets( context[11], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & WithFileName/4 t.SrcPos#1/5 e.FileName#1/2 >/1
  // closed e.FileName#1 as range 2
  //DEBUG: t.SrcPos#1: 5
  //DEBUG: e.FileName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & WithFileName/4 {REMOVED TILE} e.FileName#1/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.SrcPos#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WithFileName("WithFileName", COOKIE1_, COOKIE2_, func_WithFileName);


static refalrts::FnResult func_ELm_AddWarningAt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & EL-AddWarningAt/4 [/7ErrorList/8 (/12 e.FileName#1/10 )/13 t.Errors#1/19 (/16 e.Warnings#1/14 )/17 ]/9 s.WarningId#1/18 t.SrcPos#1/21 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_ErrorList], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_right( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.FileName#1 as range 10
  // closed e.Warnings#1 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::tvar_left( context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 2
  //DEBUG: e.FileName#1: 10
  //DEBUG: e.Warnings#1: 14
  //DEBUG: s.WarningId#1: 18
  //DEBUG: t.Errors#1: 19
  //DEBUG: t.SrcPos#1: 21
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.WarningId#1/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName#1/10 AsIs: )/13 AsIs: t.Errors#1/19 AsIs: (/16 AsIs: e.Warnings#1/14 HalfReuse: (/17 HalfReuse: s.WarningId1 #18/9 } Tile{ AsIs: </0 Reuse: & WithFileName/4 } Tile{ AsIs: t.SrcPos#1/21 } e.FileName#1/10/23 >/25 Tile{ AsIs: e.Message#1/2 } )/26 )/27 Tile{ HalfReuse: ]/1 ]] }
  refalrts::copy_evar(vm, context[23], context[24], context[10], context[11]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_close_bracket(vm, context[27]);
  refalrts::reinit_open_bracket(context[17]);
  refalrts::reinit_svar( context[9], context[18] );
  refalrts::update_name(context[4], functions[efunc_WithFileName]);
  refalrts::reinit_close_adt(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[16], context[27] );
  refalrts::link_brackets( context[17], context[26] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_AddWarningAt("EL-AddWarningAt", 0U, 0U, func_ELm_AddWarningAt);


static refalrts::FnResult func_ELm_Concat(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & EL-Concat/4 [/7ErrorList/8 (/12 e.FileName-L#1/10 )/13 (/16 e.Errors-L#1/14 )/17 (/20 e.Warnings-L#1/18 )/21 ]/9 [/24ErrorList/25 (/29 e.FileName-R#1/27 )/30 (/33 e.Errors-R#1/31 )/34 (/37 e.Warnings-R#1/35 )/38 ]/26 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::adt_left( context[5], context[6], functions[efunc_ErrorList], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[7], context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::adt_left( context[22], context[23], functions[efunc_ErrorList], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[24], context[25], context[26]);
  context[27] = 0;
  context[28] = 0;
  context[29] = refalrts::brackets_left( context[27], context[28], context[22], context[23] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[29], context[30]);
  context[31] = 0;
  context[32] = 0;
  context[33] = refalrts::brackets_left( context[31], context[32], context[22], context[23] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[33], context[34]);
  context[35] = 0;
  context[36] = 0;
  context[37] = refalrts::brackets_left( context[35], context[36], context[22], context[23] );
  if( ! context[37] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[37], context[38]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[22], context[23] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName-L#1 as range 10
  // closed e.Errors-L#1 as range 14
  // closed e.Warnings-L#1 as range 18
  // closed e.FileName-R#1 as range 27
  // closed e.Errors-R#1 as range 31
  // closed e.Warnings-R#1 as range 35
  //DEBUG: e.FileName-L#1: 10
  //DEBUG: e.Errors-L#1: 14
  //DEBUG: e.Warnings-L#1: 18
  //DEBUG: e.FileName-R#1: 27
  //DEBUG: e.Errors-R#1: 31
  //DEBUG: e.Warnings-R#1: 35

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EL-Concat/4 {REMOVED TILE} {REMOVED TILE} )/17 (/20 {REMOVED TILE} )/21 ]/9 [/24ErrorList/25 (/29 e.FileName-R#1/27 )/30 (/33 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName-L#1/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Errors-L#1/14 } Tile{ AsIs: e.Errors-R#1/31 } Tile{ AsIs: )/34 AsIs: (/37 } Tile{ AsIs: e.Warnings-L#1/18 } Tile{ AsIs: e.Warnings-R#1/35 } Tile{ AsIs: )/38 AsIs: ]/26 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[26] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::link_brackets( context[16], context[34] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[38], context[26] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[34], context[37] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[7], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_Concat("EL-Concat", 0U, 0U, func_ELm_Concat);


static refalrts::FnResult func_gen_ELm_Destroy_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & EL-Destroy=2/4 (/7 e.Errors#1/5 )/8 (/11 e.WarningIdsAsErrors#1/9 )/12 (/15 e.Warnings#2/13 )/16 (/19 e.FileName#1/17 )/20 s.HasErrors#3/21 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Errors#1 as range 5
  // closed e.WarningIdsAsErrors#1 as range 9
  // closed e.Warnings#2 as range 13
  // closed e.FileName#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Errors#1: 5
  //DEBUG: e.WarningIdsAsErrors#1: 9
  //DEBUG: e.Warnings#2: 13
  //DEBUG: e.FileName#1: 17
  //DEBUG: s.HasErrors#3: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.HasErrors#3/21 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 HalfReuse: </7 } & Sort/22 Tile{ AsIs: e.Errors#1/5 } >/23 >/24 </25 Tile{ HalfReuse: & Map@2/8 AsIs: (/11 AsIs: e.WarningIdsAsErrors#1/9 AsIs: )/12 HalfReuse: </15 } & Sort/26 Tile{ AsIs: e.Warnings#2/13 } >/27 >/28 </29 Tile{ HalfReuse: & PrintWarningsAsErrorsMessage/16 AsIs: (/19 AsIs: e.FileName#1/17 AsIs: )/20 } </30 & CheckWarningsAsErrors/31 (/32 e.Warnings#2/13/33 )/35 e.WarningIdsAsErrors#1/9/36 >/38 >/39 Tile{ HalfReuse: s.HasErrors3 #21/1 ]] }
  refalrts::alloc_name(vm, context[22], functions[efunc_Sort]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_Sort]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_open_call(vm, context[30]);
  refalrts::alloc_name(vm, context[31], functions[efunc_CheckWarningsAsErrors]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::copy_evar(vm, context[33], context[34], context[13], context[14]);
  refalrts::alloc_close_bracket(vm, context[35]);
  refalrts::copy_evar(vm, context[36], context[37], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::alloc_close_call(vm, context[39]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z2]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_name(context[16], functions[efunc_PrintWarningsAsErrorsMessage]);
  refalrts::reinit_svar( context[1], context[21] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[30] );
  refalrts::link_brackets( context[32], context[35] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[30], context[39] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ELm_Destroy_A2("EL-Destroy=2", COOKIE1_, COOKIE2_, func_gen_ELm_Destroy_A2);


static refalrts::FnResult func_gen_ELm_Destroy_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & EL-Destroy=1/4 (/7 e.Errors#1/5 )/8 (/11 e.WarningIdsAsErrors#1/9 )/12 (/15 e.FileName#1/13 )/16 e.Warnings#2/2 >/1
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
  // closed e.Errors#1 as range 5
  // closed e.WarningIdsAsErrors#1 as range 9
  // closed e.FileName#1 as range 13
  // closed e.Warnings#2 as range 2
  //DEBUG: e.Errors#1: 5
  //DEBUG: e.WarningIdsAsErrors#1: 9
  //DEBUG: e.FileName#1: 13
  //DEBUG: e.Warnings#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-Destroy=2/4 AsIs: (/7 AsIs: e.Errors#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.WarningIdsAsErrors#1/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Warnings#2/2 } Tile{ AsIs: )/16 } (/17 Tile{ AsIs: e.FileName#1/13 } )/18 </19 & CheckHasErrors/20 [/21ErrorList/22 (/23 e.FileName#1/13/24 )/26 (/27 e.Errors#1/5/28 )/30 (/31 e.Warnings#2/2/32 )/34 ]/35 e.WarningIdsAsErrors#1/9/36 >/38 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_CheckHasErrors]);
  refalrts::alloc_open_adt(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_ErrorList]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::copy_evar(vm, context[24], context[25], context[13], context[14]);
  refalrts::alloc_close_bracket(vm, context[26]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::copy_evar(vm, context[28], context[29], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::copy_evar(vm, context[32], context[33], context[2], context[3]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_close_adt(vm, context[35]);
  refalrts::copy_evar(vm, context[36], context[37], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::update_name(context[4], functions[efunc_gen_ELm_Destroy_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[21], context[35] );
  refalrts::link_brackets( context[31], context[34] );
  refalrts::link_brackets( context[27], context[30] );
  refalrts::link_brackets( context[23], context[26] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[38] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ELm_Destroy_A1("EL-Destroy=1", COOKIE1_, COOKIE2_, func_gen_ELm_Destroy_A1);


static refalrts::FnResult func_ELm_Destroy(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & EL-Destroy/4 [/15ErrorList/16 (/20 e.FileName#1/18 )/21 (/24 e.Errors#1/22 )/25 (/28 e.Warnings#1/26 )/29 ]/17 (/11 e.EnabledWarningIds#1/9 )/12 (/7 e.WarningIdsAsErrors#1/5 )/8 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::adt_left( context[13], context[14], functions[efunc_ErrorList], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::adt_pointers(context[15], context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[13], context[14] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[13], context[14] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[13], context[14] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 18
  // closed e.Errors#1 as range 22
  // closed e.Warnings#1 as range 26
  // closed e.EnabledWarningIds#1 as range 9
  // closed e.WarningIdsAsErrors#1 as range 5
  //DEBUG: e.FileName#1: 18
  //DEBUG: e.Errors#1: 22
  //DEBUG: e.Warnings#1: 26
  //DEBUG: e.EnabledWarningIds#1: 9
  //DEBUG: e.WarningIdsAsErrors#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & ErrorList/16 (/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-Destroy=1/4 HalfReuse: (/15 } Tile{ AsIs: e.Errors#1/22 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.WarningIdsAsErrors#1/5 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: e.FileName#1/18 } Tile{ AsIs: )/21 HalfReuse: </24 } Tile{ HalfReuse: & FilterEnabledWarnings/25 AsIs: (/28 AsIs: e.Warnings#1/26 AsIs: )/29 } Tile{ AsIs: e.EnabledWarningIds#1/9 } Tile{ HalfReuse: >/17 HalfReuse: >/11 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_gen_ELm_Destroy_A1]);
  refalrts::reinit_open_bracket(context[15]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_open_call(context[24]);
  refalrts::reinit_name(context[25], functions[efunc_FilterEnabledWarnings]);
  refalrts::reinit_close_call(context[17]);
  refalrts::reinit_close_call(context[11]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[1], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::splice_to_freelist_open( vm, context[15], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_Destroy("EL-Destroy", 0U, 0U, func_ELm_Destroy);


static refalrts::FnResult func_FilterEnabledWarnings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & FilterEnabledWarnings/4 (/7 e.Warnings#1/5 )/8 e.EnabledWarningIds#1/2 >/1
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
  // closed e.Warnings#1 as range 5
  // closed e.EnabledWarningIds#1 as range 2
  //DEBUG: e.Warnings#1: 5
  //DEBUG: e.EnabledWarningIds#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 AsIs: (/7 } Tile{ AsIs: e.EnabledWarningIds#1/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Warnings#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FilterEnabledWarnings("FilterEnabledWarnings", COOKIE1_, COOKIE2_, func_FilterEnabledWarnings);


static refalrts::FnResult func_IsWarningEnabled(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & IsWarningEnabled/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & IsWarningEnabled/4 e.new#1/2 t.new#2/5 >/1
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & IsWarningEnabled/4 e._#1/14 s.WarningId#1/18 e._0#1/16 (/5 s.WarningId#1/11 t.SrcPos#1/12 e.Message#1/9 )/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Message#1 as range 9
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[16] = context[7];
      context[17] = context[8];
      if( ! refalrts::repeated_stvar_left( vm, context[18], context[11], context[16], context[17] ) )
        continue;
      // closed e._0#1 as range 16
      //DEBUG: s.WarningId#1: 11
      //DEBUG: t.SrcPos#1: 12
      //DEBUG: e.Message#1: 9
      //DEBUG: e._#1: 14
      //DEBUG: e._0#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsWarningEnabled/4 e._#1/14 s.WarningId#1/18 e._0#1/16 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: s.WarningId#1/11 AsIs: t.SrcPos#1/12 AsIs: e.Message#1/9 AsIs: )/6 } Tile{ ]] }
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IsWarningEnabled/4 e.WarningIds#1/2 t.Skipped#1/5 >/1
  // closed e.WarningIds#1 as range 2
  //DEBUG: t.Skipped#1: 5
  //DEBUG: e.WarningIds#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsWarningEnabled/4 e.WarningIds#1/2 t.Skipped#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsWarningEnabled("IsWarningEnabled", COOKIE1_, COOKIE2_, func_IsWarningEnabled);


static refalrts::FnResult func_CheckHasErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & CheckHasErrors/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckHasErrors/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CheckHasErrors/4 [/5ErrorList/11 (/14 e.new#3/12 )/15 (/18 e.new#4/16 )/19 (/22 e.new#5/20 )/23 ]/6 e.new#6/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::adt_term(context[9], context[10], functions[efunc_ErrorList], context[5]);
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[9], context[10] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[9], context[10] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[9], context[10] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.new#3 as range 12
    // closed e.new#4 as range 16
    // closed e.new#5 as range 20
    // closed e.new#6 as range 7
    do {
      // </0 & CheckHasErrors/4 [/5ErrorList/11 (/14 e.FileName#1/24 )/15 (/18 t.Error#1/32 e._#1/26 )/19 (/22 e.Warnings#1/28 )/23 ]/6 e._0#1/30 >/1
      context[24] = context[12];
      context[25] = context[13];
      context[26] = context[16];
      context[27] = context[17];
      context[28] = context[20];
      context[29] = context[21];
      context[30] = context[7];
      context[31] = context[8];
      // closed e.FileName#1 as range 24
      // closed e.Warnings#1 as range 28
      // closed e._0#1 as range 30
      context[33] = refalrts::tvar_left( context[32], context[26], context[27] );
      if( ! context[33] )
        continue;
      // closed e._#1 as range 26
      //DEBUG: e.FileName#1: 24
      //DEBUG: e.Warnings#1: 28
      //DEBUG: e._0#1: 30
      //DEBUG: t.Error#1: 32
      //DEBUG: e._#1: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckHasErrors/4 [/5ErrorList/11 (/14 e.FileName#1/24 )/15 (/18 t.Error#1/32 e._#1/26 )/19 (/22 e.Warnings#1/28 )/23 ]/6 e._0#1/30 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # EL-HasErrors/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ELm_HasErrors]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckHasErrors/4 [/5ErrorList/11 (/14 e.FileName#1/24 )/15 (/18 )/19 (/22 e._#1/30 (/38 s.WarningId#1/40 e._0#1/36 )/39 e._1#1/32 )/23 ]/6 e._2#1/41 s.WarningId#1/45 e._3#1/43 >/1
    context[24] = context[12];
    context[25] = context[13];
    context[26] = context[20];
    context[27] = context[21];
    context[28] = context[7];
    context[29] = context[8];
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.FileName#1 as range 24
    context[30] = 0;
    context[31] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[32] = context[26];
      context[33] = context[27];
      context[34] = context[28];
      context[35] = context[29];
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[32], context[33] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      // closed e._1#1 as range 32
      if( ! refalrts::svar_left( context[40], context[36], context[37] ) )
        continue;
      // closed e._0#1 as range 36
      context[41] = 0;
      context[42] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[43] = context[34];
        context[44] = context[35];
        if( ! refalrts::repeated_stvar_left( vm, context[45], context[40], context[43], context[44] ) )
          continue;
        // closed e._3#1 as range 43
        //DEBUG: e.FileName#1: 24
        //DEBUG: e._#1: 30
        //DEBUG: e._1#1: 32
        //DEBUG: s.WarningId#1: 40
        //DEBUG: e._0#1: 36
        //DEBUG: e._2#1: 41
        //DEBUG: e._3#1: 43

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & CheckHasErrors/4 [/5ErrorList/11 (/14 e.FileName#1/24 )/15 (/18 )/19 (/22 e._#1/30 (/38 s.WarningId#1/40 e._0#1/36 )/39 e._1#1/32 )/23 ]/6 e._2#1/41 s.WarningId#1/45 e._3#1/43 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # EL-HasErrors/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_ELm_HasErrors]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[41], context[42], context[34], context[35] ) );
    } while ( refalrts::open_evar_advance( context[30], context[31], context[26], context[27] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckHasErrors/4 t.ErrorList#1/5 e._#1/2 >/1
  // closed e._#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: e._#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckHasErrors/4 t.ErrorList#1/5 e._#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # EL-NoErrors/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_ELm_NoErrors]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckHasErrors("CheckHasErrors", COOKIE1_, COOKIE2_, func_CheckHasErrors);


static refalrts::FnResult func_CheckWarningsAsErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & CheckWarningsAsErrors/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckWarningsAsErrors/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & CheckWarningsAsErrors/4 (/7 e._#1/13 (/21 s.WarningId#1/23 t.SrcPos#1/24 e.Message#1/19 )/22 e._0#1/15 )/8 e.Ids-RB#1/26 s.WarningId#1/30 e.Ids-RE#1/28 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e._0#1 as range 15
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
      if( ! context[25] )
        continue;
      // closed e.Message#1 as range 19
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[28] = context[17];
        context[29] = context[18];
        if( ! refalrts::repeated_stvar_left( vm, context[30], context[23], context[28], context[29] ) )
          continue;
        // closed e.Ids-RE#1 as range 28
        //DEBUG: e._#1: 13
        //DEBUG: e._0#1: 15
        //DEBUG: s.WarningId#1: 23
        //DEBUG: t.SrcPos#1: 24
        //DEBUG: e.Message#1: 19
        //DEBUG: e.Ids-RB#1: 26
        //DEBUG: e.Ids-RE#1: 28
        //13: e._#1
        //15: e._0#1
        //19: e.Message#1
        //23: s.WarningId#1
        //24: t.SrcPos#1
        //26: e.Ids-RB#1
        //28: e.Ids-RE#1
        //30: s.WarningId#1
        //37: e.Ids-RB#1
        //39: s.WarningId#1
        //40: e.Ids-RE#1

        refalrts::reset_allocator(vm);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::alloc_open_call(vm, context[31]);
        refalrts::alloc_name(vm, context[33], functions[efunc_gen_CheckWarningsAsErrors_S1C1]);
        refalrts::alloc_open_call(vm, context[34]);
        refalrts::alloc_name(vm, context[35], functions[efunc_SetsEq]);
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::copy_evar(vm, context[37], context[38], context[26], context[27]);
        refalrts::copy_stvar(vm, context[39], context[30]);
        refalrts::copy_evar(vm, context[40], context[41], context[28], context[29]);
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::alloc_open_call(vm, context[43]);
        refalrts::alloc_name(vm, context[44], functions[efunc_Configm_AllWarningIds]);
        refalrts::alloc_close_call(vm, context[45]);
        refalrts::alloc_close_call(vm, context[46]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[31] );
        res = refalrts::splice_elem( res, context[32] );
        refalrts::push_stack( vm, context[46] );
        refalrts::push_stack( vm, context[34] );
        res = refalrts::splice_elem( res, context[46] );
        refalrts::push_stack( vm, context[45] );
        refalrts::push_stack( vm, context[43] );
        res = refalrts::splice_elem( res, context[45] );
        res = refalrts::splice_elem( res, context[44] );
        res = refalrts::splice_elem( res, context[43] );
        refalrts::link_brackets( context[36], context[42] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_stvar( res, context[39] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_elem( res, context[35] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_elem( res, context[33] );
        res = refalrts::splice_elem( res, context[31] );
        refalrts::use( res );
        refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm);
        if (rec_res != refalrts::cSuccess)
          return rec_res;
        refalrts::this_is_generated_function(vm);
        do {
          // </31 & CheckWarningsAsErrors$1?1/35 # True/36 >/32
          context[33] = 0;
          context[34] = 0;
          context[35] = refalrts::call_left( context[33], context[34], context[31], context[32] );
          context[36] = refalrts::ident_left( identifiers[ident_True], context[33], context[34] );
          if( ! context[36] )
            continue;
          if( ! refalrts::empty_seq( context[33], context[34] ) )
            continue;
          //DEBUG: e._#1: 13
          //DEBUG: e._0#1: 15
          //DEBUG: s.WarningId#1: 23
          //DEBUG: t.SrcPos#1: 24
          //DEBUG: e.Message#1: 19
          //DEBUG: e.Ids-RB#1: 26
          //DEBUG: e.Ids-RE#1: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckWarningsAsErrors/4 (/7 e._#1/13 (/21 s.WarningId#1/23 t.SrcPos#1/24 e.Message#1/19 )/22 e._0#1/15 )/8 e.Ids-RB#1/26 s.WarningId#1/30 e.Ids-RE#1/28 </31 & CheckWarningsAsErrors$1?1/35 # True/36 >/32 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: # All/1 ]] }
          refalrts::reinit_ident(context[1], identifiers[ident_All]);
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        refalrts::splice_to_freelist(vm, context[31], context[32]);
        continue;
      } while ( refalrts::open_evar_advance( context[26], context[27], context[17], context[18] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CheckWarningsAsErrors/4 (/7 e._#1/13 (/21 s.WarningId#1/23 t.SrcPos#1/24 e.Message#1/19 )/22 e._0#1/15 )/8 e._1#1/26 s.WarningId#1/30 e._2#1/28 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[9];
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = 0;
      context[20] = 0;
      context[21] = refalrts::brackets_left( context[19], context[20], context[15], context[16] );
      if( ! context[21] )
        continue;
      refalrts::bracket_pointers(context[21], context[22]);
      // closed e._0#1 as range 15
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
      if( ! context[25] )
        continue;
      // closed e.Message#1 as range 19
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[28] = context[17];
        context[29] = context[18];
        if( ! refalrts::repeated_stvar_left( vm, context[30], context[23], context[28], context[29] ) )
          continue;
        // closed e._2#1 as range 28
        //DEBUG: e._#1: 13
        //DEBUG: e._0#1: 15
        //DEBUG: s.WarningId#1: 23
        //DEBUG: t.SrcPos#1: 24
        //DEBUG: e.Message#1: 19
        //DEBUG: e._1#1: 26
        //DEBUG: e._2#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & CheckWarningsAsErrors/4 (/7 e._#1/13 (/21 s.WarningId#1/23 t.SrcPos#1/24 e.Message#1/19 )/22 e._0#1/15 )/8 e._1#1/26 s.WarningId#1/30 e._2#1/28 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # Some/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_Some]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[26], context[27], context[17], context[18] ) );
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckWarningsAsErrors/4 (/7 e.Warnings#1/5 )/8 e.WarningIds#1/2 >/1
  // closed e.Warnings#1 as range 5
  // closed e.WarningIds#1 as range 2
  //DEBUG: e.Warnings#1: 5
  //DEBUG: e.WarningIds#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckWarningsAsErrors/4 (/7 e.Warnings#1/5 )/8 e.WarningIds#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_None]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckWarningsAsErrors("CheckWarningsAsErrors", COOKIE1_, COOKIE2_, func_CheckWarningsAsErrors);


static refalrts::FnResult func_SetsEq(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & SetsEq/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetsEq/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  do {
    // </0 & SetsEq/4 (/7 )/8 (/11 )/12 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetsEq/4 (/7 )/8 (/11 )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SetsEq/4 (/7 e.Set-LB#1/17 s.Item#1/23 e.Set-LE#1/19 )/8 (/11 e.Set-RB#1/24 s.Item#1/28 e.Set-RE#1/26 )/12 >/1
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
      // closed e.Set-LE#1 as range 19
      context[24] = 0;
      context[25] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[26] = context[21];
        context[27] = context[22];
        if( ! refalrts::repeated_stvar_left( vm, context[28], context[23], context[26], context[27] ) )
          continue;
        // closed e.Set-RE#1 as range 26
        //DEBUG: e.Set-LB#1: 17
        //DEBUG: s.Item#1: 23
        //DEBUG: e.Set-LE#1: 19
        //DEBUG: e.Set-RB#1: 24
        //DEBUG: e.Set-RE#1: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Item#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Item#1/28 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetsEq/4 AsIs: (/7 } Tile{ AsIs: e.Set-LB#1/17 } Tile{ AsIs: e.Set-LE#1/19 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Set-RB#1/24 } Tile{ AsIs: e.Set-RE#1/26 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
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

  // </0 & SetsEq/4 (/7 e.Set-L#1/5 )/8 (/11 e.Set-R#1/9 )/12 >/1
  // closed e.Set-L#1 as range 5
  // closed e.Set-R#1 as range 9
  //DEBUG: e.Set-L#1: 5
  //DEBUG: e.Set-R#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetsEq/4 (/7 e.Set-L#1/5 )/8 (/11 e.Set-R#1/9 )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetsEq("SetsEq", COOKIE1_, COOKIE2_, func_SetsEq);


static refalrts::FnResult func_PrintWarningsAsErrorsMessage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & PrintWarningsAsErrorsMessage/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrintWarningsAsErrorsMessage/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PrintWarningsAsErrorsMessage/4 (/7 e.FileName#1/10 )/8 # All/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_All], context[9] ) )
      continue;
    // closed e.FileName#1 as range 10
    //DEBUG: e.FileName#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Prout/7 AsIs: e.FileName#1/10 HalfReuse: ':'/8 HalfReuse: ' '/9 HalfReuse: 'a'/1 } 'l'/12 Tile{ HalfReuse: 'l'/0 }" warnings being treated as errors"/13 >/15 Tile{ ]] }
    refalrts::alloc_char(vm, context[12], 'l');
    refalrts::alloc_chars(vm, context[13], context[14], " warnings being treated as errors", 33);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Prout]);
    refalrts::reinit_char(context[8], ':');
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_char(context[1], 'a');
    refalrts::reinit_char(context[0], 'l');
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrintWarningsAsErrorsMessage/4 (/7 e.FileName#1/10 )/8 # Some/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Some], context[9] ) )
      continue;
    // closed e.FileName#1 as range 10
    //DEBUG: e.FileName#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Prout/7 AsIs: e.FileName#1/10 HalfReuse: ':'/8 HalfReuse: ' '/9 HalfReuse: 's'/1 } 'o'/12 Tile{ HalfReuse: 'm'/0 }"e warnings being treated as errors"/13 >/15 Tile{ ]] }
    refalrts::alloc_char(vm, context[12], 'o');
    refalrts::alloc_chars(vm, context[13], context[14], "e warnings being treated as errors", 34);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Prout]);
    refalrts::reinit_char(context[8], ':');
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_char(context[1], 's');
    refalrts::reinit_char(context[0], 'm');
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintWarningsAsErrorsMessage/4 (/7 e.FileName#1/5 )/8 # None/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_None], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5
  //DEBUG: e.FileName#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PrintWarningsAsErrorsMessage/4 (/7 e.FileName#1/5 )/8 # None/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintWarningsAsErrorsMessage("PrintWarningsAsErrorsMessage", COOKIE1_, COOKIE2_, func_PrintWarningsAsErrorsMessage);


static refalrts::FnResult func_PrintMessageError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & PrintMessageError/4 (/7 t.SrcPos#1/9 e.Message#1/5 )/8 >/1
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
  // closed e.Message#1 as range 5
  //DEBUG: t.SrcPos#1: 9
  //DEBUG: e.Message#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr/4 HalfReuse: </7 } Tile{ HalfReuse: & StrFromPos/8 } Tile{ AsIs: t.SrcPos#1/9 } >/11"ERROR: "/12 Tile{ AsIs: e.Message#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "ERROR: ", 7);
  refalrts::update_name(context[4], functions[efunc_PrintErr]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_StrFromPos]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMessageError("PrintMessageError", COOKIE1_, COOKIE2_, func_PrintMessageError);


static refalrts::FnResult func_PrintMessageWarning(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & PrintMessageWarning/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrintMessageWarning/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 t.new#3/14 e.new#4/9 )/12 >/1
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
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 9
  do {
    // </0 & PrintMessageWarning/4 (/7 e._#1/20 s.WarningId#1/24 e._0#1/22 )/8 (/11 s.WarningId#1/13 t.SrcPos#1/14 e.Message#1/18 )/12 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[9];
    context[19] = context[10];
    // closed e.Message#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[16];
      context[23] = context[17];
      if( ! refalrts::repeated_stvar_left( vm, context[24], context[13], context[22], context[23] ) )
        continue;
      // closed e._0#1 as range 22
      //DEBUG: t.SrcPos#1: 14
      //DEBUG: s.WarningId#1: 13
      //DEBUG: e.Message#1: 18
      //DEBUG: e._#1: 20
      //DEBUG: e._0#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e._#1/20 s.WarningId#1/24 e._0#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr/4 HalfReuse: </7 } & StrFromPos/25 Tile{ AsIs: t.SrcPos#1/14 } >/26"ERROR: "/27 Tile{ AsIs: e.Message#1/18 }" [-Werror="/29 Tile{ HalfReuse: </8 HalfReuse: & Explode/11 AsIs: s.WarningId#1/13 } >/31 Tile{ HalfReuse: ']'/12 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[25], functions[efunc_StrFromPos]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_chars(vm, context[27], context[28], "ERROR: ", 7);
      refalrts::alloc_chars(vm, context[29], context[30], " [-Werror=", 10);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::update_name(context[4], functions[efunc_PrintErr]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_name(context[11], functions[efunc_Explode]);
      refalrts::reinit_char(context[12], ']');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_evar( res, context[31], context[31] );
      res = refalrts::splice_evar( res, context[8], context[13] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[26], context[28] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[16], context[17] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintMessageWarning/4 (/7 e._#1/5 )/8 (/11 s.WarningId#1/13 t.SrcPos#1/14 e.Message#1/9 )/12 >/1
  // closed e._#1 as range 5
  // closed e.Message#1 as range 9
  //DEBUG: t.SrcPos#1: 14
  //DEBUG: s.WarningId#1: 13
  //DEBUG: e._#1: 5
  //DEBUG: e.Message#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e._#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr/4 HalfReuse: </7 } & StrFromPos/16 Tile{ AsIs: t.SrcPos#1/14 } >/17"WARNING: "/18 Tile{ AsIs: e.Message#1/9 }" [-W"/20 Tile{ HalfReuse: </8 HalfReuse: & Explode/11 AsIs: s.WarningId#1/13 } >/22 Tile{ HalfReuse: ']'/12 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[16], functions[efunc_StrFromPos]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_chars(vm, context[18], context[19], "WARNING: ", 9);
  refalrts::alloc_chars(vm, context[20], context[21], " [-W", 4);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::update_name(context[4], functions[efunc_PrintErr]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_name(context[11], functions[efunc_Explode]);
  refalrts::reinit_char(context[12], ']');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMessageWarning("PrintMessageWarning", COOKIE1_, COOKIE2_, func_PrintMessageWarning);


static refalrts::FnResult func_StrFromPos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & StrFromPos/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StrFromPos/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & StrFromPos/4 # NoPos/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_NoPos], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & StrFromPos/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: ' '/5 HalfReuse: ' '/1 ]] }
    refalrts::reinit_char(context[5], ' ');
    refalrts::reinit_char(context[1], ' ');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StrFromPos/4 (/5 s.new#2/9 t.new#3/10 e.new#4/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 7
  do {
    // </0 & StrFromPos/4 (/5 # FileLine/9 s.LineNumber#1/10 e.FileName#1/12 )/6 >/1
    context[12] = context[7];
    context[13] = context[8];
    if( ! refalrts::svar_term( context[10], context[10] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_FileLine], context[9] ) )
      continue;
    // closed e.FileName#1 as range 12
    //DEBUG: s.LineNumber#1: 10
    //DEBUG: e.FileName#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.LineNumber#1/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName#1/12 } ':'/14 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.LineNumber1 #10/5 HalfReuse: >/9 } Tile{ HalfReuse: ':'/6 HalfReuse: ' '/1 ]] }
    refalrts::alloc_char(vm, context[14], ':');
    refalrts::update_name(context[4], functions[efunc_Symb]);
    refalrts::reinit_svar( context[5], context[10] );
    refalrts::reinit_close_call(context[9]);
    refalrts::reinit_char(context[6], ':');
    refalrts::reinit_char(context[1], ' ');
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StrFromPos/4 (/5 # FileRowCol/9 (/10 s.Row#1/14 s.Col#1/15 )/11 e.FileName#1/7 )/6 >/1
  context[12] = 0;
  context[13] = 0;
  if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 7
  if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FileName#1: 7
  //DEBUG: s.Row#1: 14
  //DEBUG: s.Col#1: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Row#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName#1/7 } ':'/16 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Row1 #14/5 HalfReuse: >/9 HalfReuse: ':'/10 } </17 & Symb/18 Tile{ AsIs: s.Col#1/15 HalfReuse: >/11 } Tile{ HalfReuse: ':'/6 HalfReuse: ' '/1 ]] }
  refalrts::alloc_char(vm, context[16], ':');
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Symb]);
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::reinit_svar( context[5], context[14] );
  refalrts::reinit_close_call(context[9]);
  refalrts::reinit_char(context[10], ':');
  refalrts::reinit_close_call(context[11]);
  refalrts::reinit_char(context[6], ':');
  refalrts::reinit_char(context[1], ' ');
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[15], context[11] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StrFromPos("StrFromPos", COOKIE1_, COOKIE2_, func_StrFromPos);


static refalrts::FnResult func_PrintErr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PrintErr/4 e.Message#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Message#1 as range 2
  //DEBUG: e.Message#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Putout/0 HalfReuse: # stderr/4 AsIs: e.Message#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Putout]);
  refalrts::reinit_ident(context[4], identifiers[ident_stderr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintErr("PrintErr", 0U, 0U, func_PrintErr);


static refalrts::FnResult func_gen_ELm_CheckEntryDuplicates_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & EL-CheckEntryDuplicates=1/4 t.ErrorList#2/5 >/1
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
  //DEBUG: t.ErrorList#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-Destroy/4 AsIs: t.ErrorList#2/5 HalfReuse: (/1 } )/7 (/8 )/9 >/10 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_ELm_Destroy]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[1], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ELm_CheckEntryDuplicates_A1("EL-CheckEntryDuplicates=1", COOKIE1_, COOKIE2_, func_gen_ELm_CheckEntryDuplicates_A1);


static refalrts::FnResult func_ELm_CheckEntryDuplicates(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & EL-CheckEntryDuplicates/4 e.Entries#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Entries#1 as range 2
  //DEBUG: e.Entries#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & EL-CheckEntryDuplicates=1/6 Tile{ AsIs: </0 Reuse: & CheckEntries/4 AsIs: e.Entries#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_ELm_CheckEntryDuplicates_A1]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_CheckEntries]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_CheckEntryDuplicates("EL-CheckEntryDuplicates", 0U, 0U, func_ELm_CheckEntryDuplicates);


static refalrts::FnResult func_gen_CheckEntries_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & CheckEntries\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CheckEntries\1/4 t.new#1/13 (/7 (/11 e.new#2/9 )/12 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#2 as range 9
  // closed e.new#3 as range 5
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CheckEntries\1/4 t.ErrorList#2/13 (/7 (/11 e.Name#2/15 )/12 t.OnePos#2/19 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    // closed e.Name#2 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: t.ErrorList#2: 13
    //DEBUG: e.Name#2: 15
    //DEBUG: t.OnePos#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CheckEntries\1/4 {REMOVED TILE} (/7 (/11 e.Name#2/15 )/12 t.OnePos#2/19 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#2/13 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckEntries\1/4 t.ErrorList#2/13 (/7 (/11 e.Name#2/9 )/12 e.Positions#2/5 )/8 >/1
  // closed e.Name#2 as range 9
  // closed e.Positions#2 as range 5
  //DEBUG: t.ErrorList#2: 13
  //DEBUG: e.Name#2: 9
  //DEBUG: e.Positions#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & CheckEntries\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Reduce@1/7 AsIs: (/11 AsIs: e.Name#2/9 AsIs: )/12 } Tile{ AsIs: t.ErrorList#2/13 } Tile{ AsIs: e.Positions#2/5 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_name(context[7], functions[efunc_gen_Reduce_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckEntries_L1("CheckEntries\\1", COOKIE1_, COOKIE2_, func_gen_CheckEntries_L1);


static refalrts::FnResult func_CheckEntries(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & CheckEntries/4 e.Entries#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Entries#1 as range 2
  //DEBUG: e.Entries#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Reduce/6 & CheckEntries\1/7 </8 & EL-Create/9 >/10 Tile{ AsIs: </0 Reuse: & GroupEntries/4 AsIs: e.Entries#1/2 AsIs: >/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Reduce]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_CheckEntries_L1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_ELm_Create]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_GroupEntries]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckEntries("CheckEntries", COOKIE1_, COOKIE2_, func_CheckEntries);


static refalrts::FnResult func_AddEntryError(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & AddEntryError/4 e.Name#1/2 t.ErrorList#1/7 t.Pos#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: t.ErrorList#1: 7
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 } Tile{ AsIs: t.ErrorList#1/7 AsIs: t.Pos#1/5 HalfReuse: 'E'/1 }"ntry function "/9 Tile{ AsIs: e.Name#1/2 }" is multiple defined"/11 >/13 Tile{ ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "ntry function ", 14);
  refalrts::alloc_chars(vm, context[11], context[12], " is multiple defined", 20);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_ELm_AddErrorAt]);
  refalrts::reinit_char(context[1], 'E');
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddEntryError("AddEntryError", COOKIE1_, COOKIE2_, func_AddEntryError);


static refalrts::FnResult func_GroupEntries(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & GroupEntries/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & GroupEntries/4 e.Begin#1/7 (/13 (/17 e.Name#1/15 )/18 e.Pos1#1/11 )/14 e.Middle#1/19 (/25 (/29 e.Name#1/31 )/30 e.Pos2#1/23 )/26 e.End#1/21 >/1
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
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.Name#1 as range 15
      // closed e.Pos1#1 as range 11
      context[19] = 0;
      context[20] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[21] = context[9];
        context[22] = context[10];
        context[23] = 0;
        context[24] = 0;
        context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
        if( ! context[25] )
          continue;
        refalrts::bracket_pointers(context[25], context[26]);
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[23], context[24] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        if( ! refalrts::repeated_evar_left( vm, context[31], context[32], context[15], context[16], context[27], context[28] ) )
          continue;
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;
        // closed e.Pos2#1 as range 23
        // closed e.End#1 as range 21
        //DEBUG: e.Begin#1: 7
        //DEBUG: e.Name#1: 15
        //DEBUG: e.Pos1#1: 11
        //DEBUG: e.Middle#1: 19
        //DEBUG: e.Pos2#1: 23
        //DEBUG: e.End#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} & GroupEntries/4 {REMOVED TILE} (/13 (/17 e.Name#1/15 )/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Begin#1/7 } Tile{ AsIs: </0 } Tile{ HalfReuse: & GroupEntries/14 AsIs: e.Middle#1/19 AsIs: (/25 AsIs: (/29 AsIs: e.Name#1/31 AsIs: )/30 } Tile{ AsIs: e.Pos1#1/11 } Tile{ AsIs: e.Pos2#1/23 } Tile{ AsIs: )/26 AsIs: e.End#1/21 AsIs: >/1 ]] }
        refalrts::reinit_name(context[14], functions[efunc_GroupEntries]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[25], context[26] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[26];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[14], context[30] );
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GroupEntries/4 e.Entries#1/2 >/1
  // closed e.Entries#1 as range 2
  //DEBUG: e.Entries#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GroupEntries/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Entries#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GroupEntries("GroupEntries", COOKIE1_, COOKIE2_, func_GroupEntries);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Map@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@1/4 t.Next#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMessageError/4 AsIs: t.Next#1/7 } >/9 </10 & Map@1/11 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_open_call(vm, context[10]);
    refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_PrintMessageError]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[11] );
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & PrintMessageError/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_PrintMessageError]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@2/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Map@2/4 (/7 e.WarningIdsAsErrors#1/9 )/8 t.Next#1/13 e.Tail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.WarningIdsAsErrors#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: e.WarningIdsAsErrors#1: 9
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMessageWarning/4 AsIs: (/7 AsIs: e.WarningIdsAsErrors#1/9 AsIs: )/8 AsIs: t.Next#1/13 } >/15 </16 & Map@2/17 (/18 e.WarningIdsAsErrors#1/9/19 )/21 Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_gen_Map_Z2]);
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::copy_evar(vm, context[19], context[20], context[9], context[10]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::update_name(context[4], functions[efunc_PrintMessageWarning]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::link_brackets( context[18], context[21] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@2/4 (/7 e.WarningIdsAsErrors#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.WarningIdsAsErrors#1 as range 9
    //DEBUG: e.WarningIdsAsErrors#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 (/7 e.WarningIdsAsErrors#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 (/7 e.WarningIdsAsErrors#1/5 )/8 e.items#0/2 >/1
  // closed e.WarningIdsAsErrors#1 as range 5
  // closed e.items#0 as range 2
  //DEBUG: e.WarningIdsAsErrors#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map@0/10 Tile{ HalfReuse: (/0 Reuse: & PrintMessageWarning/4 AsIs: (/7 AsIs: e.WarningIdsAsErrors#1/5 AsIs: )/8 } )/11 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_PrintMessageWarning]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@3/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & Map@3/4 (/7 e.EnabledWarningIds#1/9 )/8 t.Next#1/13 e.Tail#1/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.EnabledWarningIds#1 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail#1 as range 11
    //DEBUG: e.EnabledWarningIds#1: 9
    //DEBUG: t.Next#1: 13
    //DEBUG: e.Tail#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & IsWarningEnabled/16 e.EnabledWarningIds#1/9/17 Tile{ AsIs: t.Next#1/13 } >/19 Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: (/7 AsIs: e.EnabledWarningIds#1/9 AsIs: )/8 } Tile{ AsIs: e.Tail#1/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_IsWarningEnabled]);
    refalrts::copy_evar(vm, context[17], context[18], context[9], context[10]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 (/7 e.EnabledWarningIds#1/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.EnabledWarningIds#1 as range 9
    //DEBUG: e.EnabledWarningIds#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 (/7 e.EnabledWarningIds#1/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 (/7 e.EnabledWarningIds#1/5 )/8 e.items#0/2 >/1
  // closed e.EnabledWarningIds#1 as range 5
  // closed e.items#0 as range 2
  //DEBUG: e.EnabledWarningIds#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Map@0/0 HalfReuse: (/4 HalfReuse: & IsWarningEnabled/7 AsIs: e.EnabledWarningIds#1/5 AsIs: )/8 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_IsWarningEnabled]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_Reduce_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Reduce@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce@1/4 (/7 e.new#1/5 )/8 t.new#2/9 e.new#3/2 >/1
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
  // closed e.new#3 as range 2
  do {
    // </0 & Reduce@1/4 (/7 e.Name#2/11 )/8 t.Acc#1/9 t.Next#1/15 e.Tail#1/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.Name#2 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Tail#1 as range 13
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Name#2: 11
    //DEBUG: t.Next#1: 15
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@1/4 AsIs: (/7 AsIs: e.Name#2/11 AsIs: )/8 } (/17 Tile{ AsIs: e.Tail#1/13 } )/18 </19 & AddEntryError/20 e.Name#2/11/21 Tile{ AsIs: t.Acc#1/9 AsIs: t.Next#1/15 } >/23 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[17]);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_AddEntryError]);
    refalrts::copy_evar(vm, context[21], context[22], context[11], context[12]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Reduce@1/4 (/7 e.Name#2/11 )/8 t.Acc#1/9 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name#2 as range 11
    //DEBUG: t.Acc#1: 9
    //DEBUG: e.Name#2: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@1/4 (/7 e.Name#2/11 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc#1/9 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@1/4 (/7 e.Name#2/5 )/8 t.accum#0/9 e.items#0/2 >/1
  // closed e.Name#2 as range 5
  // closed e.items#0 as range 2
  //DEBUG: t.accum#0: 9
  //DEBUG: e.Name#2: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & Reduce@0/0 HalfReuse: (/4 HalfReuse: & AddEntryError/7 AsIs: e.Name#2/5 AsIs: )/8 AsIs: t.accum#0/9 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_AddEntryError]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z1("Reduce@1", COOKIE1_, COOKIE2_, func_gen_Reduce_Z1);


static refalrts::FnResult func_gen_Reduce_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Reduce$1=1@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Reduce$1=1@1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & Reduce$1=1@1/4 (/7 e.Name#2/13 )/8 (/11 e.Tail0#1/15 )/12 t.Acc#2/19 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Name#2 as range 13
    // closed e.Tail0#1 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: e.Name#2: 13
    //DEBUG: e.Tail0#1: 15
    //DEBUG: t.Acc#2: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@1/4 AsIs: (/7 AsIs: e.Name#2/13 AsIs: )/8 } Tile{ AsIs: t.Acc#2/19 } Tile{ AsIs: e.Tail0#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce$1=1@1/4 (/7 e.Name#2/5 )/8 (/11 e.Tail0#1/9 )/12 e.dyn#0/2 >/1
  // closed e.Name#2 as range 5
  // closed e.Tail0#1 as range 9
  // closed e.dyn#0 as range 2
  //DEBUG: e.Name#2: 5
  //DEBUG: e.Tail0#1: 9
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & Reduce$1=1@0/0 HalfReuse: (/4 HalfReuse: & AddEntryError/7 AsIs: e.Name#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0#1/9 AsIs: )/12 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_S1A1Z0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_AddEntryError]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1Z1("Reduce$1=1@1", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1Z1);


//End of file
