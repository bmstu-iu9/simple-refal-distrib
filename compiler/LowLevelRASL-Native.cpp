// This file automatically generated from 'LowLevelRASL-Native.ref'
// Don't edit! Edit 'LowLevelRASL-Native.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3727736004_2051159847

enum efunc {
  efunc_gen_Mu_C1 = 0,
  efunc_Mu = 1,
  efunc_u_u_Stepm_Start = 2,
  efunc_u_u_Mum_Aux = 3,
  efunc_u_u_Stepm_End = 4,
  efunc_gen_u_u_Mum_Aux_S13B1 = 5,
  efunc_u_u_FindMuPtr = 6,
  efunc_Add = 7,
  efunc_Div = 8,
  efunc_Mod = 9,
  efunc_Mul = 10,
  efunc_Residue = 11,
  efunc_Sub = 12,
  efunc_Type = 13,
  efunc_Up = 14,
  efunc_Evm_met = 15,
  efunc_gen_Residue_C1 = 16,
  efunc_gen_LowLevelRASLm_Native_B1S2A1 = 17,
  efunc_PrepareTable = 18,
  efunc_gen_LowLevelRASLm_Native_B1 = 19,
  efunc_Map = 20,
  efunc_PrepareFunctionsRASL = 21,
  efunc_LowLevelRASLm_Native = 22,
  efunc_SetCookies = 23,
  efunc_gen_PrepareTable_S2L1 = 24,
  efunc_MingleName = 25,
  efunc_ConvertDirectCommands = 26,
  efunc_Symb = 27,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_CmdCookieNS = 6,
  ident_CmdCEnumm_Item = 7,
  ident_CmdCEnumm_Start = 8,
  ident_CmdCEnumm_End = 9,
  ident_Functionm_ToRASL = 10,
  ident_Functionm_ToNative = 11,
  ident_CmdNativeFunction = 12,
  ident_CmdEnum = 13,
  ident_CmdSwap = 14,
  ident_CmdConditionFuncm_ToRASL = 15,
  ident_CmdConditionFuncm_ToNative = 16,
  ident_CmdDeclaration = 17,
  ident_CmdEmitNativeCode = 18,
  ident_GNm_Entry = 19,
  ident_Hash = 20,
  ident_GNm_Local = 21,
  ident_CmdFnStart = 22,
  ident_CmdProfileFunction = 23,
  ident_CmdLoadConstants = 24,
  ident_CmdFnEnd = 25,
  ident_CmdNativeFuncDescr = 26,
  ident_CmdSentence = 27,
  ident_CmdEndSentence = 28,
  ident_CmdStartSentence = 29,
  ident_CmdOpenELoop = 30,
  ident_AlgLeft = 31,
  ident_CmdOpenedEm_Start = 32,
  ident_CmdOpenedEm_End = 33,
  ident_CmdVariableDebugTable = 34,
  ident_CmdComment = 35,
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
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], functions[efunc_gen_Mu_C1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], functions[efunc_u_u_Stepm_Start] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_u_u_Mum_Aux] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[8] ) )
    return refalrts::cNoMemory;
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
    refalrts::update_name( context[4], functions[efunc_u_u_Stepm_End] );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
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

static refalrts::NativeReference nat_ref_Mu("Mu", 3727736004U, 2051159847U, func_Mu);


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
    if( ! refalrts::alloc_number( vm, context[9], 2051159847UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_u_u_FindMuPtr] );
    refalrts::reinit_number( context[5], 3727736004UL );
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
  refalrts::update_name( context[4], functions[efunc_u_u_FindMuPtr] );
  refalrts::reinit_number( context[5], 3727736004UL );
  refalrts::reinit_number( context[7], 2051159847UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 3727736004U, 2051159847U, func_gen_u_u_Mum_Aux_S13B1);


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
      refalrts::reinit_name( context[1], functions[efunc_Add] );
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
      refalrts::reinit_name( context[1], functions[efunc_Div] );
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
      refalrts::reinit_name( context[1], functions[efunc_Mod] );
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
      refalrts::reinit_name( context[1], functions[efunc_Mul] );
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
      refalrts::reinit_name( context[1], functions[efunc_Residue] );
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
      refalrts::reinit_name( context[1], functions[efunc_Sub] );
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
      refalrts::reinit_name( context[1], functions[efunc_Add] );
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
      refalrts::reinit_name( context[1], functions[efunc_Div] );
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
      refalrts::reinit_name( context[1], functions[efunc_Mod] );
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
      refalrts::reinit_name( context[1], functions[efunc_Mul] );
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
      refalrts::reinit_name( context[1], functions[efunc_Residue] );
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
    refalrts::reinit_name( context[1], functions[efunc_Sub] );
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
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[8], functions[efunc_gen_u_u_Mum_Aux_S13B1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], functions[efunc_Type] );
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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 3727736004U, 2051159847U, func_u_u_Mum_Aux);


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
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[9], functions[efunc_gen_Residue_C1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], functions[efunc_u_u_Stepm_Start] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_u_u_Mum_Aux] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[8] ) )
    return refalrts::cNoMemory;
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
    refalrts::update_name( context[4], functions[efunc_u_u_Stepm_End] );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
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

static refalrts::NativeReference nat_ref_Residue("Residue", 3727736004U, 2051159847U, func_Residue);


static refalrts::FnResult func_gen_LowLevelRASLm_Native_B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 t.IdentTable#1/9 e.DefinitionsRASL#3/2 >/1
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
  // closed e.DefinitionsRASL#3 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: t.FuncTable#1: 7
  //DEBUG: t.IdentTable#1: 9
  //DEBUG: e.DefinitionsRASL#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/11 Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } )/12 </13 & PrepareTable/14"efunc"/15 Tile{ AsIs: t.FuncTable#1/7 } >/17 </18 & PrepareTable/19"ident"/20 Tile{ AsIs: t.IdentTable#1/9 } >/22 Tile{ AsIs: e.DefinitionsRASL#3/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_PrepareTable] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[15], context[16], "efunc", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[19], functions[efunc_PrepareTable] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[20], context[21], "ident", 5 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[22] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], identifiers[ident_CmdCookieNS] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[0], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_B1S2A1("LowLevelRASL-Native:1$2=1", 3727736004U, 2051159847U, func_gen_LowLevelRASLm_Native_B1S2A1);


static refalrts::FnResult func_gen_LowLevelRASLm_Native_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & LowLevelRASL-Native:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & LowLevelRASL-Native:1/4 s.new#1/5 s.new#2/6 t.new#3/7 t.new#4/9 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
    // </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 t.IdentTable#1/9 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: t.FuncTable#1: 7
    //DEBUG: t.IdentTable#1: 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 t.IdentTable#1/9 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 t.FuncTable#1/7 t.IdentTable#1/9 e.Definitions#2/2 >/1
  // closed e.Definitions#2 as range 2
  //DEBUG: t.FuncTable#1: 7
  //DEBUG: t.IdentTable#1: 9
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Definitions#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL-Native:1$2=1/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 AsIs: t.FuncTable#1/7 AsIs: t.IdentTable#1/9 } {*}/12 </13 & Map/14 & PrepareFunctionsRASL/15 Tile{ AsIs: e.Definitions#2/2 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[12], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], functions[efunc_Map] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], functions[efunc_PrepareFunctionsRASL] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], functions[efunc_gen_LowLevelRASLm_Native_B1S2A1] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_B1("LowLevelRASL-Native:1", 3727736004U, 2051159847U, func_gen_LowLevelRASLm_Native_B1);


static refalrts::FnResult func_LowLevelRASLm_Native(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & LowLevelRASL-Native/4 s.Hash1#1/5 s.Hash2#1/6 (/9 t.FuncTable#1/11 t.IdentTable#1/13 )/10 e.Items#1/2 >/1
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
  // closed e.Items#1 as range 2
  context[12] = refalrts::tvar_left( context[11], context[7], context[8] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[7], context[8] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Items#1: 2
  //DEBUG: t.FuncTable#1: 11
  //DEBUG: t.IdentTable#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 [*]/16 & LowLevelRASL-Native:1/17 s.Hash1#1/5/18 s.Hash2#1/6/19 Tile{ AsIs: t.FuncTable#1/11 AsIs: t.IdentTable#1/13 HalfReuse: {*}/10 } </20 & Map/21 Tile{ HalfReuse: (/0 Reuse: & SetCookies/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: )/9 } Tile{ AsIs: e.Items#1/2 } >/22 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[17], functions[efunc_gen_LowLevelRASLm_Native_B1] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[18], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[19], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[21], functions[efunc_Map] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[22] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_unwrapped_closure( context[10], context[16] );
  refalrts::reinit_open_bracket( context[0] );
  refalrts::update_name( context[4], functions[efunc_SetCookies] );
  refalrts::reinit_close_bracket( context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[11], context[10] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LowLevelRASLm_Native("LowLevelRASL-Native", 0U, 0U, func_LowLevelRASLm_Native);


static refalrts::FnResult func_gen_PrepareTable_S2L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & PrepareTable$2\1/4 (/7 e.Prefix#1/5 )/8 (/11 s.Id#2/13 e.Name#2/9 )/12 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Prefix#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 9
  //DEBUG: e.Prefix#1: 5
  //DEBUG: s.Id#2: 13
  //DEBUG: e.Name#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/11 s.Id#2/13 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCEnum-Item/4 AsIs: (/7 AsIs: e.Prefix#1/5 AsIs: )/8 } Tile{ AsIs: e.Name#2/9 } Tile{ HalfReuse: s.Id2 #13/12 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], identifiers[ident_CmdCEnumm_Item] );
  refalrts::reinit_svar( context[12], context[13] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareTable_S2L1("PrepareTable$2\\1", 3727736004U, 2051159847U, func_gen_PrepareTable_S2L1);


static refalrts::FnResult func_PrepareTable(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & PrepareTable/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareTable/4 e.new#1/2 (/7 s.new#2/9 e.new#3/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & PrepareTable/4 e.Prefix#1/2 (/7 0/9 )/8 >/1
    if( ! refalrts::number_term( 0UL, context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    // closed e.Prefix#1 as range 2
    //DEBUG: e.Prefix#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PrepareTable/4 e.Prefix#1/2 (/7 0/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareTable/4 e.Prefix#1/2 (/7 s.Count#1/9 e.Items#1/5 )/8 >/1
  // closed e.Prefix#1 as range 2
  // closed e.Items#1 as range 5
  //DEBUG: s.Count#1: 9
  //DEBUG: e.Prefix#1: 2
  //DEBUG: e.Items#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Count#1/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCEnum-Start/4 AsIs: e.Prefix#1/2 HalfReuse: )/7 } </10 & Map/11 [*]/12 & PrepareTable$2\1/13 (/14 e.Prefix#1/2/15 )/17 {*}/18 Tile{ AsIs: e.Items#1/5 } >/19 (/20 Tile{ HalfReuse: # CmdCEnum-End/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], functions[efunc_Map] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[13], functions[efunc_gen_PrepareTable_S2L1] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[15], context[16], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[18], context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], identifiers[ident_CmdCEnumm_Start] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_ident( context[8], identifiers[ident_CmdCEnumm_End] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[20], context[1] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[18] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareTable("PrepareTable", 3727736004U, 2051159847U, func_PrepareTable);


static refalrts::FnResult func_SetCookies(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & SetCookies/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetCookies/4 s.new#1/9 s.new#2/10 (/7 s.new#3/11 t.new#4/12 e.new#5/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 5
  do {
    // </0 & SetCookies/4 s.new#6/9 s.new#7/10 (/7 s.new#8/11 s.new#9/12 e.new#10/5 )/8 >/1
    if( ! refalrts::svar_term( context[12], context[12] ) )
      continue;
    // closed e.new#10 as range 5
    do {
      // </0 & SetCookies/4 s.new#11/9 s.new#12/10 (/7 s.new#13/11 s.new#14/12 (/18 e.new#15/16 )/19 e.new#16/14 )/8 >/1
      context[14] = context[5];
      context[15] = context[6];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.new#15 as range 16
      // closed e.new#16 as range 14
      do {
        // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToRASL/11 s.ScopeClass#1/12 (/18 e.Name#1/16 )/19 e.Commands#1/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_Functionm_ToRASL], context[11] ) )
          continue;
        // closed e.Name#1 as range 16
        // closed e.Commands#1 as range 14
        //DEBUG: s.Hash1#1: 9
        //DEBUG: s.Hash2#1: 10
        //DEBUG: s.ScopeClass#1: 12
        //DEBUG: e.Name#1: 16
        //DEBUG: e.Commands#1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToRASL/11 s.ScopeClass#1/12 (/18 e.Name#1/16 )/19 e.Commands#1/14 )/8 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ ]] }
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToNative/11 s.ScopeClass#1/12 (/18 e.Name#1/16 )/19 e.Commands#1/14 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_Functionm_ToNative], context[11] ) )
          continue;
        // closed e.Name#1 as range 16
        // closed e.Commands#1 as range 14
        //DEBUG: s.Hash1#1: 9
        //DEBUG: s.Hash2#1: 10
        //DEBUG: s.ScopeClass#1: 12
        //DEBUG: e.Name#1: 16
        //DEBUG: e.Commands#1: 14

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function-ToNative/4 } Tile{ AsIs: (/18 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/12 } Tile{ AsIs: e.Name#1/16 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/19 AsIs: e.Commands#1/14 AsIs: )/8 } Tile{ ]] }
        refalrts::reinit_open_bracket( context[0] );
        refalrts::reinit_ident( context[4], identifiers[ident_Functionm_ToNative] );
        refalrts::reinit_open_call( context[1] );
        refalrts::reinit_name( context[11], functions[efunc_MingleName] );
        refalrts::reinit_close_call( context[7] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[19], context[8] );
        res = refalrts::splice_evar( res, context[9], context[7] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[11], context[12] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdNativeFunction/11 s.ScopeClass#1/12 (/18 e.Name#1/16 )/19 t.SrcPos#1/22 e.Code#1/20 )/8 >/1
      context[20] = context[14];
      context[21] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[11] ) )
        continue;
      // closed e.Name#1 as range 16
      context[23] = refalrts::tvar_left( context[22], context[20], context[21] );
      if( ! context[23] )
        continue;
      // closed e.Code#1 as range 20
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 16
      //DEBUG: t.SrcPos#1: 22
      //DEBUG: e.Code#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdNativeFunction/4 } Tile{ AsIs: (/18 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/12 } Tile{ AsIs: e.Name#1/16 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/19 AsIs: t.SrcPos#1/22 AsIs: e.Code#1/20 AsIs: )/8 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], identifiers[ident_CmdNativeFunction] );
      refalrts::reinit_open_call( context[1] );
      refalrts::reinit_name( context[11], functions[efunc_MingleName] );
      refalrts::reinit_close_call( context[7] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[8] );
      res = refalrts::splice_evar( res, context[9], context[7] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdEnum/11 s.ScopeClass#1/12 e.Name#1/5 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdEnum], context[11] ) )
        continue;
      // closed e.Name#1 as range 5
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdEnum/11 s.ScopeClass#1/12 e.Name#1/5 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdSwap/11 s.ScopeClass#1/12 e.Name#1/5 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdSwap], context[11] ) )
        continue;
      // closed e.Name#1 as range 5
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdSwap/11 s.ScopeClass#1/12 e.Name#1/5 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdConditionFunc-ToRASL/11 s.ScopeClass#1/12 e.Name#1/5 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToRASL], context[11] ) )
        continue;
      // closed e.Name#1 as range 5
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdConditionFunc-ToRASL/11 s.ScopeClass#1/12 e.Name#1/5 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdConditionFunc-ToNative/11 s.ScopeClass#1/12 e.Name#1/5 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncm_ToNative], context[11] ) )
        continue;
      // closed e.Name#1 as range 5
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 12
      //DEBUG: e.Name#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdConditionFunc-ToNative/11 s.ScopeClass#1/12 e.Name#1/5 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdDeclaration/11 s.ScopeClass#1/12 e.Name#1/5 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdDeclaration], context[11] ) )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: s.ScopeClass#1: 12
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdDeclaration/11 s.ScopeClass#1/12 e.Name#1/5 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdEmitNativeCode/11 t.SrcPos#1/12 e.Code#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[11] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 5
  //DEBUG: t.SrcPos#1: 12
  //DEBUG: s.Hash1#1: 9
  //DEBUG: s.Hash2#1: 10
  //DEBUG: e.Code#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdEmitNativeCode/11 AsIs: t.SrcPos#1/12 AsIs: e.Code#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetCookies("SetCookies", 3727736004U, 2051159847U, func_SetCookies);


static refalrts::FnResult func_MingleName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & MingleName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MingleName/4 s.new#1/5 e.new#2/2 s.new#3/7 s.new#4/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & MingleName/4 # GN-Entry/5 e.Name#1/2 s.Hash1#1/7 s.Hash2#1/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[5] ) )
      continue;
    // closed e.Name#1 as range 2
    //DEBUG: s.Hash1#1: 7
    //DEBUG: s.Hash2#1: 6
    //DEBUG: e.Name#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Hash1#1/7 s.Hash2#1/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ Reuse: # Hash/5 } Tile{ HalfReuse: 0/4 } Tile{ HalfReuse: 0/1 ]] }
    refalrts::update_ident( context[5], identifiers[ident_Hash] );
    refalrts::reinit_number( context[4], 0UL );
    refalrts::reinit_number( context[1], 0UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MingleName/4 # GN-Local/5 e.Name#1/2 s.Hash1#1/7 s.Hash2#1/6 >/1
  if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: s.Hash1#1: 7
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MingleName/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ Reuse: # Hash/5 } Tile{ AsIs: s.Hash1#1/7 AsIs: s.Hash2#1/6 } Tile{ ]] }
  refalrts::update_ident( context[5], identifiers[ident_Hash] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[6] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MingleName("MingleName", 3727736004U, 2051159847U, func_MingleName);


static refalrts::FnResult func_PrepareFunctionsRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & PrepareFunctionsRASL/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrepareFunctionsRASL/4 (/7 s.new#1/9 t.new#2/10 e.new#3/5 )/8 >/1
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
  // closed e.new#3 as range 5
  do {
    // </0 & PrepareFunctionsRASL/4 (/7 s.new#4/9 (/10 e.new#5/12 )/11 e.new#6/5 )/8 >/1
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[10] ) )
      continue;
    // closed e.new#5 as range 12
    // closed e.new#6 as range 5
    do {
      // </0 & PrepareFunctionsRASL/4 (/7 # Function-ToNative/9 (/10 e.Name#1/12 )/11 e.Body#1/5 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_Functionm_ToNative], context[9] ) )
        continue;
      // closed e.Name#1 as range 12
      // closed e.Body#1 as range 5
      //DEBUG: e.Name#1: 12
      //DEBUG: e.Body#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/14 # CmdFnStart/15 e.Name#1/12/16 Tile{ AsIs: )/8 HalfReuse: (/1 } # CmdProfileFunction/18 )/19 (/20 # CmdLoadConstants/21 )/22 </23 & ConvertDirectCommands/24 Tile{ AsIs: e.Body#1/5 } >/25 Tile{ HalfReuse: (/0 HalfReuse: # CmdFnEnd/4 HalfReuse: )/7 HalfReuse: (/9 HalfReuse: # CmdNativeFuncDescr/10 AsIs: e.Name#1/12 AsIs: )/11 } Tile{ ]] }
      if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[15], identifiers[ident_CmdFnStart] ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(vm, context[16], context[17], context[12], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[18], identifiers[ident_CmdProfileFunction] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[21], identifiers[ident_CmdLoadConstants] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[24], functions[efunc_ConvertDirectCommands] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[25] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[1] );
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], identifiers[ident_CmdFnEnd] );
      refalrts::reinit_close_bracket( context[7] );
      refalrts::reinit_open_bracket( context[9] );
      refalrts::reinit_ident( context[10], identifiers[ident_CmdNativeFuncDescr] );
      refalrts::link_brackets( context[9], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[20], context[22] );
      refalrts::link_brackets( context[1], context[19] );
      refalrts::link_brackets( context[14], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[18], context[24] );
      res = refalrts::splice_evar( res, context[8], context[1] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PrepareFunctionsRASL/4 (/7 # CmdNativeFunction/9 (/10 e.Name#1/12 )/11 t.SrcPos#1/16 e.Code#1/14 )/8 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdNativeFunction], context[9] ) )
      continue;
    // closed e.Name#1 as range 12
    context[17] = refalrts::tvar_left( context[16], context[14], context[15] );
    if( ! context[17] )
      continue;
    // closed e.Code#1 as range 14
    //DEBUG: e.Name#1: 12
    //DEBUG: t.SrcPos#1: 16
    //DEBUG: e.Code#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } # CmdFnStart/18 Tile{ AsIs: e.Name#1/12 } Tile{ HalfReuse: )/4 AsIs: (/7 Reuse: # CmdLoadConstants/9 HalfReuse: )/10 } (/19 Tile{ HalfReuse: # CmdEmitNativeCode/11 AsIs: t.SrcPos#1/16 AsIs: e.Code#1/14 AsIs: )/8 HalfReuse: (/1 } # CmdFnEnd/20 )/21 (/22 # CmdNativeFuncDescr/23 e.Name#1/12/24 )/26 Tile{ ]] }
    if( ! refalrts::alloc_ident( vm, context[18], identifiers[ident_CmdFnStart] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[20], identifiers[ident_CmdFnEnd] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[23], identifiers[ident_CmdNativeFuncDescr] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[24], context[25], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::update_ident( context[9], identifiers[ident_CmdLoadConstants] );
    refalrts::reinit_close_bracket( context[10] );
    refalrts::reinit_ident( context[11], identifiers[ident_CmdEmitNativeCode] );
    refalrts::reinit_open_bracket( context[1] );
    refalrts::link_brackets( context[22], context[26] );
    refalrts::link_brackets( context[1], context[21] );
    refalrts::link_brackets( context[19], context[8] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[26] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[4], context[10] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareFunctionsRASL/4 (/7 # CmdEmitNativeCode/9 t.SrcPos#1/10 e.Code#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 5
  //DEBUG: t.SrcPos#1: 10
  //DEBUG: e.Code#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PrepareFunctionsRASL/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdEmitNativeCode/9 AsIs: t.SrcPos#1/10 AsIs: e.Code#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareFunctionsRASL("PrepareFunctionsRASL", 3727736004U, 2051159847U, func_PrepareFunctionsRASL);


static refalrts::FnResult func_ConvertDirectCommands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & ConvertDirectCommands/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & ConvertDirectCommands/4 t.new#1/7 e.new#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#2 as range 5
    do {
      // </0 & ConvertDirectCommands/4 (/7 s.new#3/11 e.new#4/9 )/8 e.new#5/5 >/1
      context[9] = 0;
      context[10] = 0;
      if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
        continue;
      // closed e.new#5 as range 5
      if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
        continue;
      // closed e.new#4 as range 9
      do {
        // </0 & ConvertDirectCommands/4 (/7 # CmdSentence/11 e.SubCommands#1/9 )/8 e.Tail#1/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdSentence], context[11] ) )
          continue;
        // closed e.SubCommands#1 as range 9
        // closed e.Tail#1 as range 5
        //DEBUG: e.SubCommands#1: 9
        //DEBUG: e.Tail#1: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdStartSentence/4 HalfReuse: )/7 HalfReuse: </11 } & ConvertDirectCommands/12 Tile{ AsIs: e.SubCommands#1/9 } >/13 (/14 # CmdEndSentence/15 )/16 </17 Tile{ HalfReuse: & ConvertDirectCommands/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
        if( ! refalrts::alloc_name( vm, context[12], functions[efunc_ConvertDirectCommands] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[13] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[15], identifiers[ident_CmdEndSentence] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[16] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[17] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[0] );
        refalrts::reinit_ident( context[4], identifiers[ident_CmdStartSentence] );
        refalrts::reinit_close_bracket( context[7] );
        refalrts::reinit_open_call( context[11] );
        refalrts::reinit_name( context[8], functions[efunc_ConvertDirectCommands] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[17] );
        refalrts::link_brackets( context[14], context[16] );
        refalrts::push_stack( vm, context[13] );
        refalrts::push_stack( vm, context[11] );
        refalrts::link_brackets( context[0], context[7] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[13], context[17] );
        res = refalrts::splice_evar( res, context[9], context[10] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ConvertDirectCommands/4 (/7 s.new#6/11 s.new#7/14 e.new#8/12 )/8 e.new#9/5 >/1
      context[12] = context[9];
      context[13] = context[10];
      // closed e.new#9 as range 5
      if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
        continue;
      // closed e.new#8 as range 12
      do {
        // </0 & ConvertDirectCommands/4 (/7 # CmdOpenELoop/11 # AlgLeft/14 s.BracketNum#1/17 s.VarNumber#1/18 e.SubCommands#1/15 )/8 e.Tail#1/5 >/1
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
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } # CmdOpenedE-Start/19 # AlgLeft/20 s.BracketNum#1/17/21 s.VarNumber#1/18/22 )/23 </24 & ConvertDirectCommands/25 Tile{ AsIs: e.SubCommands#1/15 } Tile{ HalfReuse: >/4 AsIs: (/7 Reuse: # CmdOpenedE-End/11 AsIs: # AlgLeft/14 AsIs: s.BracketNum#1/17 AsIs: s.VarNumber#1/18 } )/26 </27 Tile{ HalfReuse: & ConvertDirectCommands/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
        if( ! refalrts::alloc_ident( vm, context[19], identifiers[ident_CmdOpenedEm_Start] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[20], identifiers[ident_AlgLeft] ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[21], context[17]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[22], context[18]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[24] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[25], functions[efunc_ConvertDirectCommands] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[27] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[0] );
        refalrts::reinit_close_call( context[4] );
        refalrts::update_ident( context[11], identifiers[ident_CmdOpenedEm_End] );
        refalrts::reinit_name( context[8], functions[efunc_ConvertDirectCommands] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[27] );
        refalrts::link_brackets( context[7], context[26] );
        refalrts::push_stack( vm, context[4] );
        refalrts::push_stack( vm, context[24] );
        refalrts::link_brackets( context[0], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[4], context[18] );
        res = refalrts::splice_evar( res, context[15], context[16] );
        res = refalrts::splice_evar( res, context[19], context[25] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ConvertDirectCommands/4 (/7 # CmdVariableDebugTable/11 s.Mode#1/14 e.Index#1/15 s.Depth#1/18 s.Offset#1/17 )/8 e.Tail#1/5 >/1
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
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/19 # CmdComment/20"DEB"/21 Tile{ HalfReuse: 'U'/0 HalfReuse: 'G'/4 HalfReuse: ':'/7 HalfReuse: ' '/11 AsIs: s.Mode#1/14 } '.'/23 Tile{ AsIs: e.Index#1/15 } '#'/24 </25 & Symb/26 Tile{ AsIs: s.Depth#1/18 } >/27": "/28 </30 & Symb/31 Tile{ AsIs: s.Offset#1/17 } >/32 )/33 </34 Tile{ HalfReuse: & ConvertDirectCommands/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_bracket( vm, context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[20], identifiers[ident_CmdComment] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[21], context[22], "DEB", 3 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[23], '.' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[24], '#' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[26], functions[efunc_Symb] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[28], context[29], ": ", 2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[31], functions[efunc_Symb] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[32] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[34] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_char( context[0], 'U' );
      refalrts::reinit_char( context[4], 'G' );
      refalrts::reinit_char( context[7], ':' );
      refalrts::reinit_char( context[11], ' ' );
      refalrts::reinit_name( context[8], functions[efunc_ConvertDirectCommands] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[34] );
      refalrts::link_brackets( context[19], context[33] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[27] );
      refalrts::push_stack( vm, context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[32], context[34] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[27], context[31] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[24], context[26] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[0], context[14] );
      res = refalrts::splice_evar( res, context[19], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ConvertDirectCommands/4 t.Command#1/7 e.Tail#1/5 >/1
    // closed e.Tail#1 as range 5
    //DEBUG: t.Command#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Command#1/7 } Tile{ AsIs: </0 AsIs: & ConvertDirectCommands/4 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
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

  // </0 & ConvertDirectCommands/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ConvertDirectCommands/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertDirectCommands("ConvertDirectCommands", 3727736004U, 2051159847U, func_ConvertDirectCommands);


//End of file
