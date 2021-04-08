// This file automatically generated from 'HighLevelRASL-GenSubst-Save.ref'
// Don't edit! Edit 'HighLevelRASL-GenSubst-Save.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_518600154_1351435288
#define COOKIE1_ 518600154U
#define COOKIE2_ 1351435288U

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
  efunc_DoGenSubst = 18,
  efunc_Inc2 = 19,
  efunc_IncVarOffsetm_Saved = 20,
  efunc_gen_MakeRepeatedSave_Z1 = 21,
  efunc_gen_MakeRepeatedSave_Z2 = 22,
  efunc_PrintVar = 23,
  efunc_gen_DoGenSubst_S36A3Z1 = 24,
  efunc_MakeSavers = 25,
  efunc_TextFromExpr = 26,
  efunc_Mu = 27,
  efunc_Up = 28,
  efunc_Evm_met = 29,
  efunc_Residue = 30,
  efunc_u_u_Metau_Residue = 31,
  efunc_MapAccum = 32,
  efunc_UnBracket = 33,
  efunc_DelAccumulator = 34,
  efunc_Inc = 35,
  efunc_Dec = 36,
  efunc_GenSubstm_Save = 37,
  efunc_MakeRepeatedSave = 38,
  efunc_gen_Apply_Z4 = 39,
  efunc_gen_DoGenSubst_Z2 = 40,
  efunc_gen_DoGenSubst_S36A3Z0 = 41,
  efunc_gen_MakeRepeatedSave_Z0 = 42,
  efunc_gen_DoGenSubst_S36A3Z3 = 43,
  efunc_gen_DoGenSubst_Z0 = 44,
};


enum ident {
  ident_Junk = 0,
  ident_T = 1,
  ident_Symbol = 2,
  ident_Char = 3,
  ident_CmdChar = 4,
  ident_AlgTerm = 5,
  ident_Name = 6,
  ident_CmdName = 7,
  ident_Identifier = 8,
  ident_CmdIdent = 9,
  ident_Number = 10,
  ident_CmdNumber = 11,
  ident_Brackets = 12,
  ident_TkCloseBracket = 13,
  ident_TkOpenBracket = 14,
  ident_E = 15,
  ident_CmdBrackets = 16,
  ident_ADTm_Brackets = 17,
  ident_TkCloseADT = 18,
  ident_TkOpenADT = 19,
  ident_CmdADTSave = 20,
  ident_Var = 21,
  ident_CmdRepeated = 22,
  ident_CmdVar = 23,
  ident_S = 24,
  ident_CmdCharSave = 25,
  ident_AlgLeft = 26,
  ident_CmdNumberSave = 27,
  ident_CmdNameSave = 28,
  ident_CmdIdentSave = 29,
  ident_AlgRight = 30,
  ident_CmdBracketsSave = 31,
  ident_CmdEmpty = 32,
  ident_CmdComment = 33,
  ident_Offset = 34,
  ident_CmdVarSave = 35,
  ident_CmdRepeatedTVarSave = 36,
  ident_Mu = 37,
  ident_Up = 38,
  ident_Evm_met = 39,
  ident_Residue = 40,
  ident_u_u_Metau_Residue = 41,
  ident_Apply = 42,
  ident_Map = 43,
  ident_Reduce = 44,
  ident_Fetch = 45,
  ident_MapAccum = 46,
  ident_DoMapAccum = 47,
  ident_UnBracket = 48,
  ident_DelAccumulator = 49,
  ident_Inc = 50,
  ident_Dec = 51,
  ident_Pipe = 52,
  ident_GenSubstm_Save = 53,
  ident_DoGenSubst = 54,
  ident_IncVarOffsetm_Saved = 55,
  ident_MakeRepeatedSave = 56,
  ident_CmdOpenedE = 57,
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


static refalrts::FnResult func_GenSubstm_Save(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & GenSubst-Save/4 s.ContextTop/13 e.Substitutes/2 (/11 e.Vars/9 )/12 (/7 e.PrefixCommands/5 )/8 >/1
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
  // closed e.Vars as range 9
  // closed e.PrefixCommands as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Substitutes as range 2
  //DEBUG: e.Vars: 9
  //DEBUG: e.PrefixCommands: 5
  //DEBUG: s.ContextTop: 13
  //DEBUG: e.Substitutes: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 AsIs: s.ContextTop/13 AsIs: e.Substitutes/2 AsIs: (/11 AsIs: e.Vars/9 AsIs: )/12 AsIs: (/7 AsIs: e.PrefixCommands/5 AsIs: )/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenSubstm_Save("GenSubst-Save", 0U, 0U, func_GenSubstm_Save);


static refalrts::FnResult func_DoGenSubst(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 83 elems
  refalrts::Iter context[83];
  refalrts::zeros( context, 83 );
  // </0 & DoGenSubst/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoGenSubst/4 s.new1/13 e.new2/2 (/11 e.new3/9 )/12 (/7 e.new4/5 )/8 >/1
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
  // closed e.new3 as range 9
  // closed e.new4 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # T/33 s.Num/45 (/41 # Symbol/43 # Char/44 s.Char/46 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk1 as range 24
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::svar_left( context[46], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45
      //DEBUG: s.Char: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Char/46 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 } Tile{ HalfReuse: # Char/42 HalfReuse: s.Char46 /32 HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/33 AsIs: s.Num/45 HalfReuse: s.Char46 /41 HalfReuse: )/43 HalfReuse: )/44 } >/47 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[42], identifiers[ident_Char]);
      refalrts::reinit_svar( context[32], context[46] );
      refalrts::reinit_svar( context[36], context[45] );
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
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_evar( res, context[33], context[44] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      refalrts::splice_to_freelist_open( vm, context[31], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # T/33 s.Num/45 (/41 # Symbol/43 # Name/44 e.Name/39 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk1 as range 24
      // closed e.Name as range 39
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Name: 39
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Name/33 } e.Name/39/46 Tile{ HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ Reuse: # AlgTerm/43 HalfReuse: s.Num45 /44 AsIs: e.Name/39 AsIs: )/42 AsIs: )/32 } Tile{ HalfReuse: >/41 } Tile{ ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Name]);
      refalrts::reinit_svar( context[36], context[45] );
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
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[43], context[32] );
      res = refalrts::splice_evar( res, context[36], context[1] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # T/33 s.Num/45 (/41 # Symbol/43 # Identifier/44 e.Ident/39 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk1 as range 24
      // closed e.Ident as range 39
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Ident: 39
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Identifier/33 } e.Ident/39/46 Tile{ HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ Reuse: # AlgTerm/43 HalfReuse: s.Num45 /44 AsIs: e.Ident/39 AsIs: )/42 AsIs: )/32 } Tile{ HalfReuse: >/41 } Tile{ ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Identifier]);
      refalrts::reinit_svar( context[36], context[45] );
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
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[43], context[32] );
      res = refalrts::splice_evar( res, context[36], context[1] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # T/33 s.Num/45 (/41 # Symbol/43 # Number/44 s.Value/46 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk1 as range 24
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::svar_left( context[46], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45
      //DEBUG: s.Value: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Value/46 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 } Tile{ HalfReuse: # Number/42 HalfReuse: s.Value46 /32 HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/33 AsIs: s.Num/45 HalfReuse: s.Value46 /41 HalfReuse: )/43 HalfReuse: )/44 } >/47 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[42], identifiers[ident_Number]);
      refalrts::reinit_svar( context[32], context[46] );
      refalrts::reinit_svar( context[36], context[45] );
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
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_evar( res, context[33], context[44] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      refalrts::splice_to_freelist_open( vm, context[31], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # T/33 s.Num/44 (/41 # Brackets/43 e.SubRange/39 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk1 as range 24
      // closed e.SubRange as range 39
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[44], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.SubRange: 39
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 44

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </45 & Inc2/46 Tile{ AsIs: s.ContextOffset/13 } >/47 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # TkOpenBracket/31 HalfReuse: s.Num44 /33 } )/48 )/49 Tile{ AsIs: (/41 Reuse: # E/43 } s.ContextOffset/13/50 Tile{ AsIs: e.SubRange/39 } )/51 (/52 # Junk/53 (/54 # TkCloseBracket/55 </56 & Add/57 Tile{ HalfReuse: 1/42 HalfReuse: s.Num44 /32 HalfReuse: >/36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdBrackets/1 } # AlgTerm/58 Tile{ AsIs: s.Num/44 } s.ContextOffset/13/59 )/60 )/61 >/62 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[45]);
      refalrts::alloc_name(vm, context[46], functions[efunc_Inc2]);
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::copy_stvar(vm, context[50], context[13]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_TkCloseBracket]);
      refalrts::alloc_open_call(vm, context[56]);
      refalrts::alloc_name(vm, context[57], functions[efunc_Add]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_AlgTerm]);
      refalrts::copy_stvar(vm, context[59], context[13]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_close_bracket(vm, context[61]);
      refalrts::alloc_close_call(vm, context[62]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkOpenBracket]);
      refalrts::reinit_svar( context[33], context[44] );
      refalrts::update_ident(context[43], identifiers[ident_E]);
      refalrts::reinit_number(context[42], 1UL);
      refalrts::reinit_svar( context[32], context[44] );
      refalrts::reinit_close_call(context[36]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdBrackets]);
      refalrts::push_stack( vm, context[62] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[61] );
      refalrts::link_brackets( context[8], context[60] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[52], context[37] );
      refalrts::link_brackets( context[54], context[38] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[56] );
      refalrts::link_brackets( context[41], context[51] );
      refalrts::link_brackets( context[26], context[49] );
      refalrts::link_brackets( context[27], context[48] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[45] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[59], context[62] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_elem( res, context[58] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      res = refalrts::splice_evar( res, context[51], context[57] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # T/33 s.Num/48 (/41 # ADT-Brackets/43 (/46 e.Name/44 )/47 e.SubRange/39 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk1 as range 24
      // closed e.Name as range 44
      // closed e.SubRange as range 39
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[48], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Name: 44
      //DEBUG: e.SubRange: 39
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 48

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </49 & Add/50 Tile{ AsIs: s.ContextOffset/13 } 3/51 >/52 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # TkOpenADT/31 HalfReuse: s.Num48 /33 } )/53 Tile{ AsIs: (/41 Reuse: # Symbol/43 HalfReuse: # Name/46 AsIs: e.Name/44 HalfReuse: </47 } & Add/54 s.ContextOffset/13/55 2/56 >/57 )/58 )/59 (/60 # E/61 s.ContextOffset/13/62 Tile{ AsIs: e.SubRange/39 } )/63 (/64 # Junk/65 (/66 # TkCloseADT/67 </68 & Add/69 Tile{ HalfReuse: 1/42 HalfReuse: s.Num48 /32 HalfReuse: >/36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdADTSave/1 } # AlgTerm/70 Tile{ AsIs: s.Num/48 } s.ContextOffset/13/71 e.Name/44/72 )/74 )/75 >/76 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[51], 3UL);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_name(vm, context[54], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[55], context[13]);
      refalrts::alloc_number(vm, context[56], 2UL);
      refalrts::alloc_close_call(vm, context[57]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_open_bracket(vm, context[60]);
      refalrts::alloc_ident(vm, context[61], identifiers[ident_E]);
      refalrts::copy_stvar(vm, context[62], context[13]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::alloc_open_bracket(vm, context[64]);
      refalrts::alloc_ident(vm, context[65], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[66]);
      refalrts::alloc_ident(vm, context[67], identifiers[ident_TkCloseADT]);
      refalrts::alloc_open_call(vm, context[68]);
      refalrts::alloc_name(vm, context[69], functions[efunc_Add]);
      refalrts::alloc_ident(vm, context[70], identifiers[ident_AlgTerm]);
      refalrts::copy_stvar(vm, context[71], context[13]);
      refalrts::copy_evar(vm, context[72], context[73], context[44], context[45]);
      refalrts::alloc_close_bracket(vm, context[74]);
      refalrts::alloc_close_bracket(vm, context[75]);
      refalrts::alloc_close_call(vm, context[76]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkOpenADT]);
      refalrts::reinit_svar( context[33], context[48] );
      refalrts::update_ident(context[43], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[46], identifiers[ident_Name]);
      refalrts::reinit_open_call(context[47]);
      refalrts::reinit_number(context[42], 1UL);
      refalrts::reinit_svar( context[32], context[48] );
      refalrts::reinit_close_call(context[36]);
      refalrts::reinit_close_bracket(context[38]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdADTSave]);
      refalrts::push_stack( vm, context[76] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[75] );
      refalrts::link_brackets( context[8], context[74] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[64], context[37] );
      refalrts::link_brackets( context[66], context[38] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[68] );
      refalrts::link_brackets( context[60], context[63] );
      refalrts::link_brackets( context[26], context[59] );
      refalrts::link_brackets( context[41], context[58] );
      refalrts::push_stack( vm, context[57] );
      refalrts::push_stack( vm, context[47] );
      refalrts::link_brackets( context[27], context[53] );
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[49] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[71], context[76] );
      res = refalrts::splice_elem( res, context[48] );
      res = refalrts::splice_elem( res, context[70] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      res = refalrts::splice_evar( res, context[63], context[69] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[54], context[62] );
      res = refalrts::splice_evar( res, context[41], context[47] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/28 # Junk/30 e.Junk1/26 )/29 (/33 # T/35 s.Num/46 (/43 # Var/45 s.Mode/47 e.Index/41 )/44 )/34 (/38 # Junk/40 e.Junk2/36 )/39 e.Substs-E/22 (/11 e.Vars-B/48 (/54 s.Mode/56 (/59 e.Index/61 )/60 e.Offsets/52 s.SampleOffset/63 )/55 e.Vars-E/50 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Commands as range 18
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
      context[45] = refalrts::ident_left( identifiers[ident_Var], context[41], context[42] );
      if( ! context[45] )
        continue;
      // closed e.Junk1 as range 26
      // closed e.Junk2 as range 36
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[46], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      if( ! refalrts::svar_left( context[47], context[41], context[42] ) )
        continue;
      // closed e.Index as range 41
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
        // closed e.Vars-E as range 50
        if( ! refalrts::svar_right( context[63], context[52], context[53] ) )
          continue;
        // closed e.Offsets as range 52
        //DEBUG: s.ContextOffset: 13
        //DEBUG: e.Commands: 18
        //DEBUG: e.Substs-B: 20
        //DEBUG: e.Junk1: 26
        //DEBUG: e.Junk2: 36
        //DEBUG: e.Substs-E: 22
        //DEBUG: s.Num: 46
        //DEBUG: s.Mode: 47
        //DEBUG: e.Index: 41
        //DEBUG: e.Vars-B: 48
        //DEBUG: e.Vars-E: 50
        //DEBUG: s.SampleOffset: 63
        //DEBUG: e.Offsets: 52

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/28 AsIs: # Junk/30 AsIs: e.Junk1/26 HalfReuse: (/29 HalfReuse: # Var/33 HalfReuse: s.Mode56 /35 } Tile{ AsIs: e.Index/41 } Tile{ HalfReuse: s.Num46 /38 HalfReuse: )/40 AsIs: e.Junk2/36 AsIs: )/39 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars-B/48 AsIs: (/54 AsIs: s.Mode/56 AsIs: (/59 AsIs: e.Index/61 AsIs: )/60 AsIs: e.Offsets/52 AsIs: s.SampleOffset/63 HalfReuse: s.Num46 /55 } )/64 Tile{ AsIs: e.Vars-E/50 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } Tile{ HalfReuse: # AlgTerm/43 HalfReuse: s.Num46 /45 AsIs: s.Mode/47 } Tile{ AsIs: s.Num/46 } s.SampleOffset/63/65 Tile{ AsIs: )/44 AsIs: )/34 } >/66 Tile{ ]] }
        refalrts::alloc_close_bracket(vm, context[64]);
        refalrts::copy_stvar(vm, context[65], context[63]);
        refalrts::alloc_close_call(vm, context[66]);
        refalrts::reinit_open_bracket(context[29]);
        refalrts::reinit_ident(context[33], identifiers[ident_Var]);
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
        res = refalrts::splice_elem( res, context[66] );
        res = refalrts::splice_evar( res, context[44], context[34] );
        res = refalrts::splice_elem( res, context[65] );
        res = refalrts::splice_elem( res, context[46] );
        res = refalrts::splice_evar( res, context[43], context[47] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_elem( res, context[64] );
        res = refalrts::splice_evar( res, context[38], context[55] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[48], context[49], context[24], context[25] ) );
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # T/33 s.Num/45 (/41 # Var/43 't'/44 e.Index/39 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      context[43] = refalrts::ident_left( identifiers[ident_Var], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::char_left( 't', context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1 as range 24
      // closed e.Index as range 39
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Index: 39
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Var/31 HalfReuse: 't'/33 } e.Index/39/46 Tile{ HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 HalfReuse: (/12 HalfReuse: 't'/7 } Tile{ HalfReuse: (/44 AsIs: e.Index/39 AsIs: )/42 HalfReuse: s.Num45 /32 } Tile{ HalfReuse: )/43 } )/48 Tile{ AsIs: (/41 } Tile{ AsIs: e.Commands/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Var]);
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
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_elem( res, context[48] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_evar( res, context[44], context[32] );
      res = refalrts::splice_evar( res, context[36], context[7] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # T/33 s.Num/45 (/41 # Var/43 's'/44 e.Index/39 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      context[43] = refalrts::ident_left( identifiers[ident_Var], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::char_left( 's', context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1 as range 24
      // closed e.Index as range 39
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Index: 39
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Var/31 HalfReuse: 's'/33 } e.Index/39/46 Tile{ HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/44 AsIs: e.Index/39 AsIs: )/42 HalfReuse: s.Num45 /32 } )/48 )/49 (/50 Tile{ AsIs: e.Commands/18 } Tile{ AsIs: (/41 Reuse: # CmdVar/43 } # AlgTerm/51 Tile{ AsIs: s.Num/45 } 's'/52 s.Num/45/53 )/54 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_ident(vm, context[51], identifiers[ident_AlgTerm]);
      refalrts::alloc_char(vm, context[52], 's');
      refalrts::copy_stvar(vm, context[53], context[45]);
      refalrts::alloc_close_bracket(vm, context[54]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Var]);
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
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[51] );
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
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # S/33 s.Num/45 (/41 # Symbol/43 # Char/44 s.Char/46 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk1 as range 24
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::svar_left( context[46], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45
      //DEBUG: s.Char: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Char/46 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 } Tile{ HalfReuse: # Char/42 HalfReuse: s.Char46 /32 HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdChar/1 } Tile{ Reuse: # AlgTerm/33 AsIs: s.Num/45 HalfReuse: s.Char46 /41 HalfReuse: )/43 HalfReuse: )/44 } >/47 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[42], identifiers[ident_Char]);
      refalrts::reinit_svar( context[32], context[46] );
      refalrts::reinit_svar( context[36], context[45] );
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
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_evar( res, context[33], context[44] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      refalrts::splice_to_freelist_open( vm, context[31], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # S/33 s.Num/45 (/41 # Symbol/43 # Name/44 e.Name/39 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk1 as range 24
      // closed e.Name as range 39
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Name: 39
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Name/33 } e.Name/39/46 Tile{ HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdName/1 } Tile{ Reuse: # AlgTerm/43 HalfReuse: s.Num45 /44 AsIs: e.Name/39 AsIs: )/42 AsIs: )/32 } Tile{ HalfReuse: >/41 } Tile{ ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Name]);
      refalrts::reinit_svar( context[36], context[45] );
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
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[43], context[32] );
      res = refalrts::splice_evar( res, context[36], context[1] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # S/33 s.Num/45 (/41 # Symbol/43 # Identifier/44 e.Ident/39 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk1 as range 24
      // closed e.Ident as range 39
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Ident: 39
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Identifier/33 } e.Ident/39/46 Tile{ HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdIdent/1 } Tile{ Reuse: # AlgTerm/43 HalfReuse: s.Num45 /44 AsIs: e.Ident/39 AsIs: )/42 AsIs: )/32 } Tile{ HalfReuse: >/41 } Tile{ ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Identifier]);
      refalrts::reinit_svar( context[36], context[45] );
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
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[43], context[32] );
      res = refalrts::splice_evar( res, context[36], context[1] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # S/33 s.Num/45 (/41 # Symbol/43 # Number/44 s.Value/46 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk1 as range 24
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      if( ! refalrts::svar_left( context[46], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45
      //DEBUG: s.Value: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Value/46 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Symbol/31 } Tile{ HalfReuse: # Number/42 HalfReuse: s.Value46 /32 HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdNumber/1 } Tile{ Reuse: # AlgTerm/33 AsIs: s.Num/45 HalfReuse: s.Value46 /41 HalfReuse: )/43 HalfReuse: )/44 } >/47 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[42], identifiers[ident_Number]);
      refalrts::reinit_svar( context[32], context[46] );
      refalrts::reinit_svar( context[36], context[45] );
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
      res = refalrts::splice_elem( res, context[47] );
      res = refalrts::splice_evar( res, context[33], context[44] );
      res = refalrts::splice_evar( res, context[42], context[1] );
      refalrts::splice_to_freelist_open( vm, context[31], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/28 # Junk/30 e.Junk1/26 )/29 (/33 # S/35 s.Num/46 (/43 # Var/45 s.Mode/47 e.Index/41 )/44 )/34 (/38 # Junk/40 e.Junk2/36 )/39 e.Substs-E/22 (/11 e.Vars-B/48 (/54 s.Mode/56 (/59 e.Index/61 )/60 e.Offsets/52 s.SampleOffset/63 )/55 e.Vars-E/50 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Commands as range 18
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
      context[45] = refalrts::ident_left( identifiers[ident_Var], context[41], context[42] );
      if( ! context[45] )
        continue;
      // closed e.Junk1 as range 26
      // closed e.Junk2 as range 36
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[46], context[31], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      if( ! refalrts::svar_left( context[47], context[41], context[42] ) )
        continue;
      // closed e.Index as range 41
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
        // closed e.Vars-E as range 50
        if( ! refalrts::svar_right( context[63], context[52], context[53] ) )
          continue;
        // closed e.Offsets as range 52
        //DEBUG: s.ContextOffset: 13
        //DEBUG: e.Commands: 18
        //DEBUG: e.Substs-B: 20
        //DEBUG: e.Junk1: 26
        //DEBUG: e.Junk2: 36
        //DEBUG: e.Substs-E: 22
        //DEBUG: s.Num: 46
        //DEBUG: s.Mode: 47
        //DEBUG: e.Index: 41
        //DEBUG: e.Vars-B: 48
        //DEBUG: e.Vars-E: 50
        //DEBUG: s.SampleOffset: 63
        //DEBUG: e.Offsets: 52

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/28 AsIs: # Junk/30 AsIs: e.Junk1/26 HalfReuse: (/29 HalfReuse: # Var/33 HalfReuse: s.Mode56 /35 } Tile{ AsIs: e.Index/41 } Tile{ HalfReuse: s.Num46 /38 HalfReuse: )/40 AsIs: e.Junk2/36 AsIs: )/39 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars-B/48 AsIs: (/54 AsIs: s.Mode/56 AsIs: (/59 AsIs: e.Index/61 AsIs: )/60 AsIs: e.Offsets/52 AsIs: s.SampleOffset/63 HalfReuse: s.Num46 /55 } )/64 Tile{ AsIs: e.Vars-E/50 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdRepeated/1 } Tile{ HalfReuse: # AlgTerm/43 HalfReuse: s.Num46 /45 AsIs: s.Mode/47 } Tile{ AsIs: s.Num/46 } s.SampleOffset/63/65 Tile{ AsIs: )/44 AsIs: )/34 } >/66 Tile{ ]] }
        refalrts::alloc_close_bracket(vm, context[64]);
        refalrts::copy_stvar(vm, context[65], context[63]);
        refalrts::alloc_close_call(vm, context[66]);
        refalrts::reinit_open_bracket(context[29]);
        refalrts::reinit_ident(context[33], identifiers[ident_Var]);
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
        res = refalrts::splice_elem( res, context[66] );
        res = refalrts::splice_evar( res, context[44], context[34] );
        res = refalrts::splice_elem( res, context[65] );
        res = refalrts::splice_elem( res, context[46] );
        res = refalrts::splice_evar( res, context[43], context[47] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_elem( res, context[64] );
        res = refalrts::splice_evar( res, context[38], context[55] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[48], context[49], context[24], context[25] ) );
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # S/33 s.Num/45 (/41 # Var/43 's'/44 e.Index/39 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      context[43] = refalrts::ident_left( identifiers[ident_Var], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::char_left( 's', context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1 as range 24
      // closed e.Index as range 39
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Index: 39
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num/45 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Var/31 HalfReuse: 's'/33 } e.Index/39/46 Tile{ HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 HalfReuse: (/12 HalfReuse: 's'/7 } Tile{ HalfReuse: (/44 AsIs: e.Index/39 AsIs: )/42 HalfReuse: s.Num45 /32 } Tile{ HalfReuse: )/43 } )/48 Tile{ AsIs: (/41 } Tile{ AsIs: e.Commands/18 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[46], context[47], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Var]);
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
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_elem( res, context[48] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_evar( res, context[44], context[32] );
      res = refalrts::splice_evar( res, context[36], context[7] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::splice_to_freelist_open( vm, context[33], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk/24 )/27 (/31 # E/33 s.Num/34 (/37 # Symbol/39 # Char/40 s.Char/41 )/38 e.Range/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk as range 24
      // closed e.Substs-E as range 22
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
      // closed e.Range as range 29
      if( ! refalrts::svar_left( context[41], context[35], context[36] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk: 24
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 34
      //DEBUG: e.Range: 29
      //DEBUG: s.Char: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </42 & Add/43 1/44 Tile{ AsIs: s.ContextOffset/13 } >/45 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Char/33 } s.Char/41/46 s.ContextOffset/13/47 )/48 )/49 (/50 # E/51 Tile{ HalfReuse: s.Num34 /38 AsIs: e.Range/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdCharSave/1 } Tile{ HalfReuse: # AlgLeft/37 HalfReuse: s.Num34 /39 HalfReuse: s.ContextOffset13 /40 AsIs: s.Char/41 } )/52 )/53 >/54 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[44], 1UL);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::copy_stvar(vm, context[46], context[41]);
      refalrts::copy_stvar(vm, context[47], context[13]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_ident(vm, context[51], identifiers[ident_E]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_close_call(vm, context[54]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Char]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdCharSave]);
      refalrts::reinit_ident(context[37], identifiers[ident_AlgLeft]);
      refalrts::reinit_svar( context[39], context[34] );
      refalrts::reinit_svar( context[40], context[13] );
      refalrts::push_stack( vm, context[54] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[53] );
      refalrts::link_brackets( context[8], context[52] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[50], context[32] );
      refalrts::link_brackets( context[26], context[49] );
      refalrts::link_brackets( context[27], context[48] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[42] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[52], context[54] );
      res = refalrts::splice_evar( res, context[37], context[41] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[46], context[51] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk/24 )/27 (/31 # E/33 s.Num/34 (/37 # Symbol/39 # Number/40 s.Number/41 )/38 e.Range/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk as range 24
      // closed e.Substs-E as range 22
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
      // closed e.Range as range 29
      if( ! refalrts::svar_left( context[41], context[35], context[36] ) )
        continue;
      if( ! refalrts::empty_seq( context[35], context[36] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk: 24
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 34
      //DEBUG: e.Range: 29
      //DEBUG: s.Number: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Num/34 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </42 & Add/43 1/44 Tile{ AsIs: s.ContextOffset/13 } >/45 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Number/33 } s.Number/41/46 s.ContextOffset/13/47 )/48 )/49 (/50 # E/51 Tile{ HalfReuse: s.Num34 /38 AsIs: e.Range/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdNumberSave/1 } Tile{ HalfReuse: # AlgLeft/37 HalfReuse: s.Num34 /39 HalfReuse: s.ContextOffset13 /40 AsIs: s.Number/41 } )/52 )/53 >/54 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[44], 1UL);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::copy_stvar(vm, context[46], context[41]);
      refalrts::copy_stvar(vm, context[47], context[13]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::alloc_open_bracket(vm, context[50]);
      refalrts::alloc_ident(vm, context[51], identifiers[ident_E]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_close_call(vm, context[54]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Number]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdNumberSave]);
      refalrts::reinit_ident(context[37], identifiers[ident_AlgLeft]);
      refalrts::reinit_svar( context[39], context[34] );
      refalrts::reinit_svar( context[40], context[13] );
      refalrts::push_stack( vm, context[54] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[53] );
      refalrts::link_brackets( context[8], context[52] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[50], context[32] );
      refalrts::link_brackets( context[26], context[49] );
      refalrts::link_brackets( context[27], context[48] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[42] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[52], context[54] );
      res = refalrts::splice_evar( res, context[37], context[41] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[46], context[51] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk/24 )/27 (/31 # E/33 s.Num/34 (/37 # Symbol/39 # Name/40 e.Name/35 )/38 e.Range/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk as range 24
      // closed e.Substs-E as range 22
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
      // closed e.Name as range 35
      // closed e.Range as range 29
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk: 24
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 34
      //DEBUG: e.Name: 35
      //DEBUG: e.Range: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Add/42 1/43 Tile{ AsIs: s.ContextOffset/13 } >/44 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Name/33 } Tile{ AsIs: e.Name/35 } s.ContextOffset/13/45 )/46 )/47 Tile{ AsIs: (/37 Reuse: # E/39 } Tile{ HalfReuse: s.Num34 /38 AsIs: e.Range/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdNameSave/1 } Tile{ Reuse: # AlgLeft/40 } Tile{ AsIs: s.Num/34 } s.ContextOffset/13/48 e.Name/35/49 )/51 )/52 >/53 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[43], 1UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::copy_stvar(vm, context[45], context[13]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::copy_stvar(vm, context[48], context[13]);
      refalrts::copy_evar(vm, context[49], context[50], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Name]);
      refalrts::update_ident(context[39], identifiers[ident_E]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdNameSave]);
      refalrts::update_ident(context[40], identifiers[ident_AlgLeft]);
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[52] );
      refalrts::link_brackets( context[8], context[51] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[37], context[32] );
      refalrts::link_brackets( context[26], context[47] );
      refalrts::link_brackets( context[27], context[46] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[48], context[53] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk/24 )/27 (/31 # E/33 s.Num/34 (/37 # Symbol/39 # Identifier/40 e.Name/35 )/38 e.Range/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk as range 24
      // closed e.Substs-E as range 22
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
      // closed e.Name as range 35
      // closed e.Range as range 29
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk: 24
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 34
      //DEBUG: e.Name: 35
      //DEBUG: e.Range: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Add/42 1/43 Tile{ AsIs: s.ContextOffset/13 } >/44 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk/24 HalfReuse: (/27 HalfReuse: # Symbol/31 Reuse: # Identifier/33 } Tile{ AsIs: e.Name/35 } s.ContextOffset/13/45 )/46 )/47 Tile{ AsIs: (/37 Reuse: # E/39 } Tile{ HalfReuse: s.Num34 /38 AsIs: e.Range/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdIdentSave/1 } Tile{ Reuse: # AlgLeft/40 } Tile{ AsIs: s.Num/34 } s.ContextOffset/13/48 e.Name/35/49 )/51 )/52 >/53 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[43], 1UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::copy_stvar(vm, context[45], context[13]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_close_bracket(vm, context[47]);
      refalrts::copy_stvar(vm, context[48], context[13]);
      refalrts::copy_evar(vm, context[49], context[50], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Symbol]);
      refalrts::update_ident(context[33], identifiers[ident_Identifier]);
      refalrts::update_ident(context[39], identifiers[ident_E]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdIdentSave]);
      refalrts::update_ident(context[40], identifiers[ident_AlgLeft]);
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[52] );
      refalrts::link_brackets( context[8], context[51] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[37], context[32] );
      refalrts::link_brackets( context[26], context[47] );
      refalrts::link_brackets( context[27], context[46] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[48], context[53] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # E/28 s.Num/40 e.Range/24 (/36 # Symbol/38 # Char/39 s.Char/41 )/37 )/27 (/31 # Junk/33 e.Junk/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk as range 29
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range as range 24
      if( ! refalrts::svar_left( context[41], context[34], context[35] ) )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk: 29
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 40
      //DEBUG: e.Range: 24
      //DEBUG: s.Char: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </42 & Add/43 1/44 Tile{ AsIs: s.ContextOffset/13 } >/45 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num/40 AsIs: e.Range/24 HalfReuse: )/36 HalfReuse: (/38 Reuse: # Junk/39 } (/46 # Symbol/47 Tile{ HalfReuse: # Char/37 HalfReuse: s.Char41 /27 HalfReuse: s.ContextOffset13 /31 HalfReuse: )/33 AsIs: e.Junk/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdCharSave/1 } # AlgRight/48 s.Num/40/49 s.ContextOffset/13/50 Tile{ AsIs: s.Char/41 } )/51 )/52 >/53 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[44], 1UL);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[48], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[49], context[40]);
      refalrts::copy_stvar(vm, context[50], context[13]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::update_ident(context[39], identifiers[ident_Junk]);
      refalrts::reinit_ident(context[37], identifiers[ident_Char]);
      refalrts::reinit_svar( context[27], context[41] );
      refalrts::reinit_svar( context[31], context[13] );
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdCharSave]);
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[52] );
      refalrts::link_brackets( context[8], context[51] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::link_brackets( context[46], context[33] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[42] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[51], context[53] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[48], context[50] );
      res = refalrts::splice_evar( res, context[37], context[1] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_evar( res, context[26], context[39] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # E/28 s.Num/40 e.Range/24 (/36 # Symbol/38 # Number/39 s.Number/41 )/37 )/27 (/31 # Junk/33 e.Junk/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk as range 29
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range as range 24
      if( ! refalrts::svar_left( context[41], context[34], context[35] ) )
        continue;
      if( ! refalrts::empty_seq( context[34], context[35] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk: 29
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 40
      //DEBUG: e.Range: 24
      //DEBUG: s.Number: 41

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </42 & Add/43 1/44 Tile{ AsIs: s.ContextOffset/13 } >/45 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num/40 AsIs: e.Range/24 HalfReuse: )/36 HalfReuse: (/38 Reuse: # Junk/39 } (/46 # Symbol/47 Tile{ HalfReuse: # Number/37 HalfReuse: s.Number41 /27 HalfReuse: s.ContextOffset13 /31 HalfReuse: )/33 AsIs: e.Junk/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdNumberSave/1 } # AlgRight/48 s.Num/40/49 s.ContextOffset/13/50 Tile{ AsIs: s.Number/41 } )/51 )/52 >/53 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[44], 1UL);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[48], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[49], context[40]);
      refalrts::copy_stvar(vm, context[50], context[13]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::update_ident(context[39], identifiers[ident_Junk]);
      refalrts::reinit_ident(context[37], identifiers[ident_Number]);
      refalrts::reinit_svar( context[27], context[41] );
      refalrts::reinit_svar( context[31], context[13] );
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdNumberSave]);
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[52] );
      refalrts::link_brackets( context[8], context[51] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::link_brackets( context[46], context[33] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[42] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[51], context[53] );
      res = refalrts::splice_elem( res, context[41] );
      res = refalrts::splice_evar( res, context[48], context[50] );
      res = refalrts::splice_evar( res, context[37], context[1] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_evar( res, context[26], context[39] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[42], context[44] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # E/28 s.Num/40 e.Range/24 (/36 # Symbol/38 # Name/39 e.Name/34 )/37 )/27 (/31 # Junk/33 e.Junk/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Name as range 34
      // closed e.Junk as range 29
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range as range 24
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Name: 34
      //DEBUG: e.Junk: 29
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 40
      //DEBUG: e.Range: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Add/42 1/43 Tile{ AsIs: s.ContextOffset/13 } >/44 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num/40 AsIs: e.Range/24 HalfReuse: )/36 HalfReuse: (/38 Reuse: # Junk/39 } (/45 # Symbol/46 # Name/47 Tile{ AsIs: e.Name/34 } Tile{ HalfReuse: s.ContextOffset13 /31 HalfReuse: )/33 AsIs: e.Junk/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdNameSave/1 } # AlgRight/48 s.Num/40/49 s.ContextOffset/13/50 e.Name/34/51 Tile{ AsIs: )/37 AsIs: )/27 } >/53 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[43], 1UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::alloc_ident(vm, context[46], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_Name]);
      refalrts::alloc_ident(vm, context[48], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[49], context[40]);
      refalrts::copy_stvar(vm, context[50], context[13]);
      refalrts::copy_evar(vm, context[51], context[52], context[34], context[35]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::update_ident(context[39], identifiers[ident_Junk]);
      refalrts::reinit_svar( context[31], context[13] );
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdNameSave]);
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[27] );
      refalrts::link_brackets( context[8], context[37] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::link_brackets( context[45], context[33] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[37], context[27] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[48], context[50] );
      res = refalrts::splice_evar( res, context[31], context[1] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[26], context[39] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # E/28 s.Num/40 e.Range/24 (/36 # Symbol/38 # Identifier/39 e.Name/34 )/37 )/27 (/31 # Junk/33 e.Junk/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Name as range 34
      // closed e.Junk as range 29
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range as range 24
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Name: 34
      //DEBUG: e.Junk: 29
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 40
      //DEBUG: e.Range: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Add/42 1/43 Tile{ AsIs: s.ContextOffset/13 } >/44 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num/40 AsIs: e.Range/24 HalfReuse: )/36 HalfReuse: (/38 Reuse: # Junk/39 } (/45 # Symbol/46 # Identifier/47 Tile{ AsIs: e.Name/34 } Tile{ HalfReuse: s.ContextOffset13 /31 HalfReuse: )/33 AsIs: e.Junk/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdIdentSave/1 } # AlgRight/48 s.Num/40/49 s.ContextOffset/13/50 e.Name/34/51 Tile{ AsIs: )/37 AsIs: )/27 } >/53 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[43], 1UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::alloc_ident(vm, context[46], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_Identifier]);
      refalrts::alloc_ident(vm, context[48], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[49], context[40]);
      refalrts::copy_stvar(vm, context[50], context[13]);
      refalrts::copy_evar(vm, context[51], context[52], context[34], context[35]);
      refalrts::alloc_close_call(vm, context[53]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::update_ident(context[39], identifiers[ident_Junk]);
      refalrts::reinit_svar( context[31], context[13] );
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdIdentSave]);
      refalrts::push_stack( vm, context[53] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[27] );
      refalrts::link_brackets( context[8], context[37] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::link_brackets( context[45], context[33] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[37], context[27] );
      res = refalrts::splice_evar( res, context[51], context[52] );
      res = refalrts::splice_evar( res, context[48], context[50] );
      res = refalrts::splice_evar( res, context[31], context[1] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[26], context[39] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk/24 )/27 (/31 # E/33 s.Num/34 (/37 # Brackets/39 e.SubRange/35 )/38 e.Range/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk as range 24
      // closed e.Substs-E as range 22
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
      // closed e.SubRange as range 35
      // closed e.Range as range 29
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk: 24
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 34
      //DEBUG: e.SubRange: 35
      //DEBUG: e.Range: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </40 & Add/41 s.ContextOffset/13/42 4/43 >/44 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk/24 HalfReuse: (/27 HalfReuse: # TkOpenBracket/31 HalfReuse: </33 } & Add/45 Tile{ AsIs: s.ContextOffset/13 } 2/46 >/47 )/48 )/49 Tile{ AsIs: (/37 Reuse: # E/39 } s.ContextOffset/13/50 Tile{ AsIs: e.SubRange/35 } )/51 (/52 # Junk/53 (/54 # TkCloseBracket/55 </56 & Add/57 s.ContextOffset/13/58 3/59 >/60 )/61 )/62 (/63 # E/64 Tile{ HalfReuse: s.Num34 /38 AsIs: e.Range/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdBracketsSave/1 } # AlgLeft/65 Tile{ AsIs: s.Num/34 } s.ContextOffset/13/66 )/67 )/68 >/69 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[42], context[13]);
      refalrts::alloc_number(vm, context[43], 4UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::alloc_name(vm, context[45], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[46], 2UL);
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::alloc_close_bracket(vm, context[48]);
      refalrts::alloc_close_bracket(vm, context[49]);
      refalrts::copy_stvar(vm, context[50], context[13]);
      refalrts::alloc_close_bracket(vm, context[51]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_TkCloseBracket]);
      refalrts::alloc_open_call(vm, context[56]);
      refalrts::alloc_name(vm, context[57], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[58], context[13]);
      refalrts::alloc_number(vm, context[59], 3UL);
      refalrts::alloc_close_call(vm, context[60]);
      refalrts::alloc_close_bracket(vm, context[61]);
      refalrts::alloc_close_bracket(vm, context[62]);
      refalrts::alloc_open_bracket(vm, context[63]);
      refalrts::alloc_ident(vm, context[64], identifiers[ident_E]);
      refalrts::alloc_ident(vm, context[65], identifiers[ident_AlgLeft]);
      refalrts::copy_stvar(vm, context[66], context[13]);
      refalrts::alloc_close_bracket(vm, context[67]);
      refalrts::alloc_close_bracket(vm, context[68]);
      refalrts::alloc_close_call(vm, context[69]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkOpenBracket]);
      refalrts::reinit_open_call(context[33]);
      refalrts::update_ident(context[39], identifiers[ident_E]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdBracketsSave]);
      refalrts::push_stack( vm, context[69] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[68] );
      refalrts::link_brackets( context[8], context[67] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[63], context[32] );
      refalrts::link_brackets( context[52], context[62] );
      refalrts::link_brackets( context[54], context[61] );
      refalrts::push_stack( vm, context[60] );
      refalrts::push_stack( vm, context[56] );
      refalrts::link_brackets( context[37], context[51] );
      refalrts::link_brackets( context[26], context[49] );
      refalrts::link_brackets( context[27], context[48] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[66], context[69] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[65] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[51], context[64] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[46], context[49] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[40], context[44] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # E/28 s.Num/39 e.Range/24 (/36 # Brackets/38 e.SubRange/34 )/37 )/27 (/31 # Junk/33 e.Junk/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.SubRange as range 34
      // closed e.Junk as range 29
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[39], context[24], context[25] ) )
        continue;
      // closed e.Range as range 24
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.SubRange: 34
      //DEBUG: e.Junk: 29
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 39
      //DEBUG: e.Range: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </40 & Add/41 s.ContextOffset/13/42 4/43 >/44 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num/39 AsIs: e.Range/24 HalfReuse: )/36 HalfReuse: (/38 } # Junk/45 (/46 # TkOpenBracket/47 </48 & Add/49 Tile{ AsIs: s.ContextOffset/13 } 2/50 >/51 )/52 )/53 (/54 # E/55 s.ContextOffset/13/56 Tile{ AsIs: e.SubRange/34 } )/57 (/58 # Junk/59 (/60 # TkCloseBracket/61 </62 & Add/63 Tile{ HalfReuse: s.ContextOffset13 /37 HalfReuse: 3/27 HalfReuse: >/31 HalfReuse: )/33 AsIs: e.Junk/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdBracketsSave/1 } # AlgRight/64 s.Num/39/65 s.ContextOffset/13/66 )/67 )/68 >/69 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[42], context[13]);
      refalrts::alloc_number(vm, context[43], 4UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::alloc_ident(vm, context[45], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::alloc_ident(vm, context[47], identifiers[ident_TkOpenBracket]);
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[50], 2UL);
      refalrts::alloc_close_call(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_open_bracket(vm, context[54]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_E]);
      refalrts::copy_stvar(vm, context[56], context[13]);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::alloc_open_bracket(vm, context[58]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[60]);
      refalrts::alloc_ident(vm, context[61], identifiers[ident_TkCloseBracket]);
      refalrts::alloc_open_call(vm, context[62]);
      refalrts::alloc_name(vm, context[63], functions[efunc_Add]);
      refalrts::alloc_ident(vm, context[64], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[65], context[39]);
      refalrts::copy_stvar(vm, context[66], context[13]);
      refalrts::alloc_close_bracket(vm, context[67]);
      refalrts::alloc_close_bracket(vm, context[68]);
      refalrts::alloc_close_call(vm, context[69]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::reinit_svar( context[37], context[13] );
      refalrts::reinit_number(context[27], 3UL);
      refalrts::reinit_close_call(context[31]);
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdBracketsSave]);
      refalrts::push_stack( vm, context[69] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[68] );
      refalrts::link_brackets( context[8], context[67] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[58], context[32] );
      refalrts::link_brackets( context[60], context[33] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[62] );
      refalrts::link_brackets( context[54], context[57] );
      refalrts::link_brackets( context[38], context[53] );
      refalrts::link_brackets( context[46], context[52] );
      refalrts::push_stack( vm, context[51] );
      refalrts::push_stack( vm, context[48] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[64], context[69] );
      res = refalrts::splice_evar( res, context[37], context[1] );
      res = refalrts::splice_evar( res, context[57], context[63] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[50], context[56] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[45], context[49] );
      res = refalrts::splice_evar( res, context[26], context[38] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[40], context[44] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk/24 )/27 (/31 # E/33 s.Num/34 (/37 # ADT-Brackets/39 (/42 e.Name/40 )/43 e.SubRange/35 )/38 e.Range/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk as range 24
      // closed e.Substs-E as range 22
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
      // closed e.Name as range 40
      // closed e.SubRange as range 35
      // closed e.Range as range 29
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk: 24
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 34
      //DEBUG: e.Name: 40
      //DEBUG: e.SubRange: 35
      //DEBUG: e.Range: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </44 & Add/45 s.ContextOffset/13/46 5/47 >/48 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk/24 HalfReuse: (/27 HalfReuse: # TkOpenADT/31 HalfReuse: </33 } & Add/49 Tile{ AsIs: s.ContextOffset/13 } 2/50 >/51 )/52 Tile{ AsIs: (/37 Reuse: # Symbol/39 HalfReuse: # Name/42 AsIs: e.Name/40 HalfReuse: </43 } & Add/53 s.ContextOffset/13/54 3/55 >/56 )/57 )/58 (/59 # E/60 s.ContextOffset/13/61 Tile{ AsIs: e.SubRange/35 } )/62 (/63 # Junk/64 (/65 # TkCloseADT/66 </67 & Add/68 s.ContextOffset/13/69 4/70 >/71 )/72 )/73 (/74 # E/75 Tile{ HalfReuse: s.Num34 /38 AsIs: e.Range/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdADTSave/1 } # AlgLeft/76 Tile{ AsIs: s.Num/34 } s.ContextOffset/13/77 e.Name/40/78 )/80 )/81 >/82 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[44]);
      refalrts::alloc_name(vm, context[45], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[46], context[13]);
      refalrts::alloc_number(vm, context[47], 5UL);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[50], 2UL);
      refalrts::alloc_close_call(vm, context[51]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_name(vm, context[53], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[54], context[13]);
      refalrts::alloc_number(vm, context[55], 3UL);
      refalrts::alloc_close_call(vm, context[56]);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::alloc_open_bracket(vm, context[59]);
      refalrts::alloc_ident(vm, context[60], identifiers[ident_E]);
      refalrts::copy_stvar(vm, context[61], context[13]);
      refalrts::alloc_close_bracket(vm, context[62]);
      refalrts::alloc_open_bracket(vm, context[63]);
      refalrts::alloc_ident(vm, context[64], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[65]);
      refalrts::alloc_ident(vm, context[66], identifiers[ident_TkCloseADT]);
      refalrts::alloc_open_call(vm, context[67]);
      refalrts::alloc_name(vm, context[68], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[69], context[13]);
      refalrts::alloc_number(vm, context[70], 4UL);
      refalrts::alloc_close_call(vm, context[71]);
      refalrts::alloc_close_bracket(vm, context[72]);
      refalrts::alloc_close_bracket(vm, context[73]);
      refalrts::alloc_open_bracket(vm, context[74]);
      refalrts::alloc_ident(vm, context[75], identifiers[ident_E]);
      refalrts::alloc_ident(vm, context[76], identifiers[ident_AlgLeft]);
      refalrts::copy_stvar(vm, context[77], context[13]);
      refalrts::copy_evar(vm, context[78], context[79], context[40], context[41]);
      refalrts::alloc_close_bracket(vm, context[80]);
      refalrts::alloc_close_bracket(vm, context[81]);
      refalrts::alloc_close_call(vm, context[82]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_TkOpenADT]);
      refalrts::reinit_open_call(context[33]);
      refalrts::update_ident(context[39], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[42], identifiers[ident_Name]);
      refalrts::reinit_open_call(context[43]);
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdADTSave]);
      refalrts::push_stack( vm, context[82] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[81] );
      refalrts::link_brackets( context[8], context[80] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[74], context[32] );
      refalrts::link_brackets( context[63], context[73] );
      refalrts::link_brackets( context[65], context[72] );
      refalrts::push_stack( vm, context[71] );
      refalrts::push_stack( vm, context[67] );
      refalrts::link_brackets( context[59], context[62] );
      refalrts::link_brackets( context[26], context[58] );
      refalrts::link_brackets( context[37], context[57] );
      refalrts::push_stack( vm, context[56] );
      refalrts::push_stack( vm, context[43] );
      refalrts::link_brackets( context[27], context[52] );
      refalrts::push_stack( vm, context[51] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[44] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[77], context[82] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[76] );
      res = refalrts::splice_evar( res, context[38], context[1] );
      res = refalrts::splice_evar( res, context[62], context[75] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[53], context[61] );
      res = refalrts::splice_evar( res, context[37], context[43] );
      res = refalrts::splice_evar( res, context[50], context[52] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[44], context[48] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # E/28 s.Num/43 e.Range/24 (/36 # ADT-Brackets/38 (/41 e.Name/39 )/42 e.SubRange/34 )/37 )/27 (/31 # Junk/33 e.Junk/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Name as range 39
      // closed e.SubRange as range 34
      // closed e.Junk as range 29
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[43], context[24], context[25] ) )
        continue;
      // closed e.Range as range 24
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Name: 39
      //DEBUG: e.SubRange: 34
      //DEBUG: e.Junk: 29
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 43
      //DEBUG: e.Range: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </44 & Add/45 Tile{ AsIs: s.ContextOffset/13 } 5/46 >/47 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num/43 AsIs: e.Range/24 HalfReuse: )/36 HalfReuse: (/38 HalfReuse: # Junk/41 } (/48 # TkOpenADT/49 </50 & Add/51 s.ContextOffset/13/52 2/53 >/54 Tile{ AsIs: )/42 } (/55 # Symbol/56 # Name/57 Tile{ AsIs: e.Name/39 } </58 & Add/59 s.ContextOffset/13/60 3/61 >/62 )/63 )/64 (/65 # E/66 s.ContextOffset/13/67 Tile{ AsIs: e.SubRange/34 } )/68 (/69 # Junk/70 (/71 # TkCloseADT/72 </73 & Add/74 Tile{ HalfReuse: s.ContextOffset13 /37 HalfReuse: 4/27 HalfReuse: >/31 HalfReuse: )/33 AsIs: e.Junk/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdADTSave/1 } # AlgRight/75 s.Num/43/76 s.ContextOffset/13/77 e.Name/39/78 )/80 )/81 >/82 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[44]);
      refalrts::alloc_name(vm, context[45], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[46], 5UL);
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::alloc_open_bracket(vm, context[48]);
      refalrts::alloc_ident(vm, context[49], identifiers[ident_TkOpenADT]);
      refalrts::alloc_open_call(vm, context[50]);
      refalrts::alloc_name(vm, context[51], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[52], context[13]);
      refalrts::alloc_number(vm, context[53], 2UL);
      refalrts::alloc_close_call(vm, context[54]);
      refalrts::alloc_open_bracket(vm, context[55]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_Name]);
      refalrts::alloc_open_call(vm, context[58]);
      refalrts::alloc_name(vm, context[59], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[60], context[13]);
      refalrts::alloc_number(vm, context[61], 3UL);
      refalrts::alloc_close_call(vm, context[62]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::alloc_close_bracket(vm, context[64]);
      refalrts::alloc_open_bracket(vm, context[65]);
      refalrts::alloc_ident(vm, context[66], identifiers[ident_E]);
      refalrts::copy_stvar(vm, context[67], context[13]);
      refalrts::alloc_close_bracket(vm, context[68]);
      refalrts::alloc_open_bracket(vm, context[69]);
      refalrts::alloc_ident(vm, context[70], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[71]);
      refalrts::alloc_ident(vm, context[72], identifiers[ident_TkCloseADT]);
      refalrts::alloc_open_call(vm, context[73]);
      refalrts::alloc_name(vm, context[74], functions[efunc_Add]);
      refalrts::alloc_ident(vm, context[75], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[76], context[43]);
      refalrts::copy_stvar(vm, context[77], context[13]);
      refalrts::copy_evar(vm, context[78], context[79], context[39], context[40]);
      refalrts::alloc_close_bracket(vm, context[80]);
      refalrts::alloc_close_bracket(vm, context[81]);
      refalrts::alloc_close_call(vm, context[82]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::reinit_ident(context[41], identifiers[ident_Junk]);
      refalrts::reinit_svar( context[37], context[13] );
      refalrts::reinit_number(context[27], 4UL);
      refalrts::reinit_close_call(context[31]);
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[1], identifiers[ident_CmdADTSave]);
      refalrts::push_stack( vm, context[82] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[81] );
      refalrts::link_brackets( context[8], context[80] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[69], context[32] );
      refalrts::link_brackets( context[71], context[33] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[73] );
      refalrts::link_brackets( context[65], context[68] );
      refalrts::link_brackets( context[38], context[64] );
      refalrts::link_brackets( context[55], context[63] );
      refalrts::push_stack( vm, context[62] );
      refalrts::push_stack( vm, context[58] );
      refalrts::link_brackets( context[48], context[42] );
      refalrts::push_stack( vm, context[54] );
      refalrts::push_stack( vm, context[50] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[44] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[75], context[82] );
      res = refalrts::splice_evar( res, context[37], context[1] );
      res = refalrts::splice_evar( res, context[68], context[74] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[58], context[67] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[55], context[57] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[48], context[54] );
      res = refalrts::splice_evar( res, context[26], context[41] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[44], context[45] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # E/33 s.Num/39 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk1 as range 24
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[39], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 39

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} )/27 (/31 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 } Tile{ AsIs: e.Junk1/24 } Tile{ AsIs: e.Junk2/34 } Tile{ AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: (/8 HalfReuse: # CmdEmpty/1 } Tile{ Reuse: # AlgLeft/33 AsIs: s.Num/39 AsIs: )/32 HalfReuse: )/36 HalfReuse: >/38 } Tile{ ]] }
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
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/28 # Junk/30 e.Junk/26 )/29 (/33 # E/35 s.Num/36 (/39 # Var/41 s.Mode/42 e.Index/37 )/40 e.Range/31 )/34 e.Substs-E/22 (/11 e.Vars-B/43 (/49 s.Mode/51 (/54 e.Index/56 )/55 e.Offsets/47 s.SampleOffset/58 )/50 e.Vars-E/45 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Commands as range 18
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
      // closed e.Junk as range 26
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[36], context[31], context[32] ) )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[31], context[32] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_Var], context[37], context[38] );
      if( ! context[41] )
        continue;
      // closed e.Range as range 31
      if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
        continue;
      // closed e.Index as range 37
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
        // closed e.Vars-E as range 45
        if( ! refalrts::svar_right( context[58], context[47], context[48] ) )
          continue;
        // closed e.Offsets as range 47
        //DEBUG: s.ContextOffset: 13
        //DEBUG: e.Commands: 18
        //DEBUG: e.Substs-B: 20
        //DEBUG: e.Junk: 26
        //DEBUG: e.Substs-E: 22
        //DEBUG: s.Num: 36
        //DEBUG: e.Range: 31
        //DEBUG: s.Mode: 42
        //DEBUG: e.Index: 37
        //DEBUG: e.Vars-B: 43
        //DEBUG: e.Vars-E: 45
        //DEBUG: s.SampleOffset: 58
        //DEBUG: e.Offsets: 47

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </59 Tile{ HalfReuse: & IncVarOffset-Saved/39 HalfReuse: s.ContextOffset13 /41 AsIs: s.Mode/42 } >/60 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/28 AsIs: # Junk/30 AsIs: e.Junk/26 HalfReuse: (/29 HalfReuse: # Var/33 HalfReuse: s.Mode51 /35 } Tile{ AsIs: e.Index/37 } Tile{ AsIs: s.ContextOffset/13 } )/61 )/62 (/63 # E/64 Tile{ HalfReuse: s.Num36 /40 AsIs: e.Range/31 AsIs: )/34 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars-B/43 AsIs: (/49 AsIs: s.Mode/51 AsIs: (/54 AsIs: e.Index/56 AsIs: )/55 AsIs: e.Offsets/47 AsIs: s.SampleOffset/58 HalfReuse: s.ContextOffset13 /50 } )/65 Tile{ AsIs: e.Vars-E/45 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: </8 HalfReuse: & MakeRepeatedSave@1/1 } Tile{ AsIs: s.Num/36 } s.Mode/51/66 s.ContextOffset/13/67 s.SampleOffset/58/68 >/69 )/70 >/71 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_close_call(vm, context[60]);
        refalrts::alloc_close_bracket(vm, context[61]);
        refalrts::alloc_close_bracket(vm, context[62]);
        refalrts::alloc_open_bracket(vm, context[63]);
        refalrts::alloc_ident(vm, context[64], identifiers[ident_E]);
        refalrts::alloc_close_bracket(vm, context[65]);
        refalrts::copy_stvar(vm, context[66], context[51]);
        refalrts::copy_stvar(vm, context[67], context[13]);
        refalrts::copy_stvar(vm, context[68], context[58]);
        refalrts::alloc_close_call(vm, context[69]);
        refalrts::alloc_close_bracket(vm, context[70]);
        refalrts::alloc_close_call(vm, context[71]);
        refalrts::reinit_name(context[39], functions[efunc_IncVarOffsetm_Saved]);
        refalrts::reinit_svar( context[41], context[13] );
        refalrts::reinit_open_bracket(context[29]);
        refalrts::reinit_ident(context[33], identifiers[ident_Var]);
        refalrts::reinit_svar( context[35], context[51] );
        refalrts::reinit_svar( context[40], context[36] );
        refalrts::reinit_svar( context[50], context[13] );
        refalrts::reinit_open_call(context[8]);
        refalrts::reinit_name(context[1], functions[efunc_gen_MakeRepeatedSave_Z1]);
        refalrts::push_stack( vm, context[71] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[70] );
        refalrts::push_stack( vm, context[69] );
        refalrts::push_stack( vm, context[8] );
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
        res = refalrts::splice_evar( res, context[66], context[71] );
        res = refalrts::splice_elem( res, context[36] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        res = refalrts::splice_elem( res, context[65] );
        res = refalrts::splice_evar( res, context[40], context[50] );
        res = refalrts::splice_evar( res, context[61], context[64] );
        res = refalrts::splice_elem( res, context[13] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[28], context[35] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_elem( res, context[60] );
        res = refalrts::splice_evar( res, context[39], context[42] );
        res = refalrts::splice_elem( res, context[59] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[43], context[44], context[24], context[25] ) );
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/28 # E/30 s.Num/41 e.Range/26 (/38 # Var/40 s.Mode/42 e.Index/36 )/39 )/29 (/33 # Junk/35 e.Junk/31 )/34 e.Substs-E/22 (/11 e.Vars-B/43 (/49 s.Mode/51 (/54 e.Index/56 )/55 e.Offsets/47 s.SampleOffset/58 )/50 e.Vars-E/45 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Commands as range 18
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
      context[40] = refalrts::ident_left( identifiers[ident_Var], context[36], context[37] );
      if( ! context[40] )
        continue;
      // closed e.Junk as range 31
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[41], context[26], context[27] ) )
        continue;
      // closed e.Range as range 26
      if( ! refalrts::svar_left( context[42], context[36], context[37] ) )
        continue;
      // closed e.Index as range 36
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
        // closed e.Vars-E as range 45
        if( ! refalrts::svar_right( context[58], context[47], context[48] ) )
          continue;
        // closed e.Offsets as range 47
        //DEBUG: s.ContextOffset: 13
        //DEBUG: e.Commands: 18
        //DEBUG: e.Substs-B: 20
        //DEBUG: e.Junk: 31
        //DEBUG: e.Substs-E: 22
        //DEBUG: s.Num: 41
        //DEBUG: e.Range: 26
        //DEBUG: s.Mode: 42
        //DEBUG: e.Index: 36
        //DEBUG: e.Vars-B: 43
        //DEBUG: e.Vars-E: 45
        //DEBUG: s.SampleOffset: 58
        //DEBUG: e.Offsets: 47

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </59 & IncVarOffset-Saved/60 Tile{ AsIs: s.ContextOffset/13 } Tile{ AsIs: s.Mode/42 } >/61 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/28 AsIs: # E/30 AsIs: s.Num/41 AsIs: e.Range/26 HalfReuse: )/38 HalfReuse: (/40 } # Junk/62 (/63 # Var/64 s.Mode/51/65 Tile{ AsIs: e.Index/36 } Tile{ HalfReuse: s.ContextOffset13 /33 HalfReuse: )/35 AsIs: e.Junk/31 AsIs: )/34 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars-B/43 AsIs: (/49 AsIs: s.Mode/51 AsIs: (/54 AsIs: e.Index/56 AsIs: )/55 AsIs: e.Offsets/47 AsIs: s.SampleOffset/58 HalfReuse: s.ContextOffset13 /50 } )/66 Tile{ AsIs: e.Vars-E/45 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Commands/18 HalfReuse: </8 HalfReuse: & MakeRepeatedSave@2/1 } s.Num/41/67 s.Mode/51/68 s.ContextOffset/13/69 s.SampleOffset/58/70 Tile{ HalfReuse: >/39 AsIs: )/29 } >/71 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_name(vm, context[60], functions[efunc_IncVarOffsetm_Saved]);
        refalrts::alloc_close_call(vm, context[61]);
        refalrts::alloc_ident(vm, context[62], identifiers[ident_Junk]);
        refalrts::alloc_open_bracket(vm, context[63]);
        refalrts::alloc_ident(vm, context[64], identifiers[ident_Var]);
        refalrts::copy_stvar(vm, context[65], context[51]);
        refalrts::alloc_close_bracket(vm, context[66]);
        refalrts::copy_stvar(vm, context[67], context[41]);
        refalrts::copy_stvar(vm, context[68], context[51]);
        refalrts::copy_stvar(vm, context[69], context[13]);
        refalrts::copy_stvar(vm, context[70], context[58]);
        refalrts::alloc_close_call(vm, context[71]);
        refalrts::reinit_close_bracket(context[38]);
        refalrts::reinit_open_bracket(context[40]);
        refalrts::reinit_svar( context[33], context[13] );
        refalrts::reinit_close_bracket(context[35]);
        refalrts::reinit_svar( context[50], context[13] );
        refalrts::reinit_open_call(context[8]);
        refalrts::reinit_name(context[1], functions[efunc_gen_MakeRepeatedSave_Z2]);
        refalrts::reinit_close_call(context[39]);
        refalrts::push_stack( vm, context[71] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[29] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[8] );
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
        res = refalrts::splice_elem( res, context[71] );
        res = refalrts::splice_evar( res, context[39], context[29] );
        res = refalrts::splice_evar( res, context[67], context[70] );
        res = refalrts::splice_evar( res, context[12], context[1] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        res = refalrts::splice_elem( res, context[66] );
        res = refalrts::splice_evar( res, context[33], context[50] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[62], context[65] );
        res = refalrts::splice_evar( res, context[28], context[40] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_elem( res, context[61] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_elem( res, context[13] );
        res = refalrts::splice_evar( res, context[59], context[60] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[43], context[44], context[24], context[25] ) );
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk1/24 )/27 (/31 # E/33 s.Num/45 (/41 # Var/43 'e'/44 e.Index/39 )/42 )/32 (/36 # Junk/38 e.Junk2/34 )/37 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      context[43] = refalrts::ident_left( identifiers[ident_Var], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = refalrts::char_left( 'e', context[39], context[40] );
      if( ! context[44] )
        continue;
      // closed e.Junk1 as range 24
      // closed e.Index as range 39
      // closed e.Junk2 as range 34
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[45], context[29], context[30] ) )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk1: 24
      //DEBUG: e.Index: 39
      //DEBUG: e.Junk2: 34
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 45

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 AsIs: s.ContextOffset/13 AsIs: e.Substs-B/20 AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk1/24 HalfReuse: (/27 HalfReuse: # Var/31 HalfReuse: 'e'/33 } e.Index/39/46 Tile{ HalfReuse: s.Num45 /36 HalfReuse: )/38 AsIs: e.Junk2/34 AsIs: )/37 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 HalfReuse: (/12 HalfReuse: 'e'/7 } (/48 e.Index/39/49 )/51 Tile{ AsIs: s.Num/45 } )/52 )/53 (/54 Tile{ AsIs: e.Commands/18 } (/55 # CmdComment/56" closed "/57 Tile{ HalfReuse: </41 HalfReuse: & PrintVar/43 AsIs: 'e'/44 AsIs: e.Index/39 HalfReuse: >/42 HalfReuse: ' '/32 }"as range "/59 # Offset/61 s.Num/45/62 )/63 Tile{ AsIs: )/8 AsIs: >/1 ]] }
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
      refalrts::reinit_ident(context[31], identifiers[ident_Var]);
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
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[48], context[51] );
      res = refalrts::splice_evar( res, context[36], context[7] );
      res = refalrts::splice_evar( res, context[46], context[47] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk/24 )/27 (/31 # E/33 s.Num/34 (/37 # Var/39 's'/40 e.Index/35 )/38 e.Range/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk as range 24
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_Var], context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_left( 's', context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Index as range 35
      // closed e.Range as range 29
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk: 24
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 34
      //DEBUG: e.Index: 35
      //DEBUG: e.Range: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Add/42 1/43 Tile{ AsIs: s.ContextOffset/13 } >/44 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk/24 HalfReuse: (/27 HalfReuse: # Var/31 HalfReuse: 's'/33 } Tile{ AsIs: e.Index/35 } s.ContextOffset/13/45 )/46 )/47 (/48 # E/49 Tile{ HalfReuse: s.Num34 /38 AsIs: e.Range/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 HalfReuse: (/12 HalfReuse: 's'/7 } (/50 e.Index/35/51 )/53 s.ContextOffset/13/54 )/55 )/56 (/57 Tile{ AsIs: e.Commands/18 } Tile{ AsIs: (/37 Reuse: # CmdVar/39 HalfReuse: # AlgLeft/40 } Tile{ AsIs: s.Num/34 } 's'/58 s.ContextOffset/13/59 )/60 Tile{ AsIs: )/8 AsIs: >/1 ]] }
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
      refalrts::reinit_ident(context[31], identifiers[ident_Var]);
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
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[37], context[40] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[50], context[57] );
      res = refalrts::splice_evar( res, context[38], context[7] );
      res = refalrts::splice_evar( res, context[45], context[49] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # Junk/28 e.Junk/24 )/27 (/31 # E/33 s.Num/34 (/37 # Var/39 't'/40 e.Index/35 )/38 e.Range/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      // closed e.Junk as range 24
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[34], context[29], context[30] ) )
        continue;
      context[35] = 0;
      context[36] = 0;
      context[37] = refalrts::brackets_left( context[35], context[36], context[29], context[30] );
      if( ! context[37] )
        continue;
      refalrts::bracket_pointers(context[37], context[38]);
      context[39] = refalrts::ident_left( identifiers[ident_Var], context[35], context[36] );
      if( ! context[39] )
        continue;
      context[40] = refalrts::char_left( 't', context[35], context[36] );
      if( ! context[40] )
        continue;
      // closed e.Index as range 35
      // closed e.Range as range 29
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Junk: 24
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 34
      //DEBUG: e.Index: 35
      //DEBUG: e.Range: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Inc2/42 Tile{ AsIs: s.ContextOffset/13 } >/43 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # Junk/28 AsIs: e.Junk/24 HalfReuse: (/27 HalfReuse: # Var/31 HalfReuse: 't'/33 } Tile{ AsIs: e.Index/35 } s.ContextOffset/13/44 )/45 )/46 (/47 # E/48 Tile{ HalfReuse: s.Num34 /38 AsIs: e.Range/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 HalfReuse: (/12 HalfReuse: 't'/7 } (/49 e.Index/35/50 )/52 s.ContextOffset/13/53 )/54 )/55 (/56 Tile{ AsIs: e.Commands/18 } Tile{ AsIs: (/37 Reuse: # CmdVarSave/39 HalfReuse: # AlgLeft/40 } Tile{ AsIs: s.Num/34 } 't'/57 s.ContextOffset/13/58 )/59 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Inc2]);
      refalrts::alloc_close_call(vm, context[43]);
      refalrts::copy_stvar(vm, context[44], context[13]);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_close_bracket(vm, context[46]);
      refalrts::alloc_open_bracket(vm, context[47]);
      refalrts::alloc_ident(vm, context[48], identifiers[ident_E]);
      refalrts::alloc_open_bracket(vm, context[49]);
      refalrts::copy_evar(vm, context[50], context[51], context[35], context[36]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::copy_stvar(vm, context[53], context[13]);
      refalrts::alloc_close_bracket(vm, context[54]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_char(vm, context[57], 't');
      refalrts::copy_stvar(vm, context[58], context[13]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::reinit_open_bracket(context[27]);
      refalrts::reinit_ident(context[31], identifiers[ident_Var]);
      refalrts::reinit_char(context[33], 't');
      refalrts::reinit_svar( context[38], context[34] );
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_char(context[7], 't');
      refalrts::update_ident(context[39], identifiers[ident_CmdVarSave]);
      refalrts::reinit_ident(context[40], identifiers[ident_AlgLeft]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[56], context[8] );
      refalrts::link_brackets( context[37], context[59] );
      refalrts::link_brackets( context[11], context[55] );
      refalrts::link_brackets( context[12], context[54] );
      refalrts::link_brackets( context[49], context[52] );
      refalrts::link_brackets( context[47], context[32] );
      refalrts::link_brackets( context[26], context[46] );
      refalrts::link_brackets( context[27], context[45] );
      refalrts::push_stack( vm, context[43] );
      refalrts::push_stack( vm, context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[57], context[59] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[37], context[40] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[49], context[56] );
      res = refalrts::splice_evar( res, context[38], context[7] );
      res = refalrts::splice_evar( res, context[44], context[48] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[26], context[33] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # E/28 s.Num/40 e.Range/24 (/36 # Var/38 's'/39 e.Index/34 )/37 )/27 (/31 # Junk/33 e.Junk/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      context[38] = refalrts::ident_left( identifiers[ident_Var], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::char_left( 's', context[34], context[35] );
      if( ! context[39] )
        continue;
      // closed e.Index as range 34
      // closed e.Junk as range 29
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range as range 24
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Index: 34
      //DEBUG: e.Junk: 29
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 40
      //DEBUG: e.Range: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Add/42 1/43 Tile{ AsIs: s.ContextOffset/13 } >/44 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num/40 AsIs: e.Range/24 HalfReuse: )/36 HalfReuse: (/38 HalfReuse: # Junk/39 } (/45 # Var/46 's'/47 Tile{ AsIs: e.Index/34 } Tile{ HalfReuse: s.ContextOffset13 /31 HalfReuse: )/33 AsIs: e.Junk/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 HalfReuse: (/12 HalfReuse: 's'/7 } (/48 e.Index/34/49 )/51 s.ContextOffset/13/52 Tile{ AsIs: )/37 AsIs: )/27 } (/53 Tile{ AsIs: e.Commands/18 } (/54 # CmdVar/55 # AlgRight/56 s.Num/40/57 's'/58 s.ContextOffset/13/59 )/60 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[43], 1UL);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::alloc_open_bracket(vm, context[45]);
      refalrts::alloc_ident(vm, context[46], identifiers[ident_Var]);
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
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[37], context[27] );
      res = refalrts::splice_evar( res, context[48], context[52] );
      res = refalrts::splice_evar( res, context[31], context[7] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[45], context[47] );
      res = refalrts::splice_evar( res, context[26], context[39] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[44] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[41], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 e.Substs-B/20 (/26 # E/28 s.Num/40 e.Range/24 (/36 # Var/38 't'/39 e.Index/34 )/37 )/27 (/31 # Junk/33 e.Junk/29 )/32 e.Substs-E/22 (/11 e.Vars/16 )/12 (/7 e.Commands/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.Vars as range 16
    // closed e.Commands as range 18
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
      context[38] = refalrts::ident_left( identifiers[ident_Var], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = refalrts::char_left( 't', context[34], context[35] );
      if( ! context[39] )
        continue;
      // closed e.Index as range 34
      // closed e.Junk as range 29
      // closed e.Substs-E as range 22
      if( ! refalrts::svar_left( context[40], context[24], context[25] ) )
        continue;
      // closed e.Range as range 24
      //DEBUG: s.ContextOffset: 13
      //DEBUG: e.Vars: 16
      //DEBUG: e.Commands: 18
      //DEBUG: e.Substs-B: 20
      //DEBUG: e.Index: 34
      //DEBUG: e.Junk: 29
      //DEBUG: e.Substs-E: 22
      //DEBUG: s.Num: 40
      //DEBUG: e.Range: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst/4 } </41 & Inc2/42 Tile{ AsIs: s.ContextOffset/13 } >/43 Tile{ AsIs: e.Substs-B/20 } Tile{ AsIs: (/26 AsIs: # E/28 AsIs: s.Num/40 AsIs: e.Range/24 HalfReuse: )/36 HalfReuse: (/38 HalfReuse: # Junk/39 } (/44 # Var/45 't'/46 Tile{ AsIs: e.Index/34 } Tile{ HalfReuse: s.ContextOffset13 /31 HalfReuse: )/33 AsIs: e.Junk/29 AsIs: )/32 AsIs: e.Substs-E/22 AsIs: (/11 AsIs: e.Vars/16 HalfReuse: (/12 HalfReuse: 't'/7 } (/47 e.Index/34/48 )/50 s.ContextOffset/13/51 Tile{ AsIs: )/37 AsIs: )/27 } (/52 Tile{ AsIs: e.Commands/18 } (/53 # CmdVarSave/54 # AlgRight/55 s.Num/40/56 't'/57 s.ContextOffset/13/58 )/59 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Inc2]);
      refalrts::alloc_close_call(vm, context[43]);
      refalrts::alloc_open_bracket(vm, context[44]);
      refalrts::alloc_ident(vm, context[45], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[46], 't');
      refalrts::alloc_open_bracket(vm, context[47]);
      refalrts::copy_evar(vm, context[48], context[49], context[34], context[35]);
      refalrts::alloc_close_bracket(vm, context[50]);
      refalrts::copy_stvar(vm, context[51], context[13]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_ident(vm, context[54], identifiers[ident_CmdVarSave]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[56], context[40]);
      refalrts::alloc_char(vm, context[57], 't');
      refalrts::copy_stvar(vm, context[58], context[13]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::reinit_close_bracket(context[36]);
      refalrts::reinit_open_bracket(context[38]);
      refalrts::reinit_ident(context[39], identifiers[ident_Junk]);
      refalrts::reinit_svar( context[31], context[13] );
      refalrts::reinit_close_bracket(context[33]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_char(context[7], 't');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[52], context[8] );
      refalrts::link_brackets( context[53], context[59] );
      refalrts::link_brackets( context[11], context[27] );
      refalrts::link_brackets( context[12], context[37] );
      refalrts::link_brackets( context[47], context[50] );
      refalrts::link_brackets( context[38], context[32] );
      refalrts::link_brackets( context[44], context[33] );
      refalrts::link_brackets( context[26], context[36] );
      refalrts::push_stack( vm, context[43] );
      refalrts::push_stack( vm, context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[53], context[59] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_elem( res, context[52] );
      res = refalrts::splice_evar( res, context[37], context[27] );
      res = refalrts::splice_evar( res, context[47], context[51] );
      res = refalrts::splice_evar( res, context[31], context[7] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      res = refalrts::splice_evar( res, context[44], context[46] );
      res = refalrts::splice_evar( res, context[26], context[39] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_elem( res, context[43] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGenSubst/4 s.new5/13 (/16 # Junk/18 e.new6/14 )/17 e.new7/2 (/11 e.new9/9 )/12 (/7 e.new8/5 )/8 >/1
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = refalrts::ident_left( identifiers[ident_Junk], context[14], context[15] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.new6 as range 14
  // closed e.new7 as range 2
  // closed e.new9 as range 9
  // closed e.new8 as range 5
  do {
    // </0 & DoGenSubst/4 s.ContextOffset/13 (/16 # Junk/18 e.Junk/19 )/17 (/29 # E/31 s.Num/32 (/35 # Var/37 'e'/38 e.Index/33 )/36 e.Range/27 )/30 e.SubstitutesAnsJunks/21 (/11 e.Vars/23 )/12 (/7 e.Commands/25 )/8 >/1
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
    // closed e.Junk as range 19
    // closed e.SubstitutesAnsJunks as range 21
    // closed e.Vars as range 23
    // closed e.Commands as range 25
    if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
      continue;
    context[33] = 0;
    context[34] = 0;
    context[35] = refalrts::brackets_left( context[33], context[34], context[27], context[28] );
    if( ! context[35] )
      continue;
    refalrts::bracket_pointers(context[35], context[36]);
    context[37] = refalrts::ident_left( identifiers[ident_Var], context[33], context[34] );
    if( ! context[37] )
      continue;
    context[38] = refalrts::char_left( 'e', context[33], context[34] );
    if( ! context[38] )
      continue;
    // closed e.Index as range 33
    // closed e.Range as range 27
    //DEBUG: s.ContextOffset: 13
    //DEBUG: e.Junk: 19
    //DEBUG: e.SubstitutesAnsJunks: 21
    //DEBUG: e.Vars: 23
    //DEBUG: e.Commands: 25
    //DEBUG: s.Num: 32
    //DEBUG: e.Index: 33
    //DEBUG: e.Range: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </39 & DoGenSubst$36=3@1/40 Tile{ AsIs: (/11 AsIs: e.Vars/23 AsIs: )/12 AsIs: (/7 } e.Index/33/41 )/43 s.ContextOffset/13/44 (/45 Tile{ AsIs: e.Commands/25 } Tile{ AsIs: )/30 } s.Num/32/46 </47 & MakeSavers/48 Tile{ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset/13 HalfReuse: >/16 HalfReuse: (/18 } # Junk/49 Tile{ AsIs: e.Junk/19 } Tile{ AsIs: (/35 AsIs: # Var/37 AsIs: 'e'/38 AsIs: e.Index/33 HalfReuse: s.ContextOffset13 /36 } )/50 Tile{ AsIs: )/17 AsIs: (/29 AsIs: # E/31 AsIs: s.Num/32 } Tile{ AsIs: e.Range/27 } )/51 Tile{ AsIs: e.SubstitutesAnsJunks/21 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_gen_DoGenSubst_S36A3Z1]);
    refalrts::copy_evar(vm, context[41], context[42], context[33], context[34]);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::copy_stvar(vm, context[44], context[13]);
    refalrts::alloc_open_bracket(vm, context[45]);
    refalrts::copy_stvar(vm, context[46], context[32]);
    refalrts::alloc_open_call(vm, context[47]);
    refalrts::alloc_name(vm, context[48], functions[efunc_MakeSavers]);
    refalrts::alloc_ident(vm, context[49], identifiers[ident_Junk]);
    refalrts::alloc_close_bracket(vm, context[50]);
    refalrts::alloc_close_bracket(vm, context[51]);
    refalrts::update_name(context[4], functions[efunc_Inc2]);
    refalrts::reinit_close_call(context[16]);
    refalrts::reinit_open_bracket(context[18]);
    refalrts::reinit_svar( context[36], context[13] );
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[47] );
    refalrts::link_brackets( context[29], context[51] );
    refalrts::link_brackets( context[18], context[17] );
    refalrts::link_brackets( context[35], context[50] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[45], context[30] );
    refalrts::link_brackets( context[7], context[43] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_elem( res, context[51] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[17], context[32] );
    res = refalrts::splice_elem( res, context[50] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_elem( res, context[49] );
    res = refalrts::splice_evar( res, context[0], context[18] );
    res = refalrts::splice_evar( res, context[46], context[48] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[43], context[45] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[11], context[7] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGenSubst/4 s.ContextOffset/13 (/16 # Junk/18 e.MarkedPattern/14 )/17 (/11 e.Vars/9 )/12 (/7 e.Commands/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedPattern as range 14
  // closed e.Vars as range 9
  // closed e.Commands as range 5
  //DEBUG: s.ContextOffset: 13
  //DEBUG: e.MarkedPattern: 14
  //DEBUG: e.Vars: 9
  //DEBUG: e.Commands: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.ContextOffset/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.ContextOffset13 /17 AsIs: (/11 AsIs: e.Vars/9 AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.MarkedPattern/14 } )/19 Tile{ AsIs: (/16 Reuse: # CmdComment/18 } Tile{ AsIs: </0 Reuse: & TextFromExpr/4 } e.MarkedPattern/14/20 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Commands/5 } Tile{ ]] }
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
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_elem( res, context[19] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoGenSubst("DoGenSubst", COOKIE1_, COOKIE2_, func_DoGenSubst);


static refalrts::FnResult func_IncVarOffsetm_Saved(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & IncVarOffset-Saved/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & IncVarOffset-Saved/4 s.new1/5 s.new2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & IncVarOffset-Saved/4 s.ContextOffset/5 'e'/6 >/1
    if( ! refalrts::char_term( 'e', context[6] ) )
      continue;
    //DEBUG: s.ContextOffset: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset/5 HalfReuse: >/6 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Inc2]);
    refalrts::reinit_close_call(context[6]);
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & IncVarOffset-Saved/4 s.ContextOffset/5 't'/6 >/1
    if( ! refalrts::char_term( 't', context[6] ) )
      continue;
    //DEBUG: s.ContextOffset: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset/5 HalfReuse: >/6 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Inc2]);
    refalrts::reinit_close_call(context[6]);
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & IncVarOffset-Saved/4 s.ContextOffset/5 's'/6 >/1
  if( ! refalrts::char_term( 's', context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ContextOffset: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.ContextOffset/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 } 1/7 Tile{ HalfReuse: s.ContextOffset5 /6 AsIs: >/1 ]] }
  refalrts::alloc_number(vm, context[7], 1UL);
  refalrts::update_name(context[4], functions[efunc_Add]);
  refalrts::reinit_svar( context[6], context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_elem( res, context[7] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IncVarOffsetm_Saved("IncVarOffset-Saved", COOKIE1_, COOKIE2_, func_IncVarOffsetm_Saved);


static refalrts::FnResult func_MakeRepeatedSave(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeRepeatedSave/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & MakeRepeatedSave/4 s.new1/5 s.new2/6 s.new3/7 s.new4/8 s.new5/9 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & MakeRepeatedSave/4 s.Direction/5 s.Num/6 't'/7 s.ContextOffset/8 s.SampleOffset/9 >/1
    if( ! refalrts::char_term( 't', context[7] ) )
      continue;
    //DEBUG: s.Direction: 5
    //DEBUG: s.Num: 6
    //DEBUG: s.ContextOffset: 8
    //DEBUG: s.SampleOffset: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.ContextOffset/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdRepeatedTVarSave/4 AsIs: s.Direction/5 AsIs: s.Num/6 HalfReuse: s.ContextOffset8 /7 } Tile{ AsIs: s.SampleOffset/9 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdRepeatedTVarSave]);
    refalrts::reinit_svar( context[7], context[8] );
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeRepeatedSave/4 s.Direction/5 s.Num/6 s.Mode/7 s.ContextOffset/8 s.SampleOffset/9 >/1
  //DEBUG: s.Direction: 5
  //DEBUG: s.Num: 6
  //DEBUG: s.Mode: 7
  //DEBUG: s.ContextOffset: 8
  //DEBUG: s.SampleOffset: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdRepeated/4 AsIs: s.Direction/5 AsIs: s.Num/6 AsIs: s.Mode/7 AsIs: s.ContextOffset/8 AsIs: s.SampleOffset/9 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdRepeated]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeRepeatedSave("MakeRepeatedSave", COOKIE1_, COOKIE2_, func_MakeRepeatedSave);


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


static refalrts::FnResult func_gen_DoGenSubst_S36A3Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & DoGenSubst$36=3@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoGenSubst$36=3@1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 s.new3/13 (/16 e.new4/14 )/17 s.new5/18 e.new6/2 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.new4 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new6 as range 2
  do {
    // </0 & DoGenSubst$36=3@1/4 (/7 e.Vars0/19 )/8 (/11 e.Index0/21 )/12 s.VarOffset0/13 (/16 e.Commands0/23 )/17 s.Num/18 s.ContextOffset$a/27 (/30 e.CmdSaves/28 )/31 e.SubstitutesAnsJunks$a/25 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[9];
    context[22] = context[10];
    context[23] = context[14];
    context[24] = context[15];
    context[25] = context[2];
    context[26] = context[3];
    // closed e.Vars0 as range 19
    // closed e.Index0 as range 21
    // closed e.Commands0 as range 23
    if( ! refalrts::svar_left( context[27], context[25], context[26] ) )
      continue;
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[25], context[26] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.CmdSaves as range 28
    // closed e.SubstitutesAnsJunks$a as range 25
    //DEBUG: s.VarOffset0: 13
    //DEBUG: s.Num: 18
    //DEBUG: e.Vars0: 19
    //DEBUG: e.Index0: 21
    //DEBUG: e.Commands0: 23
    //DEBUG: s.ContextOffset$a: 27
    //DEBUG: e.CmdSaves: 28
    //DEBUG: e.SubstitutesAnsJunks$a: 25

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextOffset$a/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst@2/4 HalfReuse: s.ContextOffset$a27 /7 } (/32 Tile{ AsIs: e.SubstitutesAnsJunks$a/25 } )/33 (/34 Tile{ AsIs: e.Vars0/19 } Tile{ AsIs: (/30 } Tile{ HalfReuse: 'e'/8 AsIs: (/11 AsIs: e.Index0/21 AsIs: )/12 AsIs: s.VarOffset0/13 HalfReuse: )/16 } Tile{ AsIs: )/31 } (/35 Tile{ AsIs: e.Commands0/23 } Tile{ AsIs: )/17 AsIs: s.Num/18 } s.VarOffset0/13/36 Tile{ AsIs: e.CmdSaves/28 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[32]);
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::alloc_open_bracket(vm, context[34]);
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::copy_stvar(vm, context[36], context[13]);
    refalrts::update_name(context[4], functions[efunc_gen_DoGenSubst_Z2]);
    refalrts::reinit_svar( context[7], context[27] );
    refalrts::reinit_char(context[8], 'e');
    refalrts::reinit_close_bracket(context[16]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[35], context[17] );
    refalrts::link_brackets( context[34], context[31] );
    refalrts::link_brackets( context[30], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_elem( res, context[32] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGenSubst$36=3@1/4 (/7 e.Vars0/5 )/8 (/11 e.Index0/9 )/12 s.VarOffset0/13 (/16 e.Commands0/14 )/17 s.Num/18 e.dyn/2 >/1
  // closed e.Vars0 as range 5
  // closed e.Index0 as range 9
  // closed e.Commands0 as range 14
  // closed e.dyn as range 2
  //DEBUG: s.VarOffset0: 13
  //DEBUG: s.Num: 18
  //DEBUG: e.Vars0: 5
  //DEBUG: e.Index0: 9
  //DEBUG: e.Commands0: 14
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst$36=3@0/4 AsIs: (/7 AsIs: e.Vars0/5 AsIs: )/8 AsIs: (/11 AsIs: e.Index0/9 AsIs: )/12 AsIs: s.VarOffset0/13 AsIs: (/16 AsIs: e.Commands0/14 AsIs: )/17 } (/19 # CmdOpenedE/20 # AlgLeft/21 Tile{ AsIs: s.Num/18 } s.VarOffset0/13/22 )/23 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_ident(vm, context[20], identifiers[ident_CmdOpenedE]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_AlgLeft]);
  refalrts::copy_stvar(vm, context[22], context[13]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_DoGenSubst_S36A3Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[19], context[23] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoGenSubst_S36A3Z1("DoGenSubst$36=3@1", COOKIE1_, COOKIE2_, func_gen_DoGenSubst_S36A3Z1);


static refalrts::FnResult func_gen_MakeRepeatedSave_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeRepeatedSave@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & MakeRepeatedSave@1/4 s.new1/5 s.new2/6 s.new3/7 s.new4/8 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & MakeRepeatedSave@1/4 s.Num0/5 't'/6 s.ContextOffset0/7 s.SampleOffset0/8 >/1
    if( ! refalrts::char_term( 't', context[6] ) )
      continue;
    //DEBUG: s.Num0: 5
    //DEBUG: s.ContextOffset0: 7
    //DEBUG: s.SampleOffset0: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Num0/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdRepeatedTVarSave/4 } # AlgLeft/9 Tile{ HalfReuse: s.Num05 /6 AsIs: s.ContextOffset0/7 AsIs: s.SampleOffset0/8 HalfReuse: )/1 ]] }
    refalrts::alloc_ident(vm, context[9], identifiers[ident_AlgLeft]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdRepeatedTVarSave]);
    refalrts::reinit_svar( context[6], context[5] );
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_elem( res, context[9] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & MakeRepeatedSave@1/4 s.Num0/5 s.Mode/6 s.ContextOffset0/7 s.SampleOffset0/8 >/1
    //DEBUG: s.Num0: 5
    //DEBUG: s.Mode: 6
    //DEBUG: s.ContextOffset0: 7
    //DEBUG: s.SampleOffset0: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/9 Tile{ HalfReuse: # CmdRepeated/0 HalfReuse: # AlgLeft/4 AsIs: s.Num0/5 AsIs: s.Mode/6 AsIs: s.ContextOffset0/7 AsIs: s.SampleOffset0/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::reinit_ident(context[0], identifiers[ident_CmdRepeated]);
    refalrts::reinit_ident(context[4], identifiers[ident_AlgLeft]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[9], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeRepeatedSave@1/4 s.Num0/5 s.dyn2/6 s.ContextOffset0/7 s.SampleOffset0/8 >/1
  //DEBUG: s.Num0: 5
  //DEBUG: s.dyn2: 6
  //DEBUG: s.ContextOffset0: 7
  //DEBUG: s.SampleOffset0: 8

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & MakeRepeatedSave@0/0 HalfReuse: # AlgLeft/4 AsIs: s.Num0/5 AsIs: s.dyn2/6 AsIs: s.ContextOffset0/7 AsIs: s.SampleOffset0/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MakeRepeatedSave_Z0]);
  refalrts::reinit_ident(context[4], identifiers[ident_AlgLeft]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeRepeatedSave_Z1("MakeRepeatedSave@1", COOKIE1_, COOKIE2_, func_gen_MakeRepeatedSave_Z1);


static refalrts::FnResult func_gen_MakeRepeatedSave_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & MakeRepeatedSave@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & MakeRepeatedSave@2/4 s.new1/5 s.new2/6 s.new3/7 s.new4/8 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & MakeRepeatedSave@2/4 s.Num0/5 't'/6 s.ContextOffset0/7 s.SampleOffset0/8 >/1
    if( ! refalrts::char_term( 't', context[6] ) )
      continue;
    //DEBUG: s.Num0: 5
    //DEBUG: s.ContextOffset0: 7
    //DEBUG: s.SampleOffset0: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Num0/5 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdRepeatedTVarSave/4 } # AlgRight/9 Tile{ HalfReuse: s.Num05 /6 AsIs: s.ContextOffset0/7 AsIs: s.SampleOffset0/8 HalfReuse: )/1 ]] }
    refalrts::alloc_ident(vm, context[9], identifiers[ident_AlgRight]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdRepeatedTVarSave]);
    refalrts::reinit_svar( context[6], context[5] );
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_elem( res, context[9] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & MakeRepeatedSave@2/4 s.Num0/5 s.Mode/6 s.ContextOffset0/7 s.SampleOffset0/8 >/1
    //DEBUG: s.Num0: 5
    //DEBUG: s.Mode: 6
    //DEBUG: s.ContextOffset0: 7
    //DEBUG: s.SampleOffset0: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/9 Tile{ HalfReuse: # CmdRepeated/0 HalfReuse: # AlgRight/4 AsIs: s.Num0/5 AsIs: s.Mode/6 AsIs: s.ContextOffset0/7 AsIs: s.SampleOffset0/8 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::reinit_ident(context[0], identifiers[ident_CmdRepeated]);
    refalrts::reinit_ident(context[4], identifiers[ident_AlgRight]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[9], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeRepeatedSave@2/4 s.Num0/5 s.dyn2/6 s.ContextOffset0/7 s.SampleOffset0/8 >/1
  //DEBUG: s.Num0: 5
  //DEBUG: s.dyn2: 6
  //DEBUG: s.ContextOffset0: 7
  //DEBUG: s.SampleOffset0: 8

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & MakeRepeatedSave@0/0 HalfReuse: # AlgRight/4 AsIs: s.Num0/5 AsIs: s.dyn2/6 AsIs: s.ContextOffset0/7 AsIs: s.SampleOffset0/8 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::reinit_name(context[0], functions[efunc_gen_MakeRepeatedSave_Z0]);
  refalrts::reinit_ident(context[4], identifiers[ident_AlgRight]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_MakeRepeatedSave_Z2("MakeRepeatedSave@2", COOKIE1_, COOKIE2_, func_gen_MakeRepeatedSave_Z2);


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


static refalrts::FnResult func_gen_DoGenSubst_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 93 elems
  refalrts::Iter context[93];
  refalrts::zeros( context, 93 );
  // </0 & DoGenSubst@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoGenSubst@2/4 s.new1/5 (/8 e.new2/6 )/9 (/12 e.new3/10 )/13 (/16 e.new4/14 )/17 s.new5/18 s.new6/19 e.new7/2 >/1
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
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.new2 as range 6
  // closed e.new3 as range 10
  // closed e.new4 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 2
  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # T/41 s.Num/53 (/49 # Symbol/51 # Char/52 s.Char/54 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_T], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Symbol], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::ident_left( identifiers[ident_Char], context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      if( ! refalrts::svar_left( context[54], context[47], context[48] ) )
        continue;
      if( ! refalrts::empty_seq( context[47], context[48] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53
      //DEBUG: s.Char: 54

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.ContextOffset$a/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } Tile{ HalfReuse: s.ContextOffset$a5 /8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Char/41 } s.Char/54/55 Tile{ AsIs: s.Num/53 } Tile{ HalfReuse: )/46 AsIs: e.Junk2/42 AsIs: )/45 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/56 # AlgLeft/57 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } Tile{ HalfReuse: (/1 } Tile{ HalfReuse: # CmdChar/49 Reuse: # AlgTerm/51 HalfReuse: s.Num53 /52 AsIs: s.Char/54 AsIs: )/50 AsIs: )/40 HalfReuse: >/44 } Tile{ ]] }
      refalrts::copy_stvar(vm, context[55], context[54]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_AlgLeft]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_svar( context[8], context[5] );
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Char]);
      refalrts::reinit_close_bracket(context[46]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_ident(context[49], identifiers[ident_CmdChar]);
      refalrts::update_ident(context[51], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[52], context[53] );
      refalrts::reinit_close_call(context[44]);
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[40] );
      refalrts::link_brackets( context[1], context[50] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[35], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[49], context[44] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[46], context[45] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_elem( res, context[55] );
      res = refalrts::splice_evar( res, context[8], context[41] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # T/41 s.Num/53 (/49 # Symbol/51 # Name/52 e.Name/47 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_T], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Symbol], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::ident_left( identifiers[ident_Name], context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Name as range 47
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Name: 47
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.ContextOffset$a/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } Tile{ HalfReuse: s.ContextOffset$a5 /8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Name/41 } e.Name/47/54 Tile{ AsIs: s.Num/53 } Tile{ HalfReuse: )/46 AsIs: e.Junk2/42 AsIs: )/45 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/56 Tile{ HalfReuse: # AlgLeft/1 } Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } (/57 Tile{ HalfReuse: # CmdName/49 Reuse: # AlgTerm/51 HalfReuse: s.Num53 /52 AsIs: e.Name/47 AsIs: )/50 AsIs: )/40 HalfReuse: >/44 } Tile{ ]] }
      refalrts::copy_evar(vm, context[54], context[55], context[47], context[48]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_svar( context[8], context[5] );
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Name]);
      refalrts::reinit_close_bracket(context[46]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_ident(context[1], identifiers[ident_AlgLeft]);
      refalrts::reinit_ident(context[49], identifiers[ident_CmdName]);
      refalrts::update_ident(context[51], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[52], context[53] );
      refalrts::reinit_close_call(context[44]);
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[40] );
      refalrts::link_brackets( context[57], context[50] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[35], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[49], context[44] );
      res = refalrts::splice_elem( res, context[57] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[46], context[45] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_evar( res, context[8], context[41] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # T/41 s.Num/53 (/49 # Symbol/51 # Identifier/52 e.Ident/47 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_T], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Symbol], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::ident_left( identifiers[ident_Identifier], context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Ident as range 47
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Ident: 47
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.ContextOffset$a/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } Tile{ HalfReuse: s.ContextOffset$a5 /8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Identifier/41 } e.Ident/47/54 Tile{ AsIs: s.Num/53 } Tile{ HalfReuse: )/46 AsIs: e.Junk2/42 AsIs: )/45 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/56 Tile{ HalfReuse: # AlgLeft/1 } Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } (/57 Tile{ HalfReuse: # CmdIdent/49 Reuse: # AlgTerm/51 HalfReuse: s.Num53 /52 AsIs: e.Ident/47 AsIs: )/50 AsIs: )/40 HalfReuse: >/44 } Tile{ ]] }
      refalrts::copy_evar(vm, context[54], context[55], context[47], context[48]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_svar( context[8], context[5] );
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Identifier]);
      refalrts::reinit_close_bracket(context[46]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_ident(context[1], identifiers[ident_AlgLeft]);
      refalrts::reinit_ident(context[49], identifiers[ident_CmdIdent]);
      refalrts::update_ident(context[51], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[52], context[53] );
      refalrts::reinit_close_call(context[44]);
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[40] );
      refalrts::link_brackets( context[57], context[50] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[35], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[49], context[44] );
      res = refalrts::splice_elem( res, context[57] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[46], context[45] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_evar( res, context[8], context[41] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # T/41 s.Num/53 (/49 # Symbol/51 # Number/52 s.Value/54 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_T], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Symbol], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::ident_left( identifiers[ident_Number], context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      if( ! refalrts::svar_left( context[54], context[47], context[48] ) )
        continue;
      if( ! refalrts::empty_seq( context[47], context[48] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53
      //DEBUG: s.Value: 54

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.ContextOffset$a/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } Tile{ HalfReuse: s.ContextOffset$a5 /8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Number/41 } s.Value/54/55 Tile{ AsIs: s.Num/53 } Tile{ HalfReuse: )/46 AsIs: e.Junk2/42 AsIs: )/45 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/56 # AlgLeft/57 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } Tile{ HalfReuse: (/1 } Tile{ HalfReuse: # CmdNumber/49 Reuse: # AlgTerm/51 HalfReuse: s.Num53 /52 AsIs: s.Value/54 AsIs: )/50 AsIs: )/40 HalfReuse: >/44 } Tile{ ]] }
      refalrts::copy_stvar(vm, context[55], context[54]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_AlgLeft]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_svar( context[8], context[5] );
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Number]);
      refalrts::reinit_close_bracket(context[46]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_ident(context[49], identifiers[ident_CmdNumber]);
      refalrts::update_ident(context[51], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[52], context[53] );
      refalrts::reinit_close_call(context[44]);
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[40] );
      refalrts::link_brackets( context[1], context[50] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[35], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[49], context[44] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[46], context[45] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_elem( res, context[55] );
      res = refalrts::splice_evar( res, context[8], context[41] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # T/41 s.Num/52 (/49 # Brackets/51 e.SubRange/47 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_T], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Brackets], context[47], context[48] );
      if( ! context[51] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.SubRange as range 47
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[52], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.SubRange: 47
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 52

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </53 & DoGenSubst/54 Tile{ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # TkOpenBracket/39 HalfReuse: s.Num52 /41 } Tile{ AsIs: )/9 } )/55 (/56 Tile{ HalfReuse: # E/49 HalfReuse: s.ContextOffset$a5 /51 AsIs: e.SubRange/47 AsIs: )/50 HalfReuse: (/40 HalfReuse: # Junk/44 HalfReuse: (/46 } # TkCloseBracket/57 </58 & Add/59 1/60 Tile{ AsIs: s.Num/52 } >/61 Tile{ AsIs: )/45 } Tile{ AsIs: e.Junk2/42 } )/62 Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/63 # AlgLeft/64 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/65 Tile{ AsIs: e.CmdSaves/26 } (/66 # CmdBrackets/67 # AlgTerm/68 s.Num/52/69 s.ContextOffset$a/5/70 )/71 )/72 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[53]);
      refalrts::alloc_name(vm, context[54], functions[efunc_DoGenSubst]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_TkCloseBracket]);
      refalrts::alloc_open_call(vm, context[58]);
      refalrts::alloc_name(vm, context[59], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[60], 1UL);
      refalrts::alloc_close_call(vm, context[61]);
      refalrts::alloc_close_bracket(vm, context[62]);
      refalrts::alloc_ident(vm, context[63], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[64], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[65]);
      refalrts::alloc_open_bracket(vm, context[66]);
      refalrts::alloc_ident(vm, context[67], identifiers[ident_CmdBrackets]);
      refalrts::alloc_ident(vm, context[68], identifiers[ident_AlgTerm]);
      refalrts::copy_stvar(vm, context[69], context[52]);
      refalrts::copy_stvar(vm, context[70], context[5]);
      refalrts::alloc_close_bracket(vm, context[71]);
      refalrts::alloc_close_bracket(vm, context[72]);
      refalrts::update_name(context[4], functions[efunc_Inc2]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_TkOpenBracket]);
      refalrts::reinit_svar( context[41], context[52] );
      refalrts::reinit_ident(context[49], identifiers[ident_E]);
      refalrts::reinit_svar( context[51], context[5] );
      refalrts::reinit_open_bracket(context[40]);
      refalrts::reinit_ident(context[44], identifiers[ident_Junk]);
      refalrts::reinit_open_bracket(context[46]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[53] );
      refalrts::link_brackets( context[16], context[72] );
      refalrts::link_brackets( context[66], context[71] );
      refalrts::link_brackets( context[17], context[65] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[40], context[62] );
      refalrts::link_brackets( context[46], context[45] );
      refalrts::push_stack( vm, context[61] );
      refalrts::push_stack( vm, context[58] );
      refalrts::link_brackets( context[56], context[50] );
      refalrts::link_brackets( context[34], context[55] );
      refalrts::link_brackets( context[35], context[9] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[66], context[72] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[65] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[63], context[64] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[62] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[61] );
      res = refalrts::splice_elem( res, context[52] );
      res = refalrts::splice_evar( res, context[57], context[60] );
      res = refalrts::splice_evar( res, context[49], context[46] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[0], context[41] );
      res = refalrts::splice_evar( res, context[53], context[54] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # T/41 s.Num/56 (/49 # ADT-Brackets/51 (/54 e.Name/52 )/55 e.SubRange/47 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_T], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = 0;
      context[53] = 0;
      context[54] = refalrts::brackets_left( context[52], context[53], context[47], context[48] );
      if( ! context[54] )
        continue;
      refalrts::bracket_pointers(context[54], context[55]);
      // closed e.Junk1 as range 32
      // closed e.Name as range 52
      // closed e.SubRange as range 47
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[56], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Name: 52
      //DEBUG: e.SubRange: 47
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 56

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </57 & DoGenSubst/58 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.ContextOffset$a/5 } 3/59 Tile{ HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # TkOpenADT/39 HalfReuse: s.Num56 /41 } )/60 Tile{ AsIs: (/49 Reuse: # Symbol/51 HalfReuse: # Name/54 AsIs: e.Name/52 HalfReuse: </55 } & Add/61 s.ContextOffset$a/5/62 2/63 >/64 Tile{ AsIs: )/50 AsIs: )/40 AsIs: (/44 Reuse: # E/46 } s.ContextOffset$a/5/65 Tile{ AsIs: e.SubRange/47 } Tile{ AsIs: )/9 } (/66 # Junk/67 (/68 # TkCloseADT/69 </70 & Add/71 1/72 Tile{ AsIs: s.Num/56 } >/73 Tile{ AsIs: )/45 } Tile{ AsIs: e.Junk2/42 } )/74 Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/75 # AlgLeft/76 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/77 Tile{ AsIs: e.CmdSaves/26 } (/78 # CmdADTSave/79 # AlgTerm/80 s.Num/56/81 s.ContextOffset$a/5/82 e.Name/52/83 )/85 )/86 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[57]);
      refalrts::alloc_name(vm, context[58], functions[efunc_DoGenSubst]);
      refalrts::alloc_number(vm, context[59], 3UL);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_name(vm, context[61], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[62], context[5]);
      refalrts::alloc_number(vm, context[63], 2UL);
      refalrts::alloc_close_call(vm, context[64]);
      refalrts::copy_stvar(vm, context[65], context[5]);
      refalrts::alloc_open_bracket(vm, context[66]);
      refalrts::alloc_ident(vm, context[67], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[68]);
      refalrts::alloc_ident(vm, context[69], identifiers[ident_TkCloseADT]);
      refalrts::alloc_open_call(vm, context[70]);
      refalrts::alloc_name(vm, context[71], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[72], 1UL);
      refalrts::alloc_close_call(vm, context[73]);
      refalrts::alloc_close_bracket(vm, context[74]);
      refalrts::alloc_ident(vm, context[75], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[76], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[77]);
      refalrts::alloc_open_bracket(vm, context[78]);
      refalrts::alloc_ident(vm, context[79], identifiers[ident_CmdADTSave]);
      refalrts::alloc_ident(vm, context[80], identifiers[ident_AlgTerm]);
      refalrts::copy_stvar(vm, context[81], context[56]);
      refalrts::copy_stvar(vm, context[82], context[5]);
      refalrts::copy_evar(vm, context[83], context[84], context[52], context[53]);
      refalrts::alloc_close_bracket(vm, context[85]);
      refalrts::alloc_close_bracket(vm, context[86]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_TkOpenADT]);
      refalrts::reinit_svar( context[41], context[56] );
      refalrts::update_ident(context[51], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[54], identifiers[ident_Name]);
      refalrts::reinit_open_call(context[55]);
      refalrts::update_ident(context[46], identifiers[ident_E]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[57] );
      refalrts::link_brackets( context[16], context[86] );
      refalrts::link_brackets( context[78], context[85] );
      refalrts::link_brackets( context[17], context[77] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[66], context[74] );
      refalrts::link_brackets( context[68], context[45] );
      refalrts::push_stack( vm, context[73] );
      refalrts::push_stack( vm, context[70] );
      refalrts::link_brackets( context[44], context[9] );
      refalrts::link_brackets( context[34], context[40] );
      refalrts::link_brackets( context[49], context[50] );
      refalrts::push_stack( vm, context[64] );
      refalrts::push_stack( vm, context[55] );
      refalrts::link_brackets( context[35], context[60] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[78], context[86] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[77] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[75], context[76] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[74] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_elem( res, context[73] );
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_evar( res, context[66], context[72] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_elem( res, context[65] );
      res = refalrts::splice_evar( res, context[50], context[46] );
      res = refalrts::splice_evar( res, context[61], context[64] );
      res = refalrts::splice_evar( res, context[49], context[55] );
      res = refalrts::splice_elem( res, context[60] );
      res = refalrts::splice_evar( res, context[8], context[41] );
      res = refalrts::splice_elem( res, context[59] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[57], context[58] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/36 # Junk/38 e.Junk1/34 )/37 (/41 # T/43 s.Num/54 (/51 # Var/53 s.Mode/55 e.Index/49 )/52 )/42 (/46 # Junk/48 e.Junk2/44 )/47 e.Substs-E/30 )/9 (/12 e.Vars-B/56 (/62 s.Mode/64 (/67 e.Index/69 )/68 e.Offsets/60 s.SampleOffset/71 )/63 e.Vars-E/58 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[23];
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[30], context[31] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_left( context[39], context[40], context[30], context[31] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_T], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = 0;
      context[45] = 0;
      context[46] = refalrts::brackets_left( context[44], context[45], context[30], context[31] );
      if( ! context[46] )
        continue;
      refalrts::bracket_pointers(context[46], context[47]);
      context[48] = refalrts::ident_left( identifiers[ident_Junk], context[44], context[45] );
      if( ! context[48] )
        continue;
      context[49] = 0;
      context[50] = 0;
      context[51] = refalrts::brackets_right( context[49], context[50], context[39], context[40] );
      if( ! context[51] )
        continue;
      refalrts::bracket_pointers(context[51], context[52]);
      context[53] = refalrts::ident_left( identifiers[ident_Var], context[49], context[50] );
      if( ! context[53] )
        continue;
      // closed e.Junk1 as range 34
      // closed e.Junk2 as range 44
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[54], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      if( ! refalrts::svar_left( context[55], context[49], context[50] ) )
        continue;
      // closed e.Index as range 49
      context[56] = 0;
      context[57] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[58] = context[32];
        context[59] = context[33];
        context[60] = 0;
        context[61] = 0;
        context[62] = refalrts::brackets_left( context[60], context[61], context[58], context[59] );
        if( ! context[62] )
          continue;
        refalrts::bracket_pointers(context[62], context[63]);
        if( ! refalrts::repeated_stvar_left( vm, context[64], context[55], context[60], context[61] ) )
          continue;
        context[65] = 0;
        context[66] = 0;
        context[67] = refalrts::brackets_left( context[65], context[66], context[60], context[61] );
        if( ! context[67] )
          continue;
        refalrts::bracket_pointers(context[67], context[68]);
        if( ! refalrts::repeated_evar_left( vm, context[69], context[70], context[49], context[50], context[65], context[66] ) )
          continue;
        if( ! refalrts::empty_seq( context[65], context[66] ) )
          continue;
        // closed e.Vars-E as range 58
        if( ! refalrts::svar_right( context[71], context[60], context[61] ) )
          continue;
        // closed e.Offsets as range 60
        //DEBUG: s.ContextOffset$a: 5
        //DEBUG: s.Num0: 18
        //DEBUG: s.VarOffset0: 19
        //DEBUG: e.Commands0: 24
        //DEBUG: e.CmdSaves: 26
        //DEBUG: e.Substs-B: 28
        //DEBUG: e.Junk1: 34
        //DEBUG: e.Junk2: 44
        //DEBUG: e.Substs-E: 30
        //DEBUG: s.Num: 54
        //DEBUG: s.Mode: 55
        //DEBUG: e.Index: 49
        //DEBUG: e.Vars-B: 56
        //DEBUG: e.Vars-E: 58
        //DEBUG: s.SampleOffset: 71
        //DEBUG: e.Offsets: 60

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 AsIs: s.ContextOffset$a/5 } Tile{ AsIs: e.Substs-B/28 } Tile{ AsIs: (/36 AsIs: # Junk/38 } Tile{ AsIs: e.Junk1/34 } Tile{ AsIs: (/51 AsIs: # Var/53 AsIs: s.Mode/55 AsIs: e.Index/49 HalfReuse: s.Num54 /52 AsIs: )/42 } Tile{ AsIs: e.Junk2/44 } Tile{ AsIs: )/47 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars-B/56 AsIs: (/62 AsIs: s.Mode/64 AsIs: (/67 AsIs: e.Index/69 AsIs: )/68 AsIs: e.Offsets/60 AsIs: s.SampleOffset/71 HalfReuse: s.Num54 /63 } Tile{ AsIs: )/9 } Tile{ AsIs: e.Vars-E/58 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } Tile{ HalfReuse: # CmdOpenedE/46 Reuse: # AlgLeft/48 } Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ HalfReuse: )/8 } Tile{ AsIs: e.CmdSaves/26 } Tile{ HalfReuse: (/37 HalfReuse: # CmdRepeated/41 Reuse: # AlgTerm/43 AsIs: s.Num/54 } s.Mode/64/72 s.Num/54/73 s.SampleOffset/71/74 )/75 )/76 Tile{ AsIs: >/1 ]] }
        refalrts::copy_stvar(vm, context[72], context[64]);
        refalrts::copy_stvar(vm, context[73], context[54]);
        refalrts::copy_stvar(vm, context[74], context[71]);
        refalrts::alloc_close_bracket(vm, context[75]);
        refalrts::alloc_close_bracket(vm, context[76]);
        refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
        refalrts::reinit_svar( context[52], context[54] );
        refalrts::reinit_svar( context[63], context[54] );
        refalrts::reinit_open_bracket(context[17]);
        refalrts::reinit_ident(context[46], identifiers[ident_CmdOpenedE]);
        refalrts::update_ident(context[48], identifiers[ident_AlgLeft]);
        refalrts::reinit_close_bracket(context[8]);
        refalrts::reinit_open_bracket(context[37]);
        refalrts::reinit_ident(context[41], identifiers[ident_CmdRepeated]);
        refalrts::update_ident(context[43], identifiers[ident_AlgTerm]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[16], context[76] );
        refalrts::link_brackets( context[37], context[75] );
        refalrts::link_brackets( context[17], context[8] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::link_brackets( context[62], context[9] );
        refalrts::link_brackets( context[67], context[68] );
        refalrts::link_brackets( context[36], context[47] );
        refalrts::link_brackets( context[51], context[42] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[72], context[76] );
        res = refalrts::splice_evar( res, context[37], context[54] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[46], context[48] );
        res = refalrts::splice_evar( res, context[13], context[17] );
        res = refalrts::splice_evar( res, context[58], context[59] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[12], context[63] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_elem( res, context[47] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[51], context[42] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[36], context[38] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[56], context[57], context[32], context[33] ) );
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # T/41 s.Num/53 (/49 # Var/51 't'/52 e.Index/47 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_T], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Var], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::char_left( 't', context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Index as range 47
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Index: 47
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num/53 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst@2/4 AsIs: s.ContextOffset$a/5 AsIs: (/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # Var/39 HalfReuse: 't'/41 } e.Index/47/54 Tile{ HalfReuse: s.Num53 /44 HalfReuse: )/46 AsIs: e.Junk2/42 AsIs: )/45 AsIs: e.Substs-E/30 AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.Vars/22 } Tile{ AsIs: (/49 HalfReuse: 't'/51 HalfReuse: (/52 AsIs: e.Index/47 AsIs: )/50 HalfReuse: s.Num53 /40 } )/56 Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 AsIs: )/17 AsIs: s.Num0/18 AsIs: s.VarOffset0/19 AsIs: e.CmdSaves/26 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[54], context[55], context[47], context[48]);
      refalrts::alloc_close_bracket(vm, context[56]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Var]);
      refalrts::reinit_char(context[41], 't');
      refalrts::reinit_svar( context[44], context[53] );
      refalrts::reinit_close_bracket(context[46]);
      refalrts::reinit_char(context[51], 't');
      refalrts::reinit_open_bracket(context[52]);
      refalrts::reinit_svar( context[40], context[53] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[49], context[56] );
      refalrts::link_brackets( context[52], context[50] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[35], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_evar( res, context[49], context[40] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[44], context[12] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      refalrts::splice_to_freelist_open( vm, context[41], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # T/41 s.Num/53 (/49 # Var/51 's'/52 e.Index/47 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_T], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Var], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::char_left( 's', context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Index as range 47
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Index: 47
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 AsIs: s.ContextOffset$a/5 } Tile{ AsIs: e.Substs-B/28 } Tile{ AsIs: (/34 AsIs: # Junk/36 } Tile{ AsIs: e.Junk1/32 } Tile{ AsIs: (/49 AsIs: # Var/51 AsIs: 's'/52 AsIs: e.Index/47 HalfReuse: s.Num53 /50 AsIs: )/40 } Tile{ AsIs: e.Junk2/42 } Tile{ AsIs: )/45 AsIs: e.Substs-E/30 HalfReuse: (/9 } Tile{ AsIs: e.Vars/22 } Tile{ AsIs: (/44 HalfReuse: 's'/46 } Tile{ AsIs: (/12 } e.Index/47/54 Tile{ HalfReuse: )/8 } s.Num/53/56 )/57 Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/58 # AlgLeft/59 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/60 Tile{ AsIs: e.CmdSaves/26 } Tile{ HalfReuse: (/35 HalfReuse: # CmdVar/39 Reuse: # AlgTerm/41 AsIs: s.Num/53 } 's'/61 s.Num/53/62 )/63 )/64 Tile{ AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[54], context[55], context[47], context[48]);
      refalrts::copy_stvar(vm, context[56], context[53]);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_char(vm, context[61], 's');
      refalrts::copy_stvar(vm, context[62], context[53]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::alloc_close_bracket(vm, context[64]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_svar( context[50], context[53] );
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_char(context[46], 's');
      refalrts::reinit_close_bracket(context[8]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_CmdVar]);
      refalrts::update_ident(context[41], identifiers[ident_AlgTerm]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[64] );
      refalrts::link_brackets( context[35], context[63] );
      refalrts::link_brackets( context[17], context[60] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::link_brackets( context[44], context[57] );
      refalrts::link_brackets( context[12], context[8] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[49], context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[61], context[64] );
      res = refalrts::splice_evar( res, context[35], context[53] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[60] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[44], context[46] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[45], context[9] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[49], context[40] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[34], context[36] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # S/41 s.Num/53 (/49 # Symbol/51 # Char/52 s.Char/54 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_S], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Symbol], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::ident_left( identifiers[ident_Char], context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      if( ! refalrts::svar_left( context[54], context[47], context[48] ) )
        continue;
      if( ! refalrts::empty_seq( context[47], context[48] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53
      //DEBUG: s.Char: 54

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.ContextOffset$a/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } Tile{ HalfReuse: s.ContextOffset$a5 /8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Char/41 } s.Char/54/55 Tile{ AsIs: s.Num/53 } Tile{ HalfReuse: )/46 AsIs: e.Junk2/42 AsIs: )/45 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/56 # AlgLeft/57 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } Tile{ HalfReuse: (/1 } Tile{ HalfReuse: # CmdChar/49 Reuse: # AlgTerm/51 HalfReuse: s.Num53 /52 AsIs: s.Char/54 AsIs: )/50 AsIs: )/40 HalfReuse: >/44 } Tile{ ]] }
      refalrts::copy_stvar(vm, context[55], context[54]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_AlgLeft]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_svar( context[8], context[5] );
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Char]);
      refalrts::reinit_close_bracket(context[46]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_ident(context[49], identifiers[ident_CmdChar]);
      refalrts::update_ident(context[51], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[52], context[53] );
      refalrts::reinit_close_call(context[44]);
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[40] );
      refalrts::link_brackets( context[1], context[50] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[35], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[49], context[44] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[46], context[45] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_elem( res, context[55] );
      res = refalrts::splice_evar( res, context[8], context[41] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # S/41 s.Num/53 (/49 # Symbol/51 # Name/52 e.Name/47 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_S], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Symbol], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::ident_left( identifiers[ident_Name], context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Name as range 47
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Name: 47
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.ContextOffset$a/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } Tile{ HalfReuse: s.ContextOffset$a5 /8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Name/41 } e.Name/47/54 Tile{ AsIs: s.Num/53 } Tile{ HalfReuse: )/46 AsIs: e.Junk2/42 AsIs: )/45 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/56 Tile{ HalfReuse: # AlgLeft/1 } Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } (/57 Tile{ HalfReuse: # CmdName/49 Reuse: # AlgTerm/51 HalfReuse: s.Num53 /52 AsIs: e.Name/47 AsIs: )/50 AsIs: )/40 HalfReuse: >/44 } Tile{ ]] }
      refalrts::copy_evar(vm, context[54], context[55], context[47], context[48]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_svar( context[8], context[5] );
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Name]);
      refalrts::reinit_close_bracket(context[46]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_ident(context[1], identifiers[ident_AlgLeft]);
      refalrts::reinit_ident(context[49], identifiers[ident_CmdName]);
      refalrts::update_ident(context[51], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[52], context[53] );
      refalrts::reinit_close_call(context[44]);
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[40] );
      refalrts::link_brackets( context[57], context[50] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[35], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[49], context[44] );
      res = refalrts::splice_elem( res, context[57] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[46], context[45] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_evar( res, context[8], context[41] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # S/41 s.Num/53 (/49 # Symbol/51 # Identifier/52 e.Ident/47 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_S], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Symbol], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::ident_left( identifiers[ident_Identifier], context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Ident as range 47
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Ident: 47
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.ContextOffset$a/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } Tile{ HalfReuse: s.ContextOffset$a5 /8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Identifier/41 } e.Ident/47/54 Tile{ AsIs: s.Num/53 } Tile{ HalfReuse: )/46 AsIs: e.Junk2/42 AsIs: )/45 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/56 Tile{ HalfReuse: # AlgLeft/1 } Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } (/57 Tile{ HalfReuse: # CmdIdent/49 Reuse: # AlgTerm/51 HalfReuse: s.Num53 /52 AsIs: e.Ident/47 AsIs: )/50 AsIs: )/40 HalfReuse: >/44 } Tile{ ]] }
      refalrts::copy_evar(vm, context[54], context[55], context[47], context[48]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_svar( context[8], context[5] );
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Identifier]);
      refalrts::reinit_close_bracket(context[46]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_ident(context[1], identifiers[ident_AlgLeft]);
      refalrts::reinit_ident(context[49], identifiers[ident_CmdIdent]);
      refalrts::update_ident(context[51], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[52], context[53] );
      refalrts::reinit_close_call(context[44]);
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[40] );
      refalrts::link_brackets( context[57], context[50] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[35], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[49], context[44] );
      res = refalrts::splice_elem( res, context[57] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[46], context[45] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_evar( res, context[8], context[41] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # S/41 s.Num/53 (/49 # Symbol/51 # Number/52 s.Value/54 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_S], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Symbol], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::ident_left( identifiers[ident_Number], context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      if( ! refalrts::svar_left( context[54], context[47], context[48] ) )
        continue;
      if( ! refalrts::empty_seq( context[47], context[48] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53
      //DEBUG: s.Value: 54

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.ContextOffset$a/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } Tile{ HalfReuse: s.ContextOffset$a5 /8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Number/41 } s.Value/54/55 Tile{ AsIs: s.Num/53 } Tile{ HalfReuse: )/46 AsIs: e.Junk2/42 AsIs: )/45 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/56 # AlgLeft/57 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } Tile{ HalfReuse: (/1 } Tile{ HalfReuse: # CmdNumber/49 Reuse: # AlgTerm/51 HalfReuse: s.Num53 /52 AsIs: s.Value/54 AsIs: )/50 AsIs: )/40 HalfReuse: >/44 } Tile{ ]] }
      refalrts::copy_stvar(vm, context[55], context[54]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_AlgLeft]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_svar( context[8], context[5] );
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Number]);
      refalrts::reinit_close_bracket(context[46]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::reinit_ident(context[49], identifiers[ident_CmdNumber]);
      refalrts::update_ident(context[51], identifiers[ident_AlgTerm]);
      refalrts::reinit_svar( context[52], context[53] );
      refalrts::reinit_close_call(context[44]);
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[40] );
      refalrts::link_brackets( context[1], context[50] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[35], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[49], context[44] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[46], context[45] );
      res = refalrts::splice_elem( res, context[53] );
      res = refalrts::splice_elem( res, context[55] );
      res = refalrts::splice_evar( res, context[8], context[41] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/36 # Junk/38 e.Junk1/34 )/37 (/41 # S/43 s.Num/54 (/51 # Var/53 s.Mode/55 e.Index/49 )/52 )/42 (/46 # Junk/48 e.Junk2/44 )/47 e.Substs-E/30 )/9 (/12 e.Vars-B/56 (/62 s.Mode/64 (/67 e.Index/69 )/68 e.Offsets/60 s.SampleOffset/71 )/63 e.Vars-E/58 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[23];
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[30], context[31] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_left( context[39], context[40], context[30], context[31] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_S], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = 0;
      context[45] = 0;
      context[46] = refalrts::brackets_left( context[44], context[45], context[30], context[31] );
      if( ! context[46] )
        continue;
      refalrts::bracket_pointers(context[46], context[47]);
      context[48] = refalrts::ident_left( identifiers[ident_Junk], context[44], context[45] );
      if( ! context[48] )
        continue;
      context[49] = 0;
      context[50] = 0;
      context[51] = refalrts::brackets_right( context[49], context[50], context[39], context[40] );
      if( ! context[51] )
        continue;
      refalrts::bracket_pointers(context[51], context[52]);
      context[53] = refalrts::ident_left( identifiers[ident_Var], context[49], context[50] );
      if( ! context[53] )
        continue;
      // closed e.Junk1 as range 34
      // closed e.Junk2 as range 44
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[54], context[39], context[40] ) )
        continue;
      if( ! refalrts::empty_seq( context[39], context[40] ) )
        continue;
      if( ! refalrts::svar_left( context[55], context[49], context[50] ) )
        continue;
      // closed e.Index as range 49
      context[56] = 0;
      context[57] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[58] = context[32];
        context[59] = context[33];
        context[60] = 0;
        context[61] = 0;
        context[62] = refalrts::brackets_left( context[60], context[61], context[58], context[59] );
        if( ! context[62] )
          continue;
        refalrts::bracket_pointers(context[62], context[63]);
        if( ! refalrts::repeated_stvar_left( vm, context[64], context[55], context[60], context[61] ) )
          continue;
        context[65] = 0;
        context[66] = 0;
        context[67] = refalrts::brackets_left( context[65], context[66], context[60], context[61] );
        if( ! context[67] )
          continue;
        refalrts::bracket_pointers(context[67], context[68]);
        if( ! refalrts::repeated_evar_left( vm, context[69], context[70], context[49], context[50], context[65], context[66] ) )
          continue;
        if( ! refalrts::empty_seq( context[65], context[66] ) )
          continue;
        // closed e.Vars-E as range 58
        if( ! refalrts::svar_right( context[71], context[60], context[61] ) )
          continue;
        // closed e.Offsets as range 60
        //DEBUG: s.ContextOffset$a: 5
        //DEBUG: s.Num0: 18
        //DEBUG: s.VarOffset0: 19
        //DEBUG: e.Commands0: 24
        //DEBUG: e.CmdSaves: 26
        //DEBUG: e.Substs-B: 28
        //DEBUG: e.Junk1: 34
        //DEBUG: e.Junk2: 44
        //DEBUG: e.Substs-E: 30
        //DEBUG: s.Num: 54
        //DEBUG: s.Mode: 55
        //DEBUG: e.Index: 49
        //DEBUG: e.Vars-B: 56
        //DEBUG: e.Vars-E: 58
        //DEBUG: s.SampleOffset: 71
        //DEBUG: e.Offsets: 60

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 AsIs: s.ContextOffset$a/5 } Tile{ AsIs: e.Substs-B/28 } Tile{ AsIs: (/36 AsIs: # Junk/38 } Tile{ AsIs: e.Junk1/34 } Tile{ AsIs: (/51 AsIs: # Var/53 AsIs: s.Mode/55 AsIs: e.Index/49 HalfReuse: s.Num54 /52 AsIs: )/42 } Tile{ AsIs: e.Junk2/44 } Tile{ AsIs: )/47 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars-B/56 AsIs: (/62 AsIs: s.Mode/64 AsIs: (/67 AsIs: e.Index/69 AsIs: )/68 AsIs: e.Offsets/60 AsIs: s.SampleOffset/71 HalfReuse: s.Num54 /63 } Tile{ AsIs: )/9 } Tile{ AsIs: e.Vars-E/58 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } Tile{ HalfReuse: # CmdOpenedE/46 Reuse: # AlgLeft/48 } Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ HalfReuse: )/8 } Tile{ AsIs: e.CmdSaves/26 } Tile{ HalfReuse: (/37 HalfReuse: # CmdRepeated/41 Reuse: # AlgTerm/43 AsIs: s.Num/54 } s.Mode/64/72 s.Num/54/73 s.SampleOffset/71/74 )/75 )/76 Tile{ AsIs: >/1 ]] }
        refalrts::copy_stvar(vm, context[72], context[64]);
        refalrts::copy_stvar(vm, context[73], context[54]);
        refalrts::copy_stvar(vm, context[74], context[71]);
        refalrts::alloc_close_bracket(vm, context[75]);
        refalrts::alloc_close_bracket(vm, context[76]);
        refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
        refalrts::reinit_svar( context[52], context[54] );
        refalrts::reinit_svar( context[63], context[54] );
        refalrts::reinit_open_bracket(context[17]);
        refalrts::reinit_ident(context[46], identifiers[ident_CmdOpenedE]);
        refalrts::update_ident(context[48], identifiers[ident_AlgLeft]);
        refalrts::reinit_close_bracket(context[8]);
        refalrts::reinit_open_bracket(context[37]);
        refalrts::reinit_ident(context[41], identifiers[ident_CmdRepeated]);
        refalrts::update_ident(context[43], identifiers[ident_AlgTerm]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[16], context[76] );
        refalrts::link_brackets( context[37], context[75] );
        refalrts::link_brackets( context[17], context[8] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::link_brackets( context[62], context[9] );
        refalrts::link_brackets( context[67], context[68] );
        refalrts::link_brackets( context[36], context[47] );
        refalrts::link_brackets( context[51], context[42] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[72], context[76] );
        res = refalrts::splice_evar( res, context[37], context[54] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[8] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[46], context[48] );
        res = refalrts::splice_evar( res, context[13], context[17] );
        res = refalrts::splice_evar( res, context[58], context[59] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[12], context[63] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_elem( res, context[47] );
        res = refalrts::splice_evar( res, context[44], context[45] );
        res = refalrts::splice_evar( res, context[51], context[42] );
        res = refalrts::splice_evar( res, context[34], context[35] );
        res = refalrts::splice_evar( res, context[36], context[38] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[56], context[57], context[32], context[33] ) );
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # S/41 s.Num/53 (/49 # Var/51 's'/52 e.Index/47 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_S], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Var], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::char_left( 's', context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Index as range 47
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Index: 47
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num/53 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoGenSubst@2/4 AsIs: s.ContextOffset$a/5 AsIs: (/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk1/32 HalfReuse: (/35 HalfReuse: # Var/39 HalfReuse: 's'/41 } e.Index/47/54 Tile{ HalfReuse: s.Num53 /44 HalfReuse: )/46 AsIs: e.Junk2/42 AsIs: )/45 AsIs: e.Substs-E/30 AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.Vars/22 } Tile{ AsIs: (/49 HalfReuse: 's'/51 HalfReuse: (/52 AsIs: e.Index/47 AsIs: )/50 HalfReuse: s.Num53 /40 } )/56 Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 AsIs: )/17 AsIs: s.Num0/18 AsIs: s.VarOffset0/19 AsIs: e.CmdSaves/26 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[54], context[55], context[47], context[48]);
      refalrts::alloc_close_bracket(vm, context[56]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Var]);
      refalrts::reinit_char(context[41], 's');
      refalrts::reinit_svar( context[44], context[53] );
      refalrts::reinit_close_bracket(context[46]);
      refalrts::reinit_char(context[51], 's');
      refalrts::reinit_open_bracket(context[52]);
      refalrts::reinit_svar( context[40], context[53] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[49], context[56] );
      refalrts::link_brackets( context[52], context[50] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[35], context[46] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_evar( res, context[49], context[40] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[44], context[12] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      refalrts::splice_to_freelist_open( vm, context[41], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk/32 )/35 (/39 # E/41 s.Num/42 (/45 # Symbol/47 # Char/48 s.Char/49 )/46 e.Range/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_E], context[37], context[38] );
      if( ! context[41] )
        continue;
      // closed e.Junk as range 32
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
        continue;
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_left( context[43], context[44], context[37], context[38] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      context[47] = refalrts::ident_left( identifiers[ident_Symbol], context[43], context[44] );
      if( ! context[47] )
        continue;
      context[48] = refalrts::ident_left( identifiers[ident_Char], context[43], context[44] );
      if( ! context[48] )
        continue;
      // closed e.Range as range 37
      if( ! refalrts::svar_left( context[49], context[43], context[44] ) )
        continue;
      if( ! refalrts::empty_seq( context[43], context[44] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk: 32
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 42
      //DEBUG: e.Range: 37
      //DEBUG: s.Char: 49

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </50 & DoGenSubst/51 </52 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Char/41 } s.Char/49/53 s.ContextOffset$a/5/54 )/55 Tile{ AsIs: )/40 } (/56 # E/57 Tile{ AsIs: s.Num/42 } Tile{ AsIs: e.Range/37 } Tile{ AsIs: )/9 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/58 # AlgLeft/59 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/60 Tile{ AsIs: e.CmdSaves/26 } (/61 # CmdCharSave/62 Tile{ HalfReuse: # AlgLeft/45 HalfReuse: s.Num42 /47 HalfReuse: s.ContextOffset$a5 /48 AsIs: s.Char/49 AsIs: )/46 } )/63 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[50]);
      refalrts::alloc_name(vm, context[51], functions[efunc_DoGenSubst]);
      refalrts::alloc_open_call(vm, context[52]);
      refalrts::copy_stvar(vm, context[53], context[49]);
      refalrts::copy_stvar(vm, context[54], context[5]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_E]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_open_bracket(vm, context[61]);
      refalrts::alloc_ident(vm, context[62], identifiers[ident_CmdCharSave]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Char]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_ident(context[45], identifiers[ident_AlgLeft]);
      refalrts::reinit_svar( context[47], context[42] );
      refalrts::reinit_svar( context[48], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[50] );
      refalrts::link_brackets( context[16], context[63] );
      refalrts::link_brackets( context[61], context[46] );
      refalrts::link_brackets( context[17], context[60] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[56], context[9] );
      refalrts::link_brackets( context[34], context[40] );
      refalrts::link_brackets( context[35], context[55] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[52] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[63] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[61], context[62] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[60] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[53], context[55] );
      res = refalrts::splice_evar( res, context[0], context[41] );
      res = refalrts::splice_evar( res, context[50], context[52] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk/32 )/35 (/39 # E/41 s.Num/42 (/45 # Symbol/47 # Number/48 s.Number/49 )/46 e.Range/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_E], context[37], context[38] );
      if( ! context[41] )
        continue;
      // closed e.Junk as range 32
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
        continue;
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_left( context[43], context[44], context[37], context[38] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      context[47] = refalrts::ident_left( identifiers[ident_Symbol], context[43], context[44] );
      if( ! context[47] )
        continue;
      context[48] = refalrts::ident_left( identifiers[ident_Number], context[43], context[44] );
      if( ! context[48] )
        continue;
      // closed e.Range as range 37
      if( ! refalrts::svar_left( context[49], context[43], context[44] ) )
        continue;
      if( ! refalrts::empty_seq( context[43], context[44] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk: 32
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 42
      //DEBUG: e.Range: 37
      //DEBUG: s.Number: 49

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </50 & DoGenSubst/51 </52 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Number/41 } s.Number/49/53 s.ContextOffset$a/5/54 )/55 Tile{ AsIs: )/40 } (/56 # E/57 Tile{ AsIs: s.Num/42 } Tile{ AsIs: e.Range/37 } Tile{ AsIs: )/9 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/58 # AlgLeft/59 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/60 Tile{ AsIs: e.CmdSaves/26 } (/61 # CmdNumberSave/62 Tile{ HalfReuse: # AlgLeft/45 HalfReuse: s.Num42 /47 HalfReuse: s.ContextOffset$a5 /48 AsIs: s.Number/49 AsIs: )/46 } )/63 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[50]);
      refalrts::alloc_name(vm, context[51], functions[efunc_DoGenSubst]);
      refalrts::alloc_open_call(vm, context[52]);
      refalrts::copy_stvar(vm, context[53], context[49]);
      refalrts::copy_stvar(vm, context[54], context[5]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_E]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_open_bracket(vm, context[61]);
      refalrts::alloc_ident(vm, context[62], identifiers[ident_CmdNumberSave]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Number]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_ident(context[45], identifiers[ident_AlgLeft]);
      refalrts::reinit_svar( context[47], context[42] );
      refalrts::reinit_svar( context[48], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[50] );
      refalrts::link_brackets( context[16], context[63] );
      refalrts::link_brackets( context[61], context[46] );
      refalrts::link_brackets( context[17], context[60] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[56], context[9] );
      refalrts::link_brackets( context[34], context[40] );
      refalrts::link_brackets( context[35], context[55] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[52] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[63] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[61], context[62] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[60] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[53], context[55] );
      res = refalrts::splice_evar( res, context[0], context[41] );
      res = refalrts::splice_evar( res, context[50], context[52] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk/32 )/35 (/39 # E/41 s.Num/42 (/45 # Symbol/47 # Name/48 e.Name/43 )/46 e.Range/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_E], context[37], context[38] );
      if( ! context[41] )
        continue;
      // closed e.Junk as range 32
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
        continue;
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_left( context[43], context[44], context[37], context[38] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      context[47] = refalrts::ident_left( identifiers[ident_Symbol], context[43], context[44] );
      if( ! context[47] )
        continue;
      context[48] = refalrts::ident_left( identifiers[ident_Name], context[43], context[44] );
      if( ! context[48] )
        continue;
      // closed e.Name as range 43
      // closed e.Range as range 37
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk: 32
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 42
      //DEBUG: e.Name: 43
      //DEBUG: e.Range: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </49 & DoGenSubst/50 </51 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Name/41 } e.Name/43/52 s.ContextOffset$a/5/54 )/55 Tile{ AsIs: )/40 } (/56 # E/57 Tile{ AsIs: s.Num/42 } Tile{ AsIs: e.Range/37 } Tile{ AsIs: )/9 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/58 # AlgLeft/59 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/60 Tile{ AsIs: e.CmdSaves/26 } (/61 # CmdNameSave/62 Tile{ HalfReuse: # AlgLeft/45 HalfReuse: s.Num42 /47 HalfReuse: s.ContextOffset$a5 /48 AsIs: e.Name/43 AsIs: )/46 } )/63 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_DoGenSubst]);
      refalrts::alloc_open_call(vm, context[51]);
      refalrts::copy_evar(vm, context[52], context[53], context[43], context[44]);
      refalrts::copy_stvar(vm, context[54], context[5]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_E]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_open_bracket(vm, context[61]);
      refalrts::alloc_ident(vm, context[62], identifiers[ident_CmdNameSave]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Name]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_ident(context[45], identifiers[ident_AlgLeft]);
      refalrts::reinit_svar( context[47], context[42] );
      refalrts::reinit_svar( context[48], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[49] );
      refalrts::link_brackets( context[16], context[63] );
      refalrts::link_brackets( context[61], context[46] );
      refalrts::link_brackets( context[17], context[60] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[56], context[9] );
      refalrts::link_brackets( context[34], context[40] );
      refalrts::link_brackets( context[35], context[55] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[51] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[63] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[61], context[62] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[60] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_evar( res, context[52], context[53] );
      res = refalrts::splice_evar( res, context[0], context[41] );
      res = refalrts::splice_evar( res, context[49], context[51] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk/32 )/35 (/39 # E/41 s.Num/42 (/45 # Symbol/47 # Identifier/48 e.Name/43 )/46 e.Range/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_E], context[37], context[38] );
      if( ! context[41] )
        continue;
      // closed e.Junk as range 32
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
        continue;
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_left( context[43], context[44], context[37], context[38] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      context[47] = refalrts::ident_left( identifiers[ident_Symbol], context[43], context[44] );
      if( ! context[47] )
        continue;
      context[48] = refalrts::ident_left( identifiers[ident_Identifier], context[43], context[44] );
      if( ! context[48] )
        continue;
      // closed e.Name as range 43
      // closed e.Range as range 37
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk: 32
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 42
      //DEBUG: e.Name: 43
      //DEBUG: e.Range: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </49 & DoGenSubst/50 </51 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk/32 HalfReuse: (/35 HalfReuse: # Symbol/39 Reuse: # Identifier/41 } e.Name/43/52 s.ContextOffset$a/5/54 )/55 Tile{ AsIs: )/40 } (/56 # E/57 Tile{ AsIs: s.Num/42 } Tile{ AsIs: e.Range/37 } Tile{ AsIs: )/9 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/58 # AlgLeft/59 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/60 Tile{ AsIs: e.CmdSaves/26 } (/61 # CmdIdentSave/62 Tile{ HalfReuse: # AlgLeft/45 HalfReuse: s.Num42 /47 HalfReuse: s.ContextOffset$a5 /48 AsIs: e.Name/43 AsIs: )/46 } )/63 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_DoGenSubst]);
      refalrts::alloc_open_call(vm, context[51]);
      refalrts::copy_evar(vm, context[52], context[53], context[43], context[44]);
      refalrts::copy_stvar(vm, context[54], context[5]);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_E]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_open_bracket(vm, context[61]);
      refalrts::alloc_ident(vm, context[62], identifiers[ident_CmdIdentSave]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Symbol]);
      refalrts::update_ident(context[41], identifiers[ident_Identifier]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_ident(context[45], identifiers[ident_AlgLeft]);
      refalrts::reinit_svar( context[47], context[42] );
      refalrts::reinit_svar( context[48], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[49] );
      refalrts::link_brackets( context[16], context[63] );
      refalrts::link_brackets( context[61], context[46] );
      refalrts::link_brackets( context[17], context[60] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[56], context[9] );
      refalrts::link_brackets( context[34], context[40] );
      refalrts::link_brackets( context[35], context[55] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[51] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[63] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_evar( res, context[61], context[62] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[60] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[56], context[57] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[54], context[55] );
      res = refalrts::splice_evar( res, context[52], context[53] );
      res = refalrts::splice_evar( res, context[0], context[41] );
      res = refalrts::splice_evar( res, context[49], context[51] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # E/36 s.Num/48 e.Range/32 (/44 # Symbol/46 # Char/47 s.Char/49 )/45 )/35 (/39 # Junk/41 e.Junk/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_E], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_Junk], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_right( context[42], context[43], context[32], context[33] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Symbol], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = refalrts::ident_left( identifiers[ident_Char], context[42], context[43] );
      if( ! context[47] )
        continue;
      // closed e.Junk as range 37
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[48], context[32], context[33] ) )
        continue;
      // closed e.Range as range 32
      if( ! refalrts::svar_left( context[49], context[42], context[43] ) )
        continue;
      if( ! refalrts::empty_seq( context[42], context[43] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk: 37
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 48
      //DEBUG: e.Range: 32
      //DEBUG: s.Char: 49

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </50 & DoGenSubst/51 </52 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # E/36 AsIs: s.Num/48 AsIs: e.Range/32 HalfReuse: )/44 HalfReuse: (/46 Reuse: # Junk/47 } (/53 # Symbol/54 Tile{ HalfReuse: # Char/45 HalfReuse: s.Char49 /35 HalfReuse: s.ContextOffset$a5 /39 HalfReuse: )/41 AsIs: e.Junk/37 AsIs: )/40 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/55 # AlgLeft/56 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } (/57 # CmdCharSave/58 # AlgRight/59 s.Num/48/60 s.ContextOffset$a/5/61 Tile{ AsIs: s.Char/49 } )/62 )/63 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[50]);
      refalrts::alloc_name(vm, context[51], functions[efunc_DoGenSubst]);
      refalrts::alloc_open_call(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_ident(vm, context[54], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_AlgLeft]);
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_CmdCharSave]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[60], context[48]);
      refalrts::copy_stvar(vm, context[61], context[5]);
      refalrts::alloc_close_bracket(vm, context[62]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::reinit_open_bracket(context[46]);
      refalrts::update_ident(context[47], identifiers[ident_Junk]);
      refalrts::reinit_ident(context[45], identifiers[ident_Char]);
      refalrts::reinit_svar( context[35], context[49] );
      refalrts::reinit_svar( context[39], context[5] );
      refalrts::reinit_close_bracket(context[41]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[50] );
      refalrts::link_brackets( context[16], context[63] );
      refalrts::link_brackets( context[57], context[62] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[46], context[40] );
      refalrts::link_brackets( context[53], context[41] );
      refalrts::link_brackets( context[34], context[44] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[52] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[62], context[63] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_evar( res, context[57], context[61] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[45], context[40] );
      res = refalrts::splice_evar( res, context[53], context[54] );
      res = refalrts::splice_evar( res, context[0], context[47] );
      res = refalrts::splice_evar( res, context[50], context[52] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # E/36 s.Num/48 e.Range/32 (/44 # Symbol/46 # Number/47 s.Number/49 )/45 )/35 (/39 # Junk/41 e.Junk/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_E], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_Junk], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_right( context[42], context[43], context[32], context[33] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Symbol], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = refalrts::ident_left( identifiers[ident_Number], context[42], context[43] );
      if( ! context[47] )
        continue;
      // closed e.Junk as range 37
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[48], context[32], context[33] ) )
        continue;
      // closed e.Range as range 32
      if( ! refalrts::svar_left( context[49], context[42], context[43] ) )
        continue;
      if( ! refalrts::empty_seq( context[42], context[43] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk: 37
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 48
      //DEBUG: e.Range: 32
      //DEBUG: s.Number: 49

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </50 & DoGenSubst/51 </52 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # E/36 AsIs: s.Num/48 AsIs: e.Range/32 HalfReuse: )/44 HalfReuse: (/46 Reuse: # Junk/47 } (/53 # Symbol/54 Tile{ HalfReuse: # Number/45 HalfReuse: s.Number49 /35 HalfReuse: s.ContextOffset$a5 /39 HalfReuse: )/41 AsIs: e.Junk/37 AsIs: )/40 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/55 # AlgLeft/56 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } (/57 # CmdNumberSave/58 # AlgRight/59 s.Num/48/60 s.ContextOffset$a/5/61 Tile{ AsIs: s.Number/49 } )/62 )/63 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[50]);
      refalrts::alloc_name(vm, context[51], functions[efunc_DoGenSubst]);
      refalrts::alloc_open_call(vm, context[52]);
      refalrts::alloc_open_bracket(vm, context[53]);
      refalrts::alloc_ident(vm, context[54], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_AlgLeft]);
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_CmdNumberSave]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[60], context[48]);
      refalrts::copy_stvar(vm, context[61], context[5]);
      refalrts::alloc_close_bracket(vm, context[62]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::reinit_open_bracket(context[46]);
      refalrts::update_ident(context[47], identifiers[ident_Junk]);
      refalrts::reinit_ident(context[45], identifiers[ident_Number]);
      refalrts::reinit_svar( context[35], context[49] );
      refalrts::reinit_svar( context[39], context[5] );
      refalrts::reinit_close_bracket(context[41]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[50] );
      refalrts::link_brackets( context[16], context[63] );
      refalrts::link_brackets( context[57], context[62] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[46], context[40] );
      refalrts::link_brackets( context[53], context[41] );
      refalrts::link_brackets( context[34], context[44] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[52] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[62], context[63] );
      res = refalrts::splice_elem( res, context[49] );
      res = refalrts::splice_evar( res, context[57], context[61] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[45], context[40] );
      res = refalrts::splice_evar( res, context[53], context[54] );
      res = refalrts::splice_evar( res, context[0], context[47] );
      res = refalrts::splice_evar( res, context[50], context[52] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # E/36 s.Num/48 e.Range/32 (/44 # Symbol/46 # Name/47 e.Name/42 )/45 )/35 (/39 # Junk/41 e.Junk/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_E], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_Junk], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_right( context[42], context[43], context[32], context[33] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Symbol], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = refalrts::ident_left( identifiers[ident_Name], context[42], context[43] );
      if( ! context[47] )
        continue;
      // closed e.Name as range 42
      // closed e.Junk as range 37
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[48], context[32], context[33] ) )
        continue;
      // closed e.Range as range 32
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Name: 42
      //DEBUG: e.Junk: 37
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 48
      //DEBUG: e.Range: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </49 & DoGenSubst/50 </51 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # E/36 AsIs: s.Num/48 AsIs: e.Range/32 HalfReuse: )/44 HalfReuse: (/46 Reuse: # Junk/47 } (/52 # Symbol/53 # Name/54 Tile{ AsIs: e.Name/42 } Tile{ HalfReuse: s.ContextOffset$a5 /39 HalfReuse: )/41 AsIs: e.Junk/37 AsIs: )/40 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/55 # AlgLeft/56 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } (/57 # CmdNameSave/58 # AlgRight/59 s.Num/48/60 s.ContextOffset$a/5/61 e.Name/42/62 Tile{ AsIs: )/45 AsIs: )/35 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_DoGenSubst]);
      refalrts::alloc_open_call(vm, context[51]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[54], identifiers[ident_Name]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_AlgLeft]);
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_CmdNameSave]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[60], context[48]);
      refalrts::copy_stvar(vm, context[61], context[5]);
      refalrts::copy_evar(vm, context[62], context[63], context[42], context[43]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::reinit_open_bracket(context[46]);
      refalrts::update_ident(context[47], identifiers[ident_Junk]);
      refalrts::reinit_svar( context[39], context[5] );
      refalrts::reinit_close_bracket(context[41]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[49] );
      refalrts::link_brackets( context[16], context[35] );
      refalrts::link_brackets( context[57], context[45] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[46], context[40] );
      refalrts::link_brackets( context[52], context[41] );
      refalrts::link_brackets( context[34], context[44] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[51] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[45], context[35] );
      res = refalrts::splice_evar( res, context[62], context[63] );
      res = refalrts::splice_evar( res, context[57], context[61] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[52], context[54] );
      res = refalrts::splice_evar( res, context[0], context[47] );
      res = refalrts::splice_evar( res, context[49], context[51] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # E/36 s.Num/48 e.Range/32 (/44 # Symbol/46 # Identifier/47 e.Name/42 )/45 )/35 (/39 # Junk/41 e.Junk/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_E], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_Junk], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_right( context[42], context[43], context[32], context[33] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Symbol], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = refalrts::ident_left( identifiers[ident_Identifier], context[42], context[43] );
      if( ! context[47] )
        continue;
      // closed e.Name as range 42
      // closed e.Junk as range 37
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[48], context[32], context[33] ) )
        continue;
      // closed e.Range as range 32
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Name: 42
      //DEBUG: e.Junk: 37
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 48
      //DEBUG: e.Range: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </49 & DoGenSubst/50 </51 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # E/36 AsIs: s.Num/48 AsIs: e.Range/32 HalfReuse: )/44 HalfReuse: (/46 Reuse: # Junk/47 } (/52 # Symbol/53 # Identifier/54 Tile{ AsIs: e.Name/42 } Tile{ HalfReuse: s.ContextOffset$a5 /39 HalfReuse: )/41 AsIs: e.Junk/37 AsIs: )/40 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/55 # AlgLeft/56 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/26 } (/57 # CmdIdentSave/58 # AlgRight/59 s.Num/48/60 s.ContextOffset$a/5/61 e.Name/42/62 Tile{ AsIs: )/45 AsIs: )/35 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_DoGenSubst]);
      refalrts::alloc_open_call(vm, context[51]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[54], identifiers[ident_Identifier]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[56], identifiers[ident_AlgLeft]);
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::alloc_ident(vm, context[58], identifiers[ident_CmdIdentSave]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[60], context[48]);
      refalrts::copy_stvar(vm, context[61], context[5]);
      refalrts::copy_evar(vm, context[62], context[63], context[42], context[43]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::reinit_open_bracket(context[46]);
      refalrts::update_ident(context[47], identifiers[ident_Junk]);
      refalrts::reinit_svar( context[39], context[5] );
      refalrts::reinit_close_bracket(context[41]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[49] );
      refalrts::link_brackets( context[16], context[35] );
      refalrts::link_brackets( context[57], context[45] );
      refalrts::link_brackets( context[17], context[9] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[46], context[40] );
      refalrts::link_brackets( context[52], context[41] );
      refalrts::link_brackets( context[34], context[44] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[51] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[45], context[35] );
      res = refalrts::splice_evar( res, context[62], context[63] );
      res = refalrts::splice_evar( res, context[57], context[61] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[52], context[54] );
      res = refalrts::splice_evar( res, context[0], context[47] );
      res = refalrts::splice_evar( res, context[49], context[51] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk/32 )/35 (/39 # E/41 s.Num/42 (/45 # Brackets/47 e.SubRange/43 )/46 e.Range/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_E], context[37], context[38] );
      if( ! context[41] )
        continue;
      // closed e.Junk as range 32
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
        continue;
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_left( context[43], context[44], context[37], context[38] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      context[47] = refalrts::ident_left( identifiers[ident_Brackets], context[43], context[44] );
      if( ! context[47] )
        continue;
      // closed e.SubRange as range 43
      // closed e.Range as range 37
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk: 32
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 42
      //DEBUG: e.SubRange: 43
      //DEBUG: e.Range: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </48 & DoGenSubst/49 Tile{ AsIs: </0 Reuse: & Add/4 AsIs: s.ContextOffset$a/5 } 4/50 Tile{ HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk/32 HalfReuse: (/35 HalfReuse: # TkOpenBracket/39 HalfReuse: </41 } & Add/51 s.ContextOffset$a/5/52 2/53 >/54 Tile{ AsIs: )/9 } Tile{ AsIs: )/40 } (/55 Tile{ HalfReuse: # E/45 HalfReuse: s.ContextOffset$a5 /47 AsIs: e.SubRange/43 AsIs: )/46 } (/56 # Junk/57 (/58 # TkCloseBracket/59 </60 & Add/61 s.ContextOffset$a/5/62 3/63 >/64 )/65 )/66 (/67 # E/68 Tile{ AsIs: s.Num/42 } Tile{ AsIs: e.Range/37 } )/69 Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/70 # AlgLeft/71 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/72 Tile{ AsIs: e.CmdSaves/26 } (/73 # CmdBracketsSave/74 # AlgLeft/75 s.Num/42/76 s.ContextOffset$a/5/77 )/78 )/79 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_DoGenSubst]);
      refalrts::alloc_number(vm, context[50], 4UL);
      refalrts::alloc_name(vm, context[51], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[52], context[5]);
      refalrts::alloc_number(vm, context[53], 2UL);
      refalrts::alloc_close_call(vm, context[54]);
      refalrts::alloc_open_bracket(vm, context[55]);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[58]);
      refalrts::alloc_ident(vm, context[59], identifiers[ident_TkCloseBracket]);
      refalrts::alloc_open_call(vm, context[60]);
      refalrts::alloc_name(vm, context[61], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[62], context[5]);
      refalrts::alloc_number(vm, context[63], 3UL);
      refalrts::alloc_close_call(vm, context[64]);
      refalrts::alloc_close_bracket(vm, context[65]);
      refalrts::alloc_close_bracket(vm, context[66]);
      refalrts::alloc_open_bracket(vm, context[67]);
      refalrts::alloc_ident(vm, context[68], identifiers[ident_E]);
      refalrts::alloc_close_bracket(vm, context[69]);
      refalrts::alloc_ident(vm, context[70], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[71], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[72]);
      refalrts::alloc_open_bracket(vm, context[73]);
      refalrts::alloc_ident(vm, context[74], identifiers[ident_CmdBracketsSave]);
      refalrts::alloc_ident(vm, context[75], identifiers[ident_AlgLeft]);
      refalrts::copy_stvar(vm, context[76], context[42]);
      refalrts::copy_stvar(vm, context[77], context[5]);
      refalrts::alloc_close_bracket(vm, context[78]);
      refalrts::alloc_close_bracket(vm, context[79]);
      refalrts::update_name(context[4], functions[efunc_Add]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_TkOpenBracket]);
      refalrts::reinit_open_call(context[41]);
      refalrts::reinit_ident(context[45], identifiers[ident_E]);
      refalrts::reinit_svar( context[47], context[5] );
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[48] );
      refalrts::link_brackets( context[16], context[79] );
      refalrts::link_brackets( context[73], context[78] );
      refalrts::link_brackets( context[17], context[72] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[67], context[69] );
      refalrts::link_brackets( context[56], context[66] );
      refalrts::link_brackets( context[58], context[65] );
      refalrts::push_stack( vm, context[64] );
      refalrts::push_stack( vm, context[60] );
      refalrts::link_brackets( context[55], context[46] );
      refalrts::link_brackets( context[34], context[40] );
      refalrts::link_brackets( context[35], context[9] );
      refalrts::push_stack( vm, context[54] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[73], context[79] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[72] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[70], context[71] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[69] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[56], context[68] );
      res = refalrts::splice_evar( res, context[45], context[46] );
      res = refalrts::splice_elem( res, context[55] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[51], context[54] );
      res = refalrts::splice_evar( res, context[8], context[41] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[48], context[49] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # E/36 s.Num/47 e.Range/32 (/44 # Brackets/46 e.SubRange/42 )/45 )/35 (/39 # Junk/41 e.Junk/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_E], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_Junk], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_right( context[42], context[43], context[32], context[33] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Brackets], context[42], context[43] );
      if( ! context[46] )
        continue;
      // closed e.SubRange as range 42
      // closed e.Junk as range 37
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[47], context[32], context[33] ) )
        continue;
      // closed e.Range as range 32
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.SubRange: 42
      //DEBUG: e.Junk: 37
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 47
      //DEBUG: e.Range: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } </48 & Add/49 Tile{ AsIs: s.ContextOffset$a/5 } 4/50 Tile{ HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # E/36 AsIs: s.Num/47 AsIs: e.Range/32 HalfReuse: )/44 HalfReuse: (/46 } # Junk/51 (/52 # TkOpenBracket/53 </54 & Add/55 s.ContextOffset$a/5/56 2/57 >/58 Tile{ AsIs: )/45 AsIs: )/35 AsIs: (/39 Reuse: # E/41 } s.ContextOffset$a/5/59 Tile{ AsIs: e.SubRange/42 } Tile{ AsIs: )/40 } (/60 # Junk/61 (/62 # TkCloseBracket/63 </64 & Add/65 s.ContextOffset$a/5/66 3/67 >/68 Tile{ AsIs: )/9 } Tile{ AsIs: e.Junk/37 } )/69 Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/70 # AlgLeft/71 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/72 Tile{ AsIs: e.CmdSaves/26 } (/73 # CmdBracketsSave/74 # AlgRight/75 s.Num/47/76 s.ContextOffset$a/5/77 )/78 )/79 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[48]);
      refalrts::alloc_name(vm, context[49], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[50], 4UL);
      refalrts::alloc_ident(vm, context[51], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_TkOpenBracket]);
      refalrts::alloc_open_call(vm, context[54]);
      refalrts::alloc_name(vm, context[55], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[56], context[5]);
      refalrts::alloc_number(vm, context[57], 2UL);
      refalrts::alloc_close_call(vm, context[58]);
      refalrts::copy_stvar(vm, context[59], context[5]);
      refalrts::alloc_open_bracket(vm, context[60]);
      refalrts::alloc_ident(vm, context[61], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[62]);
      refalrts::alloc_ident(vm, context[63], identifiers[ident_TkCloseBracket]);
      refalrts::alloc_open_call(vm, context[64]);
      refalrts::alloc_name(vm, context[65], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[66], context[5]);
      refalrts::alloc_number(vm, context[67], 3UL);
      refalrts::alloc_close_call(vm, context[68]);
      refalrts::alloc_close_bracket(vm, context[69]);
      refalrts::alloc_ident(vm, context[70], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[71], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[72]);
      refalrts::alloc_open_bracket(vm, context[73]);
      refalrts::alloc_ident(vm, context[74], identifiers[ident_CmdBracketsSave]);
      refalrts::alloc_ident(vm, context[75], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[76], context[47]);
      refalrts::copy_stvar(vm, context[77], context[5]);
      refalrts::alloc_close_bracket(vm, context[78]);
      refalrts::alloc_close_bracket(vm, context[79]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::reinit_open_bracket(context[46]);
      refalrts::update_ident(context[41], identifiers[ident_E]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[79] );
      refalrts::link_brackets( context[73], context[78] );
      refalrts::link_brackets( context[17], context[72] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[60], context[69] );
      refalrts::link_brackets( context[62], context[9] );
      refalrts::push_stack( vm, context[68] );
      refalrts::push_stack( vm, context[64] );
      refalrts::link_brackets( context[39], context[40] );
      refalrts::link_brackets( context[46], context[35] );
      refalrts::link_brackets( context[52], context[45] );
      refalrts::push_stack( vm, context[58] );
      refalrts::push_stack( vm, context[54] );
      refalrts::link_brackets( context[34], context[44] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[48] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[73], context[79] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[72] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[70], context[71] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[69] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[60], context[68] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_elem( res, context[59] );
      res = refalrts::splice_evar( res, context[45], context[41] );
      res = refalrts::splice_evar( res, context[51], context[58] );
      res = refalrts::splice_evar( res, context[8], context[46] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_elem( res, context[5] );
      res = refalrts::splice_evar( res, context[48], context[49] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk/32 )/35 (/39 # E/41 s.Num/42 (/45 # ADT-Brackets/47 (/50 e.Name/48 )/51 e.SubRange/43 )/46 e.Range/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_E], context[37], context[38] );
      if( ! context[41] )
        continue;
      // closed e.Junk as range 32
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
        continue;
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_left( context[43], context[44], context[37], context[38] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      context[47] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[43], context[44] );
      if( ! context[47] )
        continue;
      context[48] = 0;
      context[49] = 0;
      context[50] = refalrts::brackets_left( context[48], context[49], context[43], context[44] );
      if( ! context[50] )
        continue;
      refalrts::bracket_pointers(context[50], context[51]);
      // closed e.Name as range 48
      // closed e.SubRange as range 43
      // closed e.Range as range 37
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk: 32
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 42
      //DEBUG: e.Name: 48
      //DEBUG: e.SubRange: 43
      //DEBUG: e.Range: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } </52 & Add/53 s.ContextOffset$a/5/54 5/55 Tile{ HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk/32 HalfReuse: (/35 HalfReuse: # TkOpenADT/39 HalfReuse: </41 } & Add/56 Tile{ AsIs: s.ContextOffset$a/5 } 2/57 >/58 )/59 Tile{ AsIs: (/45 Reuse: # Symbol/47 HalfReuse: # Name/50 AsIs: e.Name/48 HalfReuse: </51 } & Add/60 s.ContextOffset$a/5/61 3/62 >/63 )/64 Tile{ AsIs: )/9 } (/65 # E/66 s.ContextOffset$a/5/67 Tile{ AsIs: e.SubRange/43 } )/68 (/69 # Junk/70 (/71 # TkCloseADT/72 </73 & Add/74 s.ContextOffset$a/5/75 4/76 >/77 )/78 )/79 (/80 # E/81 Tile{ HalfReuse: s.Num42 /46 AsIs: e.Range/37 AsIs: )/40 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/82 # AlgLeft/83 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/84 Tile{ AsIs: e.CmdSaves/26 } (/85 # CmdADTSave/86 # AlgLeft/87 Tile{ AsIs: s.Num/42 } s.ContextOffset$a/5/88 e.Name/48/89 )/91 )/92 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[52]);
      refalrts::alloc_name(vm, context[53], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[54], context[5]);
      refalrts::alloc_number(vm, context[55], 5UL);
      refalrts::alloc_name(vm, context[56], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[57], 2UL);
      refalrts::alloc_close_call(vm, context[58]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_name(vm, context[60], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[61], context[5]);
      refalrts::alloc_number(vm, context[62], 3UL);
      refalrts::alloc_close_call(vm, context[63]);
      refalrts::alloc_close_bracket(vm, context[64]);
      refalrts::alloc_open_bracket(vm, context[65]);
      refalrts::alloc_ident(vm, context[66], identifiers[ident_E]);
      refalrts::copy_stvar(vm, context[67], context[5]);
      refalrts::alloc_close_bracket(vm, context[68]);
      refalrts::alloc_open_bracket(vm, context[69]);
      refalrts::alloc_ident(vm, context[70], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[71]);
      refalrts::alloc_ident(vm, context[72], identifiers[ident_TkCloseADT]);
      refalrts::alloc_open_call(vm, context[73]);
      refalrts::alloc_name(vm, context[74], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[75], context[5]);
      refalrts::alloc_number(vm, context[76], 4UL);
      refalrts::alloc_close_call(vm, context[77]);
      refalrts::alloc_close_bracket(vm, context[78]);
      refalrts::alloc_close_bracket(vm, context[79]);
      refalrts::alloc_open_bracket(vm, context[80]);
      refalrts::alloc_ident(vm, context[81], identifiers[ident_E]);
      refalrts::alloc_ident(vm, context[82], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[83], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[84]);
      refalrts::alloc_open_bracket(vm, context[85]);
      refalrts::alloc_ident(vm, context[86], identifiers[ident_CmdADTSave]);
      refalrts::alloc_ident(vm, context[87], identifiers[ident_AlgLeft]);
      refalrts::copy_stvar(vm, context[88], context[5]);
      refalrts::copy_evar(vm, context[89], context[90], context[48], context[49]);
      refalrts::alloc_close_bracket(vm, context[91]);
      refalrts::alloc_close_bracket(vm, context[92]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_TkOpenADT]);
      refalrts::reinit_open_call(context[41]);
      refalrts::update_ident(context[47], identifiers[ident_Symbol]);
      refalrts::reinit_ident(context[50], identifiers[ident_Name]);
      refalrts::reinit_open_call(context[51]);
      refalrts::reinit_svar( context[46], context[42] );
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[92] );
      refalrts::link_brackets( context[85], context[91] );
      refalrts::link_brackets( context[17], context[84] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[80], context[40] );
      refalrts::link_brackets( context[69], context[79] );
      refalrts::link_brackets( context[71], context[78] );
      refalrts::push_stack( vm, context[77] );
      refalrts::push_stack( vm, context[73] );
      refalrts::link_brackets( context[65], context[68] );
      refalrts::link_brackets( context[34], context[9] );
      refalrts::link_brackets( context[45], context[64] );
      refalrts::push_stack( vm, context[63] );
      refalrts::push_stack( vm, context[51] );
      refalrts::link_brackets( context[35], context[59] );
      refalrts::push_stack( vm, context[58] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[52] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[88], context[92] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[85], context[87] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[84] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[82], context[83] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[46], context[40] );
      res = refalrts::splice_evar( res, context[68], context[81] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[65], context[67] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[60], context[64] );
      res = refalrts::splice_evar( res, context[45], context[51] );
      res = refalrts::splice_evar( res, context[57], context[59] );
      res = refalrts::splice_elem( res, context[5] );
      res = refalrts::splice_elem( res, context[56] );
      res = refalrts::splice_evar( res, context[8], context[41] );
      res = refalrts::splice_evar( res, context[52], context[55] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # E/36 s.Num/51 e.Range/32 (/44 # ADT-Brackets/46 (/49 e.Name/47 )/50 e.SubRange/42 )/45 )/35 (/39 # Junk/41 e.Junk/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_E], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_Junk], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_right( context[42], context[43], context[32], context[33] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_ADTm_Brackets], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_left( context[47], context[48], context[42], context[43] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      // closed e.Name as range 47
      // closed e.SubRange as range 42
      // closed e.Junk as range 37
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[51], context[32], context[33] ) )
        continue;
      // closed e.Range as range 32
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Name: 47
      //DEBUG: e.SubRange: 42
      //DEBUG: e.Junk: 37
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 51
      //DEBUG: e.Range: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } </52 & Add/53 s.ContextOffset$a/5/54 5/55 Tile{ HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # E/36 AsIs: s.Num/51 AsIs: e.Range/32 HalfReuse: )/44 HalfReuse: (/46 HalfReuse: # Junk/49 } (/56 # TkOpenADT/57 </58 & Add/59 Tile{ AsIs: s.ContextOffset$a/5 } 2/60 >/61 Tile{ AsIs: )/40 } (/62 # Symbol/63 # Name/64 Tile{ AsIs: e.Name/47 } </65 & Add/66 s.ContextOffset$a/5/67 3/68 >/69 Tile{ AsIs: )/45 AsIs: )/35 AsIs: (/39 Reuse: # E/41 } s.ContextOffset$a/5/70 Tile{ AsIs: e.SubRange/42 } Tile{ AsIs: )/9 } (/71 # Junk/72 (/73 # TkCloseADT/74 </75 & Add/76 s.ContextOffset$a/5/77 4/78 >/79 Tile{ AsIs: )/50 } Tile{ AsIs: e.Junk/37 } )/80 Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/81 # AlgLeft/82 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/83 Tile{ AsIs: e.CmdSaves/26 } (/84 # CmdADTSave/85 # AlgRight/86 s.Num/51/87 s.ContextOffset$a/5/88 e.Name/47/89 )/91 )/92 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[52]);
      refalrts::alloc_name(vm, context[53], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[54], context[5]);
      refalrts::alloc_number(vm, context[55], 5UL);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_ident(vm, context[57], identifiers[ident_TkOpenADT]);
      refalrts::alloc_open_call(vm, context[58]);
      refalrts::alloc_name(vm, context[59], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[60], 2UL);
      refalrts::alloc_close_call(vm, context[61]);
      refalrts::alloc_open_bracket(vm, context[62]);
      refalrts::alloc_ident(vm, context[63], identifiers[ident_Symbol]);
      refalrts::alloc_ident(vm, context[64], identifiers[ident_Name]);
      refalrts::alloc_open_call(vm, context[65]);
      refalrts::alloc_name(vm, context[66], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[67], context[5]);
      refalrts::alloc_number(vm, context[68], 3UL);
      refalrts::alloc_close_call(vm, context[69]);
      refalrts::copy_stvar(vm, context[70], context[5]);
      refalrts::alloc_open_bracket(vm, context[71]);
      refalrts::alloc_ident(vm, context[72], identifiers[ident_Junk]);
      refalrts::alloc_open_bracket(vm, context[73]);
      refalrts::alloc_ident(vm, context[74], identifiers[ident_TkCloseADT]);
      refalrts::alloc_open_call(vm, context[75]);
      refalrts::alloc_name(vm, context[76], functions[efunc_Add]);
      refalrts::copy_stvar(vm, context[77], context[5]);
      refalrts::alloc_number(vm, context[78], 4UL);
      refalrts::alloc_close_call(vm, context[79]);
      refalrts::alloc_close_bracket(vm, context[80]);
      refalrts::alloc_ident(vm, context[81], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[82], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[83]);
      refalrts::alloc_open_bracket(vm, context[84]);
      refalrts::alloc_ident(vm, context[85], identifiers[ident_CmdADTSave]);
      refalrts::alloc_ident(vm, context[86], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[87], context[51]);
      refalrts::copy_stvar(vm, context[88], context[5]);
      refalrts::copy_evar(vm, context[89], context[90], context[47], context[48]);
      refalrts::alloc_close_bracket(vm, context[91]);
      refalrts::alloc_close_bracket(vm, context[92]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::reinit_open_bracket(context[46]);
      refalrts::reinit_ident(context[49], identifiers[ident_Junk]);
      refalrts::update_ident(context[41], identifiers[ident_E]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[92] );
      refalrts::link_brackets( context[84], context[91] );
      refalrts::link_brackets( context[17], context[83] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[71], context[80] );
      refalrts::link_brackets( context[73], context[50] );
      refalrts::push_stack( vm, context[79] );
      refalrts::push_stack( vm, context[75] );
      refalrts::link_brackets( context[39], context[9] );
      refalrts::link_brackets( context[46], context[35] );
      refalrts::link_brackets( context[62], context[45] );
      refalrts::push_stack( vm, context[69] );
      refalrts::push_stack( vm, context[65] );
      refalrts::link_brackets( context[56], context[40] );
      refalrts::push_stack( vm, context[61] );
      refalrts::push_stack( vm, context[58] );
      refalrts::link_brackets( context[34], context[44] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[52] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[84], context[92] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[83] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[81], context[82] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[80] );
      res = refalrts::splice_evar( res, context[37], context[38] );
      res = refalrts::splice_elem( res, context[50] );
      res = refalrts::splice_evar( res, context[71], context[79] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_elem( res, context[70] );
      res = refalrts::splice_evar( res, context[45], context[41] );
      res = refalrts::splice_evar( res, context[65], context[69] );
      res = refalrts::splice_evar( res, context[47], context[48] );
      res = refalrts::splice_evar( res, context[62], context[64] );
      res = refalrts::splice_elem( res, context[40] );
      res = refalrts::splice_evar( res, context[60], context[61] );
      res = refalrts::splice_elem( res, context[5] );
      res = refalrts::splice_evar( res, context[56], context[59] );
      res = refalrts::splice_evar( res, context[8], context[49] );
      res = refalrts::splice_evar( res, context[52], context[55] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # E/41 s.Num/47 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_E], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[47], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 47

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 AsIs: s.ContextOffset$a/5 } Tile{ AsIs: e.Substs-B/28 } Tile{ AsIs: (/34 AsIs: # Junk/36 } Tile{ AsIs: e.Junk1/32 } Tile{ AsIs: e.Junk2/42 } Tile{ AsIs: )/9 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars/22 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } Tile{ HalfReuse: # CmdOpenedE/8 } Tile{ HalfReuse: # AlgLeft/1 } Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/45 } Tile{ AsIs: e.CmdSaves/26 } Tile{ HalfReuse: (/35 HalfReuse: # CmdEmpty/39 Reuse: # AlgLeft/41 AsIs: s.Num/47 AsIs: )/40 HalfReuse: )/44 HalfReuse: >/46 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::reinit_ident(context[8], identifiers[ident_CmdOpenedE]);
      refalrts::reinit_ident(context[1], identifiers[ident_AlgLeft]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_CmdEmpty]);
      refalrts::update_ident(context[41], identifiers[ident_AlgLeft]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::reinit_close_call(context[46]);
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[44] );
      refalrts::link_brackets( context[35], context[40] );
      refalrts::link_brackets( context[17], context[45] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[34], context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[35], context[46] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[12], context[17] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_elem( res, context[9] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[34], context[36] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/36 # Junk/38 e.Junk/34 )/37 (/41 # E/43 s.Num/44 (/47 # Var/49 s.Mode/50 e.Index/45 )/48 e.Range/39 )/42 e.Substs-E/30 )/9 (/12 e.Vars-B/51 (/57 s.Mode/59 (/62 e.Index/64 )/63 e.Offsets/55 s.SampleOffset/66 )/58 e.Vars-E/53 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[23];
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[30], context[31] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_Junk], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_left( context[39], context[40], context[30], context[31] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_E], context[39], context[40] );
      if( ! context[43] )
        continue;
      // closed e.Junk as range 34
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[44], context[39], context[40] ) )
        continue;
      context[45] = 0;
      context[46] = 0;
      context[47] = refalrts::brackets_left( context[45], context[46], context[39], context[40] );
      if( ! context[47] )
        continue;
      refalrts::bracket_pointers(context[47], context[48]);
      context[49] = refalrts::ident_left( identifiers[ident_Var], context[45], context[46] );
      if( ! context[49] )
        continue;
      // closed e.Range as range 39
      if( ! refalrts::svar_left( context[50], context[45], context[46] ) )
        continue;
      // closed e.Index as range 45
      context[51] = 0;
      context[52] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[53] = context[32];
        context[54] = context[33];
        context[55] = 0;
        context[56] = 0;
        context[57] = refalrts::brackets_left( context[55], context[56], context[53], context[54] );
        if( ! context[57] )
          continue;
        refalrts::bracket_pointers(context[57], context[58]);
        if( ! refalrts::repeated_stvar_left( vm, context[59], context[50], context[55], context[56] ) )
          continue;
        context[60] = 0;
        context[61] = 0;
        context[62] = refalrts::brackets_left( context[60], context[61], context[55], context[56] );
        if( ! context[62] )
          continue;
        refalrts::bracket_pointers(context[62], context[63]);
        if( ! refalrts::repeated_evar_left( vm, context[64], context[65], context[45], context[46], context[60], context[61] ) )
          continue;
        if( ! refalrts::empty_seq( context[60], context[61] ) )
          continue;
        // closed e.Vars-E as range 53
        if( ! refalrts::svar_right( context[66], context[55], context[56] ) )
          continue;
        // closed e.Offsets as range 55
        //DEBUG: s.ContextOffset$a: 5
        //DEBUG: s.Num0: 18
        //DEBUG: s.VarOffset0: 19
        //DEBUG: e.Commands0: 24
        //DEBUG: e.CmdSaves: 26
        //DEBUG: e.Substs-B: 28
        //DEBUG: e.Junk: 34
        //DEBUG: e.Substs-E: 30
        //DEBUG: s.Num: 44
        //DEBUG: e.Range: 39
        //DEBUG: s.Mode: 50
        //DEBUG: e.Index: 45
        //DEBUG: e.Vars-B: 51
        //DEBUG: e.Vars-E: 53
        //DEBUG: s.SampleOffset: 66
        //DEBUG: e.Offsets: 55

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </67 & DoGenSubst/68 Tile{ AsIs: </0 Reuse: & IncVarOffset-Saved/4 AsIs: s.ContextOffset$a/5 } Tile{ AsIs: s.Mode/50 } Tile{ HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/36 AsIs: # Junk/38 AsIs: e.Junk/34 HalfReuse: (/37 HalfReuse: # Var/41 HalfReuse: s.Mode59 /43 } Tile{ AsIs: e.Index/45 } s.ContextOffset$a/5/69 )/70 Tile{ AsIs: )/9 } Tile{ AsIs: (/47 Reuse: # E/49 } Tile{ HalfReuse: s.Num44 /48 AsIs: e.Range/39 AsIs: )/42 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars-B/51 AsIs: (/57 AsIs: s.Mode/59 AsIs: (/62 AsIs: e.Index/64 AsIs: )/63 AsIs: e.Offsets/55 AsIs: s.SampleOffset/66 HalfReuse: s.ContextOffset$a5 /58 } )/71 Tile{ AsIs: e.Vars-E/53 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/72 # AlgLeft/73 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/74 Tile{ AsIs: e.CmdSaves/26 } </75 & MakeRepeatedSave@1/76 Tile{ AsIs: s.Num/44 } s.Mode/59/77 s.ContextOffset$a/5/78 s.SampleOffset/66/79 >/80 )/81 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[67]);
        refalrts::alloc_name(vm, context[68], functions[efunc_DoGenSubst]);
        refalrts::copy_stvar(vm, context[69], context[5]);
        refalrts::alloc_close_bracket(vm, context[70]);
        refalrts::alloc_close_bracket(vm, context[71]);
        refalrts::alloc_ident(vm, context[72], identifiers[ident_CmdOpenedE]);
        refalrts::alloc_ident(vm, context[73], identifiers[ident_AlgLeft]);
        refalrts::alloc_close_bracket(vm, context[74]);
        refalrts::alloc_open_call(vm, context[75]);
        refalrts::alloc_name(vm, context[76], functions[efunc_gen_MakeRepeatedSave_Z1]);
        refalrts::copy_stvar(vm, context[77], context[59]);
        refalrts::copy_stvar(vm, context[78], context[5]);
        refalrts::copy_stvar(vm, context[79], context[66]);
        refalrts::alloc_close_call(vm, context[80]);
        refalrts::alloc_close_bracket(vm, context[81]);
        refalrts::update_name(context[4], functions[efunc_IncVarOffsetm_Saved]);
        refalrts::reinit_close_call(context[8]);
        refalrts::reinit_open_bracket(context[37]);
        refalrts::reinit_ident(context[41], identifiers[ident_Var]);
        refalrts::reinit_svar( context[43], context[59] );
        refalrts::update_ident(context[49], identifiers[ident_E]);
        refalrts::reinit_svar( context[48], context[44] );
        refalrts::reinit_svar( context[58], context[5] );
        refalrts::reinit_open_bracket(context[17]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[67] );
        refalrts::link_brackets( context[16], context[81] );
        refalrts::push_stack( vm, context[80] );
        refalrts::push_stack( vm, context[75] );
        refalrts::link_brackets( context[17], context[74] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::link_brackets( context[57], context[71] );
        refalrts::link_brackets( context[62], context[63] );
        refalrts::link_brackets( context[47], context[42] );
        refalrts::link_brackets( context[36], context[9] );
        refalrts::link_brackets( context[37], context[70] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[77], context[81] );
        res = refalrts::splice_elem( res, context[44] );
        res = refalrts::splice_evar( res, context[75], context[76] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[74] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[72], context[73] );
        res = refalrts::splice_evar( res, context[13], context[17] );
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_elem( res, context[71] );
        res = refalrts::splice_evar( res, context[12], context[58] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[48], context[42] );
        res = refalrts::splice_evar( res, context[47], context[49] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[69], context[70] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        res = refalrts::splice_evar( res, context[8], context[43] );
        res = refalrts::splice_elem( res, context[50] );
        res = refalrts::splice_evar( res, context[0], context[5] );
        res = refalrts::splice_evar( res, context[67], context[68] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[51], context[52], context[32], context[33] ) );
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/36 # E/38 s.Num/49 e.Range/34 (/46 # Var/48 s.Mode/50 e.Index/44 )/47 )/37 (/41 # Junk/43 e.Junk/39 )/42 e.Substs-E/30 )/9 (/12 e.Vars-B/51 (/57 s.Mode/59 (/62 e.Index/64 )/63 e.Offsets/55 s.SampleOffset/66 )/58 e.Vars-E/53 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = context[22];
      context[33] = context[23];
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[30], context[31] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = refalrts::ident_left( identifiers[ident_E], context[34], context[35] );
      if( ! context[38] )
        continue;
      context[39] = 0;
      context[40] = 0;
      context[41] = refalrts::brackets_left( context[39], context[40], context[30], context[31] );
      if( ! context[41] )
        continue;
      refalrts::bracket_pointers(context[41], context[42]);
      context[43] = refalrts::ident_left( identifiers[ident_Junk], context[39], context[40] );
      if( ! context[43] )
        continue;
      context[44] = 0;
      context[45] = 0;
      context[46] = refalrts::brackets_right( context[44], context[45], context[34], context[35] );
      if( ! context[46] )
        continue;
      refalrts::bracket_pointers(context[46], context[47]);
      context[48] = refalrts::ident_left( identifiers[ident_Var], context[44], context[45] );
      if( ! context[48] )
        continue;
      // closed e.Junk as range 39
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[49], context[34], context[35] ) )
        continue;
      // closed e.Range as range 34
      if( ! refalrts::svar_left( context[50], context[44], context[45] ) )
        continue;
      // closed e.Index as range 44
      context[51] = 0;
      context[52] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[53] = context[32];
        context[54] = context[33];
        context[55] = 0;
        context[56] = 0;
        context[57] = refalrts::brackets_left( context[55], context[56], context[53], context[54] );
        if( ! context[57] )
          continue;
        refalrts::bracket_pointers(context[57], context[58]);
        if( ! refalrts::repeated_stvar_left( vm, context[59], context[50], context[55], context[56] ) )
          continue;
        context[60] = 0;
        context[61] = 0;
        context[62] = refalrts::brackets_left( context[60], context[61], context[55], context[56] );
        if( ! context[62] )
          continue;
        refalrts::bracket_pointers(context[62], context[63]);
        if( ! refalrts::repeated_evar_left( vm, context[64], context[65], context[44], context[45], context[60], context[61] ) )
          continue;
        if( ! refalrts::empty_seq( context[60], context[61] ) )
          continue;
        // closed e.Vars-E as range 53
        if( ! refalrts::svar_right( context[66], context[55], context[56] ) )
          continue;
        // closed e.Offsets as range 55
        //DEBUG: s.ContextOffset$a: 5
        //DEBUG: s.Num0: 18
        //DEBUG: s.VarOffset0: 19
        //DEBUG: e.Commands0: 24
        //DEBUG: e.CmdSaves: 26
        //DEBUG: e.Substs-B: 28
        //DEBUG: e.Junk: 39
        //DEBUG: e.Substs-E: 30
        //DEBUG: s.Num: 49
        //DEBUG: e.Range: 34
        //DEBUG: s.Mode: 50
        //DEBUG: e.Index: 44
        //DEBUG: e.Vars-B: 51
        //DEBUG: e.Vars-E: 53
        //DEBUG: s.SampleOffset: 66
        //DEBUG: e.Offsets: 55

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 } </67 & IncVarOffset-Saved/68 Tile{ AsIs: s.ContextOffset$a/5 } s.Mode/59/69 Tile{ HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/36 AsIs: # E/38 AsIs: s.Num/49 AsIs: e.Range/34 HalfReuse: )/46 HalfReuse: (/48 } # Junk/70 Tile{ AsIs: (/41 Reuse: # Var/43 } Tile{ AsIs: s.Mode/50 AsIs: e.Index/44 HalfReuse: s.ContextOffset$a5 /47 AsIs: )/37 } Tile{ AsIs: e.Junk/39 } Tile{ AsIs: )/42 } Tile{ AsIs: e.Substs-E/30 } Tile{ AsIs: (/12 AsIs: e.Vars-B/51 AsIs: (/57 AsIs: s.Mode/59 AsIs: (/62 AsIs: e.Index/64 AsIs: )/63 AsIs: e.Offsets/55 AsIs: s.SampleOffset/66 HalfReuse: s.ContextOffset$a5 /58 } Tile{ AsIs: )/9 } Tile{ AsIs: e.Vars-E/53 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/71 # AlgLeft/72 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/73 Tile{ AsIs: e.CmdSaves/26 } </74 & MakeRepeatedSave@2/75 s.Num/49/76 s.Mode/59/77 s.ContextOffset$a/5/78 s.SampleOffset/66/79 >/80 )/81 Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[67]);
        refalrts::alloc_name(vm, context[68], functions[efunc_IncVarOffsetm_Saved]);
        refalrts::copy_stvar(vm, context[69], context[59]);
        refalrts::alloc_ident(vm, context[70], identifiers[ident_Junk]);
        refalrts::alloc_ident(vm, context[71], identifiers[ident_CmdOpenedE]);
        refalrts::alloc_ident(vm, context[72], identifiers[ident_AlgLeft]);
        refalrts::alloc_close_bracket(vm, context[73]);
        refalrts::alloc_open_call(vm, context[74]);
        refalrts::alloc_name(vm, context[75], functions[efunc_gen_MakeRepeatedSave_Z2]);
        refalrts::copy_stvar(vm, context[76], context[49]);
        refalrts::copy_stvar(vm, context[77], context[59]);
        refalrts::copy_stvar(vm, context[78], context[5]);
        refalrts::copy_stvar(vm, context[79], context[66]);
        refalrts::alloc_close_call(vm, context[80]);
        refalrts::alloc_close_bracket(vm, context[81]);
        refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
        refalrts::reinit_close_call(context[8]);
        refalrts::reinit_close_bracket(context[46]);
        refalrts::reinit_open_bracket(context[48]);
        refalrts::update_ident(context[43], identifiers[ident_Var]);
        refalrts::reinit_svar( context[47], context[5] );
        refalrts::reinit_svar( context[58], context[5] );
        refalrts::reinit_open_bracket(context[17]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[16], context[81] );
        refalrts::push_stack( vm, context[80] );
        refalrts::push_stack( vm, context[74] );
        refalrts::link_brackets( context[17], context[73] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::link_brackets( context[57], context[9] );
        refalrts::link_brackets( context[62], context[63] );
        refalrts::link_brackets( context[48], context[42] );
        refalrts::link_brackets( context[41], context[37] );
        refalrts::link_brackets( context[36], context[46] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[67] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[74], context[81] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_elem( res, context[73] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[71], context[72] );
        res = refalrts::splice_evar( res, context[13], context[17] );
        res = refalrts::splice_evar( res, context[53], context[54] );
        res = refalrts::splice_elem( res, context[9] );
        res = refalrts::splice_evar( res, context[12], context[58] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_elem( res, context[42] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_evar( res, context[50], context[37] );
        res = refalrts::splice_evar( res, context[41], context[43] );
        res = refalrts::splice_elem( res, context[70] );
        res = refalrts::splice_evar( res, context[8], context[48] );
        res = refalrts::splice_elem( res, context[69] );
        res = refalrts::splice_elem( res, context[5] );
        res = refalrts::splice_evar( res, context[67], context[68] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[51], context[52], context[32], context[33] ) );
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk1/32 )/35 (/39 # E/41 s.Num/53 (/49 # Var/51 'e'/52 e.Index/47 )/50 )/40 (/44 # Junk/46 e.Junk2/42 )/45 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_E], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_left( context[42], context[43], context[30], context[31] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Junk], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = 0;
      context[48] = 0;
      context[49] = refalrts::brackets_right( context[47], context[48], context[37], context[38] );
      if( ! context[49] )
        continue;
      refalrts::bracket_pointers(context[49], context[50]);
      context[51] = refalrts::ident_left( identifiers[ident_Var], context[47], context[48] );
      if( ! context[51] )
        continue;
      context[52] = refalrts::char_left( 'e', context[47], context[48] );
      if( ! context[52] )
        continue;
      // closed e.Junk1 as range 32
      // closed e.Index as range 47
      // closed e.Junk2 as range 42
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[53], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk1: 32
      //DEBUG: e.Index: 47
      //DEBUG: e.Junk2: 42
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 53

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst/4 AsIs: s.ContextOffset$a/5 } Tile{ AsIs: e.Substs-B/28 } Tile{ AsIs: (/34 AsIs: # Junk/36 } Tile{ AsIs: e.Junk1/32 } Tile{ AsIs: (/49 AsIs: # Var/51 AsIs: 'e'/52 AsIs: e.Index/47 HalfReuse: s.Num53 /50 AsIs: )/40 } Tile{ AsIs: e.Junk2/42 } Tile{ AsIs: )/45 AsIs: e.Substs-E/30 HalfReuse: (/9 } Tile{ AsIs: e.Vars/22 } Tile{ AsIs: (/12 } 'e'/54 Tile{ AsIs: (/8 } e.Index/47/55 )/57 s.Num/53/58 )/59 Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/60 # AlgLeft/61 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/62 Tile{ AsIs: e.CmdSaves/26 } Tile{ AsIs: (/44 Reuse: # CmdComment/46 }" closed "/63 </65 & PrintVar/66 'e'/67 e.Index/47/68 >/70" as rang"/71 Tile{ HalfReuse: 'e'/35 HalfReuse: ' '/39 Reuse: # Offset/41 AsIs: s.Num/53 } )/73 )/74 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[54], 'e');
      refalrts::copy_evar(vm, context[55], context[56], context[47], context[48]);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::copy_stvar(vm, context[58], context[53]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::alloc_ident(vm, context[60], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[61], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[62]);
      refalrts::alloc_chars(vm, context[63], context[64], " closed ", 8);
      refalrts::alloc_open_call(vm, context[65]);
      refalrts::alloc_name(vm, context[66], functions[efunc_PrintVar]);
      refalrts::alloc_char(vm, context[67], 'e');
      refalrts::copy_evar(vm, context[68], context[69], context[47], context[48]);
      refalrts::alloc_close_call(vm, context[70]);
      refalrts::alloc_chars(vm, context[71], context[72], " as rang", 8);
      refalrts::alloc_close_bracket(vm, context[73]);
      refalrts::alloc_close_bracket(vm, context[74]);
      refalrts::update_name(context[4], functions[efunc_DoGenSubst]);
      refalrts::reinit_svar( context[50], context[53] );
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::update_ident(context[46], identifiers[ident_CmdComment]);
      refalrts::reinit_char(context[35], 'e');
      refalrts::reinit_char(context[39], ' ');
      refalrts::update_ident(context[41], identifiers[ident_Offset]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[16], context[74] );
      refalrts::link_brackets( context[44], context[73] );
      refalrts::push_stack( vm, context[70] );
      refalrts::push_stack( vm, context[65] );
      refalrts::link_brackets( context[17], context[62] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::link_brackets( context[12], context[59] );
      refalrts::link_brackets( context[8], context[57] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::link_brackets( context[49], context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[73], context[74] );
      res = refalrts::splice_evar( res, context[35], context[53] );
      res = refalrts::splice_evar( res, context[63], context[72] );
      res = refalrts::splice_evar( res, context[44], context[46] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[62] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[60], context[61] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      res = refalrts::splice_evar( res, context[57], context[59] );
      res = refalrts::splice_evar( res, context[55], context[56] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_elem( res, context[54] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[45], context[9] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[49], context[40] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[34], context[36] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk/32 )/35 (/39 # E/41 s.Num/42 (/45 # Var/47 's'/48 e.Index/43 )/46 e.Range/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_E], context[37], context[38] );
      if( ! context[41] )
        continue;
      // closed e.Junk as range 32
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
        continue;
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_left( context[43], context[44], context[37], context[38] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      context[47] = refalrts::ident_left( identifiers[ident_Var], context[43], context[44] );
      if( ! context[47] )
        continue;
      context[48] = refalrts::char_left( 's', context[43], context[44] );
      if( ! context[48] )
        continue;
      // closed e.Index as range 43
      // closed e.Range as range 37
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk: 32
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 42
      //DEBUG: e.Index: 43
      //DEBUG: e.Range: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </49 & DoGenSubst/50 </51 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk/32 HalfReuse: (/35 HalfReuse: # Var/39 HalfReuse: 's'/41 } Tile{ AsIs: e.Index/43 } s.ContextOffset$a/5/52 )/53 )/54 Tile{ AsIs: (/12 } # E/55 Tile{ HalfReuse: s.Num42 /46 AsIs: e.Range/37 AsIs: )/40 AsIs: e.Substs-E/30 HalfReuse: (/9 } Tile{ AsIs: e.Vars/22 } (/56 's'/57 (/58 e.Index/43/59 )/61 s.ContextOffset$a/5/62 )/63 Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/64 # AlgLeft/65 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/66 Tile{ AsIs: e.CmdSaves/26 } Tile{ AsIs: (/45 Reuse: # CmdVar/47 HalfReuse: # AlgLeft/48 } Tile{ AsIs: s.Num/42 } 's'/67 s.ContextOffset$a/5/68 )/69 )/70 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_DoGenSubst]);
      refalrts::alloc_open_call(vm, context[51]);
      refalrts::copy_stvar(vm, context[52], context[5]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_close_bracket(vm, context[54]);
      refalrts::alloc_ident(vm, context[55], identifiers[ident_E]);
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::alloc_char(vm, context[57], 's');
      refalrts::alloc_open_bracket(vm, context[58]);
      refalrts::copy_evar(vm, context[59], context[60], context[43], context[44]);
      refalrts::alloc_close_bracket(vm, context[61]);
      refalrts::copy_stvar(vm, context[62], context[5]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::alloc_ident(vm, context[64], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[65], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[66]);
      refalrts::alloc_char(vm, context[67], 's');
      refalrts::copy_stvar(vm, context[68], context[5]);
      refalrts::alloc_close_bracket(vm, context[69]);
      refalrts::alloc_close_bracket(vm, context[70]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Var]);
      refalrts::reinit_char(context[41], 's');
      refalrts::reinit_svar( context[46], context[42] );
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::update_ident(context[47], identifiers[ident_CmdVar]);
      refalrts::reinit_ident(context[48], identifiers[ident_AlgLeft]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[49] );
      refalrts::link_brackets( context[16], context[70] );
      refalrts::link_brackets( context[45], context[69] );
      refalrts::link_brackets( context[17], context[66] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::link_brackets( context[56], context[63] );
      refalrts::link_brackets( context[58], context[61] );
      refalrts::link_brackets( context[12], context[40] );
      refalrts::link_brackets( context[34], context[54] );
      refalrts::link_brackets( context[35], context[53] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[51] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[67], context[70] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[45], context[48] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[66] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[64], context[65] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      res = refalrts::splice_evar( res, context[56], context[63] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[46], context[9] );
      res = refalrts::splice_elem( res, context[55] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[52], context[54] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[0], context[41] );
      res = refalrts::splice_evar( res, context[49], context[51] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # Junk/36 e.Junk/32 )/35 (/39 # E/41 s.Num/42 (/45 # Var/47 't'/48 e.Index/43 )/46 e.Range/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_Junk], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_E], context[37], context[38] );
      if( ! context[41] )
        continue;
      // closed e.Junk as range 32
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[42], context[37], context[38] ) )
        continue;
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_left( context[43], context[44], context[37], context[38] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      context[47] = refalrts::ident_left( identifiers[ident_Var], context[43], context[44] );
      if( ! context[47] )
        continue;
      context[48] = refalrts::char_left( 't', context[43], context[44] );
      if( ! context[48] )
        continue;
      // closed e.Index as range 43
      // closed e.Range as range 37
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Junk: 32
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 42
      //DEBUG: e.Index: 43
      //DEBUG: e.Range: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </49 & DoGenSubst/50 Tile{ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # Junk/36 AsIs: e.Junk/32 HalfReuse: (/35 HalfReuse: # Var/39 HalfReuse: 't'/41 } Tile{ AsIs: e.Index/43 } s.ContextOffset$a/5/51 )/52 )/53 Tile{ AsIs: (/12 } # E/54 Tile{ HalfReuse: s.Num42 /46 AsIs: e.Range/37 AsIs: )/40 AsIs: e.Substs-E/30 HalfReuse: (/9 } Tile{ AsIs: e.Vars/22 } (/55 't'/56 (/57 e.Index/43/58 )/60 s.ContextOffset$a/5/61 )/62 Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/63 # AlgLeft/64 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/65 Tile{ AsIs: e.CmdSaves/26 } Tile{ AsIs: (/45 Reuse: # CmdVarSave/47 HalfReuse: # AlgLeft/48 } Tile{ AsIs: s.Num/42 } 't'/66 s.ContextOffset$a/5/67 )/68 )/69 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_DoGenSubst]);
      refalrts::copy_stvar(vm, context[51], context[5]);
      refalrts::alloc_close_bracket(vm, context[52]);
      refalrts::alloc_close_bracket(vm, context[53]);
      refalrts::alloc_ident(vm, context[54], identifiers[ident_E]);
      refalrts::alloc_open_bracket(vm, context[55]);
      refalrts::alloc_char(vm, context[56], 't');
      refalrts::alloc_open_bracket(vm, context[57]);
      refalrts::copy_evar(vm, context[58], context[59], context[43], context[44]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::copy_stvar(vm, context[61], context[5]);
      refalrts::alloc_close_bracket(vm, context[62]);
      refalrts::alloc_ident(vm, context[63], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[64], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[65]);
      refalrts::alloc_char(vm, context[66], 't');
      refalrts::copy_stvar(vm, context[67], context[5]);
      refalrts::alloc_close_bracket(vm, context[68]);
      refalrts::alloc_close_bracket(vm, context[69]);
      refalrts::update_name(context[4], functions[efunc_Inc2]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[35]);
      refalrts::reinit_ident(context[39], identifiers[ident_Var]);
      refalrts::reinit_char(context[41], 't');
      refalrts::reinit_svar( context[46], context[42] );
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::update_ident(context[47], identifiers[ident_CmdVarSave]);
      refalrts::reinit_ident(context[48], identifiers[ident_AlgLeft]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[49] );
      refalrts::link_brackets( context[16], context[69] );
      refalrts::link_brackets( context[45], context[68] );
      refalrts::link_brackets( context[17], context[65] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::link_brackets( context[55], context[62] );
      refalrts::link_brackets( context[57], context[60] );
      refalrts::link_brackets( context[12], context[40] );
      refalrts::link_brackets( context[34], context[53] );
      refalrts::link_brackets( context[35], context[52] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[66], context[69] );
      res = refalrts::splice_elem( res, context[42] );
      res = refalrts::splice_evar( res, context[45], context[48] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[65] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[63], context[64] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      res = refalrts::splice_evar( res, context[55], context[62] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[46], context[9] );
      res = refalrts::splice_elem( res, context[54] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[51], context[53] );
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[0], context[41] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # E/36 s.Num/48 e.Range/32 (/44 # Var/46 's'/47 e.Index/42 )/45 )/35 (/39 # Junk/41 e.Junk/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_E], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_Junk], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_right( context[42], context[43], context[32], context[33] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Var], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = refalrts::char_left( 's', context[42], context[43] );
      if( ! context[47] )
        continue;
      // closed e.Index as range 42
      // closed e.Junk as range 37
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[48], context[32], context[33] ) )
        continue;
      // closed e.Range as range 32
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Index: 42
      //DEBUG: e.Junk: 37
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 48
      //DEBUG: e.Range: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </49 & DoGenSubst/50 </51 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # E/36 AsIs: s.Num/48 AsIs: e.Range/32 HalfReuse: )/44 HalfReuse: (/46 HalfReuse: # Junk/47 } (/52 # Var/53 's'/54 Tile{ AsIs: e.Index/42 } Tile{ HalfReuse: s.ContextOffset$a5 /39 HalfReuse: )/41 AsIs: e.Junk/37 AsIs: )/40 AsIs: e.Substs-E/30 HalfReuse: (/9 } Tile{ AsIs: e.Vars/22 } Tile{ AsIs: (/12 } 's'/55 (/56 e.Index/42/57 )/59 s.ContextOffset$a/5/60 )/61 Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/62 # AlgLeft/63 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/64 Tile{ AsIs: e.CmdSaves/26 } (/65 # CmdVar/66 # AlgRight/67 s.Num/48/68 's'/69 s.ContextOffset$a/5/70 Tile{ AsIs: )/45 AsIs: )/35 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_DoGenSubst]);
      refalrts::alloc_open_call(vm, context[51]);
      refalrts::alloc_open_bracket(vm, context[52]);
      refalrts::alloc_ident(vm, context[53], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[54], 's');
      refalrts::alloc_char(vm, context[55], 's');
      refalrts::alloc_open_bracket(vm, context[56]);
      refalrts::copy_evar(vm, context[57], context[58], context[42], context[43]);
      refalrts::alloc_close_bracket(vm, context[59]);
      refalrts::copy_stvar(vm, context[60], context[5]);
      refalrts::alloc_close_bracket(vm, context[61]);
      refalrts::alloc_ident(vm, context[62], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[63], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[64]);
      refalrts::alloc_open_bracket(vm, context[65]);
      refalrts::alloc_ident(vm, context[66], identifiers[ident_CmdVar]);
      refalrts::alloc_ident(vm, context[67], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[68], context[48]);
      refalrts::alloc_char(vm, context[69], 's');
      refalrts::copy_stvar(vm, context[70], context[5]);
      refalrts::reinit_name(context[0], functions[efunc_Add]);
      refalrts::reinit_number(context[4], 1UL);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::reinit_open_bracket(context[46]);
      refalrts::reinit_ident(context[47], identifiers[ident_Junk]);
      refalrts::reinit_svar( context[39], context[5] );
      refalrts::reinit_close_bracket(context[41]);
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[49] );
      refalrts::link_brackets( context[16], context[35] );
      refalrts::link_brackets( context[65], context[45] );
      refalrts::link_brackets( context[17], context[64] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::link_brackets( context[12], context[61] );
      refalrts::link_brackets( context[56], context[59] );
      refalrts::link_brackets( context[46], context[40] );
      refalrts::link_brackets( context[52], context[41] );
      refalrts::link_brackets( context[34], context[44] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[51] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[45], context[35] );
      res = refalrts::splice_evar( res, context[65], context[70] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[64] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[62], context[63] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      res = refalrts::splice_evar( res, context[55], context[61] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[39], context[9] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[52], context[54] );
      res = refalrts::splice_evar( res, context[0], context[47] );
      res = refalrts::splice_evar( res, context[49], context[51] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.Substs-B/28 (/34 # E/36 s.Num/48 e.Range/32 (/44 # Var/46 't'/47 e.Index/42 )/45 )/35 (/39 # Junk/41 e.Junk/37 )/40 e.Substs-E/30 )/9 (/12 e.Vars/22 )/13 (/16 e.Commands0/24 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.Vars as range 22
    // closed e.Commands0 as range 24
    // closed e.CmdSaves as range 26
    context[28] = 0;
    context[29] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[30] = context[20];
      context[31] = context[21];
      context[32] = 0;
      context[33] = 0;
      context[34] = refalrts::brackets_left( context[32], context[33], context[30], context[31] );
      if( ! context[34] )
        continue;
      refalrts::bracket_pointers(context[34], context[35]);
      context[36] = refalrts::ident_left( identifiers[ident_E], context[32], context[33] );
      if( ! context[36] )
        continue;
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[30], context[31] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      context[41] = refalrts::ident_left( identifiers[ident_Junk], context[37], context[38] );
      if( ! context[41] )
        continue;
      context[42] = 0;
      context[43] = 0;
      context[44] = refalrts::brackets_right( context[42], context[43], context[32], context[33] );
      if( ! context[44] )
        continue;
      refalrts::bracket_pointers(context[44], context[45]);
      context[46] = refalrts::ident_left( identifiers[ident_Var], context[42], context[43] );
      if( ! context[46] )
        continue;
      context[47] = refalrts::char_left( 't', context[42], context[43] );
      if( ! context[47] )
        continue;
      // closed e.Index as range 42
      // closed e.Junk as range 37
      // closed e.Substs-E as range 30
      if( ! refalrts::svar_left( context[48], context[32], context[33] ) )
        continue;
      // closed e.Range as range 32
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Vars: 22
      //DEBUG: e.Commands0: 24
      //DEBUG: e.CmdSaves: 26
      //DEBUG: e.Substs-B: 28
      //DEBUG: e.Index: 42
      //DEBUG: e.Junk: 37
      //DEBUG: e.Substs-E: 30
      //DEBUG: s.Num: 48
      //DEBUG: e.Range: 32

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </49 & DoGenSubst/50 Tile{ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: e.Substs-B/28 AsIs: (/34 AsIs: # E/36 AsIs: s.Num/48 AsIs: e.Range/32 HalfReuse: )/44 HalfReuse: (/46 HalfReuse: # Junk/47 } (/51 # Var/52 't'/53 Tile{ AsIs: e.Index/42 } Tile{ HalfReuse: s.ContextOffset$a5 /39 HalfReuse: )/41 AsIs: e.Junk/37 AsIs: )/40 AsIs: e.Substs-E/30 HalfReuse: (/9 } Tile{ AsIs: e.Vars/22 } Tile{ AsIs: (/12 } 't'/54 (/55 e.Index/42/56 )/58 s.ContextOffset$a/5/59 )/60 Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/24 HalfReuse: (/17 } # CmdOpenedE/61 # AlgLeft/62 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/63 Tile{ AsIs: e.CmdSaves/26 } (/64 # CmdVarSave/65 # AlgRight/66 s.Num/48/67 't'/68 s.ContextOffset$a/5/69 Tile{ AsIs: )/45 AsIs: )/35 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[49]);
      refalrts::alloc_name(vm, context[50], functions[efunc_DoGenSubst]);
      refalrts::alloc_open_bracket(vm, context[51]);
      refalrts::alloc_ident(vm, context[52], identifiers[ident_Var]);
      refalrts::alloc_char(vm, context[53], 't');
      refalrts::alloc_char(vm, context[54], 't');
      refalrts::alloc_open_bracket(vm, context[55]);
      refalrts::copy_evar(vm, context[56], context[57], context[42], context[43]);
      refalrts::alloc_close_bracket(vm, context[58]);
      refalrts::copy_stvar(vm, context[59], context[5]);
      refalrts::alloc_close_bracket(vm, context[60]);
      refalrts::alloc_ident(vm, context[61], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_ident(vm, context[62], identifiers[ident_AlgLeft]);
      refalrts::alloc_close_bracket(vm, context[63]);
      refalrts::alloc_open_bracket(vm, context[64]);
      refalrts::alloc_ident(vm, context[65], identifiers[ident_CmdVarSave]);
      refalrts::alloc_ident(vm, context[66], identifiers[ident_AlgRight]);
      refalrts::copy_stvar(vm, context[67], context[48]);
      refalrts::alloc_char(vm, context[68], 't');
      refalrts::copy_stvar(vm, context[69], context[5]);
      refalrts::update_name(context[4], functions[efunc_Inc2]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_close_bracket(context[44]);
      refalrts::reinit_open_bracket(context[46]);
      refalrts::reinit_ident(context[47], identifiers[ident_Junk]);
      refalrts::reinit_svar( context[39], context[5] );
      refalrts::reinit_close_bracket(context[41]);
      refalrts::reinit_open_bracket(context[9]);
      refalrts::reinit_open_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[49] );
      refalrts::link_brackets( context[16], context[35] );
      refalrts::link_brackets( context[64], context[45] );
      refalrts::link_brackets( context[17], context[63] );
      refalrts::link_brackets( context[9], context[13] );
      refalrts::link_brackets( context[12], context[60] );
      refalrts::link_brackets( context[55], context[58] );
      refalrts::link_brackets( context[46], context[40] );
      refalrts::link_brackets( context[51], context[41] );
      refalrts::link_brackets( context[34], context[44] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[45], context[35] );
      res = refalrts::splice_evar( res, context[64], context[69] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_elem( res, context[63] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[61], context[62] );
      res = refalrts::splice_evar( res, context[13], context[17] );
      res = refalrts::splice_evar( res, context[54], context[60] );
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[39], context[9] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      res = refalrts::splice_evar( res, context[51], context[53] );
      res = refalrts::splice_evar( res, context[0], context[47] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[28], context[29], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & DoGenSubst@2/4 s.new8/5 (/8 (/30 # Junk/32 e.new12/28 )/31 e.new13/20 )/9 (/12 e.new14/22 )/13 (/16 e.new15/24 )/17 s.new9/18 s.new10/19 e.new11/26 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[20], context[21] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left( identifiers[ident_Junk], context[28], context[29] );
    if( ! context[32] )
      continue;
    // closed e.new12 as range 28
    // closed e.new13 as range 20
    // closed e.new14 as range 22
    // closed e.new15 as range 24
    // closed e.new11 as range 26
    do {
      // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 (/30 # Junk/32 e.Junk/33 )/31 (/45 # E/47 s.Num/48 (/51 # Var/53 'e'/54 e.Index/49 )/52 e.Range/43 )/46 e.SubstitutesAnsJunks/35 )/9 (/12 e.Vars/37 )/13 (/16 e.Commands0/39 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/41 >/1
      context[33] = context[28];
      context[34] = context[29];
      context[35] = context[20];
      context[36] = context[21];
      context[37] = context[22];
      context[38] = context[23];
      context[39] = context[24];
      context[40] = context[25];
      context[41] = context[26];
      context[42] = context[27];
      context[43] = 0;
      context[44] = 0;
      context[45] = refalrts::brackets_left( context[43], context[44], context[35], context[36] );
      if( ! context[45] )
        continue;
      refalrts::bracket_pointers(context[45], context[46]);
      context[47] = refalrts::ident_left( identifiers[ident_E], context[43], context[44] );
      if( ! context[47] )
        continue;
      // closed e.Junk as range 33
      // closed e.SubstitutesAnsJunks as range 35
      // closed e.Vars as range 37
      // closed e.Commands0 as range 39
      // closed e.CmdSaves as range 41
      if( ! refalrts::svar_left( context[48], context[43], context[44] ) )
        continue;
      context[49] = 0;
      context[50] = 0;
      context[51] = refalrts::brackets_left( context[49], context[50], context[43], context[44] );
      if( ! context[51] )
        continue;
      refalrts::bracket_pointers(context[51], context[52]);
      context[53] = refalrts::ident_left( identifiers[ident_Var], context[49], context[50] );
      if( ! context[53] )
        continue;
      context[54] = refalrts::char_left( 'e', context[49], context[50] );
      if( ! context[54] )
        continue;
      // closed e.Index as range 49
      // closed e.Range as range 43
      //DEBUG: s.ContextOffset$a: 5
      //DEBUG: s.Num0: 18
      //DEBUG: s.VarOffset0: 19
      //DEBUG: e.Junk: 33
      //DEBUG: e.SubstitutesAnsJunks: 35
      //DEBUG: e.Vars: 37
      //DEBUG: e.Commands0: 39
      //DEBUG: e.CmdSaves: 41
      //DEBUG: s.Num: 48
      //DEBUG: e.Index: 49
      //DEBUG: e.Range: 43

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </55 Tile{ HalfReuse: & DoGenSubst$36=3@3/9 AsIs: (/12 AsIs: e.Vars/37 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Index/49 } )/56 s.ContextOffset$a/5/57 (/58 Tile{ AsIs: e.Commands0/39 } (/59 # CmdOpenedE/60 Tile{ HalfReuse: # AlgLeft/17 AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } )/61 Tile{ AsIs: e.CmdSaves/41 } )/62 Tile{ AsIs: s.Num/48 HalfReuse: s.ContextOffset$a5 /51 HalfReuse: </53 HalfReuse: & MakeSavers/54 } Tile{ AsIs: </0 Reuse: & Inc2/4 AsIs: s.ContextOffset$a/5 HalfReuse: >/8 AsIs: (/30 AsIs: # Junk/32 AsIs: e.Junk/33 HalfReuse: (/31 HalfReuse: # Var/45 HalfReuse: 'e'/47 } e.Index/49/63 s.ContextOffset$a/5/65 )/66 )/67 (/68 # E/69 Tile{ HalfReuse: s.Num48 /52 AsIs: e.Range/43 AsIs: )/46 } Tile{ AsIs: e.SubstitutesAnsJunks/35 } >/70 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[55]);
      refalrts::alloc_close_bracket(vm, context[56]);
      refalrts::copy_stvar(vm, context[57], context[5]);
      refalrts::alloc_open_bracket(vm, context[58]);
      refalrts::alloc_open_bracket(vm, context[59]);
      refalrts::alloc_ident(vm, context[60], identifiers[ident_CmdOpenedE]);
      refalrts::alloc_close_bracket(vm, context[61]);
      refalrts::alloc_close_bracket(vm, context[62]);
      refalrts::copy_evar(vm, context[63], context[64], context[49], context[50]);
      refalrts::copy_stvar(vm, context[65], context[5]);
      refalrts::alloc_close_bracket(vm, context[66]);
      refalrts::alloc_close_bracket(vm, context[67]);
      refalrts::alloc_open_bracket(vm, context[68]);
      refalrts::alloc_ident(vm, context[69], identifiers[ident_E]);
      refalrts::alloc_close_call(vm, context[70]);
      refalrts::reinit_name(context[9], functions[efunc_gen_DoGenSubst_S36A3Z3]);
      refalrts::reinit_ident(context[17], identifiers[ident_AlgLeft]);
      refalrts::reinit_svar( context[51], context[5] );
      refalrts::reinit_open_call(context[53]);
      refalrts::reinit_name(context[54], functions[efunc_MakeSavers]);
      refalrts::update_name(context[4], functions[efunc_Inc2]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_open_bracket(context[31]);
      refalrts::reinit_ident(context[45], identifiers[ident_Var]);
      refalrts::reinit_char(context[47], 'e');
      refalrts::reinit_svar( context[52], context[48] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[55] );
      refalrts::push_stack( vm, context[70] );
      refalrts::push_stack( vm, context[53] );
      refalrts::link_brackets( context[68], context[46] );
      refalrts::link_brackets( context[30], context[67] );
      refalrts::link_brackets( context[31], context[66] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[58], context[62] );
      refalrts::link_brackets( context[59], context[61] );
      refalrts::link_brackets( context[16], context[56] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_elem( res, context[70] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      res = refalrts::splice_evar( res, context[52], context[46] );
      res = refalrts::splice_evar( res, context[65], context[69] );
      res = refalrts::splice_evar( res, context[63], context[64] );
      res = refalrts::splice_evar( res, context[0], context[47] );
      res = refalrts::splice_evar( res, context[48], context[54] );
      res = refalrts::splice_elem( res, context[62] );
      res = refalrts::splice_evar( res, context[41], context[42] );
      res = refalrts::splice_elem( res, context[61] );
      res = refalrts::splice_evar( res, context[17], context[19] );
      res = refalrts::splice_evar( res, context[59], context[60] );
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[56], context[58] );
      res = refalrts::splice_evar( res, context[49], context[50] );
      res = refalrts::splice_evar( res, context[9], context[16] );
      res = refalrts::splice_elem( res, context[55] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 (/30 # Junk/32 e.MarkedPattern/33 )/31 )/9 (/12 e.Vars/35 )/13 (/16 e.Commands0/37 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/39 >/1
    context[33] = context[28];
    context[34] = context[29];
    context[35] = context[22];
    context[36] = context[23];
    context[37] = context[24];
    context[38] = context[25];
    context[39] = context[26];
    context[40] = context[27];
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.MarkedPattern as range 33
    // closed e.Vars as range 35
    // closed e.Commands0 as range 37
    // closed e.CmdSaves as range 39
    //DEBUG: s.ContextOffset$a: 5
    //DEBUG: s.Num0: 18
    //DEBUG: s.VarOffset0: 19
    //DEBUG: e.MarkedPattern: 33
    //DEBUG: e.Vars: 35
    //DEBUG: e.Commands0: 37
    //DEBUG: e.CmdSaves: 39

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.ContextOffset$a/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.ContextOffset$a5 /9 AsIs: (/12 AsIs: e.Vars/35 AsIs: )/13 AsIs: (/16 } e.MarkedPattern/33/41 Tile{ HalfReuse: )/0 HalfReuse: (/4 } Tile{ HalfReuse: # CmdComment/8 HalfReuse: </30 HalfReuse: & TextFromExpr/32 AsIs: e.MarkedPattern/33 HalfReuse: >/31 } )/43 Tile{ AsIs: e.Commands0/37 } (/44 # CmdOpenedE/45 Tile{ HalfReuse: # AlgLeft/17 AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.CmdSaves/39 } Tile{ ]] }
    refalrts::copy_evar(vm, context[41], context[42], context[33], context[34]);
    refalrts::alloc_close_bracket(vm, context[43]);
    refalrts::alloc_open_bracket(vm, context[44]);
    refalrts::alloc_ident(vm, context[45], identifiers[ident_CmdOpenedE]);
    refalrts::reinit_svar( context[9], context[5] );
    refalrts::reinit_close_bracket(context[0]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::reinit_ident(context[8], identifiers[ident_CmdComment]);
    refalrts::reinit_open_call(context[30]);
    refalrts::reinit_name(context[32], functions[efunc_TextFromExpr]);
    refalrts::reinit_close_call(context[31]);
    refalrts::reinit_ident(context[17], identifiers[ident_AlgLeft]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[44], context[1] );
    refalrts::link_brackets( context[4], context[43] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[30] );
    refalrts::link_brackets( context[16], context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_elem( res, context[1] );
    res = refalrts::splice_evar( res, context[17], context[19] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_elem( res, context[43] );
    res = refalrts::splice_evar( res, context[8], context[31] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGenSubst@2/4 s.ContextOffset$a/5 (/8 e.dyn0/6 )/9 (/12 e.dyn1/10 )/13 (/16 e.Commands0/14 )/17 s.Num0/18 s.VarOffset0/19 e.CmdSaves/2 >/1
  // closed e.dyn0 as range 6
  // closed e.dyn1 as range 10
  // closed e.Commands0 as range 14
  // closed e.CmdSaves as range 2
  //DEBUG: s.ContextOffset$a: 5
  //DEBUG: s.Num0: 18
  //DEBUG: s.VarOffset0: 19
  //DEBUG: e.dyn0: 6
  //DEBUG: e.dyn1: 10
  //DEBUG: e.Commands0: 14
  //DEBUG: e.CmdSaves: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst@0/4 AsIs: s.ContextOffset$a/5 } Tile{ AsIs: e.dyn0/6 } Tile{ AsIs: (/12 AsIs: e.dyn1/10 AsIs: )/13 AsIs: (/16 AsIs: e.Commands0/14 HalfReuse: (/17 } Tile{ HalfReuse: # CmdOpenedE/8 } # AlgLeft/20 Tile{ AsIs: s.Num0/18 AsIs: s.VarOffset0/19 } Tile{ AsIs: )/9 } Tile{ AsIs: e.CmdSaves/2 } )/21 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[20], identifiers[ident_AlgLeft]);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_gen_DoGenSubst_Z0]);
  refalrts::reinit_open_bracket(context[17]);
  refalrts::reinit_ident(context[8], identifiers[ident_CmdOpenedE]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[16], context[21] );
  refalrts::link_brackets( context[17], context[9] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoGenSubst_Z2("DoGenSubst@2", COOKIE1_, COOKIE2_, func_gen_DoGenSubst_Z2);


static refalrts::FnResult func_gen_DoGenSubst_S36A3Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & DoGenSubst$36=3@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & DoGenSubst$36=3@3/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 s.new3/13 (/16 e.new4/14 )/17 s.new5/18 s.new6/19 e.new7/2 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.new4 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 2
  do {
    // </0 & DoGenSubst$36=3@3/4 (/7 e.X/20 )/8 (/11 e.X0/22 )/12 s.X/13 (/16 e.X1/24 )/17 s.X0/18 s.X1/19 s.ContextOffset$a/28 (/31 e.CmdSaves/29 )/32 e.SubstitutesAnsJunks$a/26 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[22] = context[9];
    context[23] = context[10];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[2];
    context[27] = context[3];
    // closed e.X as range 20
    // closed e.X0 as range 22
    // closed e.X1 as range 24
    if( ! refalrts::svar_left( context[28], context[26], context[27] ) )
      continue;
    context[29] = 0;
    context[30] = 0;
    context[31] = refalrts::brackets_left( context[29], context[30], context[26], context[27] );
    if( ! context[31] )
      continue;
    refalrts::bracket_pointers(context[31], context[32]);
    // closed e.CmdSaves as range 29
    // closed e.SubstitutesAnsJunks$a as range 26
    //DEBUG: s.X: 13
    //DEBUG: s.X0: 18
    //DEBUG: s.X1: 19
    //DEBUG: e.X: 20
    //DEBUG: e.X0: 22
    //DEBUG: e.X1: 24
    //DEBUG: s.ContextOffset$a: 28
    //DEBUG: e.CmdSaves: 29
    //DEBUG: e.SubstitutesAnsJunks$a: 26

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ContextOffset$a/28 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst@2/4 HalfReuse: s.ContextOffset$a28 /7 } (/33 Tile{ AsIs: e.SubstitutesAnsJunks$a/26 } )/34 (/35 Tile{ AsIs: e.X/20 } Tile{ AsIs: (/31 } Tile{ HalfReuse: 'e'/8 AsIs: (/11 AsIs: e.X0/22 AsIs: )/12 AsIs: s.X/13 } Tile{ AsIs: )/32 } )/36 Tile{ AsIs: (/16 AsIs: e.X1/24 AsIs: )/17 AsIs: s.X0/18 AsIs: s.X1/19 } Tile{ AsIs: e.CmdSaves/29 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[33]);
    refalrts::alloc_close_bracket(vm, context[34]);
    refalrts::alloc_open_bracket(vm, context[35]);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::update_name(context[4], functions[efunc_gen_DoGenSubst_Z2]);
    refalrts::reinit_svar( context[7], context[28] );
    refalrts::reinit_char(context[8], 'e');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[35], context[36] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[33], context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_elem( res, context[33] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoGenSubst$36=3@3/4 (/7 e.X/5 )/8 (/11 e.X0/9 )/12 s.X/13 (/16 e.X1/14 )/17 s.X0/18 s.X1/19 e.dyn/2 >/1
  // closed e.X as range 5
  // closed e.X0 as range 9
  // closed e.X1 as range 14
  // closed e.dyn as range 2
  //DEBUG: s.X: 13
  //DEBUG: s.X0: 18
  //DEBUG: s.X1: 19
  //DEBUG: e.X: 5
  //DEBUG: e.X0: 9
  //DEBUG: e.X1: 14
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoGenSubst$36=3@0/4 AsIs: (/7 AsIs: e.X/5 AsIs: )/8 AsIs: (/11 AsIs: e.X0/9 AsIs: )/12 AsIs: s.X/13 AsIs: (/16 AsIs: e.X1/14 AsIs: )/17 } (/20 # CmdOpenedE/21 # AlgLeft/22 Tile{ AsIs: s.X0/18 AsIs: s.X1/19 } )/23 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_CmdOpenedE]);
  refalrts::alloc_ident(vm, context[22], identifiers[ident_AlgLeft]);
  refalrts::alloc_close_bracket(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_gen_DoGenSubst_S36A3Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[20], context[23] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[23] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoGenSubst_S36A3Z3("DoGenSubst$36=3@3", COOKIE1_, COOKIE2_, func_gen_DoGenSubst_S36A3Z3);


//End of file
