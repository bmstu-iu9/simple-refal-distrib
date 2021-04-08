// This file automatically generated from 'Log.ref'
// Don't edit! Edit 'Log.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2840137812_1029759808
#define COOKIE1_ 2840137812U
#define COOKIE2_ 1029759808U

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
  efunc_gen_LogHandle_B1 = 18,
  efunc_Gu_LogFile = 19,
  efunc_gen_Logm_PutLine_B1Z1 = 20,
  efunc_gen_Logm_Init_S2A2 = 21,
  efunc_Openm_Auto = 22,
  efunc_gen_Logm_Init_S2A1 = 23,
  efunc_Close = 24,
  efunc_gen_Logm_Final_B1 = 25,
  efunc_gen_Logm_PutLine_B1Z2 = 26,
  efunc_gen_Logm_Final_A1 = 27,
  efunc_Putout = 28,
  efunc_Time = 29,
  efunc_gen_Logm_PutLine_B1 = 30,
  efunc_Logm_TextFromAST = 31,
  efunc_gen_Logm_PutLine_B1Z3 = 32,
  efunc_gen_Map_Z1 = 33,
  efunc_gen_Logm_AST_B1 = 34,
  efunc_gen_Logm_PutLine_B1Z4 = 35,
  efunc_gen_Map_Z2 = 36,
  efunc_gen_Logm_HighLevelRASL_B1 = 37,
  efunc_gen_Map_Z3 = 38,
  efunc_DisplayName = 39,
  efunc_gen_FnName_D2 = 40,
  efunc_Symb = 41,
  efunc_gen_Map_Z4 = 42,
  efunc_EscapeString = 43,
  efunc_gen_SrcPos_D4 = 44,
  efunc_gen_Map_Z5 = 45,
  efunc_gen_Map_Z6 = 46,
  efunc_gen_Map_Z7 = 47,
  efunc_gen_Map_Z8 = 48,
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
  efunc_Logm_Init = 59,
  efunc_Logm_Final = 60,
  efunc_LogHandle = 61,
  efunc_Logm_PutLine = 62,
  efunc_Logm_AST = 63,
  efunc_Logm_HighLevelRASL = 64,
  efunc_PutProgramElement = 65,
  efunc_PutRASLFunction = 66,
  efunc_FnName = 67,
  efunc_PutRASLCommands = 68,
  efunc_PutCode = 69,
  efunc_SrcPos = 70,
  efunc_gen_Apply_Z4 = 71,
  efunc_gen_Logm_PutLine_B1Z0 = 72,
  efunc_gen_Logm_AST_B1S2L1D2 = 73,
  efunc_gen_Logm_AST_B1S2L1Z0 = 74,
  efunc_gen_Map_Z0 = 75,
  efunc_gen_PutProgramElement_D10 = 76,
  efunc_gen_PutProgramElement_Z0 = 77,
  efunc_gen_Map_Z9 = 78,
  efunc_gen_PutRASLCommands_L1Z1 = 79,
  efunc_gen_PutRASLCommands_L1D4 = 80,
  efunc_gen_PutRASLCommands_L1Z0 = 81,
  efunc_gen_PutCode_L1D1 = 82,
  efunc_gen_PutCode_L1Z0 = 83,
  efunc_gen_PutProgramElement_S3L1D1 = 84,
  efunc_gen_PutProgramElement_S3L1Z0 = 85,
  efunc_gen_PutRASLCommands_L1 = 86,
  efunc_gen_PutRASLCommands_L1Z2 = 87,
};


enum ident {
  ident_w = 0,
  ident_Function = 1,
  ident_GNm_Local = 2,
  ident_GNm_Entry = 3,
  ident_CmdNativeFunction = 4,
  ident_FileLine = 5,
  ident_RowCol = 6,
  ident_FileRowCol = 7,
  ident_CmdMetatable = 8,
  ident_CmdEnum = 9,
  ident_CmdSwap = 10,
  ident_CmdConditionFunc = 11,
  ident_CmdDeclaration = 12,
  ident_CmdDefineIdent = 13,
  ident_CmdEmitNativeCode = 14,
  ident_Spec = 15,
  ident_CmdSentence = 16,
  ident_CmdOpenELoop = 17,
  ident_AlgLeft = 18,
  ident_CmdComment = 19,
  ident_Mu = 20,
  ident_Up = 21,
  ident_Evm_met = 22,
  ident_Residue = 23,
  ident_u_u_Metau_Residue = 24,
  ident_Apply = 25,
  ident_Map = 26,
  ident_Reduce = 27,
  ident_Fetch = 28,
  ident_MapAccum = 29,
  ident_DoMapAccum = 30,
  ident_UnBracket = 31,
  ident_DelAccumulator = 32,
  ident_Inc = 33,
  ident_Dec = 34,
  ident_Pipe = 35,
  ident_Logm_Init = 36,
  ident_Gu_LogFile = 37,
  ident_Logm_Final = 38,
  ident_LogHandle = 39,
  ident_Logm_PutLine = 40,
  ident_Logm_AST = 41,
  ident_Logm_HighLevelRASL = 42,
  ident_PutProgramElement = 43,
  ident_PutRASLFunction = 44,
  ident_FnName = 45,
  ident_PutRASLCommands = 46,
  ident_PutCode = 47,
  ident_SrcPos = 48,
  ident_Symbol = 49,
  ident_Identifier = 50,
  ident_Name = 51,
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


static refalrts::FnResult func_gen_Logm_Init_S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Log-Init$2=2/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-PutLine:1@1/4 HalfReuse: </1 } & LogHandle:1/5 </6 & G_LogFile/7 >/8 >/9 >/10 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_LogHandle_B1]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_Gu_LogFile]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_PutLine_B1Z1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_Init_S2A2("Log-Init$2=2", COOKIE1_, COOKIE2_, func_gen_Logm_Init_S2A2);


static refalrts::FnResult func_gen_Logm_Init_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Log-Init$2=1/4 s.FileHandle/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.FileHandle: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & Log-Init$2=2/7 Tile{ AsIs: </0 Reuse: & G_LogFile/4 AsIs: s.FileHandle/5 AsIs: >/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Logm_Init_S2A2]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_Gu_LogFile]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_Init_S2A1("Log-Init$2=1", COOKIE1_, COOKIE2_, func_gen_Logm_Init_S2A1);


static refalrts::FnResult func_Logm_Init(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Log-Init/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Log-Init/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-Init/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-Init/4 e.LogFileName/2 >/1
  // closed e.LogFileName as range 2
  //DEBUG: e.LogFileName: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-Init$2=1/4 } </5 & Open-Auto/6 # w/7 Tile{ AsIs: e.LogFileName/2 } >/8 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_Openm_Auto]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_w]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_Init_S2A1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Logm_Init("Log-Init", 0U, 0U, func_Logm_Init);


static refalrts::FnResult func_gen_Logm_Final_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Log-Final:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Log-Final:1/4 s.FileHandle/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.FileHandle: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Close/4 AsIs: s.FileHandle/7 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_Close]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-Final:1/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Log-Final:1/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_Final_B1("Log-Final:1", COOKIE1_, COOKIE2_, func_gen_Logm_Final_B1);


static refalrts::FnResult func_gen_Logm_Final_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Log-Final=1/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-Final:1/4 HalfReuse: </1 } & G_LogFile/5 >/6 >/7 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Gu_LogFile]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_Final_B1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_Final_A1("Log-Final=1", COOKIE1_, COOKIE2_, func_gen_Logm_Final_A1);


static refalrts::FnResult func_Logm_Final(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Log-Final/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-Final=1/4 HalfReuse: </1 } & Log-PutLine:1@2/5 </6 & LogHandle:1/7 </8 & G_LogFile/9 >/10 >/11 >/12 >/13 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_gen_Logm_PutLine_B1Z2]);
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_LogHandle_B1]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Gu_LogFile]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_Final_A1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Logm_Final("Log-Final", 0U, 0U, func_Logm_Final);


static refalrts::FnResult func_gen_LogHandle_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & LogHandle:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & LogHandle:1/4 s.FileHandle/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.FileHandle: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } s.FileHandle/7/8 Tile{ AsIs: </0 Reuse: & G_LogFile/4 AsIs: s.FileHandle/7 AsIs: >/1 ]] }
    refalrts::copy_stvar(vm, context[8], context[7]);
    refalrts::update_name(context[4], functions[efunc_Gu_LogFile]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LogHandle:1/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & LogHandle:1/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LogHandle_B1("LogHandle:1", COOKIE1_, COOKIE2_, func_gen_LogHandle_B1);


static refalrts::FnResult func_LogHandle(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & LogHandle/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LogHandle:1/4 HalfReuse: </1 } & G_LogFile/5 >/6 >/7 Tile{ ]] }
  refalrts::alloc_name(vm, context[5], functions[efunc_Gu_LogFile]);
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_gen_LogHandle_B1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LogHandle("LogHandle", COOKIE1_, COOKIE2_, func_LogHandle);


static refalrts::FnResult func_gen_Logm_PutLine_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Log-PutLine:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Log-PutLine:1/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Log-PutLine:1/4 (/7 e.Message/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Message as range 9
    //DEBUG: e.Message: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-PutLine:1/4 (/7 e.Message/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-PutLine:1/4 (/7 e.Message/5 )/8 s.FileHandle/9 >/1
  // closed e.Message as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Message: 5
  //DEBUG: s.FileHandle: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.FileHandle/9 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: s.FileHandle9 /7 } </10 Tile{ HalfReuse: & Time/8 } >/11": "/12 Tile{ AsIs: e.Message/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], ": ", 2);
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_name(context[8], functions[efunc_Time]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_PutLine_B1("Log-PutLine:1", COOKIE1_, COOKIE2_, func_gen_Logm_PutLine_B1);


static refalrts::FnResult func_Logm_PutLine(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Log-PutLine/4 e.Message/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Message as range 2
  //DEBUG: e.Message: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-PutLine:1/4 } (/5 Tile{ AsIs: e.Message/2 } )/6 </7 & LogHandle:1/8 </9 & G_LogFile/10 >/11 >/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[5]);
  refalrts::alloc_close_bracket(vm, context[6]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_gen_LogHandle_B1]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Gu_LogFile]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_PutLine_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[5], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Logm_PutLine("Log-PutLine", 0U, 0U, func_Logm_PutLine);


static refalrts::FnResult func_gen_Logm_AST_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Log-AST:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Log-AST:1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & Log-AST:1/4 (/7 e.AST/13 )/8 (/11 e.Message/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.AST as range 13
    // closed e.Message as range 15
    //DEBUG: e.AST: 13
    //DEBUG: e.Message: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-AST:1/4 (/7 {REMOVED TILE} )/8 (/11 e.Message/15 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.AST/13 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-AST:1/4 (/7 e.AST/5 )/8 (/11 e.Message/9 )/12 s.FileHandle/13 >/1
  // closed e.AST as range 5
  // closed e.Message as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.AST: 5
  //DEBUG: e.Message: 9
  //DEBUG: s.FileHandle: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-PutLine:1@3/4 AsIs: (/7 } Tile{ AsIs: e.Message/9 } Tile{ AsIs: )/8 HalfReuse: </11 } & LogHandle:1/14 </15 & G_LogFile/16 >/17 >/18 >/19 </20 Tile{ HalfReuse: & Map@1/12 AsIs: s.FileHandle/13 HalfReuse: </1 } & Log-TextFromAST/21 Tile{ AsIs: e.AST/5 } >/22 >/23 e.AST/5/24 Tile{ ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_LogHandle_B1]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Gu_LogFile]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Logm_TextFromAST]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::copy_evar(vm, context[24], context[25], context[5], context[6]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_PutLine_B1Z3]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_name(context[12], functions[efunc_gen_Map_Z1]);
  refalrts::reinit_open_call(context[1]);
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[21] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[14], context[20] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_AST_B1("Log-AST:1", COOKIE1_, COOKIE2_, func_gen_Logm_AST_B1);


static refalrts::FnResult func_Logm_AST(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Log-AST/4 (/7 e.Message/5 )/8 e.AST/2 >/1
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
  // closed e.Message as range 5
  // closed e.AST as range 2
  //DEBUG: e.Message: 5
  //DEBUG: e.AST: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-AST:1/4 AsIs: (/7 } Tile{ AsIs: e.AST/2 } Tile{ AsIs: )/8 } (/9 Tile{ AsIs: e.Message/5 } )/10 </11 & LogHandle:1/12 </13 & G_LogFile/14 >/15 >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_LogHandle_B1]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Gu_LogFile]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_AST_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Logm_AST("Log-AST", 0U, 0U, func_Logm_AST);


static refalrts::FnResult func_gen_Logm_HighLevelRASL_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Log-HighLevelRASL:1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Log-HighLevelRASL:1/4 (/7 e.new1/5 )/8 (/11 e.new2/9 )/12 e.new3/2 >/1
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
    // </0 & Log-HighLevelRASL:1/4 (/7 e.RASL/13 )/8 (/11 e.SrcName/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.RASL as range 13
    // closed e.SrcName as range 15
    //DEBUG: e.RASL: 13
    //DEBUG: e.SrcName: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-HighLevelRASL:1/4 (/7 {REMOVED TILE} )/8 (/11 e.SrcName/15 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.RASL/13 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-HighLevelRASL:1/4 (/7 e.RASL/5 )/8 (/11 e.SrcName/9 )/12 s.FileHandle/13 >/1
  // closed e.RASL as range 5
  // closed e.SrcName as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.RASL: 5
  //DEBUG: e.SrcName: 9
  //DEBUG: s.FileHandle: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-PutLine:1@4/4 AsIs: (/7 } Tile{ AsIs: e.SrcName/9 } Tile{ AsIs: )/8 HalfReuse: </11 } & LogHandle:1/14 </15 & G_LogFile/16 Tile{ AsIs: >/1 } >/17 >/18 </19 Tile{ HalfReuse: & Map@2/12 AsIs: s.FileHandle/13 } Tile{ AsIs: e.RASL/5 } >/20 e.RASL/5/21 Tile{ ]] }
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_LogHandle_B1]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Gu_LogFile]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_PutLine_B1Z4]);
  refalrts::reinit_open_call(context[11]);
  refalrts::reinit_name(context[12], functions[efunc_gen_Map_Z2]);
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_elem( res, context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_elem( res, context[1] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_HighLevelRASL_B1("Log-HighLevelRASL:1", COOKIE1_, COOKIE2_, func_gen_Logm_HighLevelRASL_B1);


static refalrts::FnResult func_Logm_HighLevelRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Log-HighLevelRASL/4 (/7 e.SrcName/5 )/8 e.RASL/2 >/1
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
  // closed e.SrcName as range 5
  // closed e.RASL as range 2
  //DEBUG: e.SrcName: 5
  //DEBUG: e.RASL: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-HighLevelRASL:1/4 AsIs: (/7 } Tile{ AsIs: e.RASL/2 } Tile{ AsIs: )/8 } (/9 Tile{ AsIs: e.SrcName/5 } )/10 </11 & LogHandle:1/12 </13 & G_LogFile/14 >/15 >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_LogHandle_B1]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Gu_LogFile]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::update_name(context[4], functions[efunc_gen_Logm_HighLevelRASL_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[16] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Logm_HighLevelRASL("Log-HighLevelRASL", 0U, 0U, func_Logm_HighLevelRASL);


static refalrts::FnResult func_PutProgramElement(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 93 elems
  refalrts::Iter context[93];
  refalrts::zeros( context, 93 );
  // </0 & PutProgramElement/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PutProgramElement/4 s.new1/9 (/7 s.new2/10 e.new3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 5
  do {
    // </0 & PutProgramElement/4 s.new4/9 (/7 s.new5/10 s.new6/13 e.new7/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    // closed e.new7 as range 11
    do {
      // </0 & PutProgramElement/4 s.new8/9 (/7 s.new9/10 s.new10/13 (/18 e.new11/16 )/19 e.new12/14 )/8 >/1
      context[14] = context[11];
      context[15] = context[12];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.new11 as range 16
      // closed e.new12 as range 14
      do {
        // </0 & PutProgramElement/4 s.new13/9 (/7 # Function/10 s.new14/13 (/18 e.new16/20 )/19 e.new15/22 )/8 >/1
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[14];
        context[23] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_Function], context[10] ) )
          continue;
        // closed e.new16 as range 20
        // closed e.new15 as range 22
        do {
          // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # Function/10 # GN-Local/13 (/18 e.Name/24 )/19 e.Commands/26 )/8 >/1
          context[24] = context[20];
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[13] ) )
            continue;
          // closed e.Name as range 24
          // closed e.Commands as range 26
          //DEBUG: s.FileHandle: 9
          //DEBUG: e.Name: 24
          //DEBUG: e.Commands: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: </13 HalfReuse: & DisplayName/18 AsIs: e.Name/24 HalfReuse: >/19 }" {"/28 >/30 </31 & Map@3/32 s.FileHandle/9/33 Tile{ AsIs: e.Commands/26 } >/34 </35 & Putout/36 s.FileHandle/9/37"  }"/38 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[28], context[29], " {", 2);
          refalrts::alloc_close_call(vm, context[30]);
          refalrts::alloc_open_call(vm, context[31]);
          refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z3]);
          refalrts::copy_stvar(vm, context[33], context[9]);
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::alloc_open_call(vm, context[35]);
          refalrts::alloc_name(vm, context[36], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[37], context[9]);
          refalrts::alloc_chars(vm, context[38], context[39], "  }", 3);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_char(context[7], ' ');
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[18], functions[efunc_DisplayName]);
          refalrts::reinit_close_call(context[19]);
          refalrts::reinit_char(context[8], '\n');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[19] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[34], context[39] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[28], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # Function/10 # GN-Entry/13 (/18 e.Name/24 )/19 e.Commands/26 )/8 >/1
          context[24] = context[20];
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[13] ) )
            continue;
          // closed e.Name as range 24
          // closed e.Commands as range 26
          //DEBUG: s.FileHandle: 9
          //DEBUG: e.Name: 24
          //DEBUG: e.Commands: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: '$'/13 HalfReuse: 'E'/18 }"NT"/28 Tile{ HalfReuse: 'R'/19 }"Y "/30 </32 & DisplayName/33 Tile{ AsIs: e.Name/24 } >/34" {"/35 >/37 </38 & Map@3/39 s.FileHandle/9/40 Tile{ AsIs: e.Commands/26 } >/41 </42 & Putout/43 s.FileHandle/9/44"  }"/45 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[28], context[29], "NT", 2);
          refalrts::alloc_chars(vm, context[30], context[31], "Y ", 2);
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::alloc_name(vm, context[33], functions[efunc_DisplayName]);
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::alloc_chars(vm, context[35], context[36], " {", 2);
          refalrts::alloc_close_call(vm, context[37]);
          refalrts::alloc_open_call(vm, context[38]);
          refalrts::alloc_name(vm, context[39], functions[efunc_gen_Map_Z3]);
          refalrts::copy_stvar(vm, context[40], context[9]);
          refalrts::alloc_close_call(vm, context[41]);
          refalrts::alloc_open_call(vm, context[42]);
          refalrts::alloc_name(vm, context[43], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[44], context[9]);
          refalrts::alloc_chars(vm, context[45], context[46], "  }", 3);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_char(context[7], ' ');
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[13], '$');
          refalrts::reinit_char(context[18], 'E');
          refalrts::reinit_char(context[19], 'R');
          refalrts::reinit_char(context[8], '\n');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[41] );
          refalrts::push_stack( vm, context[38] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[32] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[41], context[46] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[34], context[40] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[30], context[33] );
          res = refalrts::splice_elem( res, context[19] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # Function/10 s.ScopeClass/13 (/18 e.Name/24 )/19 e.Commands/26 )/8 >/1
        context[24] = context[20];
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        // closed e.Name as range 24
        // closed e.Commands as range 26
        //DEBUG: s.FileHandle: 9
        //DEBUG: s.ScopeClass: 13
        //DEBUG: e.Name: 24
        //DEBUG: e.Commands: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: </7 HalfReuse: & FnName*2/10 AsIs: s.ScopeClass/13 } Tile{ AsIs: e.Name/24 } Tile{ HalfReuse: >/18 } Tile{ HalfReuse: ' '/19 } '{'/28 >/29 </30 & Map@3/31 s.FileHandle/9/32 Tile{ AsIs: e.Commands/26 } >/33 </34 & Putout/35 s.FileHandle/9/36"  }"/37 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
        refalrts::alloc_char(vm, context[28], '{');
        refalrts::alloc_close_call(vm, context[29]);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_gen_Map_Z3]);
        refalrts::copy_stvar(vm, context[32], context[9]);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::alloc_open_call(vm, context[34]);
        refalrts::alloc_name(vm, context[35], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[36], context[9]);
        refalrts::alloc_chars(vm, context[37], context[38], "  }", 3);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[10], functions[efunc_gen_FnName_D2]);
        refalrts::reinit_close_call(context[18]);
        refalrts::reinit_char(context[19], ' ');
        refalrts::reinit_char(context[8], '\n');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[33], context[38] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[28], context[32] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & PutProgramElement/4 s.new13/9 (/7 # CmdNativeFunction/10 s.new14/13 (/18 e.new17/20 )/19 t.new15/24 e.new16/22 )/8 >/1
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[14];
        context[23] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[10] ) )
          continue;
        // closed e.new17 as range 20
        context[25] = refalrts::tvar_left( context[24], context[22], context[23] );
        if( ! context[25] )
          continue;
        // closed e.new16 as range 22
        do {
          // </0 & PutProgramElement/4 s.new18/9 (/7 # CmdNativeFunction/10 # GN-Local/13 (/18 e.new21/26 )/19 t.new19/24 e.new20/28 )/8 >/1
          context[26] = context[20];
          context[27] = context[21];
          context[28] = context[22];
          context[29] = context[23];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[13] ) )
            continue;
          // closed e.new21 as range 26
          // closed e.new20 as range 28
          do {
            // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 # GN-Local/13 (/18 e.Name/30 )/19 s.LineNumber/24 e.Code/32 )/8 >/1
            context[30] = context[26];
            context[31] = context[27];
            context[32] = context[28];
            context[33] = context[29];
            if( ! refalrts::svar_term( context[24], context[24] ) )
              continue;
            // closed e.Name as range 30
            // closed e.Code as range 32
            //DEBUG: s.LineNumber: 24
            //DEBUG: s.FileHandle: 9
            //DEBUG: e.Name: 30
            //DEBUG: e.Code: 32

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: </13 HalfReuse: & DisplayName/18 AsIs: e.Name/30 HalfReuse: >/19 }" :: native {"/34 >/36 </37 & Putout/38 s.FileHandle/9/39"  #line "/40 </42 & Symb/43 Tile{ AsIs: s.LineNumber/24 } >/44 >/45 </46 & Putout/47 s.FileHandle/9/48"    ======================================"/49 >/51 </52 & Map@4/53 s.FileHandle/9/54 Tile{ AsIs: e.Code/32 } >/55 </56 & Putout/57 s.FileHandle/9/58"    ======================================"/59 >/61 </62 & Putout/63 s.FileHandle/9/64"  }"/65 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[34], context[35], " :: native {", 12);
            refalrts::alloc_close_call(vm, context[36]);
            refalrts::alloc_open_call(vm, context[37]);
            refalrts::alloc_name(vm, context[38], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[39], context[9]);
            refalrts::alloc_chars(vm, context[40], context[41], "  #line ", 8);
            refalrts::alloc_open_call(vm, context[42]);
            refalrts::alloc_name(vm, context[43], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[44]);
            refalrts::alloc_close_call(vm, context[45]);
            refalrts::alloc_open_call(vm, context[46]);
            refalrts::alloc_name(vm, context[47], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[48], context[9]);
            refalrts::alloc_chars(vm, context[49], context[50], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[51]);
            refalrts::alloc_open_call(vm, context[52]);
            refalrts::alloc_name(vm, context[53], functions[efunc_gen_Map_Z4]);
            refalrts::copy_stvar(vm, context[54], context[9]);
            refalrts::alloc_close_call(vm, context[55]);
            refalrts::alloc_open_call(vm, context[56]);
            refalrts::alloc_name(vm, context[57], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[58], context[9]);
            refalrts::alloc_chars(vm, context[59], context[60], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[61]);
            refalrts::alloc_open_call(vm, context[62]);
            refalrts::alloc_name(vm, context[63], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[64], context[9]);
            refalrts::alloc_chars(vm, context[65], context[66], "  }", 3);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[7], ' ');
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_open_call(context[13]);
            refalrts::reinit_name(context[18], functions[efunc_DisplayName]);
            refalrts::reinit_close_call(context[19]);
            refalrts::reinit_char(context[8], '\n');
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[62] );
            refalrts::push_stack( vm, context[61] );
            refalrts::push_stack( vm, context[56] );
            refalrts::push_stack( vm, context[55] );
            refalrts::push_stack( vm, context[52] );
            refalrts::push_stack( vm, context[51] );
            refalrts::push_stack( vm, context[46] );
            refalrts::push_stack( vm, context[45] );
            refalrts::push_stack( vm, context[37] );
            refalrts::push_stack( vm, context[44] );
            refalrts::push_stack( vm, context[42] );
            refalrts::push_stack( vm, context[36] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[19] );
            refalrts::push_stack( vm, context[13] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[55], context[66] );
            res = refalrts::splice_evar( res, context[32], context[33] );
            res = refalrts::splice_evar( res, context[44], context[54] );
            res = refalrts::splice_elem( res, context[24] );
            res = refalrts::splice_evar( res, context[34], context[43] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & PutProgramElement/4 s.new22/9 (/7 # CmdNativeFunction/10 # GN-Local/13 (/18 e.new27/30 )/19 (/24 s.new23/36 t.new24/37 e.new25/34 )/25 e.new26/32 )/8 >/1
            context[30] = context[26];
            context[31] = context[27];
            context[32] = context[28];
            context[33] = context[29];
            context[34] = 0;
            context[35] = 0;
            if( ! refalrts::brackets_term( context[34], context[35], context[24] ) )
              continue;
            // closed e.new27 as range 30
            // closed e.new26 as range 32
            if( ! refalrts::svar_left( context[36], context[34], context[35] ) )
              continue;
            context[38] = refalrts::tvar_left( context[37], context[34], context[35] );
            if( ! context[38] )
              continue;
            // closed e.new25 as range 34
            do {
              // </0 & PutProgramElement/4 s.new28/9 (/7 # CmdNativeFunction/10 # GN-Local/13 (/18 e.new33/39 )/19 (/24 s.new29/36 s.new30/37 e.new31/41 )/25 e.new32/43 )/8 >/1
              context[39] = context[30];
              context[40] = context[31];
              context[41] = context[34];
              context[42] = context[35];
              context[43] = context[32];
              context[44] = context[33];
              if( ! refalrts::svar_term( context[37], context[37] ) )
                continue;
              // closed e.new33 as range 39
              // closed e.new31 as range 41
              // closed e.new32 as range 43
              do {
                // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 # GN-Local/13 (/18 e.Name/45 )/19 (/24 # FileLine/36 s.Line/37 e.1/47 )/25 e.Code/49 )/8 >/1
                context[45] = context[39];
                context[46] = context[40];
                context[47] = context[41];
                context[48] = context[42];
                context[49] = context[43];
                context[50] = context[44];
                if( ! refalrts::ident_term( identifiers[ident_FileLine], context[36] ) )
                  continue;
                // closed e.Name as range 45
                // closed e.1 as range 47
                // closed e.Code as range 49
                //DEBUG: s.FileHandle: 9
                //DEBUG: s.Line: 37
                //DEBUG: e.Name: 45
                //DEBUG: e.1: 47
                //DEBUG: e.Code: 49

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: </13 HalfReuse: & DisplayName/18 AsIs: e.Name/45 HalfReuse: >/19 HalfReuse: ' '/24 HalfReuse: ':'/36 }": n"/51 Tile{ HalfReuse: 'a'/25 }"tive {"/53 >/55 </56 & Putout/57 s.FileHandle/9/58"  #line "/59 </61 & Symb/62 Tile{ AsIs: s.Line/37 } >/63" \""/64 </66 & EscapeString/67 Tile{ AsIs: e.1/47 } >/68 '\"'/69 >/70 </71 & Putout/72 s.FileHandle/9/73"    ======================================"/74 >/76 </77 & Map@4/78 s.FileHandle/9/79 Tile{ AsIs: e.Code/49 } >/80 </81 & Putout/82 s.FileHandle/9/83"    ======================================"/84 >/86 </87 & Putout/88 s.FileHandle/9/89"  }"/90 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
                refalrts::alloc_chars(vm, context[51], context[52], ": n", 3);
                refalrts::alloc_chars(vm, context[53], context[54], "tive {", 6);
                refalrts::alloc_close_call(vm, context[55]);
                refalrts::alloc_open_call(vm, context[56]);
                refalrts::alloc_name(vm, context[57], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[58], context[9]);
                refalrts::alloc_chars(vm, context[59], context[60], "  #line ", 8);
                refalrts::alloc_open_call(vm, context[61]);
                refalrts::alloc_name(vm, context[62], functions[efunc_Symb]);
                refalrts::alloc_close_call(vm, context[63]);
                refalrts::alloc_chars(vm, context[64], context[65], " \"", 2);
                refalrts::alloc_open_call(vm, context[66]);
                refalrts::alloc_name(vm, context[67], functions[efunc_EscapeString]);
                refalrts::alloc_close_call(vm, context[68]);
                refalrts::alloc_char(vm, context[69], '\"');
                refalrts::alloc_close_call(vm, context[70]);
                refalrts::alloc_open_call(vm, context[71]);
                refalrts::alloc_name(vm, context[72], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[73], context[9]);
                refalrts::alloc_chars(vm, context[74], context[75], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[76]);
                refalrts::alloc_open_call(vm, context[77]);
                refalrts::alloc_name(vm, context[78], functions[efunc_gen_Map_Z4]);
                refalrts::copy_stvar(vm, context[79], context[9]);
                refalrts::alloc_close_call(vm, context[80]);
                refalrts::alloc_open_call(vm, context[81]);
                refalrts::alloc_name(vm, context[82], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[83], context[9]);
                refalrts::alloc_chars(vm, context[84], context[85], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[86]);
                refalrts::alloc_open_call(vm, context[87]);
                refalrts::alloc_name(vm, context[88], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[89], context[9]);
                refalrts::alloc_chars(vm, context[90], context[91], "  }", 3);
                refalrts::update_name(context[4], functions[efunc_Putout]);
                refalrts::reinit_char(context[7], ' ');
                refalrts::reinit_char(context[10], ' ');
                refalrts::reinit_open_call(context[13]);
                refalrts::reinit_name(context[18], functions[efunc_DisplayName]);
                refalrts::reinit_close_call(context[19]);
                refalrts::reinit_char(context[24], ' ');
                refalrts::reinit_char(context[36], ':');
                refalrts::reinit_char(context[25], 'a');
                refalrts::reinit_char(context[8], '\n');
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[87] );
                refalrts::push_stack( vm, context[86] );
                refalrts::push_stack( vm, context[81] );
                refalrts::push_stack( vm, context[80] );
                refalrts::push_stack( vm, context[77] );
                refalrts::push_stack( vm, context[76] );
                refalrts::push_stack( vm, context[71] );
                refalrts::push_stack( vm, context[70] );
                refalrts::push_stack( vm, context[56] );
                refalrts::push_stack( vm, context[68] );
                refalrts::push_stack( vm, context[66] );
                refalrts::push_stack( vm, context[63] );
                refalrts::push_stack( vm, context[61] );
                refalrts::push_stack( vm, context[55] );
                refalrts::push_stack( vm, context[0] );
                refalrts::push_stack( vm, context[19] );
                refalrts::push_stack( vm, context[13] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[8];
                res = refalrts::splice_evar( res, context[80], context[91] );
                res = refalrts::splice_evar( res, context[49], context[50] );
                res = refalrts::splice_evar( res, context[68], context[79] );
                res = refalrts::splice_evar( res, context[47], context[48] );
                res = refalrts::splice_evar( res, context[63], context[67] );
                res = refalrts::splice_elem( res, context[37] );
                res = refalrts::splice_evar( res, context[53], context[62] );
                res = refalrts::splice_elem( res, context[25] );
                res = refalrts::splice_evar( res, context[51], context[52] );
                refalrts::use( res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 # GN-Local/13 (/18 e.Name/45 )/19 (/24 # RowCol/36 s.Row/37 s.Col/51 )/25 e.Code/49 )/8 >/1
              context[45] = context[39];
              context[46] = context[40];
              context[47] = context[41];
              context[48] = context[42];
              context[49] = context[43];
              context[50] = context[44];
              if( ! refalrts::ident_term( identifiers[ident_RowCol], context[36] ) )
                continue;
              // closed e.Name as range 45
              // closed e.Code as range 49
              if( ! refalrts::svar_left( context[51], context[47], context[48] ) )
                continue;
              if( ! refalrts::empty_seq( context[47], context[48] ) )
                continue;
              //DEBUG: s.FileHandle: 9
              //DEBUG: s.Row: 37
              //DEBUG: e.Name: 45
              //DEBUG: e.Code: 49
              //DEBUG: s.Col: 51

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: </13 HalfReuse: & DisplayName/18 AsIs: e.Name/45 HalfReuse: >/19 HalfReuse: ' '/24 HalfReuse: ':'/36 }": native {"/52 >/54 </55 & Putout/56 s.FileHandle/9/57"  #line "/58 </60 & Symb/61 Tile{ AsIs: s.Row/37 } >/62 ':'/63 </64 & Symb/65 Tile{ AsIs: s.Col/51 HalfReuse: >/25 } >/66 </67 & Putout/68 s.FileHandle/9/69"    ======================================"/70 >/72 </73 & Map@4/74 s.FileHandle/9/75 Tile{ AsIs: e.Code/49 } >/76 </77 & Putout/78 s.FileHandle/9/79"    ======================================"/80 >/82 </83 & Putout/84 s.FileHandle/9/85"  }"/86 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[52], context[53], ": native {", 10);
              refalrts::alloc_close_call(vm, context[54]);
              refalrts::alloc_open_call(vm, context[55]);
              refalrts::alloc_name(vm, context[56], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[57], context[9]);
              refalrts::alloc_chars(vm, context[58], context[59], "  #line ", 8);
              refalrts::alloc_open_call(vm, context[60]);
              refalrts::alloc_name(vm, context[61], functions[efunc_Symb]);
              refalrts::alloc_close_call(vm, context[62]);
              refalrts::alloc_char(vm, context[63], ':');
              refalrts::alloc_open_call(vm, context[64]);
              refalrts::alloc_name(vm, context[65], functions[efunc_Symb]);
              refalrts::alloc_close_call(vm, context[66]);
              refalrts::alloc_open_call(vm, context[67]);
              refalrts::alloc_name(vm, context[68], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[69], context[9]);
              refalrts::alloc_chars(vm, context[70], context[71], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[72]);
              refalrts::alloc_open_call(vm, context[73]);
              refalrts::alloc_name(vm, context[74], functions[efunc_gen_Map_Z4]);
              refalrts::copy_stvar(vm, context[75], context[9]);
              refalrts::alloc_close_call(vm, context[76]);
              refalrts::alloc_open_call(vm, context[77]);
              refalrts::alloc_name(vm, context[78], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[79], context[9]);
              refalrts::alloc_chars(vm, context[80], context[81], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[82]);
              refalrts::alloc_open_call(vm, context[83]);
              refalrts::alloc_name(vm, context[84], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[85], context[9]);
              refalrts::alloc_chars(vm, context[86], context[87], "  }", 3);
              refalrts::update_name(context[4], functions[efunc_Putout]);
              refalrts::reinit_char(context[7], ' ');
              refalrts::reinit_char(context[10], ' ');
              refalrts::reinit_open_call(context[13]);
              refalrts::reinit_name(context[18], functions[efunc_DisplayName]);
              refalrts::reinit_close_call(context[19]);
              refalrts::reinit_char(context[24], ' ');
              refalrts::reinit_char(context[36], ':');
              refalrts::reinit_close_call(context[25]);
              refalrts::reinit_char(context[8], '\n');
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[83] );
              refalrts::push_stack( vm, context[82] );
              refalrts::push_stack( vm, context[77] );
              refalrts::push_stack( vm, context[76] );
              refalrts::push_stack( vm, context[73] );
              refalrts::push_stack( vm, context[72] );
              refalrts::push_stack( vm, context[67] );
              refalrts::push_stack( vm, context[66] );
              refalrts::push_stack( vm, context[55] );
              refalrts::push_stack( vm, context[25] );
              refalrts::push_stack( vm, context[64] );
              refalrts::push_stack( vm, context[62] );
              refalrts::push_stack( vm, context[60] );
              refalrts::push_stack( vm, context[54] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[19] );
              refalrts::push_stack( vm, context[13] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[8];
              res = refalrts::splice_evar( res, context[76], context[87] );
              res = refalrts::splice_evar( res, context[49], context[50] );
              res = refalrts::splice_evar( res, context[66], context[75] );
              res = refalrts::splice_evar( res, context[51], context[25] );
              res = refalrts::splice_evar( res, context[62], context[65] );
              res = refalrts::splice_elem( res, context[37] );
              res = refalrts::splice_evar( res, context[52], context[61] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 # GN-Local/13 (/18 e.Name/39 )/19 (/24 # FileRowCol/36 (/37 s.Row/47 s.Col/48 )/38 e.1/41 )/25 e.Code/43 )/8 >/1
            context[39] = context[30];
            context[40] = context[31];
            context[41] = context[34];
            context[42] = context[35];
            context[43] = context[32];
            context[44] = context[33];
            context[45] = 0;
            context[46] = 0;
            if( ! refalrts::brackets_term( context[45], context[46], context[37] ) )
              continue;
            if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[36] ) )
              continue;
            // closed e.Name as range 39
            // closed e.1 as range 41
            // closed e.Code as range 43
            if( ! refalrts::svar_left( context[47], context[45], context[46] ) )
              continue;
            if( ! refalrts::svar_left( context[48], context[45], context[46] ) )
              continue;
            if( ! refalrts::empty_seq( context[45], context[46] ) )
              continue;
            //DEBUG: s.FileHandle: 9
            //DEBUG: e.Name: 39
            //DEBUG: e.1: 41
            //DEBUG: e.Code: 43
            //DEBUG: s.Row: 47
            //DEBUG: s.Col: 48

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: </13 HalfReuse: & DisplayName/18 AsIs: e.Name/39 HalfReuse: >/19 HalfReuse: ' '/24 HalfReuse: ':'/36 HalfReuse: ':'/37 }" native {"/49 >/51 </52 & Putout/53 s.FileHandle/9/54"  #line "/55 </57 & Symb/58 Tile{ AsIs: s.Row/47 } >/59 ':'/60 </61 & Symb/62 Tile{ AsIs: s.Col/48 } >/63" \""/64 </66 Tile{ HalfReuse: & EscapeString/38 AsIs: e.1/41 HalfReuse: >/25 } '\"'/67 >/68 </69 & Putout/70 s.FileHandle/9/71"    ======================================"/72 >/74 </75 & Map@4/76 s.FileHandle/9/77 Tile{ AsIs: e.Code/43 } >/78 </79 & Putout/80 s.FileHandle/9/81"    ======================================"/82 >/84 </85 & Putout/86 s.FileHandle/9/87"  }"/88 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[49], context[50], " native {", 9);
            refalrts::alloc_close_call(vm, context[51]);
            refalrts::alloc_open_call(vm, context[52]);
            refalrts::alloc_name(vm, context[53], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[54], context[9]);
            refalrts::alloc_chars(vm, context[55], context[56], "  #line ", 8);
            refalrts::alloc_open_call(vm, context[57]);
            refalrts::alloc_name(vm, context[58], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[59]);
            refalrts::alloc_char(vm, context[60], ':');
            refalrts::alloc_open_call(vm, context[61]);
            refalrts::alloc_name(vm, context[62], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[63]);
            refalrts::alloc_chars(vm, context[64], context[65], " \"", 2);
            refalrts::alloc_open_call(vm, context[66]);
            refalrts::alloc_char(vm, context[67], '\"');
            refalrts::alloc_close_call(vm, context[68]);
            refalrts::alloc_open_call(vm, context[69]);
            refalrts::alloc_name(vm, context[70], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[71], context[9]);
            refalrts::alloc_chars(vm, context[72], context[73], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[74]);
            refalrts::alloc_open_call(vm, context[75]);
            refalrts::alloc_name(vm, context[76], functions[efunc_gen_Map_Z4]);
            refalrts::copy_stvar(vm, context[77], context[9]);
            refalrts::alloc_close_call(vm, context[78]);
            refalrts::alloc_open_call(vm, context[79]);
            refalrts::alloc_name(vm, context[80], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[81], context[9]);
            refalrts::alloc_chars(vm, context[82], context[83], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[84]);
            refalrts::alloc_open_call(vm, context[85]);
            refalrts::alloc_name(vm, context[86], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[87], context[9]);
            refalrts::alloc_chars(vm, context[88], context[89], "  }", 3);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[7], ' ');
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_open_call(context[13]);
            refalrts::reinit_name(context[18], functions[efunc_DisplayName]);
            refalrts::reinit_close_call(context[19]);
            refalrts::reinit_char(context[24], ' ');
            refalrts::reinit_char(context[36], ':');
            refalrts::reinit_char(context[37], ':');
            refalrts::reinit_name(context[38], functions[efunc_EscapeString]);
            refalrts::reinit_close_call(context[25]);
            refalrts::reinit_char(context[8], '\n');
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[85] );
            refalrts::push_stack( vm, context[84] );
            refalrts::push_stack( vm, context[79] );
            refalrts::push_stack( vm, context[78] );
            refalrts::push_stack( vm, context[75] );
            refalrts::push_stack( vm, context[74] );
            refalrts::push_stack( vm, context[69] );
            refalrts::push_stack( vm, context[68] );
            refalrts::push_stack( vm, context[52] );
            refalrts::push_stack( vm, context[25] );
            refalrts::push_stack( vm, context[66] );
            refalrts::push_stack( vm, context[63] );
            refalrts::push_stack( vm, context[61] );
            refalrts::push_stack( vm, context[59] );
            refalrts::push_stack( vm, context[57] );
            refalrts::push_stack( vm, context[51] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[19] );
            refalrts::push_stack( vm, context[13] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[78], context[89] );
            res = refalrts::splice_evar( res, context[43], context[44] );
            res = refalrts::splice_evar( res, context[67], context[77] );
            res = refalrts::splice_evar( res, context[38], context[25] );
            res = refalrts::splice_evar( res, context[63], context[66] );
            res = refalrts::splice_elem( res, context[48] );
            res = refalrts::splice_evar( res, context[59], context[62] );
            res = refalrts::splice_elem( res, context[47] );
            res = refalrts::splice_evar( res, context[49], context[58] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 # GN-Local/13 (/18 e.Name/30 )/19 t.SrcPos/24 e.Code/32 )/8 >/1
          context[30] = context[26];
          context[31] = context[27];
          context[32] = context[28];
          context[33] = context[29];
          // closed e.Name as range 30
          // closed e.Code as range 32
          //DEBUG: t.SrcPos: 24
          //DEBUG: s.FileHandle: 9
          //DEBUG: e.Name: 30
          //DEBUG: e.Code: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: </13 HalfReuse: & DisplayName/18 AsIs: e.Name/30 HalfReuse: >/19 }" :: native {"/34 >/36 </37 & Putout/38 s.FileHandle/9/39"  "/40 </42 & SrcPos*4/43 Tile{ AsIs: t.SrcPos/24 } >/44 >/45 </46 & Putout/47 s.FileHandle/9/48"    ======================================"/49 >/51 </52 & Map@4/53 s.FileHandle/9/54 Tile{ AsIs: e.Code/32 } >/55 </56 & Putout/57 s.FileHandle/9/58"    ======================================"/59 >/61 </62 & Putout/63 s.FileHandle/9/64"  }"/65 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[34], context[35], " :: native {", 12);
          refalrts::alloc_close_call(vm, context[36]);
          refalrts::alloc_open_call(vm, context[37]);
          refalrts::alloc_name(vm, context[38], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[39], context[9]);
          refalrts::alloc_chars(vm, context[40], context[41], "  ", 2);
          refalrts::alloc_open_call(vm, context[42]);
          refalrts::alloc_name(vm, context[43], functions[efunc_gen_SrcPos_D4]);
          refalrts::alloc_close_call(vm, context[44]);
          refalrts::alloc_close_call(vm, context[45]);
          refalrts::alloc_open_call(vm, context[46]);
          refalrts::alloc_name(vm, context[47], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[48], context[9]);
          refalrts::alloc_chars(vm, context[49], context[50], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[51]);
          refalrts::alloc_open_call(vm, context[52]);
          refalrts::alloc_name(vm, context[53], functions[efunc_gen_Map_Z4]);
          refalrts::copy_stvar(vm, context[54], context[9]);
          refalrts::alloc_close_call(vm, context[55]);
          refalrts::alloc_open_call(vm, context[56]);
          refalrts::alloc_name(vm, context[57], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[58], context[9]);
          refalrts::alloc_chars(vm, context[59], context[60], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[61]);
          refalrts::alloc_open_call(vm, context[62]);
          refalrts::alloc_name(vm, context[63], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[64], context[9]);
          refalrts::alloc_chars(vm, context[65], context[66], "  }", 3);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_char(context[7], ' ');
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[18], functions[efunc_DisplayName]);
          refalrts::reinit_close_call(context[19]);
          refalrts::reinit_char(context[8], '\n');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[62] );
          refalrts::push_stack( vm, context[61] );
          refalrts::push_stack( vm, context[56] );
          refalrts::push_stack( vm, context[55] );
          refalrts::push_stack( vm, context[52] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[46] );
          refalrts::push_stack( vm, context[45] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[44] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[36] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[19] );
          refalrts::push_stack( vm, context[13] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[55], context[66] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[44], context[54] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[34], context[43] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & PutProgramElement/4 s.new18/9 (/7 # CmdNativeFunction/10 # GN-Entry/13 (/18 e.new21/26 )/19 t.new19/24 e.new20/28 )/8 >/1
          context[26] = context[20];
          context[27] = context[21];
          context[28] = context[22];
          context[29] = context[23];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[13] ) )
            continue;
          // closed e.new21 as range 26
          // closed e.new20 as range 28
          do {
            // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 # GN-Entry/13 (/18 e.Name/30 )/19 s.LineNumber/24 e.Code/32 )/8 >/1
            context[30] = context[26];
            context[31] = context[27];
            context[32] = context[28];
            context[33] = context[29];
            if( ! refalrts::svar_term( context[24], context[24] ) )
              continue;
            // closed e.Name as range 30
            // closed e.Code as range 32
            //DEBUG: s.LineNumber: 24
            //DEBUG: s.FileHandle: 9
            //DEBUG: e.Name: 30
            //DEBUG: e.Code: 32

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: '$'/13 HalfReuse: 'E'/18 }"NTRY "/34 </36 & DisplayName/37 Tile{ AsIs: e.Name/30 } >/38" :: native {"/39 >/41 </42 & Putout/43 s.FileHandle/9/44"  #line "/45 </47 Tile{ HalfReuse: & Symb/19 AsIs: s.LineNumber/24 } >/48 >/49 </50 & Putout/51 s.FileHandle/9/52"    ======================================"/53 >/55 </56 & Map@4/57 s.FileHandle/9/58 Tile{ AsIs: e.Code/32 } >/59 </60 & Putout/61 s.FileHandle/9/62"    ======================================"/63 >/65 </66 & Putout/67 s.FileHandle/9/68"  }"/69 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[34], context[35], "NTRY ", 5);
            refalrts::alloc_open_call(vm, context[36]);
            refalrts::alloc_name(vm, context[37], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[38]);
            refalrts::alloc_chars(vm, context[39], context[40], " :: native {", 12);
            refalrts::alloc_close_call(vm, context[41]);
            refalrts::alloc_open_call(vm, context[42]);
            refalrts::alloc_name(vm, context[43], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[44], context[9]);
            refalrts::alloc_chars(vm, context[45], context[46], "  #line ", 8);
            refalrts::alloc_open_call(vm, context[47]);
            refalrts::alloc_close_call(vm, context[48]);
            refalrts::alloc_close_call(vm, context[49]);
            refalrts::alloc_open_call(vm, context[50]);
            refalrts::alloc_name(vm, context[51], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[52], context[9]);
            refalrts::alloc_chars(vm, context[53], context[54], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[55]);
            refalrts::alloc_open_call(vm, context[56]);
            refalrts::alloc_name(vm, context[57], functions[efunc_gen_Map_Z4]);
            refalrts::copy_stvar(vm, context[58], context[9]);
            refalrts::alloc_close_call(vm, context[59]);
            refalrts::alloc_open_call(vm, context[60]);
            refalrts::alloc_name(vm, context[61], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[62], context[9]);
            refalrts::alloc_chars(vm, context[63], context[64], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[65]);
            refalrts::alloc_open_call(vm, context[66]);
            refalrts::alloc_name(vm, context[67], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[68], context[9]);
            refalrts::alloc_chars(vm, context[69], context[70], "  }", 3);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[7], ' ');
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[13], '$');
            refalrts::reinit_char(context[18], 'E');
            refalrts::reinit_name(context[19], functions[efunc_Symb]);
            refalrts::reinit_char(context[8], '\n');
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[66] );
            refalrts::push_stack( vm, context[65] );
            refalrts::push_stack( vm, context[60] );
            refalrts::push_stack( vm, context[59] );
            refalrts::push_stack( vm, context[56] );
            refalrts::push_stack( vm, context[55] );
            refalrts::push_stack( vm, context[50] );
            refalrts::push_stack( vm, context[49] );
            refalrts::push_stack( vm, context[42] );
            refalrts::push_stack( vm, context[48] );
            refalrts::push_stack( vm, context[47] );
            refalrts::push_stack( vm, context[41] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[38] );
            refalrts::push_stack( vm, context[36] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[59], context[70] );
            res = refalrts::splice_evar( res, context[32], context[33] );
            res = refalrts::splice_evar( res, context[48], context[58] );
            res = refalrts::splice_evar( res, context[19], context[24] );
            res = refalrts::splice_evar( res, context[38], context[47] );
            res = refalrts::splice_evar( res, context[30], context[31] );
            res = refalrts::splice_evar( res, context[34], context[37] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & PutProgramElement/4 s.new22/9 (/7 # CmdNativeFunction/10 # GN-Entry/13 (/18 e.new27/30 )/19 (/24 s.new23/36 t.new24/37 e.new25/34 )/25 e.new26/32 )/8 >/1
            context[30] = context[26];
            context[31] = context[27];
            context[32] = context[28];
            context[33] = context[29];
            context[34] = 0;
            context[35] = 0;
            if( ! refalrts::brackets_term( context[34], context[35], context[24] ) )
              continue;
            // closed e.new27 as range 30
            // closed e.new26 as range 32
            if( ! refalrts::svar_left( context[36], context[34], context[35] ) )
              continue;
            context[38] = refalrts::tvar_left( context[37], context[34], context[35] );
            if( ! context[38] )
              continue;
            // closed e.new25 as range 34
            do {
              // </0 & PutProgramElement/4 s.new28/9 (/7 # CmdNativeFunction/10 # GN-Entry/13 (/18 e.new33/39 )/19 (/24 s.new29/36 s.new30/37 e.new31/41 )/25 e.new32/43 )/8 >/1
              context[39] = context[30];
              context[40] = context[31];
              context[41] = context[34];
              context[42] = context[35];
              context[43] = context[32];
              context[44] = context[33];
              if( ! refalrts::svar_term( context[37], context[37] ) )
                continue;
              // closed e.new33 as range 39
              // closed e.new31 as range 41
              // closed e.new32 as range 43
              do {
                // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 # GN-Entry/13 (/18 e.Name/45 )/19 (/24 # FileLine/36 s.Line/37 e.1/47 )/25 e.Code/49 )/8 >/1
                context[45] = context[39];
                context[46] = context[40];
                context[47] = context[41];
                context[48] = context[42];
                context[49] = context[43];
                context[50] = context[44];
                if( ! refalrts::ident_term( identifiers[ident_FileLine], context[36] ) )
                  continue;
                // closed e.Name as range 45
                // closed e.1 as range 47
                // closed e.Code as range 49
                //DEBUG: s.FileHandle: 9
                //DEBUG: s.Line: 37
                //DEBUG: e.Name: 45
                //DEBUG: e.1: 47
                //DEBUG: e.Code: 49

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: '$'/13 HalfReuse: 'E'/18 } Tile{ HalfReuse: 'N'/25 }"TRY "/51 </53 & DisplayName/54 Tile{ AsIs: e.Name/45 } >/55" :: native {"/56 >/58 </59 & Putout/60 s.FileHandle/9/61"  #line"/62 Tile{ HalfReuse: ' '/19 HalfReuse: </24 HalfReuse: & Symb/36 AsIs: s.Line/37 } >/64" \""/65 </67 & EscapeString/68 Tile{ AsIs: e.1/47 } >/69 '\"'/70 >/71 </72 & Putout/73 s.FileHandle/9/74"    ======================================"/75 >/77 </78 & Map@4/79 s.FileHandle/9/80 Tile{ AsIs: e.Code/49 } >/81 </82 & Putout/83 s.FileHandle/9/84"    ======================================"/85 >/87 </88 & Putout/89 s.FileHandle/9/90"  }"/91 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
                refalrts::alloc_chars(vm, context[51], context[52], "TRY ", 4);
                refalrts::alloc_open_call(vm, context[53]);
                refalrts::alloc_name(vm, context[54], functions[efunc_DisplayName]);
                refalrts::alloc_close_call(vm, context[55]);
                refalrts::alloc_chars(vm, context[56], context[57], " :: native {", 12);
                refalrts::alloc_close_call(vm, context[58]);
                refalrts::alloc_open_call(vm, context[59]);
                refalrts::alloc_name(vm, context[60], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[61], context[9]);
                refalrts::alloc_chars(vm, context[62], context[63], "  #line", 7);
                refalrts::alloc_close_call(vm, context[64]);
                refalrts::alloc_chars(vm, context[65], context[66], " \"", 2);
                refalrts::alloc_open_call(vm, context[67]);
                refalrts::alloc_name(vm, context[68], functions[efunc_EscapeString]);
                refalrts::alloc_close_call(vm, context[69]);
                refalrts::alloc_char(vm, context[70], '\"');
                refalrts::alloc_close_call(vm, context[71]);
                refalrts::alloc_open_call(vm, context[72]);
                refalrts::alloc_name(vm, context[73], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[74], context[9]);
                refalrts::alloc_chars(vm, context[75], context[76], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[77]);
                refalrts::alloc_open_call(vm, context[78]);
                refalrts::alloc_name(vm, context[79], functions[efunc_gen_Map_Z4]);
                refalrts::copy_stvar(vm, context[80], context[9]);
                refalrts::alloc_close_call(vm, context[81]);
                refalrts::alloc_open_call(vm, context[82]);
                refalrts::alloc_name(vm, context[83], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[84], context[9]);
                refalrts::alloc_chars(vm, context[85], context[86], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[87]);
                refalrts::alloc_open_call(vm, context[88]);
                refalrts::alloc_name(vm, context[89], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[90], context[9]);
                refalrts::alloc_chars(vm, context[91], context[92], "  }", 3);
                refalrts::update_name(context[4], functions[efunc_Putout]);
                refalrts::reinit_char(context[7], ' ');
                refalrts::reinit_char(context[10], ' ');
                refalrts::reinit_char(context[13], '$');
                refalrts::reinit_char(context[18], 'E');
                refalrts::reinit_char(context[25], 'N');
                refalrts::reinit_char(context[19], ' ');
                refalrts::reinit_open_call(context[24]);
                refalrts::reinit_name(context[36], functions[efunc_Symb]);
                refalrts::reinit_char(context[8], '\n');
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[88] );
                refalrts::push_stack( vm, context[87] );
                refalrts::push_stack( vm, context[82] );
                refalrts::push_stack( vm, context[81] );
                refalrts::push_stack( vm, context[78] );
                refalrts::push_stack( vm, context[77] );
                refalrts::push_stack( vm, context[72] );
                refalrts::push_stack( vm, context[71] );
                refalrts::push_stack( vm, context[59] );
                refalrts::push_stack( vm, context[69] );
                refalrts::push_stack( vm, context[67] );
                refalrts::push_stack( vm, context[64] );
                refalrts::push_stack( vm, context[24] );
                refalrts::push_stack( vm, context[58] );
                refalrts::push_stack( vm, context[0] );
                refalrts::push_stack( vm, context[55] );
                refalrts::push_stack( vm, context[53] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[8];
                res = refalrts::splice_evar( res, context[81], context[92] );
                res = refalrts::splice_evar( res, context[49], context[50] );
                res = refalrts::splice_evar( res, context[69], context[80] );
                res = refalrts::splice_evar( res, context[47], context[48] );
                res = refalrts::splice_evar( res, context[64], context[68] );
                res = refalrts::splice_evar( res, context[19], context[37] );
                res = refalrts::splice_evar( res, context[55], context[63] );
                res = refalrts::splice_evar( res, context[45], context[46] );
                res = refalrts::splice_evar( res, context[51], context[54] );
                res = refalrts::splice_elem( res, context[25] );
                refalrts::use( res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 # GN-Entry/13 (/18 e.Name/45 )/19 (/24 # RowCol/36 s.Row/37 s.Col/51 )/25 e.Code/49 )/8 >/1
              context[45] = context[39];
              context[46] = context[40];
              context[47] = context[41];
              context[48] = context[42];
              context[49] = context[43];
              context[50] = context[44];
              if( ! refalrts::ident_term( identifiers[ident_RowCol], context[36] ) )
                continue;
              // closed e.Name as range 45
              // closed e.Code as range 49
              if( ! refalrts::svar_left( context[51], context[47], context[48] ) )
                continue;
              if( ! refalrts::empty_seq( context[47], context[48] ) )
                continue;
              //DEBUG: s.FileHandle: 9
              //DEBUG: s.Row: 37
              //DEBUG: e.Name: 45
              //DEBUG: e.Code: 49
              //DEBUG: s.Col: 51

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: '$'/13 HalfReuse: 'E'/18 }"NTRY "/52 </54 & DisplayName/55 Tile{ AsIs: e.Name/45 } >/56" :: native {"/57 >/59 </60 & Putout/61 s.FileHandle/9/62"  #line"/63 Tile{ HalfReuse: ' '/19 HalfReuse: </24 HalfReuse: & Symb/36 AsIs: s.Row/37 } >/65 ':'/66 </67 & Symb/68 Tile{ AsIs: s.Col/51 HalfReuse: >/25 } >/69 </70 & Putout/71 s.FileHandle/9/72"    ======================================"/73 >/75 </76 & Map@4/77 s.FileHandle/9/78 Tile{ AsIs: e.Code/49 } >/79 </80 & Putout/81 s.FileHandle/9/82"    ======================================"/83 >/85 </86 & Putout/87 s.FileHandle/9/88"  }"/89 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[52], context[53], "NTRY ", 5);
              refalrts::alloc_open_call(vm, context[54]);
              refalrts::alloc_name(vm, context[55], functions[efunc_DisplayName]);
              refalrts::alloc_close_call(vm, context[56]);
              refalrts::alloc_chars(vm, context[57], context[58], " :: native {", 12);
              refalrts::alloc_close_call(vm, context[59]);
              refalrts::alloc_open_call(vm, context[60]);
              refalrts::alloc_name(vm, context[61], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[62], context[9]);
              refalrts::alloc_chars(vm, context[63], context[64], "  #line", 7);
              refalrts::alloc_close_call(vm, context[65]);
              refalrts::alloc_char(vm, context[66], ':');
              refalrts::alloc_open_call(vm, context[67]);
              refalrts::alloc_name(vm, context[68], functions[efunc_Symb]);
              refalrts::alloc_close_call(vm, context[69]);
              refalrts::alloc_open_call(vm, context[70]);
              refalrts::alloc_name(vm, context[71], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[72], context[9]);
              refalrts::alloc_chars(vm, context[73], context[74], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[75]);
              refalrts::alloc_open_call(vm, context[76]);
              refalrts::alloc_name(vm, context[77], functions[efunc_gen_Map_Z4]);
              refalrts::copy_stvar(vm, context[78], context[9]);
              refalrts::alloc_close_call(vm, context[79]);
              refalrts::alloc_open_call(vm, context[80]);
              refalrts::alloc_name(vm, context[81], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[82], context[9]);
              refalrts::alloc_chars(vm, context[83], context[84], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[85]);
              refalrts::alloc_open_call(vm, context[86]);
              refalrts::alloc_name(vm, context[87], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[88], context[9]);
              refalrts::alloc_chars(vm, context[89], context[90], "  }", 3);
              refalrts::update_name(context[4], functions[efunc_Putout]);
              refalrts::reinit_char(context[7], ' ');
              refalrts::reinit_char(context[10], ' ');
              refalrts::reinit_char(context[13], '$');
              refalrts::reinit_char(context[18], 'E');
              refalrts::reinit_char(context[19], ' ');
              refalrts::reinit_open_call(context[24]);
              refalrts::reinit_name(context[36], functions[efunc_Symb]);
              refalrts::reinit_close_call(context[25]);
              refalrts::reinit_char(context[8], '\n');
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[86] );
              refalrts::push_stack( vm, context[85] );
              refalrts::push_stack( vm, context[80] );
              refalrts::push_stack( vm, context[79] );
              refalrts::push_stack( vm, context[76] );
              refalrts::push_stack( vm, context[75] );
              refalrts::push_stack( vm, context[70] );
              refalrts::push_stack( vm, context[69] );
              refalrts::push_stack( vm, context[60] );
              refalrts::push_stack( vm, context[25] );
              refalrts::push_stack( vm, context[67] );
              refalrts::push_stack( vm, context[65] );
              refalrts::push_stack( vm, context[24] );
              refalrts::push_stack( vm, context[59] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[56] );
              refalrts::push_stack( vm, context[54] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[8];
              res = refalrts::splice_evar( res, context[79], context[90] );
              res = refalrts::splice_evar( res, context[49], context[50] );
              res = refalrts::splice_evar( res, context[69], context[78] );
              res = refalrts::splice_evar( res, context[51], context[25] );
              res = refalrts::splice_evar( res, context[65], context[68] );
              res = refalrts::splice_evar( res, context[19], context[37] );
              res = refalrts::splice_evar( res, context[56], context[64] );
              res = refalrts::splice_evar( res, context[45], context[46] );
              res = refalrts::splice_evar( res, context[52], context[55] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 # GN-Entry/13 (/18 e.Name/39 )/19 (/24 # FileRowCol/36 (/37 s.Row/47 s.Col/48 )/38 e.1/41 )/25 e.Code/43 )/8 >/1
            context[39] = context[30];
            context[40] = context[31];
            context[41] = context[34];
            context[42] = context[35];
            context[43] = context[32];
            context[44] = context[33];
            context[45] = 0;
            context[46] = 0;
            if( ! refalrts::brackets_term( context[45], context[46], context[37] ) )
              continue;
            if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[36] ) )
              continue;
            // closed e.Name as range 39
            // closed e.1 as range 41
            // closed e.Code as range 43
            if( ! refalrts::svar_left( context[47], context[45], context[46] ) )
              continue;
            if( ! refalrts::svar_left( context[48], context[45], context[46] ) )
              continue;
            if( ! refalrts::empty_seq( context[45], context[46] ) )
              continue;
            //DEBUG: s.FileHandle: 9
            //DEBUG: e.Name: 39
            //DEBUG: e.1: 41
            //DEBUG: e.Code: 43
            //DEBUG: s.Row: 47
            //DEBUG: s.Col: 48

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: '$'/13 HalfReuse: 'E'/18 }"NTRY "/49 </51 & DisplayName/52 Tile{ AsIs: e.Name/39 } >/53" :: native {"/54 >/56 </57 & Putout/58 s.FileHandle/9/59"  #lin"/60 Tile{ HalfReuse: 'e'/19 HalfReuse: ' '/24 HalfReuse: </36 HalfReuse: & Symb/37 AsIs: s.Row/47 } >/62 ':'/63 </64 & Symb/65 Tile{ AsIs: s.Col/48 } >/66" \""/67 </69 Tile{ HalfReuse: & EscapeString/38 AsIs: e.1/41 HalfReuse: >/25 } '\"'/70 >/71 </72 & Putout/73 s.FileHandle/9/74"    ======================================"/75 >/77 </78 & Map@4/79 s.FileHandle/9/80 Tile{ AsIs: e.Code/43 } >/81 </82 & Putout/83 s.FileHandle/9/84"    ======================================"/85 >/87 </88 & Putout/89 s.FileHandle/9/90"  }"/91 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[49], context[50], "NTRY ", 5);
            refalrts::alloc_open_call(vm, context[51]);
            refalrts::alloc_name(vm, context[52], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[53]);
            refalrts::alloc_chars(vm, context[54], context[55], " :: native {", 12);
            refalrts::alloc_close_call(vm, context[56]);
            refalrts::alloc_open_call(vm, context[57]);
            refalrts::alloc_name(vm, context[58], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[59], context[9]);
            refalrts::alloc_chars(vm, context[60], context[61], "  #lin", 6);
            refalrts::alloc_close_call(vm, context[62]);
            refalrts::alloc_char(vm, context[63], ':');
            refalrts::alloc_open_call(vm, context[64]);
            refalrts::alloc_name(vm, context[65], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[66]);
            refalrts::alloc_chars(vm, context[67], context[68], " \"", 2);
            refalrts::alloc_open_call(vm, context[69]);
            refalrts::alloc_char(vm, context[70], '\"');
            refalrts::alloc_close_call(vm, context[71]);
            refalrts::alloc_open_call(vm, context[72]);
            refalrts::alloc_name(vm, context[73], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[74], context[9]);
            refalrts::alloc_chars(vm, context[75], context[76], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[77]);
            refalrts::alloc_open_call(vm, context[78]);
            refalrts::alloc_name(vm, context[79], functions[efunc_gen_Map_Z4]);
            refalrts::copy_stvar(vm, context[80], context[9]);
            refalrts::alloc_close_call(vm, context[81]);
            refalrts::alloc_open_call(vm, context[82]);
            refalrts::alloc_name(vm, context[83], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[84], context[9]);
            refalrts::alloc_chars(vm, context[85], context[86], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[87]);
            refalrts::alloc_open_call(vm, context[88]);
            refalrts::alloc_name(vm, context[89], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[90], context[9]);
            refalrts::alloc_chars(vm, context[91], context[92], "  }", 3);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[7], ' ');
            refalrts::reinit_char(context[10], ' ');
            refalrts::reinit_char(context[13], '$');
            refalrts::reinit_char(context[18], 'E');
            refalrts::reinit_char(context[19], 'e');
            refalrts::reinit_char(context[24], ' ');
            refalrts::reinit_open_call(context[36]);
            refalrts::reinit_name(context[37], functions[efunc_Symb]);
            refalrts::reinit_name(context[38], functions[efunc_EscapeString]);
            refalrts::reinit_close_call(context[25]);
            refalrts::reinit_char(context[8], '\n');
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[88] );
            refalrts::push_stack( vm, context[87] );
            refalrts::push_stack( vm, context[82] );
            refalrts::push_stack( vm, context[81] );
            refalrts::push_stack( vm, context[78] );
            refalrts::push_stack( vm, context[77] );
            refalrts::push_stack( vm, context[72] );
            refalrts::push_stack( vm, context[71] );
            refalrts::push_stack( vm, context[57] );
            refalrts::push_stack( vm, context[25] );
            refalrts::push_stack( vm, context[69] );
            refalrts::push_stack( vm, context[66] );
            refalrts::push_stack( vm, context[64] );
            refalrts::push_stack( vm, context[62] );
            refalrts::push_stack( vm, context[36] );
            refalrts::push_stack( vm, context[56] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[53] );
            refalrts::push_stack( vm, context[51] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[81], context[92] );
            res = refalrts::splice_evar( res, context[43], context[44] );
            res = refalrts::splice_evar( res, context[70], context[80] );
            res = refalrts::splice_evar( res, context[38], context[25] );
            res = refalrts::splice_evar( res, context[66], context[69] );
            res = refalrts::splice_elem( res, context[48] );
            res = refalrts::splice_evar( res, context[62], context[65] );
            res = refalrts::splice_evar( res, context[19], context[47] );
            res = refalrts::splice_evar( res, context[53], context[61] );
            res = refalrts::splice_evar( res, context[39], context[40] );
            res = refalrts::splice_evar( res, context[49], context[52] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 # GN-Entry/13 (/18 e.Name/30 )/19 t.SrcPos/24 e.Code/32 )/8 >/1
          context[30] = context[26];
          context[31] = context[27];
          context[32] = context[28];
          context[33] = context[29];
          // closed e.Name as range 30
          // closed e.Code as range 32
          //DEBUG: t.SrcPos: 24
          //DEBUG: s.FileHandle: 9
          //DEBUG: e.Name: 30
          //DEBUG: e.Code: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: '$'/13 HalfReuse: 'E'/18 }"NTRY "/34 </36 & DisplayName/37 Tile{ AsIs: e.Name/30 } >/38" :: native {"/39 >/41 </42 & Putout/43 s.FileHandle/9/44"  "/45 </47 Tile{ HalfReuse: & SrcPos*4/19 AsIs: t.SrcPos/24 } >/48 >/49 </50 & Putout/51 s.FileHandle/9/52"    ======================================"/53 >/55 </56 & Map@4/57 s.FileHandle/9/58 Tile{ AsIs: e.Code/32 } >/59 </60 & Putout/61 s.FileHandle/9/62"    ======================================"/63 >/65 </66 & Putout/67 s.FileHandle/9/68"  }"/69 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[34], context[35], "NTRY ", 5);
          refalrts::alloc_open_call(vm, context[36]);
          refalrts::alloc_name(vm, context[37], functions[efunc_DisplayName]);
          refalrts::alloc_close_call(vm, context[38]);
          refalrts::alloc_chars(vm, context[39], context[40], " :: native {", 12);
          refalrts::alloc_close_call(vm, context[41]);
          refalrts::alloc_open_call(vm, context[42]);
          refalrts::alloc_name(vm, context[43], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[44], context[9]);
          refalrts::alloc_chars(vm, context[45], context[46], "  ", 2);
          refalrts::alloc_open_call(vm, context[47]);
          refalrts::alloc_close_call(vm, context[48]);
          refalrts::alloc_close_call(vm, context[49]);
          refalrts::alloc_open_call(vm, context[50]);
          refalrts::alloc_name(vm, context[51], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[52], context[9]);
          refalrts::alloc_chars(vm, context[53], context[54], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[55]);
          refalrts::alloc_open_call(vm, context[56]);
          refalrts::alloc_name(vm, context[57], functions[efunc_gen_Map_Z4]);
          refalrts::copy_stvar(vm, context[58], context[9]);
          refalrts::alloc_close_call(vm, context[59]);
          refalrts::alloc_open_call(vm, context[60]);
          refalrts::alloc_name(vm, context[61], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[62], context[9]);
          refalrts::alloc_chars(vm, context[63], context[64], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[65]);
          refalrts::alloc_open_call(vm, context[66]);
          refalrts::alloc_name(vm, context[67], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[68], context[9]);
          refalrts::alloc_chars(vm, context[69], context[70], "  }", 3);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_char(context[7], ' ');
          refalrts::reinit_char(context[10], ' ');
          refalrts::reinit_char(context[13], '$');
          refalrts::reinit_char(context[18], 'E');
          refalrts::reinit_name(context[19], functions[efunc_gen_SrcPos_D4]);
          refalrts::reinit_char(context[8], '\n');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[66] );
          refalrts::push_stack( vm, context[65] );
          refalrts::push_stack( vm, context[60] );
          refalrts::push_stack( vm, context[59] );
          refalrts::push_stack( vm, context[56] );
          refalrts::push_stack( vm, context[55] );
          refalrts::push_stack( vm, context[50] );
          refalrts::push_stack( vm, context[49] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[48] );
          refalrts::push_stack( vm, context[47] );
          refalrts::push_stack( vm, context[41] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[38] );
          refalrts::push_stack( vm, context[36] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[59], context[70] );
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[48], context[58] );
          res = refalrts::splice_evar( res, context[19], context[25] );
          res = refalrts::splice_evar( res, context[38], context[47] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[34], context[37] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 s.ScopeClass/13 (/18 e.Name/26 )/19 s.LineNumber/24 e.Code/28 )/8 >/1
          context[26] = context[20];
          context[27] = context[21];
          context[28] = context[22];
          context[29] = context[23];
          if( ! refalrts::svar_term( context[24], context[24] ) )
            continue;
          // closed e.Name as range 26
          // closed e.Code as range 28
          //DEBUG: s.LineNumber: 24
          //DEBUG: s.FileHandle: 9
          //DEBUG: s.ScopeClass: 13
          //DEBUG: e.Name: 26
          //DEBUG: e.Code: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: </7 HalfReuse: & FnName*2/10 AsIs: s.ScopeClass/13 } Tile{ AsIs: e.Name/26 } >/30 ' '/31 Tile{ HalfReuse: ':'/18 }": native {"/32 >/34 </35 & Putout/36 s.FileHandle/9/37"  #line "/38 </40 Tile{ HalfReuse: & Symb/19 AsIs: s.LineNumber/24 } >/41 >/42 </43 & Putout/44 s.FileHandle/9/45"    ======================================"/46 >/48 </49 & Map@4/50 s.FileHandle/9/51 Tile{ AsIs: e.Code/28 } >/52 </53 & Putout/54 s.FileHandle/9/55"    ======================================"/56 >/58 </59 & Putout/60 s.FileHandle/9/61"  }"/62 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
          refalrts::alloc_close_call(vm, context[30]);
          refalrts::alloc_char(vm, context[31], ' ');
          refalrts::alloc_chars(vm, context[32], context[33], ": native {", 10);
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::alloc_open_call(vm, context[35]);
          refalrts::alloc_name(vm, context[36], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[37], context[9]);
          refalrts::alloc_chars(vm, context[38], context[39], "  #line ", 8);
          refalrts::alloc_open_call(vm, context[40]);
          refalrts::alloc_close_call(vm, context[41]);
          refalrts::alloc_close_call(vm, context[42]);
          refalrts::alloc_open_call(vm, context[43]);
          refalrts::alloc_name(vm, context[44], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[45], context[9]);
          refalrts::alloc_chars(vm, context[46], context[47], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[48]);
          refalrts::alloc_open_call(vm, context[49]);
          refalrts::alloc_name(vm, context[50], functions[efunc_gen_Map_Z4]);
          refalrts::copy_stvar(vm, context[51], context[9]);
          refalrts::alloc_close_call(vm, context[52]);
          refalrts::alloc_open_call(vm, context[53]);
          refalrts::alloc_name(vm, context[54], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[55], context[9]);
          refalrts::alloc_chars(vm, context[56], context[57], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[58]);
          refalrts::alloc_open_call(vm, context[59]);
          refalrts::alloc_name(vm, context[60], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[61], context[9]);
          refalrts::alloc_chars(vm, context[62], context[63], "  }", 3);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[10], functions[efunc_gen_FnName_D2]);
          refalrts::reinit_char(context[18], ':');
          refalrts::reinit_name(context[19], functions[efunc_Symb]);
          refalrts::reinit_char(context[8], '\n');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[59] );
          refalrts::push_stack( vm, context[58] );
          refalrts::push_stack( vm, context[53] );
          refalrts::push_stack( vm, context[52] );
          refalrts::push_stack( vm, context[49] );
          refalrts::push_stack( vm, context[48] );
          refalrts::push_stack( vm, context[43] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[41] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[52], context[63] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[41], context[51] );
          res = refalrts::splice_evar( res, context[19], context[24] );
          res = refalrts::splice_evar( res, context[32], context[40] );
          res = refalrts::splice_elem( res, context[18] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & PutProgramElement/4 s.new18/9 (/7 # CmdNativeFunction/10 s.new19/13 (/18 e.new24/26 )/19 (/24 s.new20/32 t.new21/33 e.new22/30 )/25 e.new23/28 )/8 >/1
          context[26] = context[20];
          context[27] = context[21];
          context[28] = context[22];
          context[29] = context[23];
          context[30] = 0;
          context[31] = 0;
          if( ! refalrts::brackets_term( context[30], context[31], context[24] ) )
            continue;
          // closed e.new24 as range 26
          // closed e.new23 as range 28
          if( ! refalrts::svar_left( context[32], context[30], context[31] ) )
            continue;
          context[34] = refalrts::tvar_left( context[33], context[30], context[31] );
          if( ! context[34] )
            continue;
          // closed e.new22 as range 30
          do {
            // </0 & PutProgramElement/4 s.new25/9 (/7 # CmdNativeFunction/10 s.new26/13 (/18 e.new31/35 )/19 (/24 s.new27/32 s.new28/33 e.new29/37 )/25 e.new30/39 )/8 >/1
            context[35] = context[26];
            context[36] = context[27];
            context[37] = context[30];
            context[38] = context[31];
            context[39] = context[28];
            context[40] = context[29];
            if( ! refalrts::svar_term( context[33], context[33] ) )
              continue;
            // closed e.new31 as range 35
            // closed e.new29 as range 37
            // closed e.new30 as range 39
            do {
              // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 s.ScopeClass/13 (/18 e.Name/41 )/19 (/24 # FileLine/32 s.Line/33 e.1/43 )/25 e.Code/45 )/8 >/1
              context[41] = context[35];
              context[42] = context[36];
              context[43] = context[37];
              context[44] = context[38];
              context[45] = context[39];
              context[46] = context[40];
              if( ! refalrts::ident_term( identifiers[ident_FileLine], context[32] ) )
                continue;
              // closed e.Name as range 41
              // closed e.1 as range 43
              // closed e.Code as range 45
              //DEBUG: s.FileHandle: 9
              //DEBUG: s.ScopeClass: 13
              //DEBUG: s.Line: 33
              //DEBUG: e.Name: 41
              //DEBUG: e.1: 43
              //DEBUG: e.Code: 45

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: </7 HalfReuse: & FnName*2/10 AsIs: s.ScopeClass/13 } Tile{ AsIs: e.Name/41 } Tile{ HalfReuse: >/25 } Tile{ HalfReuse: ' '/18 }":: native {"/47 >/49 </50 & Putout/51 s.FileHandle/9/52"  #line"/53 Tile{ HalfReuse: ' '/19 HalfReuse: </24 HalfReuse: & Symb/32 AsIs: s.Line/33 } >/55" \""/56 </58 & EscapeString/59 Tile{ AsIs: e.1/43 } >/60 '\"'/61 >/62 </63 & Putout/64 s.FileHandle/9/65"    ======================================"/66 >/68 </69 & Map@4/70 s.FileHandle/9/71 Tile{ AsIs: e.Code/45 } >/72 </73 & Putout/74 s.FileHandle/9/75"    ======================================"/76 >/78 </79 & Putout/80 s.FileHandle/9/81"  }"/82 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[47], context[48], ":: native {", 11);
              refalrts::alloc_close_call(vm, context[49]);
              refalrts::alloc_open_call(vm, context[50]);
              refalrts::alloc_name(vm, context[51], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[52], context[9]);
              refalrts::alloc_chars(vm, context[53], context[54], "  #line", 7);
              refalrts::alloc_close_call(vm, context[55]);
              refalrts::alloc_chars(vm, context[56], context[57], " \"", 2);
              refalrts::alloc_open_call(vm, context[58]);
              refalrts::alloc_name(vm, context[59], functions[efunc_EscapeString]);
              refalrts::alloc_close_call(vm, context[60]);
              refalrts::alloc_char(vm, context[61], '\"');
              refalrts::alloc_close_call(vm, context[62]);
              refalrts::alloc_open_call(vm, context[63]);
              refalrts::alloc_name(vm, context[64], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[65], context[9]);
              refalrts::alloc_chars(vm, context[66], context[67], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[68]);
              refalrts::alloc_open_call(vm, context[69]);
              refalrts::alloc_name(vm, context[70], functions[efunc_gen_Map_Z4]);
              refalrts::copy_stvar(vm, context[71], context[9]);
              refalrts::alloc_close_call(vm, context[72]);
              refalrts::alloc_open_call(vm, context[73]);
              refalrts::alloc_name(vm, context[74], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[75], context[9]);
              refalrts::alloc_chars(vm, context[76], context[77], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[78]);
              refalrts::alloc_open_call(vm, context[79]);
              refalrts::alloc_name(vm, context[80], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[81], context[9]);
              refalrts::alloc_chars(vm, context[82], context[83], "  }", 3);
              refalrts::update_name(context[4], functions[efunc_Putout]);
              refalrts::reinit_open_call(context[7]);
              refalrts::reinit_name(context[10], functions[efunc_gen_FnName_D2]);
              refalrts::reinit_close_call(context[25]);
              refalrts::reinit_char(context[18], ' ');
              refalrts::reinit_char(context[19], ' ');
              refalrts::reinit_open_call(context[24]);
              refalrts::reinit_name(context[32], functions[efunc_Symb]);
              refalrts::reinit_char(context[8], '\n');
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[79] );
              refalrts::push_stack( vm, context[78] );
              refalrts::push_stack( vm, context[73] );
              refalrts::push_stack( vm, context[72] );
              refalrts::push_stack( vm, context[69] );
              refalrts::push_stack( vm, context[68] );
              refalrts::push_stack( vm, context[63] );
              refalrts::push_stack( vm, context[62] );
              refalrts::push_stack( vm, context[50] );
              refalrts::push_stack( vm, context[60] );
              refalrts::push_stack( vm, context[58] );
              refalrts::push_stack( vm, context[55] );
              refalrts::push_stack( vm, context[24] );
              refalrts::push_stack( vm, context[49] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[25] );
              refalrts::push_stack( vm, context[7] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[8];
              res = refalrts::splice_evar( res, context[72], context[83] );
              res = refalrts::splice_evar( res, context[45], context[46] );
              res = refalrts::splice_evar( res, context[60], context[71] );
              res = refalrts::splice_evar( res, context[43], context[44] );
              res = refalrts::splice_evar( res, context[55], context[59] );
              res = refalrts::splice_evar( res, context[19], context[33] );
              res = refalrts::splice_evar( res, context[47], context[54] );
              res = refalrts::splice_elem( res, context[18] );
              res = refalrts::splice_elem( res, context[25] );
              res = refalrts::splice_evar( res, context[41], context[42] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 s.ScopeClass/13 (/18 e.Name/41 )/19 (/24 # RowCol/32 s.Row/33 s.Col/47 )/25 e.Code/45 )/8 >/1
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            context[46] = context[40];
            if( ! refalrts::ident_term( identifiers[ident_RowCol], context[32] ) )
              continue;
            // closed e.Name as range 41
            // closed e.Code as range 45
            if( ! refalrts::svar_left( context[47], context[43], context[44] ) )
              continue;
            if( ! refalrts::empty_seq( context[43], context[44] ) )
              continue;
            //DEBUG: s.FileHandle: 9
            //DEBUG: s.ScopeClass: 13
            //DEBUG: s.Row: 33
            //DEBUG: e.Name: 41
            //DEBUG: e.Code: 45
            //DEBUG: s.Col: 47

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: </7 HalfReuse: & FnName*2/10 AsIs: s.ScopeClass/13 } Tile{ AsIs: e.Name/41 } >/48 ' '/49 Tile{ HalfReuse: ':'/18 }": native {"/50 >/52 </53 & Putout/54 s.FileHandle/9/55"  #line"/56 Tile{ HalfReuse: ' '/19 HalfReuse: </24 HalfReuse: & Symb/32 AsIs: s.Row/33 } >/58 ':'/59 </60 & Symb/61 Tile{ AsIs: s.Col/47 HalfReuse: >/25 } >/62 </63 & Putout/64 s.FileHandle/9/65"    ======================================"/66 >/68 </69 & Map@4/70 s.FileHandle/9/71 Tile{ AsIs: e.Code/45 } >/72 </73 & Putout/74 s.FileHandle/9/75"    ======================================"/76 >/78 </79 & Putout/80 s.FileHandle/9/81"  }"/82 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
            refalrts::alloc_close_call(vm, context[48]);
            refalrts::alloc_char(vm, context[49], ' ');
            refalrts::alloc_chars(vm, context[50], context[51], ": native {", 10);
            refalrts::alloc_close_call(vm, context[52]);
            refalrts::alloc_open_call(vm, context[53]);
            refalrts::alloc_name(vm, context[54], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[55], context[9]);
            refalrts::alloc_chars(vm, context[56], context[57], "  #line", 7);
            refalrts::alloc_close_call(vm, context[58]);
            refalrts::alloc_char(vm, context[59], ':');
            refalrts::alloc_open_call(vm, context[60]);
            refalrts::alloc_name(vm, context[61], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[62]);
            refalrts::alloc_open_call(vm, context[63]);
            refalrts::alloc_name(vm, context[64], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[65], context[9]);
            refalrts::alloc_chars(vm, context[66], context[67], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[68]);
            refalrts::alloc_open_call(vm, context[69]);
            refalrts::alloc_name(vm, context[70], functions[efunc_gen_Map_Z4]);
            refalrts::copy_stvar(vm, context[71], context[9]);
            refalrts::alloc_close_call(vm, context[72]);
            refalrts::alloc_open_call(vm, context[73]);
            refalrts::alloc_name(vm, context[74], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[75], context[9]);
            refalrts::alloc_chars(vm, context[76], context[77], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[78]);
            refalrts::alloc_open_call(vm, context[79]);
            refalrts::alloc_name(vm, context[80], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[81], context[9]);
            refalrts::alloc_chars(vm, context[82], context[83], "  }", 3);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_open_call(context[7]);
            refalrts::reinit_name(context[10], functions[efunc_gen_FnName_D2]);
            refalrts::reinit_char(context[18], ':');
            refalrts::reinit_char(context[19], ' ');
            refalrts::reinit_open_call(context[24]);
            refalrts::reinit_name(context[32], functions[efunc_Symb]);
            refalrts::reinit_close_call(context[25]);
            refalrts::reinit_char(context[8], '\n');
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[79] );
            refalrts::push_stack( vm, context[78] );
            refalrts::push_stack( vm, context[73] );
            refalrts::push_stack( vm, context[72] );
            refalrts::push_stack( vm, context[69] );
            refalrts::push_stack( vm, context[68] );
            refalrts::push_stack( vm, context[63] );
            refalrts::push_stack( vm, context[62] );
            refalrts::push_stack( vm, context[53] );
            refalrts::push_stack( vm, context[25] );
            refalrts::push_stack( vm, context[60] );
            refalrts::push_stack( vm, context[58] );
            refalrts::push_stack( vm, context[24] );
            refalrts::push_stack( vm, context[52] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[48] );
            refalrts::push_stack( vm, context[7] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[8];
            res = refalrts::splice_evar( res, context[72], context[83] );
            res = refalrts::splice_evar( res, context[45], context[46] );
            res = refalrts::splice_evar( res, context[62], context[71] );
            res = refalrts::splice_evar( res, context[47], context[25] );
            res = refalrts::splice_evar( res, context[58], context[61] );
            res = refalrts::splice_evar( res, context[19], context[33] );
            res = refalrts::splice_evar( res, context[50], context[57] );
            res = refalrts::splice_elem( res, context[18] );
            res = refalrts::splice_evar( res, context[48], context[49] );
            res = refalrts::splice_evar( res, context[41], context[42] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 s.ScopeClass/13 (/18 e.Name/35 )/19 (/24 # FileRowCol/32 (/33 s.Row/43 s.Col/44 )/34 e.1/37 )/25 e.Code/39 )/8 >/1
          context[35] = context[26];
          context[36] = context[27];
          context[37] = context[30];
          context[38] = context[31];
          context[39] = context[28];
          context[40] = context[29];
          context[41] = 0;
          context[42] = 0;
          if( ! refalrts::brackets_term( context[41], context[42], context[33] ) )
            continue;
          if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[32] ) )
            continue;
          // closed e.Name as range 35
          // closed e.1 as range 37
          // closed e.Code as range 39
          if( ! refalrts::svar_left( context[43], context[41], context[42] ) )
            continue;
          if( ! refalrts::svar_left( context[44], context[41], context[42] ) )
            continue;
          if( ! refalrts::empty_seq( context[41], context[42] ) )
            continue;
          //DEBUG: s.FileHandle: 9
          //DEBUG: s.ScopeClass: 13
          //DEBUG: e.Name: 35
          //DEBUG: e.1: 37
          //DEBUG: e.Code: 39
          //DEBUG: s.Row: 43
          //DEBUG: s.Col: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: </7 HalfReuse: & FnName*2/10 AsIs: s.ScopeClass/13 } Tile{ AsIs: e.Name/35 } >/45" :"/46 Tile{ HalfReuse: ':'/18 }" native {"/48 >/50 </51 & Putout/52 s.FileHandle/9/53"  #lin"/54 Tile{ HalfReuse: 'e'/19 HalfReuse: ' '/24 HalfReuse: </32 HalfReuse: & Symb/33 AsIs: s.Row/43 } >/56 ':'/57 </58 & Symb/59 Tile{ AsIs: s.Col/44 } >/60" \""/61 </63 Tile{ HalfReuse: & EscapeString/34 AsIs: e.1/37 HalfReuse: >/25 } '\"'/64 >/65 </66 & Putout/67 s.FileHandle/9/68"    ======================================"/69 >/71 </72 & Map@4/73 s.FileHandle/9/74 Tile{ AsIs: e.Code/39 } >/75 </76 & Putout/77 s.FileHandle/9/78"    ======================================"/79 >/81 </82 & Putout/83 s.FileHandle/9/84"  }"/85 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
          refalrts::alloc_close_call(vm, context[45]);
          refalrts::alloc_chars(vm, context[46], context[47], " :", 2);
          refalrts::alloc_chars(vm, context[48], context[49], " native {", 9);
          refalrts::alloc_close_call(vm, context[50]);
          refalrts::alloc_open_call(vm, context[51]);
          refalrts::alloc_name(vm, context[52], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[53], context[9]);
          refalrts::alloc_chars(vm, context[54], context[55], "  #lin", 6);
          refalrts::alloc_close_call(vm, context[56]);
          refalrts::alloc_char(vm, context[57], ':');
          refalrts::alloc_open_call(vm, context[58]);
          refalrts::alloc_name(vm, context[59], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[60]);
          refalrts::alloc_chars(vm, context[61], context[62], " \"", 2);
          refalrts::alloc_open_call(vm, context[63]);
          refalrts::alloc_char(vm, context[64], '\"');
          refalrts::alloc_close_call(vm, context[65]);
          refalrts::alloc_open_call(vm, context[66]);
          refalrts::alloc_name(vm, context[67], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[68], context[9]);
          refalrts::alloc_chars(vm, context[69], context[70], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[71]);
          refalrts::alloc_open_call(vm, context[72]);
          refalrts::alloc_name(vm, context[73], functions[efunc_gen_Map_Z4]);
          refalrts::copy_stvar(vm, context[74], context[9]);
          refalrts::alloc_close_call(vm, context[75]);
          refalrts::alloc_open_call(vm, context[76]);
          refalrts::alloc_name(vm, context[77], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[78], context[9]);
          refalrts::alloc_chars(vm, context[79], context[80], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[81]);
          refalrts::alloc_open_call(vm, context[82]);
          refalrts::alloc_name(vm, context[83], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[84], context[9]);
          refalrts::alloc_chars(vm, context[85], context[86], "  }", 3);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[10], functions[efunc_gen_FnName_D2]);
          refalrts::reinit_char(context[18], ':');
          refalrts::reinit_char(context[19], 'e');
          refalrts::reinit_char(context[24], ' ');
          refalrts::reinit_open_call(context[32]);
          refalrts::reinit_name(context[33], functions[efunc_Symb]);
          refalrts::reinit_name(context[34], functions[efunc_EscapeString]);
          refalrts::reinit_close_call(context[25]);
          refalrts::reinit_char(context[8], '\n');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[82] );
          refalrts::push_stack( vm, context[81] );
          refalrts::push_stack( vm, context[76] );
          refalrts::push_stack( vm, context[75] );
          refalrts::push_stack( vm, context[72] );
          refalrts::push_stack( vm, context[71] );
          refalrts::push_stack( vm, context[66] );
          refalrts::push_stack( vm, context[65] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[25] );
          refalrts::push_stack( vm, context[63] );
          refalrts::push_stack( vm, context[60] );
          refalrts::push_stack( vm, context[58] );
          refalrts::push_stack( vm, context[56] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[50] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[45] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[75], context[86] );
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_evar( res, context[64], context[74] );
          res = refalrts::splice_evar( res, context[34], context[25] );
          res = refalrts::splice_evar( res, context[60], context[63] );
          res = refalrts::splice_elem( res, context[44] );
          res = refalrts::splice_evar( res, context[56], context[59] );
          res = refalrts::splice_evar( res, context[19], context[43] );
          res = refalrts::splice_evar( res, context[48], context[55] );
          res = refalrts::splice_elem( res, context[18] );
          res = refalrts::splice_evar( res, context[45], context[47] );
          res = refalrts::splice_evar( res, context[35], context[36] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdNativeFunction/10 s.ScopeClass/13 (/18 e.Name/26 )/19 t.SrcPos/24 e.Code/28 )/8 >/1
        context[26] = context[20];
        context[27] = context[21];
        context[28] = context[22];
        context[29] = context[23];
        // closed e.Name as range 26
        // closed e.Code as range 28
        //DEBUG: t.SrcPos: 24
        //DEBUG: s.FileHandle: 9
        //DEBUG: s.ScopeClass: 13
        //DEBUG: e.Name: 26
        //DEBUG: e.Code: 28

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: </7 HalfReuse: & FnName*2/10 AsIs: s.ScopeClass/13 } Tile{ AsIs: e.Name/26 } >/30 ' '/31 Tile{ HalfReuse: ':'/18 }": native {"/32 >/34 </35 & Putout/36 s.FileHandle/9/37"  "/38 </40 Tile{ HalfReuse: & SrcPos*4/19 AsIs: t.SrcPos/24 } >/41 >/42 </43 & Putout/44 s.FileHandle/9/45"    ======================================"/46 >/48 </49 & Map@4/50 s.FileHandle/9/51 Tile{ AsIs: e.Code/28 } >/52 </53 & Putout/54 s.FileHandle/9/55"    ======================================"/56 >/58 </59 & Putout/60 s.FileHandle/9/61"  }"/62 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[30]);
        refalrts::alloc_char(vm, context[31], ' ');
        refalrts::alloc_chars(vm, context[32], context[33], ": native {", 10);
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[37], context[9]);
        refalrts::alloc_chars(vm, context[38], context[39], "  ", 2);
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::alloc_close_call(vm, context[42]);
        refalrts::alloc_open_call(vm, context[43]);
        refalrts::alloc_name(vm, context[44], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[45], context[9]);
        refalrts::alloc_chars(vm, context[46], context[47], "    ======================================", 42);
        refalrts::alloc_close_call(vm, context[48]);
        refalrts::alloc_open_call(vm, context[49]);
        refalrts::alloc_name(vm, context[50], functions[efunc_gen_Map_Z4]);
        refalrts::copy_stvar(vm, context[51], context[9]);
        refalrts::alloc_close_call(vm, context[52]);
        refalrts::alloc_open_call(vm, context[53]);
        refalrts::alloc_name(vm, context[54], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[55], context[9]);
        refalrts::alloc_chars(vm, context[56], context[57], "    ======================================", 42);
        refalrts::alloc_close_call(vm, context[58]);
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_name(vm, context[60], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[61], context[9]);
        refalrts::alloc_chars(vm, context[62], context[63], "  }", 3);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[10], functions[efunc_gen_FnName_D2]);
        refalrts::reinit_char(context[18], ':');
        refalrts::reinit_name(context[19], functions[efunc_gen_SrcPos_D4]);
        refalrts::reinit_char(context[8], '\n');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[59] );
        refalrts::push_stack( vm, context[58] );
        refalrts::push_stack( vm, context[53] );
        refalrts::push_stack( vm, context[52] );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[48] );
        refalrts::push_stack( vm, context[43] );
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[52], context[63] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[41], context[51] );
        res = refalrts::splice_evar( res, context[19], context[25] );
        res = refalrts::splice_evar( res, context[32], context[40] );
        res = refalrts::splice_elem( res, context[18] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & PutProgramElement/4 s.new13/9 (/7 # CmdMetatable/10 s.new14/13 (/18 e.new16/20 )/19 e.new15/22 )/8 >/1
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[14];
      context[23] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[10] ) )
        continue;
      // closed e.new16 as range 20
      // closed e.new15 as range 22
      do {
        // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdMetatable/10 # GN-Local/13 (/18 e.Name/24 )/19 e.Metatable/26 )/8 >/1
        context[24] = context[20];
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[13] ) )
          continue;
        // closed e.Name as range 24
        // closed e.Metatable as range 26
        //DEBUG: s.FileHandle: 9
        //DEBUG: e.Name: 24
        //DEBUG: e.Metatable: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: </13 HalfReuse: & DisplayName/18 AsIs: e.Name/24 HalfReuse: >/19 }" :: metatable {"/28 >/30 </31 & Map@5/32 s.FileHandle/9/33 Tile{ AsIs: e.Metatable/26 } >/34 </35 & Putout/36 s.FileHandle/9/37"  }"/38 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[28], context[29], " :: metatable {", 15);
        refalrts::alloc_close_call(vm, context[30]);
        refalrts::alloc_open_call(vm, context[31]);
        refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z5]);
        refalrts::copy_stvar(vm, context[33], context[9]);
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[37], context[9]);
        refalrts::alloc_chars(vm, context[38], context[39], "  }", 3);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[7], ' ');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[18], functions[efunc_DisplayName]);
        refalrts::reinit_close_call(context[19]);
        refalrts::reinit_char(context[8], '\n');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[34], context[39] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[28], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdMetatable/10 # GN-Entry/13 (/18 e.Name/24 )/19 e.Metatable/26 )/8 >/1
        context[24] = context[20];
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[13] ) )
          continue;
        // closed e.Name as range 24
        // closed e.Metatable as range 26
        //DEBUG: s.FileHandle: 9
        //DEBUG: e.Name: 24
        //DEBUG: e.Metatable: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: '$'/13 HalfReuse: 'E'/18 }"NT"/28 Tile{ HalfReuse: 'R'/19 }"Y "/30 </32 & DisplayName/33 Tile{ AsIs: e.Name/24 } >/34" :: metatable {"/35 >/37 </38 & Map@5/39 s.FileHandle/9/40 Tile{ AsIs: e.Metatable/26 } >/41 </42 & Putout/43 s.FileHandle/9/44"  }"/45 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[28], context[29], "NT", 2);
        refalrts::alloc_chars(vm, context[30], context[31], "Y ", 2);
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_DisplayName]);
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::alloc_chars(vm, context[35], context[36], " :: metatable {", 15);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_name(vm, context[39], functions[efunc_gen_Map_Z5]);
        refalrts::copy_stvar(vm, context[40], context[9]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::alloc_open_call(vm, context[42]);
        refalrts::alloc_name(vm, context[43], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[44], context[9]);
        refalrts::alloc_chars(vm, context[45], context[46], "  }", 3);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[7], ' ');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_char(context[13], '$');
        refalrts::reinit_char(context[18], 'E');
        refalrts::reinit_char(context[19], 'R');
        refalrts::reinit_char(context[8], '\n');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[32] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[41], context[46] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[34], context[40] );
        res = refalrts::splice_evar( res, context[24], context[25] );
        res = refalrts::splice_evar( res, context[30], context[33] );
        res = refalrts::splice_elem( res, context[19] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdMetatable/10 s.ScopeClass/13 (/18 e.Name/24 )/19 e.Metatable/26 )/8 >/1
      context[24] = context[20];
      context[25] = context[21];
      context[26] = context[22];
      context[27] = context[23];
      // closed e.Name as range 24
      // closed e.Metatable as range 26
      //DEBUG: s.FileHandle: 9
      //DEBUG: s.ScopeClass: 13
      //DEBUG: e.Name: 24
      //DEBUG: e.Metatable: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: </7 HalfReuse: & FnName*2/10 AsIs: s.ScopeClass/13 } Tile{ AsIs: e.Name/24 } Tile{ HalfReuse: >/18 } Tile{ HalfReuse: ' '/19 }":: metatable {"/28 >/30 </31 & Map@5/32 s.FileHandle/9/33 Tile{ AsIs: e.Metatable/26 } >/34 </35 & Putout/36 s.FileHandle/9/37"  }"/38 Tile{ HalfReuse: '\n'/8 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[28], context[29], ":: metatable {", 14);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z5]);
      refalrts::copy_stvar(vm, context[33], context[9]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[37], context[9]);
      refalrts::alloc_chars(vm, context[38], context[39], "  }", 3);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[10], functions[efunc_gen_FnName_D2]);
      refalrts::reinit_close_call(context[18]);
      refalrts::reinit_char(context[19], ' ');
      refalrts::reinit_char(context[8], '\n');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[18] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[34], context[39] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[28], context[33] );
      res = refalrts::splice_elem( res, context[19] );
      res = refalrts::splice_elem( res, context[18] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutProgramElement/4 s.new8/9 (/7 # CmdEnum/10 s.new9/13 e.new10/14 )/8 >/1
      context[14] = context[11];
      context[15] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[10] ) )
        continue;
      // closed e.new10 as range 14
      do {
        // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdEnum/10 # GN-Local/13 e.Name/16 )/8 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[13] ) )
          continue;
        // closed e.Name as range 16
        //DEBUG: s.FileHandle: 9
        //DEBUG: e.Name: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: </13 } & DisplayName/18 Tile{ AsIs: e.Name/16 } >/19" :: enu"/20 Tile{ HalfReuse: 'm'/8 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[18], functions[efunc_DisplayName]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::alloc_chars(vm, context[20], context[21], " :: enu", 7);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[7], ' ');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_char(context[8], 'm');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[19], context[21] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdEnum/10 # GN-Entry/13 e.Name/16 )/8 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[13] ) )
          continue;
        // closed e.Name as range 16
        //DEBUG: s.FileHandle: 9
        //DEBUG: e.Name: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: '$'/13 }"ENTRY "/18 </20 & DisplayName/21 Tile{ AsIs: e.Name/16 } >/22" :: enu"/23 Tile{ HalfReuse: 'm'/8 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[18], context[19], "ENTRY ", 6);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_DisplayName]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_chars(vm, context[23], context[24], " :: enu", 7);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[7], ' ');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_char(context[13], '$');
        refalrts::reinit_char(context[8], 'm');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[24] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdEnum/10 s.ScopeClass/13 e.Name/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      // closed e.Name as range 16
      //DEBUG: s.FileHandle: 9
      //DEBUG: s.ScopeClass: 13
      //DEBUG: e.Name: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: </7 HalfReuse: & FnName*2/10 AsIs: s.ScopeClass/13 AsIs: e.Name/16 HalfReuse: >/8 HalfReuse: ' '/1 }":: enum"/18 >/20 Tile{ ]] }
      refalrts::alloc_chars(vm, context[18], context[19], ":: enum", 7);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[10], functions[efunc_gen_FnName_D2]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_char(context[1], ' ');
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutProgramElement/4 s.new8/9 (/7 # CmdSwap/10 s.new9/13 e.new10/14 )/8 >/1
      context[14] = context[11];
      context[15] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[10] ) )
        continue;
      // closed e.new10 as range 14
      do {
        // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdSwap/10 # GN-Local/13 e.Name/16 )/8 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[13] ) )
          continue;
        // closed e.Name as range 16
        //DEBUG: s.FileHandle: 9
        //DEBUG: e.Name: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: </13 } & DisplayName/18 Tile{ AsIs: e.Name/16 } >/19" :: swa"/20 Tile{ HalfReuse: 'p'/8 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[18], functions[efunc_DisplayName]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::alloc_chars(vm, context[20], context[21], " :: swa", 7);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[7], ' ');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_char(context[8], 'p');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[19], context[21] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdSwap/10 # GN-Entry/13 e.Name/16 )/8 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[13] ) )
          continue;
        // closed e.Name as range 16
        //DEBUG: s.FileHandle: 9
        //DEBUG: e.Name: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: '$'/13 }"ENTRY "/18 </20 & DisplayName/21 Tile{ AsIs: e.Name/16 } >/22" :: swa"/23 Tile{ HalfReuse: 'p'/8 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[18], context[19], "ENTRY ", 6);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_DisplayName]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_chars(vm, context[23], context[24], " :: swa", 7);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[7], ' ');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_char(context[13], '$');
        refalrts::reinit_char(context[8], 'p');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[24] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdSwap/10 s.ScopeClass/13 e.Name/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      // closed e.Name as range 16
      //DEBUG: s.FileHandle: 9
      //DEBUG: s.ScopeClass: 13
      //DEBUG: e.Name: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: </7 HalfReuse: & FnName*2/10 AsIs: s.ScopeClass/13 AsIs: e.Name/16 HalfReuse: >/8 HalfReuse: ' '/1 }":: swap"/18 >/20 Tile{ ]] }
      refalrts::alloc_chars(vm, context[18], context[19], ":: swap", 7);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[10], functions[efunc_gen_FnName_D2]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_char(context[1], ' ');
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutProgramElement/4 s.new8/9 (/7 # CmdConditionFunc/10 s.new9/13 e.new10/14 )/8 >/1
      context[14] = context[11];
      context[15] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[10] ) )
        continue;
      // closed e.new10 as range 14
      do {
        // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdConditionFunc/10 # GN-Local/13 e.Name/16 )/8 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[13] ) )
          continue;
        // closed e.Name as range 16
        //DEBUG: s.FileHandle: 9
        //DEBUG: e.Name: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: </13 } & DisplayName/18 Tile{ AsIs: e.Name/16 } >/19" :: conditio"/20 Tile{ HalfReuse: 'n'/8 AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[18], functions[efunc_DisplayName]);
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::alloc_chars(vm, context[20], context[21], " :: conditio", 12);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[7], ' ');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_char(context[8], 'n');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[13] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[19], context[21] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_elem( res, context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdConditionFunc/10 # GN-Entry/13 e.Name/16 )/8 >/1
        context[16] = context[14];
        context[17] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[13] ) )
          continue;
        // closed e.Name as range 16
        //DEBUG: s.FileHandle: 9
        //DEBUG: e.Name: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: '$'/13 }"ENTRY "/18 </20 & DisplayName/21 Tile{ AsIs: e.Name/16 } >/22" :: conditio"/23 Tile{ HalfReuse: 'n'/8 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[18], context[19], "ENTRY ", 6);
        refalrts::alloc_open_call(vm, context[20]);
        refalrts::alloc_name(vm, context[21], functions[efunc_DisplayName]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_chars(vm, context[23], context[24], " :: conditio", 12);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[7], ' ');
        refalrts::reinit_char(context[10], ' ');
        refalrts::reinit_char(context[13], '$');
        refalrts::reinit_char(context[8], 'n');
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[22], context[24] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[18], context[21] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdConditionFunc/10 s.ScopeClass/13 e.Name/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      // closed e.Name as range 16
      //DEBUG: s.FileHandle: 9
      //DEBUG: s.ScopeClass: 13
      //DEBUG: e.Name: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: </7 HalfReuse: & FnName*2/10 AsIs: s.ScopeClass/13 AsIs: e.Name/16 HalfReuse: >/8 HalfReuse: ' '/1 }":: condition"/18 >/20 Tile{ ]] }
      refalrts::alloc_chars(vm, context[18], context[19], ":: condition", 12);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[10], functions[efunc_gen_FnName_D2]);
      refalrts::reinit_close_call(context[8]);
      refalrts::reinit_char(context[1], ' ');
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[18], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PutProgramElement/4 s.new8/9 (/7 # CmdDeclaration/10 s.new9/13 e.new10/14 )/8 >/1
    context[14] = context[11];
    context[15] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[10] ) )
      continue;
    // closed e.new10 as range 14
    do {
      // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdDeclaration/10 # GN-Local/13 e.Name/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[13] ) )
        continue;
      // closed e.Name as range 16
      //DEBUG: s.FileHandle: 9
      //DEBUG: e.Name: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: </13 } & DisplayName/18 Tile{ AsIs: e.Name/16 } >/19" :: exter"/20 Tile{ HalfReuse: 'n'/8 AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[18], functions[efunc_DisplayName]);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_chars(vm, context[20], context[21], " :: exter", 9);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[7], ' ');
      refalrts::reinit_char(context[10], ' ');
      refalrts::reinit_open_call(context[13]);
      refalrts::reinit_char(context[8], 'n');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdDeclaration/10 # GN-Entry/13 e.Name/16 )/8 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[13] ) )
        continue;
      // closed e.Name as range 16
      //DEBUG: s.FileHandle: 9
      //DEBUG: e.Name: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: ' '/7 HalfReuse: ' '/10 HalfReuse: '$'/13 }"ENTRY "/18 </20 & DisplayName/21 Tile{ AsIs: e.Name/16 } >/22" :: exter"/23 Tile{ HalfReuse: 'n'/8 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[18], context[19], "ENTRY ", 6);
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_DisplayName]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_chars(vm, context[23], context[24], " :: exter", 9);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[7], ' ');
      refalrts::reinit_char(context[10], ' ');
      refalrts::reinit_char(context[13], '$');
      refalrts::reinit_char(context[8], 'n');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[22], context[24] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[18], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdDeclaration/10 s.ScopeClass/13 e.Name/16 )/8 >/1
    context[16] = context[14];
    context[17] = context[15];
    // closed e.Name as range 16
    //DEBUG: s.FileHandle: 9
    //DEBUG: s.ScopeClass: 13
    //DEBUG: e.Name: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: </7 HalfReuse: & FnName*2/10 AsIs: s.ScopeClass/13 AsIs: e.Name/16 HalfReuse: >/8 HalfReuse: ' '/1 }":: extern"/18 >/20 Tile{ ]] }
    refalrts::alloc_chars(vm, context[18], context[19], ":: extern", 9);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[10], functions[efunc_gen_FnName_D2]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_char(context[1], ' ');
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdDefineIdent/10 e.Name/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[10] ) )
      continue;
    // closed e.Name as range 11
    //DEBUG: s.FileHandle: 9
    //DEBUG: e.Name: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: '$'/7 HalfReuse: 'L'/10 }"ABEL "/13 </15 & DisplayName/16 Tile{ AsIs: e.Name/11 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[13], context[14], "ABEL ", 5);
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_DisplayName]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_char(context[7], '$');
    refalrts::reinit_char(context[10], 'L');
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutProgramElement/4 s.new4/9 (/7 s.new5/10 t.new6/11 e.new7/5 )/8 >/1
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.new7 as range 5
  do {
    // </0 & PutProgramElement/4 s.new8/9 (/7 # CmdEmitNativeCode/10 t.new9/11 e.new10/13 )/8 >/1
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[10] ) )
      continue;
    // closed e.new10 as range 13
    do {
      // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdEmitNativeCode/10 s.LineNumber/11 e.Code/15 )/8 >/1
      context[15] = context[13];
      context[16] = context[14];
      if( ! refalrts::svar_term( context[11], context[11] ) )
        continue;
      // closed e.Code as range 15
      //DEBUG: s.LineNumber: 11
      //DEBUG: s.FileHandle: 9
      //DEBUG: e.Code: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: 'N'/7 HalfReuse: 'a'/10 }"tive code:"/17 >/19 </20 & Putout/21 s.FileHandle/9/22"  #line "/23 </25 & Symb/26 Tile{ AsIs: s.LineNumber/11 } >/27 >/28 </29 & Putout/30 s.FileHandle/9/31"    ======================================"/32 >/34 </35 & Map@4/36 s.FileHandle/9/37 Tile{ AsIs: e.Code/15 } >/38 </39 & Putout/40 s.FileHandle/9/41"    ======================================"/42 >/44 </45 & Putout/46 Tile{ HalfReuse: s.FileHandle9 /8 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[17], context[18], "tive code:", 10);
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[22], context[9]);
      refalrts::alloc_chars(vm, context[23], context[24], "  #line ", 8);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[31], context[9]);
      refalrts::alloc_chars(vm, context[32], context[33], "    ======================================", 42);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_gen_Map_Z4]);
      refalrts::copy_stvar(vm, context[37], context[9]);
      refalrts::alloc_close_call(vm, context[38]);
      refalrts::alloc_open_call(vm, context[39]);
      refalrts::alloc_name(vm, context[40], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[41], context[9]);
      refalrts::alloc_chars(vm, context[42], context[43], "    ======================================", 42);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::alloc_open_call(vm, context[45]);
      refalrts::alloc_name(vm, context[46], functions[efunc_Putout]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[7], 'N');
      refalrts::reinit_char(context[10], 'a');
      refalrts::reinit_svar( context[8], context[9] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[38], context[46] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[27], context[37] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[17], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutProgramElement/4 s.new11/9 (/7 # CmdEmitNativeCode/10 (/11 s.new12/19 t.new13/20 e.new14/17 )/12 e.new15/15 )/8 >/1
      context[15] = context[13];
      context[16] = context[14];
      context[17] = 0;
      context[18] = 0;
      if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
        continue;
      // closed e.new15 as range 15
      if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
        continue;
      context[21] = refalrts::tvar_left( context[20], context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.new14 as range 17
      do {
        // </0 & PutProgramElement/4 s.new16/9 (/7 # CmdEmitNativeCode/10 (/11 s.new17/19 s.new18/20 e.new19/22 )/12 e.new20/24 )/8 >/1
        context[22] = context[17];
        context[23] = context[18];
        context[24] = context[15];
        context[25] = context[16];
        if( ! refalrts::svar_term( context[20], context[20] ) )
          continue;
        // closed e.new19 as range 22
        // closed e.new20 as range 24
        do {
          // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdEmitNativeCode/10 (/11 # FileLine/19 s.Line/20 e.1/26 )/12 e.Code/28 )/8 >/1
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = context[25];
          if( ! refalrts::ident_term( identifiers[ident_FileLine], context[19] ) )
            continue;
          // closed e.1 as range 26
          // closed e.Code as range 28
          //DEBUG: s.FileHandle: 9
          //DEBUG: s.Line: 20
          //DEBUG: e.1: 26
          //DEBUG: e.Code: 28

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: 'N'/7 HalfReuse: 'a'/10 HalfReuse: 't'/11 HalfReuse: 'i'/19 }"ve "/30 Tile{ HalfReuse: 'c'/12 }"ode:"/32 >/34 </35 & Putout/36 s.FileHandle/9/37"  #line "/38 </40 & Symb/41 Tile{ AsIs: s.Line/20 } >/42" \""/43 </45 & EscapeString/46 Tile{ AsIs: e.1/26 } >/47 '\"'/48 >/49 </50 & Putout/51 s.FileHandle/9/52"    ======================================"/53 >/55 </56 & Map@4/57 s.FileHandle/9/58 Tile{ AsIs: e.Code/28 } >/59 </60 & Putout/61 s.FileHandle/9/62"    ======================================"/63 >/65 </66 & Putout/67 Tile{ HalfReuse: s.FileHandle9 /8 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[30], context[31], "ve ", 3);
          refalrts::alloc_chars(vm, context[32], context[33], "ode:", 4);
          refalrts::alloc_close_call(vm, context[34]);
          refalrts::alloc_open_call(vm, context[35]);
          refalrts::alloc_name(vm, context[36], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[37], context[9]);
          refalrts::alloc_chars(vm, context[38], context[39], "  #line ", 8);
          refalrts::alloc_open_call(vm, context[40]);
          refalrts::alloc_name(vm, context[41], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[42]);
          refalrts::alloc_chars(vm, context[43], context[44], " \"", 2);
          refalrts::alloc_open_call(vm, context[45]);
          refalrts::alloc_name(vm, context[46], functions[efunc_EscapeString]);
          refalrts::alloc_close_call(vm, context[47]);
          refalrts::alloc_char(vm, context[48], '\"');
          refalrts::alloc_close_call(vm, context[49]);
          refalrts::alloc_open_call(vm, context[50]);
          refalrts::alloc_name(vm, context[51], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[52], context[9]);
          refalrts::alloc_chars(vm, context[53], context[54], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[55]);
          refalrts::alloc_open_call(vm, context[56]);
          refalrts::alloc_name(vm, context[57], functions[efunc_gen_Map_Z4]);
          refalrts::copy_stvar(vm, context[58], context[9]);
          refalrts::alloc_close_call(vm, context[59]);
          refalrts::alloc_open_call(vm, context[60]);
          refalrts::alloc_name(vm, context[61], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[62], context[9]);
          refalrts::alloc_chars(vm, context[63], context[64], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[65]);
          refalrts::alloc_open_call(vm, context[66]);
          refalrts::alloc_name(vm, context[67], functions[efunc_Putout]);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_char(context[7], 'N');
          refalrts::reinit_char(context[10], 'a');
          refalrts::reinit_char(context[11], 't');
          refalrts::reinit_char(context[19], 'i');
          refalrts::reinit_char(context[12], 'c');
          refalrts::reinit_svar( context[8], context[9] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[66] );
          refalrts::push_stack( vm, context[65] );
          refalrts::push_stack( vm, context[60] );
          refalrts::push_stack( vm, context[59] );
          refalrts::push_stack( vm, context[56] );
          refalrts::push_stack( vm, context[55] );
          refalrts::push_stack( vm, context[50] );
          refalrts::push_stack( vm, context[49] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[47] );
          refalrts::push_stack( vm, context[45] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[34] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[59], context[67] );
          res = refalrts::splice_evar( res, context[28], context[29] );
          res = refalrts::splice_evar( res, context[47], context[58] );
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[42], context[46] );
          res = refalrts::splice_elem( res, context[20] );
          res = refalrts::splice_evar( res, context[32], context[41] );
          res = refalrts::splice_elem( res, context[12] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdEmitNativeCode/10 (/11 # RowCol/19 s.Row/20 s.Col/30 )/12 e.Code/28 )/8 >/1
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        context[29] = context[25];
        if( ! refalrts::ident_term( identifiers[ident_RowCol], context[19] ) )
          continue;
        // closed e.Code as range 28
        if( ! refalrts::svar_left( context[30], context[26], context[27] ) )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        //DEBUG: s.FileHandle: 9
        //DEBUG: s.Row: 20
        //DEBUG: e.Code: 28
        //DEBUG: s.Col: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: 'N'/7 HalfReuse: 'a'/10 HalfReuse: 't'/11 HalfReuse: 'i'/19 }"ve code:"/31 >/33 </34 & Putout/35 s.FileHandle/9/36"  #line "/37 </39 & Symb/40 Tile{ AsIs: s.Row/20 } >/41 ':'/42 </43 & Symb/44 Tile{ AsIs: s.Col/30 HalfReuse: >/12 } >/45 </46 & Putout/47 s.FileHandle/9/48"    ======================================"/49 >/51 </52 & Map@4/53 s.FileHandle/9/54 Tile{ AsIs: e.Code/28 } >/55 </56 & Putout/57 s.FileHandle/9/58"    ======================================"/59 >/61 </62 & Putout/63 Tile{ HalfReuse: s.FileHandle9 /8 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[31], context[32], "ve code:", 8);
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::alloc_open_call(vm, context[34]);
        refalrts::alloc_name(vm, context[35], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[36], context[9]);
        refalrts::alloc_chars(vm, context[37], context[38], "  #line ", 8);
        refalrts::alloc_open_call(vm, context[39]);
        refalrts::alloc_name(vm, context[40], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::alloc_char(vm, context[42], ':');
        refalrts::alloc_open_call(vm, context[43]);
        refalrts::alloc_name(vm, context[44], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[45]);
        refalrts::alloc_open_call(vm, context[46]);
        refalrts::alloc_name(vm, context[47], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[48], context[9]);
        refalrts::alloc_chars(vm, context[49], context[50], "    ======================================", 42);
        refalrts::alloc_close_call(vm, context[51]);
        refalrts::alloc_open_call(vm, context[52]);
        refalrts::alloc_name(vm, context[53], functions[efunc_gen_Map_Z4]);
        refalrts::copy_stvar(vm, context[54], context[9]);
        refalrts::alloc_close_call(vm, context[55]);
        refalrts::alloc_open_call(vm, context[56]);
        refalrts::alloc_name(vm, context[57], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[58], context[9]);
        refalrts::alloc_chars(vm, context[59], context[60], "    ======================================", 42);
        refalrts::alloc_close_call(vm, context[61]);
        refalrts::alloc_open_call(vm, context[62]);
        refalrts::alloc_name(vm, context[63], functions[efunc_Putout]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[7], 'N');
        refalrts::reinit_char(context[10], 'a');
        refalrts::reinit_char(context[11], 't');
        refalrts::reinit_char(context[19], 'i');
        refalrts::reinit_close_call(context[12]);
        refalrts::reinit_svar( context[8], context[9] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[62] );
        refalrts::push_stack( vm, context[61] );
        refalrts::push_stack( vm, context[56] );
        refalrts::push_stack( vm, context[55] );
        refalrts::push_stack( vm, context[52] );
        refalrts::push_stack( vm, context[51] );
        refalrts::push_stack( vm, context[46] );
        refalrts::push_stack( vm, context[45] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[43] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[55], context[63] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[45], context[54] );
        res = refalrts::splice_evar( res, context[30], context[12] );
        res = refalrts::splice_evar( res, context[41], context[44] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_evar( res, context[31], context[40] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdEmitNativeCode/10 (/11 # FileRowCol/19 (/20 s.Row/28 s.Col/29 )/21 e.1/22 )/12 e.Code/24 )/8 >/1
      context[22] = context[17];
      context[23] = context[18];
      context[24] = context[15];
      context[25] = context[16];
      context[26] = 0;
      context[27] = 0;
      if( ! refalrts::brackets_term( context[26], context[27], context[20] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[19] ) )
        continue;
      // closed e.1 as range 22
      // closed e.Code as range 24
      if( ! refalrts::svar_left( context[28], context[26], context[27] ) )
        continue;
      if( ! refalrts::svar_left( context[29], context[26], context[27] ) )
        continue;
      if( ! refalrts::empty_seq( context[26], context[27] ) )
        continue;
      //DEBUG: s.FileHandle: 9
      //DEBUG: e.1: 22
      //DEBUG: e.Code: 24
      //DEBUG: s.Row: 28
      //DEBUG: s.Col: 29

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: 'N'/7 HalfReuse: 'a'/10 HalfReuse: 't'/11 HalfReuse: 'i'/19 HalfReuse: 'v'/20 }"e code:"/30 >/32 </33 & Putout/34 s.FileHandle/9/35"  #line "/36 </38 & Symb/39 Tile{ AsIs: s.Row/28 } >/40 ':'/41 </42 & Symb/43 Tile{ AsIs: s.Col/29 } >/44" \""/45 </47 Tile{ HalfReuse: & EscapeString/21 AsIs: e.1/22 HalfReuse: >/12 } '\"'/48 >/49 </50 & Putout/51 s.FileHandle/9/52"    ======================================"/53 >/55 </56 & Map@4/57 s.FileHandle/9/58 Tile{ AsIs: e.Code/24 } >/59 </60 & Putout/61 s.FileHandle/9/62"    ======================================"/63 >/65 </66 & Putout/67 Tile{ HalfReuse: s.FileHandle9 /8 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[30], context[31], "e code:", 7);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[35], context[9]);
      refalrts::alloc_chars(vm, context[36], context[37], "  #line ", 8);
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::alloc_name(vm, context[39], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::alloc_char(vm, context[41], ':');
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[44]);
      refalrts::alloc_chars(vm, context[45], context[46], " \"", 2);
      refalrts::alloc_open_call(vm, context[47]);
      refalrts::alloc_char(vm, context[48], '\"');
      refalrts::alloc_close_call(vm, context[49]);
      refalrts::alloc_open_call(vm, context[50]);
      refalrts::alloc_name(vm, context[51], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[52], context[9]);
      refalrts::alloc_chars(vm, context[53], context[54], "    ======================================", 42);
      refalrts::alloc_close_call(vm, context[55]);
      refalrts::alloc_open_call(vm, context[56]);
      refalrts::alloc_name(vm, context[57], functions[efunc_gen_Map_Z4]);
      refalrts::copy_stvar(vm, context[58], context[9]);
      refalrts::alloc_close_call(vm, context[59]);
      refalrts::alloc_open_call(vm, context[60]);
      refalrts::alloc_name(vm, context[61], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[62], context[9]);
      refalrts::alloc_chars(vm, context[63], context[64], "    ======================================", 42);
      refalrts::alloc_close_call(vm, context[65]);
      refalrts::alloc_open_call(vm, context[66]);
      refalrts::alloc_name(vm, context[67], functions[efunc_Putout]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[7], 'N');
      refalrts::reinit_char(context[10], 'a');
      refalrts::reinit_char(context[11], 't');
      refalrts::reinit_char(context[19], 'i');
      refalrts::reinit_char(context[20], 'v');
      refalrts::reinit_name(context[21], functions[efunc_EscapeString]);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_svar( context[8], context[9] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[66] );
      refalrts::push_stack( vm, context[65] );
      refalrts::push_stack( vm, context[60] );
      refalrts::push_stack( vm, context[59] );
      refalrts::push_stack( vm, context[56] );
      refalrts::push_stack( vm, context[55] );
      refalrts::push_stack( vm, context[50] );
      refalrts::push_stack( vm, context[49] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[59], context[67] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[48], context[58] );
      res = refalrts::splice_evar( res, context[21], context[12] );
      res = refalrts::splice_evar( res, context[44], context[47] );
      res = refalrts::splice_elem( res, context[29] );
      res = refalrts::splice_evar( res, context[40], context[43] );
      res = refalrts::splice_elem( res, context[28] );
      res = refalrts::splice_evar( res, context[30], context[39] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # CmdEmitNativeCode/10 t.SrcPos/11 e.Code/15 )/8 >/1
    context[15] = context[13];
    context[16] = context[14];
    // closed e.Code as range 15
    //DEBUG: t.SrcPos: 11
    //DEBUG: s.FileHandle: 9
    //DEBUG: e.Code: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: 'N'/7 HalfReuse: 'a'/10 }"tive code:"/17 >/19 </20 & Putout/21 s.FileHandle/9/22"  "/23 </25 & SrcPos*4/26 Tile{ AsIs: t.SrcPos/11 } >/27 >/28 </29 & Putout/30 s.FileHandle/9/31"    ======================================"/32 >/34 </35 & Map@4/36 s.FileHandle/9/37 Tile{ AsIs: e.Code/15 } >/38 </39 & Putout/40 s.FileHandle/9/41"    ======================================"/42 >/44 </45 & Putout/46 Tile{ HalfReuse: s.FileHandle9 /8 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[17], context[18], "tive code:", 10);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[22], context[9]);
    refalrts::alloc_chars(vm, context[23], context[24], "  ", 2);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_gen_SrcPos_D4]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[31], context[9]);
    refalrts::alloc_chars(vm, context[32], context[33], "    ======================================", 42);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_gen_Map_Z4]);
    refalrts::copy_stvar(vm, context[37], context[9]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[41], context[9]);
    refalrts::alloc_chars(vm, context[42], context[43], "    ======================================", 42);
    refalrts::alloc_close_call(vm, context[44]);
    refalrts::alloc_open_call(vm, context[45]);
    refalrts::alloc_name(vm, context[46], functions[efunc_Putout]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_char(context[7], 'N');
    refalrts::reinit_char(context[10], 'a');
    refalrts::reinit_svar( context[8], context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[38], context[46] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[27], context[37] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutProgramElement/4 s.FileHandle/9 (/7 # Spec/10 (/11 e.Name/13 )/12 e.Pattern/5 )/8 >/1
  context[13] = 0;
  context[14] = 0;
  if( ! refalrts::brackets_term( context[13], context[14], context[11] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term( identifiers[ident_Spec], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name as range 13
  // closed e.Pattern as range 5
  //DEBUG: s.FileHandle: 9
  //DEBUG: e.Name: 13
  //DEBUG: e.Pattern: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/9 HalfReuse: '$'/7 HalfReuse: 'S'/10 HalfReuse: 'P'/11 } 'E'/15 Tile{ HalfReuse: 'C'/12 } Tile{ HalfReuse: ' '/8 } </16 & DisplayName/17 Tile{ AsIs: e.Name/13 } >/18 >/19 </20 & Map@6/21 s.FileHandle/9/22 Tile{ AsIs: e.Pattern/5 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[15], 'E');
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_DisplayName]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_Map_Z6]);
  refalrts::copy_stvar(vm, context[22], context[9]);
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::reinit_char(context[7], '$');
  refalrts::reinit_char(context[10], 'S');
  refalrts::reinit_char(context[11], 'P');
  refalrts::reinit_char(context[12], 'C');
  refalrts::reinit_char(context[8], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutProgramElement("PutProgramElement", COOKIE1_, COOKIE2_, func_PutProgramElement);


static refalrts::FnResult func_PutRASLFunction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & PutRASLFunction/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PutRASLFunction/4 s.new1/5 s.new2/6 (/9 e.new3/7 )/10 e.new4/2 >/1
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
  // closed e.new3 as range 7
  // closed e.new4 as range 2
  do {
    // </0 & PutRASLFunction/4 s.FileHandle/5 # GN-Local/6 (/9 e.Name/11 )/10 e.Commands/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[6] ) )
      continue;
    // closed e.Name as range 11
    // closed e.Commands as range 13
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Name: 11
    //DEBUG: e.Commands: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/6 HalfReuse: ' '/9 } </15 & DisplayName/16 Tile{ AsIs: e.Name/11 } >/17" {"/18 >/20 </21 & Map@3/22 Tile{ HalfReuse: s.FileHandle5 /10 AsIs: e.Commands/13 AsIs: >/1 } </23 & Putout/24 s.FileHandle/5/25"  }\n"/26 >/28 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[15]);
    refalrts::alloc_name(vm, context[16], functions[efunc_DisplayName]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::alloc_chars(vm, context[18], context[19], " {", 2);
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Map_Z3]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[25], context[5]);
    refalrts::alloc_chars(vm, context[26], context[27], "  }\n", 4);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_char(context[6], ' ');
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_svar( context[10], context[5] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[28] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[17], context[22] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PutRASLFunction/4 s.FileHandle/5 # GN-Entry/6 (/9 e.Name/11 )/10 e.Commands/13 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[6] ) )
      continue;
    // closed e.Name as range 11
    // closed e.Commands as range 13
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Name: 11
    //DEBUG: e.Commands: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/6 HalfReuse: ' '/9 }"$ENTRY "/15 </17 & DisplayName/18 Tile{ AsIs: e.Name/11 } >/19" {"/20 >/22 </23 & Map@3/24 Tile{ HalfReuse: s.FileHandle5 /10 AsIs: e.Commands/13 AsIs: >/1 } </25 & Putout/26 s.FileHandle/5/27"  }\n"/28 >/30 Tile{ ]] }
    refalrts::alloc_chars(vm, context[15], context[16], "$ENTRY ", 7);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_DisplayName]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_chars(vm, context[20], context[21], " {", 2);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_Map_Z3]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[27], context[5]);
    refalrts::alloc_chars(vm, context[28], context[29], "  }\n", 4);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_char(context[6], ' ');
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_svar( context[10], context[5] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[30] );
    res = refalrts::splice_evar( res, context[10], context[1] );
    res = refalrts::splice_evar( res, context[19], context[24] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[15], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutRASLFunction/4 s.FileHandle/5 s.ScopeClass/6 (/9 e.Name/7 )/10 e.Commands/2 >/1
  // closed e.Name as range 7
  // closed e.Commands as range 2
  //DEBUG: s.FileHandle: 5
  //DEBUG: s.ScopeClass: 6
  //DEBUG: e.Name: 7
  //DEBUG: e.Commands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 } </11 & FnName*2/12 Tile{ AsIs: s.ScopeClass/6 } Tile{ AsIs: e.Name/7 } Tile{ HalfReuse: >/9 }" {"/13 >/15 </16 & Map@3/17 Tile{ HalfReuse: s.FileHandle5 /10 AsIs: e.Commands/2 AsIs: >/1 } </18 & Putout/19 s.FileHandle/5/20"  }\n"/21 >/23 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_FnName_D2]);
  refalrts::alloc_chars(vm, context[13], context[14], " {", 2);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_Map_Z3]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Putout]);
  refalrts::copy_stvar(vm, context[20], context[5]);
  refalrts::alloc_chars(vm, context[21], context[22], "  }\n", 4);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::reinit_close_call(context[9]);
  refalrts::reinit_svar( context[10], context[5] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[23] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_elem( res, context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutRASLFunction("PutRASLFunction", COOKIE1_, COOKIE2_, func_PutRASLFunction);


static refalrts::FnResult func_FnName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & FnName/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & FnName/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & FnName/4 # GN-Local/5 e.Name/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[5] ) )
      continue;
    // closed e.Name as range 6
    //DEBUG: e.Name: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } ' '/8 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & DisplayName/5 AsIs: e.Name/6 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[8], ' ');
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_DisplayName]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_elem( res, context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FnName/4 # GN-Entry/5 e.Name/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name as range 2
  //DEBUG: e.Name: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"  $ENTRY"/6 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & DisplayName/5 AsIs: e.Name/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "  $ENTRY", 8);
  refalrts::reinit_char(context[0], ' ');
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_DisplayName]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FnName("FnName", COOKIE1_, COOKIE2_, func_FnName);


static refalrts::FnResult func_gen_PutRASLCommands_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & PutRASLCommands\1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PutRASLCommands\1/4 s.new1/13 (/11 e.new2/9 )/12 (/7 s.new3/14 e.new4/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new4 as range 5
  do {
    // </0 & PutRASLCommands\1/4 s.FileHandle/13 (/11 e.Indent/15 )/12 (/7 # CmdSentence/14 e.SubCommands/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[14] ) )
      continue;
    // closed e.Indent as range 15
    // closed e.SubCommands as range 17
    //DEBUG: s.FileHandle: 13
    //DEBUG: e.Indent: 15
    //DEBUG: e.SubCommands: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: & Putout/7 HalfReuse: s.FileHandle13 /14 } e.Indent/15/20"(CmdSentence"/22 >/24 Tile{ AsIs: </0 Reuse: & Map@7/4 AsIs: s.FileHandle/13 AsIs: (/11 AsIs: e.Indent/15 AsIs: )/12 } Tile{ AsIs: e.SubCommands/17 } >/25 </26 & Putout/27 s.FileHandle/13/28 e.Indent/15/29")  // CmdSentenc"/31 Tile{ HalfReuse: 'e'/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::copy_evar(vm, context[20], context[21], context[15], context[16]);
    refalrts::alloc_chars(vm, context[22], context[23], "(CmdSentence", 12);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[28], context[13]);
    refalrts::copy_evar(vm, context[29], context[30], context[15], context[16]);
    refalrts::alloc_chars(vm, context[31], context[32], ")  // CmdSentenc", 16);
    refalrts::reinit_name(context[7], functions[efunc_Putout]);
    refalrts::reinit_svar( context[14], context[13] );
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z7]);
    refalrts::reinit_char(context[8], 'e');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[25], context[32] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[7], context[14] );
    res = refalrts::splice_elem( res, context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PutRASLCommands\1/4 s.FileHandle/13 (/11 e.Indent/15 )/12 (/7 # CmdOpenELoop/14 # AlgLeft/19 s.BracketNum/20 s.VarNumber/21 e.SubCommands/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[14] ) )
      continue;
    context[19] = refalrts::ident_left( identifiers[ident_AlgLeft], context[17], context[18] );
    if( ! context[19] )
      continue;
    // closed e.Indent as range 15
    if( ! refalrts::svar_left( context[20], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    // closed e.SubCommands as range 17
    //DEBUG: s.FileHandle: 13
    //DEBUG: e.Indent: 15
    //DEBUG: s.BracketNum: 20
    //DEBUG: s.VarNumber: 21
    //DEBUG: e.SubCommands: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </22 & Putout/23 s.FileHandle/13/24 e.Indent/15/25"(CmdOpenELoop e."/27 </29 & Symb/30 Tile{ AsIs: s.VarNumber/21 } >/31" <- "/32 Tile{ HalfReuse: '['/7 HalfReuse: </14 HalfReuse: & Symb/19 AsIs: s.BracketNum/20 } >/34 ']'/35 >/36 Tile{ AsIs: </0 Reuse: & Map@7/4 AsIs: s.FileHandle/13 AsIs: (/11 AsIs: e.Indent/15 AsIs: )/12 } Tile{ AsIs: e.SubCommands/17 } >/37 </38 & Putout/39 s.FileHandle/13/40 e.Indent/15/41")  // CmdOpenELoo"/43 Tile{ HalfReuse: 'p'/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[24], context[13]);
    refalrts::copy_evar(vm, context[25], context[26], context[15], context[16]);
    refalrts::alloc_chars(vm, context[27], context[28], "(CmdOpenELoop e.", 16);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_Symb]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_chars(vm, context[32], context[33], " <- ", 4);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_char(vm, context[35], ']');
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[40], context[13]);
    refalrts::copy_evar(vm, context[41], context[42], context[15], context[16]);
    refalrts::alloc_chars(vm, context[43], context[44], ")  // CmdOpenELoo", 17);
    refalrts::reinit_char(context[7], '[');
    refalrts::reinit_open_call(context[14]);
    refalrts::reinit_name(context[19], functions[efunc_Symb]);
    refalrts::update_name(context[4], functions[efunc_gen_Map_Z7]);
    refalrts::reinit_char(context[8], 'p');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[29] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[37], context[44] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[34], context[36] );
    res = refalrts::splice_evar( res, context[7], context[20] );
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[22], context[30] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PutRASLCommands\1/4 s.FileHandle/13 (/11 e.Indent/15 )/12 (/7 # CmdComment/14 e.Message/17 )/8 >/1
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[5];
    context[18] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[14] ) )
      continue;
    // closed e.Indent as range 15
    // closed e.Message as range 17
    //DEBUG: s.FileHandle: 13
    //DEBUG: e.Indent: 15
    //DEBUG: e.Message: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.FileHandle/13 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 } Tile{ HalfReuse: s.FileHandle13 /11 AsIs: e.Indent/15 HalfReuse: '/'/12 HalfReuse: '/'/7 HalfReuse: ' '/14 AsIs: e.Message/17 HalfReuse: >/8 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_svar( context[11], context[13] );
    refalrts::reinit_char(context[12], '/');
    refalrts::reinit_char(context[7], '/');
    refalrts::reinit_char(context[14], ' ');
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[8] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutRASLCommands\1/4 s.FileHandle/13 (/11 e.Indent/9 )/12 (/7 s.Command/14 e.Args/5 )/8 >/1
  // closed e.Indent as range 9
  // closed e.Args as range 5
  //DEBUG: s.FileHandle: 13
  //DEBUG: s.Command: 14
  //DEBUG: e.Indent: 9
  //DEBUG: e.Args: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} )/12 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/13 } Tile{ AsIs: e.Indent/9 } Tile{ HalfReuse: '('/7 AsIs: s.Command/14 AsIs: e.Args/5 HalfReuse: ')'/8 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::reinit_char(context[7], '(');
  refalrts::reinit_char(context[8], ')');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[13], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PutRASLCommands_L1("PutRASLCommands\\1", COOKIE1_, COOKIE2_, func_gen_PutRASLCommands_L1);


static refalrts::FnResult func_PutRASLCommands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & PutRASLCommands/4 s.FileHandle/5 (/8 e.Indent/6 )/9 e.Commands/2 >/1
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
  // closed e.Indent as range 6
  // closed e.Commands as range 2
  //DEBUG: s.FileHandle: 5
  //DEBUG: e.Indent: 6
  //DEBUG: e.Commands: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@8/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/6 AsIs: )/9 AsIs: e.Commands/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutRASLCommands("PutRASLCommands", COOKIE1_, COOKIE2_, func_PutRASLCommands);


static refalrts::FnResult func_PutCode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & PutCode/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PutCode/4 s.new1/5 t.new2/6 e.new3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.new3 as range 2
  do {
    // </0 & PutCode/4 s.FileHandle/5 s.LineNumber/6 e.Code/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::svar_term( context[6], context[6] ) )
      continue;
    // closed e.Code as range 8
    //DEBUG: s.LineNumber: 6
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Code: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 }"  #line "/10 </12 & Symb/13 Tile{ AsIs: s.LineNumber/6 } >/14 >/15 </16 & Putout/17 s.FileHandle/5/18"    ======================================"/19 >/21 </22 & Map@4/23 s.FileHandle/5/24 Tile{ AsIs: e.Code/8 } >/25 </26 & Putout/27 s.FileHandle/5/28"    ======================================"/29 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[10], context[11], "  #line ", 8);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_Symb]);
    refalrts::alloc_close_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_open_call(vm, context[16]);
    refalrts::alloc_name(vm, context[17], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[18], context[5]);
    refalrts::alloc_chars(vm, context[19], context[20], "    ======================================", 42);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z4]);
    refalrts::copy_stvar(vm, context[24], context[5]);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[28], context[5]);
    refalrts::alloc_chars(vm, context[29], context[30], "    ======================================", 42);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[30] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[14], context[24] );
    res = refalrts::splice_elem( res, context[6] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PutCode/4 s.new4/5 (/6 s.new5/12 t.new6/13 e.new7/10 )/7 e.new8/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[6] ) )
      continue;
    // closed e.new8 as range 8
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.new7 as range 10
    do {
      // </0 & PutCode/4 s.new9/5 (/6 s.new10/12 s.new11/13 e.new12/15 )/7 e.new13/17 >/1
      context[15] = context[10];
      context[16] = context[11];
      context[17] = context[8];
      context[18] = context[9];
      if( ! refalrts::svar_term( context[13], context[13] ) )
        continue;
      // closed e.new12 as range 15
      // closed e.new13 as range 17
      do {
        // </0 & PutCode/4 s.FileHandle/5 (/6 # FileLine/12 s.Line/13 e.1/19 )/7 e.Code/21 >/1
        context[19] = context[15];
        context[20] = context[16];
        context[21] = context[17];
        context[22] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_FileLine], context[12] ) )
          continue;
        // closed e.1 as range 19
        // closed e.Code as range 21
        //DEBUG: s.FileHandle: 5
        //DEBUG: s.Line: 13
        //DEBUG: e.1: 19
        //DEBUG: e.Code: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/6 HalfReuse: ' '/12 }"#line "/23 </25 & Symb/26 Tile{ AsIs: s.Line/13 } >/27" \""/28 </30 & EscapeString/31 Tile{ AsIs: e.1/19 } >/32 '\"'/33 >/34 </35 & Putout/36 s.FileHandle/5/37"    ======================================"/38 >/40 </41 & Map@4/42 Tile{ HalfReuse: s.FileHandle5 /7 AsIs: e.Code/21 AsIs: >/1 } </43 & Putout/44 s.FileHandle/5/45"    ======================================"/46 >/48 Tile{ ]] }
        refalrts::alloc_chars(vm, context[23], context[24], "#line ", 6);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[26], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::alloc_chars(vm, context[28], context[29], " \"", 2);
        refalrts::alloc_open_call(vm, context[30]);
        refalrts::alloc_name(vm, context[31], functions[efunc_EscapeString]);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::alloc_char(vm, context[33], '\"');
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[37], context[5]);
        refalrts::alloc_chars(vm, context[38], context[39], "    ======================================", 42);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_open_call(vm, context[41]);
        refalrts::alloc_name(vm, context[42], functions[efunc_gen_Map_Z4]);
        refalrts::alloc_open_call(vm, context[43]);
        refalrts::alloc_name(vm, context[44], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[45], context[5]);
        refalrts::alloc_chars(vm, context[46], context[47], "    ======================================", 42);
        refalrts::alloc_close_call(vm, context[48]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[6], ' ');
        refalrts::reinit_char(context[12], ' ');
        refalrts::reinit_svar( context[7], context[5] );
        refalrts::push_stack( vm, context[48] );
        refalrts::push_stack( vm, context[43] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[25] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[43], context[48] );
        res = refalrts::splice_evar( res, context[7], context[1] );
        res = refalrts::splice_evar( res, context[32], context[42] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[27], context[31] );
        res = refalrts::splice_elem( res, context[13] );
        res = refalrts::splice_evar( res, context[23], context[26] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & PutCode/4 s.FileHandle/5 (/6 # RowCol/12 s.Row/13 s.Col/23 )/7 e.Code/21 >/1
      context[19] = context[15];
      context[20] = context[16];
      context[21] = context[17];
      context[22] = context[18];
      if( ! refalrts::ident_term( identifiers[ident_RowCol], context[12] ) )
        continue;
      // closed e.Code as range 21
      if( ! refalrts::svar_left( context[23], context[19], context[20] ) )
        continue;
      if( ! refalrts::empty_seq( context[19], context[20] ) )
        continue;
      //DEBUG: s.FileHandle: 5
      //DEBUG: s.Row: 13
      //DEBUG: e.Code: 21
      //DEBUG: s.Col: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/6 HalfReuse: ' '/12 }"#line "/24 </26 & Symb/27 Tile{ AsIs: s.Row/13 } >/28 ':'/29 </30 & Symb/31 Tile{ AsIs: s.Col/23 } >/32 >/33 </34 & Putout/35 s.FileHandle/5/36"    ======================================"/37 >/39 </40 & Map@4/41 Tile{ HalfReuse: s.FileHandle5 /7 AsIs: e.Code/21 AsIs: >/1 } </42 & Putout/43 s.FileHandle/5/44"    ======================================"/45 >/47 Tile{ ]] }
      refalrts::alloc_chars(vm, context[24], context[25], "#line ", 6);
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_char(vm, context[29], ':');
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_close_call(vm, context[33]);
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::alloc_name(vm, context[35], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[36], context[5]);
      refalrts::alloc_chars(vm, context[37], context[38], "    ======================================", 42);
      refalrts::alloc_close_call(vm, context[39]);
      refalrts::alloc_open_call(vm, context[40]);
      refalrts::alloc_name(vm, context[41], functions[efunc_gen_Map_Z4]);
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[44], context[5]);
      refalrts::alloc_chars(vm, context[45], context[46], "    ======================================", 42);
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[6], ' ');
      refalrts::reinit_char(context[12], ' ');
      refalrts::reinit_svar( context[7], context[5] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[26] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[42], context[47] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      res = refalrts::splice_evar( res, context[32], context[41] );
      res = refalrts::splice_elem( res, context[23] );
      res = refalrts::splice_evar( res, context[28], context[31] );
      res = refalrts::splice_elem( res, context[13] );
      res = refalrts::splice_evar( res, context[24], context[27] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PutCode/4 s.FileHandle/5 (/6 # FileRowCol/12 (/13 s.Row/21 s.Col/22 )/14 e.1/15 )/7 e.Code/17 >/1
    context[15] = context[10];
    context[16] = context[11];
    context[17] = context[8];
    context[18] = context[9];
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[12] ) )
      continue;
    // closed e.1 as range 15
    // closed e.Code as range 17
    if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[22], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.1: 15
    //DEBUG: e.Code: 17
    //DEBUG: s.Row: 21
    //DEBUG: s.Col: 22

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/6 HalfReuse: ' '/12 HalfReuse: '#'/13 }"line "/23 </25 & Symb/26 Tile{ AsIs: s.Row/21 } >/27 ':'/28 </29 & Symb/30 Tile{ AsIs: s.Col/22 HalfReuse: >/14 }" \""/31 </33 & EscapeString/34 Tile{ AsIs: e.1/15 } >/35 '\"'/36 >/37 </38 & Putout/39 s.FileHandle/5/40"    ======================================"/41 >/43 </44 & Map@4/45 Tile{ HalfReuse: s.FileHandle5 /7 AsIs: e.Code/17 AsIs: >/1 } </46 & Putout/47 s.FileHandle/5/48"    ======================================"/49 >/51 Tile{ ]] }
    refalrts::alloc_chars(vm, context[23], context[24], "line ", 5);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_Symb]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_char(vm, context[28], ':');
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_Symb]);
    refalrts::alloc_chars(vm, context[31], context[32], " \"", 2);
    refalrts::alloc_open_call(vm, context[33]);
    refalrts::alloc_name(vm, context[34], functions[efunc_EscapeString]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_char(vm, context[36], '\"');
    refalrts::alloc_close_call(vm, context[37]);
    refalrts::alloc_open_call(vm, context[38]);
    refalrts::alloc_name(vm, context[39], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[40], context[5]);
    refalrts::alloc_chars(vm, context[41], context[42], "    ======================================", 42);
    refalrts::alloc_close_call(vm, context[43]);
    refalrts::alloc_open_call(vm, context[44]);
    refalrts::alloc_name(vm, context[45], functions[efunc_gen_Map_Z4]);
    refalrts::alloc_open_call(vm, context[46]);
    refalrts::alloc_name(vm, context[47], functions[efunc_Putout]);
    refalrts::copy_stvar(vm, context[48], context[5]);
    refalrts::alloc_chars(vm, context[49], context[50], "    ======================================", 42);
    refalrts::alloc_close_call(vm, context[51]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_char(context[6], ' ');
    refalrts::reinit_char(context[12], ' ');
    refalrts::reinit_char(context[13], '#');
    refalrts::reinit_close_call(context[14]);
    refalrts::reinit_svar( context[7], context[5] );
    refalrts::push_stack( vm, context[51] );
    refalrts::push_stack( vm, context[46] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[43] );
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[37] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[14] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[25] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[46], context[51] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[35], context[45] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[31], context[34] );
    res = refalrts::splice_evar( res, context[22], context[14] );
    res = refalrts::splice_evar( res, context[27], context[30] );
    res = refalrts::splice_elem( res, context[21] );
    res = refalrts::splice_evar( res, context[23], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutCode/4 s.FileHandle/5 t.SrcPos/6 e.Code/2 >/1
  // closed e.Code as range 2
  //DEBUG: t.SrcPos: 6
  //DEBUG: s.FileHandle: 5
  //DEBUG: e.Code: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 }"  "/8 </10 & SrcPos*4/11 Tile{ AsIs: t.SrcPos/6 } >/12 >/13 </14 & Putout/15 s.FileHandle/5/16"    ======================================"/17 >/19 </20 & Map@4/21 s.FileHandle/5/22 Tile{ AsIs: e.Code/2 } >/23 </24 & Putout/25 s.FileHandle/5/26"    ======================================"/27 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[8], context[9], "  ", 2);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_SrcPos_D4]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Putout]);
  refalrts::copy_stvar(vm, context[16], context[5]);
  refalrts::alloc_chars(vm, context[17], context[18], "    ======================================", 42);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_gen_Map_Z4]);
  refalrts::copy_stvar(vm, context[22], context[5]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_Putout]);
  refalrts::copy_stvar(vm, context[26], context[5]);
  refalrts::alloc_chars(vm, context[27], context[28], "    ======================================", 42);
  refalrts::update_name(context[4], functions[efunc_Putout]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[22] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutCode("PutCode", COOKIE1_, COOKIE2_, func_PutCode);


static refalrts::FnResult func_SrcPos(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & SrcPos/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & SrcPos/4 t.new1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & SrcPos/4 s.LineNumber/5 >/1
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    //DEBUG: s.LineNumber: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ }"#line "/7 Tile{ AsIs: </0 Reuse: & Symb/4 AsIs: s.LineNumber/5 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[7], context[8], "#line ", 6);
    refalrts::update_name(context[4], functions[efunc_Symb]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SrcPos/4 (/5 s.new2/9 t.new3/10 e.new4/7 )/6 >/1
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
    // </0 & SrcPos/4 (/5 s.new5/9 s.new6/10 e.new7/12 )/6 >/1
    context[12] = context[7];
    context[13] = context[8];
    if( ! refalrts::svar_term( context[10], context[10] ) )
      continue;
    // closed e.new7 as range 12
    do {
      // </0 & SrcPos/4 (/5 # FileLine/9 s.Line/10 e.FileName/14 )/6 >/1
      context[14] = context[12];
      context[15] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_FileLine], context[9] ) )
        continue;
      // closed e.FileName as range 14
      //DEBUG: s.Line: 10
      //DEBUG: e.FileName: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: '#'/0 HalfReuse: 'l'/4 HalfReuse: 'i'/5 HalfReuse: 'n'/9 }"e "/16 </18 & Symb/19 Tile{ AsIs: s.Line/10 } >/20" \""/21 </23 & EscapeString/24 Tile{ AsIs: e.FileName/14 } Tile{ HalfReuse: >/6 HalfReuse: '\"'/1 ]] }
      refalrts::alloc_chars(vm, context[16], context[17], "e ", 2);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[20]);
      refalrts::alloc_chars(vm, context[21], context[22], " \"", 2);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_EscapeString]);
      refalrts::reinit_char(context[0], '#');
      refalrts::reinit_char(context[4], 'l');
      refalrts::reinit_char(context[5], 'i');
      refalrts::reinit_char(context[9], 'n');
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_char(context[1], '\"');
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[20], context[24] );
      res = refalrts::splice_elem( res, context[10] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SrcPos/4 (/5 # RowCol/9 s.Row/10 s.Col/16 )/6 >/1
    context[14] = context[12];
    context[15] = context[13];
    if( ! refalrts::ident_term( identifiers[ident_RowCol], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    //DEBUG: s.Row: 10
    //DEBUG: s.Col: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Col/16 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '#'/0 HalfReuse: 'l'/4 HalfReuse: 'i'/5 HalfReuse: 'n'/9 }"e "/17 </19 & Symb/20 Tile{ AsIs: s.Row/10 } >/21 ':'/22 </23 & Symb/24 Tile{ HalfReuse: s.Col16 /6 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[17], context[18], "e ", 2);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_Symb]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_char(vm, context[22], ':');
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_Symb]);
    refalrts::reinit_char(context[0], '#');
    refalrts::reinit_char(context[4], 'l');
    refalrts::reinit_char(context[5], 'i');
    refalrts::reinit_char(context[9], 'n');
    refalrts::reinit_svar( context[6], context[16] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_elem( res, context[10] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SrcPos/4 (/5 # FileRowCol/9 (/10 s.Row/14 s.Col/15 )/11 e.FileName/7 )/6 >/1
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
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"#li"/16 Tile{ HalfReuse: 'n'/0 HalfReuse: 'e'/4 HalfReuse: ' '/5 HalfReuse: </9 HalfReuse: & Symb/10 AsIs: s.Row/14 } >/18 ':'/19 </20 & Symb/21 Tile{ AsIs: s.Col/15 } >/22" \""/23 </25 Tile{ HalfReuse: & EscapeString/11 AsIs: e.FileName/7 HalfReuse: >/6 HalfReuse: '\"'/1 ]] }
  refalrts::alloc_chars(vm, context[16], context[17], "#li", 3);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_char(vm, context[19], ':');
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_Symb]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_chars(vm, context[23], context[24], " \"", 2);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::reinit_char(context[0], 'n');
  refalrts::reinit_char(context[4], 'e');
  refalrts::reinit_char(context[5], ' ');
  refalrts::reinit_open_call(context[9]);
  refalrts::reinit_name(context[10], functions[efunc_Symb]);
  refalrts::reinit_name(context[11], functions[efunc_EscapeString]);
  refalrts::reinit_close_call(context[6]);
  refalrts::reinit_char(context[1], '\"');
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_elem( res, context[15] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SrcPos("SrcPos", COOKIE1_, COOKIE2_, func_SrcPos);


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


static refalrts::FnResult func_gen_Logm_PutLine_B1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Log-PutLine:1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Log-PutLine:1@1/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-PutLine:1@1/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Log-PutLine:1@1/4 s.FileHandle/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.FileHandle: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/7 HalfReuse: </1 } & Time/8 >/9": Compilation starts"/10 >/12 Tile{ ]] }
    refalrts::alloc_name(vm, context[8], functions[efunc_Time]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_chars(vm, context[10], context[11], ": Compilation starts", 20);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-PutLine:1@1/4 e.dyn/2 >/1
  // closed e.dyn as range 2
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Log-PutLine:1@0/6 (/7"Compilation start"/8 Tile{ HalfReuse: 's'/0 HalfReuse: )/4 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Logm_PutLine_B1Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_chars(vm, context[8], context[9], "Compilation start", 17);
  refalrts::reinit_char(context[0], 's');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_PutLine_B1Z1("Log-PutLine:1@1", COOKIE1_, COOKIE2_, func_gen_Logm_PutLine_B1Z1);


static refalrts::FnResult func_gen_Logm_PutLine_B1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Log-PutLine:1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  do {
    // </0 & Log-PutLine:1@2/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-PutLine:1@2/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Log-PutLine:1@2/4 s.FileHandle/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    //DEBUG: s.FileHandle: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/7 HalfReuse: </1 } & Time/8 >/9": Compilation ends"/10 >/12 Tile{ ]] }
    refalrts::alloc_name(vm, context[8], functions[efunc_Time]);
    refalrts::alloc_close_call(vm, context[9]);
    refalrts::alloc_chars(vm, context[10], context[11], ": Compilation ends", 18);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_open_call(context[1]);
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-PutLine:1@2/4 e.dyn/2 >/1
  // closed e.dyn as range 2
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Log-PutLine:1@0/6 (/7"Compilation end"/8 Tile{ HalfReuse: 's'/0 HalfReuse: )/4 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Logm_PutLine_B1Z0]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_chars(vm, context[8], context[9], "Compilation end", 15);
  refalrts::reinit_char(context[0], 's');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[7], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_PutLine_B1Z2("Log-PutLine:1@2", COOKIE1_, COOKIE2_, func_gen_Logm_PutLine_B1Z2);


static refalrts::FnResult func_gen_Logm_PutLine_B1Z3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Log-PutLine:1@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Log-PutLine:1@3/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Log-PutLine:1@3/4 (/7 e.Message0/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Message0 as range 9
    //DEBUG: e.Message0: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-PutLine:1@3/4 (/7 e.Message0/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Log-PutLine:1@3/4 (/7 e.Message0/9 )/8 s.FileHandle/13 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Message0 as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Message0: 9
    //DEBUG: s.FileHandle: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.FileHandle/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: s.FileHandle13 /7 } </14 Tile{ HalfReuse: & Time/8 } >/15": AST of file "/16 Tile{ AsIs: e.Message0/9 } ':'/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_chars(vm, context[16], context[17], ": AST of file ", 14);
    refalrts::alloc_char(vm, context[18], ':');
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_svar( context[7], context[13] );
    refalrts::reinit_name(context[8], functions[efunc_Time]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-PutLine:1@3/4 (/7 e.Message0/5 )/8 e.dyn/2 >/1
  // closed e.Message0 as range 5
  // closed e.dyn as range 2
  //DEBUG: e.Message0: 5
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-PutLine:1@0/4 AsIs: (/7 }"AST of file "/9 Tile{ AsIs: e.Message0/5 } ':'/11 Tile{ AsIs: )/8 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "AST of file ", 12);
  refalrts::alloc_char(vm, context[11], ':');
  refalrts::update_name(context[4], functions[efunc_gen_Logm_PutLine_B1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_PutLine_B1Z3("Log-PutLine:1@3", COOKIE1_, COOKIE2_, func_gen_Logm_PutLine_B1Z3);


static refalrts::FnResult func_gen_Map_Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Map@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@1/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@1/4 s.new3/5 t.new4/8 e.new5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new5 as range 6
    do {
      // </0 & Map@1/4 s.new6/5 (/8 e.new7/12 )/9 e.new8/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.new7 as range 12
      // closed e.new8 as range 10
      do {
        // </0 & Map@1/4 s.FileHandle/5 (/8 )/9 e.Tail/14 >/1
        context[14] = context[10];
        context[15] = context[11];
        if( ! refalrts::empty_seq( context[12], context[13] ) )
          continue;
        // closed e.Tail as range 14
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.Tail: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: >/8 HalfReuse: </9 } & Map@1/16 s.FileHandle/5/17 Tile{ AsIs: e.Tail/14 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_name(vm, context[16], functions[efunc_gen_Map_Z1]);
        refalrts::copy_stvar(vm, context[17], context[5]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_close_call(context[8]);
        refalrts::reinit_open_call(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[9] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@1/4 s.FileHandle/5 (/8 e./14 )/9 e.Tail/16 >/1
      context[14] = context[12];
      context[15] = context[13];
      context[16] = context[10];
      context[17] = context[11];
      // closed e. as range 14
      // closed e.Tail as range 16
      //DEBUG: s.FileHandle: 5
      //DEBUG: e.: 14
      //DEBUG: e.Tail: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 } ' '/18 Tile{ AsIs: e./14 } >/19 </20 & Map@1/21 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/16 AsIs: >/1 ]] }
      refalrts::alloc_char(vm, context[18], ' ');
      refalrts::alloc_close_call(vm, context[19]);
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_gen_Map_Z1]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[8], ' ');
      refalrts::reinit_svar( context[9], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[19] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[19], context[21] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_elem( res, context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@1/4 s.FileHandle/5 t.Next/8 e.Tail/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail as range 10
    //DEBUG: t.Next: 8
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Tail: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-AST:1$2\1*2/4 AsIs: s.FileHandle/5 AsIs: t.Next/8 } >/12 </13 & Map@1/14 s.FileHandle/5/15 Tile{ AsIs: e.Tail/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z1]);
    refalrts::copy_stvar(vm, context[15], context[5]);
    refalrts::update_name(context[4], functions[efunc_gen_Logm_AST_B1S2L1D2]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@1/4 s.FileHandle/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FileHandle: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@1/4 s.FileHandle/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@1/4 s.FileHandle/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: s.FileHandle: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/6 & Log-AST:1$2\1@0/7 Tile{ AsIs: s.FileHandle/5 } {*}/8 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_Logm_AST_B1S2L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z1("Map@1", COOKIE1_, COOKIE2_, func_gen_Map_Z1);


static refalrts::FnResult func_gen_Logm_PutLine_B1Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Log-PutLine:1@4/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Log-PutLine:1@4/4 (/7 e.new1/5 )/8 e.new2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new1 as range 5
  // closed e.new2 as range 2
  do {
    // </0 & Log-PutLine:1@4/4 (/7 e.SrcName/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.SrcName as range 9
    //DEBUG: e.SrcName: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Log-PutLine:1@4/4 (/7 e.SrcName/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Log-PutLine:1@4/4 (/7 e.SrcName/9 )/8 s.FileHandle/13 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.SrcName as range 9
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.SrcName: 9
    //DEBUG: s.FileHandle: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.FileHandle/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 HalfReuse: s.FileHandle13 /7 } </14 Tile{ HalfReuse: & Time/8 } >/15": HighLevelRASL code of file "/16 Tile{ AsIs: e.SrcName/9 } ':'/18 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[14]);
    refalrts::alloc_close_call(vm, context[15]);
    refalrts::alloc_chars(vm, context[16], context[17], ": HighLevelRASL code of file ", 29);
    refalrts::alloc_char(vm, context[18], ':');
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_svar( context[7], context[13] );
    refalrts::reinit_name(context[8], functions[efunc_Time]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_elem( res, context[18] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[14] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Log-PutLine:1@4/4 (/7 e.SrcName/5 )/8 e.dyn/2 >/1
  // closed e.SrcName as range 5
  // closed e.dyn as range 2
  //DEBUG: e.SrcName: 5
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Log-PutLine:1@0/4 AsIs: (/7 }"HighLevelRASL code of file "/9 Tile{ AsIs: e.SrcName/5 } ':'/11 Tile{ AsIs: )/8 AsIs: e.dyn/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[9], context[10], "HighLevelRASL code of file ", 27);
  refalrts::alloc_char(vm, context[11], ':');
  refalrts::update_name(context[4], functions[efunc_gen_Logm_PutLine_B1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Logm_PutLine_B1Z4("Log-PutLine:1@4", COOKIE1_, COOKIE2_, func_gen_Logm_PutLine_B1Z4);


static refalrts::FnResult func_gen_Map_Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 114 elems
  refalrts::Iter context[114];
  refalrts::zeros( context, 114 );
  // </0 & Map@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@2/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@2/4 s.new3/5 t.new4/8 e.new5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new5 as range 6
    do {
      // </0 & Map@2/4 s.new6/5 (/8 s.new7/14 e.new8/12 )/9 e.new9/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.new9 as range 10
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.new8 as range 12
      do {
        // </0 & Map@2/4 s.new10/5 (/8 s.new11/14 s.new12/19 e.new13/15 )/9 e.new14/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        // closed e.new14 as range 17
        if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
          continue;
        // closed e.new13 as range 15
        do {
          // </0 & Map@2/4 s.new15/5 (/8 s.new16/14 s.new17/19 (/26 e.new18/24 )/27 e.new19/20 )/9 e.new20/22 >/1
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          context[23] = context[18];
          context[24] = 0;
          context[25] = 0;
          context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
          if( ! context[26] )
            continue;
          refalrts::bracket_pointers(context[26], context[27]);
          // closed e.new18 as range 24
          // closed e.new19 as range 20
          // closed e.new20 as range 22
          do {
            // </0 & Map@2/4 s.new21/5 (/8 # Function/14 s.new22/19 (/26 e.new24/28 )/27 e.new23/30 )/9 e.new25/32 >/1
            context[28] = context[24];
            context[29] = context[25];
            context[30] = context[20];
            context[31] = context[21];
            context[32] = context[22];
            context[33] = context[23];
            if( ! refalrts::ident_term( identifiers[ident_Function], context[14] ) )
              continue;
            // closed e.new24 as range 28
            // closed e.new23 as range 30
            // closed e.new25 as range 32
            do {
              // </0 & Map@2/4 s.FileHandle/5 (/8 # Function/14 # GN-Local/19 (/26 e.3/34 )/27 e.2/36 )/9 e.Tail/38 >/1
              context[34] = context[28];
              context[35] = context[29];
              context[36] = context[30];
              context[37] = context[31];
              context[38] = context[32];
              context[39] = context[33];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[19] ) )
                continue;
              // closed e.3 as range 34
              // closed e.2 as range 36
              // closed e.Tail as range 38
              //DEBUG: s.FileHandle: 5
              //DEBUG: e.3: 34
              //DEBUG: e.2: 36
              //DEBUG: e.Tail: 38

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: </19 HalfReuse: & DisplayName/26 AsIs: e.3/34 HalfReuse: >/27 }" {"/40 >/42 </43 & Map@3/44 s.FileHandle/5/45 Tile{ AsIs: e.2/36 } >/46 </47 & Putout/48 s.FileHandle/5/49"  }\n"/50 >/52 </53 & Map@2/54 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/38 AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[40], context[41], " {", 2);
              refalrts::alloc_close_call(vm, context[42]);
              refalrts::alloc_open_call(vm, context[43]);
              refalrts::alloc_name(vm, context[44], functions[efunc_gen_Map_Z3]);
              refalrts::copy_stvar(vm, context[45], context[5]);
              refalrts::alloc_close_call(vm, context[46]);
              refalrts::alloc_open_call(vm, context[47]);
              refalrts::alloc_name(vm, context[48], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[49], context[5]);
              refalrts::alloc_chars(vm, context[50], context[51], "  }\n", 4);
              refalrts::alloc_close_call(vm, context[52]);
              refalrts::alloc_open_call(vm, context[53]);
              refalrts::alloc_name(vm, context[54], functions[efunc_gen_Map_Z2]);
              refalrts::update_name(context[4], functions[efunc_Putout]);
              refalrts::reinit_char(context[8], ' ');
              refalrts::reinit_char(context[14], ' ');
              refalrts::reinit_open_call(context[19]);
              refalrts::reinit_name(context[26], functions[efunc_DisplayName]);
              refalrts::reinit_close_call(context[27]);
              refalrts::reinit_svar( context[9], context[5] );
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[53] );
              refalrts::push_stack( vm, context[52] );
              refalrts::push_stack( vm, context[47] );
              refalrts::push_stack( vm, context[46] );
              refalrts::push_stack( vm, context[43] );
              refalrts::push_stack( vm, context[42] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[27] );
              refalrts::push_stack( vm, context[19] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[9];
              res = refalrts::splice_evar( res, context[46], context[54] );
              res = refalrts::splice_evar( res, context[36], context[37] );
              res = refalrts::splice_evar( res, context[40], context[45] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@2/4 s.FileHandle/5 (/8 # Function/14 # GN-Entry/19 (/26 e.3/34 )/27 e.2/36 )/9 e.Tail/38 >/1
              context[34] = context[28];
              context[35] = context[29];
              context[36] = context[30];
              context[37] = context[31];
              context[38] = context[32];
              context[39] = context[33];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[19] ) )
                continue;
              // closed e.3 as range 34
              // closed e.2 as range 36
              // closed e.Tail as range 38
              //DEBUG: s.FileHandle: 5
              //DEBUG: e.3: 34
              //DEBUG: e.2: 36
              //DEBUG: e.Tail: 38

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '$'/19 HalfReuse: 'E'/26 }"NT"/40 Tile{ HalfReuse: 'R'/27 }"Y "/42 </44 & DisplayName/45 Tile{ AsIs: e.3/34 } >/46" {"/47 >/49 </50 & Map@3/51 s.FileHandle/5/52 Tile{ AsIs: e.2/36 } >/53 </54 & Putout/55 s.FileHandle/5/56"  }\n"/57 >/59 </60 & Map@2/61 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/38 AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[40], context[41], "NT", 2);
              refalrts::alloc_chars(vm, context[42], context[43], "Y ", 2);
              refalrts::alloc_open_call(vm, context[44]);
              refalrts::alloc_name(vm, context[45], functions[efunc_DisplayName]);
              refalrts::alloc_close_call(vm, context[46]);
              refalrts::alloc_chars(vm, context[47], context[48], " {", 2);
              refalrts::alloc_close_call(vm, context[49]);
              refalrts::alloc_open_call(vm, context[50]);
              refalrts::alloc_name(vm, context[51], functions[efunc_gen_Map_Z3]);
              refalrts::copy_stvar(vm, context[52], context[5]);
              refalrts::alloc_close_call(vm, context[53]);
              refalrts::alloc_open_call(vm, context[54]);
              refalrts::alloc_name(vm, context[55], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[56], context[5]);
              refalrts::alloc_chars(vm, context[57], context[58], "  }\n", 4);
              refalrts::alloc_close_call(vm, context[59]);
              refalrts::alloc_open_call(vm, context[60]);
              refalrts::alloc_name(vm, context[61], functions[efunc_gen_Map_Z2]);
              refalrts::update_name(context[4], functions[efunc_Putout]);
              refalrts::reinit_char(context[8], ' ');
              refalrts::reinit_char(context[14], ' ');
              refalrts::reinit_char(context[19], '$');
              refalrts::reinit_char(context[26], 'E');
              refalrts::reinit_char(context[27], 'R');
              refalrts::reinit_svar( context[9], context[5] );
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[60] );
              refalrts::push_stack( vm, context[59] );
              refalrts::push_stack( vm, context[54] );
              refalrts::push_stack( vm, context[53] );
              refalrts::push_stack( vm, context[50] );
              refalrts::push_stack( vm, context[49] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[46] );
              refalrts::push_stack( vm, context[44] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[9];
              res = refalrts::splice_evar( res, context[53], context[61] );
              res = refalrts::splice_evar( res, context[36], context[37] );
              res = refalrts::splice_evar( res, context[46], context[52] );
              res = refalrts::splice_evar( res, context[34], context[35] );
              res = refalrts::splice_evar( res, context[42], context[45] );
              res = refalrts::splice_elem( res, context[27] );
              res = refalrts::splice_evar( res, context[40], context[41] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@2/4 s.FileHandle/5 (/8 # Function/14 s.ScopeClass/19 (/26 e.3/34 )/27 e.2/36 )/9 e.Tail/38 >/1
            context[34] = context[28];
            context[35] = context[29];
            context[36] = context[30];
            context[37] = context[31];
            context[38] = context[32];
            context[39] = context[33];
            // closed e.3 as range 34
            // closed e.2 as range 36
            // closed e.Tail as range 38
            //DEBUG: s.FileHandle: 5
            //DEBUG: s.ScopeClass: 19
            //DEBUG: e.3: 34
            //DEBUG: e.2: 36
            //DEBUG: e.Tail: 38

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: </8 HalfReuse: & FnName*2/14 AsIs: s.ScopeClass/19 } Tile{ AsIs: e.3/34 } Tile{ HalfReuse: >/26 } Tile{ HalfReuse: ' '/27 } '{'/40 >/41 </42 & Map@3/43 s.FileHandle/5/44 Tile{ AsIs: e.2/36 } >/45 </46 & Putout/47 s.FileHandle/5/48"  }\n"/49 >/51 </52 & Map@2/53 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/38 AsIs: >/1 ]] }
            refalrts::alloc_char(vm, context[40], '{');
            refalrts::alloc_close_call(vm, context[41]);
            refalrts::alloc_open_call(vm, context[42]);
            refalrts::alloc_name(vm, context[43], functions[efunc_gen_Map_Z3]);
            refalrts::copy_stvar(vm, context[44], context[5]);
            refalrts::alloc_close_call(vm, context[45]);
            refalrts::alloc_open_call(vm, context[46]);
            refalrts::alloc_name(vm, context[47], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[48], context[5]);
            refalrts::alloc_chars(vm, context[49], context[50], "  }\n", 4);
            refalrts::alloc_close_call(vm, context[51]);
            refalrts::alloc_open_call(vm, context[52]);
            refalrts::alloc_name(vm, context[53], functions[efunc_gen_Map_Z2]);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_open_call(context[8]);
            refalrts::reinit_name(context[14], functions[efunc_gen_FnName_D2]);
            refalrts::reinit_close_call(context[26]);
            refalrts::reinit_char(context[27], ' ');
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[52] );
            refalrts::push_stack( vm, context[51] );
            refalrts::push_stack( vm, context[46] );
            refalrts::push_stack( vm, context[45] );
            refalrts::push_stack( vm, context[42] );
            refalrts::push_stack( vm, context[41] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[26] );
            refalrts::push_stack( vm, context[8] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[45], context[53] );
            res = refalrts::splice_evar( res, context[36], context[37] );
            res = refalrts::splice_evar( res, context[40], context[44] );
            res = refalrts::splice_elem( res, context[27] );
            res = refalrts::splice_elem( res, context[26] );
            res = refalrts::splice_evar( res, context[34], context[35] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@2/4 s.new21/5 (/8 # CmdNativeFunction/14 s.new22/19 (/26 e.new25/28 )/27 t.new23/34 e.new24/30 )/9 e.new26/32 >/1
            context[28] = context[24];
            context[29] = context[25];
            context[30] = context[20];
            context[31] = context[21];
            context[32] = context[22];
            context[33] = context[23];
            if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[14] ) )
              continue;
            // closed e.new25 as range 28
            // closed e.new26 as range 32
            context[35] = refalrts::tvar_left( context[34], context[30], context[31] );
            if( ! context[35] )
              continue;
            // closed e.new24 as range 30
            do {
              // </0 & Map@2/4 s.new27/5 (/8 # CmdNativeFunction/14 # GN-Local/19 (/26 e.new30/36 )/27 t.new28/34 e.new29/38 )/9 e.new31/40 >/1
              context[36] = context[28];
              context[37] = context[29];
              context[38] = context[30];
              context[39] = context[31];
              context[40] = context[32];
              context[41] = context[33];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[19] ) )
                continue;
              // closed e.new30 as range 36
              // closed e.new29 as range 38
              // closed e.new31 as range 40
              do {
                // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 # GN-Local/19 (/26 e.3/42 )/27 s.LineNumber/34 e.4/44 )/9 e.Tail/46 >/1
                context[42] = context[36];
                context[43] = context[37];
                context[44] = context[38];
                context[45] = context[39];
                context[46] = context[40];
                context[47] = context[41];
                if( ! refalrts::svar_term( context[34], context[34] ) )
                  continue;
                // closed e.3 as range 42
                // closed e.4 as range 44
                // closed e.Tail as range 46
                //DEBUG: s.LineNumber: 34
                //DEBUG: s.FileHandle: 5
                //DEBUG: e.3: 42
                //DEBUG: e.4: 44
                //DEBUG: e.Tail: 46

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: </19 HalfReuse: & DisplayName/26 AsIs: e.3/42 HalfReuse: >/27 }" :: native {"/48 >/50 </51 & Putout/52 s.FileHandle/5/53"  #line "/54 </56 & Symb/57 Tile{ AsIs: s.LineNumber/34 } >/58 >/59 </60 & Putout/61 s.FileHandle/5/62"    ======================================"/63 >/65 </66 & Map@4/67 s.FileHandle/5/68 Tile{ AsIs: e.4/44 } >/69 </70 & Putout/71 s.FileHandle/5/72"    ======================================"/73 >/75 </76 & Putout/77 s.FileHandle/5/78"  }\n"/79 >/81 </82 & Map@2/83 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/46 AsIs: >/1 ]] }
                refalrts::alloc_chars(vm, context[48], context[49], " :: native {", 12);
                refalrts::alloc_close_call(vm, context[50]);
                refalrts::alloc_open_call(vm, context[51]);
                refalrts::alloc_name(vm, context[52], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[53], context[5]);
                refalrts::alloc_chars(vm, context[54], context[55], "  #line ", 8);
                refalrts::alloc_open_call(vm, context[56]);
                refalrts::alloc_name(vm, context[57], functions[efunc_Symb]);
                refalrts::alloc_close_call(vm, context[58]);
                refalrts::alloc_close_call(vm, context[59]);
                refalrts::alloc_open_call(vm, context[60]);
                refalrts::alloc_name(vm, context[61], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[62], context[5]);
                refalrts::alloc_chars(vm, context[63], context[64], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[65]);
                refalrts::alloc_open_call(vm, context[66]);
                refalrts::alloc_name(vm, context[67], functions[efunc_gen_Map_Z4]);
                refalrts::copy_stvar(vm, context[68], context[5]);
                refalrts::alloc_close_call(vm, context[69]);
                refalrts::alloc_open_call(vm, context[70]);
                refalrts::alloc_name(vm, context[71], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[72], context[5]);
                refalrts::alloc_chars(vm, context[73], context[74], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[75]);
                refalrts::alloc_open_call(vm, context[76]);
                refalrts::alloc_name(vm, context[77], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[78], context[5]);
                refalrts::alloc_chars(vm, context[79], context[80], "  }\n", 4);
                refalrts::alloc_close_call(vm, context[81]);
                refalrts::alloc_open_call(vm, context[82]);
                refalrts::alloc_name(vm, context[83], functions[efunc_gen_Map_Z2]);
                refalrts::update_name(context[4], functions[efunc_Putout]);
                refalrts::reinit_char(context[8], ' ');
                refalrts::reinit_char(context[14], ' ');
                refalrts::reinit_open_call(context[19]);
                refalrts::reinit_name(context[26], functions[efunc_DisplayName]);
                refalrts::reinit_close_call(context[27]);
                refalrts::reinit_svar( context[9], context[5] );
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[82] );
                refalrts::push_stack( vm, context[81] );
                refalrts::push_stack( vm, context[76] );
                refalrts::push_stack( vm, context[75] );
                refalrts::push_stack( vm, context[70] );
                refalrts::push_stack( vm, context[69] );
                refalrts::push_stack( vm, context[66] );
                refalrts::push_stack( vm, context[65] );
                refalrts::push_stack( vm, context[60] );
                refalrts::push_stack( vm, context[59] );
                refalrts::push_stack( vm, context[51] );
                refalrts::push_stack( vm, context[58] );
                refalrts::push_stack( vm, context[56] );
                refalrts::push_stack( vm, context[50] );
                refalrts::push_stack( vm, context[0] );
                refalrts::push_stack( vm, context[27] );
                refalrts::push_stack( vm, context[19] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[9];
                res = refalrts::splice_evar( res, context[69], context[83] );
                res = refalrts::splice_evar( res, context[44], context[45] );
                res = refalrts::splice_evar( res, context[58], context[68] );
                res = refalrts::splice_elem( res, context[34] );
                res = refalrts::splice_evar( res, context[48], context[57] );
                refalrts::use( res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              do {
                // </0 & Map@2/4 s.new32/5 (/8 # CmdNativeFunction/14 # GN-Local/19 (/26 e.new37/42 )/27 (/34 s.new33/50 t.new34/51 e.new35/48 )/35 e.new36/44 )/9 e.new38/46 >/1
                context[42] = context[36];
                context[43] = context[37];
                context[44] = context[38];
                context[45] = context[39];
                context[46] = context[40];
                context[47] = context[41];
                context[48] = 0;
                context[49] = 0;
                if( ! refalrts::brackets_term( context[48], context[49], context[34] ) )
                  continue;
                // closed e.new37 as range 42
                // closed e.new36 as range 44
                // closed e.new38 as range 46
                if( ! refalrts::svar_left( context[50], context[48], context[49] ) )
                  continue;
                context[52] = refalrts::tvar_left( context[51], context[48], context[49] );
                if( ! context[52] )
                  continue;
                // closed e.new35 as range 48
                do {
                  // </0 & Map@2/4 s.new39/5 (/8 # CmdNativeFunction/14 # GN-Local/19 (/26 e.new44/53 )/27 (/34 s.new40/50 s.new41/51 e.new42/55 )/35 e.new43/57 )/9 e.new45/59 >/1
                  context[53] = context[42];
                  context[54] = context[43];
                  context[55] = context[48];
                  context[56] = context[49];
                  context[57] = context[44];
                  context[58] = context[45];
                  context[59] = context[46];
                  context[60] = context[47];
                  if( ! refalrts::svar_term( context[51], context[51] ) )
                    continue;
                  // closed e.new44 as range 53
                  // closed e.new42 as range 55
                  // closed e.new43 as range 57
                  // closed e.new45 as range 59
                  do {
                    // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 # GN-Local/19 (/26 e.3/61 )/27 (/34 # FileLine/50 s.Line/51 e.1/63 )/35 e.4/65 )/9 e.Tail/67 >/1
                    context[61] = context[53];
                    context[62] = context[54];
                    context[63] = context[55];
                    context[64] = context[56];
                    context[65] = context[57];
                    context[66] = context[58];
                    context[67] = context[59];
                    context[68] = context[60];
                    if( ! refalrts::ident_term( identifiers[ident_FileLine], context[50] ) )
                      continue;
                    // closed e.3 as range 61
                    // closed e.1 as range 63
                    // closed e.4 as range 65
                    // closed e.Tail as range 67
                    //DEBUG: s.FileHandle: 5
                    //DEBUG: s.Line: 51
                    //DEBUG: e.3: 61
                    //DEBUG: e.1: 63
                    //DEBUG: e.4: 65
                    //DEBUG: e.Tail: 67

                    refalrts::reset_allocator(vm);
                    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: </19 HalfReuse: & DisplayName/26 AsIs: e.3/61 HalfReuse: >/27 HalfReuse: ' '/34 HalfReuse: ':'/50 }": n"/69 Tile{ HalfReuse: 'a'/35 }"tive {"/71 >/73 </74 & Putout/75 s.FileHandle/5/76"  #line "/77 </79 & Symb/80 Tile{ AsIs: s.Line/51 } >/81" \""/82 </84 & EscapeString/85 Tile{ AsIs: e.1/63 } >/86 '\"'/87 >/88 </89 & Putout/90 s.FileHandle/5/91"    ======================================"/92 >/94 </95 & Map@4/96 s.FileHandle/5/97 Tile{ AsIs: e.4/65 } >/98 </99 & Putout/100 s.FileHandle/5/101"    ======================================"/102 >/104 </105 & Putout/106 s.FileHandle/5/107"  }\n"/108 >/110 </111 & Map@2/112 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/67 AsIs: >/1 ]] }
                    refalrts::alloc_chars(vm, context[69], context[70], ": n", 3);
                    refalrts::alloc_chars(vm, context[71], context[72], "tive {", 6);
                    refalrts::alloc_close_call(vm, context[73]);
                    refalrts::alloc_open_call(vm, context[74]);
                    refalrts::alloc_name(vm, context[75], functions[efunc_Putout]);
                    refalrts::copy_stvar(vm, context[76], context[5]);
                    refalrts::alloc_chars(vm, context[77], context[78], "  #line ", 8);
                    refalrts::alloc_open_call(vm, context[79]);
                    refalrts::alloc_name(vm, context[80], functions[efunc_Symb]);
                    refalrts::alloc_close_call(vm, context[81]);
                    refalrts::alloc_chars(vm, context[82], context[83], " \"", 2);
                    refalrts::alloc_open_call(vm, context[84]);
                    refalrts::alloc_name(vm, context[85], functions[efunc_EscapeString]);
                    refalrts::alloc_close_call(vm, context[86]);
                    refalrts::alloc_char(vm, context[87], '\"');
                    refalrts::alloc_close_call(vm, context[88]);
                    refalrts::alloc_open_call(vm, context[89]);
                    refalrts::alloc_name(vm, context[90], functions[efunc_Putout]);
                    refalrts::copy_stvar(vm, context[91], context[5]);
                    refalrts::alloc_chars(vm, context[92], context[93], "    ======================================", 42);
                    refalrts::alloc_close_call(vm, context[94]);
                    refalrts::alloc_open_call(vm, context[95]);
                    refalrts::alloc_name(vm, context[96], functions[efunc_gen_Map_Z4]);
                    refalrts::copy_stvar(vm, context[97], context[5]);
                    refalrts::alloc_close_call(vm, context[98]);
                    refalrts::alloc_open_call(vm, context[99]);
                    refalrts::alloc_name(vm, context[100], functions[efunc_Putout]);
                    refalrts::copy_stvar(vm, context[101], context[5]);
                    refalrts::alloc_chars(vm, context[102], context[103], "    ======================================", 42);
                    refalrts::alloc_close_call(vm, context[104]);
                    refalrts::alloc_open_call(vm, context[105]);
                    refalrts::alloc_name(vm, context[106], functions[efunc_Putout]);
                    refalrts::copy_stvar(vm, context[107], context[5]);
                    refalrts::alloc_chars(vm, context[108], context[109], "  }\n", 4);
                    refalrts::alloc_close_call(vm, context[110]);
                    refalrts::alloc_open_call(vm, context[111]);
                    refalrts::alloc_name(vm, context[112], functions[efunc_gen_Map_Z2]);
                    refalrts::update_name(context[4], functions[efunc_Putout]);
                    refalrts::reinit_char(context[8], ' ');
                    refalrts::reinit_char(context[14], ' ');
                    refalrts::reinit_open_call(context[19]);
                    refalrts::reinit_name(context[26], functions[efunc_DisplayName]);
                    refalrts::reinit_close_call(context[27]);
                    refalrts::reinit_char(context[34], ' ');
                    refalrts::reinit_char(context[50], ':');
                    refalrts::reinit_char(context[35], 'a');
                    refalrts::reinit_svar( context[9], context[5] );
                    refalrts::push_stack( vm, context[1] );
                    refalrts::push_stack( vm, context[111] );
                    refalrts::push_stack( vm, context[110] );
                    refalrts::push_stack( vm, context[105] );
                    refalrts::push_stack( vm, context[104] );
                    refalrts::push_stack( vm, context[99] );
                    refalrts::push_stack( vm, context[98] );
                    refalrts::push_stack( vm, context[95] );
                    refalrts::push_stack( vm, context[94] );
                    refalrts::push_stack( vm, context[89] );
                    refalrts::push_stack( vm, context[88] );
                    refalrts::push_stack( vm, context[74] );
                    refalrts::push_stack( vm, context[86] );
                    refalrts::push_stack( vm, context[84] );
                    refalrts::push_stack( vm, context[81] );
                    refalrts::push_stack( vm, context[79] );
                    refalrts::push_stack( vm, context[73] );
                    refalrts::push_stack( vm, context[0] );
                    refalrts::push_stack( vm, context[27] );
                    refalrts::push_stack( vm, context[19] );
                    refalrts::Iter trash_prev = arg_begin->prev;
                    refalrts::use(trash_prev);
                    refalrts::Iter res = context[9];
                    res = refalrts::splice_evar( res, context[98], context[112] );
                    res = refalrts::splice_evar( res, context[65], context[66] );
                    res = refalrts::splice_evar( res, context[86], context[97] );
                    res = refalrts::splice_evar( res, context[63], context[64] );
                    res = refalrts::splice_evar( res, context[81], context[85] );
                    res = refalrts::splice_elem( res, context[51] );
                    res = refalrts::splice_evar( res, context[71], context[80] );
                    res = refalrts::splice_elem( res, context[35] );
                    res = refalrts::splice_evar( res, context[69], context[70] );
                    refalrts::use( res );
                    return refalrts::cSuccess;
                  } while ( 0 );
                  refalrts::stop_sentence(vm);

                  // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 # GN-Local/19 (/26 e.3/61 )/27 (/34 # RowCol/50 s.Row/51 s.Col/69 )/35 e.4/65 )/9 e.Tail/67 >/1
                  context[61] = context[53];
                  context[62] = context[54];
                  context[63] = context[55];
                  context[64] = context[56];
                  context[65] = context[57];
                  context[66] = context[58];
                  context[67] = context[59];
                  context[68] = context[60];
                  if( ! refalrts::ident_term( identifiers[ident_RowCol], context[50] ) )
                    continue;
                  // closed e.3 as range 61
                  // closed e.4 as range 65
                  // closed e.Tail as range 67
                  if( ! refalrts::svar_left( context[69], context[63], context[64] ) )
                    continue;
                  if( ! refalrts::empty_seq( context[63], context[64] ) )
                    continue;
                  //DEBUG: s.FileHandle: 5
                  //DEBUG: s.Row: 51
                  //DEBUG: e.3: 61
                  //DEBUG: e.4: 65
                  //DEBUG: e.Tail: 67
                  //DEBUG: s.Col: 69

                  refalrts::reset_allocator(vm);
                  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: </19 HalfReuse: & DisplayName/26 AsIs: e.3/61 HalfReuse: >/27 HalfReuse: ' '/34 HalfReuse: ':'/50 }": native {"/70 >/72 </73 & Putout/74 s.FileHandle/5/75"  #line "/76 </78 & Symb/79 Tile{ AsIs: s.Row/51 } >/80 ':'/81 </82 & Symb/83 Tile{ AsIs: s.Col/69 HalfReuse: >/35 } >/84 </85 & Putout/86 s.FileHandle/5/87"    ======================================"/88 >/90 </91 & Map@4/92 s.FileHandle/5/93 Tile{ AsIs: e.4/65 } >/94 </95 & Putout/96 s.FileHandle/5/97"    ======================================"/98 >/100 </101 & Putout/102 s.FileHandle/5/103"  }\n"/104 >/106 </107 & Map@2/108 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/67 AsIs: >/1 ]] }
                  refalrts::alloc_chars(vm, context[70], context[71], ": native {", 10);
                  refalrts::alloc_close_call(vm, context[72]);
                  refalrts::alloc_open_call(vm, context[73]);
                  refalrts::alloc_name(vm, context[74], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[75], context[5]);
                  refalrts::alloc_chars(vm, context[76], context[77], "  #line ", 8);
                  refalrts::alloc_open_call(vm, context[78]);
                  refalrts::alloc_name(vm, context[79], functions[efunc_Symb]);
                  refalrts::alloc_close_call(vm, context[80]);
                  refalrts::alloc_char(vm, context[81], ':');
                  refalrts::alloc_open_call(vm, context[82]);
                  refalrts::alloc_name(vm, context[83], functions[efunc_Symb]);
                  refalrts::alloc_close_call(vm, context[84]);
                  refalrts::alloc_open_call(vm, context[85]);
                  refalrts::alloc_name(vm, context[86], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[87], context[5]);
                  refalrts::alloc_chars(vm, context[88], context[89], "    ======================================", 42);
                  refalrts::alloc_close_call(vm, context[90]);
                  refalrts::alloc_open_call(vm, context[91]);
                  refalrts::alloc_name(vm, context[92], functions[efunc_gen_Map_Z4]);
                  refalrts::copy_stvar(vm, context[93], context[5]);
                  refalrts::alloc_close_call(vm, context[94]);
                  refalrts::alloc_open_call(vm, context[95]);
                  refalrts::alloc_name(vm, context[96], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[97], context[5]);
                  refalrts::alloc_chars(vm, context[98], context[99], "    ======================================", 42);
                  refalrts::alloc_close_call(vm, context[100]);
                  refalrts::alloc_open_call(vm, context[101]);
                  refalrts::alloc_name(vm, context[102], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[103], context[5]);
                  refalrts::alloc_chars(vm, context[104], context[105], "  }\n", 4);
                  refalrts::alloc_close_call(vm, context[106]);
                  refalrts::alloc_open_call(vm, context[107]);
                  refalrts::alloc_name(vm, context[108], functions[efunc_gen_Map_Z2]);
                  refalrts::update_name(context[4], functions[efunc_Putout]);
                  refalrts::reinit_char(context[8], ' ');
                  refalrts::reinit_char(context[14], ' ');
                  refalrts::reinit_open_call(context[19]);
                  refalrts::reinit_name(context[26], functions[efunc_DisplayName]);
                  refalrts::reinit_close_call(context[27]);
                  refalrts::reinit_char(context[34], ' ');
                  refalrts::reinit_char(context[50], ':');
                  refalrts::reinit_close_call(context[35]);
                  refalrts::reinit_svar( context[9], context[5] );
                  refalrts::push_stack( vm, context[1] );
                  refalrts::push_stack( vm, context[107] );
                  refalrts::push_stack( vm, context[106] );
                  refalrts::push_stack( vm, context[101] );
                  refalrts::push_stack( vm, context[100] );
                  refalrts::push_stack( vm, context[95] );
                  refalrts::push_stack( vm, context[94] );
                  refalrts::push_stack( vm, context[91] );
                  refalrts::push_stack( vm, context[90] );
                  refalrts::push_stack( vm, context[85] );
                  refalrts::push_stack( vm, context[84] );
                  refalrts::push_stack( vm, context[73] );
                  refalrts::push_stack( vm, context[35] );
                  refalrts::push_stack( vm, context[82] );
                  refalrts::push_stack( vm, context[80] );
                  refalrts::push_stack( vm, context[78] );
                  refalrts::push_stack( vm, context[72] );
                  refalrts::push_stack( vm, context[0] );
                  refalrts::push_stack( vm, context[27] );
                  refalrts::push_stack( vm, context[19] );
                  refalrts::Iter trash_prev = arg_begin->prev;
                  refalrts::use(trash_prev);
                  refalrts::Iter res = context[9];
                  res = refalrts::splice_evar( res, context[94], context[108] );
                  res = refalrts::splice_evar( res, context[65], context[66] );
                  res = refalrts::splice_evar( res, context[84], context[93] );
                  res = refalrts::splice_evar( res, context[69], context[35] );
                  res = refalrts::splice_evar( res, context[80], context[83] );
                  res = refalrts::splice_elem( res, context[51] );
                  res = refalrts::splice_evar( res, context[70], context[79] );
                  refalrts::use( res );
                  return refalrts::cSuccess;
                } while ( 0 );
                refalrts::stop_sentence(vm);

                // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 # GN-Local/19 (/26 e.3/53 )/27 (/34 # FileRowCol/50 (/51 s.Row/63 s.Col/64 )/52 e.1/55 )/35 e.4/57 )/9 e.Tail/59 >/1
                context[53] = context[42];
                context[54] = context[43];
                context[55] = context[48];
                context[56] = context[49];
                context[57] = context[44];
                context[58] = context[45];
                context[59] = context[46];
                context[60] = context[47];
                context[61] = 0;
                context[62] = 0;
                if( ! refalrts::brackets_term( context[61], context[62], context[51] ) )
                  continue;
                if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[50] ) )
                  continue;
                // closed e.3 as range 53
                // closed e.1 as range 55
                // closed e.4 as range 57
                // closed e.Tail as range 59
                if( ! refalrts::svar_left( context[63], context[61], context[62] ) )
                  continue;
                if( ! refalrts::svar_left( context[64], context[61], context[62] ) )
                  continue;
                if( ! refalrts::empty_seq( context[61], context[62] ) )
                  continue;
                //DEBUG: s.FileHandle: 5
                //DEBUG: e.3: 53
                //DEBUG: e.1: 55
                //DEBUG: e.4: 57
                //DEBUG: e.Tail: 59
                //DEBUG: s.Row: 63
                //DEBUG: s.Col: 64

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: </19 HalfReuse: & DisplayName/26 AsIs: e.3/53 HalfReuse: >/27 HalfReuse: ' '/34 HalfReuse: ':'/50 HalfReuse: ':'/51 }" native {"/65 >/67 </68 & Putout/69 s.FileHandle/5/70"  #line "/71 </73 & Symb/74 Tile{ AsIs: s.Row/63 } >/75 ':'/76 </77 & Symb/78 Tile{ AsIs: s.Col/64 } >/79" \""/80 </82 Tile{ HalfReuse: & EscapeString/52 AsIs: e.1/55 HalfReuse: >/35 } '\"'/83 >/84 </85 & Putout/86 s.FileHandle/5/87"    ======================================"/88 >/90 </91 & Map@4/92 s.FileHandle/5/93 Tile{ AsIs: e.4/57 } >/94 </95 & Putout/96 s.FileHandle/5/97"    ======================================"/98 >/100 </101 & Putout/102 s.FileHandle/5/103"  }\n"/104 >/106 </107 & Map@2/108 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/59 AsIs: >/1 ]] }
                refalrts::alloc_chars(vm, context[65], context[66], " native {", 9);
                refalrts::alloc_close_call(vm, context[67]);
                refalrts::alloc_open_call(vm, context[68]);
                refalrts::alloc_name(vm, context[69], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[70], context[5]);
                refalrts::alloc_chars(vm, context[71], context[72], "  #line ", 8);
                refalrts::alloc_open_call(vm, context[73]);
                refalrts::alloc_name(vm, context[74], functions[efunc_Symb]);
                refalrts::alloc_close_call(vm, context[75]);
                refalrts::alloc_char(vm, context[76], ':');
                refalrts::alloc_open_call(vm, context[77]);
                refalrts::alloc_name(vm, context[78], functions[efunc_Symb]);
                refalrts::alloc_close_call(vm, context[79]);
                refalrts::alloc_chars(vm, context[80], context[81], " \"", 2);
                refalrts::alloc_open_call(vm, context[82]);
                refalrts::alloc_char(vm, context[83], '\"');
                refalrts::alloc_close_call(vm, context[84]);
                refalrts::alloc_open_call(vm, context[85]);
                refalrts::alloc_name(vm, context[86], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[87], context[5]);
                refalrts::alloc_chars(vm, context[88], context[89], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[90]);
                refalrts::alloc_open_call(vm, context[91]);
                refalrts::alloc_name(vm, context[92], functions[efunc_gen_Map_Z4]);
                refalrts::copy_stvar(vm, context[93], context[5]);
                refalrts::alloc_close_call(vm, context[94]);
                refalrts::alloc_open_call(vm, context[95]);
                refalrts::alloc_name(vm, context[96], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[97], context[5]);
                refalrts::alloc_chars(vm, context[98], context[99], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[100]);
                refalrts::alloc_open_call(vm, context[101]);
                refalrts::alloc_name(vm, context[102], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[103], context[5]);
                refalrts::alloc_chars(vm, context[104], context[105], "  }\n", 4);
                refalrts::alloc_close_call(vm, context[106]);
                refalrts::alloc_open_call(vm, context[107]);
                refalrts::alloc_name(vm, context[108], functions[efunc_gen_Map_Z2]);
                refalrts::update_name(context[4], functions[efunc_Putout]);
                refalrts::reinit_char(context[8], ' ');
                refalrts::reinit_char(context[14], ' ');
                refalrts::reinit_open_call(context[19]);
                refalrts::reinit_name(context[26], functions[efunc_DisplayName]);
                refalrts::reinit_close_call(context[27]);
                refalrts::reinit_char(context[34], ' ');
                refalrts::reinit_char(context[50], ':');
                refalrts::reinit_char(context[51], ':');
                refalrts::reinit_name(context[52], functions[efunc_EscapeString]);
                refalrts::reinit_close_call(context[35]);
                refalrts::reinit_svar( context[9], context[5] );
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[107] );
                refalrts::push_stack( vm, context[106] );
                refalrts::push_stack( vm, context[101] );
                refalrts::push_stack( vm, context[100] );
                refalrts::push_stack( vm, context[95] );
                refalrts::push_stack( vm, context[94] );
                refalrts::push_stack( vm, context[91] );
                refalrts::push_stack( vm, context[90] );
                refalrts::push_stack( vm, context[85] );
                refalrts::push_stack( vm, context[84] );
                refalrts::push_stack( vm, context[68] );
                refalrts::push_stack( vm, context[35] );
                refalrts::push_stack( vm, context[82] );
                refalrts::push_stack( vm, context[79] );
                refalrts::push_stack( vm, context[77] );
                refalrts::push_stack( vm, context[75] );
                refalrts::push_stack( vm, context[73] );
                refalrts::push_stack( vm, context[67] );
                refalrts::push_stack( vm, context[0] );
                refalrts::push_stack( vm, context[27] );
                refalrts::push_stack( vm, context[19] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[9];
                res = refalrts::splice_evar( res, context[94], context[108] );
                res = refalrts::splice_evar( res, context[57], context[58] );
                res = refalrts::splice_evar( res, context[83], context[93] );
                res = refalrts::splice_evar( res, context[52], context[35] );
                res = refalrts::splice_evar( res, context[79], context[82] );
                res = refalrts::splice_elem( res, context[64] );
                res = refalrts::splice_evar( res, context[75], context[78] );
                res = refalrts::splice_elem( res, context[63] );
                res = refalrts::splice_evar( res, context[65], context[74] );
                refalrts::use( res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 # GN-Local/19 (/26 e.3/42 )/27 t.2/34 e.4/44 )/9 e.Tail/46 >/1
              context[42] = context[36];
              context[43] = context[37];
              context[44] = context[38];
              context[45] = context[39];
              context[46] = context[40];
              context[47] = context[41];
              // closed e.3 as range 42
              // closed e.4 as range 44
              // closed e.Tail as range 46
              //DEBUG: t.2: 34
              //DEBUG: s.FileHandle: 5
              //DEBUG: e.3: 42
              //DEBUG: e.4: 44
              //DEBUG: e.Tail: 46

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: </19 HalfReuse: & DisplayName/26 AsIs: e.3/42 HalfReuse: >/27 }" :: native {"/48 >/50 </51 & Putout/52 s.FileHandle/5/53"  "/54 </56 & SrcPos*4/57 Tile{ AsIs: t.2/34 } >/58 >/59 </60 & Putout/61 s.FileHandle/5/62"    ======================================"/63 >/65 </66 & Map@4/67 s.FileHandle/5/68 Tile{ AsIs: e.4/44 } >/69 </70 & Putout/71 s.FileHandle/5/72"    ======================================"/73 >/75 </76 & Putout/77 s.FileHandle/5/78"  }\n"/79 >/81 </82 & Map@2/83 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/46 AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[48], context[49], " :: native {", 12);
              refalrts::alloc_close_call(vm, context[50]);
              refalrts::alloc_open_call(vm, context[51]);
              refalrts::alloc_name(vm, context[52], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[53], context[5]);
              refalrts::alloc_chars(vm, context[54], context[55], "  ", 2);
              refalrts::alloc_open_call(vm, context[56]);
              refalrts::alloc_name(vm, context[57], functions[efunc_gen_SrcPos_D4]);
              refalrts::alloc_close_call(vm, context[58]);
              refalrts::alloc_close_call(vm, context[59]);
              refalrts::alloc_open_call(vm, context[60]);
              refalrts::alloc_name(vm, context[61], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[62], context[5]);
              refalrts::alloc_chars(vm, context[63], context[64], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[65]);
              refalrts::alloc_open_call(vm, context[66]);
              refalrts::alloc_name(vm, context[67], functions[efunc_gen_Map_Z4]);
              refalrts::copy_stvar(vm, context[68], context[5]);
              refalrts::alloc_close_call(vm, context[69]);
              refalrts::alloc_open_call(vm, context[70]);
              refalrts::alloc_name(vm, context[71], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[72], context[5]);
              refalrts::alloc_chars(vm, context[73], context[74], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[75]);
              refalrts::alloc_open_call(vm, context[76]);
              refalrts::alloc_name(vm, context[77], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[78], context[5]);
              refalrts::alloc_chars(vm, context[79], context[80], "  }\n", 4);
              refalrts::alloc_close_call(vm, context[81]);
              refalrts::alloc_open_call(vm, context[82]);
              refalrts::alloc_name(vm, context[83], functions[efunc_gen_Map_Z2]);
              refalrts::update_name(context[4], functions[efunc_Putout]);
              refalrts::reinit_char(context[8], ' ');
              refalrts::reinit_char(context[14], ' ');
              refalrts::reinit_open_call(context[19]);
              refalrts::reinit_name(context[26], functions[efunc_DisplayName]);
              refalrts::reinit_close_call(context[27]);
              refalrts::reinit_svar( context[9], context[5] );
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[82] );
              refalrts::push_stack( vm, context[81] );
              refalrts::push_stack( vm, context[76] );
              refalrts::push_stack( vm, context[75] );
              refalrts::push_stack( vm, context[70] );
              refalrts::push_stack( vm, context[69] );
              refalrts::push_stack( vm, context[66] );
              refalrts::push_stack( vm, context[65] );
              refalrts::push_stack( vm, context[60] );
              refalrts::push_stack( vm, context[59] );
              refalrts::push_stack( vm, context[51] );
              refalrts::push_stack( vm, context[58] );
              refalrts::push_stack( vm, context[56] );
              refalrts::push_stack( vm, context[50] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[27] );
              refalrts::push_stack( vm, context[19] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[9];
              res = refalrts::splice_evar( res, context[69], context[83] );
              res = refalrts::splice_evar( res, context[44], context[45] );
              res = refalrts::splice_evar( res, context[58], context[68] );
              res = refalrts::splice_evar( res, context[34], context[35] );
              res = refalrts::splice_evar( res, context[48], context[57] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@2/4 s.new27/5 (/8 # CmdNativeFunction/14 # GN-Entry/19 (/26 e.new30/36 )/27 t.new28/34 e.new29/38 )/9 e.new31/40 >/1
              context[36] = context[28];
              context[37] = context[29];
              context[38] = context[30];
              context[39] = context[31];
              context[40] = context[32];
              context[41] = context[33];
              if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[19] ) )
                continue;
              // closed e.new30 as range 36
              // closed e.new29 as range 38
              // closed e.new31 as range 40
              do {
                // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 # GN-Entry/19 (/26 e.3/42 )/27 s.LineNumber/34 e.4/44 )/9 e.Tail/46 >/1
                context[42] = context[36];
                context[43] = context[37];
                context[44] = context[38];
                context[45] = context[39];
                context[46] = context[40];
                context[47] = context[41];
                if( ! refalrts::svar_term( context[34], context[34] ) )
                  continue;
                // closed e.3 as range 42
                // closed e.4 as range 44
                // closed e.Tail as range 46
                //DEBUG: s.LineNumber: 34
                //DEBUG: s.FileHandle: 5
                //DEBUG: e.3: 42
                //DEBUG: e.4: 44
                //DEBUG: e.Tail: 46

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '$'/19 HalfReuse: 'E'/26 }"NTRY "/48 </50 & DisplayName/51 Tile{ AsIs: e.3/42 } >/52" :: native {"/53 >/55 </56 & Putout/57 s.FileHandle/5/58"  #line "/59 </61 Tile{ HalfReuse: & Symb/27 AsIs: s.LineNumber/34 } >/62 >/63 </64 & Putout/65 s.FileHandle/5/66"    ======================================"/67 >/69 </70 & Map@4/71 s.FileHandle/5/72 Tile{ AsIs: e.4/44 } >/73 </74 & Putout/75 s.FileHandle/5/76"    ======================================"/77 >/79 </80 & Putout/81 s.FileHandle/5/82"  }\n"/83 >/85 </86 & Map@2/87 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/46 AsIs: >/1 ]] }
                refalrts::alloc_chars(vm, context[48], context[49], "NTRY ", 5);
                refalrts::alloc_open_call(vm, context[50]);
                refalrts::alloc_name(vm, context[51], functions[efunc_DisplayName]);
                refalrts::alloc_close_call(vm, context[52]);
                refalrts::alloc_chars(vm, context[53], context[54], " :: native {", 12);
                refalrts::alloc_close_call(vm, context[55]);
                refalrts::alloc_open_call(vm, context[56]);
                refalrts::alloc_name(vm, context[57], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[58], context[5]);
                refalrts::alloc_chars(vm, context[59], context[60], "  #line ", 8);
                refalrts::alloc_open_call(vm, context[61]);
                refalrts::alloc_close_call(vm, context[62]);
                refalrts::alloc_close_call(vm, context[63]);
                refalrts::alloc_open_call(vm, context[64]);
                refalrts::alloc_name(vm, context[65], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[66], context[5]);
                refalrts::alloc_chars(vm, context[67], context[68], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[69]);
                refalrts::alloc_open_call(vm, context[70]);
                refalrts::alloc_name(vm, context[71], functions[efunc_gen_Map_Z4]);
                refalrts::copy_stvar(vm, context[72], context[5]);
                refalrts::alloc_close_call(vm, context[73]);
                refalrts::alloc_open_call(vm, context[74]);
                refalrts::alloc_name(vm, context[75], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[76], context[5]);
                refalrts::alloc_chars(vm, context[77], context[78], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[79]);
                refalrts::alloc_open_call(vm, context[80]);
                refalrts::alloc_name(vm, context[81], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[82], context[5]);
                refalrts::alloc_chars(vm, context[83], context[84], "  }\n", 4);
                refalrts::alloc_close_call(vm, context[85]);
                refalrts::alloc_open_call(vm, context[86]);
                refalrts::alloc_name(vm, context[87], functions[efunc_gen_Map_Z2]);
                refalrts::update_name(context[4], functions[efunc_Putout]);
                refalrts::reinit_char(context[8], ' ');
                refalrts::reinit_char(context[14], ' ');
                refalrts::reinit_char(context[19], '$');
                refalrts::reinit_char(context[26], 'E');
                refalrts::reinit_name(context[27], functions[efunc_Symb]);
                refalrts::reinit_svar( context[9], context[5] );
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[86] );
                refalrts::push_stack( vm, context[85] );
                refalrts::push_stack( vm, context[80] );
                refalrts::push_stack( vm, context[79] );
                refalrts::push_stack( vm, context[74] );
                refalrts::push_stack( vm, context[73] );
                refalrts::push_stack( vm, context[70] );
                refalrts::push_stack( vm, context[69] );
                refalrts::push_stack( vm, context[64] );
                refalrts::push_stack( vm, context[63] );
                refalrts::push_stack( vm, context[56] );
                refalrts::push_stack( vm, context[62] );
                refalrts::push_stack( vm, context[61] );
                refalrts::push_stack( vm, context[55] );
                refalrts::push_stack( vm, context[0] );
                refalrts::push_stack( vm, context[52] );
                refalrts::push_stack( vm, context[50] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[9];
                res = refalrts::splice_evar( res, context[73], context[87] );
                res = refalrts::splice_evar( res, context[44], context[45] );
                res = refalrts::splice_evar( res, context[62], context[72] );
                res = refalrts::splice_evar( res, context[27], context[34] );
                res = refalrts::splice_evar( res, context[52], context[61] );
                res = refalrts::splice_evar( res, context[42], context[43] );
                res = refalrts::splice_evar( res, context[48], context[51] );
                refalrts::use( res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              do {
                // </0 & Map@2/4 s.new32/5 (/8 # CmdNativeFunction/14 # GN-Entry/19 (/26 e.new37/42 )/27 (/34 s.new33/50 t.new34/51 e.new35/48 )/35 e.new36/44 )/9 e.new38/46 >/1
                context[42] = context[36];
                context[43] = context[37];
                context[44] = context[38];
                context[45] = context[39];
                context[46] = context[40];
                context[47] = context[41];
                context[48] = 0;
                context[49] = 0;
                if( ! refalrts::brackets_term( context[48], context[49], context[34] ) )
                  continue;
                // closed e.new37 as range 42
                // closed e.new36 as range 44
                // closed e.new38 as range 46
                if( ! refalrts::svar_left( context[50], context[48], context[49] ) )
                  continue;
                context[52] = refalrts::tvar_left( context[51], context[48], context[49] );
                if( ! context[52] )
                  continue;
                // closed e.new35 as range 48
                do {
                  // </0 & Map@2/4 s.new39/5 (/8 # CmdNativeFunction/14 # GN-Entry/19 (/26 e.new44/53 )/27 (/34 s.new40/50 s.new41/51 e.new42/55 )/35 e.new43/57 )/9 e.new45/59 >/1
                  context[53] = context[42];
                  context[54] = context[43];
                  context[55] = context[48];
                  context[56] = context[49];
                  context[57] = context[44];
                  context[58] = context[45];
                  context[59] = context[46];
                  context[60] = context[47];
                  if( ! refalrts::svar_term( context[51], context[51] ) )
                    continue;
                  // closed e.new44 as range 53
                  // closed e.new42 as range 55
                  // closed e.new43 as range 57
                  // closed e.new45 as range 59
                  do {
                    // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 # GN-Entry/19 (/26 e.3/61 )/27 (/34 # FileLine/50 s.Line/51 e.1/63 )/35 e.4/65 )/9 e.Tail/67 >/1
                    context[61] = context[53];
                    context[62] = context[54];
                    context[63] = context[55];
                    context[64] = context[56];
                    context[65] = context[57];
                    context[66] = context[58];
                    context[67] = context[59];
                    context[68] = context[60];
                    if( ! refalrts::ident_term( identifiers[ident_FileLine], context[50] ) )
                      continue;
                    // closed e.3 as range 61
                    // closed e.1 as range 63
                    // closed e.4 as range 65
                    // closed e.Tail as range 67
                    //DEBUG: s.FileHandle: 5
                    //DEBUG: s.Line: 51
                    //DEBUG: e.3: 61
                    //DEBUG: e.1: 63
                    //DEBUG: e.4: 65
                    //DEBUG: e.Tail: 67

                    refalrts::reset_allocator(vm);
                    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '$'/19 HalfReuse: 'E'/26 }"NTRY"/69 Tile{ HalfReuse: ' '/35 } </71 & DisplayName/72 Tile{ AsIs: e.3/61 } >/73" :: native {"/74 >/76 </77 & Putout/78 s.FileHandle/5/79"  #line"/80 Tile{ HalfReuse: ' '/27 HalfReuse: </34 HalfReuse: & Symb/50 AsIs: s.Line/51 } >/82" \""/83 </85 & EscapeString/86 Tile{ AsIs: e.1/63 } >/87 '\"'/88 >/89 </90 & Putout/91 s.FileHandle/5/92"    ======================================"/93 >/95 </96 & Map@4/97 s.FileHandle/5/98 Tile{ AsIs: e.4/65 } >/99 </100 & Putout/101 s.FileHandle/5/102"    ======================================"/103 >/105 </106 & Putout/107 s.FileHandle/5/108"  }\n"/109 >/111 </112 & Map@2/113 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/67 AsIs: >/1 ]] }
                    refalrts::alloc_chars(vm, context[69], context[70], "NTRY", 4);
                    refalrts::alloc_open_call(vm, context[71]);
                    refalrts::alloc_name(vm, context[72], functions[efunc_DisplayName]);
                    refalrts::alloc_close_call(vm, context[73]);
                    refalrts::alloc_chars(vm, context[74], context[75], " :: native {", 12);
                    refalrts::alloc_close_call(vm, context[76]);
                    refalrts::alloc_open_call(vm, context[77]);
                    refalrts::alloc_name(vm, context[78], functions[efunc_Putout]);
                    refalrts::copy_stvar(vm, context[79], context[5]);
                    refalrts::alloc_chars(vm, context[80], context[81], "  #line", 7);
                    refalrts::alloc_close_call(vm, context[82]);
                    refalrts::alloc_chars(vm, context[83], context[84], " \"", 2);
                    refalrts::alloc_open_call(vm, context[85]);
                    refalrts::alloc_name(vm, context[86], functions[efunc_EscapeString]);
                    refalrts::alloc_close_call(vm, context[87]);
                    refalrts::alloc_char(vm, context[88], '\"');
                    refalrts::alloc_close_call(vm, context[89]);
                    refalrts::alloc_open_call(vm, context[90]);
                    refalrts::alloc_name(vm, context[91], functions[efunc_Putout]);
                    refalrts::copy_stvar(vm, context[92], context[5]);
                    refalrts::alloc_chars(vm, context[93], context[94], "    ======================================", 42);
                    refalrts::alloc_close_call(vm, context[95]);
                    refalrts::alloc_open_call(vm, context[96]);
                    refalrts::alloc_name(vm, context[97], functions[efunc_gen_Map_Z4]);
                    refalrts::copy_stvar(vm, context[98], context[5]);
                    refalrts::alloc_close_call(vm, context[99]);
                    refalrts::alloc_open_call(vm, context[100]);
                    refalrts::alloc_name(vm, context[101], functions[efunc_Putout]);
                    refalrts::copy_stvar(vm, context[102], context[5]);
                    refalrts::alloc_chars(vm, context[103], context[104], "    ======================================", 42);
                    refalrts::alloc_close_call(vm, context[105]);
                    refalrts::alloc_open_call(vm, context[106]);
                    refalrts::alloc_name(vm, context[107], functions[efunc_Putout]);
                    refalrts::copy_stvar(vm, context[108], context[5]);
                    refalrts::alloc_chars(vm, context[109], context[110], "  }\n", 4);
                    refalrts::alloc_close_call(vm, context[111]);
                    refalrts::alloc_open_call(vm, context[112]);
                    refalrts::alloc_name(vm, context[113], functions[efunc_gen_Map_Z2]);
                    refalrts::update_name(context[4], functions[efunc_Putout]);
                    refalrts::reinit_char(context[8], ' ');
                    refalrts::reinit_char(context[14], ' ');
                    refalrts::reinit_char(context[19], '$');
                    refalrts::reinit_char(context[26], 'E');
                    refalrts::reinit_char(context[35], ' ');
                    refalrts::reinit_char(context[27], ' ');
                    refalrts::reinit_open_call(context[34]);
                    refalrts::reinit_name(context[50], functions[efunc_Symb]);
                    refalrts::reinit_svar( context[9], context[5] );
                    refalrts::push_stack( vm, context[1] );
                    refalrts::push_stack( vm, context[112] );
                    refalrts::push_stack( vm, context[111] );
                    refalrts::push_stack( vm, context[106] );
                    refalrts::push_stack( vm, context[105] );
                    refalrts::push_stack( vm, context[100] );
                    refalrts::push_stack( vm, context[99] );
                    refalrts::push_stack( vm, context[96] );
                    refalrts::push_stack( vm, context[95] );
                    refalrts::push_stack( vm, context[90] );
                    refalrts::push_stack( vm, context[89] );
                    refalrts::push_stack( vm, context[77] );
                    refalrts::push_stack( vm, context[87] );
                    refalrts::push_stack( vm, context[85] );
                    refalrts::push_stack( vm, context[82] );
                    refalrts::push_stack( vm, context[34] );
                    refalrts::push_stack( vm, context[76] );
                    refalrts::push_stack( vm, context[0] );
                    refalrts::push_stack( vm, context[73] );
                    refalrts::push_stack( vm, context[71] );
                    refalrts::Iter trash_prev = arg_begin->prev;
                    refalrts::use(trash_prev);
                    refalrts::Iter res = context[9];
                    res = refalrts::splice_evar( res, context[99], context[113] );
                    res = refalrts::splice_evar( res, context[65], context[66] );
                    res = refalrts::splice_evar( res, context[87], context[98] );
                    res = refalrts::splice_evar( res, context[63], context[64] );
                    res = refalrts::splice_evar( res, context[82], context[86] );
                    res = refalrts::splice_evar( res, context[27], context[51] );
                    res = refalrts::splice_evar( res, context[73], context[81] );
                    res = refalrts::splice_evar( res, context[61], context[62] );
                    res = refalrts::splice_evar( res, context[71], context[72] );
                    res = refalrts::splice_elem( res, context[35] );
                    res = refalrts::splice_evar( res, context[69], context[70] );
                    refalrts::use( res );
                    return refalrts::cSuccess;
                  } while ( 0 );
                  refalrts::stop_sentence(vm);

                  // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 # GN-Entry/19 (/26 e.3/61 )/27 (/34 # RowCol/50 s.Row/51 s.Col/69 )/35 e.4/65 )/9 e.Tail/67 >/1
                  context[61] = context[53];
                  context[62] = context[54];
                  context[63] = context[55];
                  context[64] = context[56];
                  context[65] = context[57];
                  context[66] = context[58];
                  context[67] = context[59];
                  context[68] = context[60];
                  if( ! refalrts::ident_term( identifiers[ident_RowCol], context[50] ) )
                    continue;
                  // closed e.3 as range 61
                  // closed e.4 as range 65
                  // closed e.Tail as range 67
                  if( ! refalrts::svar_left( context[69], context[63], context[64] ) )
                    continue;
                  if( ! refalrts::empty_seq( context[63], context[64] ) )
                    continue;
                  //DEBUG: s.FileHandle: 5
                  //DEBUG: s.Row: 51
                  //DEBUG: e.3: 61
                  //DEBUG: e.4: 65
                  //DEBUG: e.Tail: 67
                  //DEBUG: s.Col: 69

                  refalrts::reset_allocator(vm);
                  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '$'/19 HalfReuse: 'E'/26 }"NTRY "/70 </72 & DisplayName/73 Tile{ AsIs: e.3/61 } >/74" :: native {"/75 >/77 </78 & Putout/79 s.FileHandle/5/80"  #line"/81 Tile{ HalfReuse: ' '/27 HalfReuse: </34 HalfReuse: & Symb/50 AsIs: s.Row/51 } >/83 ':'/84 </85 & Symb/86 Tile{ AsIs: s.Col/69 HalfReuse: >/35 } >/87 </88 & Putout/89 s.FileHandle/5/90"    ======================================"/91 >/93 </94 & Map@4/95 s.FileHandle/5/96 Tile{ AsIs: e.4/65 } >/97 </98 & Putout/99 s.FileHandle/5/100"    ======================================"/101 >/103 </104 & Putout/105 s.FileHandle/5/106"  }\n"/107 >/109 </110 & Map@2/111 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/67 AsIs: >/1 ]] }
                  refalrts::alloc_chars(vm, context[70], context[71], "NTRY ", 5);
                  refalrts::alloc_open_call(vm, context[72]);
                  refalrts::alloc_name(vm, context[73], functions[efunc_DisplayName]);
                  refalrts::alloc_close_call(vm, context[74]);
                  refalrts::alloc_chars(vm, context[75], context[76], " :: native {", 12);
                  refalrts::alloc_close_call(vm, context[77]);
                  refalrts::alloc_open_call(vm, context[78]);
                  refalrts::alloc_name(vm, context[79], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[80], context[5]);
                  refalrts::alloc_chars(vm, context[81], context[82], "  #line", 7);
                  refalrts::alloc_close_call(vm, context[83]);
                  refalrts::alloc_char(vm, context[84], ':');
                  refalrts::alloc_open_call(vm, context[85]);
                  refalrts::alloc_name(vm, context[86], functions[efunc_Symb]);
                  refalrts::alloc_close_call(vm, context[87]);
                  refalrts::alloc_open_call(vm, context[88]);
                  refalrts::alloc_name(vm, context[89], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[90], context[5]);
                  refalrts::alloc_chars(vm, context[91], context[92], "    ======================================", 42);
                  refalrts::alloc_close_call(vm, context[93]);
                  refalrts::alloc_open_call(vm, context[94]);
                  refalrts::alloc_name(vm, context[95], functions[efunc_gen_Map_Z4]);
                  refalrts::copy_stvar(vm, context[96], context[5]);
                  refalrts::alloc_close_call(vm, context[97]);
                  refalrts::alloc_open_call(vm, context[98]);
                  refalrts::alloc_name(vm, context[99], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[100], context[5]);
                  refalrts::alloc_chars(vm, context[101], context[102], "    ======================================", 42);
                  refalrts::alloc_close_call(vm, context[103]);
                  refalrts::alloc_open_call(vm, context[104]);
                  refalrts::alloc_name(vm, context[105], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[106], context[5]);
                  refalrts::alloc_chars(vm, context[107], context[108], "  }\n", 4);
                  refalrts::alloc_close_call(vm, context[109]);
                  refalrts::alloc_open_call(vm, context[110]);
                  refalrts::alloc_name(vm, context[111], functions[efunc_gen_Map_Z2]);
                  refalrts::update_name(context[4], functions[efunc_Putout]);
                  refalrts::reinit_char(context[8], ' ');
                  refalrts::reinit_char(context[14], ' ');
                  refalrts::reinit_char(context[19], '$');
                  refalrts::reinit_char(context[26], 'E');
                  refalrts::reinit_char(context[27], ' ');
                  refalrts::reinit_open_call(context[34]);
                  refalrts::reinit_name(context[50], functions[efunc_Symb]);
                  refalrts::reinit_close_call(context[35]);
                  refalrts::reinit_svar( context[9], context[5] );
                  refalrts::push_stack( vm, context[1] );
                  refalrts::push_stack( vm, context[110] );
                  refalrts::push_stack( vm, context[109] );
                  refalrts::push_stack( vm, context[104] );
                  refalrts::push_stack( vm, context[103] );
                  refalrts::push_stack( vm, context[98] );
                  refalrts::push_stack( vm, context[97] );
                  refalrts::push_stack( vm, context[94] );
                  refalrts::push_stack( vm, context[93] );
                  refalrts::push_stack( vm, context[88] );
                  refalrts::push_stack( vm, context[87] );
                  refalrts::push_stack( vm, context[78] );
                  refalrts::push_stack( vm, context[35] );
                  refalrts::push_stack( vm, context[85] );
                  refalrts::push_stack( vm, context[83] );
                  refalrts::push_stack( vm, context[34] );
                  refalrts::push_stack( vm, context[77] );
                  refalrts::push_stack( vm, context[0] );
                  refalrts::push_stack( vm, context[74] );
                  refalrts::push_stack( vm, context[72] );
                  refalrts::Iter trash_prev = arg_begin->prev;
                  refalrts::use(trash_prev);
                  refalrts::Iter res = context[9];
                  res = refalrts::splice_evar( res, context[97], context[111] );
                  res = refalrts::splice_evar( res, context[65], context[66] );
                  res = refalrts::splice_evar( res, context[87], context[96] );
                  res = refalrts::splice_evar( res, context[69], context[35] );
                  res = refalrts::splice_evar( res, context[83], context[86] );
                  res = refalrts::splice_evar( res, context[27], context[51] );
                  res = refalrts::splice_evar( res, context[74], context[82] );
                  res = refalrts::splice_evar( res, context[61], context[62] );
                  res = refalrts::splice_evar( res, context[70], context[73] );
                  refalrts::use( res );
                  return refalrts::cSuccess;
                } while ( 0 );
                refalrts::stop_sentence(vm);

                // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 # GN-Entry/19 (/26 e.3/53 )/27 (/34 # FileRowCol/50 (/51 s.Row/63 s.Col/64 )/52 e.1/55 )/35 e.4/57 )/9 e.Tail/59 >/1
                context[53] = context[42];
                context[54] = context[43];
                context[55] = context[48];
                context[56] = context[49];
                context[57] = context[44];
                context[58] = context[45];
                context[59] = context[46];
                context[60] = context[47];
                context[61] = 0;
                context[62] = 0;
                if( ! refalrts::brackets_term( context[61], context[62], context[51] ) )
                  continue;
                if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[50] ) )
                  continue;
                // closed e.3 as range 53
                // closed e.1 as range 55
                // closed e.4 as range 57
                // closed e.Tail as range 59
                if( ! refalrts::svar_left( context[63], context[61], context[62] ) )
                  continue;
                if( ! refalrts::svar_left( context[64], context[61], context[62] ) )
                  continue;
                if( ! refalrts::empty_seq( context[61], context[62] ) )
                  continue;
                //DEBUG: s.FileHandle: 5
                //DEBUG: e.3: 53
                //DEBUG: e.1: 55
                //DEBUG: e.4: 57
                //DEBUG: e.Tail: 59
                //DEBUG: s.Row: 63
                //DEBUG: s.Col: 64

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '$'/19 HalfReuse: 'E'/26 }"NTRY "/65 </67 & DisplayName/68 Tile{ AsIs: e.3/53 } >/69" :: native {"/70 >/72 </73 & Putout/74 s.FileHandle/5/75"  #lin"/76 Tile{ HalfReuse: 'e'/27 HalfReuse: ' '/34 HalfReuse: </50 HalfReuse: & Symb/51 AsIs: s.Row/63 } >/78 ':'/79 </80 & Symb/81 Tile{ AsIs: s.Col/64 } >/82" \""/83 </85 Tile{ HalfReuse: & EscapeString/52 AsIs: e.1/55 HalfReuse: >/35 } '\"'/86 >/87 </88 & Putout/89 s.FileHandle/5/90"    ======================================"/91 >/93 </94 & Map@4/95 s.FileHandle/5/96 Tile{ AsIs: e.4/57 } >/97 </98 & Putout/99 s.FileHandle/5/100"    ======================================"/101 >/103 </104 & Putout/105 s.FileHandle/5/106"  }\n"/107 >/109 </110 & Map@2/111 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/59 AsIs: >/1 ]] }
                refalrts::alloc_chars(vm, context[65], context[66], "NTRY ", 5);
                refalrts::alloc_open_call(vm, context[67]);
                refalrts::alloc_name(vm, context[68], functions[efunc_DisplayName]);
                refalrts::alloc_close_call(vm, context[69]);
                refalrts::alloc_chars(vm, context[70], context[71], " :: native {", 12);
                refalrts::alloc_close_call(vm, context[72]);
                refalrts::alloc_open_call(vm, context[73]);
                refalrts::alloc_name(vm, context[74], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[75], context[5]);
                refalrts::alloc_chars(vm, context[76], context[77], "  #lin", 6);
                refalrts::alloc_close_call(vm, context[78]);
                refalrts::alloc_char(vm, context[79], ':');
                refalrts::alloc_open_call(vm, context[80]);
                refalrts::alloc_name(vm, context[81], functions[efunc_Symb]);
                refalrts::alloc_close_call(vm, context[82]);
                refalrts::alloc_chars(vm, context[83], context[84], " \"", 2);
                refalrts::alloc_open_call(vm, context[85]);
                refalrts::alloc_char(vm, context[86], '\"');
                refalrts::alloc_close_call(vm, context[87]);
                refalrts::alloc_open_call(vm, context[88]);
                refalrts::alloc_name(vm, context[89], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[90], context[5]);
                refalrts::alloc_chars(vm, context[91], context[92], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[93]);
                refalrts::alloc_open_call(vm, context[94]);
                refalrts::alloc_name(vm, context[95], functions[efunc_gen_Map_Z4]);
                refalrts::copy_stvar(vm, context[96], context[5]);
                refalrts::alloc_close_call(vm, context[97]);
                refalrts::alloc_open_call(vm, context[98]);
                refalrts::alloc_name(vm, context[99], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[100], context[5]);
                refalrts::alloc_chars(vm, context[101], context[102], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[103]);
                refalrts::alloc_open_call(vm, context[104]);
                refalrts::alloc_name(vm, context[105], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[106], context[5]);
                refalrts::alloc_chars(vm, context[107], context[108], "  }\n", 4);
                refalrts::alloc_close_call(vm, context[109]);
                refalrts::alloc_open_call(vm, context[110]);
                refalrts::alloc_name(vm, context[111], functions[efunc_gen_Map_Z2]);
                refalrts::update_name(context[4], functions[efunc_Putout]);
                refalrts::reinit_char(context[8], ' ');
                refalrts::reinit_char(context[14], ' ');
                refalrts::reinit_char(context[19], '$');
                refalrts::reinit_char(context[26], 'E');
                refalrts::reinit_char(context[27], 'e');
                refalrts::reinit_char(context[34], ' ');
                refalrts::reinit_open_call(context[50]);
                refalrts::reinit_name(context[51], functions[efunc_Symb]);
                refalrts::reinit_name(context[52], functions[efunc_EscapeString]);
                refalrts::reinit_close_call(context[35]);
                refalrts::reinit_svar( context[9], context[5] );
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[110] );
                refalrts::push_stack( vm, context[109] );
                refalrts::push_stack( vm, context[104] );
                refalrts::push_stack( vm, context[103] );
                refalrts::push_stack( vm, context[98] );
                refalrts::push_stack( vm, context[97] );
                refalrts::push_stack( vm, context[94] );
                refalrts::push_stack( vm, context[93] );
                refalrts::push_stack( vm, context[88] );
                refalrts::push_stack( vm, context[87] );
                refalrts::push_stack( vm, context[73] );
                refalrts::push_stack( vm, context[35] );
                refalrts::push_stack( vm, context[85] );
                refalrts::push_stack( vm, context[82] );
                refalrts::push_stack( vm, context[80] );
                refalrts::push_stack( vm, context[78] );
                refalrts::push_stack( vm, context[50] );
                refalrts::push_stack( vm, context[72] );
                refalrts::push_stack( vm, context[0] );
                refalrts::push_stack( vm, context[69] );
                refalrts::push_stack( vm, context[67] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[9];
                res = refalrts::splice_evar( res, context[97], context[111] );
                res = refalrts::splice_evar( res, context[57], context[58] );
                res = refalrts::splice_evar( res, context[86], context[96] );
                res = refalrts::splice_evar( res, context[52], context[35] );
                res = refalrts::splice_evar( res, context[82], context[85] );
                res = refalrts::splice_elem( res, context[64] );
                res = refalrts::splice_evar( res, context[78], context[81] );
                res = refalrts::splice_evar( res, context[27], context[63] );
                res = refalrts::splice_evar( res, context[69], context[77] );
                res = refalrts::splice_evar( res, context[53], context[54] );
                res = refalrts::splice_evar( res, context[65], context[68] );
                refalrts::use( res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 # GN-Entry/19 (/26 e.3/42 )/27 t.2/34 e.4/44 )/9 e.Tail/46 >/1
              context[42] = context[36];
              context[43] = context[37];
              context[44] = context[38];
              context[45] = context[39];
              context[46] = context[40];
              context[47] = context[41];
              // closed e.3 as range 42
              // closed e.4 as range 44
              // closed e.Tail as range 46
              //DEBUG: t.2: 34
              //DEBUG: s.FileHandle: 5
              //DEBUG: e.3: 42
              //DEBUG: e.4: 44
              //DEBUG: e.Tail: 46

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '$'/19 HalfReuse: 'E'/26 }"NTRY "/48 </50 & DisplayName/51 Tile{ AsIs: e.3/42 } >/52" :: native {"/53 >/55 </56 & Putout/57 s.FileHandle/5/58"  "/59 </61 Tile{ HalfReuse: & SrcPos*4/27 AsIs: t.2/34 } >/62 >/63 </64 & Putout/65 s.FileHandle/5/66"    ======================================"/67 >/69 </70 & Map@4/71 s.FileHandle/5/72 Tile{ AsIs: e.4/44 } >/73 </74 & Putout/75 s.FileHandle/5/76"    ======================================"/77 >/79 </80 & Putout/81 s.FileHandle/5/82"  }\n"/83 >/85 </86 & Map@2/87 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/46 AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[48], context[49], "NTRY ", 5);
              refalrts::alloc_open_call(vm, context[50]);
              refalrts::alloc_name(vm, context[51], functions[efunc_DisplayName]);
              refalrts::alloc_close_call(vm, context[52]);
              refalrts::alloc_chars(vm, context[53], context[54], " :: native {", 12);
              refalrts::alloc_close_call(vm, context[55]);
              refalrts::alloc_open_call(vm, context[56]);
              refalrts::alloc_name(vm, context[57], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[58], context[5]);
              refalrts::alloc_chars(vm, context[59], context[60], "  ", 2);
              refalrts::alloc_open_call(vm, context[61]);
              refalrts::alloc_close_call(vm, context[62]);
              refalrts::alloc_close_call(vm, context[63]);
              refalrts::alloc_open_call(vm, context[64]);
              refalrts::alloc_name(vm, context[65], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[66], context[5]);
              refalrts::alloc_chars(vm, context[67], context[68], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[69]);
              refalrts::alloc_open_call(vm, context[70]);
              refalrts::alloc_name(vm, context[71], functions[efunc_gen_Map_Z4]);
              refalrts::copy_stvar(vm, context[72], context[5]);
              refalrts::alloc_close_call(vm, context[73]);
              refalrts::alloc_open_call(vm, context[74]);
              refalrts::alloc_name(vm, context[75], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[76], context[5]);
              refalrts::alloc_chars(vm, context[77], context[78], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[79]);
              refalrts::alloc_open_call(vm, context[80]);
              refalrts::alloc_name(vm, context[81], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[82], context[5]);
              refalrts::alloc_chars(vm, context[83], context[84], "  }\n", 4);
              refalrts::alloc_close_call(vm, context[85]);
              refalrts::alloc_open_call(vm, context[86]);
              refalrts::alloc_name(vm, context[87], functions[efunc_gen_Map_Z2]);
              refalrts::update_name(context[4], functions[efunc_Putout]);
              refalrts::reinit_char(context[8], ' ');
              refalrts::reinit_char(context[14], ' ');
              refalrts::reinit_char(context[19], '$');
              refalrts::reinit_char(context[26], 'E');
              refalrts::reinit_name(context[27], functions[efunc_gen_SrcPos_D4]);
              refalrts::reinit_svar( context[9], context[5] );
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[86] );
              refalrts::push_stack( vm, context[85] );
              refalrts::push_stack( vm, context[80] );
              refalrts::push_stack( vm, context[79] );
              refalrts::push_stack( vm, context[74] );
              refalrts::push_stack( vm, context[73] );
              refalrts::push_stack( vm, context[70] );
              refalrts::push_stack( vm, context[69] );
              refalrts::push_stack( vm, context[64] );
              refalrts::push_stack( vm, context[63] );
              refalrts::push_stack( vm, context[56] );
              refalrts::push_stack( vm, context[62] );
              refalrts::push_stack( vm, context[61] );
              refalrts::push_stack( vm, context[55] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[52] );
              refalrts::push_stack( vm, context[50] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[9];
              res = refalrts::splice_evar( res, context[73], context[87] );
              res = refalrts::splice_evar( res, context[44], context[45] );
              res = refalrts::splice_evar( res, context[62], context[72] );
              res = refalrts::splice_evar( res, context[27], context[35] );
              res = refalrts::splice_evar( res, context[52], context[61] );
              res = refalrts::splice_evar( res, context[42], context[43] );
              res = refalrts::splice_evar( res, context[48], context[51] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 s.ScopeClass/19 (/26 e.3/36 )/27 s.LineNumber/34 e.4/38 )/9 e.Tail/40 >/1
              context[36] = context[28];
              context[37] = context[29];
              context[38] = context[30];
              context[39] = context[31];
              context[40] = context[32];
              context[41] = context[33];
              if( ! refalrts::svar_term( context[34], context[34] ) )
                continue;
              // closed e.3 as range 36
              // closed e.4 as range 38
              // closed e.Tail as range 40
              //DEBUG: s.LineNumber: 34
              //DEBUG: s.FileHandle: 5
              //DEBUG: s.ScopeClass: 19
              //DEBUG: e.3: 36
              //DEBUG: e.4: 38
              //DEBUG: e.Tail: 40

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: </8 HalfReuse: & FnName*2/14 AsIs: s.ScopeClass/19 } Tile{ AsIs: e.3/36 } >/42 ' '/43 Tile{ HalfReuse: ':'/26 }": native {"/44 >/46 </47 & Putout/48 s.FileHandle/5/49"  #line "/50 </52 Tile{ HalfReuse: & Symb/27 AsIs: s.LineNumber/34 } >/53 >/54 </55 & Putout/56 s.FileHandle/5/57"    ======================================"/58 >/60 </61 & Map@4/62 s.FileHandle/5/63 Tile{ AsIs: e.4/38 } >/64 </65 & Putout/66 s.FileHandle/5/67"    ======================================"/68 >/70 </71 & Putout/72 s.FileHandle/5/73"  }\n"/74 >/76 </77 & Map@2/78 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/40 AsIs: >/1 ]] }
              refalrts::alloc_close_call(vm, context[42]);
              refalrts::alloc_char(vm, context[43], ' ');
              refalrts::alloc_chars(vm, context[44], context[45], ": native {", 10);
              refalrts::alloc_close_call(vm, context[46]);
              refalrts::alloc_open_call(vm, context[47]);
              refalrts::alloc_name(vm, context[48], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[49], context[5]);
              refalrts::alloc_chars(vm, context[50], context[51], "  #line ", 8);
              refalrts::alloc_open_call(vm, context[52]);
              refalrts::alloc_close_call(vm, context[53]);
              refalrts::alloc_close_call(vm, context[54]);
              refalrts::alloc_open_call(vm, context[55]);
              refalrts::alloc_name(vm, context[56], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[57], context[5]);
              refalrts::alloc_chars(vm, context[58], context[59], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[60]);
              refalrts::alloc_open_call(vm, context[61]);
              refalrts::alloc_name(vm, context[62], functions[efunc_gen_Map_Z4]);
              refalrts::copy_stvar(vm, context[63], context[5]);
              refalrts::alloc_close_call(vm, context[64]);
              refalrts::alloc_open_call(vm, context[65]);
              refalrts::alloc_name(vm, context[66], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[67], context[5]);
              refalrts::alloc_chars(vm, context[68], context[69], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[70]);
              refalrts::alloc_open_call(vm, context[71]);
              refalrts::alloc_name(vm, context[72], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[73], context[5]);
              refalrts::alloc_chars(vm, context[74], context[75], "  }\n", 4);
              refalrts::alloc_close_call(vm, context[76]);
              refalrts::alloc_open_call(vm, context[77]);
              refalrts::alloc_name(vm, context[78], functions[efunc_gen_Map_Z2]);
              refalrts::update_name(context[4], functions[efunc_Putout]);
              refalrts::reinit_open_call(context[8]);
              refalrts::reinit_name(context[14], functions[efunc_gen_FnName_D2]);
              refalrts::reinit_char(context[26], ':');
              refalrts::reinit_name(context[27], functions[efunc_Symb]);
              refalrts::reinit_svar( context[9], context[5] );
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[77] );
              refalrts::push_stack( vm, context[76] );
              refalrts::push_stack( vm, context[71] );
              refalrts::push_stack( vm, context[70] );
              refalrts::push_stack( vm, context[65] );
              refalrts::push_stack( vm, context[64] );
              refalrts::push_stack( vm, context[61] );
              refalrts::push_stack( vm, context[60] );
              refalrts::push_stack( vm, context[55] );
              refalrts::push_stack( vm, context[54] );
              refalrts::push_stack( vm, context[47] );
              refalrts::push_stack( vm, context[53] );
              refalrts::push_stack( vm, context[52] );
              refalrts::push_stack( vm, context[46] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[42] );
              refalrts::push_stack( vm, context[8] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[9];
              res = refalrts::splice_evar( res, context[64], context[78] );
              res = refalrts::splice_evar( res, context[38], context[39] );
              res = refalrts::splice_evar( res, context[53], context[63] );
              res = refalrts::splice_evar( res, context[27], context[34] );
              res = refalrts::splice_evar( res, context[44], context[52] );
              res = refalrts::splice_elem( res, context[26] );
              res = refalrts::splice_evar( res, context[42], context[43] );
              res = refalrts::splice_evar( res, context[36], context[37] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            do {
              // </0 & Map@2/4 s.new27/5 (/8 # CmdNativeFunction/14 s.new28/19 (/26 e.new33/36 )/27 (/34 s.new29/44 t.new30/45 e.new31/42 )/35 e.new32/38 )/9 e.new34/40 >/1
              context[36] = context[28];
              context[37] = context[29];
              context[38] = context[30];
              context[39] = context[31];
              context[40] = context[32];
              context[41] = context[33];
              context[42] = 0;
              context[43] = 0;
              if( ! refalrts::brackets_term( context[42], context[43], context[34] ) )
                continue;
              // closed e.new33 as range 36
              // closed e.new32 as range 38
              // closed e.new34 as range 40
              if( ! refalrts::svar_left( context[44], context[42], context[43] ) )
                continue;
              context[46] = refalrts::tvar_left( context[45], context[42], context[43] );
              if( ! context[46] )
                continue;
              // closed e.new31 as range 42
              do {
                // </0 & Map@2/4 s.new35/5 (/8 # CmdNativeFunction/14 s.new36/19 (/26 e.new41/47 )/27 (/34 s.new37/44 s.new38/45 e.new39/49 )/35 e.new40/51 )/9 e.new42/53 >/1
                context[47] = context[36];
                context[48] = context[37];
                context[49] = context[42];
                context[50] = context[43];
                context[51] = context[38];
                context[52] = context[39];
                context[53] = context[40];
                context[54] = context[41];
                if( ! refalrts::svar_term( context[45], context[45] ) )
                  continue;
                // closed e.new41 as range 47
                // closed e.new39 as range 49
                // closed e.new40 as range 51
                // closed e.new42 as range 53
                do {
                  // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 s.ScopeClass/19 (/26 e.3/55 )/27 (/34 # FileLine/44 s.Line/45 e.1/57 )/35 e.4/59 )/9 e.Tail/61 >/1
                  context[55] = context[47];
                  context[56] = context[48];
                  context[57] = context[49];
                  context[58] = context[50];
                  context[59] = context[51];
                  context[60] = context[52];
                  context[61] = context[53];
                  context[62] = context[54];
                  if( ! refalrts::ident_term( identifiers[ident_FileLine], context[44] ) )
                    continue;
                  // closed e.3 as range 55
                  // closed e.1 as range 57
                  // closed e.4 as range 59
                  // closed e.Tail as range 61
                  //DEBUG: s.FileHandle: 5
                  //DEBUG: s.ScopeClass: 19
                  //DEBUG: s.Line: 45
                  //DEBUG: e.3: 55
                  //DEBUG: e.1: 57
                  //DEBUG: e.4: 59
                  //DEBUG: e.Tail: 61

                  refalrts::reset_allocator(vm);
                  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: </8 HalfReuse: & FnName*2/14 AsIs: s.ScopeClass/19 } Tile{ AsIs: e.3/55 } Tile{ HalfReuse: >/26 }" ::"/63 Tile{ HalfReuse: ' '/35 }"native {"/65 >/67 </68 & Putout/69 s.FileHandle/5/70"  #line"/71 Tile{ HalfReuse: ' '/27 HalfReuse: </34 HalfReuse: & Symb/44 AsIs: s.Line/45 } >/73" \""/74 </76 & EscapeString/77 Tile{ AsIs: e.1/57 } >/78 '\"'/79 >/80 </81 & Putout/82 s.FileHandle/5/83"    ======================================"/84 >/86 </87 & Map@4/88 s.FileHandle/5/89 Tile{ AsIs: e.4/59 } >/90 </91 & Putout/92 s.FileHandle/5/93"    ======================================"/94 >/96 </97 & Putout/98 s.FileHandle/5/99"  }\n"/100 >/102 </103 & Map@2/104 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/61 AsIs: >/1 ]] }
                  refalrts::alloc_chars(vm, context[63], context[64], " ::", 3);
                  refalrts::alloc_chars(vm, context[65], context[66], "native {", 8);
                  refalrts::alloc_close_call(vm, context[67]);
                  refalrts::alloc_open_call(vm, context[68]);
                  refalrts::alloc_name(vm, context[69], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[70], context[5]);
                  refalrts::alloc_chars(vm, context[71], context[72], "  #line", 7);
                  refalrts::alloc_close_call(vm, context[73]);
                  refalrts::alloc_chars(vm, context[74], context[75], " \"", 2);
                  refalrts::alloc_open_call(vm, context[76]);
                  refalrts::alloc_name(vm, context[77], functions[efunc_EscapeString]);
                  refalrts::alloc_close_call(vm, context[78]);
                  refalrts::alloc_char(vm, context[79], '\"');
                  refalrts::alloc_close_call(vm, context[80]);
                  refalrts::alloc_open_call(vm, context[81]);
                  refalrts::alloc_name(vm, context[82], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[83], context[5]);
                  refalrts::alloc_chars(vm, context[84], context[85], "    ======================================", 42);
                  refalrts::alloc_close_call(vm, context[86]);
                  refalrts::alloc_open_call(vm, context[87]);
                  refalrts::alloc_name(vm, context[88], functions[efunc_gen_Map_Z4]);
                  refalrts::copy_stvar(vm, context[89], context[5]);
                  refalrts::alloc_close_call(vm, context[90]);
                  refalrts::alloc_open_call(vm, context[91]);
                  refalrts::alloc_name(vm, context[92], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[93], context[5]);
                  refalrts::alloc_chars(vm, context[94], context[95], "    ======================================", 42);
                  refalrts::alloc_close_call(vm, context[96]);
                  refalrts::alloc_open_call(vm, context[97]);
                  refalrts::alloc_name(vm, context[98], functions[efunc_Putout]);
                  refalrts::copy_stvar(vm, context[99], context[5]);
                  refalrts::alloc_chars(vm, context[100], context[101], "  }\n", 4);
                  refalrts::alloc_close_call(vm, context[102]);
                  refalrts::alloc_open_call(vm, context[103]);
                  refalrts::alloc_name(vm, context[104], functions[efunc_gen_Map_Z2]);
                  refalrts::update_name(context[4], functions[efunc_Putout]);
                  refalrts::reinit_open_call(context[8]);
                  refalrts::reinit_name(context[14], functions[efunc_gen_FnName_D2]);
                  refalrts::reinit_close_call(context[26]);
                  refalrts::reinit_char(context[35], ' ');
                  refalrts::reinit_char(context[27], ' ');
                  refalrts::reinit_open_call(context[34]);
                  refalrts::reinit_name(context[44], functions[efunc_Symb]);
                  refalrts::reinit_svar( context[9], context[5] );
                  refalrts::push_stack( vm, context[1] );
                  refalrts::push_stack( vm, context[103] );
                  refalrts::push_stack( vm, context[102] );
                  refalrts::push_stack( vm, context[97] );
                  refalrts::push_stack( vm, context[96] );
                  refalrts::push_stack( vm, context[91] );
                  refalrts::push_stack( vm, context[90] );
                  refalrts::push_stack( vm, context[87] );
                  refalrts::push_stack( vm, context[86] );
                  refalrts::push_stack( vm, context[81] );
                  refalrts::push_stack( vm, context[80] );
                  refalrts::push_stack( vm, context[68] );
                  refalrts::push_stack( vm, context[78] );
                  refalrts::push_stack( vm, context[76] );
                  refalrts::push_stack( vm, context[73] );
                  refalrts::push_stack( vm, context[34] );
                  refalrts::push_stack( vm, context[67] );
                  refalrts::push_stack( vm, context[0] );
                  refalrts::push_stack( vm, context[26] );
                  refalrts::push_stack( vm, context[8] );
                  refalrts::Iter trash_prev = arg_begin->prev;
                  refalrts::use(trash_prev);
                  refalrts::Iter res = context[9];
                  res = refalrts::splice_evar( res, context[90], context[104] );
                  res = refalrts::splice_evar( res, context[59], context[60] );
                  res = refalrts::splice_evar( res, context[78], context[89] );
                  res = refalrts::splice_evar( res, context[57], context[58] );
                  res = refalrts::splice_evar( res, context[73], context[77] );
                  res = refalrts::splice_evar( res, context[27], context[45] );
                  res = refalrts::splice_evar( res, context[65], context[72] );
                  res = refalrts::splice_elem( res, context[35] );
                  res = refalrts::splice_evar( res, context[63], context[64] );
                  res = refalrts::splice_elem( res, context[26] );
                  res = refalrts::splice_evar( res, context[55], context[56] );
                  refalrts::use( res );
                  return refalrts::cSuccess;
                } while ( 0 );
                refalrts::stop_sentence(vm);

                // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 s.ScopeClass/19 (/26 e.3/55 )/27 (/34 # RowCol/44 s.Row/45 s.Col/63 )/35 e.4/59 )/9 e.Tail/61 >/1
                context[55] = context[47];
                context[56] = context[48];
                context[57] = context[49];
                context[58] = context[50];
                context[59] = context[51];
                context[60] = context[52];
                context[61] = context[53];
                context[62] = context[54];
                if( ! refalrts::ident_term( identifiers[ident_RowCol], context[44] ) )
                  continue;
                // closed e.3 as range 55
                // closed e.4 as range 59
                // closed e.Tail as range 61
                if( ! refalrts::svar_left( context[63], context[57], context[58] ) )
                  continue;
                if( ! refalrts::empty_seq( context[57], context[58] ) )
                  continue;
                //DEBUG: s.FileHandle: 5
                //DEBUG: s.ScopeClass: 19
                //DEBUG: s.Row: 45
                //DEBUG: e.3: 55
                //DEBUG: e.4: 59
                //DEBUG: e.Tail: 61
                //DEBUG: s.Col: 63

                refalrts::reset_allocator(vm);
                //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
                //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: </8 HalfReuse: & FnName*2/14 AsIs: s.ScopeClass/19 } Tile{ AsIs: e.3/55 } >/64 ' '/65 Tile{ HalfReuse: ':'/26 }": native {"/66 >/68 </69 & Putout/70 s.FileHandle/5/71"  #line"/72 Tile{ HalfReuse: ' '/27 HalfReuse: </34 HalfReuse: & Symb/44 AsIs: s.Row/45 } >/74 ':'/75 </76 & Symb/77 Tile{ AsIs: s.Col/63 HalfReuse: >/35 } >/78 </79 & Putout/80 s.FileHandle/5/81"    ======================================"/82 >/84 </85 & Map@4/86 s.FileHandle/5/87 Tile{ AsIs: e.4/59 } >/88 </89 & Putout/90 s.FileHandle/5/91"    ======================================"/92 >/94 </95 & Putout/96 s.FileHandle/5/97"  }\n"/98 >/100 </101 & Map@2/102 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/61 AsIs: >/1 ]] }
                refalrts::alloc_close_call(vm, context[64]);
                refalrts::alloc_char(vm, context[65], ' ');
                refalrts::alloc_chars(vm, context[66], context[67], ": native {", 10);
                refalrts::alloc_close_call(vm, context[68]);
                refalrts::alloc_open_call(vm, context[69]);
                refalrts::alloc_name(vm, context[70], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[71], context[5]);
                refalrts::alloc_chars(vm, context[72], context[73], "  #line", 7);
                refalrts::alloc_close_call(vm, context[74]);
                refalrts::alloc_char(vm, context[75], ':');
                refalrts::alloc_open_call(vm, context[76]);
                refalrts::alloc_name(vm, context[77], functions[efunc_Symb]);
                refalrts::alloc_close_call(vm, context[78]);
                refalrts::alloc_open_call(vm, context[79]);
                refalrts::alloc_name(vm, context[80], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[81], context[5]);
                refalrts::alloc_chars(vm, context[82], context[83], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[84]);
                refalrts::alloc_open_call(vm, context[85]);
                refalrts::alloc_name(vm, context[86], functions[efunc_gen_Map_Z4]);
                refalrts::copy_stvar(vm, context[87], context[5]);
                refalrts::alloc_close_call(vm, context[88]);
                refalrts::alloc_open_call(vm, context[89]);
                refalrts::alloc_name(vm, context[90], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[91], context[5]);
                refalrts::alloc_chars(vm, context[92], context[93], "    ======================================", 42);
                refalrts::alloc_close_call(vm, context[94]);
                refalrts::alloc_open_call(vm, context[95]);
                refalrts::alloc_name(vm, context[96], functions[efunc_Putout]);
                refalrts::copy_stvar(vm, context[97], context[5]);
                refalrts::alloc_chars(vm, context[98], context[99], "  }\n", 4);
                refalrts::alloc_close_call(vm, context[100]);
                refalrts::alloc_open_call(vm, context[101]);
                refalrts::alloc_name(vm, context[102], functions[efunc_gen_Map_Z2]);
                refalrts::update_name(context[4], functions[efunc_Putout]);
                refalrts::reinit_open_call(context[8]);
                refalrts::reinit_name(context[14], functions[efunc_gen_FnName_D2]);
                refalrts::reinit_char(context[26], ':');
                refalrts::reinit_char(context[27], ' ');
                refalrts::reinit_open_call(context[34]);
                refalrts::reinit_name(context[44], functions[efunc_Symb]);
                refalrts::reinit_close_call(context[35]);
                refalrts::reinit_svar( context[9], context[5] );
                refalrts::push_stack( vm, context[1] );
                refalrts::push_stack( vm, context[101] );
                refalrts::push_stack( vm, context[100] );
                refalrts::push_stack( vm, context[95] );
                refalrts::push_stack( vm, context[94] );
                refalrts::push_stack( vm, context[89] );
                refalrts::push_stack( vm, context[88] );
                refalrts::push_stack( vm, context[85] );
                refalrts::push_stack( vm, context[84] );
                refalrts::push_stack( vm, context[79] );
                refalrts::push_stack( vm, context[78] );
                refalrts::push_stack( vm, context[69] );
                refalrts::push_stack( vm, context[35] );
                refalrts::push_stack( vm, context[76] );
                refalrts::push_stack( vm, context[74] );
                refalrts::push_stack( vm, context[34] );
                refalrts::push_stack( vm, context[68] );
                refalrts::push_stack( vm, context[0] );
                refalrts::push_stack( vm, context[64] );
                refalrts::push_stack( vm, context[8] );
                refalrts::Iter trash_prev = arg_begin->prev;
                refalrts::use(trash_prev);
                refalrts::Iter res = context[9];
                res = refalrts::splice_evar( res, context[88], context[102] );
                res = refalrts::splice_evar( res, context[59], context[60] );
                res = refalrts::splice_evar( res, context[78], context[87] );
                res = refalrts::splice_evar( res, context[63], context[35] );
                res = refalrts::splice_evar( res, context[74], context[77] );
                res = refalrts::splice_evar( res, context[27], context[45] );
                res = refalrts::splice_evar( res, context[66], context[73] );
                res = refalrts::splice_elem( res, context[26] );
                res = refalrts::splice_evar( res, context[64], context[65] );
                res = refalrts::splice_evar( res, context[55], context[56] );
                refalrts::use( res );
                return refalrts::cSuccess;
              } while ( 0 );
              refalrts::stop_sentence(vm);

              // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 s.ScopeClass/19 (/26 e.3/47 )/27 (/34 # FileRowCol/44 (/45 s.Row/57 s.Col/58 )/46 e.1/49 )/35 e.4/51 )/9 e.Tail/53 >/1
              context[47] = context[36];
              context[48] = context[37];
              context[49] = context[42];
              context[50] = context[43];
              context[51] = context[38];
              context[52] = context[39];
              context[53] = context[40];
              context[54] = context[41];
              context[55] = 0;
              context[56] = 0;
              if( ! refalrts::brackets_term( context[55], context[56], context[45] ) )
                continue;
              if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[44] ) )
                continue;
              // closed e.3 as range 47
              // closed e.1 as range 49
              // closed e.4 as range 51
              // closed e.Tail as range 53
              if( ! refalrts::svar_left( context[57], context[55], context[56] ) )
                continue;
              if( ! refalrts::svar_left( context[58], context[55], context[56] ) )
                continue;
              if( ! refalrts::empty_seq( context[55], context[56] ) )
                continue;
              //DEBUG: s.FileHandle: 5
              //DEBUG: s.ScopeClass: 19
              //DEBUG: e.3: 47
              //DEBUG: e.1: 49
              //DEBUG: e.4: 51
              //DEBUG: e.Tail: 53
              //DEBUG: s.Row: 57
              //DEBUG: s.Col: 58

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: </8 HalfReuse: & FnName*2/14 AsIs: s.ScopeClass/19 } Tile{ AsIs: e.3/47 } >/59" :"/60 Tile{ HalfReuse: ':'/26 }" native {"/62 >/64 </65 & Putout/66 s.FileHandle/5/67"  #lin"/68 Tile{ HalfReuse: 'e'/27 HalfReuse: ' '/34 HalfReuse: </44 HalfReuse: & Symb/45 AsIs: s.Row/57 } >/70 ':'/71 </72 & Symb/73 Tile{ AsIs: s.Col/58 } >/74" \""/75 </77 Tile{ HalfReuse: & EscapeString/46 AsIs: e.1/49 HalfReuse: >/35 } '\"'/78 >/79 </80 & Putout/81 s.FileHandle/5/82"    ======================================"/83 >/85 </86 & Map@4/87 s.FileHandle/5/88 Tile{ AsIs: e.4/51 } >/89 </90 & Putout/91 s.FileHandle/5/92"    ======================================"/93 >/95 </96 & Putout/97 s.FileHandle/5/98"  }\n"/99 >/101 </102 & Map@2/103 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/53 AsIs: >/1 ]] }
              refalrts::alloc_close_call(vm, context[59]);
              refalrts::alloc_chars(vm, context[60], context[61], " :", 2);
              refalrts::alloc_chars(vm, context[62], context[63], " native {", 9);
              refalrts::alloc_close_call(vm, context[64]);
              refalrts::alloc_open_call(vm, context[65]);
              refalrts::alloc_name(vm, context[66], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[67], context[5]);
              refalrts::alloc_chars(vm, context[68], context[69], "  #lin", 6);
              refalrts::alloc_close_call(vm, context[70]);
              refalrts::alloc_char(vm, context[71], ':');
              refalrts::alloc_open_call(vm, context[72]);
              refalrts::alloc_name(vm, context[73], functions[efunc_Symb]);
              refalrts::alloc_close_call(vm, context[74]);
              refalrts::alloc_chars(vm, context[75], context[76], " \"", 2);
              refalrts::alloc_open_call(vm, context[77]);
              refalrts::alloc_char(vm, context[78], '\"');
              refalrts::alloc_close_call(vm, context[79]);
              refalrts::alloc_open_call(vm, context[80]);
              refalrts::alloc_name(vm, context[81], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[82], context[5]);
              refalrts::alloc_chars(vm, context[83], context[84], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[85]);
              refalrts::alloc_open_call(vm, context[86]);
              refalrts::alloc_name(vm, context[87], functions[efunc_gen_Map_Z4]);
              refalrts::copy_stvar(vm, context[88], context[5]);
              refalrts::alloc_close_call(vm, context[89]);
              refalrts::alloc_open_call(vm, context[90]);
              refalrts::alloc_name(vm, context[91], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[92], context[5]);
              refalrts::alloc_chars(vm, context[93], context[94], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[95]);
              refalrts::alloc_open_call(vm, context[96]);
              refalrts::alloc_name(vm, context[97], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[98], context[5]);
              refalrts::alloc_chars(vm, context[99], context[100], "  }\n", 4);
              refalrts::alloc_close_call(vm, context[101]);
              refalrts::alloc_open_call(vm, context[102]);
              refalrts::alloc_name(vm, context[103], functions[efunc_gen_Map_Z2]);
              refalrts::update_name(context[4], functions[efunc_Putout]);
              refalrts::reinit_open_call(context[8]);
              refalrts::reinit_name(context[14], functions[efunc_gen_FnName_D2]);
              refalrts::reinit_char(context[26], ':');
              refalrts::reinit_char(context[27], 'e');
              refalrts::reinit_char(context[34], ' ');
              refalrts::reinit_open_call(context[44]);
              refalrts::reinit_name(context[45], functions[efunc_Symb]);
              refalrts::reinit_name(context[46], functions[efunc_EscapeString]);
              refalrts::reinit_close_call(context[35]);
              refalrts::reinit_svar( context[9], context[5] );
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[102] );
              refalrts::push_stack( vm, context[101] );
              refalrts::push_stack( vm, context[96] );
              refalrts::push_stack( vm, context[95] );
              refalrts::push_stack( vm, context[90] );
              refalrts::push_stack( vm, context[89] );
              refalrts::push_stack( vm, context[86] );
              refalrts::push_stack( vm, context[85] );
              refalrts::push_stack( vm, context[80] );
              refalrts::push_stack( vm, context[79] );
              refalrts::push_stack( vm, context[65] );
              refalrts::push_stack( vm, context[35] );
              refalrts::push_stack( vm, context[77] );
              refalrts::push_stack( vm, context[74] );
              refalrts::push_stack( vm, context[72] );
              refalrts::push_stack( vm, context[70] );
              refalrts::push_stack( vm, context[44] );
              refalrts::push_stack( vm, context[64] );
              refalrts::push_stack( vm, context[0] );
              refalrts::push_stack( vm, context[59] );
              refalrts::push_stack( vm, context[8] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[9];
              res = refalrts::splice_evar( res, context[89], context[103] );
              res = refalrts::splice_evar( res, context[51], context[52] );
              res = refalrts::splice_evar( res, context[78], context[88] );
              res = refalrts::splice_evar( res, context[46], context[35] );
              res = refalrts::splice_evar( res, context[74], context[77] );
              res = refalrts::splice_elem( res, context[58] );
              res = refalrts::splice_evar( res, context[70], context[73] );
              res = refalrts::splice_evar( res, context[27], context[57] );
              res = refalrts::splice_evar( res, context[62], context[69] );
              res = refalrts::splice_elem( res, context[26] );
              res = refalrts::splice_evar( res, context[59], context[61] );
              res = refalrts::splice_evar( res, context[47], context[48] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdNativeFunction/14 s.ScopeClass/19 (/26 e.3/36 )/27 t.2/34 e.4/38 )/9 e.Tail/40 >/1
            context[36] = context[28];
            context[37] = context[29];
            context[38] = context[30];
            context[39] = context[31];
            context[40] = context[32];
            context[41] = context[33];
            // closed e.3 as range 36
            // closed e.4 as range 38
            // closed e.Tail as range 40
            //DEBUG: t.2: 34
            //DEBUG: s.FileHandle: 5
            //DEBUG: s.ScopeClass: 19
            //DEBUG: e.3: 36
            //DEBUG: e.4: 38
            //DEBUG: e.Tail: 40

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: </8 HalfReuse: & FnName*2/14 AsIs: s.ScopeClass/19 } Tile{ AsIs: e.3/36 } >/42 ' '/43 Tile{ HalfReuse: ':'/26 }": native {"/44 >/46 </47 & Putout/48 s.FileHandle/5/49"  "/50 </52 Tile{ HalfReuse: & SrcPos*4/27 AsIs: t.2/34 } >/53 >/54 </55 & Putout/56 s.FileHandle/5/57"    ======================================"/58 >/60 </61 & Map@4/62 s.FileHandle/5/63 Tile{ AsIs: e.4/38 } >/64 </65 & Putout/66 s.FileHandle/5/67"    ======================================"/68 >/70 </71 & Putout/72 s.FileHandle/5/73"  }\n"/74 >/76 </77 & Map@2/78 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/40 AsIs: >/1 ]] }
            refalrts::alloc_close_call(vm, context[42]);
            refalrts::alloc_char(vm, context[43], ' ');
            refalrts::alloc_chars(vm, context[44], context[45], ": native {", 10);
            refalrts::alloc_close_call(vm, context[46]);
            refalrts::alloc_open_call(vm, context[47]);
            refalrts::alloc_name(vm, context[48], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[49], context[5]);
            refalrts::alloc_chars(vm, context[50], context[51], "  ", 2);
            refalrts::alloc_open_call(vm, context[52]);
            refalrts::alloc_close_call(vm, context[53]);
            refalrts::alloc_close_call(vm, context[54]);
            refalrts::alloc_open_call(vm, context[55]);
            refalrts::alloc_name(vm, context[56], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[57], context[5]);
            refalrts::alloc_chars(vm, context[58], context[59], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[60]);
            refalrts::alloc_open_call(vm, context[61]);
            refalrts::alloc_name(vm, context[62], functions[efunc_gen_Map_Z4]);
            refalrts::copy_stvar(vm, context[63], context[5]);
            refalrts::alloc_close_call(vm, context[64]);
            refalrts::alloc_open_call(vm, context[65]);
            refalrts::alloc_name(vm, context[66], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[67], context[5]);
            refalrts::alloc_chars(vm, context[68], context[69], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[70]);
            refalrts::alloc_open_call(vm, context[71]);
            refalrts::alloc_name(vm, context[72], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[73], context[5]);
            refalrts::alloc_chars(vm, context[74], context[75], "  }\n", 4);
            refalrts::alloc_close_call(vm, context[76]);
            refalrts::alloc_open_call(vm, context[77]);
            refalrts::alloc_name(vm, context[78], functions[efunc_gen_Map_Z2]);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_open_call(context[8]);
            refalrts::reinit_name(context[14], functions[efunc_gen_FnName_D2]);
            refalrts::reinit_char(context[26], ':');
            refalrts::reinit_name(context[27], functions[efunc_gen_SrcPos_D4]);
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[77] );
            refalrts::push_stack( vm, context[76] );
            refalrts::push_stack( vm, context[71] );
            refalrts::push_stack( vm, context[70] );
            refalrts::push_stack( vm, context[65] );
            refalrts::push_stack( vm, context[64] );
            refalrts::push_stack( vm, context[61] );
            refalrts::push_stack( vm, context[60] );
            refalrts::push_stack( vm, context[55] );
            refalrts::push_stack( vm, context[54] );
            refalrts::push_stack( vm, context[47] );
            refalrts::push_stack( vm, context[53] );
            refalrts::push_stack( vm, context[52] );
            refalrts::push_stack( vm, context[46] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[42] );
            refalrts::push_stack( vm, context[8] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[64], context[78] );
            res = refalrts::splice_evar( res, context[38], context[39] );
            res = refalrts::splice_evar( res, context[53], context[63] );
            res = refalrts::splice_evar( res, context[27], context[35] );
            res = refalrts::splice_evar( res, context[44], context[52] );
            res = refalrts::splice_elem( res, context[26] );
            res = refalrts::splice_evar( res, context[42], context[43] );
            res = refalrts::splice_evar( res, context[36], context[37] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 s.new21/5 (/8 # CmdMetatable/14 s.new22/19 (/26 e.new24/28 )/27 e.new23/30 )/9 e.new25/32 >/1
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[20];
          context[31] = context[21];
          context[32] = context[22];
          context[33] = context[23];
          if( ! refalrts::ident_term( identifiers[ident_CmdMetatable], context[14] ) )
            continue;
          // closed e.new24 as range 28
          // closed e.new23 as range 30
          // closed e.new25 as range 32
          do {
            // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdMetatable/14 # GN-Local/19 (/26 e.3/34 )/27 e.2/36 )/9 e.Tail/38 >/1
            context[34] = context[28];
            context[35] = context[29];
            context[36] = context[30];
            context[37] = context[31];
            context[38] = context[32];
            context[39] = context[33];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[19] ) )
              continue;
            // closed e.3 as range 34
            // closed e.2 as range 36
            // closed e.Tail as range 38
            //DEBUG: s.FileHandle: 5
            //DEBUG: e.3: 34
            //DEBUG: e.2: 36
            //DEBUG: e.Tail: 38

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: </19 HalfReuse: & DisplayName/26 AsIs: e.3/34 HalfReuse: >/27 }" :: metatable {"/40 >/42 </43 & Map@5/44 s.FileHandle/5/45 Tile{ AsIs: e.2/36 } >/46 </47 & Putout/48 s.FileHandle/5/49"  }\n"/50 >/52 </53 & Map@2/54 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/38 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[40], context[41], " :: metatable {", 15);
            refalrts::alloc_close_call(vm, context[42]);
            refalrts::alloc_open_call(vm, context[43]);
            refalrts::alloc_name(vm, context[44], functions[efunc_gen_Map_Z5]);
            refalrts::copy_stvar(vm, context[45], context[5]);
            refalrts::alloc_close_call(vm, context[46]);
            refalrts::alloc_open_call(vm, context[47]);
            refalrts::alloc_name(vm, context[48], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[49], context[5]);
            refalrts::alloc_chars(vm, context[50], context[51], "  }\n", 4);
            refalrts::alloc_close_call(vm, context[52]);
            refalrts::alloc_open_call(vm, context[53]);
            refalrts::alloc_name(vm, context[54], functions[efunc_gen_Map_Z2]);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[8], ' ');
            refalrts::reinit_char(context[14], ' ');
            refalrts::reinit_open_call(context[19]);
            refalrts::reinit_name(context[26], functions[efunc_DisplayName]);
            refalrts::reinit_close_call(context[27]);
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[53] );
            refalrts::push_stack( vm, context[52] );
            refalrts::push_stack( vm, context[47] );
            refalrts::push_stack( vm, context[46] );
            refalrts::push_stack( vm, context[43] );
            refalrts::push_stack( vm, context[42] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[27] );
            refalrts::push_stack( vm, context[19] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[46], context[54] );
            res = refalrts::splice_evar( res, context[36], context[37] );
            res = refalrts::splice_evar( res, context[40], context[45] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdMetatable/14 # GN-Entry/19 (/26 e.3/34 )/27 e.2/36 )/9 e.Tail/38 >/1
            context[34] = context[28];
            context[35] = context[29];
            context[36] = context[30];
            context[37] = context[31];
            context[38] = context[32];
            context[39] = context[33];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[19] ) )
              continue;
            // closed e.3 as range 34
            // closed e.2 as range 36
            // closed e.Tail as range 38
            //DEBUG: s.FileHandle: 5
            //DEBUG: e.3: 34
            //DEBUG: e.2: 36
            //DEBUG: e.Tail: 38

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '$'/19 HalfReuse: 'E'/26 }"NT"/40 Tile{ HalfReuse: 'R'/27 }"Y "/42 </44 & DisplayName/45 Tile{ AsIs: e.3/34 } >/46" :: metatable {"/47 >/49 </50 & Map@5/51 s.FileHandle/5/52 Tile{ AsIs: e.2/36 } >/53 </54 & Putout/55 s.FileHandle/5/56"  }\n"/57 >/59 </60 & Map@2/61 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/38 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[40], context[41], "NT", 2);
            refalrts::alloc_chars(vm, context[42], context[43], "Y ", 2);
            refalrts::alloc_open_call(vm, context[44]);
            refalrts::alloc_name(vm, context[45], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[46]);
            refalrts::alloc_chars(vm, context[47], context[48], " :: metatable {", 15);
            refalrts::alloc_close_call(vm, context[49]);
            refalrts::alloc_open_call(vm, context[50]);
            refalrts::alloc_name(vm, context[51], functions[efunc_gen_Map_Z5]);
            refalrts::copy_stvar(vm, context[52], context[5]);
            refalrts::alloc_close_call(vm, context[53]);
            refalrts::alloc_open_call(vm, context[54]);
            refalrts::alloc_name(vm, context[55], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[56], context[5]);
            refalrts::alloc_chars(vm, context[57], context[58], "  }\n", 4);
            refalrts::alloc_close_call(vm, context[59]);
            refalrts::alloc_open_call(vm, context[60]);
            refalrts::alloc_name(vm, context[61], functions[efunc_gen_Map_Z2]);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[8], ' ');
            refalrts::reinit_char(context[14], ' ');
            refalrts::reinit_char(context[19], '$');
            refalrts::reinit_char(context[26], 'E');
            refalrts::reinit_char(context[27], 'R');
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[60] );
            refalrts::push_stack( vm, context[59] );
            refalrts::push_stack( vm, context[54] );
            refalrts::push_stack( vm, context[53] );
            refalrts::push_stack( vm, context[50] );
            refalrts::push_stack( vm, context[49] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[46] );
            refalrts::push_stack( vm, context[44] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[53], context[61] );
            res = refalrts::splice_evar( res, context[36], context[37] );
            res = refalrts::splice_evar( res, context[46], context[52] );
            res = refalrts::splice_evar( res, context[34], context[35] );
            res = refalrts::splice_evar( res, context[42], context[45] );
            res = refalrts::splice_elem( res, context[27] );
            res = refalrts::splice_evar( res, context[40], context[41] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdMetatable/14 s.ScopeClass/19 (/26 e.3/34 )/27 e.2/36 )/9 e.Tail/38 >/1
          context[34] = context[28];
          context[35] = context[29];
          context[36] = context[30];
          context[37] = context[31];
          context[38] = context[32];
          context[39] = context[33];
          // closed e.3 as range 34
          // closed e.2 as range 36
          // closed e.Tail as range 38
          //DEBUG: s.FileHandle: 5
          //DEBUG: s.ScopeClass: 19
          //DEBUG: e.3: 34
          //DEBUG: e.2: 36
          //DEBUG: e.Tail: 38

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: </8 HalfReuse: & FnName*2/14 AsIs: s.ScopeClass/19 } Tile{ AsIs: e.3/34 } Tile{ HalfReuse: >/26 } Tile{ HalfReuse: ' '/27 }":: metatable {"/40 >/42 </43 & Map@5/44 s.FileHandle/5/45 Tile{ AsIs: e.2/36 } >/46 </47 & Putout/48 s.FileHandle/5/49"  }\n"/50 >/52 </53 & Map@2/54 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/38 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[40], context[41], ":: metatable {", 14);
          refalrts::alloc_close_call(vm, context[42]);
          refalrts::alloc_open_call(vm, context[43]);
          refalrts::alloc_name(vm, context[44], functions[efunc_gen_Map_Z5]);
          refalrts::copy_stvar(vm, context[45], context[5]);
          refalrts::alloc_close_call(vm, context[46]);
          refalrts::alloc_open_call(vm, context[47]);
          refalrts::alloc_name(vm, context[48], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[49], context[5]);
          refalrts::alloc_chars(vm, context[50], context[51], "  }\n", 4);
          refalrts::alloc_close_call(vm, context[52]);
          refalrts::alloc_open_call(vm, context[53]);
          refalrts::alloc_name(vm, context[54], functions[efunc_gen_Map_Z2]);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_open_call(context[8]);
          refalrts::reinit_name(context[14], functions[efunc_gen_FnName_D2]);
          refalrts::reinit_close_call(context[26]);
          refalrts::reinit_char(context[27], ' ');
          refalrts::reinit_svar( context[9], context[5] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[53] );
          refalrts::push_stack( vm, context[52] );
          refalrts::push_stack( vm, context[47] );
          refalrts::push_stack( vm, context[46] );
          refalrts::push_stack( vm, context[43] );
          refalrts::push_stack( vm, context[42] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[26] );
          refalrts::push_stack( vm, context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[9];
          res = refalrts::splice_evar( res, context[46], context[54] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_evar( res, context[40], context[45] );
          res = refalrts::splice_elem( res, context[27] );
          res = refalrts::splice_elem( res, context[26] );
          res = refalrts::splice_evar( res, context[34], context[35] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 s.new15/5 (/8 # CmdEnum/14 s.new16/19 e.new17/20 )/9 e.new18/22 >/1
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          context[23] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[14] ) )
            continue;
          // closed e.new17 as range 20
          // closed e.new18 as range 22
          do {
            // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdEnum/14 # GN-Local/19 e.1/24 )/9 e.Tail/26 >/1
            context[24] = context[20];
            context[25] = context[21];
            context[26] = context[22];
            context[27] = context[23];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[19] ) )
              continue;
            // closed e.1 as range 24
            // closed e.Tail as range 26
            //DEBUG: s.FileHandle: 5
            //DEBUG: e.1: 24
            //DEBUG: e.Tail: 26

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: </19 } & DisplayName/28 Tile{ AsIs: e.1/24 } >/29" :: enum"/30 >/32 </33 & Map@2/34 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/26 AsIs: >/1 ]] }
            refalrts::alloc_name(vm, context[28], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[29]);
            refalrts::alloc_chars(vm, context[30], context[31], " :: enum", 8);
            refalrts::alloc_close_call(vm, context[32]);
            refalrts::alloc_open_call(vm, context[33]);
            refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z2]);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[8], ' ');
            refalrts::reinit_char(context[14], ' ');
            refalrts::reinit_open_call(context[19]);
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[33] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[29] );
            refalrts::push_stack( vm, context[19] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[29], context[34] );
            res = refalrts::splice_evar( res, context[24], context[25] );
            res = refalrts::splice_elem( res, context[28] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdEnum/14 # GN-Entry/19 e.1/24 )/9 e.Tail/26 >/1
            context[24] = context[20];
            context[25] = context[21];
            context[26] = context[22];
            context[27] = context[23];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[19] ) )
              continue;
            // closed e.1 as range 24
            // closed e.Tail as range 26
            //DEBUG: s.FileHandle: 5
            //DEBUG: e.1: 24
            //DEBUG: e.Tail: 26

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '$'/19 }"ENTRY "/28 </30 & DisplayName/31 Tile{ AsIs: e.1/24 } >/32" :: enum"/33 >/35 </36 & Map@2/37 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/26 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[28], context[29], "ENTRY ", 6);
            refalrts::alloc_open_call(vm, context[30]);
            refalrts::alloc_name(vm, context[31], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[32]);
            refalrts::alloc_chars(vm, context[33], context[34], " :: enum", 8);
            refalrts::alloc_close_call(vm, context[35]);
            refalrts::alloc_open_call(vm, context[36]);
            refalrts::alloc_name(vm, context[37], functions[efunc_gen_Map_Z2]);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[8], ' ');
            refalrts::reinit_char(context[14], ' ');
            refalrts::reinit_char(context[19], '$');
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[36] );
            refalrts::push_stack( vm, context[35] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[30] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[32], context[37] );
            res = refalrts::splice_evar( res, context[24], context[25] );
            res = refalrts::splice_evar( res, context[28], context[31] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdEnum/14 s.ScopeClass/19 e.1/24 )/9 e.Tail/26 >/1
          context[24] = context[20];
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          // closed e.1 as range 24
          // closed e.Tail as range 26
          //DEBUG: s.FileHandle: 5
          //DEBUG: s.ScopeClass: 19
          //DEBUG: e.1: 24
          //DEBUG: e.Tail: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: </8 HalfReuse: & FnName*2/14 AsIs: s.ScopeClass/19 AsIs: e.1/24 HalfReuse: >/9 }" :: enum"/28 >/30 </31 & Map@2/32 s.FileHandle/5/33 Tile{ AsIs: e.Tail/26 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[28], context[29], " :: enum", 8);
          refalrts::alloc_close_call(vm, context[30]);
          refalrts::alloc_open_call(vm, context[31]);
          refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z2]);
          refalrts::copy_stvar(vm, context[33], context[5]);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_open_call(context[8]);
          refalrts::reinit_name(context[14], functions[efunc_gen_FnName_D2]);
          refalrts::reinit_close_call(context[9]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[9] );
          refalrts::push_stack( vm, context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[28], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 s.new15/5 (/8 # CmdSwap/14 s.new16/19 e.new17/20 )/9 e.new18/22 >/1
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          context[23] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[14] ) )
            continue;
          // closed e.new17 as range 20
          // closed e.new18 as range 22
          do {
            // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdSwap/14 # GN-Local/19 e.1/24 )/9 e.Tail/26 >/1
            context[24] = context[20];
            context[25] = context[21];
            context[26] = context[22];
            context[27] = context[23];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[19] ) )
              continue;
            // closed e.1 as range 24
            // closed e.Tail as range 26
            //DEBUG: s.FileHandle: 5
            //DEBUG: e.1: 24
            //DEBUG: e.Tail: 26

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: </19 } & DisplayName/28 Tile{ AsIs: e.1/24 } >/29" :: swap"/30 >/32 </33 & Map@2/34 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/26 AsIs: >/1 ]] }
            refalrts::alloc_name(vm, context[28], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[29]);
            refalrts::alloc_chars(vm, context[30], context[31], " :: swap", 8);
            refalrts::alloc_close_call(vm, context[32]);
            refalrts::alloc_open_call(vm, context[33]);
            refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z2]);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[8], ' ');
            refalrts::reinit_char(context[14], ' ');
            refalrts::reinit_open_call(context[19]);
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[33] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[29] );
            refalrts::push_stack( vm, context[19] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[29], context[34] );
            res = refalrts::splice_evar( res, context[24], context[25] );
            res = refalrts::splice_elem( res, context[28] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdSwap/14 # GN-Entry/19 e.1/24 )/9 e.Tail/26 >/1
            context[24] = context[20];
            context[25] = context[21];
            context[26] = context[22];
            context[27] = context[23];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[19] ) )
              continue;
            // closed e.1 as range 24
            // closed e.Tail as range 26
            //DEBUG: s.FileHandle: 5
            //DEBUG: e.1: 24
            //DEBUG: e.Tail: 26

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '$'/19 }"ENTRY "/28 </30 & DisplayName/31 Tile{ AsIs: e.1/24 } >/32" :: swap"/33 >/35 </36 & Map@2/37 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/26 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[28], context[29], "ENTRY ", 6);
            refalrts::alloc_open_call(vm, context[30]);
            refalrts::alloc_name(vm, context[31], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[32]);
            refalrts::alloc_chars(vm, context[33], context[34], " :: swap", 8);
            refalrts::alloc_close_call(vm, context[35]);
            refalrts::alloc_open_call(vm, context[36]);
            refalrts::alloc_name(vm, context[37], functions[efunc_gen_Map_Z2]);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[8], ' ');
            refalrts::reinit_char(context[14], ' ');
            refalrts::reinit_char(context[19], '$');
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[36] );
            refalrts::push_stack( vm, context[35] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[30] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[32], context[37] );
            res = refalrts::splice_evar( res, context[24], context[25] );
            res = refalrts::splice_evar( res, context[28], context[31] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdSwap/14 s.ScopeClass/19 e.1/24 )/9 e.Tail/26 >/1
          context[24] = context[20];
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          // closed e.1 as range 24
          // closed e.Tail as range 26
          //DEBUG: s.FileHandle: 5
          //DEBUG: s.ScopeClass: 19
          //DEBUG: e.1: 24
          //DEBUG: e.Tail: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: </8 HalfReuse: & FnName*2/14 AsIs: s.ScopeClass/19 AsIs: e.1/24 HalfReuse: >/9 }" :: swap"/28 >/30 </31 & Map@2/32 s.FileHandle/5/33 Tile{ AsIs: e.Tail/26 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[28], context[29], " :: swap", 8);
          refalrts::alloc_close_call(vm, context[30]);
          refalrts::alloc_open_call(vm, context[31]);
          refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z2]);
          refalrts::copy_stvar(vm, context[33], context[5]);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_open_call(context[8]);
          refalrts::reinit_name(context[14], functions[efunc_gen_FnName_D2]);
          refalrts::reinit_close_call(context[9]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[9] );
          refalrts::push_stack( vm, context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[28], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 s.new15/5 (/8 # CmdConditionFunc/14 s.new16/19 e.new17/20 )/9 e.new18/22 >/1
          context[20] = context[15];
          context[21] = context[16];
          context[22] = context[17];
          context[23] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_CmdConditionFunc], context[14] ) )
            continue;
          // closed e.new17 as range 20
          // closed e.new18 as range 22
          do {
            // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdConditionFunc/14 # GN-Local/19 e.1/24 )/9 e.Tail/26 >/1
            context[24] = context[20];
            context[25] = context[21];
            context[26] = context[22];
            context[27] = context[23];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[19] ) )
              continue;
            // closed e.1 as range 24
            // closed e.Tail as range 26
            //DEBUG: s.FileHandle: 5
            //DEBUG: e.1: 24
            //DEBUG: e.Tail: 26

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: </19 } & DisplayName/28 Tile{ AsIs: e.1/24 } >/29" :: condition"/30 >/32 </33 & Map@2/34 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/26 AsIs: >/1 ]] }
            refalrts::alloc_name(vm, context[28], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[29]);
            refalrts::alloc_chars(vm, context[30], context[31], " :: condition", 13);
            refalrts::alloc_close_call(vm, context[32]);
            refalrts::alloc_open_call(vm, context[33]);
            refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z2]);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[8], ' ');
            refalrts::reinit_char(context[14], ' ');
            refalrts::reinit_open_call(context[19]);
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[33] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[29] );
            refalrts::push_stack( vm, context[19] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[29], context[34] );
            res = refalrts::splice_evar( res, context[24], context[25] );
            res = refalrts::splice_elem( res, context[28] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          do {
            // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdConditionFunc/14 # GN-Entry/19 e.1/24 )/9 e.Tail/26 >/1
            context[24] = context[20];
            context[25] = context[21];
            context[26] = context[22];
            context[27] = context[23];
            if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[19] ) )
              continue;
            // closed e.1 as range 24
            // closed e.Tail as range 26
            //DEBUG: s.FileHandle: 5
            //DEBUG: e.1: 24
            //DEBUG: e.Tail: 26

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '$'/19 }"ENTRY "/28 </30 & DisplayName/31 Tile{ AsIs: e.1/24 } >/32" :: condition"/33 >/35 </36 & Map@2/37 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/26 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[28], context[29], "ENTRY ", 6);
            refalrts::alloc_open_call(vm, context[30]);
            refalrts::alloc_name(vm, context[31], functions[efunc_DisplayName]);
            refalrts::alloc_close_call(vm, context[32]);
            refalrts::alloc_chars(vm, context[33], context[34], " :: condition", 13);
            refalrts::alloc_close_call(vm, context[35]);
            refalrts::alloc_open_call(vm, context[36]);
            refalrts::alloc_name(vm, context[37], functions[efunc_gen_Map_Z2]);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[8], ' ');
            refalrts::reinit_char(context[14], ' ');
            refalrts::reinit_char(context[19], '$');
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[36] );
            refalrts::push_stack( vm, context[35] );
            refalrts::push_stack( vm, context[0] );
            refalrts::push_stack( vm, context[32] );
            refalrts::push_stack( vm, context[30] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[32], context[37] );
            res = refalrts::splice_evar( res, context[24], context[25] );
            res = refalrts::splice_evar( res, context[28], context[31] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdConditionFunc/14 s.ScopeClass/19 e.1/24 )/9 e.Tail/26 >/1
          context[24] = context[20];
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          // closed e.1 as range 24
          // closed e.Tail as range 26
          //DEBUG: s.FileHandle: 5
          //DEBUG: s.ScopeClass: 19
          //DEBUG: e.1: 24
          //DEBUG: e.Tail: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: </8 HalfReuse: & FnName*2/14 AsIs: s.ScopeClass/19 AsIs: e.1/24 HalfReuse: >/9 }" :: condition"/28 >/30 </31 & Map@2/32 s.FileHandle/5/33 Tile{ AsIs: e.Tail/26 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[28], context[29], " :: condition", 13);
          refalrts::alloc_close_call(vm, context[30]);
          refalrts::alloc_open_call(vm, context[31]);
          refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z2]);
          refalrts::copy_stvar(vm, context[33], context[5]);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_open_call(context[8]);
          refalrts::reinit_name(context[14], functions[efunc_gen_FnName_D2]);
          refalrts::reinit_close_call(context[9]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[30] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[9] );
          refalrts::push_stack( vm, context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[26], context[27] );
          res = refalrts::splice_evar( res, context[28], context[33] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@2/4 s.new15/5 (/8 # CmdDeclaration/14 s.new16/19 e.new17/20 )/9 e.new18/22 >/1
        context[20] = context[15];
        context[21] = context[16];
        context[22] = context[17];
        context[23] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[14] ) )
          continue;
        // closed e.new17 as range 20
        // closed e.new18 as range 22
        do {
          // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdDeclaration/14 # GN-Local/19 e.1/24 )/9 e.Tail/26 >/1
          context[24] = context[20];
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[19] ) )
            continue;
          // closed e.1 as range 24
          // closed e.Tail as range 26
          //DEBUG: s.FileHandle: 5
          //DEBUG: e.1: 24
          //DEBUG: e.Tail: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: </19 } & DisplayName/28 Tile{ AsIs: e.1/24 } >/29" :: extern"/30 >/32 </33 & Map@2/34 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/26 AsIs: >/1 ]] }
          refalrts::alloc_name(vm, context[28], functions[efunc_DisplayName]);
          refalrts::alloc_close_call(vm, context[29]);
          refalrts::alloc_chars(vm, context[30], context[31], " :: extern", 10);
          refalrts::alloc_close_call(vm, context[32]);
          refalrts::alloc_open_call(vm, context[33]);
          refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z2]);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_char(context[8], ' ');
          refalrts::reinit_char(context[14], ' ');
          refalrts::reinit_open_call(context[19]);
          refalrts::reinit_svar( context[9], context[5] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[33] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[29] );
          refalrts::push_stack( vm, context[19] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[9];
          res = refalrts::splice_evar( res, context[29], context[34] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_elem( res, context[28] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdDeclaration/14 # GN-Entry/19 e.1/24 )/9 e.Tail/26 >/1
          context[24] = context[20];
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[19] ) )
            continue;
          // closed e.1 as range 24
          // closed e.Tail as range 26
          //DEBUG: s.FileHandle: 5
          //DEBUG: e.1: 24
          //DEBUG: e.Tail: 26

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '$'/19 }"ENTRY "/28 </30 & DisplayName/31 Tile{ AsIs: e.1/24 } >/32" :: extern"/33 >/35 </36 & Map@2/37 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/26 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[28], context[29], "ENTRY ", 6);
          refalrts::alloc_open_call(vm, context[30]);
          refalrts::alloc_name(vm, context[31], functions[efunc_DisplayName]);
          refalrts::alloc_close_call(vm, context[32]);
          refalrts::alloc_chars(vm, context[33], context[34], " :: extern", 10);
          refalrts::alloc_close_call(vm, context[35]);
          refalrts::alloc_open_call(vm, context[36]);
          refalrts::alloc_name(vm, context[37], functions[efunc_gen_Map_Z2]);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_char(context[8], ' ');
          refalrts::reinit_char(context[14], ' ');
          refalrts::reinit_char(context[19], '$');
          refalrts::reinit_svar( context[9], context[5] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[36] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[30] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[9];
          res = refalrts::splice_evar( res, context[32], context[37] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          res = refalrts::splice_evar( res, context[28], context[31] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdDeclaration/14 s.ScopeClass/19 e.1/24 )/9 e.Tail/26 >/1
        context[24] = context[20];
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        // closed e.1 as range 24
        // closed e.Tail as range 26
        //DEBUG: s.FileHandle: 5
        //DEBUG: s.ScopeClass: 19
        //DEBUG: e.1: 24
        //DEBUG: e.Tail: 26

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: </8 HalfReuse: & FnName*2/14 AsIs: s.ScopeClass/19 AsIs: e.1/24 HalfReuse: >/9 }" :: extern"/28 >/30 </31 & Map@2/32 s.FileHandle/5/33 Tile{ AsIs: e.Tail/26 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[28], context[29], " :: extern", 10);
        refalrts::alloc_close_call(vm, context[30]);
        refalrts::alloc_open_call(vm, context[31]);
        refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z2]);
        refalrts::copy_stvar(vm, context[33], context[5]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_open_call(context[8]);
        refalrts::reinit_name(context[14], functions[efunc_gen_FnName_D2]);
        refalrts::reinit_close_call(context[9]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[30] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[9] );
        refalrts::push_stack( vm, context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[28], context[33] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdDefineIdent/14 e.0/15 )/9 e.Tail/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_CmdDefineIdent], context[14] ) )
          continue;
        // closed e.0 as range 15
        // closed e.Tail as range 17
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.0: 15
        //DEBUG: e.Tail: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: '$'/8 HalfReuse: 'L'/14 }"ABEL "/19 </21 & DisplayName/22 Tile{ AsIs: e.0/15 } >/23 >/24 </25 & Map@2/26 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "ABEL ", 5);
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[22], functions[efunc_DisplayName]);
        refalrts::alloc_close_call(vm, context[23]);
        refalrts::alloc_close_call(vm, context[24]);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[26], functions[efunc_gen_Map_Z2]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[8], '$');
        refalrts::reinit_char(context[14], 'L');
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[24] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[23], context[26] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[22] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@2/4 s.new10/5 (/8 s.new11/14 t.new12/19 e.new13/15 )/9 e.new14/17 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = context[10];
      context[18] = context[11];
      // closed e.new14 as range 17
      context[20] = refalrts::tvar_left( context[19], context[15], context[16] );
      if( ! context[20] )
        continue;
      // closed e.new13 as range 15
      do {
        // </0 & Map@2/4 s.new15/5 (/8 # CmdEmitNativeCode/14 t.new16/19 e.new17/21 )/9 e.new18/23 >/1
        context[21] = context[15];
        context[22] = context[16];
        context[23] = context[17];
        context[24] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[14] ) )
          continue;
        // closed e.new17 as range 21
        // closed e.new18 as range 23
        do {
          // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdEmitNativeCode/14 s.LineNumber/19 e.1/25 )/9 e.Tail/27 >/1
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          if( ! refalrts::svar_term( context[19], context[19] ) )
            continue;
          // closed e.1 as range 25
          // closed e.Tail as range 27
          //DEBUG: s.LineNumber: 19
          //DEBUG: s.FileHandle: 5
          //DEBUG: e.1: 25
          //DEBUG: e.Tail: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: 'N'/8 HalfReuse: 'a'/14 }"tive code:"/29 >/31 </32 & Putout/33 s.FileHandle/5/34"  #line "/35 </37 & Symb/38 Tile{ AsIs: s.LineNumber/19 } >/39 >/40 </41 & Putout/42 s.FileHandle/5/43"    ======================================"/44 >/46 </47 & Map@4/48 s.FileHandle/5/49 Tile{ AsIs: e.1/25 } >/50 </51 & Putout/52 s.FileHandle/5/53"    ======================================"/54 >/56 </57 & Putout/58 s.FileHandle/5/59 >/60 </61 & Map@2/62 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/27 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[29], context[30], "tive code:", 10);
          refalrts::alloc_close_call(vm, context[31]);
          refalrts::alloc_open_call(vm, context[32]);
          refalrts::alloc_name(vm, context[33], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[34], context[5]);
          refalrts::alloc_chars(vm, context[35], context[36], "  #line ", 8);
          refalrts::alloc_open_call(vm, context[37]);
          refalrts::alloc_name(vm, context[38], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[39]);
          refalrts::alloc_close_call(vm, context[40]);
          refalrts::alloc_open_call(vm, context[41]);
          refalrts::alloc_name(vm, context[42], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[43], context[5]);
          refalrts::alloc_chars(vm, context[44], context[45], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[46]);
          refalrts::alloc_open_call(vm, context[47]);
          refalrts::alloc_name(vm, context[48], functions[efunc_gen_Map_Z4]);
          refalrts::copy_stvar(vm, context[49], context[5]);
          refalrts::alloc_close_call(vm, context[50]);
          refalrts::alloc_open_call(vm, context[51]);
          refalrts::alloc_name(vm, context[52], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[53], context[5]);
          refalrts::alloc_chars(vm, context[54], context[55], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[56]);
          refalrts::alloc_open_call(vm, context[57]);
          refalrts::alloc_name(vm, context[58], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[59], context[5]);
          refalrts::alloc_close_call(vm, context[60]);
          refalrts::alloc_open_call(vm, context[61]);
          refalrts::alloc_name(vm, context[62], functions[efunc_gen_Map_Z2]);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_char(context[8], 'N');
          refalrts::reinit_char(context[14], 'a');
          refalrts::reinit_svar( context[9], context[5] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[61] );
          refalrts::push_stack( vm, context[60] );
          refalrts::push_stack( vm, context[57] );
          refalrts::push_stack( vm, context[56] );
          refalrts::push_stack( vm, context[51] );
          refalrts::push_stack( vm, context[50] );
          refalrts::push_stack( vm, context[47] );
          refalrts::push_stack( vm, context[46] );
          refalrts::push_stack( vm, context[41] );
          refalrts::push_stack( vm, context[40] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[39] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[31] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[9];
          res = refalrts::splice_evar( res, context[50], context[62] );
          res = refalrts::splice_evar( res, context[25], context[26] );
          res = refalrts::splice_evar( res, context[39], context[49] );
          res = refalrts::splice_elem( res, context[19] );
          res = refalrts::splice_evar( res, context[29], context[38] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & Map@2/4 s.new19/5 (/8 # CmdEmitNativeCode/14 (/19 s.new20/31 t.new21/32 e.new22/29 )/20 e.new23/25 )/9 e.new24/27 >/1
          context[25] = context[21];
          context[26] = context[22];
          context[27] = context[23];
          context[28] = context[24];
          context[29] = 0;
          context[30] = 0;
          if( ! refalrts::brackets_term( context[29], context[30], context[19] ) )
            continue;
          // closed e.new23 as range 25
          // closed e.new24 as range 27
          if( ! refalrts::svar_left( context[31], context[29], context[30] ) )
            continue;
          context[33] = refalrts::tvar_left( context[32], context[29], context[30] );
          if( ! context[33] )
            continue;
          // closed e.new22 as range 29
          do {
            // </0 & Map@2/4 s.new25/5 (/8 # CmdEmitNativeCode/14 (/19 s.new26/31 s.new27/32 e.new28/34 )/20 e.new29/36 )/9 e.new30/38 >/1
            context[34] = context[29];
            context[35] = context[30];
            context[36] = context[25];
            context[37] = context[26];
            context[38] = context[27];
            context[39] = context[28];
            if( ! refalrts::svar_term( context[32], context[32] ) )
              continue;
            // closed e.new28 as range 34
            // closed e.new29 as range 36
            // closed e.new30 as range 38
            do {
              // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdEmitNativeCode/14 (/19 # FileLine/31 s.Line/32 e.2/40 )/20 e.1/42 )/9 e.Tail/44 >/1
              context[40] = context[34];
              context[41] = context[35];
              context[42] = context[36];
              context[43] = context[37];
              context[44] = context[38];
              context[45] = context[39];
              if( ! refalrts::ident_term( identifiers[ident_FileLine], context[31] ) )
                continue;
              // closed e.2 as range 40
              // closed e.1 as range 42
              // closed e.Tail as range 44
              //DEBUG: s.FileHandle: 5
              //DEBUG: s.Line: 32
              //DEBUG: e.2: 40
              //DEBUG: e.1: 42
              //DEBUG: e.Tail: 44

              refalrts::reset_allocator(vm);
              //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
              //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: 'N'/8 HalfReuse: 'a'/14 HalfReuse: 't'/19 HalfReuse: 'i'/31 }"ve "/46 Tile{ HalfReuse: 'c'/20 }"ode:"/48 >/50 </51 & Putout/52 s.FileHandle/5/53"  #line "/54 </56 & Symb/57 Tile{ AsIs: s.Line/32 } >/58" \""/59 </61 & EscapeString/62 Tile{ AsIs: e.2/40 } >/63 '\"'/64 >/65 </66 & Putout/67 s.FileHandle/5/68"    ======================================"/69 >/71 </72 & Map@4/73 s.FileHandle/5/74 Tile{ AsIs: e.1/42 } >/75 </76 & Putout/77 s.FileHandle/5/78"    ======================================"/79 >/81 </82 & Putout/83 s.FileHandle/5/84 >/85 </86 & Map@2/87 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/44 AsIs: >/1 ]] }
              refalrts::alloc_chars(vm, context[46], context[47], "ve ", 3);
              refalrts::alloc_chars(vm, context[48], context[49], "ode:", 4);
              refalrts::alloc_close_call(vm, context[50]);
              refalrts::alloc_open_call(vm, context[51]);
              refalrts::alloc_name(vm, context[52], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[53], context[5]);
              refalrts::alloc_chars(vm, context[54], context[55], "  #line ", 8);
              refalrts::alloc_open_call(vm, context[56]);
              refalrts::alloc_name(vm, context[57], functions[efunc_Symb]);
              refalrts::alloc_close_call(vm, context[58]);
              refalrts::alloc_chars(vm, context[59], context[60], " \"", 2);
              refalrts::alloc_open_call(vm, context[61]);
              refalrts::alloc_name(vm, context[62], functions[efunc_EscapeString]);
              refalrts::alloc_close_call(vm, context[63]);
              refalrts::alloc_char(vm, context[64], '\"');
              refalrts::alloc_close_call(vm, context[65]);
              refalrts::alloc_open_call(vm, context[66]);
              refalrts::alloc_name(vm, context[67], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[68], context[5]);
              refalrts::alloc_chars(vm, context[69], context[70], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[71]);
              refalrts::alloc_open_call(vm, context[72]);
              refalrts::alloc_name(vm, context[73], functions[efunc_gen_Map_Z4]);
              refalrts::copy_stvar(vm, context[74], context[5]);
              refalrts::alloc_close_call(vm, context[75]);
              refalrts::alloc_open_call(vm, context[76]);
              refalrts::alloc_name(vm, context[77], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[78], context[5]);
              refalrts::alloc_chars(vm, context[79], context[80], "    ======================================", 42);
              refalrts::alloc_close_call(vm, context[81]);
              refalrts::alloc_open_call(vm, context[82]);
              refalrts::alloc_name(vm, context[83], functions[efunc_Putout]);
              refalrts::copy_stvar(vm, context[84], context[5]);
              refalrts::alloc_close_call(vm, context[85]);
              refalrts::alloc_open_call(vm, context[86]);
              refalrts::alloc_name(vm, context[87], functions[efunc_gen_Map_Z2]);
              refalrts::update_name(context[4], functions[efunc_Putout]);
              refalrts::reinit_char(context[8], 'N');
              refalrts::reinit_char(context[14], 'a');
              refalrts::reinit_char(context[19], 't');
              refalrts::reinit_char(context[31], 'i');
              refalrts::reinit_char(context[20], 'c');
              refalrts::reinit_svar( context[9], context[5] );
              refalrts::push_stack( vm, context[1] );
              refalrts::push_stack( vm, context[86] );
              refalrts::push_stack( vm, context[85] );
              refalrts::push_stack( vm, context[82] );
              refalrts::push_stack( vm, context[81] );
              refalrts::push_stack( vm, context[76] );
              refalrts::push_stack( vm, context[75] );
              refalrts::push_stack( vm, context[72] );
              refalrts::push_stack( vm, context[71] );
              refalrts::push_stack( vm, context[66] );
              refalrts::push_stack( vm, context[65] );
              refalrts::push_stack( vm, context[51] );
              refalrts::push_stack( vm, context[63] );
              refalrts::push_stack( vm, context[61] );
              refalrts::push_stack( vm, context[58] );
              refalrts::push_stack( vm, context[56] );
              refalrts::push_stack( vm, context[50] );
              refalrts::push_stack( vm, context[0] );
              refalrts::Iter trash_prev = arg_begin->prev;
              refalrts::use(trash_prev);
              refalrts::Iter res = context[9];
              res = refalrts::splice_evar( res, context[75], context[87] );
              res = refalrts::splice_evar( res, context[42], context[43] );
              res = refalrts::splice_evar( res, context[63], context[74] );
              res = refalrts::splice_evar( res, context[40], context[41] );
              res = refalrts::splice_evar( res, context[58], context[62] );
              res = refalrts::splice_elem( res, context[32] );
              res = refalrts::splice_evar( res, context[48], context[57] );
              res = refalrts::splice_elem( res, context[20] );
              res = refalrts::splice_evar( res, context[46], context[47] );
              refalrts::use( res );
              return refalrts::cSuccess;
            } while ( 0 );
            refalrts::stop_sentence(vm);

            // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdEmitNativeCode/14 (/19 # RowCol/31 s.Row/32 s.Col/46 )/20 e.1/42 )/9 e.Tail/44 >/1
            context[40] = context[34];
            context[41] = context[35];
            context[42] = context[36];
            context[43] = context[37];
            context[44] = context[38];
            context[45] = context[39];
            if( ! refalrts::ident_term( identifiers[ident_RowCol], context[31] ) )
              continue;
            // closed e.1 as range 42
            // closed e.Tail as range 44
            if( ! refalrts::svar_left( context[46], context[40], context[41] ) )
              continue;
            if( ! refalrts::empty_seq( context[40], context[41] ) )
              continue;
            //DEBUG: s.FileHandle: 5
            //DEBUG: s.Row: 32
            //DEBUG: e.1: 42
            //DEBUG: e.Tail: 44
            //DEBUG: s.Col: 46

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
            //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: 'N'/8 HalfReuse: 'a'/14 HalfReuse: 't'/19 HalfReuse: 'i'/31 }"ve code:"/47 >/49 </50 & Putout/51 s.FileHandle/5/52"  #line "/53 </55 & Symb/56 Tile{ AsIs: s.Row/32 } >/57 ':'/58 </59 & Symb/60 Tile{ AsIs: s.Col/46 HalfReuse: >/20 } >/61 </62 & Putout/63 s.FileHandle/5/64"    ======================================"/65 >/67 </68 & Map@4/69 s.FileHandle/5/70 Tile{ AsIs: e.1/42 } >/71 </72 & Putout/73 s.FileHandle/5/74"    ======================================"/75 >/77 </78 & Putout/79 s.FileHandle/5/80 >/81 </82 & Map@2/83 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/44 AsIs: >/1 ]] }
            refalrts::alloc_chars(vm, context[47], context[48], "ve code:", 8);
            refalrts::alloc_close_call(vm, context[49]);
            refalrts::alloc_open_call(vm, context[50]);
            refalrts::alloc_name(vm, context[51], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[52], context[5]);
            refalrts::alloc_chars(vm, context[53], context[54], "  #line ", 8);
            refalrts::alloc_open_call(vm, context[55]);
            refalrts::alloc_name(vm, context[56], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[57]);
            refalrts::alloc_char(vm, context[58], ':');
            refalrts::alloc_open_call(vm, context[59]);
            refalrts::alloc_name(vm, context[60], functions[efunc_Symb]);
            refalrts::alloc_close_call(vm, context[61]);
            refalrts::alloc_open_call(vm, context[62]);
            refalrts::alloc_name(vm, context[63], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[64], context[5]);
            refalrts::alloc_chars(vm, context[65], context[66], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[67]);
            refalrts::alloc_open_call(vm, context[68]);
            refalrts::alloc_name(vm, context[69], functions[efunc_gen_Map_Z4]);
            refalrts::copy_stvar(vm, context[70], context[5]);
            refalrts::alloc_close_call(vm, context[71]);
            refalrts::alloc_open_call(vm, context[72]);
            refalrts::alloc_name(vm, context[73], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[74], context[5]);
            refalrts::alloc_chars(vm, context[75], context[76], "    ======================================", 42);
            refalrts::alloc_close_call(vm, context[77]);
            refalrts::alloc_open_call(vm, context[78]);
            refalrts::alloc_name(vm, context[79], functions[efunc_Putout]);
            refalrts::copy_stvar(vm, context[80], context[5]);
            refalrts::alloc_close_call(vm, context[81]);
            refalrts::alloc_open_call(vm, context[82]);
            refalrts::alloc_name(vm, context[83], functions[efunc_gen_Map_Z2]);
            refalrts::update_name(context[4], functions[efunc_Putout]);
            refalrts::reinit_char(context[8], 'N');
            refalrts::reinit_char(context[14], 'a');
            refalrts::reinit_char(context[19], 't');
            refalrts::reinit_char(context[31], 'i');
            refalrts::reinit_close_call(context[20]);
            refalrts::reinit_svar( context[9], context[5] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[82] );
            refalrts::push_stack( vm, context[81] );
            refalrts::push_stack( vm, context[78] );
            refalrts::push_stack( vm, context[77] );
            refalrts::push_stack( vm, context[72] );
            refalrts::push_stack( vm, context[71] );
            refalrts::push_stack( vm, context[68] );
            refalrts::push_stack( vm, context[67] );
            refalrts::push_stack( vm, context[62] );
            refalrts::push_stack( vm, context[61] );
            refalrts::push_stack( vm, context[50] );
            refalrts::push_stack( vm, context[20] );
            refalrts::push_stack( vm, context[59] );
            refalrts::push_stack( vm, context[57] );
            refalrts::push_stack( vm, context[55] );
            refalrts::push_stack( vm, context[49] );
            refalrts::push_stack( vm, context[0] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[9];
            res = refalrts::splice_evar( res, context[71], context[83] );
            res = refalrts::splice_evar( res, context[42], context[43] );
            res = refalrts::splice_evar( res, context[61], context[70] );
            res = refalrts::splice_evar( res, context[46], context[20] );
            res = refalrts::splice_evar( res, context[57], context[60] );
            res = refalrts::splice_elem( res, context[32] );
            res = refalrts::splice_evar( res, context[47], context[56] );
            refalrts::use( res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdEmitNativeCode/14 (/19 # FileRowCol/31 (/32 s.Row/42 s.Col/43 )/33 e.2/34 )/20 e.1/36 )/9 e.Tail/38 >/1
          context[34] = context[29];
          context[35] = context[30];
          context[36] = context[25];
          context[37] = context[26];
          context[38] = context[27];
          context[39] = context[28];
          context[40] = 0;
          context[41] = 0;
          if( ! refalrts::brackets_term( context[40], context[41], context[32] ) )
            continue;
          if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[31] ) )
            continue;
          // closed e.2 as range 34
          // closed e.1 as range 36
          // closed e.Tail as range 38
          if( ! refalrts::svar_left( context[42], context[40], context[41] ) )
            continue;
          if( ! refalrts::svar_left( context[43], context[40], context[41] ) )
            continue;
          if( ! refalrts::empty_seq( context[40], context[41] ) )
            continue;
          //DEBUG: s.FileHandle: 5
          //DEBUG: e.2: 34
          //DEBUG: e.1: 36
          //DEBUG: e.Tail: 38
          //DEBUG: s.Row: 42
          //DEBUG: s.Col: 43

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: 'N'/8 HalfReuse: 'a'/14 HalfReuse: 't'/19 HalfReuse: 'i'/31 HalfReuse: 'v'/32 }"e code:"/44 >/46 </47 & Putout/48 s.FileHandle/5/49"  #line "/50 </52 & Symb/53 Tile{ AsIs: s.Row/42 } >/54 ':'/55 </56 & Symb/57 Tile{ AsIs: s.Col/43 } >/58" \""/59 </61 Tile{ HalfReuse: & EscapeString/33 AsIs: e.2/34 HalfReuse: >/20 } '\"'/62 >/63 </64 & Putout/65 s.FileHandle/5/66"    ======================================"/67 >/69 </70 & Map@4/71 s.FileHandle/5/72 Tile{ AsIs: e.1/36 } >/73 </74 & Putout/75 s.FileHandle/5/76"    ======================================"/77 >/79 </80 & Putout/81 s.FileHandle/5/82 >/83 </84 & Map@2/85 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/38 AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[44], context[45], "e code:", 7);
          refalrts::alloc_close_call(vm, context[46]);
          refalrts::alloc_open_call(vm, context[47]);
          refalrts::alloc_name(vm, context[48], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[49], context[5]);
          refalrts::alloc_chars(vm, context[50], context[51], "  #line ", 8);
          refalrts::alloc_open_call(vm, context[52]);
          refalrts::alloc_name(vm, context[53], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[54]);
          refalrts::alloc_char(vm, context[55], ':');
          refalrts::alloc_open_call(vm, context[56]);
          refalrts::alloc_name(vm, context[57], functions[efunc_Symb]);
          refalrts::alloc_close_call(vm, context[58]);
          refalrts::alloc_chars(vm, context[59], context[60], " \"", 2);
          refalrts::alloc_open_call(vm, context[61]);
          refalrts::alloc_char(vm, context[62], '\"');
          refalrts::alloc_close_call(vm, context[63]);
          refalrts::alloc_open_call(vm, context[64]);
          refalrts::alloc_name(vm, context[65], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[66], context[5]);
          refalrts::alloc_chars(vm, context[67], context[68], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[69]);
          refalrts::alloc_open_call(vm, context[70]);
          refalrts::alloc_name(vm, context[71], functions[efunc_gen_Map_Z4]);
          refalrts::copy_stvar(vm, context[72], context[5]);
          refalrts::alloc_close_call(vm, context[73]);
          refalrts::alloc_open_call(vm, context[74]);
          refalrts::alloc_name(vm, context[75], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[76], context[5]);
          refalrts::alloc_chars(vm, context[77], context[78], "    ======================================", 42);
          refalrts::alloc_close_call(vm, context[79]);
          refalrts::alloc_open_call(vm, context[80]);
          refalrts::alloc_name(vm, context[81], functions[efunc_Putout]);
          refalrts::copy_stvar(vm, context[82], context[5]);
          refalrts::alloc_close_call(vm, context[83]);
          refalrts::alloc_open_call(vm, context[84]);
          refalrts::alloc_name(vm, context[85], functions[efunc_gen_Map_Z2]);
          refalrts::update_name(context[4], functions[efunc_Putout]);
          refalrts::reinit_char(context[8], 'N');
          refalrts::reinit_char(context[14], 'a');
          refalrts::reinit_char(context[19], 't');
          refalrts::reinit_char(context[31], 'i');
          refalrts::reinit_char(context[32], 'v');
          refalrts::reinit_name(context[33], functions[efunc_EscapeString]);
          refalrts::reinit_close_call(context[20]);
          refalrts::reinit_svar( context[9], context[5] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[84] );
          refalrts::push_stack( vm, context[83] );
          refalrts::push_stack( vm, context[80] );
          refalrts::push_stack( vm, context[79] );
          refalrts::push_stack( vm, context[74] );
          refalrts::push_stack( vm, context[73] );
          refalrts::push_stack( vm, context[70] );
          refalrts::push_stack( vm, context[69] );
          refalrts::push_stack( vm, context[64] );
          refalrts::push_stack( vm, context[63] );
          refalrts::push_stack( vm, context[47] );
          refalrts::push_stack( vm, context[20] );
          refalrts::push_stack( vm, context[61] );
          refalrts::push_stack( vm, context[58] );
          refalrts::push_stack( vm, context[56] );
          refalrts::push_stack( vm, context[54] );
          refalrts::push_stack( vm, context[52] );
          refalrts::push_stack( vm, context[46] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[9];
          res = refalrts::splice_evar( res, context[73], context[85] );
          res = refalrts::splice_evar( res, context[36], context[37] );
          res = refalrts::splice_evar( res, context[62], context[72] );
          res = refalrts::splice_evar( res, context[33], context[20] );
          res = refalrts::splice_evar( res, context[58], context[61] );
          res = refalrts::splice_elem( res, context[43] );
          res = refalrts::splice_evar( res, context[54], context[57] );
          res = refalrts::splice_elem( res, context[42] );
          res = refalrts::splice_evar( res, context[44], context[53] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & Map@2/4 s.FileHandle/5 (/8 # CmdEmitNativeCode/14 t.0/19 e.1/25 )/9 e.Tail/27 >/1
        context[25] = context[21];
        context[26] = context[22];
        context[27] = context[23];
        context[28] = context[24];
        // closed e.1 as range 25
        // closed e.Tail as range 27
        //DEBUG: t.0: 19
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.1: 25
        //DEBUG: e.Tail: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: 'N'/8 HalfReuse: 'a'/14 }"tive code:"/29 >/31 </32 & Putout/33 s.FileHandle/5/34"  "/35 </37 & SrcPos*4/38 Tile{ AsIs: t.0/19 } >/39 >/40 </41 & Putout/42 s.FileHandle/5/43"    ======================================"/44 >/46 </47 & Map@4/48 s.FileHandle/5/49 Tile{ AsIs: e.1/25 } >/50 </51 & Putout/52 s.FileHandle/5/53"    ======================================"/54 >/56 </57 & Putout/58 s.FileHandle/5/59 >/60 </61 & Map@2/62 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/27 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[29], context[30], "tive code:", 10);
        refalrts::alloc_close_call(vm, context[31]);
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[34], context[5]);
        refalrts::alloc_chars(vm, context[35], context[36], "  ", 2);
        refalrts::alloc_open_call(vm, context[37]);
        refalrts::alloc_name(vm, context[38], functions[efunc_gen_SrcPos_D4]);
        refalrts::alloc_close_call(vm, context[39]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_open_call(vm, context[41]);
        refalrts::alloc_name(vm, context[42], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[43], context[5]);
        refalrts::alloc_chars(vm, context[44], context[45], "    ======================================", 42);
        refalrts::alloc_close_call(vm, context[46]);
        refalrts::alloc_open_call(vm, context[47]);
        refalrts::alloc_name(vm, context[48], functions[efunc_gen_Map_Z4]);
        refalrts::copy_stvar(vm, context[49], context[5]);
        refalrts::alloc_close_call(vm, context[50]);
        refalrts::alloc_open_call(vm, context[51]);
        refalrts::alloc_name(vm, context[52], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[53], context[5]);
        refalrts::alloc_chars(vm, context[54], context[55], "    ======================================", 42);
        refalrts::alloc_close_call(vm, context[56]);
        refalrts::alloc_open_call(vm, context[57]);
        refalrts::alloc_name(vm, context[58], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[59], context[5]);
        refalrts::alloc_close_call(vm, context[60]);
        refalrts::alloc_open_call(vm, context[61]);
        refalrts::alloc_name(vm, context[62], functions[efunc_gen_Map_Z2]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[8], 'N');
        refalrts::reinit_char(context[14], 'a');
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[61] );
        refalrts::push_stack( vm, context[60] );
        refalrts::push_stack( vm, context[57] );
        refalrts::push_stack( vm, context[56] );
        refalrts::push_stack( vm, context[51] );
        refalrts::push_stack( vm, context[50] );
        refalrts::push_stack( vm, context[47] );
        refalrts::push_stack( vm, context[46] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[39] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[50], context[62] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[39], context[49] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[29], context[38] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@2/4 s.FileHandle/5 (/8 # Spec/14 (/19 e.2/25 )/20 e.1/21 )/9 e.Tail/23 >/1
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      context[24] = context[18];
      context[25] = 0;
      context[26] = 0;
      if( ! refalrts::brackets_term( context[25], context[26], context[19] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_Spec], context[14] ) )
        continue;
      // closed e.2 as range 25
      // closed e.1 as range 21
      // closed e.Tail as range 23
      //DEBUG: s.FileHandle: 5
      //DEBUG: e.2: 25
      //DEBUG: e.1: 21
      //DEBUG: e.Tail: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: '$'/8 HalfReuse: 'S'/14 HalfReuse: 'P'/19 }"EC"/27 Tile{ HalfReuse: ' '/20 } </29 & DisplayName/30 Tile{ AsIs: e.2/25 } >/31 >/32 </33 & Map@6/34 s.FileHandle/5/35 Tile{ AsIs: e.1/21 } >/36 </37 & Map@2/38 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/23 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[27], context[28], "EC", 2);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_DisplayName]);
      refalrts::alloc_close_call(vm, context[31]);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_gen_Map_Z6]);
      refalrts::copy_stvar(vm, context[35], context[5]);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::alloc_open_call(vm, context[37]);
      refalrts::alloc_name(vm, context[38], functions[efunc_gen_Map_Z2]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[8], '$');
      refalrts::reinit_char(context[14], 'S');
      refalrts::reinit_char(context[19], 'P');
      refalrts::reinit_char(context[20], ' ');
      refalrts::reinit_svar( context[9], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[37] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[33] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[36], context[38] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[31], context[35] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_elem( res, context[20] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@2/4 s.FileHandle/5 t.Next/8 e.Tail/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail as range 10
    //DEBUG: t.Next: 8
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Tail: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutProgramElement*10/4 AsIs: s.FileHandle/5 AsIs: t.Next/8 } >/12 </13 & Map@2/14 s.FileHandle/5/15 Tile{ AsIs: e.Tail/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z2]);
    refalrts::copy_stvar(vm, context[15], context[5]);
    refalrts::update_name(context[4], functions[efunc_gen_PutProgramElement_D10]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@2/4 s.FileHandle/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FileHandle: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@2/4 s.FileHandle/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@2/4 s.FileHandle/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: s.FileHandle: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } (/6 & PutProgramElement@0/7 Tile{ AsIs: s.FileHandle/5 } )/8 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_PutProgramElement_Z0]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[6], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[8] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
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
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  // </0 & Map@3/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@3/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@3/4 s.new3/5 t.new4/8 e.new5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new5 as range 6
    do {
      // </0 & Map@3/4 s.new6/5 (/8 s.new7/14 e.new8/12 )/9 e.new9/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.new9 as range 10
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.new8 as range 12
      do {
        // </0 & Map@3/4 s.FileHandle/5 (/8 # CmdSentence/14 e.0/15 )/9 e.Tail/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[14] ) )
          continue;
        // closed e.0 as range 15
        // closed e.Tail as range 17
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.0: 15
        //DEBUG: e.Tail: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 }"  (CmdSentence"/19 >/21 </22 & Map@9/23 [*]/24 & PutRASLCommands\1@1/25 s.FileHandle/5/26 {*}/27 Tile{ AsIs: e.0/15 } >/28 </29 & Putout/30 s.FileHandle/5/31"    )  // CmdSentence"/32 >/34 </35 & Map@3/36 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "  (CmdSentence", 14);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z9]);
        refalrts::alloc_closure_head(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_gen_PutRASLCommands_L1Z1]);
        refalrts::copy_stvar(vm, context[26], context[5]);
        refalrts::alloc_unwrapped_closure(vm, context[27], context[24]);
        refalrts::alloc_close_call(vm, context[28]);
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[31], context[5]);
        refalrts::alloc_chars(vm, context[32], context[33], "    )  // CmdSentence", 21);
        refalrts::alloc_close_call(vm, context[34]);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_gen_Map_Z3]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[8], ' ');
        refalrts::reinit_char(context[14], ' ');
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[28] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[28], context[36] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[27] );
        refalrts::use( res );
        refalrts::wrap_closure( context[27] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 s.FileHandle/5 (/8 # CmdOpenELoop/14 # AlgLeft/19 s.BracketNum/20 s.VarNumber/21 e.3/15 )/9 e.Tail/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[14] ) )
          continue;
        context[19] = refalrts::ident_left( identifiers[ident_AlgLeft], context[15], context[16] );
        if( ! context[19] )
          continue;
        // closed e.Tail as range 17
        if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
          continue;
        if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
          continue;
        // closed e.3 as range 15
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.Tail: 17
        //DEBUG: s.BracketNum: 20
        //DEBUG: s.VarNumber: 21
        //DEBUG: e.3: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: ' '/19 }" (CmdOpenELoop e."/22 </24 & Symb/25 Tile{ AsIs: s.VarNumber/21 } >/26" <- ["/27 </29 & Symb/30 Tile{ AsIs: s.BracketNum/20 } >/31 ']'/32 >/33 </34 & Map@9/35 [*]/36 & PutRASLCommands\1@1/37 s.FileHandle/5/38 {*}/39 Tile{ AsIs: e.3/15 } >/40 </41 & Putout/42 s.FileHandle/5/43"    )  // CmdOpenELoop"/44 >/46 </47 & Map@3/48 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[22], context[23], " (CmdOpenELoop e.", 17);
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::alloc_chars(vm, context[27], context[28], " <- [", 5);
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[31]);
        refalrts::alloc_char(vm, context[32], ']');
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::alloc_open_call(vm, context[34]);
        refalrts::alloc_name(vm, context[35], functions[efunc_gen_Map_Z9]);
        refalrts::alloc_closure_head(vm, context[36]);
        refalrts::alloc_name(vm, context[37], functions[efunc_gen_PutRASLCommands_L1Z1]);
        refalrts::copy_stvar(vm, context[38], context[5]);
        refalrts::alloc_unwrapped_closure(vm, context[39], context[36]);
        refalrts::alloc_close_call(vm, context[40]);
        refalrts::alloc_open_call(vm, context[41]);
        refalrts::alloc_name(vm, context[42], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[43], context[5]);
        refalrts::alloc_chars(vm, context[44], context[45], "    )  // CmdOpenELoop", 22);
        refalrts::alloc_close_call(vm, context[46]);
        refalrts::alloc_open_call(vm, context[47]);
        refalrts::alloc_name(vm, context[48], functions[efunc_gen_Map_Z3]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[8], ' ');
        refalrts::reinit_char(context[14], ' ');
        refalrts::reinit_char(context[19], ' ');
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[47] );
        refalrts::push_stack( vm, context[46] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[40], context[48] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[31], context[39] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_evar( res, context[26], context[30] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_evar( res, context[22], context[25] );
        refalrts::use( res );
        refalrts::wrap_closure( context[39] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@3/4 s.FileHandle/5 (/8 # CmdComment/14 e.0/15 )/9 e.Tail/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[14] ) )
          continue;
        // closed e.0 as range 15
        // closed e.Tail as range 17
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.0: 15
        //DEBUG: e.Tail: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 }"  // "/19 Tile{ AsIs: e.0/15 } >/21 </22 & Map@3/23 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "  // ", 5);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z3]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[8], ' ');
        refalrts::reinit_char(context[14], ' ');
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[21], context[23] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@3/4 s.FileHandle/5 (/8 s.Command/14 e.0/15 )/9 e.Tail/17 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = context[10];
      context[18] = context[11];
      // closed e.0 as range 15
      // closed e.Tail as range 17
      //DEBUG: s.FileHandle: 5
      //DEBUG: s.Command: 14
      //DEBUG: e.0: 15
      //DEBUG: e.Tail: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 }"   ("/19 Tile{ AsIs: s.Command/14 } Tile{ AsIs: e.0/15 } ')'/21 >/22 </23 & Map@3/24 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/17 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[19], context[20], "   (", 4);
      refalrts::alloc_char(vm, context[21], ')');
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_gen_Map_Z3]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[8], ' ');
      refalrts::reinit_svar( context[9], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[21], context[24] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@3/4 s.FileHandle/5 t.Next/8 e.Tail/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail as range 10
    //DEBUG: t.Next: 8
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Tail: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutRASLCommands\1*4/4 AsIs: s.FileHandle/5 } (/12"    "/13 )/15 Tile{ AsIs: t.Next/8 } >/16 </17 & Map@3/18 s.FileHandle/5/19 Tile{ AsIs: e.Tail/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_chars(vm, context[13], context[14], "    ", 4);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_Map_Z3]);
    refalrts::copy_stvar(vm, context[19], context[5]);
    refalrts::update_name(context[4], functions[efunc_gen_PutRASLCommands_L1D4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[12], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@3/4 s.FileHandle/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FileHandle: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@3/4 s.FileHandle/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@3/4 s.FileHandle/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: s.FileHandle: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/6 & PutRASLCommands\1@0/7 Tile{ AsIs: s.FileHandle/5 } (/8"    "/9 )/11 {*}/12 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_PutRASLCommands_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_chars(vm, context[9], context[10], "    ", 4);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[6]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z3("Map@3", COOKIE1_, COOKIE2_, func_gen_Map_Z3);


static refalrts::FnResult func_gen_Map_Z4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Map@4/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@4/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@4/4 s.new3/5 t.new4/8 e.new5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new5 as range 6
    do {
      // </0 & Map@4/4 s.FileHandle/5 (/8 e./12 )/9 e.Tail/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e. as range 12
      // closed e.Tail as range 10
      //DEBUG: s.FileHandle: 5
      //DEBUG: e.: 12
      //DEBUG: e.Tail: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 }"   | "/14 Tile{ AsIs: e./12 } >/16 </17 & Map@4/18 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/10 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[14], context[15], "   | ", 5);
      refalrts::alloc_close_call(vm, context[16]);
      refalrts::alloc_open_call(vm, context[17]);
      refalrts::alloc_name(vm, context[18], functions[efunc_gen_Map_Z4]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[8], ' ');
      refalrts::reinit_svar( context[9], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[16] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[16], context[18] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@4/4 s.FileHandle/5 t.Next/8 e.Tail/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail as range 10
    //DEBUG: t.Next: 8
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Tail: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCode\1*1/4 AsIs: s.FileHandle/5 AsIs: t.Next/8 } >/12 </13 & Map@4/14 s.FileHandle/5/15 Tile{ AsIs: e.Tail/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z4]);
    refalrts::copy_stvar(vm, context[15], context[5]);
    refalrts::update_name(context[4], functions[efunc_gen_PutCode_L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@4/4 s.FileHandle/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FileHandle: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@4/4 s.FileHandle/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@4/4 s.FileHandle/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: s.FileHandle: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/6 & PutCode\1@0/7 Tile{ AsIs: s.FileHandle/5 } {*}/8 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_PutCode_L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z4("Map@4", COOKIE1_, COOKIE2_, func_gen_Map_Z4);


static refalrts::FnResult func_gen_Map_Z5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & Map@5/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@5/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@5/4 s.new3/5 t.new4/8 e.new5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new5 as range 6
    do {
      // </0 & Map@5/4 s.FileHandle/5 (/8 (/16 # Symbol/18 # Identifier/19 e.5/14 )/17 (/22 # Symbol/24 # Name/25 e.7/20 )/23 )/9 e.Tail/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      context[18] = refalrts::ident_left( identifiers[ident_Symbol], context[14], context[15] );
      if( ! context[18] )
        continue;
      context[19] = refalrts::ident_left( identifiers[ident_Identifier], context[14], context[15] );
      if( ! context[19] )
        continue;
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[12], context[13] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left( identifiers[ident_Symbol], context[20], context[21] );
      if( ! context[24] )
        continue;
      context[25] = refalrts::ident_left( identifiers[ident_Name], context[20], context[21] );
      if( ! context[25] )
        continue;
      if( ! refalrts::empty_seq( context[12], context[13] ) )
        continue;
      // closed e.5 as range 14
      // closed e.7 as range 20
      // closed e.Tail as range 10
      //DEBUG: s.FileHandle: 5
      //DEBUG: e.5: 14
      //DEBUG: e.7: 20
      //DEBUG: e.Tail: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/16 HalfReuse: ' '/18 HalfReuse: ' '/19 AsIs: e.5/14 HalfReuse: ' '/17 HalfReuse: ':'/22 HalfReuse: ':'/24 HalfReuse: ' '/25 AsIs: e.7/20 HalfReuse: >/23 HalfReuse: </9 } & Map@5/26 s.FileHandle/5/27 Tile{ AsIs: e.Tail/10 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[26], functions[efunc_gen_Map_Z5]);
      refalrts::copy_stvar(vm, context[27], context[5]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[8], ' ');
      refalrts::reinit_char(context[16], ' ');
      refalrts::reinit_char(context[18], ' ');
      refalrts::reinit_char(context[19], ' ');
      refalrts::reinit_char(context[17], ' ');
      refalrts::reinit_char(context[22], ':');
      refalrts::reinit_char(context[24], ':');
      refalrts::reinit_char(context[25], ' ');
      refalrts::reinit_close_call(context[23]);
      refalrts::reinit_open_call(context[9]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@5/4 s.FileHandle/5 t.Next/8 e.Tail/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail as range 10
    //DEBUG: t.Next: 8
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Tail: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutProgramElement$3\1*1/4 AsIs: s.FileHandle/5 AsIs: t.Next/8 } >/12 </13 & Map@5/14 s.FileHandle/5/15 Tile{ AsIs: e.Tail/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_gen_Map_Z5]);
    refalrts::copy_stvar(vm, context[15], context[5]);
    refalrts::update_name(context[4], functions[efunc_gen_PutProgramElement_S3L1D1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@5/4 s.FileHandle/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FileHandle: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@5/4 s.FileHandle/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@5/4 s.FileHandle/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: s.FileHandle: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/6 & PutProgramElement$3\1@0/7 Tile{ AsIs: s.FileHandle/5 } {*}/8 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_PutProgramElement_S3L1Z0]);
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

static refalrts::NativeReference nat_ref_gen_Map_Z5("Map@5", COOKIE1_, COOKIE2_, func_gen_Map_Z5);


static refalrts::FnResult func_gen_Map_Z6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & Map@6/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@6/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@6/4 s.new3/5 t.new4/8 e.new5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.new5 as range 6
    do {
      // </0 & Map@6/4 s.new6/5 (/8 s.new7/14 e.new8/12 )/9 e.new9/10 >/1
      context[10] = context[6];
      context[11] = context[7];
      context[12] = 0;
      context[13] = 0;
      if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
        continue;
      // closed e.new9 as range 10
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.new8 as range 12
      do {
        // </0 & Map@6/4 s.FileHandle/5 (/8 # CmdSentence/14 e.0/15 )/9 e.Tail/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[14] ) )
          continue;
        // closed e.0 as range 15
        // closed e.Tail as range 17
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.0: 15
        //DEBUG: e.Tail: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 }"(CmdSentence"/19 >/21 </22 & Map@3/23 s.FileHandle/5/24 Tile{ AsIs: e.0/15 } >/25 </26 & Putout/27 s.FileHandle/5/28"  )  // CmdSentence"/29 >/31 </32 & Map@6/33 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "(CmdSentence", 12);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z3]);
        refalrts::copy_stvar(vm, context[24], context[5]);
        refalrts::alloc_close_call(vm, context[25]);
        refalrts::alloc_open_call(vm, context[26]);
        refalrts::alloc_name(vm, context[27], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[28], context[5]);
        refalrts::alloc_chars(vm, context[29], context[30], "  )  // CmdSentence", 19);
        refalrts::alloc_close_call(vm, context[31]);
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_gen_Map_Z6]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[8], ' ');
        refalrts::reinit_char(context[14], ' ');
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[25] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[25], context[33] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[24] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@6/4 s.FileHandle/5 (/8 # CmdOpenELoop/14 # AlgLeft/19 s.BracketNum/20 s.VarNumber/21 e.3/15 )/9 e.Tail/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[14] ) )
          continue;
        context[19] = refalrts::ident_left( identifiers[ident_AlgLeft], context[15], context[16] );
        if( ! context[19] )
          continue;
        // closed e.Tail as range 17
        if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
          continue;
        if( ! refalrts::svar_left( context[21], context[15], context[16] ) )
          continue;
        // closed e.3 as range 15
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.Tail: 17
        //DEBUG: s.BracketNum: 20
        //DEBUG: s.VarNumber: 21
        //DEBUG: e.3: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 HalfReuse: '('/19 }"CmdOpenELoop e."/22 </24 & Symb/25 Tile{ AsIs: s.VarNumber/21 } >/26" <- ["/27 </29 & Symb/30 Tile{ AsIs: s.BracketNum/20 } >/31 ']'/32 >/33 </34 & Map@3/35 s.FileHandle/5/36 Tile{ AsIs: e.3/15 } >/37 </38 & Putout/39 s.FileHandle/5/40"  )  // CmdOpenELoop"/41 >/43 </44 & Map@6/45 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[22], context[23], "CmdOpenELoop e.", 15);
        refalrts::alloc_open_call(vm, context[24]);
        refalrts::alloc_name(vm, context[25], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[26]);
        refalrts::alloc_chars(vm, context[27], context[28], " <- [", 5);
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[31]);
        refalrts::alloc_char(vm, context[32], ']');
        refalrts::alloc_close_call(vm, context[33]);
        refalrts::alloc_open_call(vm, context[34]);
        refalrts::alloc_name(vm, context[35], functions[efunc_gen_Map_Z3]);
        refalrts::copy_stvar(vm, context[36], context[5]);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::alloc_open_call(vm, context[38]);
        refalrts::alloc_name(vm, context[39], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[40], context[5]);
        refalrts::alloc_chars(vm, context[41], context[42], "  )  // CmdOpenELoop", 20);
        refalrts::alloc_close_call(vm, context[43]);
        refalrts::alloc_open_call(vm, context[44]);
        refalrts::alloc_name(vm, context[45], functions[efunc_gen_Map_Z6]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[8], ' ');
        refalrts::reinit_char(context[14], ' ');
        refalrts::reinit_char(context[19], '(');
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[43] );
        refalrts::push_stack( vm, context[38] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[34] );
        refalrts::push_stack( vm, context[33] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[31] );
        refalrts::push_stack( vm, context[29] );
        refalrts::push_stack( vm, context[26] );
        refalrts::push_stack( vm, context[24] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[37], context[45] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[31], context[36] );
        res = refalrts::splice_elem( res, context[20] );
        res = refalrts::splice_evar( res, context[26], context[30] );
        res = refalrts::splice_elem( res, context[21] );
        res = refalrts::splice_evar( res, context[22], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@6/4 s.FileHandle/5 (/8 # CmdComment/14 e.0/15 )/9 e.Tail/17 >/1
        context[15] = context[12];
        context[16] = context[13];
        context[17] = context[10];
        context[18] = context[11];
        if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[14] ) )
          continue;
        // closed e.0 as range 15
        // closed e.Tail as range 17
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.0: 15
        //DEBUG: e.Tail: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 HalfReuse: ' '/14 }"// "/19 Tile{ AsIs: e.0/15 } >/21 </22 & Map@6/23 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/17 AsIs: >/1 ]] }
        refalrts::alloc_chars(vm, context[19], context[20], "// ", 3);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::alloc_open_call(vm, context[22]);
        refalrts::alloc_name(vm, context[23], functions[efunc_gen_Map_Z6]);
        refalrts::update_name(context[4], functions[efunc_Putout]);
        refalrts::reinit_char(context[8], ' ');
        refalrts::reinit_char(context[14], ' ');
        refalrts::reinit_svar( context[9], context[5] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[9];
        res = refalrts::splice_evar( res, context[21], context[23] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@6/4 s.FileHandle/5 (/8 s.Command/14 e.0/15 )/9 e.Tail/17 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = context[10];
      context[18] = context[11];
      // closed e.0 as range 15
      // closed e.Tail as range 17
      //DEBUG: s.FileHandle: 5
      //DEBUG: s.Command: 14
      //DEBUG: e.0: 15
      //DEBUG: e.Tail: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle/5 HalfReuse: ' '/8 }" ("/19 Tile{ AsIs: s.Command/14 } Tile{ AsIs: e.0/15 } ')'/21 >/22 </23 & Map@6/24 Tile{ HalfReuse: s.FileHandle5 /9 AsIs: e.Tail/17 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[19], context[20], " (", 2);
      refalrts::alloc_char(vm, context[21], ')');
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_gen_Map_Z6]);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[8], ' ');
      refalrts::reinit_svar( context[9], context[5] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[9];
      res = refalrts::splice_evar( res, context[21], context[24] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_elem( res, context[14] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@6/4 s.FileHandle/5 t.Next/8 e.Tail/10 >/1
    context[10] = context[6];
    context[11] = context[7];
    // closed e.Tail as range 10
    //DEBUG: t.Next: 8
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Tail: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutRASLCommands\1*4/4 AsIs: s.FileHandle/5 } (/12"  "/13 )/15 Tile{ AsIs: t.Next/8 } >/16 </17 & Map@6/18 s.FileHandle/5/19 Tile{ AsIs: e.Tail/10 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[12]);
    refalrts::alloc_chars(vm, context[13], context[14], "  ", 2);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::alloc_close_call(vm, context[16]);
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_name(vm, context[18], functions[efunc_gen_Map_Z6]);
    refalrts::copy_stvar(vm, context[19], context[5]);
    refalrts::update_name(context[4], functions[efunc_gen_PutRASLCommands_L1D4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[12], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@6/4 s.FileHandle/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.FileHandle: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@6/4 s.FileHandle/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@6/4 s.FileHandle/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: s.FileHandle: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 } [*]/6 & PutRASLCommands\1@0/7 Tile{ AsIs: s.FileHandle/5 } (/8"  "/9 )/11 {*}/12 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_closure_head(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_PutRASLCommands_L1Z0]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_chars(vm, context[9], context[10], "  ", 2);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[6]);
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_elem( res, context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z6("Map@6", COOKIE1_, COOKIE2_, func_gen_Map_Z6);


static refalrts::FnResult func_gen_Map_Z7(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 67 elems
  refalrts::Iter context[67];
  refalrts::zeros( context, 67 );
  // </0 & Map@7/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@7/4 s.new1/5 (/8 e.new2/6 )/9 e.new3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new2 as range 6
  // closed e.new3 as range 2
  do {
    // </0 & Map@7/4 s.new4/5 (/8 e.new7/10 )/9 t.new5/14 e.new6/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.new7 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    // closed e.new6 as range 12
    do {
      // </0 & Map@7/4 s.new8/5 (/8 e.new12/16 )/9 (/14 s.new9/22 e.new10/20 )/15 e.new11/18 >/1
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = 0;
      context[21] = 0;
      if( ! refalrts::brackets_term( context[20], context[21], context[14] ) )
        continue;
      // closed e.new12 as range 16
      // closed e.new11 as range 18
      if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
        continue;
      // closed e.new10 as range 20
      do {
        // </0 & Map@7/4 s.FileHandle/5 (/8 e.Indent/23 )/9 (/14 # CmdSentence/22 e.0/25 )/15 e.Tail/27 >/1
        context[23] = context[16];
        context[24] = context[17];
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[18];
        context[28] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[22] ) )
          continue;
        // closed e.Indent as range 23
        // closed e.0 as range 25
        // closed e.Tail as range 27
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.Indent: 23
        //DEBUG: e.0: 25
        //DEBUG: e.Tail: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </29 & Putout/30 s.FileHandle/5/31 e.Indent/23/32"  (CmdSentence"/34 >/36 </37 & Map@9/38 [*]/39 & PutRASLCommands\1/40 s.FileHandle/5/41 (/42 e.Indent/23/43"    "/45 Tile{ HalfReuse: )/14 HalfReuse: {*}/22 AsIs: e.0/25 HalfReuse: >/15 } </47 & Putout/48 s.FileHandle/5/49 e.Indent/23/50"  )  // CmdSentence"/52 >/54 Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/23 AsIs: )/9 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[31], context[5]);
        refalrts::copy_evar(vm, context[32], context[33], context[23], context[24]);
        refalrts::alloc_chars(vm, context[34], context[35], "  (CmdSentence", 14);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::alloc_open_call(vm, context[37]);
        refalrts::alloc_name(vm, context[38], functions[efunc_gen_Map_Z9]);
        refalrts::alloc_closure_head(vm, context[39]);
        refalrts::alloc_name(vm, context[40], functions[efunc_gen_PutRASLCommands_L1]);
        refalrts::copy_stvar(vm, context[41], context[5]);
        refalrts::alloc_open_bracket(vm, context[42]);
        refalrts::copy_evar(vm, context[43], context[44], context[23], context[24]);
        refalrts::alloc_chars(vm, context[45], context[46], "    ", 4);
        refalrts::alloc_open_call(vm, context[47]);
        refalrts::alloc_name(vm, context[48], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[49], context[5]);
        refalrts::copy_evar(vm, context[50], context[51], context[23], context[24]);
        refalrts::alloc_chars(vm, context[52], context[53], "  )  // CmdSentence", 19);
        refalrts::alloc_close_call(vm, context[54]);
        refalrts::reinit_close_bracket(context[14]);
        refalrts::reinit_unwrapped_closure(context[22], context[39]);
        refalrts::reinit_close_call(context[15]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::push_stack( vm, context[54] );
        refalrts::push_stack( vm, context[47] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[37] );
        refalrts::link_brackets( context[42], context[14] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[29] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[47], context[54] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[29], context[46] );
        refalrts::use( res );
        refalrts::wrap_closure( context[22] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@7/4 s.FileHandle/5 (/8 e.Indent/23 )/9 (/14 # CmdOpenELoop/22 # AlgLeft/29 s.BracketNum/30 s.VarNumber/31 e.3/25 )/15 e.Tail/27 >/1
        context[23] = context[16];
        context[24] = context[17];
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[18];
        context[28] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[22] ) )
          continue;
        context[29] = refalrts::ident_left( identifiers[ident_AlgLeft], context[25], context[26] );
        if( ! context[29] )
          continue;
        // closed e.Indent as range 23
        // closed e.Tail as range 27
        if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
          continue;
        if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
          continue;
        // closed e.3 as range 25
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.Indent: 23
        //DEBUG: e.Tail: 27
        //DEBUG: s.BracketNum: 30
        //DEBUG: s.VarNumber: 31
        //DEBUG: e.3: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </32 & Putout/33 s.FileHandle/5/34 e.Indent/23/35"  (CmdOpenELoop e."/37 </39 & Symb/40 Tile{ AsIs: s.VarNumber/31 } >/41" <- "/42 Tile{ HalfReuse: '['/14 HalfReuse: </22 HalfReuse: & Symb/29 AsIs: s.BracketNum/30 } >/44 ']'/45 >/46 </47 & Map@9/48 [*]/49 & PutRASLCommands\1/50 s.FileHandle/5/51 (/52 e.Indent/23/53"    "/55 Tile{ AsIs: )/15 } {*}/57 Tile{ AsIs: e.3/25 } >/58 </59 & Putout/60 s.FileHandle/5/61 e.Indent/23/62"  )  // CmdOpenELoop"/64 >/66 Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/23 AsIs: )/9 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[34], context[5]);
        refalrts::copy_evar(vm, context[35], context[36], context[23], context[24]);
        refalrts::alloc_chars(vm, context[37], context[38], "  (CmdOpenELoop e.", 18);
        refalrts::alloc_open_call(vm, context[39]);
        refalrts::alloc_name(vm, context[40], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::alloc_chars(vm, context[42], context[43], " <- ", 4);
        refalrts::alloc_close_call(vm, context[44]);
        refalrts::alloc_char(vm, context[45], ']');
        refalrts::alloc_close_call(vm, context[46]);
        refalrts::alloc_open_call(vm, context[47]);
        refalrts::alloc_name(vm, context[48], functions[efunc_gen_Map_Z9]);
        refalrts::alloc_closure_head(vm, context[49]);
        refalrts::alloc_name(vm, context[50], functions[efunc_gen_PutRASLCommands_L1]);
        refalrts::copy_stvar(vm, context[51], context[5]);
        refalrts::alloc_open_bracket(vm, context[52]);
        refalrts::copy_evar(vm, context[53], context[54], context[23], context[24]);
        refalrts::alloc_chars(vm, context[55], context[56], "    ", 4);
        refalrts::alloc_unwrapped_closure(vm, context[57], context[49]);
        refalrts::alloc_close_call(vm, context[58]);
        refalrts::alloc_open_call(vm, context[59]);
        refalrts::alloc_name(vm, context[60], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[61], context[5]);
        refalrts::copy_evar(vm, context[62], context[63], context[23], context[24]);
        refalrts::alloc_chars(vm, context[64], context[65], "  )  // CmdOpenELoop", 20);
        refalrts::alloc_close_call(vm, context[66]);
        refalrts::reinit_char(context[14], '[');
        refalrts::reinit_open_call(context[22]);
        refalrts::reinit_name(context[29], functions[efunc_Symb]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::push_stack( vm, context[66] );
        refalrts::push_stack( vm, context[59] );
        refalrts::push_stack( vm, context[58] );
        refalrts::push_stack( vm, context[47] );
        refalrts::link_brackets( context[52], context[15] );
        refalrts::push_stack( vm, context[46] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[39] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[58], context[66] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_elem( res, context[57] );
        res = refalrts::splice_elem( res, context[15] );
        res = refalrts::splice_evar( res, context[44], context[56] );
        res = refalrts::splice_evar( res, context[14], context[30] );
        res = refalrts::splice_evar( res, context[41], context[43] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[32], context[40] );
        refalrts::use( res );
        refalrts::wrap_closure( context[57] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@7/4 s.FileHandle/5 (/8 e.Indent/23 )/9 (/14 # CmdComment/22 e.0/25 )/15 e.Tail/27 >/1
        context[23] = context[16];
        context[24] = context[17];
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[18];
        context[28] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[22] ) )
          continue;
        // closed e.Indent as range 23
        // closed e.0 as range 25
        // closed e.Tail as range 27
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.Indent: 23
        //DEBUG: e.0: 25
        //DEBUG: e.Tail: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </29 & Putout/30 s.FileHandle/5/31 e.Indent/23/32"  /"/34 Tile{ HalfReuse: '/'/14 HalfReuse: ' '/22 AsIs: e.0/25 HalfReuse: >/15 } Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/23 AsIs: )/9 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[31], context[5]);
        refalrts::copy_evar(vm, context[32], context[33], context[23], context[24]);
        refalrts::alloc_chars(vm, context[34], context[35], "  /", 3);
        refalrts::reinit_char(context[14], '/');
        refalrts::reinit_char(context[22], ' ');
        refalrts::reinit_close_call(context[15]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[29] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[29], context[35] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@7/4 s.FileHandle/5 (/8 e.Indent/23 )/9 (/14 s.Command/22 e.0/25 )/15 e.Tail/27 >/1
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[20];
      context[26] = context[21];
      context[27] = context[18];
      context[28] = context[19];
      // closed e.Indent as range 23
      // closed e.0 as range 25
      // closed e.Tail as range 27
      //DEBUG: s.FileHandle: 5
      //DEBUG: s.Command: 22
      //DEBUG: e.Indent: 23
      //DEBUG: e.0: 25
      //DEBUG: e.Tail: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </29 & Putout/30 s.FileHandle/5/31 e.Indent/23/32"  "/34 Tile{ HalfReuse: '('/14 AsIs: s.Command/22 AsIs: e.0/25 HalfReuse: ')'/15 } >/36 Tile{ AsIs: </0 AsIs: & Map@7/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/23 AsIs: )/9 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[31], context[5]);
      refalrts::copy_evar(vm, context[32], context[33], context[23], context[24]);
      refalrts::alloc_chars(vm, context[34], context[35], "  ", 2);
      refalrts::alloc_close_call(vm, context[36]);
      refalrts::reinit_char(context[14], '(');
      refalrts::reinit_char(context[15], ')');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::push_stack( vm, context[36] );
      refalrts::push_stack( vm, context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[29], context[35] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@7/4 s.FileHandle/5 (/8 e.Indent/16 )/9 t.Next/14 e.Tail/18 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    // closed e.Indent as range 16
    // closed e.Tail as range 18
    //DEBUG: t.Next: 14
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Indent: 16
    //DEBUG: e.Tail: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutRASLCommands\1*4/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/16 HalfReuse: ' '/9 } ' '/20 )/21 Tile{ AsIs: t.Next/14 } >/22 </23 & Map@7/24 s.FileHandle/5/25 (/26 e.Indent/16/27 )/29 Tile{ AsIs: e.Tail/18 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[20], ' ');
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_close_call(vm, context[22]);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_gen_Map_Z7]);
    refalrts::copy_stvar(vm, context[25], context[5]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::copy_evar(vm, context[27], context[28], context[16], context[17]);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::update_name(context[4], functions[efunc_gen_PutRASLCommands_L1D4]);
    refalrts::reinit_char(context[9], ' ');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[26], context[29] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[22], context[29] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@7/4 s.FileHandle/5 (/8 e.Indent/10 )/9 >/1
    context[10] = context[6];
    context[11] = context[7];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent as range 10
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Indent: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@7/4 s.FileHandle/5 (/8 e.Indent/10 )/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@7/4 s.FileHandle/5 (/8 e.Indent/6 )/9 e.items/2 >/1
  // closed e.Indent as range 6
  // closed e.items as range 2
  //DEBUG: s.FileHandle: 5
  //DEBUG: e.Indent: 6
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & Map@0/11 Tile{ HalfReuse: [*]/0 Reuse: & PutRASLCommands\1@0/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/6 HalfReuse: ' '/9 } ' '/12 )/13 {*}/14 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_char(vm, context[12], ' ');
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PutRASLCommands_L1Z0]);
  refalrts::reinit_char(context[9], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z7("Map@7", COOKIE1_, COOKIE2_, func_gen_Map_Z7);


static refalrts::FnResult func_gen_Map_Z8(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 62 elems
  refalrts::Iter context[62];
  refalrts::zeros( context, 62 );
  // </0 & Map@8/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@8/4 s.new1/5 (/8 e.new2/6 )/9 e.new3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new2 as range 6
  // closed e.new3 as range 2
  do {
    // </0 & Map@8/4 s.new4/5 (/8 e.new7/10 )/9 t.new5/14 e.new6/12 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    // closed e.new7 as range 10
    context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
    if( ! context[15] )
      continue;
    // closed e.new6 as range 12
    do {
      // </0 & Map@8/4 s.new8/5 (/8 e.new12/16 )/9 (/14 s.new9/22 e.new10/20 )/15 e.new11/18 >/1
      context[16] = context[10];
      context[17] = context[11];
      context[18] = context[12];
      context[19] = context[13];
      context[20] = 0;
      context[21] = 0;
      if( ! refalrts::brackets_term( context[20], context[21], context[14] ) )
        continue;
      // closed e.new12 as range 16
      // closed e.new11 as range 18
      if( ! refalrts::svar_left( context[22], context[20], context[21] ) )
        continue;
      // closed e.new10 as range 20
      do {
        // </0 & Map@8/4 s.FileHandle/5 (/8 e.Indent/23 )/9 (/14 # CmdSentence/22 e.0/25 )/15 e.Tail/27 >/1
        context[23] = context[16];
        context[24] = context[17];
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[18];
        context[28] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[22] ) )
          continue;
        // closed e.Indent as range 23
        // closed e.0 as range 25
        // closed e.Tail as range 27
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.Indent: 23
        //DEBUG: e.0: 25
        //DEBUG: e.Tail: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </29 & Putout/30 s.FileHandle/5/31 e.Indent/23/32"(CmdSentence"/34 >/36 </37 & Map@7/38 s.FileHandle/5/39 Tile{ AsIs: (/14 } e.Indent/23/40 Tile{ HalfReuse: )/22 AsIs: e.0/25 HalfReuse: >/15 } </42 & Putout/43 s.FileHandle/5/44 e.Indent/23/45")  // CmdSentence"/47 >/49 Tile{ AsIs: </0 AsIs: & Map@8/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/23 AsIs: )/9 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[31], context[5]);
        refalrts::copy_evar(vm, context[32], context[33], context[23], context[24]);
        refalrts::alloc_chars(vm, context[34], context[35], "(CmdSentence", 12);
        refalrts::alloc_close_call(vm, context[36]);
        refalrts::alloc_open_call(vm, context[37]);
        refalrts::alloc_name(vm, context[38], functions[efunc_gen_Map_Z7]);
        refalrts::copy_stvar(vm, context[39], context[5]);
        refalrts::copy_evar(vm, context[40], context[41], context[23], context[24]);
        refalrts::alloc_open_call(vm, context[42]);
        refalrts::alloc_name(vm, context[43], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[44], context[5]);
        refalrts::copy_evar(vm, context[45], context[46], context[23], context[24]);
        refalrts::alloc_chars(vm, context[47], context[48], ")  // CmdSentence", 17);
        refalrts::alloc_close_call(vm, context[49]);
        refalrts::reinit_close_bracket(context[22]);
        refalrts::reinit_close_call(context[15]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::push_stack( vm, context[49] );
        refalrts::push_stack( vm, context[42] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[37] );
        refalrts::link_brackets( context[14], context[22] );
        refalrts::push_stack( vm, context[36] );
        refalrts::push_stack( vm, context[29] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[42], context[49] );
        res = refalrts::splice_evar( res, context[22], context[15] );
        res = refalrts::splice_evar( res, context[40], context[41] );
        res = refalrts::splice_elem( res, context[14] );
        res = refalrts::splice_evar( res, context[29], context[39] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@8/4 s.FileHandle/5 (/8 e.Indent/23 )/9 (/14 # CmdOpenELoop/22 # AlgLeft/29 s.BracketNum/30 s.VarNumber/31 e.3/25 )/15 e.Tail/27 >/1
        context[23] = context[16];
        context[24] = context[17];
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[18];
        context[28] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[22] ) )
          continue;
        context[29] = refalrts::ident_left( identifiers[ident_AlgLeft], context[25], context[26] );
        if( ! context[29] )
          continue;
        // closed e.Indent as range 23
        // closed e.Tail as range 27
        if( ! refalrts::svar_left( context[30], context[25], context[26] ) )
          continue;
        if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
          continue;
        // closed e.3 as range 25
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.Indent: 23
        //DEBUG: e.Tail: 27
        //DEBUG: s.BracketNum: 30
        //DEBUG: s.VarNumber: 31
        //DEBUG: e.3: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </32 & Putout/33 s.FileHandle/5/34 e.Indent/23/35"(CmdOpenELoop e."/37 </39 & Symb/40 Tile{ AsIs: s.VarNumber/31 } >/41" <- "/42 Tile{ HalfReuse: '['/14 HalfReuse: </22 HalfReuse: & Symb/29 AsIs: s.BracketNum/30 } >/44 ']'/45 >/46 </47 & Map@7/48 s.FileHandle/5/49 (/50 e.Indent/23/51 Tile{ AsIs: )/15 } Tile{ AsIs: e.3/25 } >/53 </54 & Putout/55 s.FileHandle/5/56 e.Indent/23/57")  // CmdOpenELoop"/59 >/61 Tile{ AsIs: </0 AsIs: & Map@8/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/23 AsIs: )/9 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[32]);
        refalrts::alloc_name(vm, context[33], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[34], context[5]);
        refalrts::copy_evar(vm, context[35], context[36], context[23], context[24]);
        refalrts::alloc_chars(vm, context[37], context[38], "(CmdOpenELoop e.", 16);
        refalrts::alloc_open_call(vm, context[39]);
        refalrts::alloc_name(vm, context[40], functions[efunc_Symb]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::alloc_chars(vm, context[42], context[43], " <- ", 4);
        refalrts::alloc_close_call(vm, context[44]);
        refalrts::alloc_char(vm, context[45], ']');
        refalrts::alloc_close_call(vm, context[46]);
        refalrts::alloc_open_call(vm, context[47]);
        refalrts::alloc_name(vm, context[48], functions[efunc_gen_Map_Z7]);
        refalrts::copy_stvar(vm, context[49], context[5]);
        refalrts::alloc_open_bracket(vm, context[50]);
        refalrts::copy_evar(vm, context[51], context[52], context[23], context[24]);
        refalrts::alloc_close_call(vm, context[53]);
        refalrts::alloc_open_call(vm, context[54]);
        refalrts::alloc_name(vm, context[55], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[56], context[5]);
        refalrts::copy_evar(vm, context[57], context[58], context[23], context[24]);
        refalrts::alloc_chars(vm, context[59], context[60], ")  // CmdOpenELoop", 18);
        refalrts::alloc_close_call(vm, context[61]);
        refalrts::reinit_char(context[14], '[');
        refalrts::reinit_open_call(context[22]);
        refalrts::reinit_name(context[29], functions[efunc_Symb]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::push_stack( vm, context[61] );
        refalrts::push_stack( vm, context[54] );
        refalrts::push_stack( vm, context[53] );
        refalrts::push_stack( vm, context[47] );
        refalrts::link_brackets( context[50], context[15] );
        refalrts::push_stack( vm, context[46] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[44] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[39] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[53], context[61] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_elem( res, context[15] );
        res = refalrts::splice_evar( res, context[51], context[52] );
        res = refalrts::splice_evar( res, context[44], context[50] );
        res = refalrts::splice_evar( res, context[14], context[30] );
        res = refalrts::splice_evar( res, context[41], context[43] );
        res = refalrts::splice_elem( res, context[31] );
        res = refalrts::splice_evar( res, context[32], context[40] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & Map@8/4 s.FileHandle/5 (/8 e.Indent/23 )/9 (/14 # CmdComment/22 e.0/25 )/15 e.Tail/27 >/1
        context[23] = context[16];
        context[24] = context[17];
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[18];
        context[28] = context[19];
        if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[22] ) )
          continue;
        // closed e.Indent as range 23
        // closed e.0 as range 25
        // closed e.Tail as range 27
        //DEBUG: s.FileHandle: 5
        //DEBUG: e.Indent: 23
        //DEBUG: e.0: 25
        //DEBUG: e.Tail: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } </29 & Putout/30 s.FileHandle/5/31 e.Indent/23/32 '/'/34 Tile{ HalfReuse: '/'/14 HalfReuse: ' '/22 AsIs: e.0/25 HalfReuse: >/15 } Tile{ AsIs: </0 AsIs: & Map@8/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/23 AsIs: )/9 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_call(vm, context[29]);
        refalrts::alloc_name(vm, context[30], functions[efunc_Putout]);
        refalrts::copy_stvar(vm, context[31], context[5]);
        refalrts::copy_evar(vm, context[32], context[33], context[23], context[24]);
        refalrts::alloc_char(vm, context[34], '/');
        refalrts::reinit_char(context[14], '/');
        refalrts::reinit_char(context[22], ' ');
        refalrts::reinit_close_call(context[15]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::push_stack( vm, context[15] );
        refalrts::push_stack( vm, context[29] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[9] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[29], context[34] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & Map@8/4 s.FileHandle/5 (/8 e.Indent/23 )/9 (/14 s.Command/22 e.0/25 )/15 e.Tail/27 >/1
      context[23] = context[16];
      context[24] = context[17];
      context[25] = context[20];
      context[26] = context[21];
      context[27] = context[18];
      context[28] = context[19];
      // closed e.Indent as range 23
      // closed e.0 as range 25
      // closed e.Tail as range 27
      //DEBUG: s.FileHandle: 5
      //DEBUG: s.Command: 22
      //DEBUG: e.Indent: 23
      //DEBUG: e.0: 25
      //DEBUG: e.Tail: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </29 & Putout/30 s.FileHandle/5/31 e.Indent/23/32 Tile{ HalfReuse: '('/14 AsIs: s.Command/22 AsIs: e.0/25 HalfReuse: ')'/15 } >/34 Tile{ AsIs: </0 AsIs: & Map@8/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/23 AsIs: )/9 } Tile{ AsIs: e.Tail/27 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[31], context[5]);
      refalrts::copy_evar(vm, context[32], context[33], context[23], context[24]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::reinit_char(context[14], '(');
      refalrts::reinit_char(context[15], ')');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[29] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[0], context[9] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & Map@8/4 s.FileHandle/5 (/8 e.Indent/16 )/9 t.Next/14 e.Tail/18 >/1
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[13];
    // closed e.Indent as range 16
    // closed e.Tail as range 18
    //DEBUG: t.Next: 14
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Indent: 16
    //DEBUG: e.Tail: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutRASLCommands\1*4/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/16 AsIs: )/9 AsIs: t.Next/14 } >/20 </21 & Map@8/22 s.FileHandle/5/23 (/24 e.Indent/16/25 )/27 Tile{ AsIs: e.Tail/18 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_close_call(vm, context[20]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_gen_Map_Z8]);
    refalrts::copy_stvar(vm, context[23], context[5]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::copy_evar(vm, context[25], context[26], context[16], context[17]);
    refalrts::alloc_close_bracket(vm, context[27]);
    refalrts::update_name(context[4], functions[efunc_gen_PutRASLCommands_L1D4]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[21] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[20], context[27] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@8/4 s.FileHandle/5 (/8 e.Indent/10 )/9 >/1
    context[10] = context[6];
    context[11] = context[7];
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Indent as range 10
    //DEBUG: s.FileHandle: 5
    //DEBUG: e.Indent: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@8/4 s.FileHandle/5 (/8 e.Indent/10 )/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@8/4 s.FileHandle/5 (/8 e.Indent/6 )/9 e.items/2 >/1
  // closed e.Indent as range 6
  // closed e.items as range 2
  //DEBUG: s.FileHandle: 5
  //DEBUG: e.Indent: 6
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & Map@0/11 Tile{ HalfReuse: [*]/0 Reuse: & PutRASLCommands\1@0/4 AsIs: s.FileHandle/5 AsIs: (/8 AsIs: e.Indent/6 AsIs: )/9 } {*}/12 Tile{ AsIs: e.items/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_gen_Map_Z0]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PutRASLCommands_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z8("Map@8", COOKIE1_, COOKIE2_, func_gen_Map_Z8);


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


static refalrts::FnResult func_gen_Map_Z9(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Map@9/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & Map@9/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & Map@9/4 s.X/5 t.Next/8 e.Tail/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
    if( ! context[9] )
      continue;
    // closed e.Tail as range 6
    //DEBUG: s.X: 5
    //DEBUG: t.Next: 8
    //DEBUG: e.Tail: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: s.X/5 AsIs: t.Next/8 } & $table/10 >/11 </12 & Map@9/13 s.X/5/14 Tile{ AsIs: e.Tail/6 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_name(vm, context[10], functions[efunc_d_table]);
    refalrts::alloc_close_call(vm, context[11]);
    refalrts::alloc_open_call(vm, context[12]);
    refalrts::alloc_name(vm, context[13], functions[efunc_gen_Map_Z9]);
    refalrts::copy_stvar(vm, context[14], context[5]);
    refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & Map@9/4 s.X/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.X: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & Map@9/4 s.X/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & Map@9/4 s.X/5 e.items/2 >/1
  // closed e.items as range 2
  //DEBUG: s.X: 5
  //DEBUG: e.items: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map@0/4 AsIs: s.X/5 AsIs: e.items/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_gen_Map_Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Map_Z9("Map@9", COOKIE1_, COOKIE2_, func_gen_Map_Z9);


static refalrts::FnResult func_gen_PutRASLCommands_L1Z1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  // </0 & PutRASLCommands\1@1/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PutRASLCommands\1@1/4 s.new1/5 e.new2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new2 as range 2
  do {
    // </0 & PutRASLCommands\1@1/4 s.new3/5 (/10 s.new4/12 e.new5/8 )/11 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    // closed e.new5 as range 8
    do {
      // </0 & PutRASLCommands\1@1/4 s.FileHandle0/5 (/10 # CmdSentence/12 e.SubCommands/13 )/11 >/1
      context[13] = context[8];
      context[14] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[12] ) )
        continue;
      // closed e.SubCommands as range 13
      //DEBUG: s.FileHandle0: 5
      //DEBUG: e.SubCommands: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle0/5 HalfReuse: ' '/10 HalfReuse: ' '/12 }"    (CmdSentence"/15 >/17 </18 & Map@9/19 [*]/20 & PutRASLCommands\1@2/21 s.FileHandle0/5/22 (/23"  "/24 )/26 {*}/27 Tile{ AsIs: e.SubCommands/13 } >/28 </29 & Putout/30 s.FileHandle0/5/31"      )  // CmdSentenc"/32 Tile{ HalfReuse: 'e'/11 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[15], context[16], "    (CmdSentence", 16);
      refalrts::alloc_close_call(vm, context[17]);
      refalrts::alloc_open_call(vm, context[18]);
      refalrts::alloc_name(vm, context[19], functions[efunc_gen_Map_Z9]);
      refalrts::alloc_closure_head(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_gen_PutRASLCommands_L1Z2]);
      refalrts::copy_stvar(vm, context[22], context[5]);
      refalrts::alloc_open_bracket(vm, context[23]);
      refalrts::alloc_chars(vm, context[24], context[25], "  ", 2);
      refalrts::alloc_close_bracket(vm, context[26]);
      refalrts::alloc_unwrapped_closure(vm, context[27], context[20]);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[31], context[5]);
      refalrts::alloc_chars(vm, context[32], context[33], "      )  // CmdSentenc", 22);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[10], ' ');
      refalrts::reinit_char(context[12], ' ');
      refalrts::reinit_char(context[11], 'e');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[18] );
      refalrts::link_brackets( context[23], context[26] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[28], context[33] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[15], context[27] );
      refalrts::use( res );
      refalrts::wrap_closure( context[27] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutRASLCommands\1@1/4 s.FileHandle0/5 (/10 # CmdOpenELoop/12 # AlgLeft/15 s.BracketNum/16 s.VarNumber/17 e.SubCommands/13 )/11 >/1
      context[13] = context[8];
      context[14] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[12] ) )
        continue;
      context[15] = refalrts::ident_left( identifiers[ident_AlgLeft], context[13], context[14] );
      if( ! context[15] )
        continue;
      if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
        continue;
      if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
        continue;
      // closed e.SubCommands as range 13
      //DEBUG: s.FileHandle0: 5
      //DEBUG: s.BracketNum: 16
      //DEBUG: s.VarNumber: 17
      //DEBUG: e.SubCommands: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle0/5 HalfReuse: ' '/10 HalfReuse: ' '/12 HalfReuse: ' '/15 }"   (CmdOpenELoop e."/18 </20 & Symb/21 Tile{ AsIs: s.VarNumber/17 } >/22" <- ["/23 </25 & Symb/26 Tile{ AsIs: s.BracketNum/16 } >/27 ']'/28 >/29 </30 & Map@9/31 [*]/32 & PutRASLCommands\1@2/33 s.FileHandle0/5/34 (/35"  "/36 )/38 {*}/39 Tile{ AsIs: e.SubCommands/13 } >/40 </41 & Putout/42 s.FileHandle0/5/43"      )  // CmdOpenELoo"/44 Tile{ HalfReuse: 'p'/11 AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[18], context[19], "   (CmdOpenELoop e.", 19);
      refalrts::alloc_open_call(vm, context[20]);
      refalrts::alloc_name(vm, context[21], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[22]);
      refalrts::alloc_chars(vm, context[23], context[24], " <- [", 5);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_char(vm, context[28], ']');
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_open_call(vm, context[30]);
      refalrts::alloc_name(vm, context[31], functions[efunc_gen_Map_Z9]);
      refalrts::alloc_closure_head(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_gen_PutRASLCommands_L1Z2]);
      refalrts::copy_stvar(vm, context[34], context[5]);
      refalrts::alloc_open_bracket(vm, context[35]);
      refalrts::alloc_chars(vm, context[36], context[37], "  ", 2);
      refalrts::alloc_close_bracket(vm, context[38]);
      refalrts::alloc_unwrapped_closure(vm, context[39], context[32]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::alloc_open_call(vm, context[41]);
      refalrts::alloc_name(vm, context[42], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[43], context[5]);
      refalrts::alloc_chars(vm, context[44], context[45], "      )  // CmdOpenELoo", 23);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[10], ' ');
      refalrts::reinit_char(context[12], ' ');
      refalrts::reinit_char(context[15], ' ');
      refalrts::reinit_char(context[11], 'p');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[30] );
      refalrts::link_brackets( context[35], context[38] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[40], context[45] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[27], context[39] );
      res = refalrts::splice_elem( res, context[16] );
      res = refalrts::splice_evar( res, context[22], context[26] );
      res = refalrts::splice_elem( res, context[17] );
      res = refalrts::splice_evar( res, context[18], context[21] );
      refalrts::use( res );
      refalrts::wrap_closure( context[39] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutRASLCommands\1@1/4 s.FileHandle0/5 (/10 # CmdComment/12 e.Message/13 )/11 >/1
      context[13] = context[8];
      context[14] = context[9];
      if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[12] ) )
        continue;
      // closed e.Message as range 13
      //DEBUG: s.FileHandle0: 5
      //DEBUG: e.Message: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle0/5 HalfReuse: ' '/10 HalfReuse: ' '/12 }"  "/15 Tile{ HalfReuse: ' '/11 }" // "/17 Tile{ AsIs: e.Message/13 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[15], context[16], "  ", 2);
      refalrts::alloc_chars(vm, context[17], context[18], " // ", 4);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[10], ' ');
      refalrts::reinit_char(context[12], ' ');
      refalrts::reinit_char(context[11], ' ');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_elem( res, context[11] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PutRASLCommands\1@1/4 s.FileHandle0/5 (/10 s.Command/12 e.Args/13 )/11 >/1
    context[13] = context[8];
    context[14] = context[9];
    // closed e.Args as range 13
    //DEBUG: s.FileHandle0: 5
    //DEBUG: s.Command: 12
    //DEBUG: e.Args: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.FileHandle0/5 }"      "/15 Tile{ HalfReuse: '('/10 AsIs: s.Command/12 AsIs: e.Args/13 HalfReuse: ')'/11 AsIs: >/1 ]] }
    refalrts::alloc_chars(vm, context[15], context[16], "      ", 6);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_char(context[10], '(');
    refalrts::reinit_char(context[11], ')');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutRASLCommands\1@1/4 s.FileHandle0/5 e.dyn/2 >/1
  // closed e.dyn as range 2
  //DEBUG: s.FileHandle0: 5
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutRASLCommands\1@0/4 AsIs: s.FileHandle0/5 } (/6"      "/7 )/9 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_chars(vm, context[7], context[8], "      ", 6);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_PutRASLCommands_L1Z0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PutRASLCommands_L1Z1("PutRASLCommands\\1@1", COOKIE1_, COOKIE2_, func_gen_PutRASLCommands_L1Z1);


static refalrts::FnResult func_gen_PutRASLCommands_L1Z2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 53 elems
  refalrts::Iter context[53];
  refalrts::zeros( context, 53 );
  // </0 & PutRASLCommands\1@2/4 e.new/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new as range 2
  // </0 & PutRASLCommands\1@2/4 s.new1/5 (/8 e.new2/6 )/9 e.new3/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.new2 as range 6
  // closed e.new3 as range 2
  do {
    // </0 & PutRASLCommands\1@2/4 s.new4/5 (/8 e.new7/10 )/9 (/16 s.new5/18 e.new6/14 )/17 >/1
    context[10] = context[6];
    context[11] = context[7];
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    // closed e.new7 as range 10
    if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
      continue;
    // closed e.new6 as range 14
    do {
      // </0 & PutRASLCommands\1@2/4 s.X/5 (/8 e.X/19 )/9 (/16 # CmdSentence/18 e.SubCommands/21 )/17 >/1
      context[19] = context[10];
      context[20] = context[11];
      context[21] = context[14];
      context[22] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[18] ) )
        continue;
      // closed e.X as range 19
      // closed e.SubCommands as range 21
      //DEBUG: s.X: 5
      //DEBUG: e.X: 19
      //DEBUG: e.SubCommands: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </23 & Putout/24 s.X/5/25 e.X/19/26"      (CmdSentence"/28 >/30 </31 & Map@9/32 Tile{ HalfReuse: [*]/0 AsIs: & PutRASLCommands\1@2/4 AsIs: s.X/5 AsIs: (/8 AsIs: e.X/19 HalfReuse: ' '/9 HalfReuse: ' '/16 HalfReuse: )/18 } {*}/33 Tile{ AsIs: e.SubCommands/21 } >/34 </35 & Putout/36 s.X/5/37 e.X/19/38"      )  // CmdSentenc"/40 Tile{ HalfReuse: 'e'/17 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[23]);
      refalrts::alloc_name(vm, context[24], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[25], context[5]);
      refalrts::copy_evar(vm, context[26], context[27], context[19], context[20]);
      refalrts::alloc_chars(vm, context[28], context[29], "      (CmdSentence", 18);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_gen_Map_Z9]);
      refalrts::alloc_unwrapped_closure(vm, context[33], context[0]);
      refalrts::alloc_close_call(vm, context[34]);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[37], context[5]);
      refalrts::copy_evar(vm, context[38], context[39], context[19], context[20]);
      refalrts::alloc_chars(vm, context[40], context[41], "      )  // CmdSentenc", 22);
      refalrts::reinit_closure_head(context[0]);
      refalrts::reinit_char(context[9], ' ');
      refalrts::reinit_char(context[16], ' ');
      refalrts::reinit_close_bracket(context[18]);
      refalrts::reinit_char(context[17], 'e');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[31] );
      refalrts::link_brackets( context[8], context[18] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[34], context[41] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_evar( res, context[0], context[18] );
      res = refalrts::splice_evar( res, context[23], context[32] );
      refalrts::use( res );
      refalrts::wrap_closure( context[33] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutRASLCommands\1@2/4 s.X/5 (/8 e.X/19 )/9 (/16 # CmdOpenELoop/18 # AlgLeft/23 s.BracketNum/24 s.VarNumber/25 e.SubCommands/21 )/17 >/1
      context[19] = context[10];
      context[20] = context[11];
      context[21] = context[14];
      context[22] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[18] ) )
        continue;
      context[23] = refalrts::ident_left( identifiers[ident_AlgLeft], context[21], context[22] );
      if( ! context[23] )
        continue;
      // closed e.X as range 19
      if( ! refalrts::svar_left( context[24], context[21], context[22] ) )
        continue;
      if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
        continue;
      // closed e.SubCommands as range 21
      //DEBUG: s.X: 5
      //DEBUG: e.X: 19
      //DEBUG: s.BracketNum: 24
      //DEBUG: s.VarNumber: 25
      //DEBUG: e.SubCommands: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </26 & Putout/27 s.X/5/28 e.X/19/29"      (CmdOpenELoop e."/31 </33 & Symb/34 Tile{ AsIs: s.VarNumber/25 } >/35" <- ["/36 </38 & Symb/39 Tile{ AsIs: s.BracketNum/24 } >/40 ']'/41 >/42 </43 & Map@9/44 Tile{ HalfReuse: [*]/0 AsIs: & PutRASLCommands\1@2/4 AsIs: s.X/5 AsIs: (/8 AsIs: e.X/19 HalfReuse: ' '/9 HalfReuse: ' '/16 HalfReuse: )/18 HalfReuse: {*}/23 } Tile{ AsIs: e.SubCommands/21 } >/45 </46 & Putout/47 s.X/5/48 e.X/19/49"      )  // CmdOpenELoo"/51 Tile{ HalfReuse: 'p'/17 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[28], context[5]);
      refalrts::copy_evar(vm, context[29], context[30], context[19], context[20]);
      refalrts::alloc_chars(vm, context[31], context[32], "      (CmdOpenELoop e.", 22);
      refalrts::alloc_open_call(vm, context[33]);
      refalrts::alloc_name(vm, context[34], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[35]);
      refalrts::alloc_chars(vm, context[36], context[37], " <- [", 5);
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::alloc_name(vm, context[39], functions[efunc_Symb]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::alloc_char(vm, context[41], ']');
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_open_call(vm, context[43]);
      refalrts::alloc_name(vm, context[44], functions[efunc_gen_Map_Z9]);
      refalrts::alloc_close_call(vm, context[45]);
      refalrts::alloc_open_call(vm, context[46]);
      refalrts::alloc_name(vm, context[47], functions[efunc_Putout]);
      refalrts::copy_stvar(vm, context[48], context[5]);
      refalrts::copy_evar(vm, context[49], context[50], context[19], context[20]);
      refalrts::alloc_chars(vm, context[51], context[52], "      )  // CmdOpenELoo", 23);
      refalrts::reinit_closure_head(context[0]);
      refalrts::reinit_char(context[9], ' ');
      refalrts::reinit_char(context[16], ' ');
      refalrts::reinit_close_bracket(context[18]);
      refalrts::reinit_unwrapped_closure(context[23], context[0]);
      refalrts::reinit_char(context[17], 'p');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[46] );
      refalrts::push_stack( vm, context[45] );
      refalrts::push_stack( vm, context[43] );
      refalrts::link_brackets( context[8], context[18] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[33] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[45], context[52] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[0], context[23] );
      res = refalrts::splice_evar( res, context[40], context[44] );
      res = refalrts::splice_elem( res, context[24] );
      res = refalrts::splice_evar( res, context[35], context[39] );
      res = refalrts::splice_elem( res, context[25] );
      res = refalrts::splice_evar( res, context[26], context[34] );
      refalrts::use( res );
      refalrts::wrap_closure( context[23] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & PutRASLCommands\1@2/4 s.X/5 (/8 e.X/19 )/9 (/16 # CmdComment/18 e.Message/21 )/17 >/1
      context[19] = context[10];
      context[20] = context[11];
      context[21] = context[14];
      context[22] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[18] ) )
        continue;
      // closed e.X as range 19
      // closed e.Message as range 21
      //DEBUG: s.X: 5
      //DEBUG: e.X: 19
      //DEBUG: e.Message: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.X/5 } Tile{ AsIs: e.X/19 } Tile{ HalfReuse: ' '/8 }"  "/23 Tile{ HalfReuse: ' '/1 }"  "/25 Tile{ HalfReuse: '/'/9 HalfReuse: '/'/16 HalfReuse: ' '/18 AsIs: e.Message/21 HalfReuse: >/17 } Tile{ ]] }
      refalrts::alloc_chars(vm, context[23], context[24], "  ", 2);
      refalrts::alloc_chars(vm, context[25], context[26], "  ", 2);
      refalrts::update_name(context[4], functions[efunc_Putout]);
      refalrts::reinit_char(context[8], ' ');
      refalrts::reinit_char(context[1], ' ');
      refalrts::reinit_char(context[9], '/');
      refalrts::reinit_char(context[16], '/');
      refalrts::reinit_char(context[18], ' ');
      refalrts::reinit_close_call(context[17]);
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[17] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_elem( res, context[1] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_elem( res, context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PutRASLCommands\1@2/4 s.X/5 (/8 e.X/19 )/9 (/16 s.Command/18 e.Args/21 )/17 >/1
    context[19] = context[10];
    context[20] = context[11];
    context[21] = context[14];
    context[22] = context[15];
    // closed e.X as range 19
    // closed e.Args as range 21
    //DEBUG: s.X: 5
    //DEBUG: s.Command: 18
    //DEBUG: e.X: 19
    //DEBUG: e.Args: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Putout/4 AsIs: s.X/5 } Tile{ AsIs: e.X/19 } ' '/23 Tile{ HalfReuse: ' '/8 }"   "/24 Tile{ HalfReuse: ' '/9 HalfReuse: '('/16 AsIs: s.Command/18 AsIs: e.Args/21 HalfReuse: ')'/17 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[23], ' ');
    refalrts::alloc_chars(vm, context[24], context[25], "   ", 3);
    refalrts::update_name(context[4], functions[efunc_Putout]);
    refalrts::reinit_char(context[8], ' ');
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_char(context[16], '(');
    refalrts::reinit_char(context[17], ')');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_elem( res, context[8] );
    res = refalrts::splice_elem( res, context[23] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutRASLCommands\1@2/4 s.X/5 (/8 e.X/6 )/9 e.dyn/2 >/1
  // closed e.X as range 6
  // closed e.dyn as range 2
  //DEBUG: s.X: 5
  //DEBUG: e.X: 6
  //DEBUG: e.dyn: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutRASLCommands\1@0/4 AsIs: s.X/5 AsIs: (/8 AsIs: e.X/6 HalfReuse: ' '/9 }"     "/10 )/12 Tile{ AsIs: e.dyn/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "     ", 5);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::update_name(context[4], functions[efunc_gen_PutRASLCommands_L1Z0]);
  refalrts::reinit_char(context[9], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PutRASLCommands_L1Z2("PutRASLCommands\\1@2", COOKIE1_, COOKIE2_, func_gen_PutRASLCommands_L1Z2);


//End of file
