// This file automatically generated from 'GetOpt.ref'
// Don't edit! Edit 'GetOpt.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1756258373_25463394
#define COOKIE1_ 1756258373U
#define COOKIE2_ 25463394U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_FoldErrors = 3,
  efunc_MarkupAllFiles = 4,
  efunc_ResolveOpts = 5,
  efunc_gen_MarkupAllFiles_Z0 = 6,
  efunc_gen_MarkupArguments_Z1D1 = 7,
  efunc_Add = 8,
  efunc_MarkupArguments = 9,
  efunc_gen_ResolveOptsm_LongParam_Z1 = 10,
  efunc_gen_ResolveOptsm_Long_Z1 = 11,
  efunc_gen_ResolveOptsm_Short_Z1 = 12,
  efunc_gen_DoFoldErrors_Z1 = 13,
  efunc_Mu = 14,
  efunc_Up = 15,
  efunc_Evm_met = 16,
  efunc_Residue = 17,
  efunc_u_u_Metau_Residue = 18,
  efunc_GetOpt = 19,
  efunc_Inc = 20,
  efunc_Error = 21,
  efunc_ResolveOptsm_LongParam = 22,
  efunc_ResolveOptsm_Long = 23,
  efunc_ResolveOptsm_Short = 24,
  efunc_DoFoldErrors = 25,
  efunc_gen_ResolveOptsm_LongParam_Z0 = 26,
  efunc_gen_ResolveOptsm_Long_Z0 = 27,
  efunc_gen_ResolveOptsm_Short_Z0 = 28,
  efunc_gen_DoFoldErrors_Z0 = 29,
  efunc_gen_MarkupArguments_Z0 = 30,
};


enum ident {
  ident_Word = 0,
  ident_Longm_Param = 1,
  ident_Long = 2,
  ident_Short = 3,
  ident_Error = 4,
  ident_UnknownLongOption = 5,
  ident_UnknownShortOption = 6,
  ident_FILE = 7,
  ident_Required = 8,
  ident_Optional = 9,
  ident_None = 10,
  ident_UnexpectedLongOptionParam = 11,
  ident_NoRequiredParam = 12,
  ident_NoParam = 13,
  ident_Mu = 14,
  ident_Up = 15,
  ident_Evm_met = 16,
  ident_Residue = 17,
  ident_u_u_Metau_Residue = 18,
  ident_GetOpt = 19,
  ident_Inc = 20,
  ident_MarkupArguments = 21,
  ident_MarkupAllFiles = 22,
  ident_ResolveOpts = 23,
  ident_ResolveOptsm_LongParam = 24,
  ident_ResolveOptsm_Long = 25,
  ident_ResolveOptsm_Short = 26,
  ident_FoldErrors = 27,
  ident_DoFoldErrors = 28,
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


static refalrts::FnResult func_GetOpt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & GetOpt/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GetOpt/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & GetOpt/4 (/7 e.new#4/9 )/8 (/15 '-'/17 '-'/18 )/16 e.new#3/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::char_left( '-', context[13], context[14] );
    if( ! context[17] )
      continue;
    context[18] = refalrts::char_left( '-', context[13], context[14] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.new#4 as range 9
    // closed e.new#3 as range 11
    do {
      // </0 & GetOpt/4 (/7 e.Description#1/19 )/8 (/15 '-'/17 '-'/18 )/16 (/25 e.1#0/23 )/26 e.0#0/21 >/1
      context[19] = context[9];
      context[20] = context[10];
      context[21] = context[11];
      context[22] = context[12];
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      // closed e.Description#1 as range 19
      // closed e.1#0 as range 23
      // closed e.0#0 as range 21
      //DEBUG: e.Description#1: 19
      //DEBUG: e.1#0: 23
      //DEBUG: e.0#0: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </27 & FoldErrors/28 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/19 AsIs: )/8 AsIs: (/15 HalfReuse: # Word/17 HalfReuse: 2/18 } Tile{ AsIs: e.1#0/23 } Tile{ AsIs: )/16 HalfReuse: </25 } & MarkupAllFiles/29 Tile{ HalfReuse: 3/26 AsIs: e.0#0/21 AsIs: >/1 } >/30 >/31 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[27]);
      refalrts::alloc_name(vm, context[28], functions[efunc_FoldErrors]);
      refalrts::alloc_name(vm, context[29], functions[efunc_MarkupAllFiles]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::reinit_ident(context[17], identifiers[ident_Word]);
      refalrts::reinit_number(context[18], 2UL);
      refalrts::reinit_open_call(context[25]);
      refalrts::reinit_number(context[26], 3UL);
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[26], context[1] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[16], context[25] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[18] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GetOpt/4 (/7 e.Description#1/19 )/8 (/15 '-'/17 '-'/18 )/16 >/1
      context[19] = context[9];
      context[20] = context[10];
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.Description#1 as range 19
      //DEBUG: e.Description#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} '-'/18 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </16 HalfReuse: & FoldErrors/1 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/19 AsIs: )/8 HalfReuse: >/15 HalfReuse: >/17 } Tile{ ]] }
      refalrts::reinit_open_call(context[16]);
      refalrts::reinit_name(context[1], functions[efunc_FoldErrors]);
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::reinit_close_call(context[15]);
      refalrts::reinit_close_call(context[17]);
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[17] );
      res = refalrts::splice_evar( res, context[16], context[1] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GetOpt/4 (/7 e.Description#1/19 )/8 (/15 '-'/17 '-'/18 )/16 e.#0/21 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[11];
    context[22] = context[12];
    // closed e.Description#1 as range 19
    // closed e.#0 as range 21
    //DEBUG: e.Description#1: 19
    //DEBUG: e.#0: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </16 } & FoldErrors/23 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/19 AsIs: )/8 HalfReuse: </15 HalfReuse: & MarkupAllFiles@0/17 HalfReuse: 2/18 } Tile{ AsIs: e.#0/21 } >/24 >/25 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[23], functions[efunc_FoldErrors]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::reinit_open_call(context[16]);
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::reinit_open_call(context[15]);
    refalrts::reinit_name(context[17], functions[efunc_gen_MarkupAllFiles_Z0]);
    refalrts::reinit_number(context[18], 2UL);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[18] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_elem( res, context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GetOpt/4 (/7 e.Description#1/5 )/8 e.Arguments#1/2 >/1
  // closed e.Description#1 as range 5
  // closed e.Arguments#1 as range 2
  //DEBUG: e.Description#1: 5
  //DEBUG: e.Arguments#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & FoldErrors/10 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } </11 & MarkupArguments@1*1/12 Tile{ AsIs: e.Arguments#1/2 } >/13 >/14 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_FoldErrors]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_MarkupArguments_Z1D1]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_close_call(vm, context[14]);
  refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GetOpt("GetOpt", 0U, 0U, func_GetOpt);


static refalrts::FnResult func_Inc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Inc/4 s.Num#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/1 } >/6 Tile{ ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_number(context[1], 1UL);
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Inc("Inc", COOKIE1_, COOKIE2_, func_Inc);


static refalrts::FnResult func_MarkupArguments(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & MarkupArguments/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MarkupArguments/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MarkupArguments/4 s.new#3/5 (/10 e.new#4/8 )/11 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    // closed e.new#4 as range 8
    // closed e.new#5 as range 6
    do {
      // </0 & MarkupArguments/4 s.new#6/5 (/10 '-'/16 s.new#8/17 e.new#9/12 )/11 e.new#7/14 >/1
      context[12] = context[8];
      context[13] = context[9];
      context[14] = context[6];
      context[15] = context[7];
      context[16] = refalrts::char_left( '-', context[12], context[13] );
      if( ! context[16] )
        continue;
      // closed e.new#7 as range 14
      if( ! refalrts::svar_left( context[17], context[12], context[13] ) )
        continue;
      // closed e.new#9 as range 12
      do {
        // </0 & MarkupArguments/4 s.new#10/5 (/10 '-'/16 '-'/17 e.new#12/18 )/11 e.new#11/20 >/1
        context[18] = context[12];
        context[19] = context[13];
        context[20] = context[14];
        context[21] = context[15];
        if( ! refalrts::char_term( '-', context[17] ) )
          continue;
        // closed e.new#12 as range 18
        // closed e.new#11 as range 20
        do {
          // </0 & MarkupArguments/4 s.Num#1/5 (/10 '-'/16 '-'/17 )/11 e.Tail#1/22 >/1
          context[22] = context[20];
          context[23] = context[21];
          if( ! refalrts::empty_seq( context[18], context[19] ) )
            continue;
          // closed e.Tail#1 as range 22
          //DEBUG: s.Num#1: 5
          //DEBUG: e.Tail#1: 22

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Num#1/5 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & MarkupAllFiles/4 } </24 Tile{ HalfReuse: & Add/10 HalfReuse: s.Num1 #5/16 HalfReuse: 1/17 HalfReuse: >/11 AsIs: e.Tail#1/22 AsIs: >/1 ]] }
          refalrts::alloc_open_call(vm, context[24]);
          refalrts::update_name(context[4], functions[efunc_MarkupAllFiles]);
          refalrts::reinit_name(context[10], functions[efunc_Add]);
          refalrts::reinit_svar( context[16], context[5] );
          refalrts::reinit_number(context[17], 1UL);
          refalrts::reinit_close_call(context[11]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[11] );
          refalrts::push_stack( vm, context[24] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[10];
          res = refalrts::splice_elem( res, context[24] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & MarkupArguments/4 s.Num#1/5 (/10 '-'/16 '-'/17 e.Arg#1/26 '='/30 e.Param#1/28 )/11 e.Tail#1/24 >/1
          context[22] = context[18];
          context[23] = context[19];
          context[24] = context[20];
          context[25] = context[21];
          // closed e.Tail#1 as range 24
          context[26] = 0;
          context[27] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[28] = context[22];
            context[29] = context[23];
            context[30] = refalrts::char_left( '=', context[28], context[29] );
            if( ! context[30] )
              continue;
            // closed e.Param#1 as range 28
            //DEBUG: s.Num#1: 5
            //DEBUG: e.Tail#1: 24
            //DEBUG: e.Arg#1: 26
            //DEBUG: e.Param#1: 28

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } (/31 Tile{ HalfReuse: # Long-Param/10 HalfReuse: s.Num1 #5/16 HalfReuse: (/17 AsIs: e.Arg#1/26 HalfReuse: )/30 AsIs: e.Param#1/28 AsIs: )/11 } </32 & MarkupArguments/33 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 } 1/34 >/35 Tile{ AsIs: e.Tail#1/24 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[31]);
            refalrts::alloc_open_call(vm, context[32]);
            refalrts::alloc_name(vm, context[33], functions[efunc_MarkupArguments]);
            refalrts::alloc_number(vm, context[34], 1UL);
            refalrts::alloc_close_call(vm, context[35]);
            refalrts::reinit_ident(context[10], identifiers[ident_Longm_Param]);
            refalrts::reinit_svar( context[16], context[5] );
            refalrts::reinit_open_bracket(context[17]);
            refalrts::reinit_close_bracket(context[30]);
            refalrts::update_name(context[4], functions[efunc_Add]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[35] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[31], context[11] );
            refalrts::link_brackets( context[17], context[30] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[24], context[25] );
            res = refalrts::splice_evar( res, context[34], context[35] );
            res = refalrts::splice_evar( res, context[0], context[5] );
            res = refalrts::splice_evar( res, context[32], context[33] );
            res = refalrts::splice_evar( res, context[10], context[11] );
            res = refalrts::splice_elem( res, context[31] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[26], context[27], context[22], context[23] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & MarkupArguments/4 s.Num#1/5 (/10 '-'/16 '-'/17 e.Arg#1/22 )/11 e.Tail#1/24 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        context[25] = context[21];
        // closed e.Arg#1 as range 22
        // closed e.Tail#1 as range 24
        //DEBUG: s.Num#1: 5
        //DEBUG: e.Arg#1: 22
        //DEBUG: e.Tail#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/10 HalfReuse: # Long/16 HalfReuse: s.Num1 #5/17 AsIs: e.Arg#1/22 AsIs: )/11 } </26 & MarkupArguments/27 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 } 1/28 >/29 Tile{ AsIs: e.Tail#1/24 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_MarkupArguments]);
        refalrts::alloc_number(vm, context[28], 1UL);
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::reinit_ident(context[16], identifiers[ident_Long]);
        refalrts::reinit_svar( context[17], context[5] );
        refalrts::update_name(context[4], functions[efunc_Add]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[10], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & MarkupArguments/4 s.Num#1/5 (/10 '-'/16 s.Init#1/17 e.Arg#1/18 )/11 e.Tail#1/20 >/1
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      context[21] = context[15];
      // closed e.Arg#1 as range 18
      // closed e.Tail#1 as range 20
      //DEBUG: s.Num#1: 5
      //DEBUG: s.Init#1: 17
      //DEBUG: e.Arg#1: 18
      //DEBUG: e.Tail#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/22 Tile{ HalfReuse: # Short/10 HalfReuse: s.Num1 #5/16 AsIs: s.Init#1/17 AsIs: e.Arg#1/18 AsIs: )/11 } </23 & MarkupArguments/24 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 } 1/25 >/26 Tile{ AsIs: e.Tail#1/20 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_MarkupArguments]);
      refalrts::alloc_number(vm, context[25], 1UL);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::reinit_ident(context[10], identifiers[ident_Short]);
      refalrts::reinit_svar( context[16], context[5] );
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[22], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_elem( res, context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MarkupArguments/4 s.Num#1/5 (/10 e.Arg#1/12 )/11 e.Tail#1/14 >/1
    context[12] = context[8];
    context[13] = context[9];
    context[14] = context[6];
    context[15] = context[7];
    // closed e.Arg#1 as range 12
    // closed e.Tail#1 as range 14
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Arg#1: 12
    //DEBUG: e.Tail#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 # Word/17 s.Num#1/5/18 Tile{ AsIs: e.Arg#1/12 } )/19 </20 & MarkupArguments/21 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/10 } Tile{ HalfReuse: >/11 AsIs: e.Tail#1/14 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::alloc_ident(vm, context[17], identifiers[ident_Word]);
    refalrts::copy_stvar(vm, context[18], context[5]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_MarkupArguments]);
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_number(context[10], 1UL);
    refalrts::reinit_close_call(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MarkupArguments/4 s.Num#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MarkupArguments/4 s.Num#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MarkupArguments("MarkupArguments", COOKIE1_, COOKIE2_, func_MarkupArguments);


static refalrts::FnResult func_MarkupAllFiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & MarkupAllFiles/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MarkupAllFiles/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MarkupAllFiles/4 s.Num#1/5 (/10 e.Arg#1/8 )/11 e.Tail#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    // closed e.Arg#1 as range 8
    // closed e.Tail#1 as range 6
    //DEBUG: s.Num#1: 5
    //DEBUG: e.Arg#1: 8
    //DEBUG: e.Tail#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 # Word/13 s.Num#1/5/14 Tile{ AsIs: e.Arg#1/8 } )/15 </16 & MarkupAllFiles/17 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.Num#1/5 HalfReuse: 1/10 } Tile{ HalfReuse: >/11 AsIs: e.Tail#1/6 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_ident(vm, context[13], identifiers[ident_Word]);
    refalrts::copy_stvar(vm, context[14], context[5]);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_MarkupAllFiles]);
    refalrts::update_name(context[4], functions[efunc_Add]);
    refalrts::reinit_number(context[10], 1UL);
    refalrts::reinit_close_call(context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[12], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MarkupAllFiles/4 s.Num#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Num#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MarkupAllFiles/4 s.Num#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MarkupAllFiles("MarkupAllFiles", COOKIE1_, COOKIE2_, func_MarkupAllFiles);


static refalrts::FnResult func_ResolveOpts(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 60 elems
  refalrts::Iter context[60];
  refalrts::zeros( context, 60 );
  // </0 & ResolveOpts/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveOpts/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ResolveOpts/4 (/7 e.new#7/9 )/8 (/15 s.new#3/17 s.new#4/18 e.new#5/13 )/16 e.new#6/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.new#7 as range 9
    // closed e.new#6 as range 11
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
      continue;
    // closed e.new#5 as range 13
    do {
      // </0 & ResolveOpts/4 (/7 e.new#12/19 )/8 (/15 # Long-Param/17 s.new#9/18 (/27 e.new#10/25 )/28 e.new#11/21 )/16 e.new#8/23 >/1
      context[19] = context[9];
      context[20] = context[10];
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[11];
      context[24] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Longm_Param], context[17] ) )
        continue;
      context[25] = 0;
      context[26] = 0;
      context[27] = refalrts::brackets_left( context[25], context[26], context[21], context[22] );
      if( ! context[27] )
        continue;
      refalrts::bracket_pointers(context[27], context[28]);
      // closed e.new#12 as range 19
      // closed e.new#10 as range 25
      // closed e.new#11 as range 21
      // closed e.new#8 as range 23
      do {
        // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/37 (/43 s.Tag#1/45 s.HasArg#1/46 e.Opts-B#1/47 (/53 e.Long#1/55 )/54 e.Opts-E#1/49 )/44 e.Descrs-E#1/39 )/8 (/15 # Long-Param/17 s.Num#1/18 (/27 e.Long#1/31 )/28 e.Param#1/33 )/16 e.ArgsTail#1/35 >/1
        context[29] = context[19];
        context[30] = context[20];
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[21];
        context[34] = context[22];
        context[35] = context[23];
        context[36] = context[24];
        // closed e.Long#1 as range 31
        // closed e.Param#1 as range 33
        // closed e.ArgsTail#1 as range 35
        context[37] = 0;
        context[38] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[39] = context[29];
          context[40] = context[30];
          context[41] = 0;
          context[42] = 0;
          context[43] = refalrts::brackets_left( context[41], context[42], context[39], context[40] );
          if( ! context[43] )
            continue;
          refalrts::bracket_pointers(context[43], context[44]);
          // closed e.Descrs-E#1 as range 39
          if( ! refalrts::svar_left( context[45], context[41], context[42] ) )
            continue;
          if( ! refalrts::svar_left( context[46], context[41], context[42] ) )
            continue;
          context[47] = 0;
          context[48] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[49] = context[41];
            context[50] = context[42];
            context[51] = 0;
            context[52] = 0;
            context[53] = refalrts::brackets_left( context[51], context[52], context[49], context[50] );
            if( ! context[53] )
              continue;
            refalrts::bracket_pointers(context[53], context[54]);
            if( ! refalrts::repeated_evar_left( vm, context[55], context[56], context[31], context[32], context[51], context[52] ) )
              continue;
            if( ! refalrts::empty_seq( context[51], context[52] ) )
              continue;
            // closed e.Opts-E#1 as range 49
            //DEBUG: s.Num#1: 18
            //DEBUG: e.Long#1: 31
            //DEBUG: e.Param#1: 33
            //DEBUG: e.ArgsTail#1: 35
            //DEBUG: e.Descrs-B#1: 37
            //DEBUG: e.Descrs-E#1: 39
            //DEBUG: s.Tag#1: 45
            //DEBUG: s.HasArg#1: 46
            //DEBUG: e.Opts-B#1: 47
            //DEBUG: e.Opts-E#1: 49

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#1/18 {REMOVED TILE} e.Long#1/31 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-LongParam@1/4 AsIs: (/7 AsIs: e.Descrs-B#1/37 HalfReuse: )/43 AsIs: s.Tag#1/45 AsIs: s.HasArg#1/46 } (/57 Tile{ AsIs: e.Opts-B#1/47 } )/58 Tile{ AsIs: (/53 AsIs: e.Long#1/55 AsIs: )/54 } Tile{ AsIs: (/27 } Tile{ AsIs: e.Opts-E#1/49 } )/59 Tile{ HalfReuse: (/44 AsIs: e.Descrs-E#1/39 AsIs: )/8 HalfReuse: s.Num1 #18/15 HalfReuse: s.HasArg1 #46/17 } Tile{ HalfReuse: (/28 AsIs: e.Param#1/33 AsIs: )/16 AsIs: e.ArgsTail#1/35 AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[57]);
            refalrts::alloc_close_bracket(vm, context[58]);
            refalrts::alloc_close_bracket(vm, context[59]);
            refalrts::update_name(context[4], functions[efunc_gen_ResolveOptsm_LongParam_Z1]);
            refalrts::reinit_close_bracket(context[43]);
            refalrts::reinit_open_bracket(context[44]);
            refalrts::reinit_svar( context[15], context[18] );
            refalrts::reinit_svar( context[17], context[46] );
            refalrts::reinit_open_bracket(context[28]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[28], context[16] );
            refalrts::link_brackets( context[44], context[8] );
            refalrts::link_brackets( context[27], context[59] );
            refalrts::link_brackets( context[53], context[54] );
            refalrts::link_brackets( context[57], context[58] );
            refalrts::link_brackets( context[7], context[43] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[28];
            res = refalrts::splice_evar( res, context[44], context[17] );
            res = refalrts::splice_elem( res, context[59] );
            res = refalrts::splice_evar( res, context[49], context[50] );
            res = refalrts::splice_elem( res, context[27] );
            res = refalrts::splice_evar( res, context[53], context[54] );
            res = refalrts::splice_elem( res, context[58] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_elem( res, context[57] );
            refalrts::splice_to_freelist_open( vm, context[46], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[47], context[48], context[41], context[42] ) );
        } while ( refalrts::open_evar_advance( context[37], context[38], context[29], context[30] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts/4 (/7 e.Description#1/29 )/8 (/15 # Long-Param/17 s.Num#1/18 (/27 e.Long#1/31 )/28 e.Param#1/33 )/16 e.ArgsTail#1/35 >/1
      context[29] = context[19];
      context[30] = context[20];
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[21];
      context[34] = context[22];
      context[35] = context[23];
      context[36] = context[24];
      // closed e.Description#1 as range 29
      // closed e.Long#1 as range 31
      // closed e.Param#1 as range 33
      // closed e.ArgsTail#1 as range 35
      //DEBUG: s.Num#1: 18
      //DEBUG: e.Description#1: 29
      //DEBUG: e.Long#1: 31
      //DEBUG: e.Param#1: 33
      //DEBUG: e.ArgsTail#1: 35

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Param#1/33 )/16 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 Reuse: # Error/17 AsIs: s.Num#1/18 HalfReuse: # UnknownLongOption/27 AsIs: e.Long#1/31 AsIs: )/28 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/29 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/35 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[17], identifiers[ident_Error]);
      refalrts::reinit_ident(context[27], identifiers[ident_UnknownLongOption]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[15], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[15], context[28] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ResolveOpts/4 (/7 e.new#11/19 )/8 (/15 # Long/17 s.new#9/18 e.new#10/21 )/16 e.new#8/23 >/1
      context[19] = context[9];
      context[20] = context[10];
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[11];
      context[24] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Long], context[17] ) )
        continue;
      // closed e.new#11 as range 19
      // closed e.new#10 as range 21
      // closed e.new#8 as range 23
      do {
        // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/31 (/37 s.Tag#1/39 s.HasArg#1/40 e.Opts-B#1/41 (/47 e.Long#1/49 )/48 e.Opts-E#1/43 )/38 e.Descrs-E#1/33 )/8 (/15 # Long/17 s.Num#1/18 e.Long#1/27 )/16 e.ArgsTail#1/29 >/1
        context[25] = context[19];
        context[26] = context[20];
        context[27] = context[21];
        context[28] = context[22];
        context[29] = context[23];
        context[30] = context[24];
        // closed e.Long#1 as range 27
        // closed e.ArgsTail#1 as range 29
        context[31] = 0;
        context[32] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[33] = context[25];
          context[34] = context[26];
          context[35] = 0;
          context[36] = 0;
          context[37] = refalrts::brackets_left( context[35], context[36], context[33], context[34] );
          if( ! context[37] )
            continue;
          refalrts::bracket_pointers(context[37], context[38]);
          // closed e.Descrs-E#1 as range 33
          if( ! refalrts::svar_left( context[39], context[35], context[36] ) )
            continue;
          if( ! refalrts::svar_left( context[40], context[35], context[36] ) )
            continue;
          context[41] = 0;
          context[42] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[43] = context[35];
            context[44] = context[36];
            context[45] = 0;
            context[46] = 0;
            context[47] = refalrts::brackets_left( context[45], context[46], context[43], context[44] );
            if( ! context[47] )
              continue;
            refalrts::bracket_pointers(context[47], context[48]);
            if( ! refalrts::repeated_evar_left( vm, context[49], context[50], context[27], context[28], context[45], context[46] ) )
              continue;
            if( ! refalrts::empty_seq( context[45], context[46] ) )
              continue;
            // closed e.Opts-E#1 as range 43
            //DEBUG: s.Num#1: 18
            //DEBUG: e.Long#1: 27
            //DEBUG: e.ArgsTail#1: 29
            //DEBUG: e.Descrs-B#1: 31
            //DEBUG: e.Descrs-E#1: 33
            //DEBUG: s.Tag#1: 39
            //DEBUG: s.HasArg#1: 40
            //DEBUG: e.Opts-B#1: 41
            //DEBUG: e.Opts-E#1: 43

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num#1/18 e.Long#1/27 {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Long@1/4 AsIs: (/7 AsIs: e.Descrs-B#1/31 HalfReuse: )/37 AsIs: s.Tag#1/39 AsIs: s.HasArg#1/40 } (/51 Tile{ AsIs: e.Opts-B#1/41 } )/52 Tile{ AsIs: (/47 AsIs: e.Long#1/49 AsIs: )/48 } Tile{ HalfReuse: (/17 } Tile{ AsIs: e.Opts-E#1/43 } )/53 Tile{ HalfReuse: (/38 AsIs: e.Descrs-E#1/33 AsIs: )/8 HalfReuse: s.Num1 #18/15 } Tile{ HalfReuse: s.HasArg1 #40/16 AsIs: e.ArgsTail#1/29 AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[51]);
            refalrts::alloc_close_bracket(vm, context[52]);
            refalrts::alloc_close_bracket(vm, context[53]);
            refalrts::update_name(context[4], functions[efunc_gen_ResolveOptsm_Long_Z1]);
            refalrts::reinit_close_bracket(context[37]);
            refalrts::reinit_open_bracket(context[17]);
            refalrts::reinit_open_bracket(context[38]);
            refalrts::reinit_svar( context[15], context[18] );
            refalrts::reinit_svar( context[16], context[40] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[38], context[8] );
            refalrts::link_brackets( context[17], context[53] );
            refalrts::link_brackets( context[47], context[48] );
            refalrts::link_brackets( context[51], context[52] );
            refalrts::link_brackets( context[7], context[37] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_evar( res, context[38], context[15] );
            res = refalrts::splice_elem( res, context[53] );
            res = refalrts::splice_evar( res, context[43], context[44] );
            res = refalrts::splice_elem( res, context[17] );
            res = refalrts::splice_evar( res, context[47], context[48] );
            res = refalrts::splice_elem( res, context[52] );
            res = refalrts::splice_evar( res, context[41], context[42] );
            res = refalrts::splice_elem( res, context[51] );
            refalrts::splice_to_freelist_open( vm, context[40], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[41], context[42], context[35], context[36] ) );
        } while ( refalrts::open_evar_advance( context[31], context[32], context[25], context[26] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts/4 (/7 e.Description#1/25 )/8 (/15 # Long/17 s.Num#1/18 e.Long#1/27 )/16 e.ArgsTail#1/29 >/1
      context[25] = context[19];
      context[26] = context[20];
      context[27] = context[21];
      context[28] = context[22];
      context[29] = context[23];
      context[30] = context[24];
      // closed e.Description#1 as range 25
      // closed e.Long#1 as range 27
      // closed e.ArgsTail#1 as range 29
      //DEBUG: s.Num#1: 18
      //DEBUG: e.Description#1: 25
      //DEBUG: e.Long#1: 27
      //DEBUG: e.ArgsTail#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/15 Reuse: # Error/17 AsIs: s.Num#1/18 } # UnknownLongOption/31 Tile{ AsIs: e.Long#1/27 } Tile{ AsIs: )/16 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/25 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/29 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[31], identifiers[ident_UnknownLongOption]);
      refalrts::update_ident(context[17], identifiers[ident_Error]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_elem( res, context[31] );
      res = refalrts::splice_evar( res, context[15], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ResolveOpts/4 (/7 e.new#12/19 )/8 (/15 # Short/17 s.new#9/18 s.new#10/25 e.new#11/21 )/16 e.new#8/23 >/1
      context[19] = context[9];
      context[20] = context[10];
      context[21] = context[13];
      context[22] = context[14];
      context[23] = context[11];
      context[24] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_Short], context[17] ) )
        continue;
      // closed e.new#12 as range 19
      // closed e.new#8 as range 23
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      // closed e.new#11 as range 21
      do {
        // </0 & ResolveOpts/4 (/7 e.Descrs-B#1/32 (/38 s.Tag#1/40 s.HasArg#1/41 e.Opts-B#1/42 s.Short#1/46 e.Opts-E#1/44 )/39 e.Descrs-E#1/34 )/8 (/15 # Short/17 s.Num#1/18 s.Short#1/25 e.OptTail#1/28 )/16 e.ArgsTail#1/30 >/1
        context[26] = context[19];
        context[27] = context[20];
        context[28] = context[21];
        context[29] = context[22];
        context[30] = context[23];
        context[31] = context[24];
        // closed e.OptTail#1 as range 28
        // closed e.ArgsTail#1 as range 30
        context[32] = 0;
        context[33] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[34] = context[26];
          context[35] = context[27];
          context[36] = 0;
          context[37] = 0;
          context[38] = refalrts::brackets_left( context[36], context[37], context[34], context[35] );
          if( ! context[38] )
            continue;
          refalrts::bracket_pointers(context[38], context[39]);
          // closed e.Descrs-E#1 as range 34
          if( ! refalrts::svar_left( context[40], context[36], context[37] ) )
            continue;
          if( ! refalrts::svar_left( context[41], context[36], context[37] ) )
            continue;
          context[42] = 0;
          context[43] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[44] = context[36];
            context[45] = context[37];
            if( ! refalrts::repeated_stvar_left( vm, context[46], context[25], context[44], context[45] ) )
              continue;
            // closed e.Opts-E#1 as range 44
            //DEBUG: s.Num#1: 18
            //DEBUG: s.Short#1: 25
            //DEBUG: e.OptTail#1: 28
            //DEBUG: e.ArgsTail#1: 30
            //DEBUG: e.Descrs-B#1: 32
            //DEBUG: e.Descrs-E#1: 34
            //DEBUG: s.Tag#1: 40
            //DEBUG: s.HasArg#1: 41
            //DEBUG: e.Opts-B#1: 42
            //DEBUG: e.Opts-E#1: 44

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} s.Short#1/46 {REMOVED TILE} {REMOVED TILE} s.Num#1/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Short@1/4 AsIs: (/7 AsIs: e.Descrs-B#1/32 HalfReuse: )/38 AsIs: s.Tag#1/40 AsIs: s.HasArg#1/41 } (/47 Tile{ AsIs: e.Opts-B#1/42 } )/48 Tile{ AsIs: s.Short#1/25 } (/49 Tile{ AsIs: e.Opts-E#1/44 } )/50 Tile{ HalfReuse: (/39 AsIs: e.Descrs-E#1/34 AsIs: )/8 HalfReuse: s.Num1 #18/15 HalfReuse: s.HasArg1 #41/17 } (/51 Tile{ AsIs: e.OptTail#1/28 } Tile{ AsIs: )/16 AsIs: e.ArgsTail#1/30 AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[47]);
            refalrts::alloc_close_bracket(vm, context[48]);
            refalrts::alloc_open_bracket(vm, context[49]);
            refalrts::alloc_close_bracket(vm, context[50]);
            refalrts::alloc_open_bracket(vm, context[51]);
            refalrts::update_name(context[4], functions[efunc_gen_ResolveOptsm_Short_Z1]);
            refalrts::reinit_close_bracket(context[38]);
            refalrts::reinit_open_bracket(context[39]);
            refalrts::reinit_svar( context[15], context[18] );
            refalrts::reinit_svar( context[17], context[41] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[51], context[16] );
            refalrts::link_brackets( context[39], context[8] );
            refalrts::link_brackets( context[49], context[50] );
            refalrts::link_brackets( context[47], context[48] );
            refalrts::link_brackets( context[7], context[38] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[16];
            res = refalrts::splice_evar( res, context[28], context[29] );
            res = refalrts::splice_elem( res, context[51] );
            res = refalrts::splice_evar( res, context[39], context[17] );
            res = refalrts::splice_elem( res, context[50] );
            res = refalrts::splice_evar( res, context[44], context[45] );
            res = refalrts::splice_elem( res, context[49] );
            res = refalrts::splice_elem( res, context[25] );
            res = refalrts::splice_elem( res, context[48] );
            res = refalrts::splice_evar( res, context[42], context[43] );
            res = refalrts::splice_elem( res, context[47] );
            refalrts::splice_to_freelist_open( vm, context[41], res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[42], context[43], context[36], context[37] ) );
        } while ( refalrts::open_evar_advance( context[32], context[33], context[26], context[27] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ResolveOpts/4 (/7 e.Description#1/26 )/8 (/15 # Short/17 s.Num#1/18 s.Short#1/25 )/16 e.ArgsTail#1/28 >/1
        context[26] = context[19];
        context[27] = context[20];
        context[28] = context[23];
        context[29] = context[24];
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        // closed e.Description#1 as range 26
        // closed e.ArgsTail#1 as range 28
        //DEBUG: s.Num#1: 18
        //DEBUG: s.Short#1: 25
        //DEBUG: e.Description#1: 26
        //DEBUG: e.ArgsTail#1: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/15 Reuse: # Error/17 AsIs: s.Num#1/18 } # UnknownShortOption/30 Tile{ AsIs: s.Short#1/25 AsIs: )/16 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/26 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/28 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[30], identifiers[ident_UnknownShortOption]);
        refalrts::update_ident(context[17], identifiers[ident_Error]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_evar( res, context[25], context[16] );
        res = refalrts::splice_elem( res, context[30] );
        res = refalrts::splice_evar( res, context[15], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts/4 (/7 e.Description#1/26 )/8 (/15 # Short/17 s.Num#1/18 s.Short#1/25 e.OptTail#1/28 )/16 e.ArgsTail#1/30 >/1
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[23];
      context[31] = context[24];
      // closed e.Description#1 as range 26
      // closed e.OptTail#1 as range 28
      // closed e.ArgsTail#1 as range 30
      //DEBUG: s.Num#1: 18
      //DEBUG: s.Short#1: 25
      //DEBUG: e.Description#1: 26
      //DEBUG: e.OptTail#1: 28
      //DEBUG: e.ArgsTail#1: 30

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/32 # Error/33 s.Num#1/18/34 # UnknownShortOption/35 Tile{ AsIs: s.Short#1/25 } )/36 Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/26 AsIs: )/8 AsIs: (/15 AsIs: # Short/17 AsIs: s.Num#1/18 } Tile{ AsIs: e.OptTail#1/28 } Tile{ AsIs: )/16 AsIs: e.ArgsTail#1/30 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[32]);
      refalrts::alloc_ident(vm, context[33], identifiers[ident_Error]);
      refalrts::copy_stvar(vm, context[34], context[18]);
      refalrts::alloc_ident(vm, context[35], identifiers[ident_UnknownShortOption]);
      refalrts::alloc_close_bracket(vm, context[36]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[32], context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[0], context[18] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[32], context[35] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts/4 (/7 e.Description#1/19 )/8 (/15 # Word/17 s.Num#1/18 e.File#1/21 )/16 e.ArgsTail#1/23 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[11];
    context[24] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_Word], context[17] ) )
      continue;
    // closed e.Description#1 as range 19
    // closed e.File#1 as range 21
    // closed e.ArgsTail#1 as range 23
    //DEBUG: s.Num#1: 18
    //DEBUG: e.Description#1: 19
    //DEBUG: e.File#1: 21
    //DEBUG: e.ArgsTail#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 Reuse: # FILE/17 AsIs: s.Num#1/18 AsIs: e.File#1/21 AsIs: )/16 } Tile{ AsIs: </0 AsIs: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/19 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/23 } Tile{ AsIs: >/1 ]] }
    refalrts::update_ident(context[17], identifiers[ident_FILE]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  //DEBUG: e.Description#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ResolveOpts/4 (/7 e.Description#1/5 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOpts("ResolveOpts", COOKIE1_, COOKIE2_, func_ResolveOpts);


static refalrts::FnResult func_ResolveOptsm_LongParam(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & ResolveOpts-LongParam/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveOpts-LongParam/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 s.new#4/11 (/14 e.new#5/12 )/15 (/18 e.new#6/16 )/19 e.new#7/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.new#5 as range 12
  // closed e.new#6 as range 16
  // closed e.new#7 as range 2
  do {
    // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/20 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/22 )/15 (/18 e.Param#1/24 )/19 e.ArgsTail#1/26 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[22] = context[12];
    context[23] = context[13];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[2];
    context[27] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Required], context[11] ) )
      continue;
    // closed e.Description#1 as range 20
    // closed e.Long#1 as range 22
    // closed e.Param#1 as range 24
    // closed e.ArgsTail#1 as range 26
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 20
    //DEBUG: e.Long#1: 22
    //DEBUG: e.Param#1: 24
    //DEBUG: e.ArgsTail#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Required/11 {REMOVED TILE} e.Long#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/24 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/20 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/26 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[15], context[10] );
    refalrts::reinit_svar( context[18], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/20 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/22 )/15 (/18 e.Param#1/24 )/19 e.ArgsTail#1/26 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[22] = context[12];
    context[23] = context[13];
    context[24] = context[16];
    context[25] = context[17];
    context[26] = context[2];
    context[27] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Optional], context[11] ) )
      continue;
    // closed e.Description#1 as range 20
    // closed e.Long#1 as range 22
    // closed e.Param#1 as range 24
    // closed e.ArgsTail#1 as range 26
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 20
    //DEBUG: e.Long#1: 22
    //DEBUG: e.Param#1: 24
    //DEBUG: e.ArgsTail#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Optional/11 {REMOVED TILE} e.Long#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ HalfReuse: s.Tag1 #10/15 HalfReuse: s.Num1 #9/18 AsIs: e.Param#1/24 AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/20 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/26 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[15], context[10] );
    refalrts::reinit_svar( context[18], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[14], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts-LongParam/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 (/18 e.Param#1/16 )/19 e.ArgsTail#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_None], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  // closed e.Long#1 as range 12
  // closed e.Param#1 as range 16
  // closed e.ArgsTail#1 as range 2
  //DEBUG: s.Num#1: 9
  //DEBUG: s.Tag#1: 10
  //DEBUG: e.Description#1: 5
  //DEBUG: e.Long#1: 12
  //DEBUG: e.Param#1: 16
  //DEBUG: e.ArgsTail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/20 # Error/21 Tile{ AsIs: s.Num#1/9 } # UnexpectedLongOptionParam/22 Tile{ AsIs: (/18 } Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/12 AsIs: )/15 } Tile{ AsIs: e.Param#1/16 } Tile{ AsIs: )/19 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_Error]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_UnexpectedLongOptionParam]);
  refalrts::reinit_char(context[11], '-');
  refalrts::reinit_char(context[14], '-');
  refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[20], context[19] );
  refalrts::link_brackets( context[18], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOptsm_LongParam("ResolveOpts-LongParam", COOKIE1_, COOKIE2_, func_ResolveOptsm_LongParam);


static refalrts::FnResult func_ResolveOptsm_Long(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & ResolveOpts-Long/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveOpts-Long/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 s.new#4/11 (/14 e.new#5/12 )/15 e.new#6/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.new#5 as range 12
  // closed e.new#6 as range 2
  do {
    // </0 & ResolveOpts-Long/4 (/7 e.new#10/16 )/8 s.new#7/9 s.new#8/10 # Required/11 (/14 e.new#11/18 )/15 e.new#9/20 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Required], context[11] ) )
      continue;
    // closed e.new#10 as range 16
    // closed e.new#11 as range 18
    // closed e.new#9 as range 20
    do {
      // </0 & ResolveOpts-Long/4 (/7 e.Description#1/22 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/24 )/15 (/30 # Word/32 s.WordNum#1/33 e.Param#1/28 )/31 e.ArgsTail#1/26 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      context[26] = context[20];
      context[27] = context[21];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      context[32] = refalrts::ident_left( identifiers[ident_Word], context[28], context[29] );
      if( ! context[32] )
        continue;
      // closed e.Description#1 as range 22
      // closed e.Long#1 as range 24
      // closed e.ArgsTail#1 as range 26
      if( ! refalrts::svar_left( context[33], context[28], context[29] ) )
        continue;
      // closed e.Param#1 as range 28
      //DEBUG: s.Num#1: 9
      //DEBUG: s.Tag#1: 10
      //DEBUG: e.Description#1: 22
      //DEBUG: e.Long#1: 24
      //DEBUG: e.ArgsTail#1: 26
      //DEBUG: s.WordNum#1: 33
      //DEBUG: e.Param#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} e.Long#1/24 {REMOVED TILE} (/30 # Word/32 s.WordNum#1/33 {REMOVED TILE} )/31 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/28 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/22 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/26 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_svar( context[11], context[9] );
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/22 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 (/14 e.Long#1/24 )/15 e.ArgsTail#1/26 >/1
    context[22] = context[16];
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[20];
    context[27] = context[21];
    // closed e.Description#1 as range 22
    // closed e.Long#1 as range 24
    // closed e.ArgsTail#1 as range 26
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 22
    //DEBUG: e.Long#1: 24
    //DEBUG: e.ArgsTail#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/28 # Error/29 Tile{ AsIs: s.Num#1/9 } # NoRequiredParam/30 Tile{ HalfReuse: '-'/11 HalfReuse: '-'/14 AsIs: e.Long#1/24 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/22 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/26 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::alloc_ident(vm, context[29], identifiers[ident_Error]);
    refalrts::alloc_ident(vm, context[30], identifiers[ident_NoRequiredParam]);
    refalrts::reinit_char(context[11], '-');
    refalrts::reinit_char(context[14], '-');
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[28], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[9] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-Long/4 (/7 e.new#10/16 )/8 s.new#7/9 s.new#8/10 # Optional/11 (/14 e.new#11/18 )/15 e.new#9/20 >/1
    context[16] = context[5];
    context[17] = context[6];
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[2];
    context[21] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Optional], context[11] ) )
      continue;
    // closed e.new#10 as range 16
    // closed e.new#11 as range 18
    // closed e.new#9 as range 20
    do {
      // </0 & ResolveOpts-Long/4 (/7 e.Description#1/22 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/24 )/15 (/30 # Word/32 s.WordNum#1/33 e.Param#1/28 )/31 e.ArgsTail#1/26 >/1
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[19];
      context[26] = context[20];
      context[27] = context[21];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      context[32] = refalrts::ident_left( identifiers[ident_Word], context[28], context[29] );
      if( ! context[32] )
        continue;
      // closed e.Description#1 as range 22
      // closed e.Long#1 as range 24
      // closed e.ArgsTail#1 as range 26
      if( ! refalrts::svar_left( context[33], context[28], context[29] ) )
        continue;
      // closed e.Param#1 as range 28
      //DEBUG: s.Num#1: 9
      //DEBUG: s.Tag#1: 10
      //DEBUG: e.Description#1: 22
      //DEBUG: e.Long#1: 24
      //DEBUG: e.ArgsTail#1: 26
      //DEBUG: s.WordNum#1: 33
      //DEBUG: e.Param#1: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} e.Long#1/24 {REMOVED TILE} (/30 # Word/32 s.WordNum#1/33 {REMOVED TILE} )/31 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/14 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: e.Param#1/28 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/22 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/26 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_svar( context[11], context[9] );
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[14], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_elem( res, context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Long/4 (/7 e.Description#1/22 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 (/14 e.Long#1/24 )/15 e.ArgsTail#1/26 >/1
    context[22] = context[16];
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[20];
    context[27] = context[21];
    // closed e.Description#1 as range 22
    // closed e.Long#1 as range 24
    // closed e.ArgsTail#1 as range 26
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: e.Description#1: 22
    //DEBUG: e.Long#1: 24
    //DEBUG: e.ArgsTail#1: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} e.Long#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/28 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: # NoParam/14 } Tile{ AsIs: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/22 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/26 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[28]);
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::reinit_ident(context[14], identifiers[ident_NoParam]);
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[28], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_elem( res, context[15] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts-Long/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 (/14 e.Long#1/12 )/15 e.ArgsTail#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_None], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Description#1 as range 5
  // closed e.Long#1 as range 12
  // closed e.ArgsTail#1 as range 2
  //DEBUG: s.Num#1: 9
  //DEBUG: s.Tag#1: 10
  //DEBUG: e.Description#1: 5
  //DEBUG: e.Long#1: 12
  //DEBUG: e.ArgsTail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} e.Long#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 HalfReuse: )/14 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::reinit_open_bracket(context[15]);
  refalrts::reinit_svar( context[11], context[9] );
  refalrts::reinit_close_bracket(context[14]);
  refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOptsm_Long("ResolveOpts-Long", COOKIE1_, COOKIE2_, func_ResolveOptsm_Long);


static refalrts::FnResult func_ResolveOptsm_Short(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & ResolveOpts-Short/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveOpts-Short/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 s.new#4/11 s.new#5/12 (/15 e.new#6/13 )/16 e.new#7/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#6 as range 13
  // closed e.new#7 as range 2
  do {
    // </0 & ResolveOpts-Short/4 (/7 e.new#12/17 )/8 s.new#8/9 s.new#9/10 # Required/11 s.new#10/12 (/15 e.new#13/19 )/16 e.new#11/21 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[2];
    context[22] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Required], context[11] ) )
      continue;
    // closed e.new#12 as range 17
    // closed e.new#13 as range 19
    // closed e.new#11 as range 21
    do {
      // </0 & ResolveOpts-Short/4 (/7 e.new#18/23 )/8 s.new#14/9 s.new#15/10 # Required/11 s.new#16/12 (/15 )/16 e.new#17/25 >/1
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[21];
      context[26] = context[22];
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.new#18 as range 23
      // closed e.new#17 as range 25
      do {
        // </0 & ResolveOpts-Short/4 (/7 e.Description#1/27 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 (/33 # Word/35 s.WordNum#1/36 e.Param#1/31 )/34 e.ArgsTail#1/29 >/1
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        context[30] = context[26];
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        context[35] = refalrts::ident_left( identifiers[ident_Word], context[31], context[32] );
        if( ! context[35] )
          continue;
        // closed e.Description#1 as range 27
        // closed e.ArgsTail#1 as range 29
        if( ! refalrts::svar_left( context[36], context[31], context[32] ) )
          continue;
        // closed e.Param#1 as range 31
        //DEBUG: s.Num#1: 9
        //DEBUG: s.Tag#1: 10
        //DEBUG: s.Short#1: 12
        //DEBUG: e.Description#1: 27
        //DEBUG: e.ArgsTail#1: 29
        //DEBUG: s.WordNum#1: 36
        //DEBUG: e.Param#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 {REMOVED TILE} # Word/35 s.WordNum#1/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/33 } Tile{ AsIs: e.Param#1/31 } Tile{ AsIs: )/34 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/27 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/29 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_svar( context[16], context[10] );
        refalrts::reinit_svar( context[33], context[9] );
        refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[34] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[15], context[33] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/27 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/29 >/1
      context[27] = context[23];
      context[28] = context[24];
      context[29] = context[25];
      context[30] = context[26];
      // closed e.Description#1 as range 27
      // closed e.ArgsTail#1 as range 29
      //DEBUG: s.Num#1: 9
      //DEBUG: s.Tag#1: 10
      //DEBUG: s.Short#1: 12
      //DEBUG: e.Description#1: 27
      //DEBUG: e.ArgsTail#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Tag#1/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/31 # Error/32 Tile{ AsIs: s.Num#1/9 } Tile{ HalfReuse: # NoRequiredParam/16 } Tile{ HalfReuse: '-'/11 AsIs: s.Short#1/12 HalfReuse: )/15 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/27 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/29 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::alloc_ident(vm, context[32], identifiers[ident_Error]);
      refalrts::reinit_ident(context[16], identifiers[ident_NoRequiredParam]);
      refalrts::reinit_char(context[11], '-');
      refalrts::reinit_close_bracket(context[15]);
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[31], context[15] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[11], context[15] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/23 )/8 s.Num#1/9 s.Tag#1/10 # Required/11 s.Short#1/12 (/15 e.Param#1/25 )/16 e.ArgsTail#1/27 >/1
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[20];
    context[27] = context[21];
    context[28] = context[22];
    // closed e.Description#1 as range 23
    // closed e.Param#1 as range 25
    // closed e.ArgsTail#1 as range 27
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 23
    //DEBUG: e.Param#1: 25
    //DEBUG: e.ArgsTail#1: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/25 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/23 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/27 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[11]);
    refalrts::reinit_svar( context[15], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-Short/4 (/7 e.new#12/17 )/8 s.new#8/9 s.new#9/10 # Optional/11 s.new#10/12 (/15 e.new#13/19 )/16 e.new#11/21 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[2];
    context[22] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Optional], context[11] ) )
      continue;
    // closed e.new#12 as range 17
    // closed e.new#13 as range 19
    // closed e.new#11 as range 21
    do {
      // </0 & ResolveOpts-Short/4 (/7 e.new#18/23 )/8 s.new#14/9 s.new#15/10 # Optional/11 s.new#16/12 (/15 )/16 e.new#17/25 >/1
      context[23] = context[17];
      context[24] = context[18];
      context[25] = context[21];
      context[26] = context[22];
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      // closed e.new#18 as range 23
      // closed e.new#17 as range 25
      do {
        // </0 & ResolveOpts-Short/4 (/7 e.Description#1/27 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 (/33 # Word/35 s.WordNum#1/36 e.Param#1/31 )/34 e.ArgsTail#1/29 >/1
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        context[30] = context[26];
        context[31] = 0;
        context[32] = 0;
        context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
        if( ! context[33] )
          continue;
        refalrts::bracket_pointers(context[33], context[34]);
        context[35] = refalrts::ident_left( identifiers[ident_Word], context[31], context[32] );
        if( ! context[35] )
          continue;
        // closed e.Description#1 as range 27
        // closed e.ArgsTail#1 as range 29
        if( ! refalrts::svar_left( context[36], context[31], context[32] ) )
          continue;
        // closed e.Param#1 as range 31
        //DEBUG: s.Num#1: 9
        //DEBUG: s.Tag#1: 10
        //DEBUG: s.Short#1: 12
        //DEBUG: e.Description#1: 27
        //DEBUG: e.ArgsTail#1: 29
        //DEBUG: s.WordNum#1: 36
        //DEBUG: e.Param#1: 31

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 {REMOVED TILE} # Word/35 s.WordNum#1/36 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/15 HalfReuse: s.Tag1 #10/16 HalfReuse: s.Num1 #9/33 } Tile{ AsIs: e.Param#1/31 } Tile{ AsIs: )/34 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/27 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/29 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_svar( context[16], context[10] );
        refalrts::reinit_svar( context[33], context[9] );
        refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[15], context[34] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[0], context[8] );
        res = refalrts::splice_elem( res, context[34] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[15], context[33] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts-Short/4 (/7 e.Description#1/27 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/29 >/1
      context[27] = context[23];
      context[28] = context[24];
      context[29] = context[25];
      context[30] = context[26];
      // closed e.Description#1 as range 27
      // closed e.ArgsTail#1 as range 29
      //DEBUG: s.Num#1: 9
      //DEBUG: s.Tag#1: 10
      //DEBUG: s.Short#1: 12
      //DEBUG: e.Description#1: 27
      //DEBUG: e.ArgsTail#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/31 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ HalfReuse: # NoParam/15 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/27 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/29 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::reinit_svar( context[11], context[9] );
      refalrts::reinit_ident(context[15], identifiers[ident_NoParam]);
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[31], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/23 )/8 s.Num#1/9 s.Tag#1/10 # Optional/11 s.Short#1/12 (/15 e.Param#1/25 )/16 e.ArgsTail#1/27 >/1
    context[23] = context[17];
    context[24] = context[18];
    context[25] = context[19];
    context[26] = context[20];
    context[27] = context[21];
    context[28] = context[22];
    // closed e.Description#1 as range 23
    // closed e.Param#1 as range 25
    // closed e.ArgsTail#1 as range 27
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 23
    //DEBUG: e.Param#1: 25
    //DEBUG: e.ArgsTail#1: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 } Tile{ AsIs: s.Tag#1/10 } Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.Param#1/25 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/23 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/27 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[11]);
    refalrts::reinit_svar( context[15], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_elem( res, context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts-Short/4 (/7 e.new#12/5 )/8 s.new#8/9 s.new#9/10 # None/11 s.new#10/12 (/15 e.new#13/13 )/16 e.new#11/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_None], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#12 as range 5
  // closed e.new#13 as range 13
  // closed e.new#11 as range 2
  do {
    // </0 & ResolveOpts-Short/4 (/7 e.Description#1/17 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 )/16 e.ArgsTail#1/19 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Description#1 as range 17
    // closed e.ArgsTail#1 as range 19
    //DEBUG: s.Num#1: 9
    //DEBUG: s.Tag#1: 10
    //DEBUG: s.Short#1: 12
    //DEBUG: e.Description#1: 17
    //DEBUG: e.ArgsTail#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } Tile{ AsIs: )/16 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/17 AsIs: )/8 } Tile{ AsIs: e.ArgsTail#1/19 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_elem( res, context[16] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_elem( res, context[15] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts-Short/4 (/7 e.Description#1/5 )/8 s.Num#1/9 s.Tag#1/10 # None/11 s.Short#1/12 (/15 e.OptTail#1/13 )/16 e.ArgsTail#1/2 >/1
  // closed e.Description#1 as range 5
  // closed e.OptTail#1 as range 13
  // closed e.ArgsTail#1 as range 2
  //DEBUG: s.Num#1: 9
  //DEBUG: s.Tag#1: 10
  //DEBUG: s.Short#1: 12
  //DEBUG: e.Description#1: 5
  //DEBUG: e.OptTail#1: 13
  //DEBUG: e.ArgsTail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Num#1/9 {REMOVED TILE} s.Short#1/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/17 Tile{ AsIs: s.Tag#1/10 HalfReuse: s.Num1 #9/11 } )/18 Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Description#1/5 AsIs: )/8 } (/19 # Short/20 Tile{ HalfReuse: s.Num1 #9/15 AsIs: e.OptTail#1/13 AsIs: )/16 AsIs: e.ArgsTail#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_Short]);
  refalrts::reinit_svar( context[11], context[9] );
  refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
  refalrts::reinit_svar( context[15], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_elem( res, context[17] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveOptsm_Short("ResolveOpts-Short", COOKIE1_, COOKIE2_, func_ResolveOptsm_Short);


static refalrts::FnResult func_FoldErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & FoldErrors/4 e.OptionsAndErrors#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.OptionsAndErrors#1 as range 2
  //DEBUG: e.OptionsAndErrors#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFoldErrors@1/4 AsIs: e.OptionsAndErrors#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_DoFoldErrors_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FoldErrors("FoldErrors", COOKIE1_, COOKIE2_, func_FoldErrors);


static refalrts::FnResult func_DoFoldErrors(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DoFoldErrors/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoFoldErrors/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & DoFoldErrors/4 (/7 e.Errors#1/9 )/8 e.Options#1/13 (/19 # Error/21 s.Num#1/22 s.ErrorCode#1/23 e.Info#1/17 )/20 e.OptionsAndErrors#1/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Errors#1 as range 9
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[15] = context[11];
      context[16] = context[12];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left( identifiers[ident_Error], context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.OptionsAndErrors#1 as range 15
      if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_left( context[23], context[17], context[18] ) )
        continue;
      // closed e.Info#1 as range 17
      //DEBUG: e.Errors#1: 9
      //DEBUG: e.Options#1: 13
      //DEBUG: e.OptionsAndErrors#1: 15
      //DEBUG: s.Num#1: 22
      //DEBUG: s.ErrorCode#1: 23
      //DEBUG: e.Info#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Error/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFoldErrors/4 AsIs: (/7 AsIs: e.Errors#1/9 HalfReuse: (/8 } Tile{ AsIs: s.Num#1/22 AsIs: s.ErrorCode#1/23 AsIs: e.Info#1/17 AsIs: )/20 } Tile{ HalfReuse: )/19 } Tile{ AsIs: e.Options#1/13 } Tile{ AsIs: e.OptionsAndErrors#1/15 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[19]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::link_brackets( context[8], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_evar( res, context[22], context[20] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFoldErrors/4 (/7 e.Errors#1/5 )/8 e.Options#1/2 >/1
  // closed e.Errors#1 as range 5
  // closed e.Options#1 as range 2
  //DEBUG: e.Errors#1: 5
  //DEBUG: e.Options#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & DoFoldErrors/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#1/5 AsIs: )/8 } Tile{ AsIs: e.Options#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoFoldErrors("DoFoldErrors", COOKIE1_, COOKIE2_, func_DoFoldErrors);


static refalrts::FnResult func_gen_ResolveOptsm_LongParam_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & ResolveOpts-LongParam@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveOpts-LongParam@1/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 (/13 e.new#4/11 )/14 (/17 e.new#5/15 )/18 (/21 e.new#6/19 )/22 (/25 e.new#7/23 )/26 s.new#8/27 s.new#9/28 (/31 e.new#10/29 )/32 e.new#11/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
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
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.new#4 as range 11
  // closed e.new#5 as range 15
  // closed e.new#6 as range 19
  // closed e.new#7 as range 23
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  // closed e.new#10 as range 29
  // closed e.new#11 as range 2
  do {
    // </0 & ResolveOpts-LongParam@1/4 (/7 e.Descrs-B#1/33 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/35 )/14 (/17 e.Long0#1/37 )/18 (/21 e.Opts-E#1/39 )/22 (/25 e.Descrs-E#1/41 )/26 s.Num0#1/27 # Required/28 (/31 e.Param0#1/43 )/32 e.ArgsTail0#1/45 >/1
    context[33] = context[5];
    context[34] = context[6];
    context[35] = context[11];
    context[36] = context[12];
    context[37] = context[15];
    context[38] = context[16];
    context[39] = context[19];
    context[40] = context[20];
    context[41] = context[23];
    context[42] = context[24];
    context[43] = context[29];
    context[44] = context[30];
    context[45] = context[2];
    context[46] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Required], context[28] ) )
      continue;
    // closed e.Descrs-B#1 as range 33
    // closed e.Opts-B#1 as range 35
    // closed e.Long0#1 as range 37
    // closed e.Opts-E#1 as range 39
    // closed e.Descrs-E#1 as range 41
    // closed e.Param0#1 as range 43
    // closed e.ArgsTail0#1 as range 45
    //DEBUG: s.Tag0#1: 9
    //DEBUG: s.HasArg#1: 10
    //DEBUG: s.Num0#1: 27
    //DEBUG: e.Descrs-B#1: 33
    //DEBUG: e.Opts-B#1: 35
    //DEBUG: e.Long0#1: 37
    //DEBUG: e.Opts-E#1: 39
    //DEBUG: e.Descrs-E#1: 41
    //DEBUG: e.Param0#1: 43
    //DEBUG: e.ArgsTail0#1: 45

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/25 {REMOVED TILE} {REMOVED TILE} # Required/28 (/31 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/21 } Tile{ HalfReuse: s.Tag01 #9/26 AsIs: s.Num0#1/27 } Tile{ AsIs: e.Param0#1/43 } Tile{ AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/33 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/35 } Tile{ AsIs: (/17 AsIs: e.Long0#1/37 AsIs: )/18 } Tile{ AsIs: e.Opts-E#1/39 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Descrs-E#1/41 } Tile{ AsIs: )/32 AsIs: e.ArgsTail0#1/45 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[26], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[32] );
    refalrts::link_brackets( context[8], context[14] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[32];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-LongParam@1/4 (/7 e.Descrs-B#1/33 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/35 )/14 (/17 e.Long0#1/37 )/18 (/21 e.Opts-E#1/39 )/22 (/25 e.Descrs-E#1/41 )/26 s.Num0#1/27 # Optional/28 (/31 e.Param0#1/43 )/32 e.ArgsTail0#1/45 >/1
    context[33] = context[5];
    context[34] = context[6];
    context[35] = context[11];
    context[36] = context[12];
    context[37] = context[15];
    context[38] = context[16];
    context[39] = context[19];
    context[40] = context[20];
    context[41] = context[23];
    context[42] = context[24];
    context[43] = context[29];
    context[44] = context[30];
    context[45] = context[2];
    context[46] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Optional], context[28] ) )
      continue;
    // closed e.Descrs-B#1 as range 33
    // closed e.Opts-B#1 as range 35
    // closed e.Long0#1 as range 37
    // closed e.Opts-E#1 as range 39
    // closed e.Descrs-E#1 as range 41
    // closed e.Param0#1 as range 43
    // closed e.ArgsTail0#1 as range 45
    //DEBUG: s.Tag0#1: 9
    //DEBUG: s.HasArg#1: 10
    //DEBUG: s.Num0#1: 27
    //DEBUG: e.Descrs-B#1: 33
    //DEBUG: e.Opts-B#1: 35
    //DEBUG: e.Long0#1: 37
    //DEBUG: e.Opts-E#1: 39
    //DEBUG: e.Descrs-E#1: 41
    //DEBUG: e.Param0#1: 43
    //DEBUG: e.ArgsTail0#1: 45

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/25 {REMOVED TILE} {REMOVED TILE} # Optional/28 (/31 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/21 } Tile{ HalfReuse: s.Tag01 #9/26 AsIs: s.Num0#1/27 } Tile{ AsIs: e.Param0#1/43 } Tile{ AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/33 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/35 } Tile{ AsIs: (/17 AsIs: e.Long0#1/37 AsIs: )/18 } Tile{ AsIs: e.Opts-E#1/39 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Descrs-E#1/41 } Tile{ AsIs: )/32 AsIs: e.ArgsTail0#1/45 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[26], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[32] );
    refalrts::link_brackets( context[8], context[14] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[32];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-LongParam@1/4 (/7 e.Descrs-B#1/33 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/35 )/14 (/17 e.Long0#1/37 )/18 (/21 e.Opts-E#1/39 )/22 (/25 e.Descrs-E#1/41 )/26 s.Num0#1/27 # None/28 (/31 e.Param0#1/43 )/32 e.ArgsTail0#1/45 >/1
    context[33] = context[5];
    context[34] = context[6];
    context[35] = context[11];
    context[36] = context[12];
    context[37] = context[15];
    context[38] = context[16];
    context[39] = context[19];
    context[40] = context[20];
    context[41] = context[23];
    context[42] = context[24];
    context[43] = context[29];
    context[44] = context[30];
    context[45] = context[2];
    context[46] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_None], context[28] ) )
      continue;
    // closed e.Descrs-B#1 as range 33
    // closed e.Opts-B#1 as range 35
    // closed e.Long0#1 as range 37
    // closed e.Opts-E#1 as range 39
    // closed e.Descrs-E#1 as range 41
    // closed e.Param0#1 as range 43
    // closed e.ArgsTail0#1 as range 45
    //DEBUG: s.Tag0#1: 9
    //DEBUG: s.HasArg#1: 10
    //DEBUG: s.Num0#1: 27
    //DEBUG: e.Descrs-B#1: 33
    //DEBUG: e.Opts-B#1: 35
    //DEBUG: e.Long0#1: 37
    //DEBUG: e.Opts-E#1: 39
    //DEBUG: e.Descrs-E#1: 41
    //DEBUG: e.Param0#1: 43
    //DEBUG: e.ArgsTail0#1: 45

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/21 } Tile{ HalfReuse: # Error/26 AsIs: s.Num0#1/27 Reuse: # UnexpectedLongOptionParam/28 AsIs: (/31 } Tile{ HalfReuse: '-'/13 } Tile{ HalfReuse: '-'/25 } e.Long0#1/37/47 Tile{ AsIs: )/22 } Tile{ AsIs: e.Param0#1/43 } Tile{ AsIs: )/14 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/33 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/35 } Tile{ AsIs: (/17 AsIs: e.Long0#1/37 AsIs: )/18 } Tile{ AsIs: e.Opts-E#1/39 } )/49 Tile{ AsIs: e.Descrs-E#1/41 } Tile{ AsIs: )/32 AsIs: e.ArgsTail0#1/45 AsIs: >/1 ]] }
    refalrts::copy_evar(vm, context[47], context[48], context[37], context[38]);
    refalrts::alloc_close_bracket(vm, context[49]);
    refalrts::reinit_ident(context[26], identifiers[ident_Error]);
    refalrts::update_ident(context[28], identifiers[ident_UnexpectedLongOptionParam]);
    refalrts::reinit_char(context[13], '-');
    refalrts::reinit_char(context[25], '-');
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[32] );
    refalrts::link_brackets( context[8], context[49] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[21], context[14] );
    refalrts::link_brackets( context[31], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[32];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_elem( res, context[49] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[26], context[31] );
    res = refalrts::splice_elem( res, context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts-LongParam@1/4 (/7 e.Descrs-B#1/5 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/11 )/14 (/17 e.Long0#1/15 )/18 (/21 e.Opts-E#1/19 )/22 (/25 e.Descrs-E#1/23 )/26 s.Num0#1/27 s.dyn#2/28 (/31 e.Param0#1/29 )/32 e.ArgsTail0#1/2 >/1
  // closed e.Descrs-B#1 as range 5
  // closed e.Opts-B#1 as range 11
  // closed e.Long0#1 as range 15
  // closed e.Opts-E#1 as range 19
  // closed e.Descrs-E#1 as range 23
  // closed e.Param0#1 as range 29
  // closed e.ArgsTail0#1 as range 2
  //DEBUG: s.Tag0#1: 9
  //DEBUG: s.HasArg#1: 10
  //DEBUG: s.Num0#1: 27
  //DEBUG: s.dyn#2: 28
  //DEBUG: e.Descrs-B#1: 5
  //DEBUG: e.Opts-B#1: 11
  //DEBUG: e.Long0#1: 15
  //DEBUG: e.Opts-E#1: 19
  //DEBUG: e.Descrs-E#1: 23
  //DEBUG: e.Param0#1: 29
  //DEBUG: e.ArgsTail0#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.dyn#2/28 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-LongParam@0/4 AsIs: (/7 AsIs: e.Descrs-B#1/5 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/11 } Tile{ AsIs: (/21 } e.Long0#1/15/33 Tile{ AsIs: )/22 } Tile{ AsIs: e.Opts-E#1/19 } Tile{ HalfReuse: )/25 AsIs: e.Descrs-E#1/23 AsIs: )/26 AsIs: s.Num0#1/27 } Tile{ HalfReuse: s.Tag01 #9/13 } Tile{ HalfReuse: s.dyn2 #28/14 AsIs: (/17 AsIs: e.Long0#1/15 AsIs: )/18 } Tile{ AsIs: (/31 AsIs: e.Param0#1/29 AsIs: )/32 AsIs: e.ArgsTail0#1/2 AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[33], context[34], context[15], context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_ResolveOptsm_LongParam_Z0]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[25]);
  refalrts::reinit_svar( context[13], context[9] );
  refalrts::reinit_svar( context[14], context[28] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[7], context[26] );
  refalrts::link_brackets( context[8], context[25] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[31];
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[25], context[27] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[10], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveOptsm_LongParam_Z1("ResolveOpts-LongParam@1", COOKIE1_, COOKIE2_, func_gen_ResolveOptsm_LongParam_Z1);


static refalrts::FnResult func_gen_ResolveOptsm_Long_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 59 elems
  refalrts::Iter context[59];
  refalrts::zeros( context, 59 );
  // </0 & ResolveOpts-Long@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveOpts-Long@1/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 (/13 e.new#4/11 )/14 (/17 e.new#5/15 )/18 (/21 e.new#6/19 )/22 (/25 e.new#7/23 )/26 s.new#8/27 s.new#9/28 e.new#10/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
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
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.new#4 as range 11
  // closed e.new#5 as range 15
  // closed e.new#6 as range 19
  // closed e.new#7 as range 23
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#10 as range 2
  do {
    // </0 & ResolveOpts-Long@1/4 (/7 e.new#15/29 )/8 s.new#11/9 s.new#12/10 (/13 e.new#16/31 )/14 (/17 e.new#17/33 )/18 (/21 e.new#18/35 )/22 (/25 e.new#19/37 )/26 s.new#13/27 # Required/28 e.new#14/39 >/1
    context[29] = context[5];
    context[30] = context[6];
    context[31] = context[11];
    context[32] = context[12];
    context[33] = context[15];
    context[34] = context[16];
    context[35] = context[19];
    context[36] = context[20];
    context[37] = context[23];
    context[38] = context[24];
    context[39] = context[2];
    context[40] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Required], context[28] ) )
      continue;
    // closed e.new#15 as range 29
    // closed e.new#16 as range 31
    // closed e.new#17 as range 33
    // closed e.new#18 as range 35
    // closed e.new#19 as range 37
    // closed e.new#14 as range 39
    do {
      // </0 & ResolveOpts-Long@1/4 (/7 e.Descrs-B#1/41 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/43 )/14 (/17 e.Long0#1/45 )/18 (/21 e.Opts-E#1/47 )/22 (/25 e.Descrs-E#1/49 )/26 s.Num0#1/27 # Required/28 (/55 # Word/57 s.WordNum#1/58 e.Param#1/53 )/56 e.ArgsTail#1/51 >/1
      context[41] = context[29];
      context[42] = context[30];
      context[43] = context[31];
      context[44] = context[32];
      context[45] = context[33];
      context[46] = context[34];
      context[47] = context[35];
      context[48] = context[36];
      context[49] = context[37];
      context[50] = context[38];
      context[51] = context[39];
      context[52] = context[40];
      context[53] = 0;
      context[54] = 0;
      context[55] = refalrts::brackets_left( context[53], context[54], context[51], context[52] );
      if( ! context[55] )
        continue;
      refalrts::bracket_pointers(context[55], context[56]);
      context[57] = refalrts::ident_left( identifiers[ident_Word], context[53], context[54] );
      if( ! context[57] )
        continue;
      // closed e.Descrs-B#1 as range 41
      // closed e.Opts-B#1 as range 43
      // closed e.Long0#1 as range 45
      // closed e.Opts-E#1 as range 47
      // closed e.Descrs-E#1 as range 49
      // closed e.ArgsTail#1 as range 51
      if( ! refalrts::svar_left( context[58], context[53], context[54] ) )
        continue;
      // closed e.Param#1 as range 53
      //DEBUG: s.Tag0#1: 9
      //DEBUG: s.HasArg#1: 10
      //DEBUG: s.Num0#1: 27
      //DEBUG: e.Descrs-B#1: 41
      //DEBUG: e.Opts-B#1: 43
      //DEBUG: e.Long0#1: 45
      //DEBUG: e.Opts-E#1: 47
      //DEBUG: e.Descrs-E#1: 49
      //DEBUG: e.ArgsTail#1: 51
      //DEBUG: s.WordNum#1: 58
      //DEBUG: e.Param#1: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Required/28 (/55 # Word/57 s.WordNum#1/58 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/25 } Tile{ HalfReuse: s.Tag01 #9/26 AsIs: s.Num0#1/27 } Tile{ AsIs: e.Param#1/53 } Tile{ AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/41 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/43 } Tile{ AsIs: (/17 AsIs: e.Long0#1/45 AsIs: )/18 } Tile{ AsIs: e.Opts-E#1/47 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Descrs-E#1/49 } Tile{ AsIs: )/56 AsIs: e.ArgsTail#1/51 AsIs: >/1 ]] }
      refalrts::reinit_svar( context[26], context[9] );
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[56] );
      refalrts::link_brackets( context[8], context[14] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[25], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[56];
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[53], context[54] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Long@1/4 (/7 e.Descrs-B#1/41 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/43 )/14 (/17 e.Long0#1/45 )/18 (/21 e.Opts-E#1/47 )/22 (/25 e.Descrs-E#1/49 )/26 s.Num0#1/27 # Required/28 e.ArgsTail#1/51 >/1
    context[41] = context[29];
    context[42] = context[30];
    context[43] = context[31];
    context[44] = context[32];
    context[45] = context[33];
    context[46] = context[34];
    context[47] = context[35];
    context[48] = context[36];
    context[49] = context[37];
    context[50] = context[38];
    context[51] = context[39];
    context[52] = context[40];
    // closed e.Descrs-B#1 as range 41
    // closed e.Opts-B#1 as range 43
    // closed e.Long0#1 as range 45
    // closed e.Opts-E#1 as range 47
    // closed e.Descrs-E#1 as range 49
    // closed e.ArgsTail#1 as range 51
    //DEBUG: s.Tag0#1: 9
    //DEBUG: s.HasArg#1: 10
    //DEBUG: s.Num0#1: 27
    //DEBUG: e.Descrs-B#1: 41
    //DEBUG: e.Opts-B#1: 43
    //DEBUG: e.Long0#1: 45
    //DEBUG: e.Opts-E#1: 47
    //DEBUG: e.Descrs-E#1: 49
    //DEBUG: e.ArgsTail#1: 51

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: # Error/26 AsIs: s.Num0#1/27 } Tile{ HalfReuse: # NoRequiredParam/25 } Tile{ HalfReuse: '-'/21 } '-'/53 e.Long0#1/45/54 Tile{ AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/41 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/43 } Tile{ AsIs: (/17 AsIs: e.Long0#1/45 AsIs: )/18 } Tile{ AsIs: e.Opts-E#1/47 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Descrs-E#1/49 } Tile{ HalfReuse: )/28 AsIs: e.ArgsTail#1/51 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[53], '-');
    refalrts::copy_evar(vm, context[54], context[55], context[45], context[46]);
    refalrts::reinit_ident(context[26], identifiers[ident_Error]);
    refalrts::reinit_ident(context[25], identifiers[ident_NoRequiredParam]);
    refalrts::reinit_char(context[21], '-');
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[28]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[28] );
    refalrts::link_brackets( context[8], context[14] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[54], context[55] );
    res = refalrts::splice_elem( res, context[53] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-Long@1/4 (/7 e.new#15/29 )/8 s.new#11/9 s.new#12/10 (/13 e.new#16/31 )/14 (/17 e.new#17/33 )/18 (/21 e.new#18/35 )/22 (/25 e.new#19/37 )/26 s.new#13/27 # Optional/28 e.new#14/39 >/1
    context[29] = context[5];
    context[30] = context[6];
    context[31] = context[11];
    context[32] = context[12];
    context[33] = context[15];
    context[34] = context[16];
    context[35] = context[19];
    context[36] = context[20];
    context[37] = context[23];
    context[38] = context[24];
    context[39] = context[2];
    context[40] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Optional], context[28] ) )
      continue;
    // closed e.new#15 as range 29
    // closed e.new#16 as range 31
    // closed e.new#17 as range 33
    // closed e.new#18 as range 35
    // closed e.new#19 as range 37
    // closed e.new#14 as range 39
    do {
      // </0 & ResolveOpts-Long@1/4 (/7 e.Descrs-B#1/41 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/43 )/14 (/17 e.Long0#1/45 )/18 (/21 e.Opts-E#1/47 )/22 (/25 e.Descrs-E#1/49 )/26 s.Num0#1/27 # Optional/28 (/55 # Word/57 s.WordNum#1/58 e.Param#1/53 )/56 e.ArgsTail#1/51 >/1
      context[41] = context[29];
      context[42] = context[30];
      context[43] = context[31];
      context[44] = context[32];
      context[45] = context[33];
      context[46] = context[34];
      context[47] = context[35];
      context[48] = context[36];
      context[49] = context[37];
      context[50] = context[38];
      context[51] = context[39];
      context[52] = context[40];
      context[53] = 0;
      context[54] = 0;
      context[55] = refalrts::brackets_left( context[53], context[54], context[51], context[52] );
      if( ! context[55] )
        continue;
      refalrts::bracket_pointers(context[55], context[56]);
      context[57] = refalrts::ident_left( identifiers[ident_Word], context[53], context[54] );
      if( ! context[57] )
        continue;
      // closed e.Descrs-B#1 as range 41
      // closed e.Opts-B#1 as range 43
      // closed e.Long0#1 as range 45
      // closed e.Opts-E#1 as range 47
      // closed e.Descrs-E#1 as range 49
      // closed e.ArgsTail#1 as range 51
      if( ! refalrts::svar_left( context[58], context[53], context[54] ) )
        continue;
      // closed e.Param#1 as range 53
      //DEBUG: s.Tag0#1: 9
      //DEBUG: s.HasArg#1: 10
      //DEBUG: s.Num0#1: 27
      //DEBUG: e.Descrs-B#1: 41
      //DEBUG: e.Opts-B#1: 43
      //DEBUG: e.Long0#1: 45
      //DEBUG: e.Opts-E#1: 47
      //DEBUG: e.Descrs-E#1: 49
      //DEBUG: e.ArgsTail#1: 51
      //DEBUG: s.WordNum#1: 58
      //DEBUG: e.Param#1: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # Optional/28 (/55 # Word/57 s.WordNum#1/58 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/25 } Tile{ HalfReuse: s.Tag01 #9/26 AsIs: s.Num0#1/27 } Tile{ AsIs: e.Param#1/53 } Tile{ AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/41 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/43 } Tile{ AsIs: (/17 AsIs: e.Long0#1/45 AsIs: )/18 } Tile{ AsIs: e.Opts-E#1/47 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Descrs-E#1/49 } Tile{ AsIs: )/56 AsIs: e.ArgsTail#1/51 AsIs: >/1 ]] }
      refalrts::reinit_svar( context[26], context[9] );
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[56] );
      refalrts::link_brackets( context[8], context[14] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::link_brackets( context[25], context[22] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[56];
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_elem( res, context[22] );
      res = refalrts::splice_evar( res, context[53], context[54] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[25] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Long@1/4 (/7 e.Descrs-B#1/41 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/43 )/14 (/17 e.Long0#1/45 )/18 (/21 e.Opts-E#1/47 )/22 (/25 e.Descrs-E#1/49 )/26 s.Num0#1/27 # Optional/28 e.ArgsTail#1/51 >/1
    context[41] = context[29];
    context[42] = context[30];
    context[43] = context[31];
    context[44] = context[32];
    context[45] = context[33];
    context[46] = context[34];
    context[47] = context[35];
    context[48] = context[36];
    context[49] = context[37];
    context[50] = context[38];
    context[51] = context[39];
    context[52] = context[40];
    // closed e.Descrs-B#1 as range 41
    // closed e.Opts-B#1 as range 43
    // closed e.Long0#1 as range 45
    // closed e.Opts-E#1 as range 47
    // closed e.Descrs-E#1 as range 49
    // closed e.ArgsTail#1 as range 51
    //DEBUG: s.Tag0#1: 9
    //DEBUG: s.HasArg#1: 10
    //DEBUG: s.Num0#1: 27
    //DEBUG: e.Descrs-B#1: 41
    //DEBUG: e.Opts-B#1: 43
    //DEBUG: e.Long0#1: 45
    //DEBUG: e.Opts-E#1: 47
    //DEBUG: e.Descrs-E#1: 49
    //DEBUG: e.ArgsTail#1: 51

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: s.Tag01 #9/26 AsIs: s.Num0#1/27 } Tile{ HalfReuse: # NoParam/25 } Tile{ AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/41 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/43 } Tile{ AsIs: (/17 AsIs: e.Long0#1/45 AsIs: )/18 } Tile{ AsIs: e.Opts-E#1/47 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Descrs-E#1/49 } Tile{ HalfReuse: )/28 AsIs: e.ArgsTail#1/51 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[26], context[9] );
    refalrts::reinit_ident(context[25], identifiers[ident_NoParam]);
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[28]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[28] );
    refalrts::link_brackets( context[8], context[14] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-Long@1/4 (/7 e.Descrs-B#1/29 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/31 )/14 (/17 e.Long0#1/33 )/18 (/21 e.Opts-E#1/35 )/22 (/25 e.Descrs-E#1/37 )/26 s.Num0#1/27 # None/28 e.ArgsTail#1/39 >/1
    context[29] = context[5];
    context[30] = context[6];
    context[31] = context[11];
    context[32] = context[12];
    context[33] = context[15];
    context[34] = context[16];
    context[35] = context[19];
    context[36] = context[20];
    context[37] = context[23];
    context[38] = context[24];
    context[39] = context[2];
    context[40] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_None], context[28] ) )
      continue;
    // closed e.Descrs-B#1 as range 29
    // closed e.Opts-B#1 as range 31
    // closed e.Long0#1 as range 33
    // closed e.Opts-E#1 as range 35
    // closed e.Descrs-E#1 as range 37
    // closed e.ArgsTail#1 as range 39
    //DEBUG: s.Tag0#1: 9
    //DEBUG: s.HasArg#1: 10
    //DEBUG: s.Num0#1: 27
    //DEBUG: e.Descrs-B#1: 29
    //DEBUG: e.Opts-B#1: 31
    //DEBUG: e.Long0#1: 33
    //DEBUG: e.Opts-E#1: 35
    //DEBUG: e.Descrs-E#1: 37
    //DEBUG: e.ArgsTail#1: 39

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/21 {REMOVED TILE} {REMOVED TILE} (/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: s.Tag01 #9/26 AsIs: s.Num0#1/27 } Tile{ AsIs: )/22 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/29 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/31 } Tile{ AsIs: (/17 AsIs: e.Long0#1/33 AsIs: )/18 } Tile{ AsIs: e.Opts-E#1/35 } Tile{ AsIs: )/14 } Tile{ AsIs: e.Descrs-E#1/37 } Tile{ HalfReuse: )/28 AsIs: e.ArgsTail#1/39 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[26], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[28]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[28] );
    refalrts::link_brackets( context[8], context[14] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts-Long@1/4 (/7 e.Descrs-B#1/5 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/11 )/14 (/17 e.Long0#1/15 )/18 (/21 e.Opts-E#1/19 )/22 (/25 e.Descrs-E#1/23 )/26 s.Num0#1/27 s.dyn#2/28 e.dyn#2/2 >/1
  // closed e.Descrs-B#1 as range 5
  // closed e.Opts-B#1 as range 11
  // closed e.Long0#1 as range 15
  // closed e.Opts-E#1 as range 19
  // closed e.Descrs-E#1 as range 23
  // closed e.dyn#2 as range 2
  //DEBUG: s.Tag0#1: 9
  //DEBUG: s.HasArg#1: 10
  //DEBUG: s.Num0#1: 27
  //DEBUG: s.dyn#2: 28
  //DEBUG: e.Descrs-B#1: 5
  //DEBUG: e.Opts-B#1: 11
  //DEBUG: e.Long0#1: 15
  //DEBUG: e.Opts-E#1: 19
  //DEBUG: e.Descrs-E#1: 23
  //DEBUG: e.dyn#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.dyn#2/28 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Long@0/4 AsIs: (/7 AsIs: e.Descrs-B#1/5 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/11 } Tile{ AsIs: (/21 } e.Long0#1/15/29 Tile{ AsIs: )/22 } Tile{ AsIs: e.Opts-E#1/19 } Tile{ HalfReuse: )/25 AsIs: e.Descrs-E#1/23 AsIs: )/26 AsIs: s.Num0#1/27 } Tile{ HalfReuse: s.Tag01 #9/13 } Tile{ HalfReuse: s.dyn2 #28/14 AsIs: (/17 AsIs: e.Long0#1/15 AsIs: )/18 } Tile{ AsIs: e.dyn#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::copy_evar(vm, context[29], context[30], context[15], context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_ResolveOptsm_Long_Z0]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[25]);
  refalrts::reinit_svar( context[13], context[9] );
  refalrts::reinit_svar( context[14], context[28] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[7], context[26] );
  refalrts::link_brackets( context[8], context[25] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[25], context[27] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_elem( res, context[22] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[10], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveOptsm_Long_Z1("ResolveOpts-Long@1", COOKIE1_, COOKIE2_, func_gen_ResolveOptsm_Long_Z1);


static refalrts::FnResult func_gen_ResolveOptsm_Short_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 68 elems
  refalrts::Iter context[68];
  refalrts::zeros( context, 68 );
  // </0 & ResolveOpts-Short@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveOpts-Short@1/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 (/13 e.new#4/11 )/14 s.new#5/15 (/18 e.new#6/16 )/19 (/22 e.new#7/20 )/23 s.new#8/24 s.new#9/25 (/28 e.new#10/26 )/29 e.new#11/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.new#4 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  // closed e.new#6 as range 16
  // closed e.new#7 as range 20
  if( ! refalrts::svar_left( context[24], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.new#10 as range 26
  // closed e.new#11 as range 2
  do {
    // </0 & ResolveOpts-Short@1/4 (/7 e.new#17/30 )/8 s.new#12/9 s.new#13/10 (/13 e.new#18/32 )/14 s.new#14/15 (/18 e.new#19/34 )/19 (/22 e.new#20/36 )/23 s.new#15/24 # Required/25 (/28 e.new#21/38 )/29 e.new#16/40 >/1
    context[30] = context[5];
    context[31] = context[6];
    context[32] = context[11];
    context[33] = context[12];
    context[34] = context[16];
    context[35] = context[17];
    context[36] = context[20];
    context[37] = context[21];
    context[38] = context[26];
    context[39] = context[27];
    context[40] = context[2];
    context[41] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Required], context[25] ) )
      continue;
    // closed e.new#17 as range 30
    // closed e.new#18 as range 32
    // closed e.new#19 as range 34
    // closed e.new#20 as range 36
    // closed e.new#21 as range 38
    // closed e.new#16 as range 40
    do {
      // </0 & ResolveOpts-Short@1/4 (/7 e.new#27/42 )/8 s.new#22/9 s.new#23/10 (/13 e.new#28/44 )/14 s.new#24/15 (/18 e.new#29/46 )/19 (/22 e.new#30/48 )/23 s.new#25/24 # Required/25 (/28 )/29 e.new#26/50 >/1
      context[42] = context[30];
      context[43] = context[31];
      context[44] = context[32];
      context[45] = context[33];
      context[46] = context[34];
      context[47] = context[35];
      context[48] = context[36];
      context[49] = context[37];
      context[50] = context[40];
      context[51] = context[41];
      if( ! refalrts::empty_seq( context[38], context[39] ) )
        continue;
      // closed e.new#27 as range 42
      // closed e.new#28 as range 44
      // closed e.new#29 as range 46
      // closed e.new#30 as range 48
      // closed e.new#26 as range 50
      do {
        // </0 & ResolveOpts-Short@1/4 (/7 e.Descrs-B#1/52 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/54 )/14 s.Short0#1/15 (/18 e.Opts-E#1/56 )/19 (/22 e.Descrs-E#1/58 )/23 s.Num0#1/24 # Required/25 (/28 )/29 (/64 # Word/66 s.WordNum#1/67 e.Param#1/62 )/65 e.ArgsTail#1/60 >/1
        context[52] = context[42];
        context[53] = context[43];
        context[54] = context[44];
        context[55] = context[45];
        context[56] = context[46];
        context[57] = context[47];
        context[58] = context[48];
        context[59] = context[49];
        context[60] = context[50];
        context[61] = context[51];
        context[62] = 0;
        context[63] = 0;
        context[64] = refalrts::brackets_left( context[62], context[63], context[60], context[61] );
        if( ! context[64] )
          continue;
        refalrts::bracket_pointers(context[64], context[65]);
        context[66] = refalrts::ident_left( identifiers[ident_Word], context[62], context[63] );
        if( ! context[66] )
          continue;
        // closed e.Descrs-B#1 as range 52
        // closed e.Opts-B#1 as range 54
        // closed e.Opts-E#1 as range 56
        // closed e.Descrs-E#1 as range 58
        // closed e.ArgsTail#1 as range 60
        if( ! refalrts::svar_left( context[67], context[62], context[63] ) )
          continue;
        // closed e.Param#1 as range 62
        //DEBUG: s.Tag0#1: 9
        //DEBUG: s.HasArg#1: 10
        //DEBUG: s.Short0#1: 15
        //DEBUG: s.Num0#1: 24
        //DEBUG: e.Descrs-B#1: 52
        //DEBUG: e.Opts-B#1: 54
        //DEBUG: e.Opts-E#1: 56
        //DEBUG: e.Descrs-E#1: 58
        //DEBUG: e.ArgsTail#1: 60
        //DEBUG: s.WordNum#1: 67
        //DEBUG: e.Param#1: 62

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 {REMOVED TILE} )/14 s.Short0#1/15 {REMOVED TILE} (/22 {REMOVED TILE} {REMOVED TILE} s.Num0#1/24 # Required/25 {REMOVED TILE} # Word/66 s.WordNum#1/67 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/28 HalfReuse: s.Tag01 #9/29 HalfReuse: s.Num01 #24/64 } Tile{ AsIs: e.Param#1/62 } Tile{ AsIs: )/23 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/52 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/54 } Tile{ HalfReuse: s.Short01 #15/18 AsIs: e.Opts-E#1/56 AsIs: )/19 } Tile{ AsIs: e.Descrs-E#1/58 } Tile{ AsIs: )/65 AsIs: e.ArgsTail#1/60 AsIs: >/1 ]] }
        refalrts::reinit_svar( context[29], context[9] );
        refalrts::reinit_svar( context[64], context[24] );
        refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_svar( context[18], context[15] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[65] );
        refalrts::link_brackets( context[8], context[19] );
        refalrts::link_brackets( context[28], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[65];
        res = refalrts::splice_evar( res, context[58], context[59] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        res = refalrts::splice_evar( res, context[0], context[10] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[62], context[63] );
        res = refalrts::splice_evar( res, context[28], context[64] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts-Short@1/4 (/7 e.Descrs-B#1/52 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/54 )/14 s.Short0#1/15 (/18 e.Opts-E#1/56 )/19 (/22 e.Descrs-E#1/58 )/23 s.Num0#1/24 # Required/25 (/28 )/29 e.ArgsTail#1/60 >/1
      context[52] = context[42];
      context[53] = context[43];
      context[54] = context[44];
      context[55] = context[45];
      context[56] = context[46];
      context[57] = context[47];
      context[58] = context[48];
      context[59] = context[49];
      context[60] = context[50];
      context[61] = context[51];
      // closed e.Descrs-B#1 as range 52
      // closed e.Opts-B#1 as range 54
      // closed e.Opts-E#1 as range 56
      // closed e.Descrs-E#1 as range 58
      // closed e.ArgsTail#1 as range 60
      //DEBUG: s.Tag0#1: 9
      //DEBUG: s.HasArg#1: 10
      //DEBUG: s.Short0#1: 15
      //DEBUG: s.Num0#1: 24
      //DEBUG: e.Descrs-B#1: 52
      //DEBUG: e.Opts-B#1: 54
      //DEBUG: e.Opts-E#1: 56
      //DEBUG: e.Descrs-E#1: 58
      //DEBUG: e.ArgsTail#1: 60

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: # Error/23 AsIs: s.Num0#1/24 Reuse: # NoRequiredParam/25 HalfReuse: '-'/28 } Tile{ AsIs: s.Short0#1/15 } Tile{ AsIs: )/14 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/52 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/54 } Tile{ HalfReuse: s.Short01 #15/18 AsIs: e.Opts-E#1/56 AsIs: )/19 } Tile{ AsIs: e.Descrs-E#1/58 } Tile{ AsIs: )/29 AsIs: e.ArgsTail#1/60 AsIs: >/1 ]] }
      refalrts::reinit_ident(context[23], identifiers[ident_Error]);
      refalrts::update_ident(context[25], identifiers[ident_NoRequiredParam]);
      refalrts::reinit_char(context[28], '-');
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_svar( context[18], context[15] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[29] );
      refalrts::link_brackets( context[8], context[19] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[29];
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_elem( res, context[15] );
      res = refalrts::splice_evar( res, context[23], context[28] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Short@1/4 (/7 e.Descrs-B#1/42 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/44 )/14 s.Short0#1/15 (/18 e.Opts-E#1/46 )/19 (/22 e.Descrs-E#1/48 )/23 s.Num0#1/24 # Required/25 (/28 e.Param#1/50 )/29 e.ArgsTail#1/52 >/1
    context[42] = context[30];
    context[43] = context[31];
    context[44] = context[32];
    context[45] = context[33];
    context[46] = context[34];
    context[47] = context[35];
    context[48] = context[36];
    context[49] = context[37];
    context[50] = context[38];
    context[51] = context[39];
    context[52] = context[40];
    context[53] = context[41];
    // closed e.Descrs-B#1 as range 42
    // closed e.Opts-B#1 as range 44
    // closed e.Opts-E#1 as range 46
    // closed e.Descrs-E#1 as range 48
    // closed e.Param#1 as range 50
    // closed e.ArgsTail#1 as range 52
    //DEBUG: s.Tag0#1: 9
    //DEBUG: s.HasArg#1: 10
    //DEBUG: s.Short0#1: 15
    //DEBUG: s.Num0#1: 24
    //DEBUG: e.Descrs-B#1: 42
    //DEBUG: e.Opts-B#1: 44
    //DEBUG: e.Opts-E#1: 46
    //DEBUG: e.Descrs-E#1: 48
    //DEBUG: e.Param#1: 50
    //DEBUG: e.ArgsTail#1: 52

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Short0#1/15 {REMOVED TILE} (/22 {REMOVED TILE} {REMOVED TILE} # Required/25 (/28 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: s.Tag01 #9/23 AsIs: s.Num0#1/24 } Tile{ AsIs: e.Param#1/50 } Tile{ AsIs: )/14 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/42 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/44 } Tile{ HalfReuse: s.Short01 #15/18 AsIs: e.Opts-E#1/46 AsIs: )/19 } Tile{ AsIs: e.Descrs-E#1/48 } Tile{ AsIs: )/29 AsIs: e.ArgsTail#1/52 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[23], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_svar( context[18], context[15] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[29] );
    refalrts::link_brackets( context[8], context[19] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[29];
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-Short@1/4 (/7 e.new#17/30 )/8 s.new#12/9 s.new#13/10 (/13 e.new#18/32 )/14 s.new#14/15 (/18 e.new#19/34 )/19 (/22 e.new#20/36 )/23 s.new#15/24 # Optional/25 (/28 e.new#21/38 )/29 e.new#16/40 >/1
    context[30] = context[5];
    context[31] = context[6];
    context[32] = context[11];
    context[33] = context[12];
    context[34] = context[16];
    context[35] = context[17];
    context[36] = context[20];
    context[37] = context[21];
    context[38] = context[26];
    context[39] = context[27];
    context[40] = context[2];
    context[41] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Optional], context[25] ) )
      continue;
    // closed e.new#17 as range 30
    // closed e.new#18 as range 32
    // closed e.new#19 as range 34
    // closed e.new#20 as range 36
    // closed e.new#21 as range 38
    // closed e.new#16 as range 40
    do {
      // </0 & ResolveOpts-Short@1/4 (/7 e.new#27/42 )/8 s.new#22/9 s.new#23/10 (/13 e.new#28/44 )/14 s.new#24/15 (/18 e.new#29/46 )/19 (/22 e.new#30/48 )/23 s.new#25/24 # Optional/25 (/28 )/29 e.new#26/50 >/1
      context[42] = context[30];
      context[43] = context[31];
      context[44] = context[32];
      context[45] = context[33];
      context[46] = context[34];
      context[47] = context[35];
      context[48] = context[36];
      context[49] = context[37];
      context[50] = context[40];
      context[51] = context[41];
      if( ! refalrts::empty_seq( context[38], context[39] ) )
        continue;
      // closed e.new#27 as range 42
      // closed e.new#28 as range 44
      // closed e.new#29 as range 46
      // closed e.new#30 as range 48
      // closed e.new#26 as range 50
      do {
        // </0 & ResolveOpts-Short@1/4 (/7 e.Descrs-B#1/52 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/54 )/14 s.Short0#1/15 (/18 e.Opts-E#1/56 )/19 (/22 e.Descrs-E#1/58 )/23 s.Num0#1/24 # Optional/25 (/28 )/29 (/64 # Word/66 s.WordNum#1/67 e.Param#1/62 )/65 e.ArgsTail#1/60 >/1
        context[52] = context[42];
        context[53] = context[43];
        context[54] = context[44];
        context[55] = context[45];
        context[56] = context[46];
        context[57] = context[47];
        context[58] = context[48];
        context[59] = context[49];
        context[60] = context[50];
        context[61] = context[51];
        context[62] = 0;
        context[63] = 0;
        context[64] = refalrts::brackets_left( context[62], context[63], context[60], context[61] );
        if( ! context[64] )
          continue;
        refalrts::bracket_pointers(context[64], context[65]);
        context[66] = refalrts::ident_left( identifiers[ident_Word], context[62], context[63] );
        if( ! context[66] )
          continue;
        // closed e.Descrs-B#1 as range 52
        // closed e.Opts-B#1 as range 54
        // closed e.Opts-E#1 as range 56
        // closed e.Descrs-E#1 as range 58
        // closed e.ArgsTail#1 as range 60
        if( ! refalrts::svar_left( context[67], context[62], context[63] ) )
          continue;
        // closed e.Param#1 as range 62
        //DEBUG: s.Tag0#1: 9
        //DEBUG: s.HasArg#1: 10
        //DEBUG: s.Short0#1: 15
        //DEBUG: s.Num0#1: 24
        //DEBUG: e.Descrs-B#1: 52
        //DEBUG: e.Opts-B#1: 54
        //DEBUG: e.Opts-E#1: 56
        //DEBUG: e.Descrs-E#1: 58
        //DEBUG: e.ArgsTail#1: 60
        //DEBUG: s.WordNum#1: 67
        //DEBUG: e.Param#1: 62

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 {REMOVED TILE} )/14 s.Short0#1/15 {REMOVED TILE} (/22 {REMOVED TILE} {REMOVED TILE} s.Num0#1/24 # Optional/25 {REMOVED TILE} # Word/66 s.WordNum#1/67 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/28 HalfReuse: s.Tag01 #9/29 HalfReuse: s.Num01 #24/64 } Tile{ AsIs: e.Param#1/62 } Tile{ AsIs: )/23 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/52 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/54 } Tile{ HalfReuse: s.Short01 #15/18 AsIs: e.Opts-E#1/56 AsIs: )/19 } Tile{ AsIs: e.Descrs-E#1/58 } Tile{ AsIs: )/65 AsIs: e.ArgsTail#1/60 AsIs: >/1 ]] }
        refalrts::reinit_svar( context[29], context[9] );
        refalrts::reinit_svar( context[64], context[24] );
        refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
        refalrts::reinit_open_bracket(context[8]);
        refalrts::reinit_svar( context[18], context[15] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[65] );
        refalrts::link_brackets( context[8], context[19] );
        refalrts::link_brackets( context[28], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[65];
        res = refalrts::splice_evar( res, context[58], context[59] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[54], context[55] );
        res = refalrts::splice_evar( res, context[0], context[10] );
        res = refalrts::splice_elem( res, context[23] );
        res = refalrts::splice_evar( res, context[62], context[63] );
        res = refalrts::splice_evar( res, context[28], context[64] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ResolveOpts-Short@1/4 (/7 e.Descrs-B#1/52 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/54 )/14 s.Short0#1/15 (/18 e.Opts-E#1/56 )/19 (/22 e.Descrs-E#1/58 )/23 s.Num0#1/24 # Optional/25 (/28 )/29 e.ArgsTail#1/60 >/1
      context[52] = context[42];
      context[53] = context[43];
      context[54] = context[44];
      context[55] = context[45];
      context[56] = context[46];
      context[57] = context[47];
      context[58] = context[48];
      context[59] = context[49];
      context[60] = context[50];
      context[61] = context[51];
      // closed e.Descrs-B#1 as range 52
      // closed e.Opts-B#1 as range 54
      // closed e.Opts-E#1 as range 56
      // closed e.Descrs-E#1 as range 58
      // closed e.ArgsTail#1 as range 60
      //DEBUG: s.Tag0#1: 9
      //DEBUG: s.HasArg#1: 10
      //DEBUG: s.Short0#1: 15
      //DEBUG: s.Num0#1: 24
      //DEBUG: e.Descrs-B#1: 52
      //DEBUG: e.Opts-B#1: 54
      //DEBUG: e.Opts-E#1: 56
      //DEBUG: e.Descrs-E#1: 58
      //DEBUG: e.ArgsTail#1: 60

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/14 s.Short0#1/15 {REMOVED TILE} (/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: s.Tag01 #9/23 AsIs: s.Num0#1/24 Reuse: # NoParam/25 HalfReuse: )/28 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/52 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/54 } Tile{ HalfReuse: s.Short01 #15/18 AsIs: e.Opts-E#1/56 AsIs: )/19 } Tile{ AsIs: e.Descrs-E#1/58 } Tile{ AsIs: )/29 AsIs: e.ArgsTail#1/60 AsIs: >/1 ]] }
      refalrts::reinit_svar( context[23], context[9] );
      refalrts::update_ident(context[25], identifiers[ident_NoParam]);
      refalrts::reinit_close_bracket(context[28]);
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_svar( context[18], context[15] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[29] );
      refalrts::link_brackets( context[8], context[19] );
      refalrts::link_brackets( context[13], context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[29];
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[23], context[28] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Short@1/4 (/7 e.Descrs-B#1/42 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/44 )/14 s.Short0#1/15 (/18 e.Opts-E#1/46 )/19 (/22 e.Descrs-E#1/48 )/23 s.Num0#1/24 # Optional/25 (/28 e.Param#1/50 )/29 e.ArgsTail#1/52 >/1
    context[42] = context[30];
    context[43] = context[31];
    context[44] = context[32];
    context[45] = context[33];
    context[46] = context[34];
    context[47] = context[35];
    context[48] = context[36];
    context[49] = context[37];
    context[50] = context[38];
    context[51] = context[39];
    context[52] = context[40];
    context[53] = context[41];
    // closed e.Descrs-B#1 as range 42
    // closed e.Opts-B#1 as range 44
    // closed e.Opts-E#1 as range 46
    // closed e.Descrs-E#1 as range 48
    // closed e.Param#1 as range 50
    // closed e.ArgsTail#1 as range 52
    //DEBUG: s.Tag0#1: 9
    //DEBUG: s.HasArg#1: 10
    //DEBUG: s.Short0#1: 15
    //DEBUG: s.Num0#1: 24
    //DEBUG: e.Descrs-B#1: 42
    //DEBUG: e.Opts-B#1: 44
    //DEBUG: e.Opts-E#1: 46
    //DEBUG: e.Descrs-E#1: 48
    //DEBUG: e.Param#1: 50
    //DEBUG: e.ArgsTail#1: 52

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Short0#1/15 {REMOVED TILE} (/22 {REMOVED TILE} {REMOVED TILE} # Optional/25 (/28 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: s.Tag01 #9/23 AsIs: s.Num0#1/24 } Tile{ AsIs: e.Param#1/50 } Tile{ AsIs: )/14 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/42 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/44 } Tile{ HalfReuse: s.Short01 #15/18 AsIs: e.Opts-E#1/46 AsIs: )/19 } Tile{ AsIs: e.Descrs-E#1/48 } Tile{ AsIs: )/29 AsIs: e.ArgsTail#1/52 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[23], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_svar( context[18], context[15] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[29] );
    refalrts::link_brackets( context[8], context[19] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[29];
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ResolveOpts-Short@1/4 (/7 e.new#17/30 )/8 s.new#12/9 s.new#13/10 (/13 e.new#18/32 )/14 s.new#14/15 (/18 e.new#19/34 )/19 (/22 e.new#20/36 )/23 s.new#15/24 # None/25 (/28 e.new#21/38 )/29 e.new#16/40 >/1
    context[30] = context[5];
    context[31] = context[6];
    context[32] = context[11];
    context[33] = context[12];
    context[34] = context[16];
    context[35] = context[17];
    context[36] = context[20];
    context[37] = context[21];
    context[38] = context[26];
    context[39] = context[27];
    context[40] = context[2];
    context[41] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_None], context[25] ) )
      continue;
    // closed e.new#17 as range 30
    // closed e.new#18 as range 32
    // closed e.new#19 as range 34
    // closed e.new#20 as range 36
    // closed e.new#21 as range 38
    // closed e.new#16 as range 40
    do {
      // </0 & ResolveOpts-Short@1/4 (/7 e.Descrs-B#1/42 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/44 )/14 s.Short0#1/15 (/18 e.Opts-E#1/46 )/19 (/22 e.Descrs-E#1/48 )/23 s.Num0#1/24 # None/25 (/28 )/29 e.ArgsTail#1/50 >/1
      context[42] = context[30];
      context[43] = context[31];
      context[44] = context[32];
      context[45] = context[33];
      context[46] = context[34];
      context[47] = context[35];
      context[48] = context[36];
      context[49] = context[37];
      context[50] = context[40];
      context[51] = context[41];
      if( ! refalrts::empty_seq( context[38], context[39] ) )
        continue;
      // closed e.Descrs-B#1 as range 42
      // closed e.Opts-B#1 as range 44
      // closed e.Opts-E#1 as range 46
      // closed e.Descrs-E#1 as range 48
      // closed e.ArgsTail#1 as range 50
      //DEBUG: s.Tag0#1: 9
      //DEBUG: s.HasArg#1: 10
      //DEBUG: s.Short0#1: 15
      //DEBUG: s.Num0#1: 24
      //DEBUG: e.Descrs-B#1: 42
      //DEBUG: e.Opts-B#1: 44
      //DEBUG: e.Opts-E#1: 46
      //DEBUG: e.Descrs-E#1: 48
      //DEBUG: e.ArgsTail#1: 50

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/14 s.Short0#1/15 {REMOVED TILE} (/22 {REMOVED TILE} {REMOVED TILE} (/28 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: s.Tag01 #9/23 AsIs: s.Num0#1/24 HalfReuse: )/25 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/42 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/44 } Tile{ HalfReuse: s.Short01 #15/18 AsIs: e.Opts-E#1/46 AsIs: )/19 } Tile{ AsIs: e.Descrs-E#1/48 } Tile{ AsIs: )/29 AsIs: e.ArgsTail#1/50 AsIs: >/1 ]] }
      refalrts::reinit_svar( context[23], context[9] );
      refalrts::reinit_close_bracket(context[25]);
      refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_svar( context[18], context[15] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[29] );
      refalrts::link_brackets( context[8], context[19] );
      refalrts::link_brackets( context[13], context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[29];
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      res = refalrts::splice_evar( res, context[0], context[10] );
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_elem( res, context[13] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ResolveOpts-Short@1/4 (/7 e.Descrs-B#1/42 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/44 )/14 s.Short0#1/15 (/18 e.Opts-E#1/46 )/19 (/22 e.Descrs-E#1/48 )/23 s.Num0#1/24 # None/25 (/28 e.OptTail#1/50 )/29 e.ArgsTail#1/52 >/1
    context[42] = context[30];
    context[43] = context[31];
    context[44] = context[32];
    context[45] = context[33];
    context[46] = context[34];
    context[47] = context[35];
    context[48] = context[36];
    context[49] = context[37];
    context[50] = context[38];
    context[51] = context[39];
    context[52] = context[40];
    context[53] = context[41];
    // closed e.Descrs-B#1 as range 42
    // closed e.Opts-B#1 as range 44
    // closed e.Opts-E#1 as range 46
    // closed e.Descrs-E#1 as range 48
    // closed e.OptTail#1 as range 50
    // closed e.ArgsTail#1 as range 52
    //DEBUG: s.Tag0#1: 9
    //DEBUG: s.HasArg#1: 10
    //DEBUG: s.Short0#1: 15
    //DEBUG: s.Num0#1: 24
    //DEBUG: e.Descrs-B#1: 42
    //DEBUG: e.Opts-B#1: 44
    //DEBUG: e.Opts-E#1: 46
    //DEBUG: e.Descrs-E#1: 48
    //DEBUG: e.OptTail#1: 50
    //DEBUG: e.ArgsTail#1: 52

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Short0#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/13 } Tile{ HalfReuse: s.Tag01 #9/23 AsIs: s.Num0#1/24 } Tile{ AsIs: )/14 } Tile{ AsIs: </0 Reuse: & ResolveOpts/4 AsIs: (/7 AsIs: e.Descrs-B#1/42 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/44 } Tile{ HalfReuse: s.Short01 #15/18 AsIs: e.Opts-E#1/46 AsIs: )/19 } Tile{ AsIs: e.Descrs-E#1/48 } )/54 Tile{ AsIs: (/22 } Tile{ Reuse: # Short/25 HalfReuse: s.Num01 #24/28 AsIs: e.OptTail#1/50 AsIs: )/29 AsIs: e.ArgsTail#1/52 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[54]);
    refalrts::reinit_svar( context[23], context[9] );
    refalrts::update_name(context[4], functions[efunc_ResolveOpts]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_svar( context[18], context[15] );
    refalrts::update_ident(context[25], identifiers[ident_Short]);
    refalrts::reinit_svar( context[28], context[24] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[22], context[29] );
    refalrts::link_brackets( context[7], context[54] );
    refalrts::link_brackets( context[8], context[19] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[25];
    res = refalrts::splice_elem( res, context[22] );
    res = refalrts::splice_elem( res, context[54] );
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_elem( res, context[14] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[13] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveOpts-Short@1/4 (/7 e.Descrs-B#1/5 )/8 s.Tag0#1/9 s.HasArg#1/10 (/13 e.Opts-B#1/11 )/14 s.Short0#1/15 (/18 e.Opts-E#1/16 )/19 (/22 e.Descrs-E#1/20 )/23 s.Num0#1/24 s.dyn#2/25 (/28 e.dyn#1/26 )/29 e.dyn#2/2 >/1
  // closed e.Descrs-B#1 as range 5
  // closed e.Opts-B#1 as range 11
  // closed e.Opts-E#1 as range 16
  // closed e.Descrs-E#1 as range 20
  // closed e.dyn#1 as range 26
  // closed e.dyn#2 as range 2
  //DEBUG: s.Tag0#1: 9
  //DEBUG: s.HasArg#1: 10
  //DEBUG: s.Short0#1: 15
  //DEBUG: s.Num0#1: 24
  //DEBUG: s.dyn#2: 25
  //DEBUG: e.Descrs-B#1: 5
  //DEBUG: e.Opts-B#1: 11
  //DEBUG: e.Opts-E#1: 16
  //DEBUG: e.Descrs-E#1: 20
  //DEBUG: e.dyn#1: 26
  //DEBUG: e.dyn#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.dyn#2/25 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ResolveOpts-Short@0/4 AsIs: (/7 AsIs: e.Descrs-B#1/5 HalfReuse: (/8 AsIs: s.Tag0#1/9 AsIs: s.HasArg#1/10 } Tile{ AsIs: e.Opts-B#1/11 } Tile{ HalfReuse: s.Short01 #15/18 } Tile{ AsIs: e.Opts-E#1/16 } Tile{ HalfReuse: )/22 AsIs: e.Descrs-E#1/20 AsIs: )/23 AsIs: s.Num0#1/24 } Tile{ HalfReuse: s.Tag01 #9/19 } Tile{ HalfReuse: s.dyn2 #25/14 AsIs: s.Short0#1/15 } Tile{ AsIs: (/28 AsIs: e.dyn#1/26 AsIs: )/29 AsIs: e.dyn#2/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_ResolveOptsm_Short_Z0]);
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_svar( context[18], context[15] );
  refalrts::reinit_close_bracket(context[22]);
  refalrts::reinit_svar( context[19], context[9] );
  refalrts::reinit_svar( context[14], context[25] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[7], context[23] );
  refalrts::link_brackets( context[8], context[22] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[28];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, context[10], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveOptsm_Short_Z1("ResolveOpts-Short@1", COOKIE1_, COOKIE2_, func_gen_ResolveOptsm_Short_Z1);


static refalrts::FnResult func_gen_DoFoldErrors_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DoFoldErrors@1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & DoFoldErrors@1/4 e.Options#1/7 (/13 # Error/15 s.Num#1/16 s.ErrorCode#1/17 e.Info#1/11 )/14 e.OptionsAndErrors#1/9 >/1
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
      context[15] = refalrts::ident_left( identifiers[ident_Error], context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.OptionsAndErrors#1 as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[17], context[11], context[12] ) )
        continue;
      // closed e.Info#1 as range 11
      //DEBUG: e.Options#1: 7
      //DEBUG: e.OptionsAndErrors#1: 9
      //DEBUG: s.Num#1: 16
      //DEBUG: s.ErrorCode#1: 17
      //DEBUG: e.Info#1: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoFoldErrors/4 } Tile{ AsIs: (/13 HalfReuse: (/15 AsIs: s.Num#1/16 AsIs: s.ErrorCode#1/17 AsIs: e.Info#1/11 AsIs: )/14 } )/18 Tile{ AsIs: e.Options#1/7 } Tile{ AsIs: e.OptionsAndErrors#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[18]);
      refalrts::update_name(context[4], functions[efunc_DoFoldErrors]);
      refalrts::reinit_open_bracket(context[15]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[18] );
      refalrts::link_brackets( context[15], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoFoldErrors@1/4 e.Options#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    // closed e.Options#1 as range 5
    //DEBUG: e.Options#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 } Tile{ AsIs: e.Options#1/5 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoFoldErrors@1/4 e.dyn#1/2 >/1
  // closed e.dyn#1 as range 2
  //DEBUG: e.dyn#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoFoldErrors@0/6 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.dyn#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_DoFoldErrors_Z0]);
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

static refalrts::NativeReference nat_ref_gen_DoFoldErrors_Z1("DoFoldErrors@1", COOKIE1_, COOKIE2_, func_gen_DoFoldErrors_Z1);


static refalrts::FnResult func_gen_MarkupArguments_Z1D1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & MarkupArguments@1*1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & MarkupArguments@1*1/4 (/9 e.new#1/7 )/10 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.new#1 as range 7
    // closed e.new#2 as range 5
    do {
      // </0 & MarkupArguments@1*1/4 (/9 '-'/15 s.new#4/16 e.new#5/11 )/10 e.new#3/13 >/1
      context[11] = context[7];
      context[12] = context[8];
      context[13] = context[5];
      context[14] = context[6];
      context[15] = refalrts::char_left( '-', context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.new#3 as range 13
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      // closed e.new#5 as range 11
      do {
        // </0 & MarkupArguments@1*1/4 (/9 '-'/15 '-'/16 e.new#7/17 )/10 e.new#6/19 >/1
        context[17] = context[11];
        context[18] = context[12];
        context[19] = context[13];
        context[20] = context[14];
        if( ! refalrts::char_term( '-', context[16] ) )
          continue;
        // closed e.new#7 as range 17
        // closed e.new#6 as range 19
        do {
          // </0 & MarkupArguments@1*1/4 (/9 '-'/15 '-'/16 e.Arg#1/25 '='/29 e.Param#1/27 )/10 e.Tail#1/23 >/1
          context[21] = context[17];
          context[22] = context[18];
          context[23] = context[19];
          context[24] = context[20];
          // closed e.Tail#1 as range 23
          context[25] = 0;
          context[26] = 0;
          refalrts::start_e_loop(vm);
          do {
            context[27] = context[21];
            context[28] = context[22];
            context[29] = refalrts::char_left( '=', context[27], context[28] );
            if( ! context[29] )
              continue;
            // closed e.Param#1 as range 27
            //DEBUG: e.Tail#1: 23
            //DEBUG: e.Arg#1: 25
            //DEBUG: e.Param#1: 27

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Long-Param/9 HalfReuse: 1/15 HalfReuse: (/16 AsIs: e.Arg#1/25 HalfReuse: )/29 AsIs: e.Param#1/27 AsIs: )/10 } Tile{ AsIs: </0 } & MarkupArguments/30 2/31 Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
            refalrts::alloc_name(vm, context[30], functions[efunc_MarkupArguments]);
            refalrts::alloc_number(vm, context[31], 2UL);
            refalrts::reinit_open_bracket(context[4]);
            refalrts::reinit_ident(context[9], identifiers[ident_Longm_Param]);
            refalrts::reinit_number(context[15], 1UL);
            refalrts::reinit_open_bracket(context[16]);
            refalrts::reinit_close_bracket(context[29]);
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[4], context[10] );
            refalrts::link_brackets( context[16], context[29] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[1];
            res = refalrts::splice_evar( res, context[23], context[24] );
            res = refalrts::splice_evar( res, context[30], context[31] );
            res = refalrts::splice_elem( res, context[0] );
            res = refalrts::splice_evar( res, context[4], context[10] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( refalrts::open_evar_advance( context[25], context[26], context[21], context[22] ) );
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & MarkupArguments@1*1/4 (/9 '-'/15 '-'/16 e.Arg#1/21 )/10 e.Tail#1/23 >/1
        context[21] = context[17];
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[20];
        // closed e.Arg#1 as range 21
        // closed e.Tail#1 as range 23
        //DEBUG: e.Arg#1: 21
        //DEBUG: e.Tail#1: 23

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/9 HalfReuse: # Long/15 HalfReuse: 1/16 AsIs: e.Arg#1/21 AsIs: )/10 } Tile{ AsIs: </0 Reuse: & MarkupArguments/4 } 2/25 Tile{ AsIs: e.Tail#1/23 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_number(vm, context[25], 2UL);
        refalrts::reinit_ident(context[15], identifiers[ident_Long]);
        refalrts::reinit_number(context[16], 1UL);
        refalrts::update_name(context[4], functions[efunc_MarkupArguments]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[9], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_elem( res, context[25] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & MarkupArguments@1*1/4 (/9 '-'/15 s.Init#1/16 e.Arg#1/17 )/10 e.Tail#1/19 >/1
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = context[14];
      // closed e.Arg#1 as range 17
      // closed e.Tail#1 as range 19
      //DEBUG: s.Init#1: 16
      //DEBUG: e.Arg#1: 17
      //DEBUG: e.Tail#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Short/9 HalfReuse: 1/15 AsIs: s.Init#1/16 AsIs: e.Arg#1/17 AsIs: )/10 } Tile{ AsIs: </0 } & MarkupArguments/21 2/22 Tile{ AsIs: e.Tail#1/19 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[21], functions[efunc_MarkupArguments]);
      refalrts::alloc_number(vm, context[22], 2UL);
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[9], identifiers[ident_Short]);
      refalrts::reinit_number(context[15], 1UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[4], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_elem( res, context[0] );
      res = refalrts::splice_evar( res, context[4], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MarkupArguments@1*1/4 (/9 e.Arg#1/11 )/10 e.Tail#1/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[5];
    context[14] = context[6];
    // closed e.Arg#1 as range 11
    // closed e.Tail#1 as range 13
    //DEBUG: e.Arg#1: 11
    //DEBUG: e.Tail#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Word/4 HalfReuse: 1/9 AsIs: e.Arg#1/11 AsIs: )/10 } </15 & MarkupArguments/16 2/17 Tile{ AsIs: e.Tail#1/13 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_MarkupArguments]);
    refalrts::alloc_number(vm, context[17], 2UL);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Word]);
    refalrts::reinit_number(context[9], 1UL);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & MarkupArguments@1*1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & MarkupArguments@1*1/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MarkupArguments@1*1/4 e.dyn#0/2 >/1
  // closed e.dyn#0 as range 2
  //DEBUG: e.dyn#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & MarkupArguments@0/0 HalfReuse: 1/4 AsIs: e.dyn#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MarkupArguments_Z0]);
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

static refalrts::NativeReference nat_ref_gen_MarkupArguments_Z1D1("MarkupArguments@1*1", COOKIE1_, COOKIE2_, func_gen_MarkupArguments_Z1D1);


//End of file
