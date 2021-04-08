// This file automatically generated from 'Error.ref'
// Don't edit! Edit 'Error.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1155902489_3116377131
#define COOKIE1_ 1155902489U
#define COOKIE2_ 3116377131U

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
  efunc_ErrorList = 18,
  efunc_Sort = 19,
  efunc_CheckWarningsAsErrors = 20,
  efunc_gen_Map_Z1 = 21,
  efunc_gen_Map_Z2 = 22,
  efunc_PrintWarningsAsErrorsMessage = 23,
  efunc_gen_CheckHasErrors_D1 = 24,
  efunc_gen_ELm_Destroy_A2 = 25,
  efunc_gen_ELm_Destroy_A1 = 26,
  efunc_gen_Map_Z3 = 27,
  efunc_gen_CheckWarningsAsErrors_S1C1 = 28,
  efunc_SetsEq = 29,
  efunc_Configm_AllWarningIds = 30,
  efunc_Putout = 31,
  efunc_gen_PrintErr_Z1 = 32,
  efunc_Symb = 33,
  efunc_gen_PrintErr_Z2 = 34,
  efunc_gen_StrFromPos_D3 = 35,
  efunc_gen_PrintErr_Z3 = 36,
  efunc_StrFromPos = 37,
  efunc_Explode = 38,
  efunc_gen_PrintErr_Z4 = 39,
  efunc_gen_PrintErr_Z5 = 40,
  efunc_gen_PrintErr_Z6 = 41,
  efunc_gen_PrintErr_Z7 = 42,
  efunc_gen_PrintErr_Z8 = 43,
  efunc_gen_ELm_Destroy_D1 = 44,
  efunc_gen_ELm_CheckEntryDuplicates_A1 = 45,
  efunc_gen_Reduce_Z1 = 46,
  efunc_GroupEntries = 47,
  efunc_gen_ELm_AddErrorAt_D1 = 48,
  efunc_Mu = 49,
  efunc_Up = 50,
  efunc_Evm_met = 51,
  efunc_Residue = 52,
  efunc_u_u_Metau_Residue = 53,
  efunc_MapAccum = 54,
  efunc_UnBracket = 55,
  efunc_DelAccumulator = 56,
  efunc_Inc = 57,
  efunc_Dec = 58,
  efunc_ELm_Create = 59,
  efunc_ELm_AddError = 60,
  efunc_genu_eu_u_ = 61,
  efunc_ELm_AddWarning = 62,
  efunc_ELm_AddErrorAt = 63,
  efunc_WithFileName = 64,
  efunc_ELm_AddWarningAt = 65,
  efunc_ELm_Concat = 66,
  efunc_ELm_Destroy = 67,
  efunc_FilterEnabledWarnings = 68,
  efunc_IsWarningEnabled = 69,
  efunc_CheckHasErrors = 70,
  efunc_PrintMessageError = 71,
  efunc_PrintMessageWarning = 72,
  efunc_PrintErr = 73,
  efunc_ELm_CheckEntryDuplicates = 74,
  efunc_CheckEntries = 75,
  efunc_AddEntryError = 76,
  efunc_gen_Apply_Z4 = 77,
  efunc_gen_PrintMessageError_D1 = 78,
  efunc_gen_Map_Z0 = 79,
  efunc_gen_PrintMessageError_Z0 = 80,
  efunc_gen_PrintMessageWarning_Z0 = 81,
  efunc_gen_IsWarningEnabled_Z0 = 82,
  efunc_gen_PrintErr_Z0 = 83,
  efunc_gen_Reduce_S1A1Z1 = 84,
  efunc_gen_Reduce_Z2 = 85,
  efunc_gen_CheckEntries_L1D2 = 86,
  efunc_gen_Reduce_Z0 = 87,
  efunc_gen_CheckEntries_L1Z0 = 88,
  efunc_gen_Reduce_S1A1Z2 = 89,
  efunc_gen_AddEntryError_Z0 = 90,
  efunc_gen_Reduce_S1A1Z0 = 91,
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
  ident_genu_eu_u_ = 31,
  ident_ELm_AddWarning = 32,
  ident_ELm_AddErrorAt = 33,
  ident_WithFileName = 34,
  ident_ELm_AddWarningAt = 35,
  ident_ELm_Concat = 36,
  ident_ELm_Destroy = 37,
  ident_FilterEnabledWarnings = 38,
  ident_IsWarningEnabled = 39,
  ident_CheckHasErrors = 40,
  ident_CheckWarningsAsErrors = 41,
  ident_SetsEq = 42,
  ident_PrintWarningsAsErrorsMessage = 43,
  ident_PrintMessageError = 44,
  ident_PrintMessageWarning = 45,
  ident_StrFromPos = 46,
  ident_PrintErr = 47,
  ident_ELm_CheckEntryDuplicates = 48,
  ident_CheckEntries = 49,
  ident_AddEntryError = 50,
  ident_GroupEntries = 51,
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


static refalrts::FnResult func_Apply(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Apply/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Apply/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Apply/4 s.Fn/5 e.Argument/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.Argument as range 7
    //DEBUG: s.Fn: 5
    //DEBUG: e.Argument: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn/5 AsIs: e.Argument/7 HalfReuse: & $table/1 } >/9 Tile{ ]] }
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

  // </0 & Apply/4 (/5 t.Closure/9 e.Bounded/7 )/6 e.Argument/2 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument as range 2
  context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Bounded as range 7
  //DEBUG: e.Argument: 2
  //DEBUG: t.Closure: 9
  //DEBUG: e.Bounded: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply/4 } Tile{ AsIs: t.Closure/9 } Tile{ AsIs: e.Bounded/7 } Tile{ AsIs: e.Argument/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & Map/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map/4 t.new3/5 t.new4/9 e.new5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new5 as range 7
    do {
      // </0 & Map/4 s.Fn/5 t.Next/9 e.Tail/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.Tail as range 11
      //DEBUG: t.Next: 9
      //DEBUG: s.Fn: 5
      //DEBUG: e.Tail: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn/5 AsIs: t.Next/9 } & $table/13 >/14 </15 & Map/16 s.Fn/5/17 Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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
      // </0 & Map/4 (/5 t./15 e.0/13 )/6 t.Next/9 e.Tail/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
        continue;
      // closed e.Tail as range 11
      context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
      if( ! context[16] )
        continue;
      // closed e.0 as range 13
      //DEBUG: t.Next: 9
      //DEBUG: e.Tail: 11
      //DEBUG: t.: 15
      //DEBUG: e.0: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </17 & Apply@3/18 t./15/19 e.0/13/21 Tile{ AsIs: t.Next/9 } >/23 Tile{ AsIs: </0 AsIs: & Map/4 AsIs: (/5 AsIs: t./15 AsIs: e.0/13 AsIs: )/6 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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

    // </0 & Map/4 t.Fn/5 t.Next/9 e.Tail/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail as range 11
    //DEBUG: t.Fn: 5
    //DEBUG: t.Next: 9
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.Fn/5 AsIs: t.Next/9 } >/13 </14 & Map/15 t.Fn/5/16 Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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

  // </0 & Map/4 t.Fn/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Map/4 t.Fn/5 >/1 {REMOVED TILE}
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
  // </0 & Reduce$1=1/4 t.Fn/5 (/9 e.Tail/7 )/10 t.Acc$a/11 >/1
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
  // closed e.Tail as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn: 5
  //DEBUG: e.Tail: 7
  //DEBUG: t.Acc$a: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce/4 AsIs: t.Fn/5 } Tile{ AsIs: t.Acc$a/11 } Tile{ AsIs: e.Tail/7 } Tile{ AsIs: >/1 ]] }
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
  // </0 & Reduce/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Reduce/4 t.new1/5 t.new2/7 e.new3/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & Reduce/4 t.Fn/5 t.Acc/7 t.Next/11 e.Tail/9 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
    if( ! context[12] )
      continue;
    // closed e.Tail as range 9
    //DEBUG: t.Fn: 5
    //DEBUG: t.Acc: 7
    //DEBUG: t.Next: 11
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce$1=1/14 t.Fn/5/15 (/17 Tile{ AsIs: e.Tail/9 } )/18 Tile{ AsIs: </0 Reuse: & Apply@2/4 AsIs: t.Fn/5 AsIs: t.Acc/7 AsIs: t.Next/11 } >/19 Tile{ AsIs: >/1 ]] }
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

  // </0 & Reduce/4 t.Fn/5 t.Acc/7 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Fn: 5
  //DEBUG: t.Acc: 7

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reduce/4 t.Fn/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/7 } Tile{ ]] }
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
  // </0 & Fetch/4 e.Argument/2 t.Function/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Argument as range 2
  //DEBUG: t.Function: 5
  //DEBUG: e.Argument: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply/4 } Tile{ AsIs: t.Function/5 } Tile{ AsIs: e.Argument/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & MapAccum/4 t.Fn/5 t.Acc/7 e.Tail/2 >/1
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
  // closed e.Tail as range 2
  //DEBUG: t.Fn: 5
  //DEBUG: t.Acc: 7
  //DEBUG: e.Tail: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn/5 AsIs: t.Acc/7 } (/9 )/10 Tile{ AsIs: e.Tail/2 } Tile{ AsIs: >/1 ]] }
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
  // </0 & DoMapAccum$1=1/4 t.Fn/5 (/9 e.Scanned/7 )/10 (/13 e.Tail/11 )/14 t.Acc$a/15 e.StepScanned/2 >/1
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
  // closed e.Scanned as range 7
  // closed e.Tail as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned as range 2
  //DEBUG: t.Fn: 5
  //DEBUG: e.Scanned: 7
  //DEBUG: e.Tail: 11
  //DEBUG: t.Acc$a: 15
  //DEBUG: e.StepScanned: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn/5 } Tile{ AsIs: t.Acc$a/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned/7 } Tile{ AsIs: e.StepScanned/2 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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
  // </0 & DoMapAccum/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoMapAccum/4 t.new1/5 t.new2/7 (/11 e.new3/9 )/12 e.new4/2 >/1
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
  // closed e.new3 as range 9
  // closed e.new4 as range 2
  do {
    // </0 & DoMapAccum/4 t.Fn/5 t.Acc/7 (/11 e.Scanned/13 )/12 t.Next/17 e.Tail/15 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[2];
    context[16] = context[3];
    // closed e.Scanned as range 13
    context[18] = refalrts::tvar_left( context[17], context[15], context[16] );
    if( ! context[18] )
      continue;
    // closed e.Tail as range 15
    //DEBUG: t.Fn: 5
    //DEBUG: t.Acc: 7
    //DEBUG: e.Scanned: 13
    //DEBUG: t.Next: 17
    //DEBUG: e.Tail: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum$1=1/4 AsIs: t.Fn/5 } Tile{ AsIs: (/11 AsIs: e.Scanned/13 AsIs: )/12 } (/19 Tile{ AsIs: e.Tail/15 } )/20 </21 & Apply@2/22 t.Fn/5/23 Tile{ AsIs: t.Acc/7 } Tile{ AsIs: t.Next/17 } >/25 Tile{ AsIs: >/1 ]] }
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

  // </0 & DoMapAccum/4 t.Fn/5 t.Acc/7 (/11 e.Scanned/9 )/12 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned as range 9
  //DEBUG: t.Fn: 5
  //DEBUG: t.Acc: 7
  //DEBUG: e.Scanned: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoMapAccum/4 t.Fn/5 {REMOVED TILE} (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/7 } Tile{ AsIs: e.Scanned/9 } Tile{ ]] }
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
  // </0 & UnBracket/4 (/7 e.Expr/5 )/8 >/1
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
  // closed e.Expr as range 5
  //DEBUG: e.Expr: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UnBracket/4 (/7 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Expr/5 } Tile{ ]] }
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
  // </0 & DelAccumulator/4 t.Acc/5 e.Tail/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail as range 2
  //DEBUG: t.Acc: 5
  //DEBUG: e.Tail: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DelAccumulator/4 t.Acc/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Tail/2 } Tile{ ]] }
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
  // </0 & Inc/4 e.Num/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Num as range 2
  //DEBUG: e.Num: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: e.Num/2 AsIs: >/1 ]] }
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
  // </0 & Dec/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Dec/4 s.Num/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.Num: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Num/7 HalfReuse: 1/1 } >/8 Tile{ ]] }
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

  // </0 & Dec/4 e.Num/2 >/1
  // closed e.Num as range 2
  //DEBUG: e.Num: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 } (/5 Tile{ AsIs: e.Num/2 } )/6 1/7 Tile{ AsIs: >/1 ]] }
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
  // </0 & Pipe$2\1/4 t.Func/5 (/9 e.Funcs/7 )/10 e.Arg/2 >/1
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
  // closed e.Funcs as range 7
  // closed e.Arg as range 2
  //DEBUG: t.Func: 5
  //DEBUG: e.Funcs: 7
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </11 & Apply/12 Tile{ AsIs: t.Func/5 } Tile{ AsIs: e.Arg/2 } >/13 </14 Tile{ HalfReuse: & Pipe/9 AsIs: e.Funcs/7 HalfReuse: >/10 } Tile{ AsIs: >/1 ]] }
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
  // </0 & Pipe$3\1/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Pipe$3\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg/2 } Tile{ ]] }
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
  // </0 & Pipe/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Pipe/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & Pipe/4 t.Func/7 >/1
      if( ! refalrts::empty_seq( context[5], context[6] ) )
        continue;
      //DEBUG: t.Func: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & Pipe/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: t.Func/7 } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Pipe/4 t.Func/7 e.Funcs/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Funcs as range 9
    //DEBUG: t.Func: 7
    //DEBUG: e.Funcs: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: [*]/0 Reuse: & Pipe$2\1/4 AsIs: t.Func/7 } (/11 Tile{ AsIs: e.Funcs/9 } )/12 Tile{ HalfReuse: {*}/1 ]] }
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


static refalrts::FnResult func_ELm_Create(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & EL-Create/4 e.FileName/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName as range 2
  //DEBUG: e.FileName: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: [/0 Reuse: & ErrorList/4 } (/5 Tile{ AsIs: e.FileName/2 } )/6 (/7 )/8 (/9 )/10 Tile{ HalfReuse: ]/1 ]] }
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
  res = refalrts::splice_elem( res, context[5] );
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
  // </0 & EL-AddError/4 [/7ErrorList/8 (/12 e.FileName/10 )/13 (/16 e.Errors/14 )/17 t.Warnings/18 ]/9 e.Message/2 >/1
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
  // closed e.FileName as range 10
  // closed e.Errors as range 14
  // closed e.Message as range 2
  context[19] = refalrts::tvar_left( context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FileName: 10
  //DEBUG: e.Errors: 14
  //DEBUG: e.Message: 2
  //DEBUG: t.Warnings: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName/10 AsIs: )/13 AsIs: (/16 AsIs: e.Errors/14 HalfReuse: (/17 } Tile{ HalfReuse: # NoPos/1 } Tile{ AsIs: e.Message/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: t.Warnings/18 AsIs: ]/9 } Tile{ ]] }
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
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[7], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_AddError("EL-AddError", 0U, 0U, func_ELm_AddError);


static refalrts::FnResult func_genu_eu_u_(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & gen_e__/4 e.Arg/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg as range 2
  //DEBUG: e.Arg: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & gen_e__/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Arg/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_genu_eu_u_("gen_e__", COOKIE1_, COOKIE2_, func_genu_eu_u_);


static refalrts::FnResult func_ELm_AddWarning(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & EL-AddWarning/4 [/7ErrorList/8 (/12 e.FileName/10 )/13 t.Errors/19 (/16 e.Warnings/14 )/17 ]/9 s.WarningId/18 e.Message/2 >/1
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
  // closed e.FileName as range 10
  // closed e.Warnings as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message as range 2
  context[20] = refalrts::tvar_left( context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FileName: 10
  //DEBUG: e.Warnings: 14
  //DEBUG: s.WarningId: 18
  //DEBUG: e.Message: 2
  //DEBUG: t.Errors: 19

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.WarningId/18 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName/10 AsIs: )/13 AsIs: t.Errors/19 AsIs: (/16 AsIs: e.Warnings/14 HalfReuse: (/17 HalfReuse: s.WarningId18 /9 } # NoPos/21 Tile{ AsIs: e.Message/2 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ HalfReuse: ]/1 ]] }
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
  res = refalrts::splice_elem( res, context[21] );
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
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & EL-AddErrorAt/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.new1/10 )/13 (/16 e.new2/14 )/17 t.new3/18 ]/9 t.new4/20 e.new5/2 >/1
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
  // closed e.new1 as range 10
  // closed e.new2 as range 14
  context[19] = refalrts::tvar_left( context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = refalrts::tvar_left( context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  // closed e.new5 as range 2
  do {
    // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.new9/22 )/13 (/16 e.new10/24 )/17 t.new8/18 ]/9 s.new6/20 e.new7/26 >/1
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    if( ! refalrts::svar_term( context[20], context[20] ) )
      continue;
    // closed e.new9 as range 22
    // closed e.new10 as range 24
    // closed e.new7 as range 26
    do {
      // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName/28 )/13 (/16 e.Errors/30 )/17 t.Warnings/18 ]/9 # NoPos/20 e.Message/32 >/1
      context[28] = context[22];
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      if( ! refalrts::ident_term( identifiers[ident_NoPos], context[20] ) )
        continue;
      // closed e.FileName as range 28
      // closed e.Errors as range 30
      // closed e.Message as range 32
      //DEBUG: t.Warnings: 18
      //DEBUG: e.FileName: 28
      //DEBUG: e.Errors: 30
      //DEBUG: e.Message: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName/28 AsIs: )/13 AsIs: (/16 AsIs: e.Errors/30 HalfReuse: (/17 } Tile{ AsIs: # NoPos/20 AsIs: e.Message/32 HalfReuse: )/1 } Tile{ HalfReuse: )/4 } Tile{ AsIs: t.Warnings/18 AsIs: ]/9 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::link_brackets( context[7], context[9] );
      refalrts::link_brackets( context[16], context[4] );
      refalrts::link_brackets( context[17], context[1] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[9] );
      res = refalrts::splice_elem( res, context[4] );
      res = refalrts::splice_evar( res, context[20], context[1] );
      res = refalrts::splice_evar( res, context[7], context[17] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName/28 )/13 (/16 e.Errors/30 )/17 t.Warnings/18 ]/9 s.LineNumber/20 e.Message/32 >/1
    context[28] = context[22];
    context[29] = context[23];
    context[30] = context[24];
    context[31] = context[25];
    context[32] = context[26];
    context[33] = context[27];
    // closed e.FileName as range 28
    // closed e.Errors as range 30
    // closed e.Message as range 32
    //DEBUG: t.Warnings: 18
    //DEBUG: s.LineNumber: 20
    //DEBUG: e.FileName: 28
    //DEBUG: e.Errors: 30
    //DEBUG: e.Message: 32

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName/28 AsIs: )/13 AsIs: (/16 AsIs: e.Errors/30 HalfReuse: (/17 } Tile{ HalfReuse: (/0 HalfReuse: # FileLine/4 } Tile{ AsIs: s.LineNumber/20 } e.FileName/28/34 )/36 Tile{ AsIs: e.Message/32 } Tile{ HalfReuse: )/1 } )/37 Tile{ AsIs: t.Warnings/18 AsIs: ]/9 } Tile{ ]] }
    refalrts::copy_evar(vm, context[34], context[35], context[28], context[29]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_FileLine]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[9] );
    refalrts::link_brackets( context[16], context[37] );
    refalrts::link_brackets( context[17], context[1] );
    refalrts::link_brackets( context[0], context[36] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[9] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName/22 )/13 (/16 e.Errors/24 )/17 t.Warnings/18 ]/9 (/20 # RowCol/30 s.Row/31 s.Col/32 )/21 e.Message/26 >/1
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    context[28] = 0;
    context[29] = 0;
    if( ! refalrts::brackets_term( context[28], context[29], context[20] ) )
      continue;
    context[30] = refalrts::ident_left( identifiers[ident_RowCol], context[28], context[29] );
    if( ! context[30] )
      continue;
    // closed e.FileName as range 22
    // closed e.Errors as range 24
    // closed e.Message as range 26
    if( ! refalrts::svar_left( context[31], context[28], context[29] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    //DEBUG: t.Warnings: 18
    //DEBUG: e.FileName: 22
    //DEBUG: e.Errors: 24
    //DEBUG: e.Message: 26
    //DEBUG: s.Row: 31
    //DEBUG: s.Col: 32

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName/22 AsIs: )/13 AsIs: (/16 AsIs: e.Errors/24 HalfReuse: (/17 } Tile{ HalfReuse: (/9 HalfReuse: # FileRowCol/20 HalfReuse: (/30 AsIs: s.Row/31 AsIs: s.Col/32 AsIs: )/21 } e.FileName/22/33 )/35 Tile{ AsIs: e.Message/26 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: t.Warnings/18 } Tile{ HalfReuse: ]/1 ]] }
    refalrts::copy_evar(vm, context[33], context[34], context[22], context[23]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_open_bracket(context[9]);
    refalrts::reinit_ident(context[20], identifiers[ident_FileRowCol]);
    refalrts::reinit_open_bracket(context[30]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_close_adt(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[16], context[4] );
    refalrts::link_brackets( context[17], context[0] );
    refalrts::link_brackets( context[9], context[35] );
    refalrts::link_brackets( context[30], context[21] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[9], context[21] );
    res = refalrts::splice_evar( res, context[7], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EL-AddErrorAt/4 [/7ErrorList/8 (/12 e.FileName/10 )/13 (/16 e.Errors/14 )/17 t.Warnings/18 ]/9 t.SrcPos/20 e.Message/2 >/1
  // closed e.FileName as range 10
  // closed e.Errors as range 14
  // closed e.Message as range 2
  //DEBUG: t.Warnings: 18
  //DEBUG: t.SrcPos: 20
  //DEBUG: e.FileName: 10
  //DEBUG: e.Errors: 14
  //DEBUG: e.Message: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName/10 AsIs: )/13 AsIs: (/16 AsIs: e.Errors/14 HalfReuse: (/17 } Tile{ AsIs: t.SrcPos/20 AsIs: e.Message/2 HalfReuse: )/1 } Tile{ HalfReuse: )/4 } Tile{ AsIs: t.Warnings/18 AsIs: ]/9 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[17]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[7], context[9] );
  refalrts::link_brackets( context[16], context[4] );
  refalrts::link_brackets( context[17], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[9] );
  res = refalrts::splice_elem( res, context[4] );
  res = refalrts::splice_evar( res, context[20], context[1] );
  res = refalrts::splice_evar( res, context[7], context[17] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
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
  // </0 & WithFileName/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & WithFileName/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & WithFileName/4 s.new3/5 e.new4/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.new4 as range 7
    do {
      // </0 & WithFileName/4 # NoPos/5 e.FileName/9 >/1
      context[9] = context[7];
      context[10] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_NoPos], context[5] ) )
        continue;
      // closed e.FileName as range 9
      //DEBUG: e.FileName: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & WithFileName/4 # NoPos/5 e.FileName/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # NoPos/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_NoPos]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & WithFileName/4 s.LineNumber/5 e.FileName/9 >/1
    context[9] = context[7];
    context[10] = context[8];
    // closed e.FileName as range 9
    //DEBUG: s.LineNumber: 5
    //DEBUG: e.FileName: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # FileLine/4 AsIs: s.LineNumber/5 AsIs: e.FileName/9 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_FileLine]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & WithFileName/4 (/5 # RowCol/11 s.Row/12 s.Col/13 )/6 e.FileName/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_RowCol], context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.FileName as range 7
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: e.FileName: 7
    //DEBUG: s.Row: 12
    //DEBUG: s.Col: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # FileRowCol/5 HalfReuse: (/11 AsIs: s.Row/12 AsIs: s.Col/13 AsIs: )/6 AsIs: e.FileName/7 HalfReuse: )/1 ]] }
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

  // </0 & WithFileName/4 t.SrcPos/5 e.FileName/2 >/1
  // closed e.FileName as range 2
  //DEBUG: t.SrcPos: 5
  //DEBUG: e.FileName: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & WithFileName/4 {REMOVED TILE} e.FileName/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.SrcPos/5 } Tile{ ]] }
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
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & EL-AddWarningAt/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & EL-AddWarningAt/4 [/7ErrorList/8 (/12 e.new1/10 )/13 t.new2/19 (/16 e.new3/14 )/17 ]/9 s.new4/18 t.new5/21 e.new6/2 >/1
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
  // closed e.new1 as range 10
  // closed e.new3 as range 14
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
  // closed e.new6 as range 2
  do {
    // </0 & EL-AddWarningAt/4 [/7ErrorList/8 (/12 e.new11/23 )/13 t.new10/19 (/16 e.new12/25 )/17 ]/9 s.new7/18 s.new8/21 e.new9/27 >/1
    context[23] = context[10];
    context[24] = context[11];
    context[25] = context[14];
    context[26] = context[15];
    context[27] = context[2];
    context[28] = context[3];
    if( ! refalrts::svar_term( context[21], context[21] ) )
      continue;
    // closed e.new11 as range 23
    // closed e.new12 as range 25
    // closed e.new9 as range 27
    do {
      // </0 & EL-AddWarningAt/4 [/7ErrorList/8 (/12 e.FileName/29 )/13 t.Errors/19 (/16 e.Warnings/31 )/17 ]/9 s.WarningId/18 # NoPos/21 e.Message/33 >/1
      context[29] = context[23];
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      context[34] = context[28];
      if( ! refalrts::ident_term( identifiers[ident_NoPos], context[21] ) )
        continue;
      // closed e.FileName as range 29
      // closed e.Warnings as range 31
      // closed e.Message as range 33
      //DEBUG: t.Errors: 19
      //DEBUG: s.WarningId: 18
      //DEBUG: e.FileName: 29
      //DEBUG: e.Warnings: 31
      //DEBUG: e.Message: 33

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.WarningId/18 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName/29 AsIs: )/13 AsIs: t.Errors/19 AsIs: (/16 AsIs: e.Warnings/31 HalfReuse: (/17 HalfReuse: s.WarningId18 /9 } Tile{ AsIs: # NoPos/21 AsIs: e.Message/33 HalfReuse: )/1 } Tile{ HalfReuse: )/0 HalfReuse: ]/4 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_svar( context[9], context[18] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::reinit_close_bracket(context[0]);
      refalrts::reinit_close_adt(context[4]);
      refalrts::link_brackets( context[7], context[4] );
      refalrts::link_brackets( context[16], context[0] );
      refalrts::link_brackets( context[17], context[1] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[21], context[1] );
      res = refalrts::splice_evar( res, context[7], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EL-AddWarningAt/4 [/7ErrorList/8 (/12 e.FileName/29 )/13 t.Errors/19 (/16 e.Warnings/31 )/17 ]/9 s.WarningId/18 s.LineNumber/21 e.Message/33 >/1
    context[29] = context[23];
    context[30] = context[24];
    context[31] = context[25];
    context[32] = context[26];
    context[33] = context[27];
    context[34] = context[28];
    // closed e.FileName as range 29
    // closed e.Warnings as range 31
    // closed e.Message as range 33
    //DEBUG: t.Errors: 19
    //DEBUG: s.WarningId: 18
    //DEBUG: s.LineNumber: 21
    //DEBUG: e.FileName: 29
    //DEBUG: e.Warnings: 31
    //DEBUG: e.Message: 33

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.WarningId/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName/29 AsIs: )/13 AsIs: t.Errors/19 AsIs: (/16 AsIs: e.Warnings/31 HalfReuse: (/17 HalfReuse: s.WarningId18 /9 } Tile{ HalfReuse: (/0 HalfReuse: # FileLine/4 } Tile{ AsIs: s.LineNumber/21 } e.FileName/29/35 )/37 Tile{ AsIs: e.Message/33 } )/38 )/39 Tile{ HalfReuse: ]/1 ]] }
    refalrts::copy_evar(vm, context[35], context[36], context[29], context[30]);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::alloc_close_bracket(vm, context[38]);
    refalrts::alloc_close_bracket(vm, context[39]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_svar( context[9], context[18] );
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_FileLine]);
    refalrts::reinit_close_adt(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[16], context[39] );
    refalrts::link_brackets( context[17], context[38] );
    refalrts::link_brackets( context[0], context[37] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & EL-AddWarningAt/4 [/7ErrorList/8 (/12 e.FileName/23 )/13 t.Errors/19 (/16 e.Warnings/25 )/17 ]/9 s.WarningId/18 (/21 # RowCol/31 s.Row/32 s.Col/33 )/22 e.Message/27 >/1
    context[23] = context[10];
    context[24] = context[11];
    context[25] = context[14];
    context[26] = context[15];
    context[27] = context[2];
    context[28] = context[3];
    context[29] = 0;
    context[30] = 0;
    if( ! refalrts::brackets_term( context[29], context[30], context[21] ) )
      continue;
    context[31] = refalrts::ident_left( identifiers[ident_RowCol], context[29], context[30] );
    if( ! context[31] )
      continue;
    // closed e.FileName as range 23
    // closed e.Warnings as range 25
    // closed e.Message as range 27
    if( ! refalrts::svar_left( context[32], context[29], context[30] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[29], context[30] ) )
      continue;
    if( ! refalrts::empty_seq( context[29], context[30] ) )
      continue;
    //DEBUG: t.Errors: 19
    //DEBUG: s.WarningId: 18
    //DEBUG: e.FileName: 23
    //DEBUG: e.Warnings: 25
    //DEBUG: e.Message: 27
    //DEBUG: s.Row: 32
    //DEBUG: s.Col: 33

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.WarningId/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName/23 AsIs: )/13 AsIs: t.Errors/19 AsIs: (/16 AsIs: e.Warnings/25 HalfReuse: (/17 HalfReuse: s.WarningId18 /9 } (/34 Tile{ HalfReuse: # FileRowCol/21 HalfReuse: (/31 AsIs: s.Row/32 AsIs: s.Col/33 AsIs: )/22 } e.FileName/23/35 )/37 Tile{ AsIs: e.Message/27 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ HalfReuse: ]/1 ]] }
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::copy_evar(vm, context[35], context[36], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::reinit_open_bracket(context[17]);
    refalrts::reinit_svar( context[9], context[18] );
    refalrts::reinit_ident(context[21], identifiers[ident_FileRowCol]);
    refalrts::reinit_open_bracket(context[31]);
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_close_adt(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[16], context[4] );
    refalrts::link_brackets( context[17], context[0] );
    refalrts::link_brackets( context[34], context[37] );
    refalrts::link_brackets( context[31], context[22] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EL-AddWarningAt/4 [/7ErrorList/8 (/12 e.FileName/10 )/13 t.Errors/19 (/16 e.Warnings/14 )/17 ]/9 s.WarningId/18 t.SrcPos/21 e.Message/2 >/1
  // closed e.FileName as range 10
  // closed e.Warnings as range 14
  // closed e.Message as range 2
  //DEBUG: t.Errors: 19
  //DEBUG: t.SrcPos: 21
  //DEBUG: s.WarningId: 18
  //DEBUG: e.FileName: 10
  //DEBUG: e.Warnings: 14
  //DEBUG: e.Message: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.WarningId/18 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName/10 AsIs: )/13 AsIs: t.Errors/19 AsIs: (/16 AsIs: e.Warnings/14 HalfReuse: (/17 HalfReuse: s.WarningId18 /9 } Tile{ AsIs: t.SrcPos/21 AsIs: e.Message/2 HalfReuse: )/1 } Tile{ HalfReuse: )/0 HalfReuse: ]/4 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[17]);
  refalrts::reinit_svar( context[9], context[18] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_close_adt(context[4]);
  refalrts::link_brackets( context[7], context[4] );
  refalrts::link_brackets( context[16], context[0] );
  refalrts::link_brackets( context[17], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[21], context[1] );
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
  // </0 & EL-Concat/4 [/7ErrorList/8 (/12 e.FileName-L/10 )/13 (/16 e.Errors-L/14 )/17 (/20 e.Warnings-L/18 )/21 ]/9 [/24ErrorList/25 (/29 e.FileName-R/27 )/30 (/33 e.Errors-R/31 )/34 (/37 e.Warnings-R/35 )/38 ]/26 >/1
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
  // closed e.FileName-L as range 10
  // closed e.Errors-L as range 14
  // closed e.Warnings-L as range 18
  // closed e.FileName-R as range 27
  // closed e.Errors-R as range 31
  // closed e.Warnings-R as range 35
  //DEBUG: e.FileName-L: 10
  //DEBUG: e.Errors-L: 14
  //DEBUG: e.Warnings-L: 18
  //DEBUG: e.FileName-R: 27
  //DEBUG: e.Errors-R: 31
  //DEBUG: e.Warnings-R: 35

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EL-Concat/4 {REMOVED TILE} {REMOVED TILE} )/17 (/20 {REMOVED TILE} )/21 ]/9 [/24ErrorList/25 (/29 e.FileName-R/27 )/30 (/33 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/8 AsIs: (/12 AsIs: e.FileName-L/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Errors-L/14 } Tile{ AsIs: e.Errors-R/31 } Tile{ AsIs: )/34 AsIs: (/37 } Tile{ AsIs: e.Warnings-L/18 } Tile{ AsIs: e.Warnings-R/35 } Tile{ AsIs: )/38 AsIs: ]/26 } Tile{ ]] }
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
  // </0 & EL-Destroy=2/4 (/7 e.Errors/5 )/8 (/11 e.WarningIdsAsErrors/9 )/12 (/15 e.Warnings$a/13 )/16 (/19 e.FileName/17 )/20 s.HasErrors/21 >/1
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
  // closed e.Errors as range 5
  // closed e.WarningIdsAsErrors as range 9
  // closed e.Warnings$a as range 13
  // closed e.FileName as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Errors: 5
  //DEBUG: e.WarningIdsAsErrors: 9
  //DEBUG: e.Warnings$a: 13
  //DEBUG: e.FileName: 17
  //DEBUG: s.HasErrors: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.HasErrors/21 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 HalfReuse: </7 } & Sort/22 Tile{ AsIs: e.Errors/5 } >/23 >/24 </25 Tile{ HalfReuse: & Map@2/8 AsIs: (/11 AsIs: e.WarningIdsAsErrors/9 AsIs: )/12 HalfReuse: </15 } & Sort/26 Tile{ AsIs: e.Warnings$a/13 } >/27 >/28 </29 Tile{ HalfReuse: & PrintWarningsAsErrorsMessage/16 AsIs: (/19 AsIs: e.FileName/17 AsIs: )/20 } </30 & CheckWarningsAsErrors/31 (/32 e.Warnings$a/13/33 )/35 e.WarningIdsAsErrors/9/36 >/38 >/39 Tile{ HalfReuse: s.HasErrors21 /1 ]] }
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
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[22] );
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
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & EL-Destroy=1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & EL-Destroy=1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 e.new4/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 2
  do {
    // </0 & EL-Destroy=1/4 (/7 t./25 e./17 )/8 (/11 e.WarningIdsAsErrors/19 )/12 (/15 e.FileName/21 )/16 e.Warnings$a/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.WarningIdsAsErrors as range 19
    // closed e.FileName as range 21
    // closed e.Warnings$a as range 23
    context[26] = refalrts::tvar_left( context[25], context[17], context[18] );
    if( ! context[26] )
      continue;
    // closed e. as range 17
    //DEBUG: e.WarningIdsAsErrors: 19
    //DEBUG: e.FileName: 21
    //DEBUG: e.Warnings$a: 23
    //DEBUG: t.: 25
    //DEBUG: e.: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </27 Tile{ HalfReuse: & Map@1/0 HalfReuse: </4 HalfReuse: & Sort/7 AsIs: t./25 AsIs: e./17 HalfReuse: >/8 HalfReuse: >/11 } </28 & Map@2/29 (/30 Tile{ AsIs: e.WarningIdsAsErrors/19 } )/31 </32 & Sort/33 Tile{ AsIs: e.Warnings$a/23 } >/34 >/35 </36 Tile{ HalfReuse: & PrintWarningsAsErrorsMessage/12 AsIs: (/15 AsIs: e.FileName/21 AsIs: )/16 } </37 & CheckWarningsAsErrors/38 (/39 e.Warnings$a/23/40 )/42 e.WarningIdsAsErrors/19/43 >/45 >/46 Tile{ HalfReuse: # EL-HasErrors/1 ]] }
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_open_call(vm, context[28]);
    refalrts::alloc_name(vm, context[29], functions[efunc_gen_Map_Z2]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::alloc_close_bracket(vm, context[31]);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_Sort]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_open_call(vm, context[36]);
    refalrts::alloc_open_call(vm, context[37]);
    refalrts::alloc_name(vm, context[38], functions[efunc_CheckWarningsAsErrors]);
    refalrts::alloc_open_bracket(vm, context[39]);
    refalrts::copy_evar(vm, context[40], context[41], context[23], context[24]);
    refalrts::alloc_close_bracket(vm, context[42]);
    refalrts::copy_evar(vm, context[43], context[44], context[19], context[20]);
    refalrts::alloc_close_call(vm, context[45]);
    refalrts::alloc_close_call(vm, context[46]);
    refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z1]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Sort]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_close_call(context[11]);
    refalrts::reinit_name(context[12], functions[efunc_PrintWarningsAsErrorsMessage]);
    refalrts::reinit_ident(context[1], identifiers[ident_ELm_HasErrors]);
    refalrts::push_stack( vm, context[46] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[37] );
    refalrts::link_brackets( context[39], context[42] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[32] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[46] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[34], context[36] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EL-Destroy=1/4 (/7 e.Errors/5 )/8 (/11 e.WarningIdsAsErrors/9 )/12 (/15 e.FileName/13 )/16 e.Warnings$a/2 >/1
  // closed e.Errors as range 5
  // closed e.WarningIdsAsErrors as range 9
  // closed e.FileName as range 13
  // closed e.Warnings$a as range 2
  //DEBUG: e.Errors: 5
  //DEBUG: e.WarningIdsAsErrors: 9
  //DEBUG: e.FileName: 13
  //DEBUG: e.Warnings$a: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-Destroy=2/4 AsIs: (/7 AsIs: e.Errors/5 AsIs: )/8 AsIs: (/11 AsIs: e.WarningIdsAsErrors/9 AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Warnings$a/2 } Tile{ AsIs: )/16 } (/17 Tile{ AsIs: e.FileName/13 } )/18 </19 & CheckHasErrors*1/20 [/21ErrorList/22 (/23 e.FileName/13/24 )/26 (/27 e.Errors/5/28 )/30 (/31 e.Warnings$a/2/32 )/34 ]/35 e.WarningIdsAsErrors/9/36 >/38 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_gen_CheckHasErrors_D1]);
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
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[16] );
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
  // </0 & EL-Destroy/4 [/15ErrorList/16 (/20 e.FileName/18 )/21 (/24 e.Errors/22 )/25 (/28 e.Warnings/26 )/29 ]/17 (/11 e.EnabledWarningIds/9 )/12 (/7 e.WarningIdsAsErrors/5 )/8 >/1
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
  // closed e.FileName as range 18
  // closed e.Errors as range 22
  // closed e.Warnings as range 26
  // closed e.EnabledWarningIds as range 9
  // closed e.WarningIdsAsErrors as range 5
  //DEBUG: e.FileName: 18
  //DEBUG: e.Errors: 22
  //DEBUG: e.Warnings: 26
  //DEBUG: e.EnabledWarningIds: 9
  //DEBUG: e.WarningIdsAsErrors: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/25 {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-Destroy=1/4 HalfReuse: (/15 } Tile{ AsIs: e.Errors/22 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.WarningIdsAsErrors/5 AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: e.FileName/18 } Tile{ AsIs: )/21 HalfReuse: </24 } Tile{ Reuse: & Map@3/16 AsIs: (/20 } Tile{ AsIs: e.EnabledWarningIds/9 } Tile{ HalfReuse: )/28 AsIs: e.Warnings/26 HalfReuse: >/29 HalfReuse: >/17 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_gen_ELm_Destroy_A1]);
  refalrts::reinit_open_bracket(context[15]);
  refalrts::reinit_open_bracket(context[1]);
  refalrts::reinit_open_call(context[24]);
  refalrts::update_name(context[16], functions[efunc_gen_Map_Z3]);
  refalrts::reinit_close_bracket(context[28]);
  refalrts::reinit_close_call(context[29]);
  refalrts::reinit_close_call(context[17]);
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[20], context[28] );
  refalrts::link_brackets( context[1], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[28], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[16], context[20] );
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
  // </0 & FilterEnabledWarnings/4 (/7 e.Warnings/5 )/8 e.EnabledWarningIds/2 >/1
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
  // closed e.Warnings as range 5
  // closed e.EnabledWarningIds as range 2
  //DEBUG: e.Warnings: 5
  //DEBUG: e.EnabledWarningIds: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 AsIs: (/7 } Tile{ AsIs: e.EnabledWarningIds/2 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Warnings/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
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
  // </0 & IsWarningEnabled/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & IsWarningEnabled/4 e.new1/2 t.new2/5 >/1
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new1 as range 2
  do {
    // </0 & IsWarningEnabled/4 e._/14 s.WarningId/18 e._0/16 (/5 s.WarningId/11 t.SrcPos/12 e.Message/9 )/6 >/1
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
    // closed e.Message as range 9
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[16] = context[7];
      context[17] = context[8];
      if( ! refalrts::repeated_stvar_left( vm, context[18], context[11], context[16], context[17] ) )
        continue;
      // closed e._0 as range 16
      //DEBUG: s.WarningId: 11
      //DEBUG: t.SrcPos: 12
      //DEBUG: e.Message: 9
      //DEBUG: e._: 14
      //DEBUG: e._0: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & IsWarningEnabled/4 e._/14 s.WarningId/18 e._0/16 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: s.WarningId/11 AsIs: t.SrcPos/12 AsIs: e.Message/9 AsIs: )/6 } Tile{ ]] }
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

  // </0 & IsWarningEnabled/4 e.WarningIds/2 t.Skipped/5 >/1
  // closed e.WarningIds as range 2
  //DEBUG: t.Skipped: 5
  //DEBUG: e.WarningIds: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & IsWarningEnabled/4 e.WarningIds/2 t.Skipped/5 >/1 {REMOVED TILE}
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
  // </0 & CheckHasErrors/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CheckHasErrors/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & CheckHasErrors/4 [/5ErrorList/11 (/14 e.new3/12 )/15 (/18 e.new4/16 )/19 (/22 e.new5/20 )/23 ]/6 e.new6/7 >/1
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
    // closed e.new3 as range 12
    // closed e.new4 as range 16
    // closed e.new5 as range 20
    // closed e.new6 as range 7
    do {
      // </0 & CheckHasErrors/4 [/5ErrorList/11 (/14 e.FileName/24 )/15 (/18 t.Error/32 e._/26 )/19 (/22 e.Warnings/28 )/23 ]/6 e._0/30 >/1
      context[24] = context[12];
      context[25] = context[13];
      context[26] = context[16];
      context[27] = context[17];
      context[28] = context[20];
      context[29] = context[21];
      context[30] = context[7];
      context[31] = context[8];
      // closed e.FileName as range 24
      // closed e.Warnings as range 28
      // closed e._0 as range 30
      context[33] = refalrts::tvar_left( context[32], context[26], context[27] );
      if( ! context[33] )
        continue;
      // closed e._ as range 26
      //DEBUG: e.FileName: 24
      //DEBUG: e.Warnings: 28
      //DEBUG: e._0: 30
      //DEBUG: t.Error: 32
      //DEBUG: e._: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CheckHasErrors/4 [/5ErrorList/11 (/14 e.FileName/24 )/15 (/18 t.Error/32 e._/26 )/19 (/22 e.Warnings/28 )/23 ]/6 e._0/30 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # EL-HasErrors/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_ELm_HasErrors]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CheckHasErrors/4 [/5ErrorList/11 (/14 e.FileName/24 )/15 (/18 )/19 (/22 e._/30 (/38 s.WarningId/40 e._0/36 )/39 e._1/32 )/23 ]/6 e._2/41 s.WarningId/45 e._3/43 >/1
    context[24] = context[12];
    context[25] = context[13];
    context[26] = context[20];
    context[27] = context[21];
    context[28] = context[7];
    context[29] = context[8];
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.FileName as range 24
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
      // closed e._1 as range 32
      if( ! refalrts::svar_left( context[40], context[36], context[37] ) )
        continue;
      // closed e._0 as range 36
      context[41] = 0;
      context[42] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[43] = context[34];
        context[44] = context[35];
        if( ! refalrts::repeated_stvar_left( vm, context[45], context[40], context[43], context[44] ) )
          continue;
        // closed e._3 as range 43
        //DEBUG: e.FileName: 24
        //DEBUG: e._: 30
        //DEBUG: e._1: 32
        //DEBUG: s.WarningId: 40
        //DEBUG: e._0: 36
        //DEBUG: e._2: 41
        //DEBUG: e._3: 43

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & CheckHasErrors/4 [/5ErrorList/11 (/14 e.FileName/24 )/15 (/18 )/19 (/22 e._/30 (/38 s.WarningId/40 e._0/36 )/39 e._1/32 )/23 ]/6 e._2/41 s.WarningId/45 e._3/43 {REMOVED TILE}
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

  // </0 & CheckHasErrors/4 t.ErrorList/5 e._/2 >/1
  // closed e._ as range 2
  //DEBUG: t.ErrorList: 5
  //DEBUG: e._: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckHasErrors/4 t.ErrorList/5 e._/2 {REMOVED TILE}
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
  // </0 & CheckWarningsAsErrors/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CheckWarningsAsErrors/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & CheckWarningsAsErrors/4 (/7 e._/13 (/21 s.WarningId/23 t.SrcPos/24 e.Message/19 )/22 e._0/15 )/8 e.Ids-RB/26 s.WarningId/30 e.Ids-RE/28 >/1
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
      // closed e._0 as range 15
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
      if( ! context[25] )
        continue;
      // closed e.Message as range 19
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[28] = context[17];
        context[29] = context[18];
        if( ! refalrts::repeated_stvar_left( vm, context[30], context[23], context[28], context[29] ) )
          continue;
        // closed e.Ids-RE as range 28
        //DEBUG: e._: 13
        //DEBUG: e._0: 15
        //DEBUG: s.WarningId: 23
        //DEBUG: t.SrcPos: 24
        //DEBUG: e.Message: 19
        //DEBUG: e.Ids-RB: 26
        //DEBUG: e.Ids-RE: 28
        //13: e._
        //15: e._0
        //19: e.Message
        //23: s.WarningId
        //24: t.SrcPos
        //26: e.Ids-RB
        //28: e.Ids-RE
        //30: s.WarningId
        //37: e.Ids-RB
        //39: s.WarningId
        //40: e.Ids-RE

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
          //DEBUG: e._: 13
          //DEBUG: e._0: 15
          //DEBUG: s.WarningId: 23
          //DEBUG: t.SrcPos: 24
          //DEBUG: e.Message: 19
          //DEBUG: e.Ids-RB: 26
          //DEBUG: e.Ids-RE: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & CheckWarningsAsErrors/4 (/7 e._/13 (/21 s.WarningId/23 t.SrcPos/24 e.Message/19 )/22 e._0/15 )/8 e.Ids-RB/26 s.WarningId/30 e.Ids-RE/28 </31 & CheckWarningsAsErrors$1?1/35 # True/36 >/32 {REMOVED TILE}
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
    // </0 & CheckWarningsAsErrors/4 (/7 e._/13 (/21 s.WarningId/23 t.SrcPos/24 e.Message/19 )/22 e._0/15 )/8 e._1/26 s.WarningId/30 e._2/28 >/1
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
      // closed e._0 as range 15
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
      if( ! context[25] )
        continue;
      // closed e.Message as range 19
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[28] = context[17];
        context[29] = context[18];
        if( ! refalrts::repeated_stvar_left( vm, context[30], context[23], context[28], context[29] ) )
          continue;
        // closed e._2 as range 28
        //DEBUG: e._: 13
        //DEBUG: e._0: 15
        //DEBUG: s.WarningId: 23
        //DEBUG: t.SrcPos: 24
        //DEBUG: e.Message: 19
        //DEBUG: e._1: 26
        //DEBUG: e._2: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & CheckWarningsAsErrors/4 (/7 e._/13 (/21 s.WarningId/23 t.SrcPos/24 e.Message/19 )/22 e._0/15 )/8 e._1/26 s.WarningId/30 e._2/28 {REMOVED TILE}
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

  // </0 & CheckWarningsAsErrors/4 (/7 e.Warnings/5 )/8 e.WarningIds/2 >/1
  // closed e.Warnings as range 5
  // closed e.WarningIds as range 2
  //DEBUG: e.Warnings: 5
  //DEBUG: e.WarningIds: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckWarningsAsErrors/4 (/7 e.Warnings/5 )/8 e.WarningIds/2 {REMOVED TILE}
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
  // </0 & SetsEq/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SetsEq/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 >/1
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
    // </0 & SetsEq/4 (/7 e.Set-LB/17 s.Item/23 e.Set-LE/19 )/8 (/11 e.Set-RB/24 s.Item/28 e.Set-RE/26 )/12 >/1
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
      // closed e.Set-LE as range 19
      context[24] = 0;
      context[25] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[26] = context[21];
        context[27] = context[22];
        if( ! refalrts::repeated_stvar_left( vm, context[28], context[23], context[26], context[27] ) )
          continue;
        // closed e.Set-RE as range 26
        //DEBUG: e.Set-LB: 17
        //DEBUG: s.Item: 23
        //DEBUG: e.Set-LE: 19
        //DEBUG: e.Set-RB: 24
        //DEBUG: e.Set-RE: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Item/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Item/28 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & SetsEq/4 AsIs: (/7 } Tile{ AsIs: e.Set-LB/17 } Tile{ AsIs: e.Set-LE/19 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Set-RB/24 } Tile{ AsIs: e.Set-RE/26 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
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

  // </0 & SetsEq/4 (/7 e.Set-L/5 )/8 (/11 e.Set-R/9 )/12 >/1
  // closed e.Set-L as range 5
  // closed e.Set-R as range 9
  //DEBUG: e.Set-L: 5
  //DEBUG: e.Set-R: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetsEq/4 (/7 e.Set-L/5 )/8 (/11 e.Set-R/9 )/12 {REMOVED TILE}
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
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & PrintWarningsAsErrorsMessage/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrintWarningsAsErrorsMessage/4 (/7 e.new1/5 )/8 s.new2/9 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PrintWarningsAsErrorsMessage/4 (/7 e.FileName/10 )/8 # All/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_All], context[9] ) )
      continue;
    // closed e.FileName as range 10
    //DEBUG: e.FileName: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 AsIs: e.FileName/10 HalfReuse: ':'/8 HalfReuse: ' '/9 HalfReuse: 'a'/1 }"ll warnings being treated as errors"/12 >/14 Tile{ ]] }
    refalrts::alloc_chars(vm, context[12], context[13], "ll warnings being treated as errors", 35);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
    refalrts::reinit_char(context[8], ':');
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_char(context[1], 'a');
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrintWarningsAsErrorsMessage/4 (/7 e.FileName/10 )/8 # Some/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_Some], context[9] ) )
      continue;
    // closed e.FileName as range 10
    //DEBUG: e.FileName: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 AsIs: e.FileName/10 HalfReuse: ':'/8 HalfReuse: ' '/9 HalfReuse: 's'/1 }"ome warnings being treated as errors"/12 >/14 Tile{ ]] }
    refalrts::alloc_chars(vm, context[12], context[13], "ome warnings being treated as errors", 36);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
    refalrts::reinit_char(context[8], ':');
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_char(context[1], 's');
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintWarningsAsErrorsMessage/4 (/7 e.FileName/5 )/8 # None/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_None], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName as range 5
  //DEBUG: e.FileName: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PrintWarningsAsErrorsMessage/4 (/7 e.FileName/5 )/8 # None/9 >/1 {REMOVED TILE}
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
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & PrintMessageError/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrintMessageError/4 (/7 t.new1/9 e.new2/5 )/8 >/1
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
  // closed e.new2 as range 5
  do {
    // </0 & PrintMessageError/4 (/7 # NoPos/9 e.Message/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_NoPos], context[9] ) )
      continue;
    // closed e.Message as range 11
    //DEBUG: e.Message: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 HalfReuse: ' '/9 }" E"/13 Tile{ HalfReuse: 'R'/8 }"ROR: "/15 Tile{ AsIs: e.Message/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[13], context[14], " E", 2);
    refalrts::alloc_chars(vm, context[15], context[16], "ROR: ", 5);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_char(context[8], 'R');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrintMessageError/4 (/7 (/9 s.new3/15 t.new4/16 e.new5/13 )/10 e.new6/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    // closed e.new6 as range 11
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.new5 as range 13
    do {
      // </0 & PrintMessageError/4 (/7 (/9 # FileLine/15 s.LineNumber/16 e.1/18 )/10 e.Message/20 )/8 >/1
      context[18] = context[13];
      context[19] = context[14];
      context[20] = context[11];
      context[21] = context[12];
      if( ! refalrts::svar_term( context[16], context[16] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_FileLine], context[15] ) )
        continue;
      // closed e.1 as range 18
      // closed e.Message as range 20
      //DEBUG: s.LineNumber: 16
      //DEBUG: e.1: 18
      //DEBUG: e.Message: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@1/4 AsIs: (/7 } Tile{ AsIs: e.1/18 } )/22 (/23 Tile{ HalfReuse: </9 HalfReuse: & Symb/15 AsIs: s.LineNumber/16 } Tile{ AsIs: >/1 } Tile{ AsIs: )/10 AsIs: e.Message/20 HalfReuse: >/8 } Tile{ ]] }
      refalrts::alloc_close_bracket(vm, context[22]);
      refalrts::alloc_open_bracket(vm, context[23]);
      refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z1]);
      refalrts::reinit_open_call(context[9]);
      refalrts::reinit_name(context[15], functions[efunc_Symb]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[23], context[10] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::link_brackets( context[7], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[8] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[9], context[16] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrintMessageError/4 (/7 (/9 # FileRowCol/15 (/16 s.Row/24 s.Col/25 )/17 e.1/18 )/10 e.Message/20 )/8 >/1
    context[18] = context[13];
    context[19] = context[14];
    context[20] = context[11];
    context[21] = context[12];
    context[22] = 0;
    context[23] = 0;
    if( ! refalrts::brackets_term( context[22], context[23], context[16] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[15] ) )
      continue;
    // closed e.1 as range 18
    // closed e.Message as range 20
    if( ! refalrts::svar_left( context[24], context[22], context[23] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[22], context[23] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    //DEBUG: e.1: 18
    //DEBUG: e.Message: 20
    //DEBUG: s.Row: 24
    //DEBUG: s.Col: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@2/4 AsIs: (/7 } Tile{ AsIs: e.1/18 } )/26 Tile{ AsIs: (/9 HalfReuse: </15 HalfReuse: & Symb/16 AsIs: s.Row/24 } Tile{ AsIs: >/1 } )/27 (/28 </29 & Symb/30 Tile{ AsIs: s.Col/25 HalfReuse: >/17 } Tile{ AsIs: )/10 AsIs: e.Message/20 HalfReuse: >/8 } Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_Symb]);
    refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z2]);
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[16], functions[efunc_Symb]);
    refalrts::reinit_close_call(context[17]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[28], context[10] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[29] );
    refalrts::link_brackets( context[9], context[27] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[7], context[26] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[8] );
    res = refalrts::splice_evar( res, context[25], context[17] );
    res = refalrts::splice_evar( res, context[27], context[30] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[9], context[24] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintMessageError/4 (/7 t.SrcPos/9 e.Message/5 )/8 >/1
  // closed e.Message as range 5
  //DEBUG: t.SrcPos: 9
  //DEBUG: e.Message: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@3/4 AsIs: (/7 } </11 & StrFromPos*3/12 Tile{ AsIs: t.SrcPos/9 } >/13 Tile{ AsIs: )/8 } Tile{ AsIs: e.Message/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_StrFromPos_D3]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[12] );
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
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & PrintMessageWarning/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrintMessageWarning/4 (/7 e.new1/5 )/8 (/11 s.new2/13 t.new3/14 e.new4/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 9
  do {
    // </0 & PrintMessageWarning/4 (/7 e._/20 s.WarningId/24 e._0/22 )/8 (/11 s.WarningId/13 t.SrcPos/14 e.Message/18 )/12 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[9];
    context[19] = context[10];
    // closed e.Message as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[16];
      context[23] = context[17];
      if( ! refalrts::repeated_stvar_left( vm, context[24], context[13], context[22], context[23] ) )
        continue;
      // closed e._0 as range 22
      //DEBUG: t.SrcPos: 14
      //DEBUG: s.WarningId: 13
      //DEBUG: e.Message: 18
      //DEBUG: e._: 20
      //DEBUG: e._0: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e._/20 s.WarningId/24 e._0/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@4/4 AsIs: (/7 } </25 & StrFromPos/26 Tile{ AsIs: t.SrcPos/14 } >/27 Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Message/18 } )/28 </29 & Explode/30 Tile{ AsIs: s.WarningId/13 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_StrFromPos]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_close_bracket(vm, context[28]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_Explode]);
      refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z4]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[29] );
      refalrts::link_brackets( context[11], context[28] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[12];
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[28], context[30] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[16], context[17] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrintMessageWarning/4 (/7 e._/16 )/8 (/11 s.WarningId/13 # NoPos/14 e.Message/18 )/12 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[9];
    context[19] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_NoPos], context[14] ) )
      continue;
    // closed e._ as range 16
    // closed e.Message as range 18
    //DEBUG: s.WarningId: 13
    //DEBUG: e._: 16
    //DEBUG: e.Message: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e._/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@5/4 AsIs: (/7 } Tile{ AsIs: e.Message/18 } Tile{ HalfReuse: )/14 } Tile{ HalfReuse: </8 HalfReuse: & Explode/11 AsIs: s.WarningId/13 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z5]);
    refalrts::reinit_close_bracket(context[14]);
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[11], functions[efunc_Explode]);
    refalrts::reinit_close_call(context[12]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[8] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrintMessageWarning/4 (/7 e.new5/16 )/8 (/11 s.new6/13 (/14 s.new7/22 t.new8/23 e.new9/20 )/15 e.new10/18 )/12 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[9];
    context[19] = context[10];
    context[20] = 0;
    context[21] = 0;
    if( ! refalrts::brackets_term( context[20], context[21], context[14] ) )
      continue;
    // closed e.new5 as range 16
    // closed e.new10 as range 18
    if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
      continue;
    context[24] = refalrts::tvar_left( context[23], context[20], context[21] );
    if( ! context[24] )
      continue;
    // closed e.new9 as range 20
    do {
      // </0 & PrintMessageWarning/4 (/7 e._/25 )/8 (/11 s.WarningId/13 (/14 # FileLine/22 s.LineNumber/23 e.1/27 )/15 e.Message/29 )/12 >/1
      context[25] = context[16];
      context[26] = context[17];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[18];
      context[30] = context[19];
      if( ! refalrts::svar_term( context[23], context[23] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_FileLine], context[22] ) )
        continue;
      // closed e._ as range 25
      // closed e.1 as range 27
      // closed e.Message as range 29
      //DEBUG: s.LineNumber: 23
      //DEBUG: s.WarningId: 13
      //DEBUG: e._: 25
      //DEBUG: e.1: 27
      //DEBUG: e.Message: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e._/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@6/4 AsIs: (/7 } Tile{ AsIs: e.1/27 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: </14 HalfReuse: & Symb/22 AsIs: s.LineNumber/23 } >/31 )/32 Tile{ HalfReuse: (/15 AsIs: e.Message/29 AsIs: )/12 HalfReuse: </1 } & Explode/33 Tile{ AsIs: s.WarningId/13 } >/34 >/35 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_Explode]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z6]);
      refalrts::reinit_open_call(context[14]);
      refalrts::reinit_name(context[22], functions[efunc_Symb]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::reinit_open_call(context[1]);
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[1] );
      refalrts::link_brackets( context[15], context[12] );
      refalrts::link_brackets( context[11], context[32] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[14] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[15], context[1] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[14], context[23] );
      res = refalrts::splice_evar( res, context[8], context[11] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrintMessageWarning/4 (/7 e._/25 )/8 (/11 s.WarningId/13 (/14 # FileRowCol/22 (/23 s.Row/33 s.Col/34 )/24 e.1/27 )/15 e.Message/29 )/12 >/1
    context[25] = context[16];
    context[26] = context[17];
    context[27] = context[20];
    context[28] = context[21];
    context[29] = context[18];
    context[30] = context[19];
    context[31] = 0;
    context[32] = 0;
    if( ! refalrts::brackets_term( context[31], context[32], context[23] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[22] ) )
      continue;
    // closed e._ as range 25
    // closed e.1 as range 27
    // closed e.Message as range 29
    if( ! refalrts::svar_left( context[33], context[31], context[32] ) )
      continue;
    if( ! refalrts::svar_left( context[34], context[31], context[32] ) )
      continue;
    if( ! refalrts::empty_seq( context[31], context[32] ) )
      continue;
    //DEBUG: s.WarningId: 13
    //DEBUG: e._: 25
    //DEBUG: e.1: 27
    //DEBUG: e.Message: 29
    //DEBUG: s.Row: 33
    //DEBUG: s.Col: 34

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e._/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@7/4 AsIs: (/7 } Tile{ AsIs: e.1/27 } )/35 Tile{ AsIs: (/14 HalfReuse: </22 HalfReuse: & Symb/23 AsIs: s.Row/33 } >/36 Tile{ AsIs: )/8 AsIs: (/11 } </37 & Symb/38 Tile{ AsIs: s.Col/34 HalfReuse: >/24 } )/39 Tile{ HalfReuse: (/15 AsIs: e.Message/29 AsIs: )/12 HalfReuse: </1 } & Explode/40 Tile{ AsIs: s.WarningId/13 } >/41 >/42 Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_open_call(vm, context[37]);
    refalrts::alloc_name(vm, context[38], functions[efunc_Symb]);
    refalrts::alloc_close_bracket(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_Explode]);
    refalrts::alloc_close_call(vm, context[41]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z7]);
    refalrts::reinit_open_call(context[22]);
    refalrts::reinit_name(context[23], functions[efunc_Symb]);
    refalrts::reinit_close_call(context[24]);
    refalrts::reinit_open_bracket(context[15]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[1] );
    refalrts::link_brackets( context[15], context[12] );
    refalrts::link_brackets( context[11], context[39] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[37] );
    refalrts::link_brackets( context[14], context[8] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[7], context[35] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_elem( res, context[40] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_elem( res, context[39] );
    res = refalrts::splice_evar( res, context[34], context[24] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[14], context[33] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintMessageWarning/4 (/7 e._/5 )/8 (/11 s.WarningId/13 t.SrcPos/14 e.Message/9 )/12 >/1
  // closed e._ as range 5
  // closed e.Message as range 9
  //DEBUG: t.SrcPos: 14
  //DEBUG: s.WarningId: 13
  //DEBUG: e._: 5
  //DEBUG: e.Message: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e._/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@8/4 AsIs: (/7 } </16 & StrFromPos*3/17 Tile{ AsIs: t.SrcPos/14 } >/18 Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Message/9 } )/19 </20 & Explode/21 Tile{ AsIs: s.WarningId/13 } Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_StrFromPos_D3]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Explode]);
  refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z8]);
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[11], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[16], context[17] );
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
  // </0 & StrFromPos/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & StrFromPos/4 t.new1/5 >/1
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

  // </0 & StrFromPos/4 (/5 s.new2/9 t.new3/10 e.new4/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 7
  do {
    // </0 & StrFromPos/4 (/5 # FileLine/9 s.LineNumber/10 e.FileName/12 )/6 >/1
    context[12] = context[7];
    context[13] = context[8];
    if( ! refalrts::svar_term( context[10], context[10] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_FileLine], context[9] ) )
      continue;
    // closed e.FileName as range 12
    //DEBUG: s.LineNumber: 10
    //DEBUG: e.FileName: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.LineNumber/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName/12 } ':'/14 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.LineNumber10 /5 HalfReuse: >/9 } Tile{ HalfReuse: ':'/6 HalfReuse: ' '/1 ]] }
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
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StrFromPos/4 (/5 # FileRowCol/9 (/10 s.Row/14 s.Col/15 )/11 e.FileName/7 )/6 >/1
  context[12] = 0;
  context[13] = 0;
  if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName as range 7
  if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.FileName: 7
  //DEBUG: s.Row: 14
  //DEBUG: s.Col: 15

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Row/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.FileName/7 } ':'/16 Tile{ AsIs: </0 Reuse: & Symb/4 HalfReuse: s.Row14 /5 HalfReuse: >/9 HalfReuse: ':'/10 } </17 & Symb/18 Tile{ AsIs: s.Col/15 HalfReuse: >/11 } Tile{ HalfReuse: ':'/6 HalfReuse: ' '/1 ]] }
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
  res = refalrts::splice_elem( res, context[16] );
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
  // </0 & PrintErr/4 e.Message/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Message as range 2
  //DEBUG: e.Message: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Putout/0 HalfReuse: # stderr/4 AsIs: e.Message/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Putout]);
  refalrts::reinit_ident(context[4], identifiers[ident_stderr]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
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
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & EL-CheckEntryDuplicates=1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & EL-CheckEntryDuplicates=1/4 t.new1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & EL-CheckEntryDuplicates=1/4 [/5ErrorList/9 (/12 e.1/10 )/13 (/16 e.3/14 )/17 (/20 e.5/18 )/21 ]/6 >/1
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::adt_term(context[7], context[8], functions[efunc_ErrorList], context[5]);
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[7], context[8] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[7], context[8] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    // closed e.1 as range 10
    // closed e.3 as range 14
    // closed e.5 as range 18
    //DEBUG: e.1: 10
    //DEBUG: e.3: 14
    //DEBUG: e.5: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & EL-Destroy=1/13 AsIs: (/16 AsIs: e.3/14 AsIs: )/17 AsIs: (/20 } Tile{ AsIs: )/21 } (/22 Tile{ AsIs: e.1/10 } Tile{ HalfReuse: )/4 HalfReuse: </5 Reuse: & Map@3/9 AsIs: (/12 } )/23 Tile{ AsIs: e.5/18 } Tile{ HalfReuse: >/6 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::reinit_name(context[13], functions[efunc_gen_ELm_Destroy_A1]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_open_call(context[5]);
    refalrts::update_name(context[9], functions[efunc_gen_Map_Z3]);
    refalrts::reinit_close_call(context[6]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    refalrts::link_brackets( context[12], context[23] );
    refalrts::link_brackets( context[22], context[4] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[4], context[12] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[13], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EL-CheckEntryDuplicates=1/4 t.ErrorList/5 >/1
  //DEBUG: t.ErrorList: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-Destroy*1/4 AsIs: t.ErrorList/5 HalfReuse: (/1 } )/7 (/8 )/9 >/10 Tile{ ]] }
  refalrts::alloc_close_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_ELm_Destroy_D1]);
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
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & EL-CheckEntryDuplicates/4 e.Entries/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Entries as range 2
  //DEBUG: e.Entries: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & EL-CheckEntryDuplicates=1/6 </7 & Reduce@1/8 [/9ErrorList/10 (/11 )/12 (/13 )/14 (/15 )/16 ]/17 Tile{ AsIs: </0 Reuse: & GroupEntries/4 AsIs: e.Entries/2 AsIs: >/1 } >/18 >/19 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_ELm_CheckEntryDuplicates_A1]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_Reduce_Z1]);
  refalrts::alloc_open_adt(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_ErrorList]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_close_adt(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_GroupEntries]);
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[9], context[17] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ELm_CheckEntryDuplicates("EL-CheckEntryDuplicates", 0U, 0U, func_ELm_CheckEntryDuplicates);


static refalrts::FnResult func_CheckEntries(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & CheckEntries/4 e.Entries/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Entries as range 2
  //DEBUG: e.Entries: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Reduce@1/6 [/7ErrorList/8 (/9 )/10 (/11 )/12 (/13 )/14 ]/15 Tile{ AsIs: </0 Reuse: & GroupEntries/4 AsIs: e.Entries/2 AsIs: >/1 } >/16 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Reduce_Z1]);
  refalrts::alloc_open_adt(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_ErrorList]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_close_adt(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_GroupEntries]);
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[15] );
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
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & AddEntryError/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & AddEntryError/4 e.new1/2 t.new2/7 t.new3/5 >/1
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new1 as range 2
  do {
    // </0 & AddEntryError/4 e.new8/9 [/7ErrorList/13 (/16 e.new5/14 )/17 (/20 e.new6/18 )/21 t.new7/22 ]/8 t.new4/5 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::adt_term(context[11], context[12], functions[efunc_ErrorList], context[7]);
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[11], context[12] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.new8 as range 9
    // closed e.new5 as range 14
    // closed e.new6 as range 18
    context[23] = refalrts::tvar_left( context[22], context[11], context[12] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    do {
      // </0 & AddEntryError/4 e.new13/24 [/7ErrorList/13 (/16 e.new11/26 )/17 (/20 e.new12/28 )/21 t.new10/22 ]/8 s.new9/5 >/1
      context[24] = context[9];
      context[25] = context[10];
      context[26] = context[14];
      context[27] = context[15];
      context[28] = context[18];
      context[29] = context[19];
      if( ! refalrts::svar_term( context[5], context[5] ) )
        continue;
      // closed e.new13 as range 24
      // closed e.new11 as range 26
      // closed e.new12 as range 28
      do {
        // </0 & AddEntryError/4 e.Name/30 [/7ErrorList/13 (/16 e.1/32 )/17 (/20 e.3/34 )/21 t.1/22 ]/8 # NoPos/5 >/1
        context[30] = context[24];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        context[34] = context[28];
        context[35] = context[29];
        if( ! refalrts::ident_term( identifiers[ident_NoPos], context[5] ) )
          continue;
        // closed e.Name as range 30
        // closed e.1 as range 32
        // closed e.3 as range 34
        //DEBUG: t.1: 22
        //DEBUG: e.Name: 30
        //DEBUG: e.1: 32
        //DEBUG: e.3: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/13 AsIs: (/16 AsIs: e.1/32 AsIs: )/17 AsIs: (/20 AsIs: e.3/34 HalfReuse: (/21 } Tile{ AsIs: # NoPos/5 HalfReuse: 'E'/1 }"ntr"/36 Tile{ HalfReuse: 'y'/0 HalfReuse: ' '/4 }"function "/38 Tile{ AsIs: e.Name/30 }" is multiple defined"/40 )/42 )/43 Tile{ AsIs: t.1/22 AsIs: ]/8 } Tile{ ]] }
        refalrts::alloc_chars(vm, context[36], context[37], "ntr", 3);
        refalrts::alloc_chars(vm, context[38], context[39], "function ", 9);
        refalrts::alloc_chars(vm, context[40], context[41], " is multiple defined", 20);
        refalrts::alloc_close_bracket(vm, context[42]);
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::reinit_open_bracket(context[21]);
        refalrts::reinit_char(context[1], 'E');
        refalrts::reinit_char(context[0], 'y');
        refalrts::reinit_char(context[4], ' ');
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[20], context[43] );
        refalrts::link_brackets( context[21], context[42] );
        refalrts::link_brackets( context[16], context[17] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[22], context[8] );
        res = refalrts::splice_evar( res, context[40], context[43] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[5], context[1] );
        res = refalrts::splice_evar( res, context[7], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & AddEntryError/4 e.Name/30 [/7ErrorList/13 (/16 e.1/32 )/17 (/20 e.3/34 )/21 t.1/22 ]/8 s.LineNumber/5 >/1
      context[30] = context[24];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      context[34] = context[28];
      context[35] = context[29];
      // closed e.Name as range 30
      // closed e.1 as range 32
      // closed e.3 as range 34
      //DEBUG: t.1: 22
      //DEBUG: s.LineNumber: 5
      //DEBUG: e.Name: 30
      //DEBUG: e.1: 32
      //DEBUG: e.3: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/13 AsIs: (/16 AsIs: e.1/32 AsIs: )/17 AsIs: (/20 AsIs: e.3/34 HalfReuse: (/21 } (/36 Tile{ HalfReuse: # FileLine/1 } Tile{ AsIs: s.LineNumber/5 } e.1/32/37 )/39 Tile{ HalfReuse: 'E'/0 HalfReuse: 'n'/4 }"try function "/40 Tile{ AsIs: e.Name/30 }" is multiple defined"/42 )/44 )/45 Tile{ AsIs: t.1/22 AsIs: ]/8 } Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[36]);
      refalrts::copy_evar(vm, context[37], context[38], context[32], context[33]);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::alloc_chars(vm, context[40], context[41], "try function ", 13);
      refalrts::alloc_chars(vm, context[42], context[43], " is multiple defined", 20);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::reinit_open_bracket(context[21]);
      refalrts::reinit_ident(context[1], identifiers[ident_FileLine]);
      refalrts::reinit_char(context[0], 'E');
      refalrts::reinit_char(context[4], 'n');
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[20], context[45] );
      refalrts::link_brackets( context[21], context[44] );
      refalrts::link_brackets( context[36], context[39] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[8] );
      res = refalrts::splice_evar( res, context[42], context[45] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[5] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[7], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & AddEntryError/4 e.Name/24 [/7ErrorList/13 (/16 e.1/26 )/17 (/20 e.3/28 )/21 t.1/22 ]/8 (/5 # RowCol/32 s.Row/33 s.Col/34 )/6 >/1
      context[24] = context[9];
      context[25] = context[10];
      context[26] = context[14];
      context[27] = context[15];
      context[28] = context[18];
      context[29] = context[19];
      context[30] = 0;
      context[31] = 0;
      if( ! refalrts::brackets_term( context[30], context[31], context[5] ) )
        continue;
      context[32] = refalrts::ident_left( identifiers[ident_RowCol], context[30], context[31] );
      if( ! context[32] )
        continue;
      // closed e.Name as range 24
      // closed e.1 as range 26
      // closed e.3 as range 28
      if( ! refalrts::svar_left( context[33], context[30], context[31] ) )
        continue;
      if( ! refalrts::svar_left( context[34], context[30], context[31] ) )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      //DEBUG: t.1: 22
      //DEBUG: e.Name: 24
      //DEBUG: e.1: 26
      //DEBUG: e.3: 28
      //DEBUG: s.Row: 33
      //DEBUG: s.Col: 34

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/13 AsIs: (/16 AsIs: e.1/26 AsIs: )/17 AsIs: (/20 AsIs: e.3/28 HalfReuse: (/21 } Tile{ HalfReuse: (/8 HalfReuse: # FileRowCol/5 HalfReuse: (/32 AsIs: s.Row/33 AsIs: s.Col/34 AsIs: )/6 } e.1/26/35 )/37"En"/38 Tile{ HalfReuse: 't'/0 HalfReuse: 'r'/4 }"y function "/40 Tile{ AsIs: e.Name/24 }" is multiple defined"/42 )/44 )/45 Tile{ AsIs: t.1/22 } Tile{ HalfReuse: ]/1 ]] }
      refalrts::copy_evar(vm, context[35], context[36], context[26], context[27]);
      refalrts::alloc_close_bracket(vm, context[37]);
      refalrts::alloc_chars(vm, context[38], context[39], "En", 2);
      refalrts::alloc_chars(vm, context[40], context[41], "y function ", 11);
      refalrts::alloc_chars(vm, context[42], context[43], " is multiple defined", 20);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::reinit_open_bracket(context[21]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[5], identifiers[ident_FileRowCol]);
      refalrts::reinit_open_bracket(context[32]);
      refalrts::reinit_char(context[0], 't');
      refalrts::reinit_char(context[4], 'r');
      refalrts::reinit_close_adt(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::link_brackets( context[20], context[45] );
      refalrts::link_brackets( context[21], context[44] );
      refalrts::link_brackets( context[8], context[37] );
      refalrts::link_brackets( context[32], context[6] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[42], context[45] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[8], context[6] );
      res = refalrts::splice_evar( res, context[7], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AddEntryError/4 e.Name/24 [/7ErrorList/13 (/16 e.1/26 )/17 (/20 e.3/28 )/21 t.1/22 ]/8 t.Pos/5 >/1
    context[24] = context[9];
    context[25] = context[10];
    context[26] = context[14];
    context[27] = context[15];
    context[28] = context[18];
    context[29] = context[19];
    // closed e.Name as range 24
    // closed e.1 as range 26
    // closed e.3 as range 28
    //DEBUG: t.1: 22
    //DEBUG: t.Pos: 5
    //DEBUG: e.Name: 24
    //DEBUG: e.1: 26
    //DEBUG: e.3: 28

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: [/7 AsIs: & ErrorList/13 AsIs: (/16 AsIs: e.1/26 AsIs: )/17 AsIs: (/20 AsIs: e.3/28 HalfReuse: (/21 } Tile{ AsIs: t.Pos/5 HalfReuse: 'E'/1 }"ntr"/30 Tile{ HalfReuse: 'y'/0 HalfReuse: ' '/4 }"function "/32 Tile{ AsIs: e.Name/24 }" is multiple defined"/34 )/36 )/37 Tile{ AsIs: t.1/22 AsIs: ]/8 } Tile{ ]] }
    refalrts::alloc_chars(vm, context[30], context[31], "ntr", 3);
    refalrts::alloc_chars(vm, context[32], context[33], "function ", 9);
    refalrts::alloc_chars(vm, context[34], context[35], " is multiple defined", 20);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::reinit_open_bracket(context[21]);
    refalrts::reinit_char(context[1], 'E');
    refalrts::reinit_char(context[0], 'y');
    refalrts::reinit_char(context[4], ' ');
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[20], context[37] );
    refalrts::link_brackets( context[21], context[36] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[8] );
    res = refalrts::splice_evar( res, context[34], context[37] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[5], context[1] );
    res = refalrts::splice_evar( res, context[7], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddEntryError/4 e.Name/2 t.ErrorList/7 t.Pos/5 >/1
  // closed e.Name as range 2
  //DEBUG: t.ErrorList: 7
  //DEBUG: t.Pos: 5
  //DEBUG: e.Name: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt*1/4 } Tile{ AsIs: t.ErrorList/7 AsIs: t.Pos/5 HalfReuse: 'E'/1 }"ntry function "/9 Tile{ AsIs: e.Name/2 }" is multiple defined"/11 >/13 Tile{ ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "ntry function ", 14);
  refalrts::alloc_chars(vm, context[11], context[12], " is multiple defined", 20);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_ELm_AddErrorAt_D1]);
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
  // </0 & GroupEntries/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & GroupEntries/4 e.Begin/7 (/13 (/17 e.Name/15 )/18 e.Pos1/11 )/14 e.Middle/19 (/25 (/29 e.Name/31 )/30 e.Pos2/23 )/26 e.End/21 >/1
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
      // closed e.Name as range 15
      // closed e.Pos1 as range 11
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
        // closed e.Pos2 as range 23
        // closed e.End as range 21
        //DEBUG: e.Begin: 7
        //DEBUG: e.Name: 15
        //DEBUG: e.Pos1: 11
        //DEBUG: e.Middle: 19
        //DEBUG: e.Pos2: 23
        //DEBUG: e.End: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} & GroupEntries/4 {REMOVED TILE} (/13 (/17 e.Name/15 )/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Begin/7 } Tile{ AsIs: </0 } Tile{ HalfReuse: & GroupEntries/14 AsIs: e.Middle/19 AsIs: (/25 AsIs: (/29 AsIs: e.Name/31 AsIs: )/30 } Tile{ AsIs: e.Pos1/11 } Tile{ AsIs: e.Pos2/23 } Tile{ AsIs: )/26 AsIs: e.End/21 AsIs: >/1 ]] }
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
        res = refalrts::splice_elem( res, context[0] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[19], context[20], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GroupEntries/4 e.Entries/2 >/1
  // closed e.Entries as range 2
  //DEBUG: e.Entries: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GroupEntries/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Entries/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GroupEntries("GroupEntries", COOKIE1_, COOKIE2_, func_GroupEntries);


static refalrts::FnResult func_gen_CheckHasErrors_D1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & CheckHasErrors*1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & CheckHasErrors*1/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & CheckHasErrors*1/4 [/5ErrorList/11 (/14 e.FileName/12 )/15 (/18 )/19 (/22 e._/24 (/32 s.WarningId/34 e._0/30 )/33 e._1/26 )/23 ]/6 e._2/35 s.WarningId/39 e._3/37 >/1
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
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.FileName as range 12
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[26] = context[20];
      context[27] = context[21];
      context[28] = context[7];
      context[29] = context[8];
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      // closed e._1 as range 26
      if( ! refalrts::svar_left( context[34], context[30], context[31] ) )
        continue;
      // closed e._0 as range 30
      context[35] = 0;
      context[36] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[37] = context[28];
        context[38] = context[29];
        if( ! refalrts::repeated_stvar_left( vm, context[39], context[34], context[37], context[38] ) )
          continue;
        // closed e._3 as range 37
        //DEBUG: e.FileName: 12
        //DEBUG: e._: 24
        //DEBUG: e._1: 26
        //DEBUG: s.WarningId: 34
        //DEBUG: e._0: 30
        //DEBUG: e._2: 35
        //DEBUG: e._3: 37

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & CheckHasErrors*1/4 [/5ErrorList/11 (/14 e.FileName/12 )/15 (/18 )/19 (/22 e._/24 (/32 s.WarningId/34 e._0/30 )/33 e._1/26 )/23 ]/6 e._2/35 s.WarningId/39 e._3/37 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: # EL-HasErrors/1 ]] }
        refalrts::reinit_ident(context[1], identifiers[ident_ELm_HasErrors]);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[35], context[36], context[28], context[29] ) );
    } while ( refalrts::open_evar_advance( context[24], context[25], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CheckHasErrors*1/4 t.ErrorList/5 e._/2 >/1
  // closed e._ as range 2
  //DEBUG: t.ErrorList: 5
  //DEBUG: e._: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CheckHasErrors*1/4 t.ErrorList/5 e._/2 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # EL-NoErrors/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_ELm_NoErrors]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckHasErrors_D1("CheckHasErrors*1", COOKIE1_, COOKIE2_, func_gen_CheckHasErrors_D1);


static refalrts::FnResult func_gen_Apply_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Apply@2/4 t.new1/5 t.new2/7 t.new3/9 >/1
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
    // </0 & Apply@2/4 s.Fn/5 t.Acc/7 t.Next/9 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    //DEBUG: t.Acc: 7
    //DEBUG: t.Next: 9
    //DEBUG: s.Fn: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn/5 AsIs: t.Acc/7 AsIs: t.Next/9 HalfReuse: & $table/1 } >/11 Tile{ ]] }
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
    // </0 & Apply@2/4 (/5 t.Closure/13 e.Bounded/11 )/6 t.Acc/7 t.Next/9 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded as range 11
    //DEBUG: t.Acc: 7
    //DEBUG: t.Next: 9
    //DEBUG: t.Closure: 13
    //DEBUG: e.Bounded: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@4/4 } Tile{ AsIs: t.Closure/13 } Tile{ AsIs: e.Bounded/11 } Tile{ AsIs: t.Acc/7 AsIs: t.Next/9 AsIs: >/1 ]] }
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

  // </0 & Apply@2/4 t.dyn0/5 t.Acc/7 t.Next/9 >/1
  //DEBUG: t.dyn0: 5
  //DEBUG: t.Acc: 7
  //DEBUG: t.Next: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn0/5 AsIs: t.Acc/7 AsIs: t.Next/9 AsIs: >/1 ]] }
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
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & Map@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Map@1/4 t.new1/7 e.new2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new2 as range 5
    do {
      // </0 & Map@1/4 (/7 t.new3/13 e.new4/11 )/8 e.new5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new5 as range 9
      context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
      if( ! context[14] )
        continue;
      // closed e.new4 as range 11
      do {
        // </0 & Map@1/4 (/7 # NoPos/13 e.0/15 )/8 e.Tail/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_NoPos], context[13] ) )
          continue;
        // closed e.0 as range 15
        // closed e.Tail as range 17
        //DEBUG: e.0: 15
        //DEBUG: e.Tail: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 HalfReuse: ' '/13 }" ERROR: "/19 Tile{ AsIs: e.0/15 } >/21 </22 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], " ERROR: ", 8);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
        refalrts::reinit_char(context[13], ' ');
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 (/13 s.new6/21 t.new7/22 e.new8/19 )/14 e.new9/15 )/8 e.new10/17 >/1
        context[15] = context[11];
        context[16] = context[12];
        context[17] = context[9];
        context[18] = context[10];
        context[19] = 0;
        context[20] = 0;
        if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
          continue;
        // closed e.new9 as range 15
        // closed e.new10 as range 17
        if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
          continue;
        context[23] = refalrts::tvar_left( context[22], context[19], context[20] );
        if( ! context[23] )
          continue;
        // closed e.new8 as range 19
        do {
          // </0 & Map@1/4 (/7 (/13 # FileLine/21 s.LineNumber/22 e.2/24 )/14 e.0/26 )/8 e.Tail/28 >/1
          context[24] = context[19];
          context[25] = context[20];
          context[26] = context[15];
          context[27] = context[16];
          context[28] = context[17];
          context[29] = context[18];
          if( ! refalrts::svar_term( context[22], context[22] ) )
            continue;
          if( ! refalrts::ident_term( identifiers[ident_FileLine], context[21] ) )
            continue;
          // closed e.2 as range 24
          // closed e.0 as range 26
          // closed e.Tail as range 28
          //DEBUG: s.LineNumber: 22
          //DEBUG: e.2: 24
          //DEBUG: e.0: 26
          //DEBUG: e.Tail: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@1/4 AsIs: (/7 } Tile{ AsIs: e.2/24 } Tile{ AsIs: )/14 } (/30 Tile{ HalfReuse: </13 HalfReuse: & Symb/21 AsIs: s.LineNumber/22 } >/31 )/32 Tile{ AsIs: e.0/26 } >/33 </34 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail/28 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[30]);
          refalrts::alloc_close_call(vm, context[31]);
          refalrts::alloc_close_bracket(vm, context[32]);
          refalrts::alloc_close_call(vm, context[33]);
          refalrts::alloc_open_call(vm, context[34]);
          refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z1]);
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[21], functions[efunc_Symb]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[33] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[30], context[32] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[13] );
          refalrts::link_brackets( context[7], context[14] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[33], context[34] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[31], context[32] );
          res = refalrts::splice_evar( res, context[13], context[22] );
          res = refalrts::splice_elem( res, context[30] );
          res = refalrts::splice_elem( res, context[14] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@1/4 (/7 (/13 # FileRowCol/21 (/22 s.Row/32 s.Col/33 )/23 e.2/24 )/14 e.0/26 )/8 e.Tail/28 >/1
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[15];
        context[27] = context[16];
        context[28] = context[17];
        context[29] = context[18];
        context[30] = 0;
        context[31] = 0;
        if( ! refalrts::brackets_term( context[30], context[31], context[22] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[21] ) )
          continue;
        // closed e.2 as range 24
        // closed e.0 as range 26
        // closed e.Tail as range 28
        if( ! refalrts::svar_left( context[32], context[30], context[31] ) )
          continue;
        if( ! refalrts::svar_left( context[33], context[30], context[31] ) )
          continue;
        if( ! refalrts::empty_seq( context[30], context[31] ) )
          continue;
        //DEBUG: e.2: 24
        //DEBUG: e.0: 26
        //DEBUG: e.Tail: 28
        //DEBUG: s.Row: 32
        //DEBUG: s.Col: 33

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@2/4 AsIs: (/7 } Tile{ AsIs: e.2/24 } Tile{ AsIs: )/14 } Tile{ AsIs: (/13 HalfReuse: </21 HalfReuse: & Symb/22 AsIs: s.Row/32 } >/34 )/35 (/36 </37 & Symb/38 Tile{ AsIs: s.Col/33 HalfReuse: >/23 } )/39 Tile{ AsIs: e.0/26 } >/40 </41 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail/28 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::alloc_open_call(vm, context[37]);
        refalrts::alloc_name(vm, context[38], functions[efunc_Symb]);
        refalrts::alloc_close_bracket(vm, context[39]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_open_call(vm, context[41]);
        refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z2]);
        refalrts::reinit_open_call(context[21]);
        refalrts::reinit_name(context[22], functions[efunc_Symb]);
        refalrts::reinit_close_call(context[23]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[36], context[39] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[37] );
        refalrts::link_brackets( context[13], context[35] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[21] );
        refalrts::link_brackets( context[7], context[14] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[39] );
        res = refalrts::splice_evar( res, context[33], context[23] );
        res = refalrts::splice_evar( res, context[34], context[38] );
        res = refalrts::splice_evar( res, context[13], context[32] );
        res = refalrts::splice_elem( res, context[14] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 (/7 t./13 e.0/15 )/8 e.Tail/17 >/1
      context[15] = context[11];
      context[16] = context[12];
      context[17] = context[9];
      context[18] = context[10];
      // closed e.0 as range 15
      // closed e.Tail as range 17
      //DEBUG: t.: 13
      //DEBUG: e.0: 15
      //DEBUG: e.Tail: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@3/4 AsIs: (/7 } </19 & StrFromPos*3/20 Tile{ AsIs: t./13 } >/21 )/22 Tile{ AsIs: e.0/15 } >/23 </24 Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail/17 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_StrFromPos_D3]);
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_close_bracket(vm, context[22]);
      refalrts::alloc_close_call(vm, context[23]);
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z3]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[22] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 t.Next/7 e.Tail/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail as range 9
    //DEBUG: t.Next: 7
    //DEBUG: e.Tail: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMessageError*1/4 AsIs: t.Next/7 } >/11 </12 & Map@1/13 Tile{ AsIs: e.Tail/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z1]);
    refalrts::update_name(context[4], functions[efunc_gen_PrintMessageError_D1]);
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

  // </0 & Map@1/4 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & PrintMessageError@0/4 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_PrintMessageError_Z0]);
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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Map@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@2/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Map@2/4 (/7 e.WarningIdsAsErrors/9 )/8 t.Next/13 e.Tail/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.WarningIdsAsErrors as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail as range 11
    //DEBUG: e.WarningIdsAsErrors: 9
    //DEBUG: t.Next: 13
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMessageWarning/4 AsIs: (/7 AsIs: e.WarningIdsAsErrors/9 AsIs: )/8 AsIs: t.Next/13 } >/15 </16 & Map@2/17 (/18 e.WarningIdsAsErrors/9/19 )/21 Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@2/4 (/7 e.WarningIdsAsErrors/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.WarningIdsAsErrors as range 9
    //DEBUG: e.WarningIdsAsErrors: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 (/7 e.WarningIdsAsErrors/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 (/7 e.WarningIdsAsErrors/5 )/8 e.items/2 >/1
  // closed e.WarningIdsAsErrors as range 5
  // closed e.items as range 2
  //DEBUG: e.WarningIdsAsErrors: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map@0/10 Tile{ HalfReuse: (/0 Reuse: & PrintMessageWarning@0/4 AsIs: (/7 AsIs: e.WarningIdsAsErrors/5 AsIs: )/8 } )/11 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PrintMessageWarning_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[0], context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
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
  // </0 & Map@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@3/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Map@3/4 (/7 e.EnabledWarningIds/9 )/8 t.Next/13 e.Tail/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.EnabledWarningIds as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Tail as range 11
    //DEBUG: e.EnabledWarningIds: 9
    //DEBUG: t.Next: 13
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </15 & IsWarningEnabled/16 e.EnabledWarningIds/9/17 Tile{ AsIs: t.Next/13 } >/19 Tile{ AsIs: </0 AsIs: & Map@3/4 AsIs: (/7 AsIs: e.EnabledWarningIds/9 AsIs: )/8 } Tile{ AsIs: e.Tail/11 } Tile{ AsIs: >/1 ]] }
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
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 (/7 e.EnabledWarningIds/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.EnabledWarningIds as range 9
    //DEBUG: e.EnabledWarningIds: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 (/7 e.EnabledWarningIds/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 (/7 e.EnabledWarningIds/5 )/8 e.items/2 >/1
  // closed e.EnabledWarningIds as range 5
  // closed e.items as range 2
  //DEBUG: e.EnabledWarningIds: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Map@0/0 HalfReuse: (/4 HalfReuse: & IsWarningEnabled@0/7 AsIs: e.EnabledWarningIds/5 AsIs: )/8 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_IsWarningEnabled_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_PrintErr_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & PrintErr@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrintErr@1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & PrintErr@1/4 (/7 e.1/13 )/8 (/11 e.Call/15 )/12 e.Message0/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.1 as range 13
    // closed e.Call as range 15
    // closed e.Message0 as range 17
    //DEBUG: e.1: 13
    //DEBUG: e.Call: 15
    //DEBUG: e.Message0: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 AsIs: e.1/13 HalfReuse: ':'/8 } Tile{ AsIs: e.Call/15 } ':'/19 Tile{ HalfReuse: ' '/11 }"ERROR:"/20 Tile{ HalfReuse: ' '/12 AsIs: e.Message0/17 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[19], ':');
    refalrts::alloc_chars(vm, context[20], context[21], "ERROR:", 6);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
    refalrts::reinit_char(context[8], ':');
    refalrts::reinit_char(context[11], ' ');
    refalrts::reinit_char(context[12], ' ');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintErr@1/4 (/7 e.1/5 )/8 (/11 e.Call/9 )/12 e.Message0/2 >/1
  // closed e.1 as range 5
  // closed e.Call as range 9
  // closed e.Message0 as range 2
  //DEBUG: e.1: 5
  //DEBUG: e.Call: 9
  //DEBUG: e.Message0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@0/4 } Tile{ AsIs: e.1/5 } Tile{ HalfReuse: ':'/7 } Tile{ AsIs: e.Call/9 } ':'/13 Tile{ HalfReuse: ' '/8 HalfReuse: 'E'/11 }"RROR:"/14 Tile{ HalfReuse: ' '/12 AsIs: e.Message0/2 AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[13], ':');
  refalrts::alloc_chars(vm, context[14], context[15], "RROR:", 5);
  refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z0]);
  refalrts::reinit_char(context[7], ':');
  refalrts::reinit_char(context[8], ' ');
  refalrts::reinit_char(context[11], 'E');
  refalrts::reinit_char(context[12], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrintErr_Z1("PrintErr@1", COOKIE1_, COOKIE2_, func_gen_PrintErr_Z1);


static refalrts::FnResult func_gen_PrintErr_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & PrintErr@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrintErr@2/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 e.new4/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 2
  do {
    // </0 & PrintErr@2/4 (/7 e.1/17 )/8 (/11 e.Call/19 )/12 (/15 e.Call0/21 )/16 e.Message0/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.1 as range 17
    // closed e.Call as range 19
    // closed e.Call0 as range 21
    // closed e.Message0 as range 23
    //DEBUG: e.1: 17
    //DEBUG: e.Call: 19
    //DEBUG: e.Call0: 21
    //DEBUG: e.Message0: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 AsIs: e.1/17 HalfReuse: ':'/8 } Tile{ AsIs: e.Call/19 } Tile{ HalfReuse: ':'/11 } Tile{ AsIs: e.Call0/21 } ':'/25 Tile{ HalfReuse: ' '/12 HalfReuse: 'E'/15 }"RROR:"/26 Tile{ HalfReuse: ' '/16 AsIs: e.Message0/23 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[25], ':');
    refalrts::alloc_chars(vm, context[26], context[27], "RROR:", 5);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
    refalrts::reinit_char(context[8], ':');
    refalrts::reinit_char(context[11], ':');
    refalrts::reinit_char(context[12], ' ');
    refalrts::reinit_char(context[15], 'E');
    refalrts::reinit_char(context[16], ' ');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintErr@2/4 (/7 e.1/5 )/8 (/11 e.Call/9 )/12 (/15 e.Call0/13 )/16 e.Message0/2 >/1
  // closed e.1 as range 5
  // closed e.Call as range 9
  // closed e.Call0 as range 13
  // closed e.Message0 as range 2
  //DEBUG: e.1: 5
  //DEBUG: e.Call: 9
  //DEBUG: e.Call0: 13
  //DEBUG: e.Message0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@0/4 } Tile{ AsIs: e.1/5 } Tile{ HalfReuse: ':'/11 AsIs: e.Call/9 HalfReuse: ':'/12 } Tile{ AsIs: e.Call0/13 } Tile{ HalfReuse: ':'/8 } Tile{ HalfReuse: ' '/15 } Tile{ HalfReuse: 'E'/7 }"RROR:"/17 Tile{ HalfReuse: ' '/16 AsIs: e.Message0/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[17], context[18], "RROR:", 5);
  refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z0]);
  refalrts::reinit_char(context[11], ':');
  refalrts::reinit_char(context[12], ':');
  refalrts::reinit_char(context[8], ':');
  refalrts::reinit_char(context[15], ' ');
  refalrts::reinit_char(context[7], 'E');
  refalrts::reinit_char(context[16], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrintErr_Z2("PrintErr@2", COOKIE1_, COOKIE2_, func_gen_PrintErr_Z2);


static refalrts::FnResult func_gen_PrintErr_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & PrintErr@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrintErr@3/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & PrintErr@3/4 (/7 e.Call/9 )/8 e.Message0/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Call as range 9
    // closed e.Message0 as range 11
    //DEBUG: e.Call: 9
    //DEBUG: e.Message0: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 AsIs: e.Call/9 HalfReuse: 'E'/8 }"RROR: "/13 Tile{ AsIs: e.Message0/11 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[13], context[14], "RROR: ", 6);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
    refalrts::reinit_char(context[8], 'E');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintErr@3/4 (/7 e.Call/5 )/8 e.Message0/2 >/1
  // closed e.Call as range 5
  // closed e.Message0 as range 2
  //DEBUG: e.Call: 5
  //DEBUG: e.Message0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@0/4 } Tile{ AsIs: e.Call/5 } 'E'/9 Tile{ HalfReuse: 'R'/7 }"ROR:"/10 Tile{ HalfReuse: ' '/8 AsIs: e.Message0/2 AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[9], 'E');
  refalrts::alloc_chars(vm, context[10], context[11], "ROR:", 4);
  refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z0]);
  refalrts::reinit_char(context[7], 'R');
  refalrts::reinit_char(context[8], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrintErr_Z3("PrintErr@3", COOKIE1_, COOKIE2_, func_gen_PrintErr_Z3);


static refalrts::FnResult func_gen_PrintErr_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & PrintErr@4/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrintErr@4/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & PrintErr@4/4 (/7 e.Call/13 )/8 (/11 e.Message0/15 )/12 e.Call0/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Call as range 13
    // closed e.Message0 as range 15
    // closed e.Call0 as range 17
    //DEBUG: e.Call: 13
    //DEBUG: e.Message0: 15
    //DEBUG: e.Call0: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 AsIs: e.Call/13 HalfReuse: 'E'/8 HalfReuse: 'R'/11 }"RO"/19 Tile{ HalfReuse: 'R'/12 }": "/21 Tile{ AsIs: e.Message0/15 }" [-Werror="/23 Tile{ AsIs: e.Call0/17 } ']'/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[19], context[20], "RO", 2);
    refalrts::alloc_chars(vm, context[21], context[22], ": ", 2);
    refalrts::alloc_chars(vm, context[23], context[24], " [-Werror=", 10);
    refalrts::alloc_char(vm, context[25], ']');
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
    refalrts::reinit_char(context[8], 'E');
    refalrts::reinit_char(context[11], 'R');
    refalrts::reinit_char(context[12], 'R');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintErr@4/4 (/7 e.Call/5 )/8 (/11 e.Message0/9 )/12 e.Call0/2 >/1
  // closed e.Call as range 5
  // closed e.Message0 as range 9
  // closed e.Call0 as range 2
  //DEBUG: e.Call: 5
  //DEBUG: e.Message0: 9
  //DEBUG: e.Call0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@0/4 } Tile{ AsIs: e.Call/5 }"ER"/13 Tile{ HalfReuse: 'R'/7 }"OR"/15 Tile{ HalfReuse: ':'/8 HalfReuse: ' '/11 AsIs: e.Message0/9 HalfReuse: ' '/12 }"[-Werror="/17 Tile{ AsIs: e.Call0/2 } ']'/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[13], context[14], "ER", 2);
  refalrts::alloc_chars(vm, context[15], context[16], "OR", 2);
  refalrts::alloc_chars(vm, context[17], context[18], "[-Werror=", 9);
  refalrts::alloc_char(vm, context[19], ']');
  refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z0]);
  refalrts::reinit_char(context[7], 'R');
  refalrts::reinit_char(context[8], ':');
  refalrts::reinit_char(context[11], ' ');
  refalrts::reinit_char(context[12], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrintErr_Z4("PrintErr@4", COOKIE1_, COOKIE2_, func_gen_PrintErr_Z4);


static refalrts::FnResult func_gen_PrintErr_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & PrintErr@5/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrintErr@5/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & PrintErr@5/4 (/7 e.Message0/9 )/8 e.Call/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Message0 as range 9
    // closed e.Call as range 11
    //DEBUG: e.Message0: 9
    //DEBUG: e.Call: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 }"  "/13 Tile{ HalfReuse: 'W'/8 }"ARNING: "/15 Tile{ AsIs: e.Message0/9 }" [-W"/17 Tile{ AsIs: e.Call/11 } ']'/19 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[13], context[14], "  ", 2);
    refalrts::alloc_chars(vm, context[15], context[16], "ARNING: ", 8);
    refalrts::alloc_chars(vm, context[17], context[18], " [-W", 4);
    refalrts::alloc_char(vm, context[19], ']');
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
    refalrts::reinit_char(context[8], 'W');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintErr@5/4 (/7 e.Message0/5 )/8 e.Call/2 >/1
  // closed e.Message0 as range 5
  // closed e.Call as range 2
  //DEBUG: e.Message0: 5
  //DEBUG: e.Call: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@0/4 HalfReuse: ' '/7 }" W"/9 Tile{ HalfReuse: 'A'/8 }"RNING: "/11 Tile{ AsIs: e.Message0/5 }" [-W"/13 Tile{ AsIs: e.Call/2 } ']'/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], " W", 2);
  refalrts::alloc_chars(vm, context[11], context[12], "RNING: ", 7);
  refalrts::alloc_chars(vm, context[13], context[14], " [-W", 4);
  refalrts::alloc_char(vm, context[15], ']');
  refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z0]);
  refalrts::reinit_char(context[7], ' ');
  refalrts::reinit_char(context[8], 'A');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrintErr_Z5("PrintErr@5", COOKIE1_, COOKIE2_, func_gen_PrintErr_Z5);


static refalrts::FnResult func_gen_PrintErr_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & PrintErr@6/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrintErr@6/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 e.new4/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 2
  do {
    // </0 & PrintErr@6/4 (/7 e.1/17 )/8 (/11 e.Call/19 )/12 (/15 e.Message0/21 )/16 e.Call0/23 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    // closed e.1 as range 17
    // closed e.Call as range 19
    // closed e.Message0 as range 21
    // closed e.Call0 as range 23
    //DEBUG: e.1: 17
    //DEBUG: e.Call: 19
    //DEBUG: e.Message0: 21
    //DEBUG: e.Call0: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 AsIs: e.1/17 HalfReuse: ':'/8 } Tile{ AsIs: e.Call/19 }": "/25 Tile{ HalfReuse: 'W'/11 }"ARNING"/27 Tile{ HalfReuse: ':'/12 HalfReuse: ' '/15 AsIs: e.Message0/21 HalfReuse: ' '/16 }"[-W"/29 Tile{ AsIs: e.Call0/23 } ']'/31 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[25], context[26], ": ", 2);
    refalrts::alloc_chars(vm, context[27], context[28], "ARNING", 6);
    refalrts::alloc_chars(vm, context[29], context[30], "[-W", 3);
    refalrts::alloc_char(vm, context[31], ']');
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
    refalrts::reinit_char(context[8], ':');
    refalrts::reinit_char(context[11], 'W');
    refalrts::reinit_char(context[12], ':');
    refalrts::reinit_char(context[15], ' ');
    refalrts::reinit_char(context[16], ' ');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintErr@6/4 (/7 e.1/5 )/8 (/11 e.Call/9 )/12 (/15 e.Message0/13 )/16 e.Call0/2 >/1
  // closed e.1 as range 5
  // closed e.Call as range 9
  // closed e.Message0 as range 13
  // closed e.Call0 as range 2
  //DEBUG: e.1: 5
  //DEBUG: e.Call: 9
  //DEBUG: e.Message0: 13
  //DEBUG: e.Call0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@0/4 } Tile{ AsIs: e.1/5 } Tile{ HalfReuse: ':'/11 AsIs: e.Call/9 HalfReuse: ':'/12 HalfReuse: ' '/15 } Tile{ HalfReuse: 'W'/8 } Tile{ HalfReuse: 'A'/7 } 'R'/17 Tile{ HalfReuse: 'N'/16 }"ING: "/18 Tile{ AsIs: e.Message0/13 }" [-W"/20 Tile{ AsIs: e.Call0/2 } ']'/22 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[17], 'R');
  refalrts::alloc_chars(vm, context[18], context[19], "ING: ", 5);
  refalrts::alloc_chars(vm, context[20], context[21], " [-W", 4);
  refalrts::alloc_char(vm, context[22], ']');
  refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z0]);
  refalrts::reinit_char(context[11], ':');
  refalrts::reinit_char(context[12], ':');
  refalrts::reinit_char(context[15], ' ');
  refalrts::reinit_char(context[8], 'W');
  refalrts::reinit_char(context[7], 'A');
  refalrts::reinit_char(context[16], 'N');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_elem( res, context[17] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrintErr_Z6("PrintErr@6", COOKIE1_, COOKIE2_, func_gen_PrintErr_Z6);


static refalrts::FnResult func_gen_PrintErr_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & PrintErr@7/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrintErr@7/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 (/15 e.new3/13 )/16 (/19 e.new4/17 )/20 e.new5/2 >/1
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
  // closed e.new1 as range 5
  // closed e.new2 as range 9
  // closed e.new3 as range 13
  // closed e.new4 as range 17
  // closed e.new5 as range 2
  do {
    // </0 & PrintErr@7/4 (/7 e.1/21 )/8 (/11 e.Call/23 )/12 (/15 e.Call0/25 )/16 (/19 e.Message0/27 )/20 e.Call1/29 >/1
    context[21] = context[5];
    context[22] = context[6];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[13];
    context[26] = context[14];
    context[27] = context[17];
    context[28] = context[18];
    context[29] = context[2];
    context[30] = context[3];
    // closed e.1 as range 21
    // closed e.Call as range 23
    // closed e.Call0 as range 25
    // closed e.Message0 as range 27
    // closed e.Call1 as range 29
    //DEBUG: e.1: 21
    //DEBUG: e.Call: 23
    //DEBUG: e.Call0: 25
    //DEBUG: e.Message0: 27
    //DEBUG: e.Call1: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 AsIs: e.1/21 HalfReuse: ':'/8 } Tile{ AsIs: e.Call/23 } Tile{ HalfReuse: ':'/15 AsIs: e.Call0/25 HalfReuse: ':'/16 HalfReuse: ' '/19 } Tile{ HalfReuse: 'W'/12 } Tile{ HalfReuse: 'A'/11 } 'R'/31 Tile{ HalfReuse: 'N'/20 }"ING: "/32 Tile{ AsIs: e.Message0/27 }" [-W"/34 Tile{ AsIs: e.Call1/29 } ']'/36 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[31], 'R');
    refalrts::alloc_chars(vm, context[32], context[33], "ING: ", 5);
    refalrts::alloc_chars(vm, context[34], context[35], " [-W", 4);
    refalrts::alloc_char(vm, context[36], ']');
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
    refalrts::reinit_char(context[8], ':');
    refalrts::reinit_char(context[15], ':');
    refalrts::reinit_char(context[16], ':');
    refalrts::reinit_char(context[19], ' ');
    refalrts::reinit_char(context[12], 'W');
    refalrts::reinit_char(context[11], 'A');
    refalrts::reinit_char(context[20], 'N');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[11] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintErr@7/4 (/7 e.1/5 )/8 (/11 e.Call/9 )/12 (/15 e.Call0/13 )/16 (/19 e.Message0/17 )/20 e.Call1/2 >/1
  // closed e.1 as range 5
  // closed e.Call as range 9
  // closed e.Call0 as range 13
  // closed e.Message0 as range 17
  // closed e.Call1 as range 2
  //DEBUG: e.1: 5
  //DEBUG: e.Call: 9
  //DEBUG: e.Call0: 13
  //DEBUG: e.Message0: 17
  //DEBUG: e.Call1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@0/4 } Tile{ AsIs: e.1/5 } Tile{ HalfReuse: ':'/12 } Tile{ AsIs: e.Call/9 } Tile{ HalfReuse: ':'/15 AsIs: e.Call0/13 HalfReuse: ':'/16 HalfReuse: ' '/19 } Tile{ HalfReuse: 'W'/7 } 'A'/21 Tile{ HalfReuse: 'R'/8 HalfReuse: 'N'/11 } Tile{ HalfReuse: 'I'/20 }"NG: "/22 Tile{ AsIs: e.Message0/17 }" [-W"/24 Tile{ AsIs: e.Call1/2 } ']'/26 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[21], 'A');
  refalrts::alloc_chars(vm, context[22], context[23], "NG: ", 4);
  refalrts::alloc_chars(vm, context[24], context[25], " [-W", 4);
  refalrts::alloc_char(vm, context[26], ']');
  refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z0]);
  refalrts::reinit_char(context[12], ':');
  refalrts::reinit_char(context[15], ':');
  refalrts::reinit_char(context[16], ':');
  refalrts::reinit_char(context[19], ' ');
  refalrts::reinit_char(context[7], 'W');
  refalrts::reinit_char(context[8], 'R');
  refalrts::reinit_char(context[11], 'N');
  refalrts::reinit_char(context[20], 'I');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrintErr_Z7("PrintErr@7", COOKIE1_, COOKIE2_, func_gen_PrintErr_Z7);


static refalrts::FnResult func_gen_PrintErr_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & PrintErr@8/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PrintErr@8/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & PrintErr@8/4 (/7 e.Call/13 )/8 (/11 e.Message0/15 )/12 e.Call0/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Call as range 13
    // closed e.Message0 as range 15
    // closed e.Call0 as range 17
    //DEBUG: e.Call: 13
    //DEBUG: e.Message0: 15
    //DEBUG: e.Call0: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: # stderr/7 AsIs: e.Call/13 HalfReuse: 'W'/8 HalfReuse: 'A'/11 }"RN"/19 Tile{ HalfReuse: 'I'/12 }"NG: "/21 Tile{ AsIs: e.Message0/15 }" [-W"/23 Tile{ AsIs: e.Call0/17 } ']'/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[19], context[20], "RN", 2);
    refalrts::alloc_chars(vm, context[21], context[22], "NG: ", 4);
    refalrts::alloc_chars(vm, context[23], context[24], " [-W", 4);
    refalrts::alloc_char(vm, context[25], ']');
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_ident(context[7], identifiers[ident_stderr]);
    refalrts::reinit_char(context[8], 'W');
    refalrts::reinit_char(context[11], 'A');
    refalrts::reinit_char(context[12], 'I');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintErr@8/4 (/7 e.Call/5 )/8 (/11 e.Message0/9 )/12 e.Call0/2 >/1
  // closed e.Call as range 5
  // closed e.Message0 as range 9
  // closed e.Call0 as range 2
  //DEBUG: e.Call: 5
  //DEBUG: e.Message0: 9
  //DEBUG: e.Call0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintErr@0/4 } Tile{ AsIs: e.Call/5 }"WA"/13 Tile{ HalfReuse: 'R'/7 }"NING"/15 Tile{ HalfReuse: ':'/8 HalfReuse: ' '/11 AsIs: e.Message0/9 HalfReuse: ' '/12 }"[-W"/17 Tile{ AsIs: e.Call0/2 } ']'/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[13], context[14], "WA", 2);
  refalrts::alloc_chars(vm, context[15], context[16], "NING", 4);
  refalrts::alloc_chars(vm, context[17], context[18], "[-W", 3);
  refalrts::alloc_char(vm, context[19], ']');
  refalrts::update_name(context[4], functions[efunc_gen_PrintErr_Z0]);
  refalrts::reinit_char(context[7], 'R');
  refalrts::reinit_char(context[8], ':');
  refalrts::reinit_char(context[11], ' ');
  refalrts::reinit_char(context[12], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrintErr_Z8("PrintErr@8", COOKIE1_, COOKIE2_, func_gen_PrintErr_Z8);


static refalrts::FnResult func_gen_Reduce_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Reduce@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Reduce@1/4 t.new1/5 e.new2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Reduce@1/4 t.new3/5 t.new4/9 e.new5/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[10] = refalrts::tvar_left( context[9], context[7], context[8] );
    if( ! context[10] )
      continue;
    // closed e.new5 as range 7
    do {
      // </0 & Reduce@1/4 t.new6/5 (/9 (/17 e.new7/15 )/18 e.new8/13 )/10 e.new9/11 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = 0;
      context[14] = 0;
      if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      // closed e.new7 as range 15
      // closed e.new8 as range 13
      // closed e.new9 as range 11
      do {
        // </0 & Reduce@1/4 t.Acc/5 (/9 (/17 e.1/19 )/18 t.0/25 )/10 e.Tail/23 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[13];
        context[22] = context[14];
        context[23] = context[11];
        context[24] = context[12];
        // closed e.1 as range 19
        // closed e.Tail as range 23
        context[26] = refalrts::tvar_left( context[25], context[21], context[22] );
        if( ! context[26] )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        //DEBUG: t.Acc: 5
        //DEBUG: e.1: 19
        //DEBUG: e.Tail: 23
        //DEBUG: t.0: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} (/9 (/17 e.1/19 )/18 t.0/25 )/10 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@1/4 AsIs: t.Acc/5 } Tile{ AsIs: e.Tail/23 } Tile{ AsIs: >/1 ]] }
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        refalrts::splice_to_freelist_open( vm, context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@1/4 t.Acc/5 (/9 (/17 e.1/19 )/18 e.0/21 )/10 e.Tail/23 >/1
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[11];
      context[24] = context[12];
      // closed e.1 as range 19
      // closed e.0 as range 21
      // closed e.Tail as range 23
      //DEBUG: t.Acc: 5
      //DEBUG: e.1: 19
      //DEBUG: e.0: 21
      //DEBUG: e.Tail: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@1/4 } (/25 Tile{ AsIs: e.Tail/23 } Tile{ AsIs: )/10 } </26 Tile{ HalfReuse: & Reduce@2/9 AsIs: (/17 AsIs: e.1/19 AsIs: )/18 } Tile{ AsIs: t.Acc/5 } Tile{ AsIs: e.0/21 } >/27 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z1]);
      refalrts::reinit_name(context[9], functions[efunc_gen_Reduce_Z2]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[25], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[27] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[9], context[18] );
      res = refalrts::splice_elem( res, context[26] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@1/4 t.Acc/5 t.Next/9 e.Tail/11 >/1
    context[11] = context[7];
    context[12] = context[8];
    // closed e.Tail as range 11
    //DEBUG: t.Acc: 5
    //DEBUG: t.Next: 9
    //DEBUG: e.Tail: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </13 & Reduce$1=1@1/14 (/15 Tile{ AsIs: e.Tail/11 } )/16 Tile{ AsIs: </0 Reuse: & CheckEntries\1*2/4 AsIs: t.Acc/5 AsIs: t.Next/9 } >/17 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Reduce_S1A1Z1]);
    refalrts::alloc_open_bracket(vm, context[15]);
    refalrts::alloc_close_bracket(vm, context[16]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_gen_CheckEntries_L1D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[17] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Reduce@1/4 t.Acc/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.Acc: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@1/4 t.accum/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: t.accum: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: & Reduce@0/0 Reuse: & CheckEntries\1@0/4 AsIs: t.accum/5 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckEntries_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z1("Reduce@1", COOKIE1_, COOKIE2_, func_gen_Reduce_Z1);


static refalrts::FnResult func_gen_Reduce_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 63 elems
  refalrts::Iter context[63];
  refalrts::zeros( context, 63 );
  // </0 & Reduce@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Reduce@2/4 (/7 e.new1/5 )/8 t.new2/9 e.new3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & Reduce@2/4 (/7 e.new7/11 )/8 t.new4/9 t.new5/15 e.new6/13 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = context[2];
    context[14] = context[3];
    // closed e.new7 as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.new6 as range 13
    do {
      // </0 & Reduce@2/4 (/7 e.new13/17 )/8 [/9ErrorList/23 (/26 e.new8/24 )/27 (/30 e.new9/28 )/31 t.new10/32 ]/10 t.new11/15 e.new12/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::adt_term(context[21], context[22], functions[efunc_ErrorList], context[9]);
      if( ! context[23] )
        continue;
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[21], context[22] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[21], context[22] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      // closed e.new13 as range 17
      // closed e.new8 as range 24
      // closed e.new9 as range 28
      // closed e.new12 as range 19
      context[33] = refalrts::tvar_left( context[32], context[21], context[22] );
      if( ! context[33] )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      do {
        // </0 & Reduce@2/4 (/7 e.new19/34 )/8 [/9ErrorList/23 (/26 e.new15/36 )/27 (/30 e.new16/38 )/31 t.new14/32 ]/10 s.new17/15 e.new18/40 >/1
        context[34] = context[17];
        context[35] = context[18];
        context[36] = context[24];
        context[37] = context[25];
        context[38] = context[28];
        context[39] = context[29];
        context[40] = context[19];
        context[41] = context[20];
        if( ! refalrts::svar_term( context[15], context[15] ) )
          continue;
        // closed e.new19 as range 34
        // closed e.new15 as range 36
        // closed e.new16 as range 38
        // closed e.new18 as range 40
        do {
          // </0 & Reduce@2/4 (/7 e.Name/42 )/8 [/9ErrorList/23 (/26 e.1/44 )/27 (/30 e.3/46 )/31 t.1/32 ]/10 # NoPos/15 e.Tail/48 >/1
          context[42] = context[34];
          context[43] = context[35];
          context[44] = context[36];
          context[45] = context[37];
          context[46] = context[38];
          context[47] = context[39];
          context[48] = context[40];
          context[49] = context[41];
          if( ! refalrts::ident_term( identifiers[ident_NoPos], context[15] ) )
            continue;
          // closed e.Name as range 42
          // closed e.1 as range 44
          // closed e.3 as range 46
          // closed e.Tail as range 48
          //DEBUG: t.1: 32
          //DEBUG: e.Name: 42
          //DEBUG: e.1: 44
          //DEBUG: e.3: 46
          //DEBUG: e.Tail: 48

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@2/4 AsIs: (/7 AsIs: e.Name/42 AsIs: )/8 AsIs: [/9 AsIs: & ErrorList/23 AsIs: (/26 AsIs: e.1/44 AsIs: )/27 AsIs: (/30 AsIs: e.3/46 HalfReuse: (/31 } # NoPos/50 Tile{ HalfReuse: 'E'/10 }"ntry function "/51 e.Name/42/53" is multiple defined"/55 )/57 )/58 Tile{ AsIs: t.1/32 } Tile{ HalfReuse: ]/15 AsIs: e.Tail/48 AsIs: >/1 ]] }
          refalrts::alloc_ident(vm, context[50], identifiers[ident_NoPos]);
          refalrts::alloc_chars(vm, context[51], context[52], "ntry function ", 14);
          refalrts::copy_evar(vm, context[53], context[54], context[42], context[43]);
          refalrts::alloc_chars(vm, context[55], context[56], " is multiple defined", 20);
          refalrts::alloc_close_bracket(vm, context[57]);
          refalrts::alloc_close_bracket(vm, context[58]);
          refalrts::reinit_open_bracket(context[31]);
          refalrts::reinit_char(context[10], 'E');
          refalrts::reinit_close_adt(context[15]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[9], context[15] );
          refalrts::link_brackets( context[30], context[58] );
          refalrts::link_brackets( context[31], context[57] );
          refalrts::link_brackets( context[26], context[27] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[15];
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[51], context[58] );
          res = refalrts::splice_elem( res, context[10] );
          res = refalrts::splice_elem( res, context[50] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Reduce@2/4 (/7 e.Name/42 )/8 [/9ErrorList/23 (/26 e.1/44 )/27 (/30 e.3/46 )/31 t.1/32 ]/10 s.LineNumber/15 e.Tail/48 >/1
        context[42] = context[34];
        context[43] = context[35];
        context[44] = context[36];
        context[45] = context[37];
        context[46] = context[38];
        context[47] = context[39];
        context[48] = context[40];
        context[49] = context[41];
        // closed e.Name as range 42
        // closed e.1 as range 44
        // closed e.3 as range 46
        // closed e.Tail as range 48
        //DEBUG: t.1: 32
        //DEBUG: s.LineNumber: 15
        //DEBUG: e.Name: 42
        //DEBUG: e.1: 44
        //DEBUG: e.3: 46
        //DEBUG: e.Tail: 48

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@2/4 AsIs: (/7 AsIs: e.Name/42 AsIs: )/8 AsIs: [/9 AsIs: & ErrorList/23 AsIs: (/26 AsIs: e.1/44 AsIs: )/27 AsIs: (/30 AsIs: e.3/46 HalfReuse: (/31 } (/50 # FileLine/51 Tile{ AsIs: s.LineNumber/15 } e.1/44/52 )/54"Entry function "/55 e.Name/42/57" is multiple defined"/59 )/61 )/62 Tile{ AsIs: t.1/32 AsIs: ]/10 } Tile{ AsIs: e.Tail/48 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[50]);
        refalrts::alloc_ident(vm, context[51], identifiers[ident_FileLine]);
        refalrts::copy_evar(vm, context[52], context[53], context[44], context[45]);
        refalrts::alloc_close_bracket(vm, context[54]);
        refalrts::alloc_chars(vm, context[55], context[56], "Entry function ", 15);
        refalrts::copy_evar(vm, context[57], context[58], context[42], context[43]);
        refalrts::alloc_chars(vm, context[59], context[60], " is multiple defined", 20);
        refalrts::alloc_close_bracket(vm, context[61]);
        refalrts::alloc_close_bracket(vm, context[62]);
        refalrts::reinit_open_bracket(context[31]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::link_brackets( context[30], context[62] );
        refalrts::link_brackets( context[31], context[61] );
        refalrts::link_brackets( context[50], context[54] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[48], context[49] );
        res = refalrts::splice_evar( res, context[32], context[10] );
        res = refalrts::splice_evar( res, context[54], context[62] );
        res = refalrts::splice_evar( res, context[52], context[53] );
        res = refalrts::splice_elem( res, context[15] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Reduce@2/4 (/7 e.Name/34 )/8 [/9ErrorList/23 (/26 e.1/36 )/27 (/30 e.3/38 )/31 t.1/32 ]/10 (/15 # RowCol/44 s.Row/45 s.Col/46 )/16 e.Tail/40 >/1
        context[34] = context[17];
        context[35] = context[18];
        context[36] = context[24];
        context[37] = context[25];
        context[38] = context[28];
        context[39] = context[29];
        context[40] = context[19];
        context[41] = context[20];
        context[42] = 0;
        context[43] = 0;
        if( ! refalrts::brackets_term( context[42], context[43], context[15] ) )
          continue;
        context[44] = refalrts::ident_left( identifiers[ident_RowCol], context[42], context[43] );
        if( ! context[44] )
          continue;
        // closed e.Name as range 34
        // closed e.1 as range 36
        // closed e.3 as range 38
        // closed e.Tail as range 40
        if( ! refalrts::svar_left( context[45], context[42], context[43] ) )
          continue;
        if( ! refalrts::svar_left( context[46], context[42], context[43] ) )
          continue;
        if( ! refalrts::empty_seq( context[42], context[43] ) )
          continue;
        //DEBUG: t.1: 32
        //DEBUG: e.Name: 34
        //DEBUG: e.1: 36
        //DEBUG: e.3: 38
        //DEBUG: e.Tail: 40
        //DEBUG: s.Row: 45
        //DEBUG: s.Col: 46

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@2/4 AsIs: (/7 AsIs: e.Name/34 AsIs: )/8 AsIs: [/9 AsIs: & ErrorList/23 AsIs: (/26 AsIs: e.1/36 AsIs: )/27 AsIs: (/30 AsIs: e.3/38 HalfReuse: (/31 } Tile{ HalfReuse: (/10 HalfReuse: # FileRowCol/15 HalfReuse: (/44 AsIs: s.Row/45 AsIs: s.Col/46 AsIs: )/16 } e.1/36/47 )/49"Entry function "/50 e.Name/34/52" is multiple defined"/54 )/56 )/57 Tile{ AsIs: t.1/32 } ]/58 Tile{ AsIs: e.Tail/40 } Tile{ AsIs: >/1 ]] }
        refalrts::copy_evar(vm, context[47], context[48], context[36], context[37]);
        refalrts::alloc_close_bracket(vm, context[49]);
        refalrts::alloc_chars(vm, context[50], context[51], "Entry function ", 15);
        refalrts::copy_evar(vm, context[52], context[53], context[34], context[35]);
        refalrts::alloc_chars(vm, context[54], context[55], " is multiple defined", 20);
        refalrts::alloc_close_bracket(vm, context[56]);
        refalrts::alloc_close_bracket(vm, context[57]);
        refalrts::alloc_close_adt(vm, context[58]);
        refalrts::reinit_open_bracket(context[31]);
        refalrts::reinit_open_bracket(context[10]);
        refalrts::reinit_ident(context[15], identifiers[ident_FileRowCol]);
        refalrts::reinit_open_bracket(context[44]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[58] );
        refalrts::link_brackets( context[30], context[57] );
        refalrts::link_brackets( context[31], context[56] );
        refalrts::link_brackets( context[10], context[49] );
        refalrts::link_brackets( context[44], context[16] );
        refalrts::link_brackets( context[26], context[27] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_elem( res, context[58] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[49], context[57] );
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_evar( res, context[10], context[16] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Reduce@2/4 (/7 e.Name/34 )/8 [/9ErrorList/23 (/26 e.1/36 )/27 (/30 e.3/38 )/31 t.1/32 ]/10 t.Next/15 e.Tail/40 >/1
      context[34] = context[17];
      context[35] = context[18];
      context[36] = context[24];
      context[37] = context[25];
      context[38] = context[28];
      context[39] = context[29];
      context[40] = context[19];
      context[41] = context[20];
      // closed e.Name as range 34
      // closed e.1 as range 36
      // closed e.3 as range 38
      // closed e.Tail as range 40
      //DEBUG: t.1: 32
      //DEBUG: t.Next: 15
      //DEBUG: e.Name: 34
      //DEBUG: e.1: 36
      //DEBUG: e.3: 38
      //DEBUG: e.Tail: 40

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & Reduce@2/4 AsIs: (/7 AsIs: e.Name/34 AsIs: )/8 AsIs: [/9 AsIs: & ErrorList/23 AsIs: (/26 AsIs: e.1/36 AsIs: )/27 AsIs: (/30 AsIs: e.3/38 HalfReuse: (/31 } Tile{ AsIs: t.Next/15 }"Entry function "/42 e.Name/34/44" is multiple defined"/46 )/48 )/49 Tile{ AsIs: t.1/32 AsIs: ]/10 } Tile{ AsIs: e.Tail/40 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[42], context[43], "Entry function ", 15);
      refalrts::copy_evar(vm, context[44], context[45], context[34], context[35]);
      refalrts::alloc_chars(vm, context[46], context[47], " is multiple defined", 20);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::reinit_open_bracket(context[31]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::link_brackets( context[30], context[49] );
      refalrts::link_brackets( context[31], context[48] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[32], context[10] );
      res = refalrts::splice_evar( res, context[42], context[49] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Reduce@2/4 (/7 e.Name/17 )/8 t.Acc/9 t.Next/15 e.Tail/19 >/1
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    // closed e.Name as range 17
    // closed e.Tail as range 19
    //DEBUG: t.Acc: 9
    //DEBUG: t.Next: 15
    //DEBUG: e.Name: 17
    //DEBUG: e.Tail: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce$1=1@2/4 AsIs: (/7 AsIs: e.Name/17 AsIs: )/8 } (/21 Tile{ AsIs: e.Tail/19 } )/22 </23 & EL-AddErrorAt*1/24 Tile{ AsIs: t.Acc/9 AsIs: t.Next/15 }"Entry function "/25 e.Name/17/27" is multiple defined"/29 >/31 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_ELm_AddErrorAt_D1]);
    refalrts::alloc_chars(vm, context[25], context[26], "Entry function ", 15);
    refalrts::copy_evar(vm, context[27], context[28], context[17], context[18]);
    refalrts::alloc_chars(vm, context[29], context[30], " is multiple defined", 20);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_S1A1Z2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[31] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Reduce@2/4 (/7 e.Name/11 )/8 t.Acc/9 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Name as range 11
    //DEBUG: t.Acc: 9
    //DEBUG: e.Name: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Reduce@2/4 (/7 e.Name/11 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Acc/9 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce@2/4 (/7 e.Name/5 )/8 t.accum/9 e.items/2 >/1
  // closed e.Name as range 5
  // closed e.items as range 2
  //DEBUG: t.accum: 9
  //DEBUG: e.Name: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: & Reduce@0/0 HalfReuse: (/4 HalfReuse: & AddEntryError@0/7 AsIs: e.Name/5 AsIs: )/8 AsIs: t.accum/9 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_Z0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_AddEntryError_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_Z2("Reduce@2", COOKIE1_, COOKIE2_, func_gen_Reduce_Z2);


static refalrts::FnResult func_gen_Apply_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Apply@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Apply@3/4 t.new1/5 e.new2/2 t.new3/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Apply@3/4 s.Fn/5 e.X/9 t.X/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X as range 9
    //DEBUG: t.X: 7
    //DEBUG: s.Fn: 5
    //DEBUG: e.X: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn/5 AsIs: e.X/9 AsIs: t.X/7 HalfReuse: & $table/1 } >/11 Tile{ ]] }
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
    // </0 & Apply@3/4 (/5 t.Closure/13 e.Bounded/11 )/6 e.X/9 t.X/7 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[5] ) )
      continue;
    // closed e.X as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    // closed e.Bounded as range 11
    //DEBUG: t.X: 7
    //DEBUG: e.X: 9
    //DEBUG: t.Closure: 13
    //DEBUG: e.Bounded: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@3/4 } Tile{ AsIs: t.Closure/13 } Tile{ AsIs: e.Bounded/11 } Tile{ AsIs: e.X/9 } Tile{ AsIs: t.X/7 AsIs: >/1 ]] }
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

  // </0 & Apply@3/4 t.dyn0/5 e.X/2 t.X/7 >/1
  // closed e.X as range 2
  //DEBUG: t.dyn0: 5
  //DEBUG: t.X: 7
  //DEBUG: e.X: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn0/5 AsIs: e.X/2 AsIs: t.X/7 AsIs: >/1 ]] }
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
  // </0 & Apply@4/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Apply@4/4 t.new1/5 e.new2/2 t.new3/9 t.new4/7 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_right( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Apply@4/4 s.Fn/5 e.X/11 t.X/9 t.X0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.X as range 11
    //DEBUG: t.X: 9
    //DEBUG: t.X0: 7
    //DEBUG: s.Fn: 5
    //DEBUG: e.X: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.Fn/5 AsIs: e.X/11 AsIs: t.X/9 AsIs: t.X0/7 HalfReuse: & $table/1 } >/13 Tile{ ]] }
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
    // </0 & Apply@4/4 (/5 t.Closure/15 e.Bounded/13 )/6 e.X/11 t.X/9 t.X0/7 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[5] ) )
      continue;
    // closed e.X as range 11
    context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
    if( ! context[16] )
      continue;
    // closed e.Bounded as range 13
    //DEBUG: t.X: 9
    //DEBUG: t.X0: 7
    //DEBUG: e.X: 11
    //DEBUG: t.Closure: 15
    //DEBUG: e.Bounded: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Apply@4/4 } Tile{ AsIs: t.Closure/15 } Tile{ AsIs: e.Bounded/13 } Tile{ AsIs: e.X/11 } Tile{ AsIs: t.X/9 AsIs: t.X0/7 AsIs: >/1 ]] }
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

  // </0 & Apply@4/4 t.dyn0/5 e.X/2 t.X/9 t.X0/7 >/1
  // closed e.X as range 2
  //DEBUG: t.dyn0: 5
  //DEBUG: t.X: 9
  //DEBUG: t.X0: 7
  //DEBUG: e.X: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Apply@0/4 AsIs: t.dyn0/5 AsIs: e.X/2 AsIs: t.X/9 AsIs: t.X0/7 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Apply_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Apply_Z4("Apply@4", COOKIE1_, COOKIE2_, func_gen_Apply_Z4);


static refalrts::FnResult func_gen_Reduce_S1A1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Reduce$1=1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Reduce$1=1@1/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Reduce$1=1@1/4 (/7 e.Tail0/9 )/8 t.Acc$a/13 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Tail0 as range 9
    context[14] = refalrts::tvar_left( context[13], context[11], context[12] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Tail0: 9
    //DEBUG: t.Acc$a: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@1/4 } Tile{ AsIs: t.Acc$a/13 } Tile{ AsIs: e.Tail0/9 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Reduce$1=1@1/4 (/7 e.Tail0/5 )/8 e.dyn/2 >/1
  // closed e.Tail0 as range 5
  // closed e.dyn as range 2
  //DEBUG: e.Tail0: 5
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Reduce$1=1@0/0 Reuse: & CheckEntries\1@0/4 AsIs: (/7 AsIs: e.Tail0/5 AsIs: )/8 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_S1A1Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_CheckEntries_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1Z1("Reduce$1=1@1", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1Z1);


static refalrts::FnResult func_gen_Reduce_S1A1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Reduce$1=1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Reduce$1=1@2/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & Reduce$1=1@2/4 (/7 e.Name/13 )/8 (/11 e.Tail0/15 )/12 t.Acc$a/19 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Name as range 13
    // closed e.Tail0 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: e.Name: 13
    //DEBUG: e.Tail0: 15
    //DEBUG: t.Acc$a: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Reduce@2/4 AsIs: (/7 AsIs: e.Name/13 AsIs: )/8 } Tile{ AsIs: t.Acc$a/19 } Tile{ AsIs: e.Tail0/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_gen_Reduce_Z2]);
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

  // </0 & Reduce$1=1@2/4 (/7 e.Name/5 )/8 (/11 e.Tail0/9 )/12 e.dyn/2 >/1
  // closed e.Name as range 5
  // closed e.Tail0 as range 9
  // closed e.dyn as range 2
  //DEBUG: e.Name: 5
  //DEBUG: e.Tail0: 9
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & Reduce$1=1@0/0 HalfReuse: (/4 HalfReuse: & AddEntryError@0/7 AsIs: e.Name/5 AsIs: )/8 AsIs: (/11 AsIs: e.Tail0/9 AsIs: )/12 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Reduce_S1A1Z0]);
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_AddEntryError_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Reduce_S1A1Z2("Reduce$1=1@2", COOKIE1_, COOKIE2_, func_gen_Reduce_S1A1Z2);


//End of file
