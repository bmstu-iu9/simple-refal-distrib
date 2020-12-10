// This file automatically generated from 'OptTree.ref'
// Don't edit! Edit 'OptTree.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1083867191_4125924444
#define COOKIE1_ 1083867191U
#define COOKIE2_ 4125924444U

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
  efunc_Intm_Code = 18,
  efunc_OptTreem_AutoMarkupm_Spec = 19,
  efunc_OptTreem_AutoMarkupm_Drive = 20,
  efunc_OptTreem_Drivem_Prepare = 21,
  efunc_OptTreem_AutoMarkupm_CureDrives = 22,
  efunc_OptTreem_AutoMarkupm_CleanupUnusedFunctions = 23,
  efunc_OptTreem_CleanupMarkup = 24,
  efunc_OptTreem_Specm_Prepare = 25,
  efunc_OptTreem_Spec = 26,
  efunc_WarmColdFunctions = 27,
  efunc_ExpandClosures = 28,
  efunc_OptTreem_Drive = 29,
  efunc_OptTreem_Drivem_CleanupColdCalls = 30,
  efunc_gen_Int_A2 = 31,
  efunc_Configm_GetOptIntrinsic = 32,
  efunc_gen_OptTree_A5 = 33,
  efunc_Configm_GetOptAutoMarkup = 34,
  efunc_gen_OptTree_A4 = 35,
  efunc_Configm_GetOptSpec = 36,
  efunc_gen_OptTree_A3 = 37,
  efunc_Configm_GetOptDrive = 38,
  efunc_gen_OptTree_A2 = 39,
  efunc_Configm_GetTreeOptCycles = 40,
  efunc_gen_OptTree_A1 = 41,
  efunc_gen_Map_Z1 = 42,
  efunc_gen_Map_Z2 = 43,
  efunc_gen_Map_Z4 = 44,
  efunc_gen_Map_Z3 = 45,
  efunc_gen_Map_Z6 = 46,
  efunc_gen_Map_Z5 = 47,
  efunc_gen_Int_A1D1 = 48,
  efunc_Intm_Command = 49,
  efunc_gen_Intm_Code_B1S1A1 = 50,
  efunc_gen_Intm_Code_B1D2 = 51,
  efunc_gen_Intm_Command_B1S1B1S2A1 = 52,
  efunc_gen_Intm_Command_B1S2B1 = 53,
  efunc_Intm_Cond = 54,
  efunc_gen_Intm_Command_B1S3B1 = 55,
  efunc_Logm_AST = 56,
  efunc_Symb = 57,
  efunc_gen_Intm_Command_B1S6A1 = 58,
  efunc_Intm_LoopForWarmFunctions = 59,
  efunc_gen_Intm_Command_B1S8A1 = 60,
  efunc_Intm_Lookup = 61,
  efunc_gen_Intm_Command_B1D8 = 62,
  efunc_Intm_Condm_Or = 63,
  efunc_Intm_Condm_And = 64,
  efunc_gen_Intm_Condm_Or_S1B1 = 65,
  efunc_gen_Intm_Condm_And_S1B1 = 66,
  efunc_gen_Intm_LoopForWarmFunctions_S2A2 = 67,
  efunc_Mu = 68,
  efunc_Up = 69,
  efunc_Evm_met = 70,
  efunc_Residue = 71,
  efunc_u_u_Metau_Residue = 72,
  efunc_MapAccum = 73,
  efunc_UnBracket = 74,
  efunc_DelAccumulator = 75,
  efunc_Inc = 76,
  efunc_Dec = 77,
  efunc_OptTree = 78,
  efunc_ExpandClosuresm_Body = 79,
  efunc_ExpandClosuresm_Sentence = 80,
  efunc_ExpandClosuresm_Result = 81,
  efunc_ExpandClosuresm_ResultTerm = 82,
  efunc_Int = 83,
  efunc_gen_Apply_Z4 = 84,
  efunc_gen_Map_Z0 = 85,
  efunc_gen_OptTreem_CleanupMarkup_L1Z0 = 86,
  efunc_gen_WarmColdFunctions_L1Z0 = 87,
  efunc_gen_ExpandClosuresm_Sentence_D1 = 88,
  efunc_gen_ExpandClosuresm_Sentence_Z0 = 89,
  efunc_gen_ExpandClosures_L1Z0 = 90,
  efunc_gen_ExpandClosuresm_ResultTerm_Z0 = 91,
  efunc_gen_ExpandClosuresm_Sentence_L1D1 = 92,
  efunc_gen_ExpandClosuresm_Sentence_L1Z0 = 93,
};


enum ident {
  ident_define = 0,
  ident_main = 1,
  ident_if = 2,
  ident_begin = 3,
  ident_pass = 4,
  ident_trace = 5,
  ident_call = 6,
  ident_DriveSpecLoop = 7,
  ident_DriveLoop = 8,
  ident_when = 9,
  ident_or = 10,
  ident_loopm_form_warmm_functions = 11,
  ident_SPEC = 12,
  ident_DRIVE = 13,
  ident_Brackets = 14,
  ident_ADTm_Brackets = 15,
  ident_CallBrackets = 16,
  ident_ClosureBrackets = 17,
  ident_True = 18,
  ident_False = 19,
  ident_and = 20,
  ident_NoOpt = 21,
  ident_Function = 22,
  ident_Sentences = 23,
  ident_Mu = 24,
  ident_Up = 25,
  ident_Evm_met = 26,
  ident_Residue = 27,
  ident_u_u_Metau_Residue = 28,
  ident_Apply = 29,
  ident_Map = 30,
  ident_Reduce = 31,
  ident_Fetch = 32,
  ident_MapAccum = 33,
  ident_DoMapAccum = 34,
  ident_UnBracket = 35,
  ident_DelAccumulator = 36,
  ident_Inc = 37,
  ident_Dec = 38,
  ident_Pipe = 39,
  ident_OptTree = 40,
  ident_OptTreem_CleanupMarkup = 41,
  ident_WarmColdFunctions = 42,
  ident_ExpandClosures = 43,
  ident_ExpandClosuresm_Body = 44,
  ident_ExpandClosuresm_Sentence = 45,
  ident_ExpandClosuresm_Result = 46,
  ident_ExpandClosuresm_ResultTerm = 47,
  ident_Int = 48,
  ident_Intm_Code = 49,
  ident_Intm_Command = 50,
  ident_Intm_Cond = 51,
  ident_Intm_Condm_Or = 52,
  ident_Intm_Condm_And = 53,
  ident_Intm_LoopForWarmFunctions = 54,
  ident_Intm_Lookup = 55,
  ident_Drive = 56,
  ident_Inline = 57,
  ident_Intrinsic = 58,
  ident_Spec = 59,
  ident_DriveInfo = 60,
  ident_SpecInfo = 61,
  ident_ColdFunction = 62,
  ident_Condition = 63,
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


static refalrts::FnResult func_gen_OptTree_A5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 220 elems
  refalrts::Iter context[220];
  refalrts::zeros( context, 220 );
  // </0 & OptTree=5/4 s.OptAutoMarkup#5/5 s.OptDrive#3/6 s.OptSpec#4/7 s.Cycles#2/8 (/11 e.AST#1/9 )/12 s.OptIntrinsic#6/13 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.AST#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.OptAutoMarkup#5: 5
  //DEBUG: s.OptDrive#3: 6
  //DEBUG: s.OptSpec#4: 7
  //DEBUG: s.Cycles#2: 8
  //DEBUG: e.AST#1: 9
  //DEBUG: s.OptIntrinsic#6: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int=2/4 } </14 & Int-Code/15 (/16 (/17 # define/18 # main/19 (/20 # if/21 Tile{ AsIs: s.OptAutoMarkup#5/5 } (/22 # begin/23 (/24 # pass/25 (/26 # trace/27"before Auto markup"/28 )/30 (/31 # call/32 & OptTree-AutoMarkup-Spec/33 )/34 (/35 # call/36 & OptTree-AutoMarkup-Drive/37 )/38 )/39 (/40 # DriveSpecLoop/41 )/42 (/43 # pass/44 (/45 # trace/46"before Driving non-recursive instances"/47 )/49 (/50 # call/51 & OptTree-AutoMarkup-Drive/52 )/53 )/54 (/55 # call/56 & OptTree-Drive-Prepare/57 (/58 Tile{ AsIs: s.OptDrive#3/6 } s.OptIntrinsic#6/13/59 )/60 )/61 (/62 # DriveLoop/63 )/64 )/65 (/66 # begin/67 (/68 # when/69 (/70 # or/71 s.OptDrive#3/6/72 Tile{ AsIs: s.OptIntrinsic#6/13 } )/73 (/74 # trace/75"before Curing drives"/76 )/78 (/79 # call/80 & OptTree-AutoMarkup-CureDrives/81 )/82 )/83 (/84 # DriveSpecLoop/85 )/86 )/87 )/88 (/89 # trace/90"before Cleanup unused functions"/91 )/93 (/94 # call/95 & OptTree-AutoMarkup-CleanupUnusedFunctions/96 )/97 (/98 # call/99 & OptTree-CleanupMarkup/100 )/101 )/102 (/103 # define/104 # DriveSpecLoop/105 (/106 # if/107 Tile{ AsIs: s.OptSpec#4/7 } (/108 # begin/109 (/110 # call/111 & OptTree-Drive-Prepare/112 (/113 s.OptDrive#3/6/114 s.OptIntrinsic#6/13/115 )/116 )/117 (/118 # call/119 & OptTree-Spec-Prepare/120 s.OptSpec#4/7/121 )/122 (/123 # loop-for-warm-functions/124 (/125 # DriveLoop/126 )/127 (/128 # pass/129 (/130 # trace/131"before Spec"/132 )/134 (/135 # call/136 & OptTree-Spec/137 s.OptSpec#4/7/138 )/139 )/140 )/141 (/142 # call/143 & WarmColdFunctions/144 # SPEC/145 )/146 )/147 (/148 # begin/149 (/150 # call/151 & OptTree-Drive-Prepare/152 (/153 s.OptDrive#3/6/154 s.OptIntrinsic#6/13/155 )/156 )/157 (/158 # DriveLoop/159 )/160 )/161 )/162 )/163 (/164 # define/165 # DriveLoop/166 (/167 # if/168 (/169 # or/170 s.OptDrive#3/6/171 s.OptIntrinsic#6/13/172 )/173 (/174 # begin/175 (/176 # loop-for-warm-functions/177 (/178 # pass/179 (/180 # trace/181"before Drive"/182 )/184 (/185 # call/186 & ExpandClosures/187 )/188 (/189 # call/190 & OptTree-Drive/191 (/192 s.OptDrive#3/6/193 s.OptIntrinsic#6/13/194 )/195 )/196 )/197 )/198 (/199 # call/200 & WarmColdFunctions/201 # DRIVE/202 )/203 (/204 # call/205 & OptTree-Drive-CleanupColdCalls/206 )/207 )/208 (/209 # call/210 & ExpandClosures/211 )/212 )/213 )/214 )/215 (/216 # main/217 )/218 Tile{ AsIs: s.Cycles#2/8 AsIs: (/11 AsIs: e.AST#1/9 AsIs: )/12 } >/219 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Intm_Code]);
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_ident(vm, context[18], identifiers[ident_define]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_main]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_ident(vm, context[21], identifiers[ident_if]);
  refalrts::alloc_open_bracket(vm, context[22]);
  refalrts::alloc_ident(vm, context[23], identifiers[ident_begin]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::alloc_ident(vm, context[25], identifiers[ident_pass]);
  refalrts::alloc_open_bracket(vm, context[26]);
  refalrts::alloc_ident(vm, context[27], identifiers[ident_trace]);
  refalrts::alloc_chars(vm, context[28], context[29], "before Auto markup", 18);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_ident(vm, context[32], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[33], functions[efunc_OptTreem_AutoMarkupm_Spec]);
  refalrts::alloc_close_bracket(vm, context[34]);
  refalrts::alloc_open_bracket(vm, context[35]);
  refalrts::alloc_ident(vm, context[36], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[37], functions[efunc_OptTreem_AutoMarkupm_Drive]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_close_bracket(vm, context[39]);
  refalrts::alloc_open_bracket(vm, context[40]);
  refalrts::alloc_ident(vm, context[41], identifiers[ident_DriveSpecLoop]);
  refalrts::alloc_close_bracket(vm, context[42]);
  refalrts::alloc_open_bracket(vm, context[43]);
  refalrts::alloc_ident(vm, context[44], identifiers[ident_pass]);
  refalrts::alloc_open_bracket(vm, context[45]);
  refalrts::alloc_ident(vm, context[46], identifiers[ident_trace]);
  refalrts::alloc_chars(vm, context[47], context[48], "before Driving non-recursive instances", 38);
  refalrts::alloc_close_bracket(vm, context[49]);
  refalrts::alloc_open_bracket(vm, context[50]);
  refalrts::alloc_ident(vm, context[51], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[52], functions[efunc_OptTreem_AutoMarkupm_Drive]);
  refalrts::alloc_close_bracket(vm, context[53]);
  refalrts::alloc_close_bracket(vm, context[54]);
  refalrts::alloc_open_bracket(vm, context[55]);
  refalrts::alloc_ident(vm, context[56], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[57], functions[efunc_OptTreem_Drivem_Prepare]);
  refalrts::alloc_open_bracket(vm, context[58]);
  refalrts::copy_stvar(vm, context[59], context[13]);
  refalrts::alloc_close_bracket(vm, context[60]);
  refalrts::alloc_close_bracket(vm, context[61]);
  refalrts::alloc_open_bracket(vm, context[62]);
  refalrts::alloc_ident(vm, context[63], identifiers[ident_DriveLoop]);
  refalrts::alloc_close_bracket(vm, context[64]);
  refalrts::alloc_close_bracket(vm, context[65]);
  refalrts::alloc_open_bracket(vm, context[66]);
  refalrts::alloc_ident(vm, context[67], identifiers[ident_begin]);
  refalrts::alloc_open_bracket(vm, context[68]);
  refalrts::alloc_ident(vm, context[69], identifiers[ident_when]);
  refalrts::alloc_open_bracket(vm, context[70]);
  refalrts::alloc_ident(vm, context[71], identifiers[ident_or]);
  refalrts::copy_stvar(vm, context[72], context[6]);
  refalrts::alloc_close_bracket(vm, context[73]);
  refalrts::alloc_open_bracket(vm, context[74]);
  refalrts::alloc_ident(vm, context[75], identifiers[ident_trace]);
  refalrts::alloc_chars(vm, context[76], context[77], "before Curing drives", 20);
  refalrts::alloc_close_bracket(vm, context[78]);
  refalrts::alloc_open_bracket(vm, context[79]);
  refalrts::alloc_ident(vm, context[80], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[81], functions[efunc_OptTreem_AutoMarkupm_CureDrives]);
  refalrts::alloc_close_bracket(vm, context[82]);
  refalrts::alloc_close_bracket(vm, context[83]);
  refalrts::alloc_open_bracket(vm, context[84]);
  refalrts::alloc_ident(vm, context[85], identifiers[ident_DriveSpecLoop]);
  refalrts::alloc_close_bracket(vm, context[86]);
  refalrts::alloc_close_bracket(vm, context[87]);
  refalrts::alloc_close_bracket(vm, context[88]);
  refalrts::alloc_open_bracket(vm, context[89]);
  refalrts::alloc_ident(vm, context[90], identifiers[ident_trace]);
  refalrts::alloc_chars(vm, context[91], context[92], "before Cleanup unused functions", 31);
  refalrts::alloc_close_bracket(vm, context[93]);
  refalrts::alloc_open_bracket(vm, context[94]);
  refalrts::alloc_ident(vm, context[95], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[96], functions[efunc_OptTreem_AutoMarkupm_CleanupUnusedFunctions]);
  refalrts::alloc_close_bracket(vm, context[97]);
  refalrts::alloc_open_bracket(vm, context[98]);
  refalrts::alloc_ident(vm, context[99], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[100], functions[efunc_OptTreem_CleanupMarkup]);
  refalrts::alloc_close_bracket(vm, context[101]);
  refalrts::alloc_close_bracket(vm, context[102]);
  refalrts::alloc_open_bracket(vm, context[103]);
  refalrts::alloc_ident(vm, context[104], identifiers[ident_define]);
  refalrts::alloc_ident(vm, context[105], identifiers[ident_DriveSpecLoop]);
  refalrts::alloc_open_bracket(vm, context[106]);
  refalrts::alloc_ident(vm, context[107], identifiers[ident_if]);
  refalrts::alloc_open_bracket(vm, context[108]);
  refalrts::alloc_ident(vm, context[109], identifiers[ident_begin]);
  refalrts::alloc_open_bracket(vm, context[110]);
  refalrts::alloc_ident(vm, context[111], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[112], functions[efunc_OptTreem_Drivem_Prepare]);
  refalrts::alloc_open_bracket(vm, context[113]);
  refalrts::copy_stvar(vm, context[114], context[6]);
  refalrts::copy_stvar(vm, context[115], context[13]);
  refalrts::alloc_close_bracket(vm, context[116]);
  refalrts::alloc_close_bracket(vm, context[117]);
  refalrts::alloc_open_bracket(vm, context[118]);
  refalrts::alloc_ident(vm, context[119], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[120], functions[efunc_OptTreem_Specm_Prepare]);
  refalrts::copy_stvar(vm, context[121], context[7]);
  refalrts::alloc_close_bracket(vm, context[122]);
  refalrts::alloc_open_bracket(vm, context[123]);
  refalrts::alloc_ident(vm, context[124], identifiers[ident_loopm_form_warmm_functions]);
  refalrts::alloc_open_bracket(vm, context[125]);
  refalrts::alloc_ident(vm, context[126], identifiers[ident_DriveLoop]);
  refalrts::alloc_close_bracket(vm, context[127]);
  refalrts::alloc_open_bracket(vm, context[128]);
  refalrts::alloc_ident(vm, context[129], identifiers[ident_pass]);
  refalrts::alloc_open_bracket(vm, context[130]);
  refalrts::alloc_ident(vm, context[131], identifiers[ident_trace]);
  refalrts::alloc_chars(vm, context[132], context[133], "before Spec", 11);
  refalrts::alloc_close_bracket(vm, context[134]);
  refalrts::alloc_open_bracket(vm, context[135]);
  refalrts::alloc_ident(vm, context[136], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[137], functions[efunc_OptTreem_Spec]);
  refalrts::copy_stvar(vm, context[138], context[7]);
  refalrts::alloc_close_bracket(vm, context[139]);
  refalrts::alloc_close_bracket(vm, context[140]);
  refalrts::alloc_close_bracket(vm, context[141]);
  refalrts::alloc_open_bracket(vm, context[142]);
  refalrts::alloc_ident(vm, context[143], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[144], functions[efunc_WarmColdFunctions]);
  refalrts::alloc_ident(vm, context[145], identifiers[ident_SPEC]);
  refalrts::alloc_close_bracket(vm, context[146]);
  refalrts::alloc_close_bracket(vm, context[147]);
  refalrts::alloc_open_bracket(vm, context[148]);
  refalrts::alloc_ident(vm, context[149], identifiers[ident_begin]);
  refalrts::alloc_open_bracket(vm, context[150]);
  refalrts::alloc_ident(vm, context[151], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[152], functions[efunc_OptTreem_Drivem_Prepare]);
  refalrts::alloc_open_bracket(vm, context[153]);
  refalrts::copy_stvar(vm, context[154], context[6]);
  refalrts::copy_stvar(vm, context[155], context[13]);
  refalrts::alloc_close_bracket(vm, context[156]);
  refalrts::alloc_close_bracket(vm, context[157]);
  refalrts::alloc_open_bracket(vm, context[158]);
  refalrts::alloc_ident(vm, context[159], identifiers[ident_DriveLoop]);
  refalrts::alloc_close_bracket(vm, context[160]);
  refalrts::alloc_close_bracket(vm, context[161]);
  refalrts::alloc_close_bracket(vm, context[162]);
  refalrts::alloc_close_bracket(vm, context[163]);
  refalrts::alloc_open_bracket(vm, context[164]);
  refalrts::alloc_ident(vm, context[165], identifiers[ident_define]);
  refalrts::alloc_ident(vm, context[166], identifiers[ident_DriveLoop]);
  refalrts::alloc_open_bracket(vm, context[167]);
  refalrts::alloc_ident(vm, context[168], identifiers[ident_if]);
  refalrts::alloc_open_bracket(vm, context[169]);
  refalrts::alloc_ident(vm, context[170], identifiers[ident_or]);
  refalrts::copy_stvar(vm, context[171], context[6]);
  refalrts::copy_stvar(vm, context[172], context[13]);
  refalrts::alloc_close_bracket(vm, context[173]);
  refalrts::alloc_open_bracket(vm, context[174]);
  refalrts::alloc_ident(vm, context[175], identifiers[ident_begin]);
  refalrts::alloc_open_bracket(vm, context[176]);
  refalrts::alloc_ident(vm, context[177], identifiers[ident_loopm_form_warmm_functions]);
  refalrts::alloc_open_bracket(vm, context[178]);
  refalrts::alloc_ident(vm, context[179], identifiers[ident_pass]);
  refalrts::alloc_open_bracket(vm, context[180]);
  refalrts::alloc_ident(vm, context[181], identifiers[ident_trace]);
  refalrts::alloc_chars(vm, context[182], context[183], "before Drive", 12);
  refalrts::alloc_close_bracket(vm, context[184]);
  refalrts::alloc_open_bracket(vm, context[185]);
  refalrts::alloc_ident(vm, context[186], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[187], functions[efunc_ExpandClosures]);
  refalrts::alloc_close_bracket(vm, context[188]);
  refalrts::alloc_open_bracket(vm, context[189]);
  refalrts::alloc_ident(vm, context[190], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[191], functions[efunc_OptTreem_Drive]);
  refalrts::alloc_open_bracket(vm, context[192]);
  refalrts::copy_stvar(vm, context[193], context[6]);
  refalrts::copy_stvar(vm, context[194], context[13]);
  refalrts::alloc_close_bracket(vm, context[195]);
  refalrts::alloc_close_bracket(vm, context[196]);
  refalrts::alloc_close_bracket(vm, context[197]);
  refalrts::alloc_close_bracket(vm, context[198]);
  refalrts::alloc_open_bracket(vm, context[199]);
  refalrts::alloc_ident(vm, context[200], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[201], functions[efunc_WarmColdFunctions]);
  refalrts::alloc_ident(vm, context[202], identifiers[ident_DRIVE]);
  refalrts::alloc_close_bracket(vm, context[203]);
  refalrts::alloc_open_bracket(vm, context[204]);
  refalrts::alloc_ident(vm, context[205], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[206], functions[efunc_OptTreem_Drivem_CleanupColdCalls]);
  refalrts::alloc_close_bracket(vm, context[207]);
  refalrts::alloc_close_bracket(vm, context[208]);
  refalrts::alloc_open_bracket(vm, context[209]);
  refalrts::alloc_ident(vm, context[210], identifiers[ident_call]);
  refalrts::alloc_name(vm, context[211], functions[efunc_ExpandClosures]);
  refalrts::alloc_close_bracket(vm, context[212]);
  refalrts::alloc_close_bracket(vm, context[213]);
  refalrts::alloc_close_bracket(vm, context[214]);
  refalrts::alloc_close_bracket(vm, context[215]);
  refalrts::alloc_open_bracket(vm, context[216]);
  refalrts::alloc_ident(vm, context[217], identifiers[ident_main]);
  refalrts::alloc_close_bracket(vm, context[218]);
  refalrts::alloc_close_call(vm, context[219]);
  refalrts::update_name(context[4], functions[efunc_gen_Int_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[219] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[216], context[218] );
  refalrts::link_brackets( context[16], context[215] );
  refalrts::link_brackets( context[164], context[214] );
  refalrts::link_brackets( context[167], context[213] );
  refalrts::link_brackets( context[209], context[212] );
  refalrts::link_brackets( context[174], context[208] );
  refalrts::link_brackets( context[204], context[207] );
  refalrts::link_brackets( context[199], context[203] );
  refalrts::link_brackets( context[176], context[198] );
  refalrts::link_brackets( context[178], context[197] );
  refalrts::link_brackets( context[189], context[196] );
  refalrts::link_brackets( context[192], context[195] );
  refalrts::link_brackets( context[185], context[188] );
  refalrts::link_brackets( context[180], context[184] );
  refalrts::link_brackets( context[169], context[173] );
  refalrts::link_brackets( context[103], context[163] );
  refalrts::link_brackets( context[106], context[162] );
  refalrts::link_brackets( context[148], context[161] );
  refalrts::link_brackets( context[158], context[160] );
  refalrts::link_brackets( context[150], context[157] );
  refalrts::link_brackets( context[153], context[156] );
  refalrts::link_brackets( context[108], context[147] );
  refalrts::link_brackets( context[142], context[146] );
  refalrts::link_brackets( context[123], context[141] );
  refalrts::link_brackets( context[128], context[140] );
  refalrts::link_brackets( context[135], context[139] );
  refalrts::link_brackets( context[130], context[134] );
  refalrts::link_brackets( context[125], context[127] );
  refalrts::link_brackets( context[118], context[122] );
  refalrts::link_brackets( context[110], context[117] );
  refalrts::link_brackets( context[113], context[116] );
  refalrts::link_brackets( context[17], context[102] );
  refalrts::link_brackets( context[98], context[101] );
  refalrts::link_brackets( context[94], context[97] );
  refalrts::link_brackets( context[89], context[93] );
  refalrts::link_brackets( context[20], context[88] );
  refalrts::link_brackets( context[66], context[87] );
  refalrts::link_brackets( context[84], context[86] );
  refalrts::link_brackets( context[68], context[83] );
  refalrts::link_brackets( context[79], context[82] );
  refalrts::link_brackets( context[74], context[78] );
  refalrts::link_brackets( context[70], context[73] );
  refalrts::link_brackets( context[22], context[65] );
  refalrts::link_brackets( context[62], context[64] );
  refalrts::link_brackets( context[55], context[61] );
  refalrts::link_brackets( context[58], context[60] );
  refalrts::link_brackets( context[43], context[54] );
  refalrts::link_brackets( context[50], context[53] );
  refalrts::link_brackets( context[45], context[49] );
  refalrts::link_brackets( context[40], context[42] );
  refalrts::link_brackets( context[24], context[39] );
  refalrts::link_brackets( context[35], context[38] );
  refalrts::link_brackets( context[31], context[34] );
  refalrts::link_brackets( context[26], context[30] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[219] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[108], context[218] );
  res = refalrts::splice_elem( res, context[7] );
  res = refalrts::splice_evar( res, context[73], context[107] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[59], context[72] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[22], context[58] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[14], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTree_A5("OptTree=5", COOKIE1_, COOKIE2_, func_gen_OptTree_A5);


static refalrts::FnResult func_gen_OptTree_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & OptTree=4/4 s.OptDrive#3/5 s.OptSpec#4/6 s.Cycles#2/7 (/10 e.AST#1/8 )/11 t.Config#1/12 s.OptAutoMarkup#5/14 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.AST#1 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.OptDrive#3: 5
  //DEBUG: s.OptSpec#4: 6
  //DEBUG: s.Cycles#2: 7
  //DEBUG: e.AST#1: 8
  //DEBUG: t.Config#1: 12
  //DEBUG: s.OptAutoMarkup#5: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.OptAutoMarkup#5/14 {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: & OptTree=5/0 HalfReuse: s.OptAutoMarkup5 #14/4 AsIs: s.OptDrive#3/5 AsIs: s.OptSpec#4/6 AsIs: s.Cycles#2/7 AsIs: (/10 AsIs: e.AST#1/8 AsIs: )/11 } </16 & Config-GetOptIntrinsic/17 Tile{ AsIs: t.Config#1/12 } >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_Configm_GetOptIntrinsic]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::reinit_name(context[0], functions[efunc_gen_OptTree_A5]);
  refalrts::reinit_svar( context[4], context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[18] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTree_A4("OptTree=4", COOKIE1_, COOKIE2_, func_gen_OptTree_A4);


static refalrts::FnResult func_gen_OptTree_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & OptTree=3/4 s.OptDrive#3/5 s.Cycles#2/6 (/9 e.AST#1/7 )/10 t.Config#1/11 s.OptSpec#4/13 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  // closed e.AST#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.OptDrive#3: 5
  //DEBUG: s.Cycles#2: 6
  //DEBUG: e.AST#1: 7
  //DEBUG: t.Config#1: 11
  //DEBUG: s.OptSpec#4: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree=4/4 AsIs: s.OptDrive#3/5 } Tile{ AsIs: s.OptSpec#4/13 } Tile{ AsIs: s.Cycles#2/6 AsIs: (/9 AsIs: e.AST#1/7 AsIs: )/10 AsIs: t.Config#1/11 } </14 & Config-GetOptAutoMarkup/15 t.Config#1/11/16 >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Configm_GetOptAutoMarkup]);
  refalrts::copy_evar(vm, context[16], context[17], context[11], context[12]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTree_A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[6], context[12] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTree_A3("OptTree=3", COOKIE1_, COOKIE2_, func_gen_OptTree_A3);


static refalrts::FnResult func_gen_OptTree_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & OptTree=2/4 s.Cycles#2/5 (/8 e.AST#1/6 )/9 t.Config#1/10 s.OptDrive#3/12 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.AST#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Cycles#2: 5
  //DEBUG: e.AST#1: 6
  //DEBUG: t.Config#1: 10
  //DEBUG: s.OptDrive#3: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.OptDrive#3/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & OptTree=3/0 HalfReuse: s.OptDrive3 #12/4 AsIs: s.Cycles#2/5 AsIs: (/8 AsIs: e.AST#1/6 AsIs: )/9 AsIs: t.Config#1/10 } </14 & Config-GetOptSpec/15 t.Config#1/10/16 >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Configm_GetOptSpec]);
  refalrts::copy_evar(vm, context[16], context[17], context[10], context[11]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::reinit_name(context[0], functions[efunc_gen_OptTree_A3]);
  refalrts::reinit_svar( context[4], context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTree_A2("OptTree=2", COOKIE1_, COOKIE2_, func_gen_OptTree_A2);


static refalrts::FnResult func_gen_OptTree_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & OptTree=1/4 (/7 e.AST#1/5 )/8 t.Config#1/9 s.Cycles#2/11 >/1
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
  // closed e.AST#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.AST#1: 5
  //DEBUG: t.Config#1: 9
  //DEBUG: s.Cycles#2: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Cycles#2/11 {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: & OptTree=2/0 HalfReuse: s.Cycles2 #11/4 AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 AsIs: t.Config#1/9 } </13 & Config-GetOptDrive/14 t.Config#1/9/15 >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Configm_GetOptDrive]);
  refalrts::copy_evar(vm, context[15], context[16], context[9], context[10]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::reinit_name(context[0], functions[efunc_gen_OptTree_A2]);
  refalrts::reinit_svar( context[4], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_OptTree_A1("OptTree=1", COOKIE1_, COOKIE2_, func_gen_OptTree_A1);


static refalrts::FnResult func_OptTree(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & OptTree/4 t.Config#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: t.Config#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & OptTree=1/4 } (/7 Tile{ AsIs: e.AST#1/2 } )/8 Tile{ AsIs: t.Config#1/5 } </9 & Config-GetTreeOptCycles/10 t.Config#1/5/11 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Configm_GetTreeOptCycles]);
  refalrts::copy_evar(vm, context[11], context[12], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTree_A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTree("OptTree", 0U, 0U, func_OptTree);


static refalrts::FnResult func_OptTreem_CleanupMarkup(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & OptTree-CleanupMarkup/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OptTreem_CleanupMarkup("OptTree-CleanupMarkup", 0U, 0U, func_OptTreem_CleanupMarkup);


static refalrts::FnResult func_WarmColdFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & WarmColdFunctions/4 s.ColdBy#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: s.ColdBy#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@2/4 AsIs: s.ColdBy#1/5 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_WarmColdFunctions("WarmColdFunctions", COOKIE1_, COOKIE2_, func_WarmColdFunctions);


static refalrts::FnResult func_ExpandClosures(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & ExpandClosures/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@4/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExpandClosures("ExpandClosures", COOKIE1_, COOKIE2_, func_ExpandClosures);


static refalrts::FnResult func_ExpandClosuresm_Body(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & ExpandClosures-Body/4 e.Sentences#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Sentences#1 as range 2
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@3/4 AsIs: e.Sentences#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExpandClosuresm_Body("ExpandClosures-Body", COOKIE1_, COOKIE2_, func_ExpandClosuresm_Body);


static refalrts::FnResult func_ExpandClosuresm_Sentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ExpandClosures-Sentence/4 (/7 (/11 e.Pattern#1/9 )/12 e.Conditions#1/5 (/15 e.Result#1/13 )/16 )/8 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 9
  // closed e.Conditions#1 as range 5
  // closed e.Result#1 as range 13
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Conditions#1: 5
  //DEBUG: e.Result#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 } Tile{ AsIs: </0 Reuse: & Map@6/4 } Tile{ AsIs: e.Conditions#1/5 } >/17 (/18 </19 Tile{ HalfReuse: & Map@5/15 AsIs: e.Result#1/13 HalfReuse: >/16 AsIs: )/8 HalfReuse: )/1 ]] }
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z6]);
  refalrts::reinit_name(context[15], functions[efunc_gen_Map_Z5]);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[18], context[8] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExpandClosuresm_Sentence("ExpandClosures-Sentence", COOKIE1_, COOKIE2_, func_ExpandClosuresm_Sentence);


static refalrts::FnResult func_ExpandClosuresm_Result(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & ExpandClosures-Result/4 e.Result#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Result#1 as range 2
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@5/4 AsIs: e.Result#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExpandClosuresm_Result("ExpandClosures-Result", COOKIE1_, COOKIE2_, func_ExpandClosuresm_Result);


static refalrts::FnResult func_ExpandClosuresm_ResultTerm(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExpandClosures-ResultTerm/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExpandClosures-ResultTerm/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ExpandClosures-ResultTerm/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & ExpandClosures-ResultTerm/4 (/5 # Brackets/9 e.Expr#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_Brackets], context[9] ) )
        continue;
      // closed e.Expr#1 as range 10
      //DEBUG: e.Expr#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </5 HalfReuse: & Map@5/9 AsIs: e.Expr#1/10 HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
      refalrts::reinit_open_call(context[5]);
      refalrts::reinit_name(context[9], functions[efunc_gen_Map_Z5]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[0], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[5] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExpandClosures-ResultTerm/4 (/5 s.new#4/9 (/14 e.new#5/12 )/15 e.new#6/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      context[12] = 0;
      context[13] = 0;
      context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
      if( ! context[14] )
        continue;
      refalrts::bracket_pointers(context[14], context[15]);
      // closed e.new#5 as range 12
      // closed e.new#6 as range 10
      do {
        // </0 & ExpandClosures-ResultTerm/4 (/5 # ADT-Brackets/9 (/14 e.Name#1/16 )/15 e.Expr#1/18 )/6 >/1
        context[16] = context[12];
        context[17] = context[13];
        context[18] = context[10];
        context[19] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[9] ) )
          continue;
        // closed e.Name#1 as range 16
        // closed e.Expr#1 as range 18
        //DEBUG: e.Name#1: 16
        //DEBUG: e.Expr#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/9 AsIs: (/14 AsIs: e.Name#1/16 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & Map@5/4 } Tile{ AsIs: e.Expr#1/18 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_Map_Z5]);
        refalrts::reinit_close_call(context[6]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[5], context[1] );
        refalrts::push_stack( vm, context[6] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[14], context[15] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[6];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[5], context[15] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ExpandClosures-ResultTerm/4 (/5 # CallBrackets/9 (/14 # ClosureBrackets/20 e.Content#1/16 )/15 e.Expr#1/18 )/6 >/1
      context[16] = context[12];
      context[17] = context[13];
      context[18] = context[10];
      context[19] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
        continue;
      context[20] = refalrts::ident_left( identifiers[ident_ClosureBrackets], context[16], context[17] );
      if( ! context[20] )
        continue;
      // closed e.Content#1 as range 16
      // closed e.Expr#1 as range 18
      //DEBUG: e.Content#1: 16
      //DEBUG: e.Expr#1: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExpandClosures-ResultTerm/4 {REMOVED TILE} {REMOVED TILE} )/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # CallBrackets/9 HalfReuse: </14 HalfReuse: & Map@5/20 } Tile{ AsIs: e.Content#1/16 } Tile{ AsIs: e.Expr#1/18 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
      refalrts::reinit_open_call(context[14]);
      refalrts::reinit_name(context[20], functions[efunc_gen_Map_Z5]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[5], context[20] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExpandClosures-ResultTerm/4 (/5 # CallBrackets/9 e.Expr#1/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[9] ) )
      continue;
    // closed e.Expr#1 as range 10
    //DEBUG: e.Expr#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & Map@5/9 AsIs: e.Expr#1/10 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
    refalrts::reinit_open_call(context[5]);
    refalrts::reinit_name(context[9], functions[efunc_gen_Map_Z5]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExpandClosures-ResultTerm/4 t.OtherTerm#1/5 >/1
  //DEBUG: t.OtherTerm#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExpandClosures-ResultTerm/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExpandClosuresm_ResultTerm("ExpandClosures-ResultTerm", COOKIE1_, COOKIE2_, func_ExpandClosuresm_ResultTerm);


static refalrts::FnResult func_gen_Int_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Int=2/4 s.Cycles#3/5 e.AST#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#3 as range 2
  //DEBUG: s.Cycles#3: 5
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Int=2/4 s.Cycles#3/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.AST#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Int_A2("Int=2", COOKIE1_, COOKIE2_, func_gen_Int_A2);


static refalrts::FnResult func_Int(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Int/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Int/4 e.new#1/2 s.new#2/9 (/7 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 5
  if( ! refalrts::svar_right( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & Int/4 (/16 # define/18 s.StartPoint#2/19 e.2#0/14 )/17 e.#0/10 s.Cycles#1/9 (/7 e.AST#1/12 )/8 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left( identifiers[ident_define], context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.#0 as range 10
    // closed e.AST#1 as range 12
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    // closed e.2#0 as range 14
    //DEBUG: s.Cycles#1: 9
    //DEBUG: e.#0: 10
    //DEBUG: e.AST#1: 12
    //DEBUG: s.StartPoint#2: 19
    //DEBUG: e.2#0: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 & Int=2/21 </22 Tile{ HalfReuse: & Int-Code/0 HalfReuse: (/4 AsIs: (/16 AsIs: # define/18 AsIs: s.StartPoint#2/19 AsIs: e.2#0/14 AsIs: )/17 } Tile{ AsIs: e.#0/10 } )/23 (/24 s.StartPoint#2/19/25 )/26 Tile{ AsIs: s.Cycles#1/9 AsIs: (/7 AsIs: e.AST#1/12 AsIs: )/8 AsIs: >/1 } >/27 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_gen_Int_A2]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::copy_stvar(vm, context[25], context[19]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::reinit_name(context[0], functions[efunc_Intm_Code]);
    refalrts::reinit_open_bracket(context[4]);
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[24], context[26] );
    refalrts::link_brackets( context[4], context[23] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[23], context[26] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int/4 e.Defines#1/2 s.Cycles#1/9 (/7 e.AST#1/5 )/8 >/1
  // closed e.Defines#1 as range 2
  // closed e.AST#1 as range 5
  //DEBUG: s.Cycles#1: 9
  //DEBUG: e.Defines#1: 2
  //DEBUG: e.AST#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int=1*1/4 } (/10 Tile{ AsIs: e.Defines#1/2 } )/11 Tile{ AsIs: s.Cycles#1/9 AsIs: (/7 AsIs: e.AST#1/5 AsIs: )/8 } e.Defines#1/2/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::copy_evar(vm, context[12], context[13], context[2], context[3]);
  refalrts::update_name(context[4], functions[efunc_gen_Int_A1D1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[9], context[8] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Int("Int", COOKIE1_, COOKIE2_, func_Int);


static refalrts::FnResult func_gen_Intm_Code_B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Int-Code:1$1=1/4 (/7 e.Defines#1/5 )/8 (/11 e.Code#2/9 )/12 s.Cycles#3/13 e.AST#3/2 >/1
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
  // closed e.Defines#1 as range 5
  // closed e.Code#2 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#3 as range 2
  //DEBUG: e.Defines#1: 5
  //DEBUG: e.Code#2: 9
  //DEBUG: s.Cycles#3: 13
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Code/4 AsIs: (/7 AsIs: e.Defines#1/5 AsIs: )/8 } Tile{ AsIs: e.Code#2/9 } Tile{ AsIs: s.Cycles#3/13 } Tile{ AsIs: (/11 } Tile{ AsIs: e.AST#3/2 } Tile{ AsIs: )/12 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Intm_Code]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Intm_Code_B1S1A1("Int-Code:1$1=1", COOKIE1_, COOKIE2_, func_gen_Intm_Code_B1S1A1);


static refalrts::FnResult func_Intm_Code(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Int-Code/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Int-Code/4 (/7 e.new#1/5 )/8 e.new#2/2 s.new#3/13 (/11 e.new#4/9 )/12 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#4 as range 9
  if( ! refalrts::svar_right( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Int-Code/4 (/7 e.Defines#1/14 )/8 t.#0/20 e.#0/16 s.Cycles#1/13 (/11 e.AST#1/18 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = context[9];
    context[19] = context[10];
    // closed e.Defines#1 as range 14
    // closed e.AST#1 as range 18
    context[21] = refalrts::tvar_left( context[20], context[16], context[17] );
    if( ! context[21] )
      continue;
    // closed e.#0 as range 16
    //DEBUG: s.Cycles#1: 13
    //DEBUG: e.Defines#1: 14
    //DEBUG: e.AST#1: 18
    //DEBUG: t.#0: 20
    //DEBUG: e.#0: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Code:1$1=1/4 AsIs: (/7 AsIs: e.Defines#1/14 AsIs: )/8 } (/22 Tile{ AsIs: e.#0/16 } )/23 </24 & Int-Command/25 (/26 e.Defines#1/14/27 )/29 Tile{ AsIs: t.#0/20 } Tile{ AsIs: s.Cycles#1/13 AsIs: (/11 AsIs: e.AST#1/18 AsIs: )/12 AsIs: >/1 } >/30 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_close_bracket(vm, context[23]);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_Intm_Command]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::copy_evar(vm, context[27], context[28], context[14], context[15]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::update_name(context[4], functions[efunc_gen_Intm_Code_B1S1A1]);
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[23], context[29] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Int-Code/4 (/7 e.Defines#1/14 )/8 s.Cycles#1/13 (/11 e.AST#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Defines#1 as range 14
    // closed e.AST#1 as range 16
    //DEBUG: s.Cycles#1: 13
    //DEBUG: e.Defines#1: 14
    //DEBUG: e.AST#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Int-Code/4 (/7 e.Defines#1/14 )/8 s.Cycles#1/13 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Cycles1 #13/0 } Tile{ AsIs: e.AST#1/16 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-Code/4 (/7 e.Defines#1/5 )/8 e.Code#1/2 s.Cycles#1/13 (/11 e.AST#1/9 )/12 >/1
  // closed e.Defines#1 as range 5
  // closed e.Code#1 as range 2
  // closed e.AST#1 as range 9
  //DEBUG: s.Cycles#1: 13
  //DEBUG: e.Defines#1: 5
  //DEBUG: e.Code#1: 2
  //DEBUG: e.AST#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Code:1*2/4 AsIs: (/7 AsIs: e.Defines#1/5 AsIs: )/8 } Tile{ AsIs: s.Cycles#1/13 AsIs: (/11 AsIs: e.AST#1/9 AsIs: )/12 } Tile{ AsIs: e.Code#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Intm_Code_B1D2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Intm_Code("Int-Code", COOKIE1_, COOKIE2_, func_Intm_Code);


static refalrts::FnResult func_gen_Intm_Command_B1S1B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Int-Command:1$1:1$2=1/4 s.Cycles#4/5 e.AST#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#4 as range 2
  //DEBUG: s.Cycles#4: 5
  //DEBUG: e.AST#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sub/4 AsIs: s.Cycles#4/5 } 1/6 Tile{ AsIs: >/1 } Tile{ AsIs: e.AST#4/2 } Tile{ ]] }
  refalrts::alloc_number(vm, context[6], 1UL);
  refalrts::update_name(context[4], functions[efunc_Sub]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_elem( res, context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Intm_Command_B1S1B1S2A1("Int-Command:1$1:1$2=1", COOKIE1_, COOKIE2_, func_gen_Intm_Command_B1S1B1S2A1);


static refalrts::FnResult func_gen_Intm_Command_B1S2B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Int-Command:1$2:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Int-Command:1$2:1/4 (/7 e.new#1/5 )/8 t.new#2/9 s.new#3/11 (/14 e.new#4/12 )/15 t.new#5/16 s.new#6/18 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.new#4 as range 12
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Int-Command:1$2:1/4 (/7 e.Defines#1/19 )/8 t.Then#2/9 s.Cycles#1/11 (/14 e.AST#1/21 )/15 t.Else#2/16 # True/18 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[12];
    context[22] = context[13];
    if( ! refalrts::ident_term( identifiers[ident_True], context[18] ) )
      continue;
    // closed e.Defines#1 as range 19
    // closed e.AST#1 as range 21
    //DEBUG: t.Then#2: 9
    //DEBUG: t.Else#2: 16
    //DEBUG: s.Cycles#1: 11
    //DEBUG: e.Defines#1: 19
    //DEBUG: e.AST#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Else#2/16 # True/18 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Command/4 AsIs: (/7 AsIs: e.Defines#1/19 AsIs: )/8 AsIs: t.Then#2/9 AsIs: s.Cycles#1/11 AsIs: (/14 AsIs: e.AST#1/21 AsIs: )/15 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Intm_Command]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-Command:1$2:1/4 (/7 e.Defines#1/5 )/8 t.Then#2/9 s.Cycles#1/11 (/14 e.AST#1/12 )/15 t.Else#2/16 # False/18 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Defines#1 as range 5
  // closed e.AST#1 as range 12
  //DEBUG: t.Then#2: 9
  //DEBUG: t.Else#2: 16
  //DEBUG: s.Cycles#1: 11
  //DEBUG: e.Defines#1: 5
  //DEBUG: e.AST#1: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.Then#2/9 {REMOVED TILE} {REMOVED TILE} # False/18 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Command/4 AsIs: (/7 AsIs: e.Defines#1/5 AsIs: )/8 } Tile{ AsIs: t.Else#2/16 } Tile{ AsIs: s.Cycles#1/11 AsIs: (/14 AsIs: e.AST#1/12 AsIs: )/15 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Intm_Command]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Intm_Command_B1S2B1("Int-Command:1$2:1", COOKIE1_, COOKIE2_, func_gen_Intm_Command_B1S2B1);


static refalrts::FnResult func_gen_Intm_Command_B1S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Int-Command:1$3:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Int-Command:1$3:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 (/16 e.new#4/14 )/17 s.new#5/18 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.new#4 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Int-Command:1$3:1/4 (/7 e.Defines#1/19 )/8 (/11 e.Then#2/21 )/12 s.Cycles#1/13 (/16 e.AST#1/23 )/17 # True/18 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[9];
    context[22] = context[10];
    context[23] = context[14];
    context[24] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_True], context[18] ) )
      continue;
    // closed e.Defines#1 as range 19
    // closed e.Then#2 as range 21
    // closed e.AST#1 as range 23
    //DEBUG: s.Cycles#1: 13
    //DEBUG: e.Defines#1: 19
    //DEBUG: e.Then#2: 21
    //DEBUG: e.AST#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Code/4 AsIs: (/7 AsIs: e.Defines#1/19 AsIs: )/8 } Tile{ AsIs: e.Then#2/21 } Tile{ AsIs: s.Cycles#1/13 AsIs: (/16 AsIs: e.AST#1/23 AsIs: )/17 HalfReuse: >/18 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Intm_Code]);
    refalrts::reinit_close_call(context[18]);
    refalrts::push_stack( vm, context[18] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-Command:1$3:1/4 (/7 e.Defines#1/5 )/8 (/11 e.Then#2/9 )/12 s.Cycles#1/13 (/16 e.AST#1/14 )/17 # False/18 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Defines#1 as range 5
  // closed e.Then#2 as range 9
  // closed e.AST#1 as range 14
  //DEBUG: s.Cycles#1: 13
  //DEBUG: e.Defines#1: 5
  //DEBUG: e.Then#2: 9
  //DEBUG: e.AST#1: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & Int-Command:1$3:1/4 (/7 e.Defines#1/5 )/8 (/11 e.Then#2/9 )/12 s.Cycles#1/13 (/16 {REMOVED TILE} )/17 # False/18 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Cycles1 #13/0 } Tile{ AsIs: e.AST#1/14 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Intm_Command_B1S3B1("Int-Command:1$3:1", COOKIE1_, COOKIE2_, func_gen_Intm_Command_B1S3B1);


static refalrts::FnResult func_gen_Intm_Command_B1S6A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Int-Command:1$6=1/4 s.Cycles#1/5 e.AST#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#3 as range 2
  //DEBUG: s.Cycles#1: 5
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & Int-Command:1$6=1/4 s.Cycles#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Cycles1 #5/0 } Tile{ AsIs: e.AST#3/2 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Intm_Command_B1S6A1("Int-Command:1$6=1", COOKIE1_, COOKIE2_, func_gen_Intm_Command_B1S6A1);


static refalrts::FnResult func_gen_Intm_Command_B1S8A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Int-Command:1$8=1/4 (/7 e.Defines#1/5 )/8 s.Cycles#1/9 (/12 e.AST#1/10 )/13 e.Code#3/2 >/1
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
  // closed e.Defines#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.AST#1 as range 10
  // closed e.Code#3 as range 2
  //DEBUG: e.Defines#1: 5
  //DEBUG: s.Cycles#1: 9
  //DEBUG: e.AST#1: 10
  //DEBUG: e.Code#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Code/4 AsIs: (/7 AsIs: e.Defines#1/5 AsIs: )/8 } Tile{ AsIs: e.Code#3/2 } Tile{ AsIs: s.Cycles#1/9 AsIs: (/12 AsIs: e.AST#1/10 AsIs: )/13 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Intm_Code]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Intm_Command_B1S8A1("Int-Command:1$8=1", COOKIE1_, COOKIE2_, func_gen_Intm_Command_B1S8A1);


static refalrts::FnResult func_Intm_Command(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  // </0 & Int-Command/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Int-Command/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/17 (/15 e.new#4/13 )/16 >/1
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
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#4 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Int-Command/4 (/7 e.new#6/18 )/8 (/11 s.new#7/24 e.new#8/20 )/12 s.new#5/17 (/15 e.new#9/22 )/16 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    // closed e.new#6 as range 18
    // closed e.new#9 as range 22
    if( ! refalrts::svar_left( context[24], context[20], context[21] ) )
      continue;
    // closed e.new#8 as range 20
    do {
      // </0 & Int-Command/4 (/7 e.new#11/25 )/8 (/11 # pass/24 e.new#12/27 )/12 s.new#10/17 (/15 e.new#13/29 )/16 >/1
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[23];
      if( ! refalrts::ident_term( identifiers[ident_pass], context[24] ) )
        continue;
      // closed e.new#11 as range 25
      // closed e.new#12 as range 27
      // closed e.new#13 as range 29
      do {
        // </0 & Int-Command/4 (/7 e.Defines#1/31 )/8 (/11 # pass/24 e.#0/33 )/12 0/17 (/15 e.AST#1/35 )/16 >/1
        context[31] = context[25];
        context[32] = context[26];
        context[33] = context[27];
        context[34] = context[28];
        context[35] = context[29];
        context[36] = context[30];
        if( ! refalrts::number_term( 0UL, context[17] ) )
          continue;
        // closed e.Defines#1 as range 31
        // closed e.#0 as range 33
        // closed e.AST#1 as range 35
        //DEBUG: e.Defines#1: 31
        //DEBUG: e.#0: 33
        //DEBUG: e.AST#1: 35

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & Int-Command/4 (/7 e.Defines#1/31 )/8 (/11 # pass/24 e.#0/33 )/12 0/17 (/15 {REMOVED TILE} )/16 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: 0/0 } Tile{ AsIs: e.AST#1/35 } Tile{ ]] }
        refalrts::reinit_number(context[0], 0UL);
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[35], context[36] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Int-Command/4 (/7 e.Defines#1/31 )/8 (/11 # pass/24 e.#0/33 )/12 s.Cycles#1/17 (/15 e.AST#1/35 )/16 >/1
      context[31] = context[25];
      context[32] = context[26];
      context[33] = context[27];
      context[34] = context[28];
      context[35] = context[29];
      context[36] = context[30];
      // closed e.Defines#1 as range 31
      // closed e.#0 as range 33
      // closed e.AST#1 as range 35
      //DEBUG: s.Cycles#1: 17
      //DEBUG: e.Defines#1: 31
      //DEBUG: e.#0: 33
      //DEBUG: e.AST#1: 35

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </11 HalfReuse: & Int-Command:1$1:1$2=1/24 } Tile{ AsIs: </0 Reuse: & Int-Code/4 AsIs: (/7 AsIs: e.Defines#1/31 AsIs: )/8 } Tile{ AsIs: e.#0/33 } Tile{ AsIs: s.Cycles#1/17 AsIs: (/15 AsIs: e.AST#1/35 AsIs: )/16 AsIs: >/1 } Tile{ HalfReuse: >/12 } Tile{ ]] }
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[24], functions[efunc_gen_Intm_Command_B1S1B1S2A1]);
      refalrts::update_name(context[4], functions[efunc_Intm_Code]);
      refalrts::reinit_close_call(context[12]);
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[12] );
      res = refalrts::splice_evar( res, context[17], context[1] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[0], context[8] );
      res = refalrts::splice_evar( res, context[11], context[24] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Int-Command/4 (/7 e.new#11/25 )/8 (/11 s.new#12/24 t.new#13/31 e.new#14/27 )/12 s.new#10/17 (/15 e.new#15/29 )/16 >/1
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[23];
      // closed e.new#11 as range 25
      // closed e.new#15 as range 29
      context[32] = refalrts::tvar_left( context[31], context[27], context[28] );
      if( ! context[32] )
        continue;
      // closed e.new#14 as range 27
      do {
        // </0 & Int-Command/4 (/7 e.Defines#1/33 )/8 (/11 # if/24 t.0#0/31 t.1#0/39 t.2#0/41 )/12 s.Cycles#1/17 (/15 e.AST#1/37 )/16 >/1
        context[33] = context[25];
        context[34] = context[26];
        context[35] = context[27];
        context[36] = context[28];
        context[37] = context[29];
        context[38] = context[30];
        if( ! refalrts::ident_term( identifiers[ident_if], context[24] ) )
          continue;
        // closed e.Defines#1 as range 33
        // closed e.AST#1 as range 37
        context[40] = refalrts::tvar_left( context[39], context[35], context[36] );
        if( ! context[40] )
          continue;
        context[42] = refalrts::tvar_left( context[41], context[35], context[36] );
        if( ! context[42] )
          continue;
        if( ! refalrts::empty_seq( context[35], context[36] ) )
          continue;
        //DEBUG: t.0#0: 31
        //DEBUG: s.Cycles#1: 17
        //DEBUG: e.Defines#1: 33
        //DEBUG: e.AST#1: 37
        //DEBUG: t.1#0: 39
        //DEBUG: t.2#0: 41

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Command:1$2:1/4 AsIs: (/7 AsIs: e.Defines#1/33 AsIs: )/8 } Tile{ AsIs: t.1#0/39 } Tile{ AsIs: s.Cycles#1/17 AsIs: (/15 AsIs: e.AST#1/37 AsIs: )/16 } Tile{ AsIs: t.2#0/41 } Tile{ HalfReuse: </11 HalfReuse: & Int-Cond/24 AsIs: t.0#0/31 } Tile{ HalfReuse: >/12 } Tile{ AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_gen_Intm_Command_B1S2B1]);
        refalrts::reinit_open_call(context[11]);
        refalrts::reinit_name(context[24], functions[efunc_Intm_Cond]);
        refalrts::reinit_close_call(context[12]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[15], context[16] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_elem( res, context[12] );
        res = refalrts::splice_evar( res, context[11], context[32] );
        res = refalrts::splice_evar( res, context[41], context[42] );
        res = refalrts::splice_evar( res, context[17], context[16] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Int-Command/4 (/7 e.Defines#1/33 )/8 (/11 # when/24 t.0#0/31 e.0#0/35 )/12 s.Cycles#1/17 (/15 e.AST#1/37 )/16 >/1
      context[33] = context[25];
      context[34] = context[26];
      context[35] = context[27];
      context[36] = context[28];
      context[37] = context[29];
      context[38] = context[30];
      if( ! refalrts::ident_term( identifiers[ident_when], context[24] ) )
        continue;
      // closed e.Defines#1 as range 33
      // closed e.0#0 as range 35
      // closed e.AST#1 as range 37
      //DEBUG: t.0#0: 31
      //DEBUG: s.Cycles#1: 17
      //DEBUG: e.Defines#1: 33
      //DEBUG: e.0#0: 35
      //DEBUG: e.AST#1: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Command:1$3:1/4 AsIs: (/7 AsIs: e.Defines#1/33 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.0#0/35 } Tile{ AsIs: )/12 AsIs: s.Cycles#1/17 AsIs: (/15 AsIs: e.AST#1/37 AsIs: )/16 HalfReuse: </1 } Tile{ HalfReuse: & Int-Cond/24 AsIs: t.0#0/31 } >/39 >/40 Tile{ ]] }
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::update_name(context[4], functions[efunc_gen_Intm_Command_B1S3B1]);
      refalrts::reinit_open_call(context[1]);
      refalrts::reinit_name(context[24], functions[efunc_Intm_Cond]);
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[1] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[39], context[40] );
      res = refalrts::splice_evar( res, context[24], context[32] );
      res = refalrts::splice_evar( res, context[12], context[1] );
      res = refalrts::splice_evar( res, context[35], context[36] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Int-Command/4 (/7 e.Defines#1/25 )/8 (/11 # begin/24 e.#0/27 )/12 s.Cycles#1/17 (/15 e.AST#1/29 )/16 >/1
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[23];
      if( ! refalrts::ident_term( identifiers[ident_begin], context[24] ) )
        continue;
      // closed e.Defines#1 as range 25
      // closed e.#0 as range 27
      // closed e.AST#1 as range 29
      //DEBUG: s.Cycles#1: 17
      //DEBUG: e.Defines#1: 25
      //DEBUG: e.#0: 27
      //DEBUG: e.AST#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/11 # begin/24 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Code/4 AsIs: (/7 AsIs: e.Defines#1/25 AsIs: )/8 } Tile{ AsIs: e.#0/27 } Tile{ AsIs: s.Cycles#1/17 AsIs: (/15 AsIs: e.AST#1/29 AsIs: )/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Intm_Code]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Int-Command/4 (/7 e.Defines#1/25 )/8 (/11 # call/24 s.Func#2/31 e.0#0/27 )/12 s.Cycles#1/17 (/15 e.AST#1/29 )/16 >/1
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[23];
      if( ! refalrts::ident_term( identifiers[ident_call], context[24] ) )
        continue;
      // closed e.Defines#1 as range 25
      // closed e.AST#1 as range 29
      if( ! refalrts::svar_left( context[31], context[27], context[28] ) )
        continue;
      // closed e.0#0 as range 27
      //DEBUG: s.Cycles#1: 17
      //DEBUG: e.Defines#1: 25
      //DEBUG: e.AST#1: 29
      //DEBUG: s.Func#2: 31
      //DEBUG: e.0#0: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Defines#1/25 )/8 (/11 # call/24 s.Func#2/31 {REMOVED TILE} )/12 s.Cycles#1/17 (/15 {REMOVED TILE} )/16 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: s.Cycles1 #17/0 HalfReuse: </4 HalfReuse: s.Func2 #31/7 } Tile{ AsIs: e.0#0/27 } Tile{ AsIs: e.AST#1/29 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_svar( context[0], context[17] );
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_svar( context[7], context[31] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Int-Command/4 (/7 e.Defines#1/25 )/8 (/11 # trace/24 e.#0/27 )/12 s.Cycles#1/17 (/15 e.AST#1/29 )/16 >/1
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[23];
      if( ! refalrts::ident_term( identifiers[ident_trace], context[24] ) )
        continue;
      // closed e.Defines#1 as range 25
      // closed e.#0 as range 27
      // closed e.AST#1 as range 29
      //DEBUG: s.Cycles#1: 17
      //DEBUG: e.Defines#1: 25
      //DEBUG: e.#0: 27
      //DEBUG: e.AST#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Defines#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Command:1$6=1/4 HalfReuse: s.Cycles1 #17/7 } </31 & Log-AST/32 (/33"Pass "/34 </36 & Symb/37 Tile{ AsIs: s.Cycles#1/17 } Tile{ HalfReuse: >/8 HalfReuse: ' '/11 HalfReuse: '('/24 AsIs: e.#0/27 HalfReuse: ')'/12 } Tile{ HalfReuse: )/15 AsIs: e.AST#1/29 HalfReuse: >/16 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_Logm_AST]);
      refalrts::alloc_open_bracket(vm, context[33]);
      refalrts::alloc_chars(vm, context[34], context[35], "Pass ", 5);
      refalrts::alloc_open_call(vm, context[36]);
      refalrts::alloc_name(vm, context[37], functions[efunc_Symb]);
      refalrts::update_name(context[4], functions[efunc_gen_Intm_Command_B1S6A1]);
      refalrts::reinit_svar( context[7], context[17] );
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_char(context[11], ' ');
      refalrts::reinit_char(context[24], '(');
      refalrts::reinit_char(context[12], ')');
      refalrts::reinit_close_bracket(context[15]);
      refalrts::reinit_close_call(context[16]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[31] );
      refalrts::link_brackets( context[33], context[15] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[36] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[31], context[37] );
      refalrts::splice_to_freelist_open( vm, context[7], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & Int-Command/4 (/7 e.Defines#1/25 )/8 (/11 # loop-for-warm-functions/24 e.#0/27 )/12 s.Cycles#1/17 (/15 e.AST#1/29 )/16 >/1
      context[25] = context[18];
      context[26] = context[19];
      context[27] = context[20];
      context[28] = context[21];
      context[29] = context[22];
      context[30] = context[23];
      if( ! refalrts::ident_term( identifiers[ident_loopm_form_warmm_functions], context[24] ) )
        continue;
      // closed e.Defines#1 as range 25
      // closed e.#0 as range 27
      // closed e.AST#1 as range 29
      //DEBUG: s.Cycles#1: 17
      //DEBUG: e.Defines#1: 25
      //DEBUG: e.#0: 27
      //DEBUG: e.AST#1: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/11 # loop-for-warm-functions/24 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-LoopForWarmFunctions/4 AsIs: (/7 AsIs: e.Defines#1/25 AsIs: )/8 } Tile{ AsIs: e.#0/27 } Tile{ AsIs: s.Cycles#1/17 AsIs: (/15 AsIs: e.AST#1/29 AsIs: )/16 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Intm_LoopForWarmFunctions]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Int-Command/4 (/7 e.Defines#1/25 )/8 (/11 s.Proc#2/24 )/12 s.Cycles#1/17 (/15 e.AST#1/27 )/16 >/1
    context[25] = context[18];
    context[26] = context[19];
    context[27] = context[22];
    context[28] = context[23];
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.Defines#1 as range 25
    // closed e.AST#1 as range 27
    //DEBUG: s.Proc#2: 24
    //DEBUG: s.Cycles#1: 17
    //DEBUG: e.Defines#1: 25
    //DEBUG: e.AST#1: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Cycles#1/17 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Command:1$8=1/4 AsIs: (/7 AsIs: e.Defines#1/25 AsIs: )/8 HalfReuse: s.Cycles1 #17/11 } Tile{ AsIs: (/15 AsIs: e.AST#1/27 AsIs: )/16 HalfReuse: </1 } Tile{ HalfReuse: & Int-Lookup/12 } Tile{ AsIs: s.Proc#2/24 } e.Defines#1/25/29 >/31 >/32 Tile{ ]] }
    refalrts::copy_evar(vm, context[29], context[30], context[25], context[26]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::update_name(context[4], functions[efunc_gen_Intm_Command_B1S8A1]);
    refalrts::reinit_svar( context[11], context[17] );
    refalrts::reinit_open_call(context[1]);
    refalrts::reinit_name(context[12], functions[efunc_Intm_Lookup]);
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[1] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[12] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-Command/4 (/7 e.Defines#1/5 )/8 (/11 e.Command#1/9 )/12 s.Cycles#1/17 (/15 e.AST#1/13 )/16 >/1
  // closed e.Defines#1 as range 5
  // closed e.Command#1 as range 9
  // closed e.AST#1 as range 13
  //DEBUG: s.Cycles#1: 17
  //DEBUG: e.Defines#1: 5
  //DEBUG: e.Command#1: 9
  //DEBUG: e.AST#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Cycles#1/17 {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Int-Command:1*8/1 } Tile{ AsIs: (/15 } Tile{ AsIs: e.AST#1/13 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Defines#1/5 AsIs: )/8 HalfReuse: s.Cycles1 #17/11 AsIs: e.Command#1/9 HalfReuse: >/12 } Tile{ ]] }
  refalrts::reinit_name(context[1], functions[efunc_gen_Intm_Command_B1D8]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_svar( context[11], context[17] );
  refalrts::reinit_close_call(context[12]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_elem( res, context[1] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Intm_Command("Int-Command", COOKIE1_, COOKIE2_, func_Intm_Command);


static refalrts::FnResult func_Intm_Cond(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Int-Cond/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Int-Cond/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Int-Cond/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & Int-Cond/4 (/5 # or/9 e.Flags#1/10 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_or], context[9] ) )
        continue;
      // closed e.Flags#1 as range 10
      //DEBUG: e.Flags#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/5 # or/9 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Cond-Or/4 } Tile{ AsIs: e.Flags#1/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Intm_Condm_Or]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Int-Cond/4 (/5 # and/9 e.Flags#1/10 )/6 >/1
    context[10] = context[7];
    context[11] = context[8];
    if( ! refalrts::ident_term( identifiers[ident_and], context[9] ) )
      continue;
    // closed e.Flags#1 as range 10
    //DEBUG: e.Flags#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/5 # and/9 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Cond-And/4 } Tile{ AsIs: e.Flags#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Intm_Condm_And]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-Cond/4 s.new#2/5 >/1
  if( ! refalrts::svar_term( context[5], context[5] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & Int-Cond/4 # NoOpt/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_NoOpt], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Int-Cond/4 # NoOpt/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_False]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-Cond/4 s.Opt#1/5 >/1
  //DEBUG: s.Opt#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Int-Cond/4 s.Opt#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_True]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Intm_Cond("Int-Cond", COOKIE1_, COOKIE2_, func_Intm_Cond);


static refalrts::FnResult func_gen_Intm_Condm_Or_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Int-Cond-Or$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Int-Cond-Or$1:1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
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
    // </0 & Int-Cond-Or$1:1/4 (/7 e.Flags#1/10 )/8 # True/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.Flags#1 as range 10
    //DEBUG: e.Flags#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Int-Cond-Or$1:1/4 (/7 e.Flags#1/10 )/8 # True/9 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_True]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-Cond-Or$1:1/4 (/7 e.Flags#1/5 )/8 # False/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Flags#1 as range 5
  //DEBUG: e.Flags#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # False/9 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Cond-Or/4 } Tile{ AsIs: e.Flags#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Intm_Condm_Or]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Intm_Condm_Or_S1B1("Int-Cond-Or$1:1", COOKIE1_, COOKIE2_, func_gen_Intm_Condm_Or_S1B1);


static refalrts::FnResult func_Intm_Condm_Or(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Int-Cond-Or/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Int-Cond-Or/4 t.Cond#1/7 e.Flags#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Flags#1 as range 5
    //DEBUG: t.Cond#1: 7
    //DEBUG: e.Flags#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Cond-Or$1:1/4 } (/9 Tile{ AsIs: e.Flags#1/5 } )/10 </11 & Int-Cond/12 Tile{ AsIs: t.Cond#1/7 } >/13 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Intm_Cond]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_gen_Intm_Condm_Or_S1B1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-Cond-Or/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Int-Cond-Or/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Intm_Condm_Or("Int-Cond-Or", COOKIE1_, COOKIE2_, func_Intm_Condm_Or);


static refalrts::FnResult func_gen_Intm_Condm_And_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Int-Cond-And$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Int-Cond-And$1:1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
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
    // </0 & Int-Cond-And$1:1/4 (/7 e.Flags#1/10 )/8 # True/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_True], context[9] ) )
      continue;
    // closed e.Flags#1 as range 10
    //DEBUG: e.Flags#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 # True/9 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Cond-And/4 } Tile{ AsIs: e.Flags#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Intm_Condm_And]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-Cond-And$1:1/4 (/7 e.Flags#1/5 )/8 # False/9 >/1
  if( ! refalrts::ident_term( identifiers[ident_False], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Flags#1 as range 5
  //DEBUG: e.Flags#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Int-Cond-And$1:1/4 (/7 e.Flags#1/5 )/8 # False/9 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_False]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Intm_Condm_And_S1B1("Int-Cond-And$1:1", COOKIE1_, COOKIE2_, func_gen_Intm_Condm_And_S1B1);


static refalrts::FnResult func_Intm_Condm_And(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Int-Cond-And/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Int-Cond-And/4 t.Cond#1/7 e.Flags#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Flags#1 as range 5
    //DEBUG: t.Cond#1: 7
    //DEBUG: e.Flags#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-Cond-And$1:1/4 } (/9 Tile{ AsIs: e.Flags#1/5 } )/10 </11 & Int-Cond/12 Tile{ AsIs: t.Cond#1/7 } >/13 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[9]);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::alloc_open_call(vm, context[11]);
    refalrts::alloc_name(vm, context[12], functions[efunc_Intm_Cond]);
    refalrts::alloc_close_call(vm, context[13]);
    refalrts::update_name(context[4], functions[efunc_gen_Intm_Condm_And_S1B1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[11] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[13] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_elem( res, context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-Cond-And/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Int-Cond-And/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
  refalrts::reinit_ident(context[1], identifiers[ident_True]);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Intm_Condm_And("Int-Cond-And", COOKIE1_, COOKIE2_, func_Intm_Condm_And);


static refalrts::FnResult func_gen_Intm_LoopForWarmFunctions_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Int-LoopForWarmFunctions$2=2/4 (/7 e.Defines#1/5 )/8 (/11 e.Code#1/9 )/12 s.Cycles#3/13 e.AST#3/2 >/1
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
  // closed e.Defines#1 as range 5
  // closed e.Code#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#3 as range 2
  //DEBUG: e.Defines#1: 5
  //DEBUG: e.Code#1: 9
  //DEBUG: s.Cycles#3: 13
  //DEBUG: e.AST#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Int-LoopForWarmFunctions/4 AsIs: (/7 AsIs: e.Defines#1/5 AsIs: )/8 } Tile{ AsIs: e.Code#1/9 } Tile{ AsIs: s.Cycles#3/13 } Tile{ AsIs: (/11 } Tile{ AsIs: e.AST#3/2 } Tile{ AsIs: )/12 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Intm_LoopForWarmFunctions]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Intm_LoopForWarmFunctions_S2A2("Int-LoopForWarmFunctions$2=2", COOKIE1_, COOKIE2_, func_gen_Intm_LoopForWarmFunctions_S2A2);


static refalrts::FnResult func_Intm_LoopForWarmFunctions(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & Int-LoopForWarmFunctions/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Int-LoopForWarmFunctions/4 (/7 e.new#1/5 )/8 e.new#2/2 s.new#3/13 (/11 e.new#4/9 )/12 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#4 as range 9
  if( ! refalrts::svar_right( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Int-LoopForWarmFunctions/4 (/7 e.Defines#1/14 )/8 e.Code#1/16 0/13 (/11 e.AST#1/18 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = context[9];
    context[19] = context[10];
    if( ! refalrts::number_term( 0UL, context[13] ) )
      continue;
    // closed e.Defines#1 as range 14
    // closed e.Code#1 as range 16
    // closed e.AST#1 as range 18
    //DEBUG: e.Defines#1: 14
    //DEBUG: e.Code#1: 16
    //DEBUG: e.AST#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & Int-LoopForWarmFunctions/4 (/7 e.Defines#1/14 )/8 e.Code#1/16 0/13 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 0/0 } Tile{ AsIs: e.AST#1/18 } Tile{ ]] }
    refalrts::reinit_number(context[0], 0UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Int-LoopForWarmFunctions/4 (/7 e.Defines#1/14 )/8 e.Code#1/16 s.Cycles#1/13 (/11 e.AST-B#1/20 (/26 # Function/28 s.Scope#1/29 (/32 e.Name#1/30 )/33 # Sentences/34 e.Sentences#1/24 )/27 e.AST-E#1/22 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = context[9];
    context[19] = context[10];
    // closed e.Defines#1 as range 14
    // closed e.Code#1 as range 16
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[22] = context[18];
      context[23] = context[19];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      context[28] = refalrts::ident_left( identifiers[ident_Function], context[24], context[25] );
      if( ! context[28] )
        continue;
      // closed e.AST-E#1 as range 22
      if( ! refalrts::svar_left( context[29], context[24], context[25] ) )
        continue;
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[24], context[25] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = refalrts::ident_left( identifiers[ident_Sentences], context[24], context[25] );
      if( ! context[34] )
        continue;
      // closed e.Name#1 as range 30
      // closed e.Sentences#1 as range 24
      //DEBUG: s.Cycles#1: 13
      //DEBUG: e.Defines#1: 14
      //DEBUG: e.Code#1: 16
      //DEBUG: e.AST-B#1: 20
      //DEBUG: e.AST-E#1: 22
      //DEBUG: s.Scope#1: 29
      //DEBUG: e.Name#1: 30
      //DEBUG: e.Sentences#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </35 & Int-LoopForWarmFunctions$2=2/36 (/37 e.Defines#1/14/38 )/40 (/41 e.Code#1/16/42 )/44 Tile{ AsIs: </0 Reuse: & Int-Code/4 AsIs: (/7 AsIs: e.Defines#1/14 AsIs: )/8 AsIs: e.Code#1/16 AsIs: s.Cycles#1/13 AsIs: (/11 AsIs: e.AST-B#1/20 AsIs: (/26 AsIs: # Function/28 AsIs: s.Scope#1/29 AsIs: (/32 AsIs: e.Name#1/30 AsIs: )/33 AsIs: # Sentences/34 AsIs: e.Sentences#1/24 AsIs: )/27 AsIs: e.AST-E#1/22 AsIs: )/12 AsIs: >/1 } >/45 Tile{ ]] }
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_gen_Intm_LoopForWarmFunctions_S2A2]);
      refalrts::alloc_open_bracket(vm, context[37]);
      refalrts::copy_evar(vm, context[38], context[39], context[14], context[15]);
      refalrts::alloc_close_bracket(vm, context[40]);
      refalrts::alloc_open_bracket(vm, context[41]);
      refalrts::copy_evar(vm, context[42], context[43], context[16], context[17]);
      refalrts::alloc_close_bracket(vm, context[44]);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::update_name(context[4], functions[efunc_Intm_Code]);
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::link_brackets( context[32], context[33] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[41], context[44] );
      refalrts::link_brackets( context[37], context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_elem( res, context[45] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[35], context[44] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[18], context[19] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-LoopForWarmFunctions/4 (/7 e.Defines#1/5 )/8 e.Code#1/2 s.Cycles#1/13 (/11 e.AST#1/9 )/12 >/1
  // closed e.Defines#1 as range 5
  // closed e.Code#1 as range 2
  // closed e.AST#1 as range 9
  //DEBUG: s.Cycles#1: 13
  //DEBUG: e.Defines#1: 5
  //DEBUG: e.Code#1: 2
  //DEBUG: e.AST#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} & Int-LoopForWarmFunctions/4 (/7 e.Defines#1/5 )/8 e.Code#1/2 s.Cycles#1/13 (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.Cycles1 #13/0 } Tile{ AsIs: e.AST#1/9 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Intm_LoopForWarmFunctions("Int-LoopForWarmFunctions", COOKIE1_, COOKIE2_, func_Intm_LoopForWarmFunctions);


static refalrts::FnResult func_Intm_Lookup(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Int-Lookup/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Int-Lookup/4 s.new#1/5 t.new#2/6 e.new#3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 2
  do {
    // </0 & Int-Lookup/4 s.ProcName#1/5 (/6 # define/12 s.ProcName#1/13 e.Body#1/10 )/7 e._#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[6] ) )
      continue;
    context[12] = refalrts::ident_left( identifiers[ident_define], context[10], context[11] );
    if( ! context[12] )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[13], context[5], context[10], context[11] ) )
      continue;
    // closed e.Body#1 as range 10
    // closed e._#1 as range 8
    //DEBUG: s.ProcName#1: 5
    //DEBUG: e.Body#1: 10
    //DEBUG: e._#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Int-Lookup/4 s.ProcName#1/5 (/6 # define/12 s.ProcName#1/13 {REMOVED TILE} )/7 e._#1/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Body#1/10 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Int-Lookup/4 s.ProcName#1/5 t._#1/6 e.Defines#1/2 >/1
  // closed e.Defines#1 as range 2
  //DEBUG: t._#1: 6
  //DEBUG: s.ProcName#1: 5
  //DEBUG: e.Defines#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t._#1/6 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & Int-Lookup/4 AsIs: s.ProcName#1/5 } Tile{ AsIs: e.Defines#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Intm_Lookup("Int-Lookup", COOKIE1_, COOKIE2_, func_Intm_Lookup);


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
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
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
      // </0 & Map@1/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & Map@1/4 (/7 # Drive/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Drive], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & Map@1/4 (/7 # Drive/13 e.0#0/14 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 # Inline/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Inline], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & Map@1/4 (/7 # Inline/13 e.0#0/14 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 # Intrinsic/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Intrinsic], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & Map@1/4 (/7 # Intrinsic/13 e.0#0/14 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 # Spec/13 (/20 e.2#0/18 )/21 e.1#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Spec], context[13] ) )
          continue;
        context[18] = 0;
        context[19] = 0;
        context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
        if( ! context[20] )
          continue;
        refalrts::bracket_pointers(context[20], context[21]);
        // closed e.2#0 as range 18
        // closed e.1#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.2#0: 18
        //DEBUG: e.1#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & Map@1/4 (/7 # Spec/13 (/20 e.2#0/18 )/21 e.1#0/14 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@1/4 (/7 # DriveInfo/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_DriveInfo], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & Map@1/4 (/7 # DriveInfo/13 e.0#0/14 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 (/7 # SpecInfo/13 e.0#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_SpecInfo], context[13] ) )
        continue;
      // closed e.0#0 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.0#0: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & Map@1/4 (/7 # SpecInfo/13 e.0#0/14 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & Map@1/8 AsIs: e.Tail#1/16 AsIs: >/1 ]] }
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[0], res );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@1/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & OptTree-CleanupMarkup\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_OptTreem_CleanupMarkup_L1Z0]);
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
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Map@2/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & Map@2/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & Map@2/4 s.new#3/5 t.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & Map@2/4 s.ColdBy#1/5 (/8 # ColdFunction/14 s.ColdBy#1/15 s.ScopeClass#2/16 (/19 e.4#0/17 )/20 e.3#0/12 )/9 e.Tail#1/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      context[14] = refalrts::ident_left( identifiers[ident_ColdFunction], context[12], context[13] );
      if( ! context[14] )
        continue;
      if( ! refalrts::repeated_stvar_left( vm, context[15], context[5], context[12], context[13] ) )
        continue;
      // closed e.Tail#1 as range 10
      if( ! refalrts::svar_left( context[16], context[12], context[13] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[12], context[13] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.4#0 as range 17
      // closed e.3#0 as range 12
      //DEBUG: s.ColdBy#1: 5
      //DEBUG: e.Tail#1: 10
      //DEBUG: s.ScopeClass#2: 16
      //DEBUG: e.4#0: 17
      //DEBUG: e.3#0: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.ColdBy#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 Reuse: # Function/14 } Tile{ AsIs: s.ScopeClass#2/16 AsIs: (/19 AsIs: e.4#0/17 AsIs: )/20 AsIs: e.3#0/12 AsIs: )/9 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.ColdBy#1/5 } Tile{ AsIs: e.Tail#1/10 } Tile{ AsIs: >/1 ]] }
      refalrts::update_ident(context[14], identifiers[ident_Function]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[0], context[5] );
      res = refalrts::splice_evar( res, context[16], context[9] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 s.ColdBy#1/5 t.Next#1/8 e.Tail#1/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail#1 as range 10
    //DEBUG: t.Next#1: 8
    //DEBUG: s.ColdBy#1: 5
    //DEBUG: e.Tail#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/8 } Tile{ AsIs: </0 AsIs: & Map@2/4 AsIs: s.ColdBy#1/5 } Tile{ AsIs: e.Tail#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@2/4 s.ColdBy#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.ColdBy#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 s.ColdBy#1/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 s.ColdBy#1/5 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: s.ColdBy#1: 5
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/6 & WarmColdFunctions\1@0/7 Tile{ AsIs: s.ColdBy#1/5 } {*}/8 Tile{ AsIs: e.items#0/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_WarmColdFunctions_L1Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[8], context[6]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z2("Map@2", COOKIE1_, COOKIE2_, func_gen_Map_Z2);


static refalrts::FnResult func_gen_Map_Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & Map@3/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@3/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@3/4 (/7 (/15 e.1#0/13 )/16 e.2#0/11 (/19 e.3#0/17 )/20 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = 0;
      context[14] = 0;
      context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
      if( ! context[15] )
        continue;
      refalrts::bracket_pointers(context[15], context[16]);
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_right( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.1#0 as range 13
      // closed e.2#0 as range 11
      // closed e.3#0 as range 17
      // closed e.Tail#1 as range 9
      //DEBUG: e.1#0: 13
      //DEBUG: e.2#0: 11
      //DEBUG: e.3#0: 17
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: (/15 AsIs: e.1#0/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & Map@6/4 } Tile{ AsIs: e.2#0/11 } >/21 Tile{ AsIs: (/19 } </22 & Map@5/23 Tile{ AsIs: e.3#0/17 } >/24 )/25 )/26 Tile{ HalfReuse: </20 HalfReuse: & Map@3/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[21]);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z5]);
      refalrts::alloc_close_call(vm, context[24]);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z6]);
      refalrts::reinit_open_call(context[20]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z3]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[7], context[26] );
      refalrts::link_brackets( context[19], context[25] );
      refalrts::push_stack( vm, context[24] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[21] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[20];
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[21] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExpandClosures-Sentence*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@3/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z3]);
    refalrts::update_name(context[4], functions[efunc_gen_ExpandClosuresm_Sentence_D1]);
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
    // </0 & Map@3/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ExpandClosures-Sentence@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ExpandClosuresm_Sentence_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Map@4/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@4/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@4/4 (/7 # Function/13 s.ScopeClass#2/14 (/17 e.3#0/15 )/18 # Sentences/19 e.4#0/11 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Function], context[11], context[12] );
      if( ! context[13] )
        continue;
      // closed e.Tail#1 as range 9
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left( identifiers[ident_Sentences], context[11], context[12] );
      if( ! context[19] )
        continue;
      // closed e.3#0 as range 15
      // closed e.4#0 as range 11
      //DEBUG: e.Tail#1: 9
      //DEBUG: s.ScopeClass#2: 14
      //DEBUG: e.3#0: 15
      //DEBUG: e.4#0: 11

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/13 AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.3#0/15 AsIs: )/18 AsIs: # Sentences/19 } Tile{ AsIs: </0 Reuse: & Map@3/4 } Tile{ AsIs: e.4#0/11 } >/20 )/21 </22 Tile{ HalfReuse: & Map@4/8 AsIs: e.Tail#1/9 AsIs: >/1 ]] }
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::alloc_open_call(vm, context[22]);
      refalrts::update_name(context[4], functions[efunc_gen_Map_Z3]);
      refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z4]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[7], context[21] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[20], context[22] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@4/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@4/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@4/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@4/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@4/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ExpandClosures\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ExpandClosures_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", COOKIE1_, COOKIE2_, func_gen_Map_Z4);


static refalrts::FnResult func_gen_Map_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & Map@5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@5/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@5/4 (/7 s.new#3/13 e.new#4/11 )/8 e.new#5/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      // closed e.new#5 as range 9
      if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
        continue;
      // closed e.new#4 as range 11
      do {
        // </0 & Map@5/4 (/7 # Brackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        if( ! refalrts::ident_term( identifiers[ident_Brackets], context[13] ) )
          continue;
        // closed e.0#0 as range 14
        // closed e.Tail#1 as range 16
        //DEBUG: e.0#0: 14
        //DEBUG: e.Tail#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </7 HalfReuse: & Map@5/13 AsIs: e.0#0/14 HalfReuse: >/8 } )/18 </19 & Map@5/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[18]);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_gen_Map_Z5]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_Brackets]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[13], functions[efunc_gen_Map_Z5]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[0], context[18] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@5/4 (/7 s.new#6/13 (/20 e.new#7/18 )/21 e.new#8/14 )/8 e.new#9/16 >/1
        context[14] = context[11];
        context[15] = context[12];
        context[16] = context[9];
        context[17] = context[10];
        context[18] = 0;
        context[19] = 0;
        context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
        if( ! context[20] )
          continue;
        refalrts::bracket_pointers(context[20], context[21]);
        // closed e.new#7 as range 18
        // closed e.new#8 as range 14
        // closed e.new#9 as range 16
        do {
          // </0 & Map@5/4 (/7 # ADT-Brackets/13 (/20 e.2#0/22 )/21 e.1#0/24 )/8 e.Tail#1/26 >/1
          context[22] = context[18];
          context[23] = context[19];
          context[24] = context[14];
          context[25] = context[15];
          context[26] = context[16];
          context[27] = context[17];
          if( ! refalrts::ident_term( identifiers[ident_ADTm_Brackets], context[13] ) )
            continue;
          // closed e.2#0 as range 22
          // closed e.1#0 as range 24
          // closed e.Tail#1 as range 26
          //DEBUG: e.2#0: 22
          //DEBUG: e.1#0: 24
          //DEBUG: e.Tail#1: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT-Brackets/13 AsIs: (/20 AsIs: e.2#0/22 AsIs: )/21 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.1#0/24 } >/28 )/29 </30 Tile{ HalfReuse: & Map@5/8 AsIs: e.Tail#1/26 AsIs: >/1 ]] }
          refalrts::alloc_close_call(vm, context[28]);
          refalrts::alloc_close_bracket(vm, context[29]);
          refalrts::alloc_open_call(vm, context[30]);
          refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[30] );
          refalrts::link_brackets( context[7], context[29] );
          refalrts::push_stack( vm, context[28] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[20], context[21] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[28], context[30] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[7], context[21] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@5/4 (/7 # CallBrackets/13 (/20 # ClosureBrackets/28 e.3#0/22 )/21 e.1#0/24 )/8 e.Tail#1/26 >/1
        context[22] = context[18];
        context[23] = context[19];
        context[24] = context[14];
        context[25] = context[15];
        context[26] = context[16];
        context[27] = context[17];
        if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[13] ) )
          continue;
        context[28] = refalrts::ident_left( identifiers[ident_ClosureBrackets], context[22], context[23] );
        if( ! context[28] )
          continue;
        // closed e.3#0 as range 22
        // closed e.1#0 as range 24
        // closed e.Tail#1 as range 26
        //DEBUG: e.3#0: 22
        //DEBUG: e.1#0: 24
        //DEBUG: e.Tail#1: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CallBrackets/13 HalfReuse: </20 HalfReuse: & Map@5/28 } Tile{ AsIs: e.3#0/22 } Tile{ AsIs: e.1#0/24 } Tile{ HalfReuse: >/4 } Tile{ AsIs: )/21 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Map@5/8 AsIs: e.Tail#1/26 AsIs: >/1 ]] }
        refalrts::reinit_open_call(context[20]);
        refalrts::reinit_name(context[28], functions[efunc_gen_Map_Z5]);
        refalrts::reinit_close_call(context[4]);
        refalrts::reinit_name(context[8], functions[efunc_gen_Map_Z5]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[21] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_elem( res, context[0] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_elem( res, context[4] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[7], context[28] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@5/4 (/7 # CallBrackets/13 e.0#0/14 )/8 e.Tail#1/16 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = context[9];
      context[17] = context[10];
      if( ! refalrts::ident_term( identifiers[ident_CallBrackets], context[13] ) )
        continue;
      // closed e.0#0 as range 14
      // closed e.Tail#1 as range 16
      //DEBUG: e.0#0: 14
      //DEBUG: e.Tail#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </7 HalfReuse: & Map@5/13 AsIs: e.0#0/14 HalfReuse: >/8 } )/18 </19 & Map@5/20 Tile{ AsIs: e.Tail#1/16 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[18]);
      refalrts::alloc_open_call(vm, context[19]);
      refalrts::alloc_name(vm, context[20], functions[efunc_gen_Map_Z5]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_ident(context[4], identifiers[ident_CallBrackets]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[13], functions[efunc_gen_Map_Z5]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[19] );
      refalrts::link_brackets( context[0], context[18] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[18], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@5/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Next#1/7 } Tile{ AsIs: </0 AsIs: & Map@5/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
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
    // </0 & Map@5/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@5/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@5/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ExpandClosures-ResultTerm@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ExpandClosuresm_ResultTerm_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", COOKIE1_, COOKIE2_, func_gen_Map_Z5);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & Map@6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Map@6/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & Map@6/4 (/7 # Condition/13 (/16 e.2#0/14 )/17 (/20 e.4#0/18 )/21 (/24 e.6#0/22 )/25 )/8 e.Tail#1/9 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left( identifiers[ident_Condition], context[11], context[12] );
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
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[11], context[12] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      // closed e.2#0 as range 14
      // closed e.4#0 as range 18
      // closed e.6#0 as range 22
      // closed e.Tail#1 as range 9
      //DEBUG: e.2#0: 14
      //DEBUG: e.4#0: 18
      //DEBUG: e.6#0: 22
      //DEBUG: e.Tail#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Condition/13 AsIs: (/16 AsIs: e.2#0/14 AsIs: )/17 AsIs: (/20 } </26 & Map@5/27 Tile{ AsIs: e.4#0/18 } >/28 Tile{ AsIs: )/21 AsIs: (/24 AsIs: e.6#0/22 AsIs: )/25 AsIs: )/8 } Tile{ AsIs: </0 AsIs: & Map@6/4 } Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_gen_Map_Z5]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::link_brackets( context[20], context[21] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[26] );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[21], context[8] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[7], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 t.Next#1/7 e.Tail#1/9 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.Tail#1 as range 9
    //DEBUG: t.Next#1: 7
    //DEBUG: e.Tail#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExpandClosures-Sentence\1*1/4 AsIs: t.Next#1/7 } >/11 </12 & Map@6/13 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z6]);
    refalrts::update_name(context[4], functions[efunc_gen_ExpandClosuresm_Sentence_L1D1]);
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
    // </0 & Map@6/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@6/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@6/4 e.items#0/2 >/1
  // closed e.items#0 as range 2
  //DEBUG: e.items#0: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map@0/0 Reuse: & ExpandClosures-Sentence\1@0/4 AsIs: e.items#0/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_gen_Map_Z0]);
  refalrts::update_name(context[4], functions[efunc_gen_ExpandClosuresm_Sentence_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", COOKIE1_, COOKIE2_, func_gen_Map_Z6);


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
