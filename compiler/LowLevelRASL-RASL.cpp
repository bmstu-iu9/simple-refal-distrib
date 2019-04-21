// This file automatically generated from 'LowLevelRASL-RASL.ref'
// Don't edit! Edit 'LowLevelRASL-RASL.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1879886108_4280465764

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
  efunc_PrepareCommonRASL = 14,
  efunc_MapReduce = 15,
  efunc_PrepareFunctionsRASL = 16,
  efunc_gen_LowLevelRASLm_RASL_A2 = 17,
  efunc_gen_LowLevelRASLm_RASL_A1 = 18,
  efunc_ClassifyItems = 19,
  efunc_AddFunctionNameComment = 20,
  efunc_gen_PrepareFunctionsRASL_S1A4 = 21,
  efunc_AddBacktrackStackAllocationCommand = 22,
  efunc_gen_PrepareFunctionsRASL_S1A3 = 23,
  efunc_ConvertInterpretCommands = 24,
  efunc_Inc = 25,
  efunc_gen_PrepareFunctionsRASL_S1A2 = 26,
  efunc_gen_PrepareFunctionsRASL_S1A1 = 27,
  efunc_RemoveDebugInfo = 28,
  efunc_RemoveDebugInfoRec = 29,
  efunc_ConvertOneInterpretCommand = 30,
  efunc_Symb = 31,
  efunc_gen_ConvertOneInterpretCommand_S1A1 = 32,
  efunc_gen_ConvertOneInterpretCommand_S2A1 = 33,
  efunc_ConvertOneInterpretCommandm_Simple = 34,
  efunc_gen_AddBacktrackStackAllocationCommand_L1 = 35,
  efunc_gen_AddBacktrackStackAllocationCommand_B1 = 36,
  efunc_Map = 37,
  efunc_gen_AddFunctionNameComment_L1 = 38,
  efunc_SetFunctionsScopeClass = 39,
  efunc_OutlineStrings = 40,
  efunc_gen_PrepareCommonRASL_A2 = 41,
  efunc_gen_PrepareCommonRASL_A1 = 42,
  efunc_GlueFunctionRASLs = 43,
  efunc_gen_GlueFunctionRASLs_L1 = 44,
  efunc_gen_SetFunctionsScopeClass_A1 = 45,
  efunc_gen_SetFunctionsScopeClass_A1L1 = 46,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_ModuleID = 6,
  ident_Functionm_ToRASL = 7,
  ident_Functionm_ToNative = 8,
  ident_CmdNativeFuncDescr = 9,
  ident_CmdNativeFunction = 10,
  ident_CmdEnum = 11,
  ident_CmdEnumDescr = 12,
  ident_CmdSwap = 13,
  ident_CmdSwapDescr = 14,
  ident_CmdConditionFuncm_ToRASL = 15,
  ident_CmdConditionFuncDecsrRasl = 16,
  ident_CmdConditionFuncm_ToNative = 17,
  ident_CmdConditionFuncDecsrNative = 18,
  ident_CmdDeclaration = 19,
  ident_CmdEmitNativeCode = 20,
  ident_CmdInterpretFuncDescr = 21,
  ident_LABEL = 22,
  ident_CmdProfileFunction = 23,
  ident_CmdLoadConstants = 24,
  ident_DebugInfo = 25,
  ident_NoDebugInfo = 26,
  ident_CmdSentence = 27,
  ident_CmdOpenELoop = 28,
  ident_AlgLeft = 29,
  ident_CmdVariableDebugTable = 30,
  ident_CmdComment = 31,
  ident_CmdUseRes = 32,
  ident_CmdCallCondition = 33,
  ident_CmdPushState = 34,
  ident_CmdNextStep = 35,
  ident_CmdOnFailGoTo = 36,
  ident_CmdProfilerStopSentence = 37,
  ident_CmdEStart = 38,
  ident_CmdFail = 39,
  ident_CmdEPrepare = 40,
  ident_CmdReserveBacktrackStack = 41,
  ident_Funck32_namek58_ = 42,
  ident_CmdStringArray = 43,
  ident_RASL = 44,
  ident_Items = 45,
  ident_CmdFuncArray = 46,
  ident_CmdIdentArray = 47,
  ident_GNm_Entry = 48,
  ident_CmdCreateElem = 49,
  ident_ElString = 50,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 1879886108U, 4280465764U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 4280465764UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 1879886108UL);
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
  refalrts::reinit_number(context[5], 1879886108UL);
  refalrts::reinit_number(context[7], 4280465764UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 1879886108U, 4280465764U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 1879886108U, 4280465764U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 1879886108U, 4280465764U, func_Residue);


static refalrts::FnResult func_gen_LowLevelRASLm_RASL_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & LowLevelRASL-RASL=2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 e.FuncScopeClass#2/7 )/10 t.FuncTable#1/11 t.IdentTable#1/13 s.MaxLabel#3/15 e.Definitions#3/2 >/1
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
  // closed e.FuncScopeClass#2 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Definitions#3 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.FuncScopeClass#2: 7
  //DEBUG: t.FuncTable#1: 11
  //DEBUG: t.IdentTable#1: 13
  //DEBUG: s.MaxLabel#3: 15
  //DEBUG: e.Definitions#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MaxLabel#3/15 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/16 Tile{ HalfReuse: (/0 HalfReuse: # ModuleID/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } )/17 </18 & PrepareCommonRASL/19 Tile{ AsIs: (/9 AsIs: e.FuncScopeClass#2/7 AsIs: )/10 AsIs: t.FuncTable#1/11 AsIs: t.IdentTable#1/13 } Tile{ AsIs: e.Definitions#3/2 } >/20 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_PrepareCommonRASL]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_ModuleID]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[16], context[1] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[0], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_RASL_A2("LowLevelRASL-RASL=2", 1879886108U, 4280465764U, func_gen_LowLevelRASLm_RASL_A2);


static refalrts::FnResult func_gen_LowLevelRASLm_RASL_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & LowLevelRASL-RASL=1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 t.IdentTable#1/9 s.DebugInfo#1/11 (/14 e.FuncScopeClass#2/12 )/15 e.Definitions#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
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
  // closed e.FuncScopeClass#2 as range 12
  // closed e.Definitions#2 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: t.FuncTable#1: 7
  //DEBUG: t.IdentTable#1: 9
  //DEBUG: s.DebugInfo#1: 11
  //DEBUG: e.FuncScopeClass#2: 12
  //DEBUG: e.Definitions#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </16 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL-RASL=2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: (/14 AsIs: e.FuncScopeClass#2/12 AsIs: )/15 } Tile{ AsIs: t.FuncTable#1/7 AsIs: t.IdentTable#1/9 } {*}/17 </18 & MapReduce/19 (/20 & PrepareFunctionsRASL/21 Tile{ AsIs: s.DebugInfo#1/11 } )/22 0/23 Tile{ AsIs: e.Definitions#2/2 } >/24 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[0]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_MapReduce]);
  refalrts::alloc_open_bracket(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_PrepareFunctionsRASL]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_number(vm, context[23], 0UL);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_LowLevelRASLm_RASL_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[20], context[22] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_RASL_A1("LowLevelRASL-RASL=1", 1879886108U, 4280465764U, func_gen_LowLevelRASLm_RASL_A1);


static refalrts::FnResult func_LowLevelRASLm_RASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & LowLevelRASL-RASL/4 s.DebugInfo#1/5 s.Hash1#1/6 s.Hash2#1/7 (/10 t.FuncTable#1/12 t.IdentTable#1/14 )/11 e.Items#1/2 >/1
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
  // closed e.Items#1 as range 2
  context[13] = refalrts::tvar_left( context[12], context[8], context[9] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[8], context[9] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#1: 6
  //DEBUG: s.Hash2#1: 7
  //DEBUG: e.Items#1: 2
  //DEBUG: t.FuncTable#1: 12
  //DEBUG: t.IdentTable#1: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Hash2#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & LowLevelRASL-RASL=1/16 Tile{ AsIs: s.Hash1#1/6 } Tile{ HalfReuse: s.Hash21 #7/10 AsIs: t.FuncTable#1/12 AsIs: t.IdentTable#1/14 } Tile{ AsIs: s.DebugInfo#1/5 } {*}/17 </18 & MapReduce/19 & ClassifyItems/20 (/21 Tile{ AsIs: )/11 AsIs: e.Items#1/2 AsIs: >/1 } >/22 Tile{ ]] }
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_LowLevelRASLm_RASL_A1]);
  refalrts::alloc_unwrapped_closure(vm, context[17], context[4]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_MapReduce]);
  refalrts::alloc_name(vm, context[20], functions[efunc_ClassifyItems]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_svar( context[10], context[7] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[21], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LowLevelRASLm_RASL("LowLevelRASL-RASL", 0U, 0U, func_LowLevelRASLm_RASL);


static refalrts::FnResult func_ClassifyItems(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & ClassifyItems/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ClassifyItems/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 t.new#3/14 e.new#4/9 )/12 >/1
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
    // </0 & ClassifyItems/4 (/7 e.new#5/5 )/8 (/11 s.new#6/13 s.new#7/14 e.new#8/9 )/12 >/1
    if( ! refalrts::svar_term( context[14], context[14] ) )
      continue;
    // closed e.new#5 as range 5
    // closed e.new#8 as range 9
    do {
      // </0 & ClassifyItems/4 (/7 e.new#9/5 )/8 (/11 s.new#10/13 s.new#11/14 (/20 e.new#12/18 )/21 e.new#13/16 )/12 >/1
      context[16] = context[9];
      context[17] = context[10];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      // closed e.new#9 as range 5
      // closed e.new#12 as range 18
      // closed e.new#13 as range 16
      do {
        // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 # Function-ToRASL/13 s.ScopeClass#1/14 (/20 e.Name#1/18 )/21 e.FunctionBody#1/16 )/12 >/1
        if( ! refalrts::ident_term( identifiers[ident_Functionm_ToRASL], context[13] ) )
          continue;
        // closed e.FuncScopeClass#1 as range 5
        // closed e.Name#1 as range 18
        // closed e.FunctionBody#1 as range 16
        //DEBUG: s.ScopeClass#1: 14
        //DEBUG: e.FuncScopeClass#1: 5
        //DEBUG: e.Name#1: 18
        //DEBUG: e.FunctionBody#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #14/4 } e.Name#1/18/22 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function-ToRASL/13 AsIs: s.ScopeClass#1/14 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: e.FunctionBody#1/16 AsIs: )/12 } Tile{ ]] }
        refalrts::copy_evar(vm, context[22], context[23], context[18], context[19]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_svar( context[4], context[14] );
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[20], context[21] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[7], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[8], context[12] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 # Function-ToNative/13 s.ScopeClass#1/14 (/20 e.Name#1/18 )/21 e.Commands#1/16 )/12 >/1
        if( ! refalrts::ident_term( identifiers[ident_Functionm_ToNative], context[13] ) )
          continue;
        // closed e.FuncScopeClass#1 as range 5
        // closed e.Name#1 as range 18
        // closed e.Commands#1 as range 16
        //DEBUG: s.ScopeClass#1: 14
        //DEBUG: e.FuncScopeClass#1: 5
        //DEBUG: e.Name#1: 18
        //DEBUG: e.Commands#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} & ClassifyItems/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Commands#1/16 )/12 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #14/20 AsIs: e.Name#1/18 AsIs: )/21 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdNativeFuncDescr/13 AsIs: s.ScopeClass#1/14 } e.Name#1/18/22 Tile{ HalfReuse: )/1 ]] }
        refalrts::copy_evar(vm, context[22], context[23], context[18], context[19]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_svar( context[20], context[14] );
        refalrts::update_ident(context[13], identifiers[ident_CmdNativeFuncDescr]);
        refalrts::reinit_close_bracket(context[1]);
        refalrts::link_brackets( context[11], context[1] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[7], context[21] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[22], context[23] );
        res = refalrts::splice_evar( res, context[8], context[14] );
        res = refalrts::splice_evar( res, context[20], context[21] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        res = refalrts::splice_evar( res, context[5], context[6] );
        refalrts::splice_to_freelist_open( vm, context[0], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 # CmdNativeFunction/13 s.ScopeClass#1/14 (/20 e.Name#1/18 )/21 t.SrcPos#1/24 e.Code#1/22 )/12 >/1
      context[22] = context[16];
      context[23] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[13] ) )
        continue;
      // closed e.FuncScopeClass#1 as range 5
      // closed e.Name#1 as range 18
      context[25] = refalrts::tvar_left( context[24], context[22], context[23] );
      if( ! context[25] )
        continue;
      // closed e.Code#1 as range 22
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.FuncScopeClass#1: 5
      //DEBUG: e.Name#1: 18
      //DEBUG: t.SrcPos#1: 24
      //DEBUG: e.Code#1: 22

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ClassifyItems/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/24 e.Code#1/22 )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #14/20 AsIs: e.Name#1/18 AsIs: )/21 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdNativeFuncDescr/13 AsIs: s.ScopeClass#1/14 } e.Name#1/18/26 Tile{ HalfReuse: )/1 ]] }
      refalrts::copy_evar(vm, context[26], context[27], context[18], context[19]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[20], context[14] );
      refalrts::update_ident(context[13], identifiers[ident_CmdNativeFuncDescr]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[11], context[1] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[8], context[14] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 # CmdEnum/13 s.ScopeClass#1/14 e.Name#1/9 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[13] ) )
        continue;
      // closed e.FuncScopeClass#1 as range 5
      // closed e.Name#1 as range 9
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.FuncScopeClass#1: 5
      //DEBUG: e.Name#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #14/4 } e.Name#1/9/16 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdEnumDescr/13 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[16], context[17], context[9], context[10]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[4], context[14] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::update_ident(context[13], identifiers[ident_CmdEnumDescr]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 # CmdSwap/13 s.ScopeClass#1/14 e.Name#1/9 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[13] ) )
        continue;
      // closed e.FuncScopeClass#1 as range 5
      // closed e.Name#1 as range 9
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.FuncScopeClass#1: 5
      //DEBUG: e.Name#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #14/4 } e.Name#1/9/16 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdSwapDescr/13 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[16], context[17], context[9], context[10]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[4], context[14] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::update_ident(context[13], identifiers[ident_CmdSwapDescr]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 # CmdConditionFunc-ToRASL/13 s.ScopeClass#1/14 e.Name#1/9 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToRASL], context[13] ) )
        continue;
      // closed e.FuncScopeClass#1 as range 5
      // closed e.Name#1 as range 9
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.FuncScopeClass#1: 5
      //DEBUG: e.Name#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #14/4 } e.Name#1/9/16 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdConditionFuncDecsrRasl/13 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[16], context[17], context[9], context[10]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[4], context[14] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::update_ident(context[13], identifiers[ident_CmdConditionFuncDecsrRasl]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 # CmdConditionFunc-ToNative/13 s.ScopeClass#1/14 e.Name#1/9 )/12 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToNative], context[13] ) )
        continue;
      // closed e.FuncScopeClass#1 as range 5
      // closed e.Name#1 as range 9
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.FuncScopeClass#1: 5
      //DEBUG: e.Name#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #14/4 } e.Name#1/9/16 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdConditionFuncDecsrNative/13 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ ]] }
      refalrts::copy_evar(vm, context[16], context[17], context[9], context[10]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_svar( context[4], context[14] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::update_ident(context[13], identifiers[ident_CmdConditionFuncDecsrNative]);
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 # CmdDeclaration/13 s.ScopeClass#1/14 e.Name#1/9 )/12 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[13] ) )
      continue;
    // closed e.FuncScopeClass#1 as range 5
    // closed e.Name#1 as range 9
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.FuncScopeClass#1: 5
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & ClassifyItems/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/5 } Tile{ HalfReuse: (/13 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[13]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[13], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 # CmdEmitNativeCode/13 t.SrcPos#1/14 e.Code#1/9 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FuncScopeClass#1 as range 5
  // closed e.Code#1 as range 9
  //DEBUG: t.SrcPos#1: 14
  //DEBUG: e.FuncScopeClass#1: 5
  //DEBUG: e.Code#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ClassifyItems/4 {REMOVED TILE} (/11 # CmdEmitNativeCode/13 t.SrcPos#1/14 e.Code#1/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.FuncScopeClass#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ClassifyItems("ClassifyItems", 1879886108U, 4280465764U, func_ClassifyItems);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & PrepareFunctionsRASL$1=4/4 s.NextLabel#3/5 s.ScopeClass#1/6 (/9 e.Name#1/7 )/10 e.RASLCommands#5/2 >/1
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
  // closed e.Name#1 as range 7
  // closed e.RASLCommands#5 as range 2
  //DEBUG: s.NextLabel#3: 5
  //DEBUG: s.ScopeClass#1: 6
  //DEBUG: e.Name#1: 7
  //DEBUG: e.RASLCommands#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextLabel3 #5/0 HalfReuse: (/4 } # CmdInterpretFuncDescr/11 Tile{ AsIs: s.ScopeClass#1/6 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } (/12 # LABEL/13 Tile{ AsIs: s.NextLabel#3/5 } )/14 (/15 # CmdProfileFunction/16 )/17 (/18 # CmdLoadConstants/19 )/20 Tile{ AsIs: e.RASLCommands#5/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_ident(vm, context[11], identifiers[ident_CmdInterpretFuncDescr]);
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_ident(vm, context[13], identifiers[ident_LABEL]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_CmdProfileFunction]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_ident(vm, context[19], identifiers[ident_CmdLoadConstants]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket(context[4]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[18], context[20] );
  refalrts::link_brackets( context[15], context[17] );
  refalrts::link_brackets( context[12], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[20] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A4("PrepareFunctionsRASL$1=4", 1879886108U, 4280465764U, func_gen_PrepareFunctionsRASL_S1A4);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & PrepareFunctionsRASL$1=3/4 s.NextLabel#3/5 s.ScopeClass#1/6 (/9 e.Name#1/7 )/10 e.RASLCommands#4/2 >/1
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
  // closed e.Name#1 as range 7
  // closed e.RASLCommands#4 as range 2
  //DEBUG: s.NextLabel#3: 5
  //DEBUG: s.ScopeClass#1: 6
  //DEBUG: e.Name#1: 7
  //DEBUG: e.RASLCommands#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: [*]/0 Reuse: & PrepareFunctionsRASL$1=4/4 AsIs: s.NextLabel#3/5 AsIs: s.ScopeClass#1/6 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } {*}/12 </13 & AddFunctionNameComment/14 (/15 e.Name#1/7/16 )/18 Tile{ AsIs: e.RASLCommands#4/2 } >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[0]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_AddFunctionNameComment]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::copy_evar(vm, context[16], context[17], context[7], context[8]);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareFunctionsRASL_S1A4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[18] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A3("PrepareFunctionsRASL$1=3", 1879886108U, 4280465764U, func_gen_PrepareFunctionsRASL_S1A3);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & PrepareFunctionsRASL$1=2/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 s.NextLabel#3/10 e.RASLCommands#3/2 >/1
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
  // closed e.Name#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.RASLCommands#3 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: s.NextLabel#3: 10
  //DEBUG: e.RASLCommands#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextLabel#3/10 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 [*]/12 Tile{ HalfReuse: & PrepareFunctionsRASL$1=3/0 HalfReuse: s.NextLabel3 #10/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } {*}/13 </14 & AddBacktrackStackAllocationCommand/15 Tile{ AsIs: e.RASLCommands#3/2 } >/16 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_closure_head(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[12]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_AddBacktrackStackAllocationCommand]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::reinit_name(context[0], functions[efunc_gen_PrepareFunctionsRASL_S1A3]);
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A2("PrepareFunctionsRASL$1=2", 1879886108U, 4280465764U, func_gen_PrepareFunctionsRASL_S1A2);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & PrepareFunctionsRASL$1=1/4 s.ScopeClass#1/5 (/8 e.Name#1/6 )/9 s.NextLabel#1/10 e.FunctionBody#2/2 >/1
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
  // closed e.Name#1 as range 6
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FunctionBody#2 as range 2
  //DEBUG: s.ScopeClass#1: 5
  //DEBUG: e.Name#1: 6
  //DEBUG: s.NextLabel#1: 10
  //DEBUG: e.FunctionBody#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: [*]/0 Reuse: & PrepareFunctionsRASL$1=2/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } {*}/12 </13 & ConvertInterpretCommands/14 </15 & Inc/16 Tile{ AsIs: s.NextLabel#1/10 } >/17 Tile{ AsIs: e.FunctionBody#2/2 } >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_unwrapped_closure(vm, context[12], context[0]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_ConvertInterpretCommands]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_Inc]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareFunctionsRASL_S1A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A1("PrepareFunctionsRASL$1=1", 1879886108U, 4280465764U, func_gen_PrepareFunctionsRASL_S1A1);


static refalrts::FnResult func_PrepareFunctionsRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & PrepareFunctionsRASL/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareFunctionsRASL/4 s.new#1/5 s.new#2/6 t.new#3/7 >/1
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
    // </0 & PrepareFunctionsRASL/4 s.DebugInfo#1/5 s.NextLabel#1/6 (/7 # Function-ToRASL/11 s.ScopeClass#1/12 (/15 e.Name#1/13 )/16 e.FunctionBody#1/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left( identifiers[ident_Functionm_ToRASL], context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.Name#1 as range 13
    // closed e.FunctionBody#1 as range 9
    //DEBUG: s.DebugInfo#1: 5
    //DEBUG: s.NextLabel#1: 6
    //DEBUG: s.ScopeClass#1: 12
    //DEBUG: e.Name#1: 13
    //DEBUG: e.FunctionBody#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/7 HalfReuse: & PrepareFunctionsRASL$1=1/11 AsIs: s.ScopeClass#1/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: s.NextLabel#1/6 } {*}/18 Tile{ AsIs: </0 Reuse: & RemoveDebugInfo/4 AsIs: s.DebugInfo#1/5 } Tile{ AsIs: e.FunctionBody#1/9 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[17]);
    refalrts::alloc_unwrapped_closure(vm, context[18], context[7]);
    refalrts::reinit_closure_head(context[7]);
    refalrts::reinit_name(context[11], functions[efunc_gen_PrepareFunctionsRASL_S1A1]);
    refalrts::update_name(context[4], functions[efunc_RemoveDebugInfo]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareFunctionsRASL/4 s.DebugInfo#1/5 s.NextLabel#1/6 t.OtherItem#1/7 >/1
  //DEBUG: t.OtherItem#1: 7
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.NextLabel#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PrepareFunctionsRASL/4 s.DebugInfo#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextLabel#1/6 AsIs: t.OtherItem#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareFunctionsRASL("PrepareFunctionsRASL", 1879886108U, 4280465764U, func_PrepareFunctionsRASL);


static refalrts::FnResult func_RemoveDebugInfo(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemoveDebugInfo/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & RemoveDebugInfo/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & RemoveDebugInfo/4 # DebugInfo/5 e.FunctionBody#1/2 >/1
    if( ! refalrts::ident_term( identifiers[ident_DebugInfo], context[5] ) )
      continue;
    // closed e.FunctionBody#1 as range 2
    //DEBUG: e.FunctionBody#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & RemoveDebugInfo/4 # DebugInfo/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.FunctionBody#1/2 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemoveDebugInfo/4 # NoDebugInfo/5 e.FunctionBody#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_NoDebugInfo], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FunctionBody#1 as range 2
  //DEBUG: e.FunctionBody#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & RemoveDebugInfoRec/5 AsIs: e.FunctionBody#1/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[5], functions[efunc_RemoveDebugInfoRec]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveDebugInfo("RemoveDebugInfo", 1879886108U, 4280465764U, func_RemoveDebugInfo);


static refalrts::FnResult func_RemoveDebugInfoRec(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & RemoveDebugInfoRec/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & RemoveDebugInfoRec/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & RemoveDebugInfoRec/4 (/7 s.new#3/11 e.new#4/9 )/8 e.new#5/5 >/1
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
        continue;
      // closed e.new#5 as range 5
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.new#4 as range 9
      do {
        // </0 & RemoveDebugInfoRec/4 (/7 # CmdSentence/11 e.SubCommands#1/9 )/8 e.Tail#1/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[11] ) )
          continue;
        // closed e.SubCommands#1 as range 9
        // closed e.Tail#1 as range 5
        //DEBUG: e.SubCommands#1: 9
        //DEBUG: e.Tail#1: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdSentence/4 HalfReuse: </7 HalfReuse: & RemoveDebugInfoRec/11 AsIs: e.SubCommands#1/9 HalfReuse: >/8 } )/12 </13 & RemoveDebugInfoRec/14 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[12]);
        refalrts::alloc_open_call(vm, context[13]);
        refalrts::alloc_name(vm, context[14], functions[efunc_RemoveDebugInfoRec]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_ident(context[4], identifiers[ident_CmdSentence]);
        refalrts::reinit_open_call(context[7]);
        refalrts::reinit_name(context[11], functions[efunc_RemoveDebugInfoRec]);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[0], context[12] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[5], context[6] );
        res = refalrts::splice_evar( res, context[12], context[14] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & RemoveDebugInfoRec/4 (/7 s.new#6/11 s.new#7/14 e.new#8/12 )/8 e.new#9/5 >/1
      context[12] = context[9];
      context[13] = context[10];
      // closed e.new#9 as range 5
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.new#8 as range 12
      do {
        // </0 & RemoveDebugInfoRec/4 (/7 # CmdOpenELoop/11 # AlgLeft/14 s.BracketNum#1/17 s.VarNumber#1/18 e.SubCommands#1/15 )/8 e.Tail#1/5 >/1
        context[15] = context[12];
        context[16] = context[13];
        if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[11] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[14] ) )
          continue;
        // closed e.Tail#1 as range 5
        if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
          continue;
        if( ! refalrts::svar_left( context[18], context[15], context[16] ) )
          continue;
        // closed e.SubCommands#1 as range 15
        //DEBUG: e.Tail#1: 5
        //DEBUG: s.BracketNum#1: 17
        //DEBUG: s.VarNumber#1: 18
        //DEBUG: e.SubCommands#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdOpenELoop/11 AsIs: # AlgLeft/14 AsIs: s.BracketNum#1/17 AsIs: s.VarNumber#1/18 } Tile{ AsIs: </0 AsIs: & RemoveDebugInfoRec/4 } Tile{ AsIs: e.SubCommands#1/15 } >/19 )/20 </21 Tile{ HalfReuse: & RemoveDebugInfoRec/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
        refalrts::alloc_close_call(vm, context[19]);
        refalrts::alloc_close_bracket(vm, context[20]);
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::reinit_name(context[8], functions[efunc_RemoveDebugInfoRec]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[21] );
        refalrts::link_brackets( context[7], context[20] );
        refalrts::push_stack( vm, context[19] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[19], context[21] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & RemoveDebugInfoRec/4 (/7 # CmdVariableDebugTable/11 s.Mode#1/14 e.Index#1/15 s.Depth#1/18 s.Offset#1/17 )/8 e.Tail#1/5 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_CmdVariableDebugTable], context[11] ) )
        continue;
      // closed e.Tail#1 as range 5
      if( ! refalrts::svar_right( context[17], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_right( context[18], context[15], context[16] ) )
        continue;
      // closed e.Index#1 as range 15
      //DEBUG: s.Mode#1: 14
      //DEBUG: e.Tail#1: 5
      //DEBUG: s.Offset#1: 17
      //DEBUG: s.Depth#1: 18
      //DEBUG: e.Index#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & RemoveDebugInfoRec/4 (/7 # CmdVariableDebugTable/11 s.Mode#1/14 e.Index#1/15 s.Depth#1/18 s.Offset#1/17 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & RemoveDebugInfoRec/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
      refalrts::reinit_name(context[8], functions[efunc_RemoveDebugInfoRec]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & RemoveDebugInfoRec/4 t.Command#1/7 e.Tail#1/5 >/1
    // closed e.Tail#1 as range 5
    //DEBUG: t.Command#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Command#1/7 } Tile{ AsIs: </0 AsIs: & RemoveDebugInfoRec/4 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & RemoveDebugInfoRec/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & RemoveDebugInfoRec/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveDebugInfoRec("RemoveDebugInfoRec", 1879886108U, 4280465764U, func_RemoveDebugInfoRec);


static refalrts::FnResult func_ConvertInterpretCommands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & ConvertInterpretCommands/4 s.NextLabel#1/5 e.Commands#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 2
  //DEBUG: s.NextLabel#1: 5
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & MapReduce/0 Reuse: & ConvertOneInterpretCommand/4 AsIs: s.NextLabel#1/5 AsIs: e.Commands#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::reinit_name(context[0], functions[efunc_MapReduce]);
  refalrts::update_name(context[4], functions[efunc_ConvertOneInterpretCommand]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertInterpretCommands("ConvertInterpretCommands", 1879886108U, 4280465764U, func_ConvertInterpretCommands);


static refalrts::FnResult func_ConvertOneInterpretCommandm_Simple(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ConvertOneInterpretCommand-Simple/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ConvertOneInterpretCommand-Simple/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ConvertOneInterpretCommand-Simple/4 (/5 s.new#2/9 e.new#3/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    // closed e.new#3 as range 7
    do {
      // </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdComment/9 e.Text#1/7 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[9] ) )
        continue;
      // closed e.Text#1 as range 7
      //DEBUG: e.Text#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdComment/9 e.Text#1/7 )/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdUseRes/9 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdUseRes], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdUseRes/9 )/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdVariableDebugTable/9 s.Mode#1/12 e.Index#1/10 s.Depth#1/14 s.Offset#1/13 )/6 >/1
      context[10] = context[7];
      context[11] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_CmdVariableDebugTable], context[9] ) )
        continue;
      if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
        continue;
      if( ! refalrts::svar_right( context[13], context[10], context[11] ) )
        continue;
      if( ! refalrts::svar_right( context[14], context[10], context[11] ) )
        continue;
      // closed e.Index#1 as range 10
      //DEBUG: s.Mode#1: 12
      //DEBUG: s.Offset#1: 13
      //DEBUG: s.Depth#1: 14
      //DEBUG: e.Index#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # CmdVariableDebugTable/9 AsIs: s.Mode#1/12 } '.'/15 Tile{ AsIs: e.Index#1/10 } '#'/16 Tile{ AsIs: </0 Reuse: & Symb/4 } Tile{ AsIs: s.Depth#1/14 } Tile{ AsIs: >/1 } Tile{ AsIs: s.Offset#1/13 AsIs: )/6 } Tile{ ]] }
      refalrts::alloc_char(vm, context[15], '.');
      refalrts::alloc_char(vm, context[16], '#');
      refalrts::update_name(context[4], functions[efunc_Symb]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[6] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[15], context[15] );
      res = refalrts::splice_evar( res, context[5], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdCallCondition/9 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdCallCondition], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdPushState/4 HalfReuse: )/5 HalfReuse: (/9 HalfReuse: # CmdNextStep/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_CmdPushState]);
    refalrts::reinit_close_bracket(context[5]);
    refalrts::reinit_open_bracket(context[9]);
    refalrts::reinit_ident(context[6], identifiers[ident_CmdNextStep]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[9], context[1] );
    refalrts::link_brackets( context[0], context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ConvertOneInterpretCommand-Simple/4 t.Command#1/5 >/1
  //DEBUG: t.Command#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand-Simple/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Command#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertOneInterpretCommandm_Simple("ConvertOneInterpretCommand-Simple", 1879886108U, 4280465764U, func_ConvertOneInterpretCommandm_Simple);


static refalrts::FnResult func_gen_ConvertOneInterpretCommand_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ConvertOneInterpretCommand$1=1/4 s.NextLabel#2/5 e.SubCommands#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SubCommands#2 as range 2
  //DEBUG: s.NextLabel#2: 5
  //DEBUG: e.SubCommands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.NextLabel#2/5 } >/6 (/7 # CmdOnFailGoTo/8 s.NextLabel#2/5/9 )/10 Tile{ AsIs: e.SubCommands#2/2 } (/11 # LABEL/12 s.NextLabel#2/5/13 )/14 (/15 # CmdProfilerStopSentence/16 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_CmdOnFailGoTo]);
  refalrts::copy_stvar(vm, context[9], context[5]);
  refalrts::alloc_close_bracket(vm, context[10]);
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_ident(vm, context[12], identifiers[ident_LABEL]);
  refalrts::copy_stvar(vm, context[13], context[5]);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_ident(vm, context[16], identifiers[ident_CmdProfilerStopSentence]);
  refalrts::update_name(context[4], functions[efunc_Inc]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ConvertOneInterpretCommand_S1A1("ConvertOneInterpretCommand$1=1", 1879886108U, 4280465764U, func_gen_ConvertOneInterpretCommand_S1A1);


static refalrts::FnResult func_gen_ConvertOneInterpretCommand_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & ConvertOneInterpretCommand$2=1/4 s.BracketNum#1/5 s.VarNumber#1/6 s.NextLabel#2/7 e.SubCommands#2/2 >/1
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
  // closed e.SubCommands#2 as range 2
  //DEBUG: s.BracketNum#1: 5
  //DEBUG: s.VarNumber#1: 6
  //DEBUG: s.NextLabel#2: 7
  //DEBUG: e.SubCommands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextLabel#2/7 } Tile{ HalfReuse: (/0 HalfReuse: # CmdEPrepare/4 AsIs: s.BracketNum#1/5 AsIs: s.VarNumber#1/6 } )/8 (/9 # CmdEStart/10 s.BracketNum#1/5/11 s.VarNumber#1/6/12 )/13 Tile{ AsIs: e.SubCommands#2/2 } (/14 # CmdFail/15 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_open_bracket(vm, context[9]);
  refalrts::alloc_ident(vm, context[10], identifiers[ident_CmdEStart]);
  refalrts::copy_stvar(vm, context[11], context[5]);
  refalrts::copy_stvar(vm, context[12], context[6]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_ident(vm, context[15], identifiers[ident_CmdFail]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdEPrepare]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[14], context[1] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ConvertOneInterpretCommand_S2A1("ConvertOneInterpretCommand$2=1", 1879886108U, 4280465764U, func_gen_ConvertOneInterpretCommand_S2A1);


static refalrts::FnResult func_ConvertOneInterpretCommand(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ConvertOneInterpretCommand/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ConvertOneInterpretCommand/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ConvertOneInterpretCommand/4 s.new#3/5 (/6 s.new#4/10 e.new#5/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    // closed e.new#5 as range 8
    do {
      // </0 & ConvertOneInterpretCommand/4 s.NextLabel#1/5 (/6 # CmdSentence/10 e.SubCommands#1/8 )/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[10] ) )
        continue;
      // closed e.SubCommands#1 as range 8
      //DEBUG: s.NextLabel#1: 5
      //DEBUG: e.SubCommands#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.NextLabel#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ConvertOneInterpretCommand$1=1/4 } </11 Tile{ HalfReuse: & ConvertInterpretCommands/6 HalfReuse: s.NextLabel1 #5/10 AsIs: e.SubCommands#1/8 HalfReuse: >/7 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[11]);
      refalrts::update_name(context[4], functions[efunc_gen_ConvertOneInterpretCommand_S1A1]);
      refalrts::reinit_name(context[6], functions[efunc_ConvertInterpretCommands]);
      refalrts::reinit_svar( context[10], context[5] );
      refalrts::reinit_close_call(context[7]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      res = refalrts::splice_evar( res, context[11], context[11] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ConvertOneInterpretCommand/4 s.NextLabel#1/5 (/6 # CmdOpenELoop/10 # AlgLeft/13 s.BracketNum#1/14 s.VarNumber#1/15 e.SubCommands#1/11 )/7 >/1
    context[11] = context[8];
    context[12] = context[9];
    if( ! refalrts::ident_term( identifiers[ident_CmdOpenELoop], context[10] ) )
      continue;
    context[13] = refalrts::ident_left( identifiers[ident_AlgLeft], context[11], context[12] );
    if( ! context[13] )
      continue;
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
      continue;
    // closed e.SubCommands#1 as range 11
    //DEBUG: s.NextLabel#1: 5
    //DEBUG: s.BracketNum#1: 14
    //DEBUG: s.VarNumber#1: 15
    //DEBUG: e.SubCommands#1: 11

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </6 HalfReuse: [*]/10 HalfReuse: & ConvertOneInterpretCommand$2=1/13 AsIs: s.BracketNum#1/14 AsIs: s.VarNumber#1/15 } {*}/16 Tile{ AsIs: </0 Reuse: & ConvertInterpretCommands/4 AsIs: s.NextLabel#1/5 } Tile{ AsIs: e.SubCommands#1/11 } Tile{ HalfReuse: >/7 AsIs: >/1 ]] }
    refalrts::alloc_unwrapped_closure(vm, context[16], context[10]);
    refalrts::reinit_open_call(context[6]);
    refalrts::reinit_closure_head(context[10]);
    refalrts::reinit_name(context[13], functions[efunc_gen_ConvertOneInterpretCommand_S2A1]);
    refalrts::update_name(context[4], functions[efunc_ConvertInterpretCommands]);
    refalrts::reinit_close_call(context[7]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[6], context[15] );
    refalrts::use( res );
    refalrts::wrap_closure( context[16] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ConvertOneInterpretCommand/4 s.NextLabel#1/5 t.Command#1/6 >/1
  //DEBUG: t.Command#1: 6
  //DEBUG: s.NextLabel#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.NextLabel#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextLabel1 #5/0 HalfReuse: </4 } & ConvertOneInterpretCommand-Simple/8 Tile{ AsIs: t.Command#1/6 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[8], functions[efunc_ConvertOneInterpretCommandm_Simple]);
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_call(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertOneInterpretCommand("ConvertOneInterpretCommand", 1879886108U, 4280465764U, func_ConvertOneInterpretCommand);


static refalrts::FnResult func_gen_AddBacktrackStackAllocationCommand_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & AddBacktrackStackAllocationCommand:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddBacktrackStackAllocationCommand:1/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & AddBacktrackStackAllocationCommand:1/4 0/5 e.Commands#2/2 >/1
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Commands#2 as range 2
    //DEBUG: e.Commands#2: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AddBacktrackStackAllocationCommand:1/4 0/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#2/2 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddBacktrackStackAllocationCommand:1/4 s.Depth#2/5 e.Commands#2/2 >/1
  // closed e.Commands#2 as range 2
  //DEBUG: s.Depth#2: 5
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdReserveBacktrackStack/4 AsIs: s.Depth#2/5 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Commands#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdReserveBacktrackStack]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddBacktrackStackAllocationCommand_B1("AddBacktrackStackAllocationCommand:1", 1879886108U, 4280465764U, func_gen_AddBacktrackStackAllocationCommand_B1);


static refalrts::FnResult func_gen_AddBacktrackStackAllocationCommand_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & AddBacktrackStackAllocationCommand\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddBacktrackStackAllocationCommand\1/4 s.new#1/5 t.new#2/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & AddBacktrackStackAllocationCommand\1/4 s.new#3/5 (/6 s.new#4/10 e.new#5/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[8], context[9] ) )
      continue;
    // closed e.new#5 as range 8
    do {
      // </0 & AddBacktrackStackAllocationCommand\1/4 s.Depth#2/5 (/6 # CmdEStart/10 e.VarInfo#2/8 )/7 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdEStart], context[10] ) )
        continue;
      // closed e.VarInfo#2 as range 8
      //DEBUG: s.Depth#2: 5
      //DEBUG: e.VarInfo#2: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Depth#2/5 HalfReuse: >/6 HalfReuse: (/10 } Tile{ HalfReuse: # CmdEStart/7 } Tile{ AsIs: e.VarInfo#2/8 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_name(context[4], functions[efunc_Inc]);
      refalrts::reinit_close_call(context[6]);
      refalrts::reinit_open_bracket(context[10]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdEStart]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[10], context[1] );
      refalrts::push_stack( vm, context[6] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[8], context[9] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AddBacktrackStackAllocationCommand\1/4 s.Depth#2/5 (/6 # CmdOnFailGoTo/10 s.Offset#2/13 )/7 >/1
    context[11] = context[8];
    context[12] = context[9];
    if( ! refalrts::ident_term( identifiers[ident_CmdOnFailGoTo], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: s.Depth#2: 5
    //DEBUG: s.Offset#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Depth#2/5 HalfReuse: >/6 HalfReuse: (/10 } Tile{ HalfReuse: # CmdOnFailGoTo/1 } Tile{ AsIs: s.Offset#2/13 AsIs: )/7 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_Inc]);
    refalrts::reinit_close_call(context[6]);
    refalrts::reinit_open_bracket(context[10]);
    refalrts::reinit_ident(context[1], identifiers[ident_CmdOnFailGoTo]);
    refalrts::link_brackets( context[10], context[7] );
    refalrts::push_stack( vm, context[6] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[7] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddBacktrackStackAllocationCommand\1/4 s.Depth#2/5 t.OtherCommand#2/6 >/1
  //DEBUG: t.OtherCommand#2: 6
  //DEBUG: s.Depth#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AddBacktrackStackAllocationCommand\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Depth#2/5 AsIs: t.OtherCommand#2/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddBacktrackStackAllocationCommand_L1("AddBacktrackStackAllocationCommand\\1", 1879886108U, 4280465764U, func_gen_AddBacktrackStackAllocationCommand_L1);


static refalrts::FnResult func_AddBacktrackStackAllocationCommand(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & AddBacktrackStackAllocationCommand/4 e.Commands#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Commands#1 as range 2
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AddBacktrackStackAllocationCommand:1/4 } </5 & MapReduce/6 & AddBacktrackStackAllocationCommand\1/7 0/8 Tile{ AsIs: e.Commands#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_MapReduce]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_AddBacktrackStackAllocationCommand_L1]);
  refalrts::alloc_number(vm, context[8], 0UL);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_gen_AddBacktrackStackAllocationCommand_B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddBacktrackStackAllocationCommand("AddBacktrackStackAllocationCommand", 1879886108U, 4280465764U, func_AddBacktrackStackAllocationCommand);


static refalrts::FnResult func_gen_AddFunctionNameComment_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & AddFunctionNameComment\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddFunctionNameComment\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & AddFunctionNameComment\1/4 (/7 e.Name#1/5 )/8 (/9 # CmdOnFailGoTo/13 s.NextLabel#2/14 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left( identifiers[ident_CmdOnFailGoTo], context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.Name#1 as range 5
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Name#1: 5
    //DEBUG: s.NextLabel#2: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & AddFunctionNameComment\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdOnFailGoTo/13 AsIs: s.NextLabel#2/14 HalfReuse: # Func$_name:/10 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_ident(context[10], identifiers[ident_Funck32_namek58_]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[9], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddFunctionNameComment\1/4 (/7 e.Name#1/5 )/8 t.OtherCommand#2/9 >/1
  // closed e.Name#1 as range 5
  //DEBUG: t.OtherCommand#2: 9
  //DEBUG: e.Name#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AddFunctionNameComment\1/4 (/7 e.Name#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherCommand#2/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddFunctionNameComment_L1("AddFunctionNameComment\\1", 1879886108U, 4280465764U, func_gen_AddFunctionNameComment_L1);


static refalrts::FnResult func_AddFunctionNameComment(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & AddFunctionNameComment/4 (/7 e.Name#1/5 )/8 e.RASLCommands#1/2 >/1
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
  // closed e.Name#1 as range 5
  // closed e.RASLCommands#1 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.RASLCommands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map/10 Tile{ HalfReuse: [*]/0 Reuse: & AddFunctionNameComment\1/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.RASLCommands#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Map]);
  refalrts::alloc_unwrapped_closure(vm, context[11], context[0]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_AddFunctionNameComment_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddFunctionNameComment("AddFunctionNameComment", 1879886108U, 4280465764U, func_AddFunctionNameComment);


static refalrts::FnResult func_gen_PrepareCommonRASL_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & PrepareCommonRASL=2/4 s.FunctionCount#1/5 (/8 e.FuncScopeClass#1/6 )/9 (/12 e.Functions#1/10 )/13 s.IdentCount#1/14 (/17 e.Idents#1/15 )/18 (/21 e.Items#2/19 )/22 (/25 # CmdStringArray/27 s.StringCount#3/28 e.Strings#3/23 )/26 e.RASL-Commands#3/2 >/1
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
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.FuncScopeClass#1 as range 6
  // closed e.Functions#1 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[27] = refalrts::ident_left( identifiers[ident_CmdStringArray], context[23], context[24] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents#1 as range 15
  // closed e.Items#2 as range 19
  // closed e.RASL-Commands#3 as range 2
  if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Strings#3 as range 23
  //DEBUG: s.FunctionCount#1: 5
  //DEBUG: e.FuncScopeClass#1: 6
  //DEBUG: e.Functions#1: 10
  //DEBUG: s.IdentCount#1: 14
  //DEBUG: e.Idents#1: 15
  //DEBUG: e.Items#2: 19
  //DEBUG: e.RASL-Commands#3: 2
  //DEBUG: s.StringCount#3: 28
  //DEBUG: e.Strings#3: 23

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdFuncArray/4 AsIs: s.FunctionCount#1/5 HalfReuse: </8 } & SetFunctionsScopeClass/29 Tile{ AsIs: (/17 } Tile{ AsIs: e.FuncScopeClass#1/6 } )/30 Tile{ AsIs: e.Functions#1/10 } >/31 Tile{ AsIs: )/18 AsIs: (/21 } Tile{ HalfReuse: # CmdIdentArray/13 AsIs: s.IdentCount#1/14 } Tile{ AsIs: e.Idents#1/15 } Tile{ AsIs: )/22 AsIs: (/25 AsIs: # CmdStringArray/27 AsIs: s.StringCount#3/28 AsIs: e.Strings#3/23 AsIs: )/26 } (/32 # RASL/33 Tile{ AsIs: e.RASL-Commands#3/2 } Tile{ AsIs: )/9 AsIs: (/12 } # Items/34 Tile{ AsIs: e.Items#2/19 } Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_name(vm, context[29], functions[efunc_SetFunctionsScopeClass]);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_close_call(vm, context[31]);
  refalrts::alloc_open_bracket(vm, context[32]);
  refalrts::alloc_ident(vm, context[33], identifiers[ident_RASL]);
  refalrts::alloc_ident(vm, context[34], identifiers[ident_Items]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_ident(context[4], identifiers[ident_CmdFuncArray]);
  refalrts::reinit_open_call(context[8]);
  refalrts::reinit_ident(context[13], identifiers[ident_CmdIdentArray]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[32], context[9] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[0], context[18] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[8] );
  refalrts::link_brackets( context[17], context[30] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareCommonRASL_A2("PrepareCommonRASL=2", 1879886108U, 4280465764U, func_gen_PrepareCommonRASL_A2);


static refalrts::FnResult func_gen_PrepareCommonRASL_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & PrepareCommonRASL=1/4 s.FunctionCount#1/5 (/8 e.FuncScopeClass#1/6 )/9 (/12 e.Functions#1/10 )/13 s.IdentCount#1/14 (/17 e.Idents#1/15 )/18 (/21 e.RASL-Commands#2/19 )/22 e.Items#2/2 >/1
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
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.FuncScopeClass#1 as range 6
  // closed e.Functions#1 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Idents#1 as range 15
  // closed e.RASL-Commands#2 as range 19
  // closed e.Items#2 as range 2
  //DEBUG: s.FunctionCount#1: 5
  //DEBUG: e.FuncScopeClass#1: 6
  //DEBUG: e.Functions#1: 10
  //DEBUG: s.IdentCount#1: 14
  //DEBUG: e.Idents#1: 15
  //DEBUG: e.RASL-Commands#2: 19
  //DEBUG: e.Items#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: [*]/0 Reuse: & PrepareCommonRASL=2/4 AsIs: s.FunctionCount#1/5 AsIs: (/8 AsIs: e.FuncScopeClass#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Functions#1/10 AsIs: )/13 AsIs: s.IdentCount#1/14 AsIs: (/17 AsIs: e.Idents#1/15 AsIs: )/18 AsIs: (/21 } Tile{ AsIs: e.Items#2/2 } Tile{ AsIs: )/22 } {*}/24 </25 & OutlineStrings/26 (/27 0/28 )/29 Tile{ AsIs: e.RASL-Commands#2/19 } >/30 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_unwrapped_closure(vm, context[24], context[0]);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_OutlineStrings]);
  refalrts::alloc_open_bracket(vm, context[27]);
  refalrts::alloc_number(vm, context[28], 0UL);
  refalrts::alloc_close_bracket(vm, context[29]);
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PrepareCommonRASL_A2]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[25] );
  refalrts::link_brackets( context[27], context[29] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[24], context[29] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[21] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareCommonRASL_A1("PrepareCommonRASL=1", 1879886108U, 4280465764U, func_gen_PrepareCommonRASL_A1);


static refalrts::FnResult func_PrepareCommonRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & PrepareCommonRASL/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 s.FunctionCount#1/17 e.Functions#1/9 )/12 (/15 s.IdentCount#1/18 e.Idents#1/13 )/16 e.Definitions#1/2 >/1
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
  // closed e.FuncScopeClass#1 as range 5
  // closed e.Definitions#1 as range 2
  if( ! refalrts::svar_left( context[17], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#1 as range 9
  if( ! refalrts::svar_left( context[18], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents#1 as range 13
  //DEBUG: e.FuncScopeClass#1: 5
  //DEBUG: e.Definitions#1: 2
  //DEBUG: s.FunctionCount#1: 17
  //DEBUG: e.Functions#1: 9
  //DEBUG: s.IdentCount#1: 18
  //DEBUG: e.Idents#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.FunctionCount#1/17 {REMOVED TILE} {REMOVED TILE} s.IdentCount#1/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 [*]/20 Tile{ HalfReuse: & PrepareCommonRASL=1/0 HalfReuse: s.FunctionCount1 #17/4 AsIs: (/7 AsIs: e.FuncScopeClass#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Functions#1/9 } Tile{ AsIs: )/12 HalfReuse: s.IdentCount1 #18/15 } (/21 Tile{ AsIs: e.Idents#1/13 } )/22 {*}/23 </24 Tile{ HalfReuse: & GlueFunctionRASLs/16 AsIs: e.Definitions#1/2 AsIs: >/1 } >/25 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_closure_head(vm, context[20]);
  refalrts::alloc_open_bracket(vm, context[21]);
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_unwrapped_closure(vm, context[23], context[20]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_name(context[0], functions[efunc_gen_PrepareCommonRASL_A1]);
  refalrts::reinit_svar( context[4], context[17] );
  refalrts::reinit_svar( context[15], context[18] );
  refalrts::reinit_name(context[16], functions[efunc_GlueFunctionRASLs]);
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[16], context[1] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareCommonRASL("PrepareCommonRASL", 1879886108U, 4280465764U, func_PrepareCommonRASL);


static refalrts::FnResult func_gen_GlueFunctionRASLs_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & GlueFunctionRASLs\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GlueFunctionRASLs\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GlueFunctionRASLs\1/4 (/7 e.All-RASL-Commands#2/5 )/8 (/9 # CmdInterpretFuncDescr/13 s.ScopeClass#2/14 (/17 e.Name#2/15 )/18 (/21 # LABEL/23 s.Label#2/24 )/22 e.RASL-Commands#2/11 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left( identifiers[ident_CmdInterpretFuncDescr], context[11], context[12] );
    if( ! context[13] )
      continue;
    // closed e.All-RASL-Commands#2 as range 5
    if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[11], context[12] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left( identifiers[ident_LABEL], context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.Name#2 as range 15
    // closed e.RASL-Commands#2 as range 11
    if( ! refalrts::svar_left( context[24], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    //DEBUG: e.All-RASL-Commands#2: 5
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 15
    //DEBUG: e.RASL-Commands#2: 11
    //DEBUG: s.Label#2: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & GlueFunctionRASLs\1/4 (/7 {REMOVED TILE} )/8 (/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.All-RASL-Commands#2/5 } Tile{ AsIs: (/21 AsIs: # LABEL/23 AsIs: s.Label#2/24 AsIs: )/22 AsIs: e.RASL-Commands#2/11 AsIs: )/10 HalfReuse: (/1 } Tile{ AsIs: # CmdInterpretFuncDescr/13 AsIs: s.ScopeClass#2/14 } Tile{ AsIs: e.Name#2/15 } Tile{ HalfReuse: s.Label2 #24/17 } Tile{ AsIs: )/18 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_bracket(context[1]);
    refalrts::reinit_svar( context[17], context[24] );
    refalrts::link_brackets( context[1], context[18] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[21], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GlueFunctionRASLs\1/4 (/7 e.All-RASL-Commands#2/5 )/8 t.OtherItem#2/9 >/1
  // closed e.All-RASL-Commands#2 as range 5
  //DEBUG: t.OtherItem#2: 9
  //DEBUG: e.All-RASL-Commands#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GlueFunctionRASLs\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.All-RASL-Commands#2/5 AsIs: )/8 AsIs: t.OtherItem#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GlueFunctionRASLs_L1("GlueFunctionRASLs\\1", 1879886108U, 4280465764U, func_gen_GlueFunctionRASLs_L1);


static refalrts::FnResult func_GlueFunctionRASLs(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & GlueFunctionRASLs/4 e.Definitions#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Definitions#1 as range 2
  //DEBUG: e.Definitions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & MapReduce/6 & GlueFunctionRASLs\1/7 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Definitions#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_MapReduce]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_GlueFunctionRASLs_L1]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GlueFunctionRASLs("GlueFunctionRASLs", 1879886108U, 4280465764U, func_GlueFunctionRASLs);


static refalrts::FnResult func_gen_SetFunctionsScopeClass_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & SetFunctionsScopeClass=1/4 (/7 e.FuncScopeClass-NotCalledFromRASL#2/5 )/8 e.Functions#2/2 >/1
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
  // closed e.FuncScopeClass-NotCalledFromRASL#2 as range 5
  // closed e.Functions#2 as range 2
  //DEBUG: e.FuncScopeClass-NotCalledFromRASL#2: 5
  //DEBUG: e.Functions#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetFunctionsScopeClass=1/4 (/7 e.FuncScopeClass-NotCalledFromRASL#2/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Functions#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SetFunctionsScopeClass_A1("SetFunctionsScopeClass=1", 1879886108U, 4280465764U, func_gen_SetFunctionsScopeClass_A1);


static refalrts::FnResult func_gen_SetFunctionsScopeClass_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & SetFunctionsScopeClass=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetFunctionsScopeClass=1\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 e.new#3/9 )/12 >/1
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
  // closed e.new#3 as range 9
  do {
    // </0 & SetFunctionsScopeClass=1\1/4 (/7 e.Decls-B#2/16 (/22 s.ScopeClass#2/26 e.FuncName#2/24 )/23 e.Decls-E#2/18 )/8 (/11 s.FuncId#2/13 e.FuncName#2/9 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    // closed e.FuncName#2 as range 9
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[18] = context[14];
      context[19] = context[15];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      if( ! refalrts::repeated_evar_right( vm, context[24], context[25], context[9], context[10], context[20], context[21] ) )
        continue;
      // closed e.Decls-E#2 as range 18
      if( ! refalrts::svar_left( context[26], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      //DEBUG: s.FuncId#2: 13
      //DEBUG: e.FuncName#2: 9
      //DEBUG: e.Decls-B#2: 16
      //DEBUG: e.Decls-E#2: 18
      //DEBUG: s.ScopeClass#2: 26

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & SetFunctionsScopeClass=1\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 (/11 s.FuncId#2/13 e.FuncName#2/9 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Decls-B#2/16 } Tile{ AsIs: e.Decls-E#2/18 } Tile{ AsIs: )/12 } Tile{ AsIs: (/22 AsIs: s.ScopeClass#2/26 AsIs: e.FuncName#2/24 AsIs: )/23 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[0]);
      refalrts::link_brackets( context[22], context[23] );
      refalrts::link_brackets( context[0], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetFunctionsScopeClass=1\1/4 (/7 e.Decls#2/5 )/8 (/11 s.FuncId#2/13 e.FuncName#2/9 )/12 >/1
  // closed e.Decls#2 as range 5
  // closed e.FuncName#2 as range 9
  //DEBUG: s.FuncId#2: 13
  //DEBUG: e.Decls#2: 5
  //DEBUG: e.FuncName#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetFunctionsScopeClass=1\1/4 {REMOVED TILE} s.FuncId#2/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Decls#2/5 AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # GN-Entry/12 } Tile{ AsIs: e.FuncName#2/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_ident(context[12], identifiers[ident_GNm_Entry]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SetFunctionsScopeClass_A1L1("SetFunctionsScopeClass=1\\1", 1879886108U, 4280465764U, func_gen_SetFunctionsScopeClass_A1L1);


static refalrts::FnResult func_SetFunctionsScopeClass(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & SetFunctionsScopeClass/4 (/7 e.FuncScopeClass#1/5 )/8 e.Functions#1/2 >/1
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
  // closed e.FuncScopeClass#1 as range 5
  // closed e.Functions#1 as range 2
  //DEBUG: e.FuncScopeClass#1: 5
  //DEBUG: e.Functions#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & SetFunctionsScopeClass=1/10 </11 Tile{ HalfReuse: & MapReduce/0 Reuse: & SetFunctionsScopeClass=1\1/4 AsIs: (/7 AsIs: e.FuncScopeClass#1/5 AsIs: )/8 AsIs: e.Functions#1/2 AsIs: >/1 } >/12 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_gen_SetFunctionsScopeClass_A1]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_close_call(vm, context[12]);
  refalrts::reinit_name(context[0], functions[efunc_MapReduce]);
  refalrts::update_name(context[4], functions[efunc_gen_SetFunctionsScopeClass_A1L1]);
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetFunctionsScopeClass("SetFunctionsScopeClass", 1879886108U, 4280465764U, func_SetFunctionsScopeClass);


static refalrts::FnResult func_OutlineStrings(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  // </0 & OutlineStrings/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & OutlineStrings/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & OutlineStrings/4 (/7 s.new#3/11 e.new#4/9 )/8 e.new#5/2 >/1
    context[9] = context[5];
    context[10] = context[6];
    // closed e.new#5 as range 2
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#4 as range 9
    do {
      // </0 & OutlineStrings/4 (/7 s.NextString#1/11 e.Strings#1/9 )/8 >/1
      if( ! refalrts::empty_seq( context[2], context[3] ) )
        continue;
      // closed e.Strings#1 as range 9
      //DEBUG: s.NextString#1: 11
      //DEBUG: e.Strings#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # CmdStringArray/7 AsIs: s.NextString#1/11 AsIs: e.Strings#1/9 AsIs: )/8 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[4]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdStringArray]);
      refalrts::link_brackets( context[4], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineStrings/4 (/7 s.new#6/11 e.new#7/9 )/8 e.new#8/12 (/16 s.new#9/18 e.new#10/14 )/17 >/1
    context[12] = context[2];
    context[13] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_right( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.new#7 as range 9
    // closed e.new#8 as range 12
    if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
      continue;
    // closed e.new#10 as range 14
    do {
      // </0 & OutlineStrings/4 (/7 s.new#11/11 e.new#12/9 )/8 e.new#16/12 (/16 # CmdCreateElem/18 s.new#13/21 s.new#14/22 # ElString/23 e.new#15/19 )/17 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[18] ) )
        continue;
      // closed e.new#12 as range 9
      // closed e.new#16 as range 12
      if( ! refalrts::svar_left( context[21], context[19], context[20] ) )
        continue;
      if( ! refalrts::svar_left( context[22], context[19], context[20] ) )
        continue;
      context[23] = refalrts::ident_left( identifiers[ident_ElString], context[19], context[20] );
      if( ! context[23] )
        continue;
      // closed e.new#15 as range 19
      do {
        // </0 & OutlineStrings/4 (/7 s.NextStringId#1/11 e.Strings-B#1/26 (/32 s.Id#1/36 e.String#1/34 )/33 e.Strings-E#1/28 )/8 e.Commands#1/12 (/16 # CmdCreateElem/18 s.CreateMode#1/21 s.ElemNo#1/22 # ElString/23 e.String#1/19 )/17 >/1
        context[24] = context[9];
        context[25] = context[10];
        // closed e.Commands#1 as range 12
        // closed e.String#1 as range 19
        context[26] = 0;
        context[27] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[28] = context[24];
          context[29] = context[25];
          context[30] = 0;
          context[31] = 0;
          context[32] = refalrts::brackets_left( context[30], context[31], context[28], context[29] );
          if( ! context[32] )
            continue;
          refalrts::bracket_pointers(context[32], context[33]);
          if( ! refalrts::repeated_evar_right( vm, context[34], context[35], context[19], context[20], context[30], context[31] ) )
            continue;
          // closed e.Strings-E#1 as range 28
          if( ! refalrts::svar_left( context[36], context[30], context[31] ) )
            continue;
          if( ! refalrts::empty_seq( context[30], context[31] ) )
            continue;
          //DEBUG: s.NextStringId#1: 11
          //DEBUG: s.CreateMode#1: 21
          //DEBUG: s.ElemNo#1: 22
          //DEBUG: e.Commands#1: 12
          //DEBUG: e.String#1: 19
          //DEBUG: e.Strings-B#1: 26
          //DEBUG: e.Strings-E#1: 28
          //DEBUG: s.Id#1: 36

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.String#1/19 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineStrings/4 AsIs: (/7 AsIs: s.NextStringId#1/11 AsIs: e.Strings-B#1/26 AsIs: (/32 AsIs: s.Id#1/36 AsIs: e.String#1/34 AsIs: )/33 AsIs: e.Strings-E#1/28 AsIs: )/8 AsIs: e.Commands#1/12 HalfReuse: >/16 HalfReuse: (/18 } # CmdCreateElem/37 Tile{ AsIs: s.CreateMode#1/21 AsIs: s.ElemNo#1/22 AsIs: # ElString/23 } Tile{ HalfReuse: s.Id1 #36/17 HalfReuse: )/1 ]] }
          refalrts::alloc_ident(vm, context[37], identifiers[ident_CmdCreateElem]);
          refalrts::reinit_close_call(context[16]);
          refalrts::reinit_open_bracket(context[18]);
          refalrts::reinit_svar( context[17], context[36] );
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[18], context[1] );
          refalrts::push_stack( vm, context[16] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[32], context[33] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[17];
          res = refalrts::splice_evar( res, context[21], context[23] );
          res = refalrts::splice_evar( res, context[37], context[37] );
          refalrts::splice_to_freelist_open( vm, context[18], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[26], context[27], context[24], context[25] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & OutlineStrings/4 (/7 s.NextStringId#1/11 e.Strings#1/9 )/8 e.Commands#1/12 (/16 # CmdCreateElem/18 s.CreateMode#1/21 s.ElemNo#1/22 # ElString/23 e.String#1/19 )/17 >/1
      // closed e.Strings#1 as range 9
      // closed e.Commands#1 as range 12
      // closed e.String#1 as range 19
      //DEBUG: s.NextStringId#1: 11
      //DEBUG: s.CreateMode#1: 21
      //DEBUG: s.ElemNo#1: 22
      //DEBUG: e.Strings#1: 9
      //DEBUG: e.Commands#1: 12
      //DEBUG: e.String#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineStrings/4 AsIs: (/7 } </24 & Inc/25 s.NextStringId#1/11/26 >/27 Tile{ AsIs: e.Strings#1/9 } (/28 Tile{ AsIs: s.NextStringId#1/11 } Tile{ AsIs: e.String#1/19 } Tile{ AsIs: )/8 } )/29 Tile{ AsIs: e.Commands#1/12 } >/30 Tile{ AsIs: (/16 AsIs: # CmdCreateElem/18 AsIs: s.CreateMode#1/21 AsIs: s.ElemNo#1/22 AsIs: # ElString/23 } Tile{ HalfReuse: s.NextStringId1 #11/17 HalfReuse: )/1 ]] }
      refalrts::alloc_open_call(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_Inc]);
      refalrts::copy_stvar(vm, context[26], context[11]);
      refalrts::alloc_close_call(vm, context[27]);
      refalrts::alloc_open_bracket(vm, context[28]);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::reinit_svar( context[17], context[11] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[16], context[1] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[29] );
      refalrts::link_brackets( context[28], context[8] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[24] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[16], context[23] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[29], context[29] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[24], context[27] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineStrings/4 (/7 s.new#11/11 e.new#12/9 )/8 e.new#15/12 (/16 # CmdVariableDebugTable/18 e.new#13/19 s.new#14/21 )/17 >/1
    context[19] = context[14];
    context[20] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_CmdVariableDebugTable], context[18] ) )
      continue;
    // closed e.new#12 as range 9
    // closed e.new#15 as range 12
    if( ! refalrts::svar_right( context[21], context[19], context[20] ) )
      continue;
    // closed e.new#13 as range 19
    do {
      // </0 & OutlineStrings/4 (/7 s.NextStringId#1/11 e.Strings-B#1/24 (/30 s.Id#1/34 e.VarName#1/32 )/31 e.Strings-E#1/26 )/8 e.Commands#1/12 (/16 # CmdVariableDebugTable/18 e.VarName#1/19 s.Offset#1/21 )/17 >/1
      context[22] = context[9];
      context[23] = context[10];
      // closed e.Commands#1 as range 12
      // closed e.VarName#1 as range 19
      context[24] = 0;
      context[25] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[26] = context[22];
        context[27] = context[23];
        context[28] = 0;
        context[29] = 0;
        context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
        if( ! context[30] )
          continue;
        refalrts::bracket_pointers(context[30], context[31]);
        if( ! refalrts::repeated_evar_right( vm, context[32], context[33], context[19], context[20], context[28], context[29] ) )
          continue;
        // closed e.Strings-E#1 as range 26
        if( ! refalrts::svar_left( context[34], context[28], context[29] ) )
          continue;
        if( ! refalrts::empty_seq( context[28], context[29] ) )
          continue;
        //DEBUG: s.NextStringId#1: 11
        //DEBUG: s.Offset#1: 21
        //DEBUG: e.Commands#1: 12
        //DEBUG: e.VarName#1: 19
        //DEBUG: e.Strings-B#1: 24
        //DEBUG: e.Strings-E#1: 26
        //DEBUG: s.Id#1: 34

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} e.VarName#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineStrings/4 AsIs: (/7 AsIs: s.NextStringId#1/11 AsIs: e.Strings-B#1/24 AsIs: (/30 AsIs: s.Id#1/34 AsIs: e.VarName#1/32 AsIs: )/31 AsIs: e.Strings-E#1/26 AsIs: )/8 AsIs: e.Commands#1/12 HalfReuse: >/16 HalfReuse: (/18 } # CmdVariableDebugTable/35 Tile{ HalfReuse: s.Id1 #34/1 } Tile{ AsIs: s.Offset#1/21 AsIs: )/17 } Tile{ ]] }
        refalrts::alloc_ident(vm, context[35], identifiers[ident_CmdVariableDebugTable]);
        refalrts::reinit_close_call(context[16]);
        refalrts::reinit_open_bracket(context[18]);
        refalrts::reinit_svar( context[1], context[34] );
        refalrts::link_brackets( context[18], context[17] );
        refalrts::push_stack( vm, context[16] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[21], context[17] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[35], context[35] );
        refalrts::splice_to_freelist_open( vm, context[18], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[24], context[25], context[22], context[23] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & OutlineStrings/4 (/7 s.NextStringId#1/11 e.Strings#1/9 )/8 e.Commands#1/12 (/16 # CmdVariableDebugTable/18 e.VarName#1/19 s.Offset#1/21 )/17 >/1
    // closed e.Strings#1 as range 9
    // closed e.Commands#1 as range 12
    // closed e.VarName#1 as range 19
    //DEBUG: s.NextStringId#1: 11
    //DEBUG: s.Offset#1: 21
    //DEBUG: e.Strings#1: 9
    //DEBUG: e.Commands#1: 12
    //DEBUG: e.VarName#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineStrings/4 AsIs: (/7 } </22 & Inc/23 Tile{ AsIs: s.NextStringId#1/11 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Strings#1/9 } (/24 s.NextStringId#1/11/25 Tile{ AsIs: e.VarName#1/19 } )/26 Tile{ AsIs: )/8 AsIs: e.Commands#1/12 HalfReuse: >/16 HalfReuse: (/18 } # CmdVariableDebugTable/27 s.NextStringId#1/11/28 Tile{ AsIs: s.Offset#1/21 AsIs: )/17 } Tile{ ]] }
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_Inc]);
    refalrts::alloc_open_bracket(vm, context[24]);
    refalrts::copy_stvar(vm, context[25], context[11]);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_ident(vm, context[27], identifiers[ident_CmdVariableDebugTable]);
    refalrts::copy_stvar(vm, context[28], context[11]);
    refalrts::reinit_close_call(context[16]);
    refalrts::reinit_open_bracket(context[18]);
    refalrts::link_brackets( context[18], context[17] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[24], context[26] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[17] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[8], context[18] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & OutlineStrings/4 (/7 e.Strings#1/5 )/8 e.Commands#1/2 t.OtherCommand#1/9 >/1
  // closed e.Strings#1 as range 5
  context[10] = refalrts::tvar_right( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 2
  //DEBUG: e.Strings#1: 5
  //DEBUG: t.OtherCommand#1: 9
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineStrings/4 AsIs: (/7 AsIs: e.Strings#1/5 AsIs: )/8 } Tile{ AsIs: e.Commands#1/2 } Tile{ AsIs: >/1 } Tile{ AsIs: t.OtherCommand#1/9 } Tile{ ]] }
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineStrings("OutlineStrings", 1879886108U, 4280465764U, func_OutlineStrings);


//End of file
