// This file automatically generated from 'Opcodes.ref'
// Don't edit! Edit 'Opcodes.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_35760015_2997675368

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
  efunc_NumberFromOpcode = 17,
  efunc_NumberFromBracket = 18,
  efunc_BlockTypeNumber = 19,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_CmdProfileFunction = 6,
  ident_CmdLoadConstants = 7,
  ident_CmdIssueMemory = 8,
  ident_CmdReserveBacktrackStack = 9,
  ident_CmdOnFailGoTo = 10,
  ident_CmdProfilerStopSentence = 11,
  ident_CmdInitB0 = 12,
  ident_CmdInitB0m_Lite = 13,
  ident_CmdChar = 14,
  ident_AlgLeft = 15,
  ident_AlgRight = 16,
  ident_AlgTerm = 17,
  ident_CmdCharSave = 18,
  ident_CmdNumber = 19,
  ident_CmdNumberSave = 20,
  ident_CmdHugeNum = 21,
  ident_CmdHugeNumSave = 22,
  ident_CmdName = 23,
  ident_CmdNameSave = 24,
  ident_CmdIdent = 25,
  ident_CmdIdentSave = 26,
  ident_CmdBrackets = 27,
  ident_CmdBracketsSave = 28,
  ident_CmdADT = 29,
  ident_CmdADTSave = 30,
  ident_CmdCallSave = 31,
  ident_CmdEmpty = 32,
  ident_CmdNotEmpty = 33,
  ident_CmdVar = 34,
  ident_CmdVarSave = 35,
  ident_CmdRepeated = 36,
  ident_CmdRepeatedSave = 37,
  ident_CmdEPrepare = 38,
  ident_CmdEStart = 39,
  ident_CmdSave = 40,
  ident_CmdResetAllocator = 41,
  ident_CmdSetResArgBegin = 42,
  ident_CmdSetResRightEdge = 43,
  ident_CmdSetRes = 44,
  ident_CmdCopyEVar = 45,
  ident_CmdCopySTVar = 46,
  ident_CmdReinitSVar = 47,
  ident_Allocate = 48,
  ident_ElChar = 49,
  ident_ElName = 50,
  ident_ElNumber = 51,
  ident_ElHugeNumber = 52,
  ident_ElIdent = 53,
  ident_ElBracket = 54,
  ident_ElString = 55,
  ident_ElClosureHead = 56,
  ident_ElUnwrappedClosure = 57,
  ident_Reinit = 58,
  ident_Update = 59,
  ident_CmdLinkBrackets = 60,
  ident_CmdPushStack = 61,
  ident_CmdWrapClosure = 62,
  ident_CmdSpliceElem = 63,
  ident_CmdSpliceEVar = 64,
  ident_CmdSpliceSTVar = 65,
  ident_CmdSpliceRange = 66,
  ident_CmdSpliceTile = 67,
  ident_CmdSpliceToFreeList = 68,
  ident_CmdNextStep = 69,
  ident_CmdTrashLeftEdge = 70,
  ident_CmdTrash = 71,
  ident_CmdFail = 72,
  ident_CmdFetchSwapHead = 73,
  ident_CmdFetchSwapInfoBounds = 74,
  ident_CmdSwapSave = 75,
  ident_CmdPerformNative = 76,
  ident_CmdScale = 77,
  ident_CmdVariableDebugOffset = 78,
  ident_CmdSpliceToFreeListm_Range = 79,
  ident_CmdPushState = 80,
  ident_CmdPopState = 81,
  ident_CmdMainLoopReturnSuccess = 82,
  ident_ElOpenADT = 83,
  ident_ElOpenBracket = 84,
  ident_ElOpenCall = 85,
  ident_ElCloseADT = 86,
  ident_ElCloseBracket = 87,
  ident_ElCloseCall = 88,
  ident_Start = 89,
  ident_ConstTable = 90,
  ident_RefalFunction = 91,
  ident_NativeFunction = 92,
  ident_EmptyFunction = 93,
  ident_Swap = 94,
  ident_Reference = 95,
  ident_ConditionRasl = 96,
  ident_ConditionNative = 97,
  ident_Incorporated = 98,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 35760015U, 2997675368U, func_Mu);


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
    if( ! refalrts::alloc_number( vm, context[9], 2997675368UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], functions[efunc_u_u_FindMuPtr] );
    refalrts::reinit_number( context[5], 35760015UL );
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
  refalrts::reinit_number( context[5], 35760015UL );
  refalrts::reinit_number( context[7], 2997675368UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 35760015U, 2997675368U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 35760015U, 2997675368U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 35760015U, 2997675368U, func_Residue);


static refalrts::FnResult func_NumberFromOpcode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & NumberFromOpcode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NumberFromOpcode/4 e.new#1/2 s.new#2/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & NumberFromOpcode/4 s.new#3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # CmdProfileFunction/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdProfileFunction], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdProfileFunction/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
      refalrts::reinit_number( context[1], 0UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdLoadConstants/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdLoadConstants], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdLoadConstants/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/1 ]] }
      refalrts::reinit_number( context[1], 1UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdIssueMemory/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdIssueMemory], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIssueMemory/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/1 ]] }
      refalrts::reinit_number( context[1], 2UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdReserveBacktrackStack/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdReserveBacktrackStack], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdReserveBacktrackStack/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/1 ]] }
      refalrts::reinit_number( context[1], 3UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdOnFailGoTo/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdOnFailGoTo], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdOnFailGoTo/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 4/1 ]] }
      refalrts::reinit_number( context[1], 4UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdProfilerStopSentence/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdProfilerStopSentence], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdProfilerStopSentence/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 5/1 ]] }
      refalrts::reinit_number( context[1], 5UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdInitB0/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdInitB0], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdInitB0/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 6/1 ]] }
      refalrts::reinit_number( context[1], 6UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NumberFromOpcode/4 # CmdInitB0-Lite/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdInitB0m_Lite], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdInitB0-Lite/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 7/1 ]] }
    refalrts::reinit_number( context[1], 7UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 s.new#4/8 s.new#3/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # CmdChar/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdChar], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdChar/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdChar/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 8/1 ]] }
        refalrts::reinit_number( context[1], 8UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # CmdChar/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdChar/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 9/1 ]] }
        refalrts::reinit_number( context[1], 9UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdChar/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdChar/8 # AlgTerm/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 10/1 ]] }
      refalrts::reinit_number( context[1], 10UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdCharSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdCharSave], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdCharSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCharSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 11/1 ]] }
        refalrts::reinit_number( context[1], 11UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdCharSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCharSave/8 # AlgRight/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 12/1 ]] }
      refalrts::reinit_number( context[1], 12UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdNumber/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdNumber], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 13/1 ]] }
        refalrts::reinit_number( context[1], 13UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 14/1 ]] }
        refalrts::reinit_number( context[1], 14UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgTerm/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 15/1 ]] }
      refalrts::reinit_number( context[1], 15UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdNumberSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdNumberSave], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdNumberSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumberSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 16/1 ]] }
        refalrts::reinit_number( context[1], 16UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdNumberSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNumberSave/8 # AlgRight/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 17/1 ]] }
      refalrts::reinit_number( context[1], 17UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdHugeNum/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdHugeNum], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 18/1 ]] }
        refalrts::reinit_number( context[1], 18UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 19/1 ]] }
        refalrts::reinit_number( context[1], 19UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgTerm/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 20/1 ]] }
      refalrts::reinit_number( context[1], 20UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdHugeNumSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdHugeNumSave], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdHugeNumSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNumSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 21/1 ]] }
        refalrts::reinit_number( context[1], 21UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdHugeNumSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdHugeNumSave/8 # AlgRight/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 22/1 ]] }
      refalrts::reinit_number( context[1], 22UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdName/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdName], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdName/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdName/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 23/1 ]] }
        refalrts::reinit_number( context[1], 23UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # CmdName/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdName/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 24/1 ]] }
        refalrts::reinit_number( context[1], 24UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdName/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdName/8 # AlgTerm/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 25/1 ]] }
      refalrts::reinit_number( context[1], 25UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdNameSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdNameSave], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdNameSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNameSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 26/1 ]] }
        refalrts::reinit_number( context[1], 26UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdNameSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNameSave/8 # AlgRight/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 27/1 ]] }
      refalrts::reinit_number( context[1], 27UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdIdent/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdIdent], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 28/1 ]] }
        refalrts::reinit_number( context[1], 28UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 29/1 ]] }
        refalrts::reinit_number( context[1], 29UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgTerm/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 30/1 ]] }
      refalrts::reinit_number( context[1], 30UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdIdentSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdIdentSave], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdIdentSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdentSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 31/1 ]] }
        refalrts::reinit_number( context[1], 31UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdIdentSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdIdentSave/8 # AlgRight/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 32/1 ]] }
      refalrts::reinit_number( context[1], 32UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdBrackets/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdBrackets], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 33/1 ]] }
        refalrts::reinit_number( context[1], 33UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 34/1 ]] }
        refalrts::reinit_number( context[1], 34UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgTerm/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 35/1 ]] }
      refalrts::reinit_number( context[1], 35UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdBracketsSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdBracketsSave], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdBracketsSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBracketsSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 36/1 ]] }
        refalrts::reinit_number( context[1], 36UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdBracketsSave/8 # AlgRight/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdBracketsSave/8 # AlgRight/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 37/1 ]] }
      refalrts::reinit_number( context[1], 37UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdADT/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdADT], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdADT/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADT/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 38/1 ]] }
        refalrts::reinit_number( context[1], 38UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # CmdADT/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADT/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 39/1 ]] }
        refalrts::reinit_number( context[1], 39UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdADT/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADT/8 # AlgTerm/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 40/1 ]] }
      refalrts::reinit_number( context[1], 40UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdADTSave/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdADTSave], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 41/1 ]] }
        refalrts::reinit_number( context[1], 41UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgRight/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 42/1 ]] }
        refalrts::reinit_number( context[1], 42UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgTerm/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgTerm/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 43/1 ]] }
      refalrts::reinit_number( context[1], 43UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NumberFromOpcode/4 # CmdCallSave/8 # AlgLeft/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdCallSave], context[8] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCallSave/8 # AlgLeft/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 44/1 ]] }
    refalrts::reinit_number( context[1], 44UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 s.new#3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # CmdEmpty/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdEmpty], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdEmpty/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 45/1 ]] }
      refalrts::reinit_number( context[1], 45UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NumberFromOpcode/4 # CmdNotEmpty/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdNotEmpty], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNotEmpty/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 46/1 ]] }
    refalrts::reinit_number( context[1], 46UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 s.new#4/8 s.new#5/9 s.new#3/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 s.new#7/8 # CmdVar/9 s.new#6/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdVar], context[9] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 s.new#8/5 >/1
        if( ! refalrts::char_term( 's', context[8] ) )
          continue;
        do {
          // </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgLeft/5 >/1
          if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgLeft/5 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 47/1 ]] }
          refalrts::reinit_number( context[1], 47UL );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgRight/5 >/1
          if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgRight/5 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 48/1 ]] }
          refalrts::reinit_number( context[1], 48UL );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgTerm/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgTerm/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 49/1 ]] }
        refalrts::reinit_number( context[1], 49UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 't'/8 # CmdVar/9 s.new#8/5 >/1
      if( ! refalrts::char_term( 't', context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 't'/8 # CmdVar/9 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdVar/9 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 50/1 ]] }
        refalrts::reinit_number( context[1], 50UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 't'/8 # CmdVar/9 # AlgRight/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdVar/9 # AlgRight/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 51/1 ]] }
      refalrts::reinit_number( context[1], 51UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 't'/8 # CmdVarSave/9 s.new#6/5 >/1
      if( ! refalrts::char_term( 't', context[8] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_CmdVarSave], context[9] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 't'/8 # CmdVarSave/9 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdVarSave/9 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 52/1 ]] }
        refalrts::reinit_number( context[1], 52UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 't'/8 # CmdVarSave/9 # AlgRight/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdVarSave/9 # AlgRight/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 53/1 ]] }
      refalrts::reinit_number( context[1], 53UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 s.new#7/8 # CmdRepeated/9 s.new#6/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdRepeated], context[9] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 s.new#8/5 >/1
        if( ! refalrts::char_term( 'e', context[8] ) )
          continue;
        do {
          // </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 # AlgLeft/5 >/1
          if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 # AlgLeft/5 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 54/1 ]] }
          refalrts::reinit_number( context[1], 54UL );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 # AlgRight/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 55/1 ]] }
        refalrts::reinit_number( context[1], 55UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 s.new#8/5 >/1
        if( ! refalrts::char_term( 's', context[8] ) )
          continue;
        do {
          // </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgLeft/5 >/1
          if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgLeft/5 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 56/1 ]] }
          refalrts::reinit_number( context[1], 56UL );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgRight/5 >/1
          if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
            continue;

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgRight/5 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: 57/1 ]] }
          refalrts::reinit_number( context[1], 57UL );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgTerm/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 's'/8 # CmdRepeated/9 # AlgTerm/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 58/1 ]] }
        refalrts::reinit_number( context[1], 58UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 s.new#8/5 >/1
      if( ! refalrts::char_term( 't', context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgLeft/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgLeft/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 59/1 ]] }
        refalrts::reinit_number( context[1], 59UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgRight/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgRight/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 60/1 ]] }
        refalrts::reinit_number( context[1], 60UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgTerm/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdRepeated/9 # AlgTerm/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 61/1 ]] }
      refalrts::reinit_number( context[1], 61UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NumberFromOpcode/4 't'/8 # CmdRepeatedSave/9 s.new#6/5 >/1
    if( ! refalrts::char_term( 't', context[8] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_CmdRepeatedSave], context[9] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 't'/8 # CmdRepeatedSave/9 # AlgLeft/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdRepeatedSave/9 # AlgLeft/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 62/1 ]] }
      refalrts::reinit_number( context[1], 62UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NumberFromOpcode/4 't'/8 # CmdRepeatedSave/9 # AlgRight/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 't'/8 # CmdRepeatedSave/9 # AlgRight/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 63/1 ]] }
    refalrts::reinit_number( context[1], 63UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 s.new#3/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # CmdEPrepare/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdEPrepare], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdEPrepare/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 64/1 ]] }
      refalrts::reinit_number( context[1], 64UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdEStart/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdEStart], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdEStart/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 65/1 ]] }
      refalrts::reinit_number( context[1], 65UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdSave/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdSave], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSave/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 66/1 ]] }
      refalrts::reinit_number( context[1], 66UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdResetAllocator/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdResetAllocator], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdResetAllocator/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 67/1 ]] }
      refalrts::reinit_number( context[1], 67UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdSetResArgBegin/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdSetResArgBegin], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSetResArgBegin/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 68/1 ]] }
      refalrts::reinit_number( context[1], 68UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdSetResRightEdge/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdSetResRightEdge], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSetResRightEdge/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 69/1 ]] }
      refalrts::reinit_number( context[1], 69UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdSetRes/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdSetRes], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSetRes/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 70/1 ]] }
      refalrts::reinit_number( context[1], 70UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdCopyEVar/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdCopyEVar], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCopyEVar/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 71/1 ]] }
      refalrts::reinit_number( context[1], 71UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # CmdCopySTVar/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdCopySTVar], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdCopySTVar/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 72/1 ]] }
      refalrts::reinit_number( context[1], 72UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NumberFromOpcode/4 # CmdReinitSVar/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdReinitSVar], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdReinitSVar/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 73/1 ]] }
    refalrts::reinit_number( context[1], 73UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 s.new#4/8 s.new#3/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # Allocate/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_Allocate], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElChar/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElChar], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElChar/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 74/1 ]] }
        refalrts::reinit_number( context[1], 74UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElName/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElName], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElName/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 75/1 ]] }
        refalrts::reinit_number( context[1], 75UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElNumber/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElNumber], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElNumber/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 76/1 ]] }
        refalrts::reinit_number( context[1], 76UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElHugeNumber/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElHugeNumber], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElHugeNumber/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 77/1 ]] }
        refalrts::reinit_number( context[1], 77UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElIdent/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElIdent], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElIdent/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 78/1 ]] }
        refalrts::reinit_number( context[1], 78UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElBracket/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElBracket], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElBracket/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 79/1 ]] }
        refalrts::reinit_number( context[1], 79UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElString/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElString], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElString/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 80/1 ]] }
        refalrts::reinit_number( context[1], 80UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElClosureHead/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElClosureHead], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElClosureHead/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 113/1 ]] }
        refalrts::reinit_number( context[1], 113UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # Allocate/8 # ElUnwrappedClosure/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_ElUnwrappedClosure], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Allocate/8 # ElUnwrappedClosure/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 114/1 ]] }
      refalrts::reinit_number( context[1], 114UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # Reinit/8 s.new#5/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_Reinit], context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElChar/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElChar], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElChar/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 81/1 ]] }
        refalrts::reinit_number( context[1], 81UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElName/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElName], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElName/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 82/1 ]] }
        refalrts::reinit_number( context[1], 82UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElNumber/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElNumber], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElNumber/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 83/1 ]] }
        refalrts::reinit_number( context[1], 83UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElHugeNumber/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElHugeNumber], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElHugeNumber/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 84/1 ]] }
        refalrts::reinit_number( context[1], 84UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElIdent/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElIdent], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElIdent/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 85/1 ]] }
        refalrts::reinit_number( context[1], 85UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElBracket/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElBracket], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElBracket/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 86/1 ]] }
        refalrts::reinit_number( context[1], 86UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElClosureHead/5 >/1
        if( ! refalrts::ident_term( identifiers[ident_ElClosureHead], context[5] ) )
          continue;

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElClosureHead/5 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: 87/1 ]] }
        refalrts::reinit_number( context[1], 87UL );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & NumberFromOpcode/4 # Reinit/8 # ElUnwrappedClosure/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_ElUnwrappedClosure], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Reinit/8 # ElUnwrappedClosure/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 88/1 ]] }
      refalrts::reinit_number( context[1], 88UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NumberFromOpcode/4 # Update/8 s.new#5/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Update], context[8] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # Update/8 # ElChar/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_ElChar], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/8 # ElChar/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 89/1 ]] }
      refalrts::reinit_number( context[1], 89UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # Update/8 # ElName/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_ElName], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/8 # ElName/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 90/1 ]] }
      refalrts::reinit_number( context[1], 90UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # Update/8 # ElNumber/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_ElNumber], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/8 # ElNumber/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 91/1 ]] }
      refalrts::reinit_number( context[1], 91UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & NumberFromOpcode/4 # Update/8 # ElHugeNumber/5 >/1
      if( ! refalrts::ident_term( identifiers[ident_ElHugeNumber], context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/8 # ElHugeNumber/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: 92/1 ]] }
      refalrts::reinit_number( context[1], 92UL );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & NumberFromOpcode/4 # Update/8 # ElIdent/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElIdent], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # Update/8 # ElIdent/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 93/1 ]] }
    refalrts::reinit_number( context[1], 93UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NumberFromOpcode/4 s.new#3/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & NumberFromOpcode/4 # CmdLinkBrackets/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdLinkBrackets], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdLinkBrackets/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 94/1 ]] }
    refalrts::reinit_number( context[1], 94UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdPushStack/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdPushStack], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdPushStack/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 95/1 ]] }
    refalrts::reinit_number( context[1], 95UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdWrapClosure/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdWrapClosure], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdWrapClosure/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 110/1 ]] }
    refalrts::reinit_number( context[1], 110UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdSpliceElem/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdSpliceElem], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceElem/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 96/1 ]] }
    refalrts::reinit_number( context[1], 96UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdSpliceEVar/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdSpliceEVar], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceEVar/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 97/1 ]] }
    refalrts::reinit_number( context[1], 97UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdSpliceSTVar/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdSpliceSTVar], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceSTVar/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 98/1 ]] }
    refalrts::reinit_number( context[1], 98UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdSpliceRange/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdSpliceRange], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceRange/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 99/1 ]] }
    refalrts::reinit_number( context[1], 99UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdSpliceTile/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdSpliceTile], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceTile/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 100/1 ]] }
    refalrts::reinit_number( context[1], 100UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdSpliceToFreeList/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdSpliceToFreeList], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceToFreeList/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 101/1 ]] }
    refalrts::reinit_number( context[1], 101UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdNextStep/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdNextStep], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdNextStep/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 102/1 ]] }
    refalrts::reinit_number( context[1], 102UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdTrashLeftEdge/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdTrashLeftEdge], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdTrashLeftEdge/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 103/1 ]] }
    refalrts::reinit_number( context[1], 103UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdTrash/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdTrash], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdTrash/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 104/1 ]] }
    refalrts::reinit_number( context[1], 104UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdFail/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdFail], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdFail/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 105/1 ]] }
    refalrts::reinit_number( context[1], 105UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdFetchSwapHead/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdFetchSwapHead], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdFetchSwapHead/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 106/1 ]] }
    refalrts::reinit_number( context[1], 106UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdFetchSwapInfoBounds/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdFetchSwapInfoBounds], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdFetchSwapInfoBounds/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 107/1 ]] }
    refalrts::reinit_number( context[1], 107UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdSwapSave/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdSwapSave], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSwapSave/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 108/1 ]] }
    refalrts::reinit_number( context[1], 108UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdPerformNative/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdPerformNative], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdPerformNative/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 109/1 ]] }
    refalrts::reinit_number( context[1], 109UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdScale/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdScale], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdScale/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 111/1 ]] }
    refalrts::reinit_number( context[1], 111UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdVariableDebugOffset/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdVariableDebugOffset], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdVariableDebugOffset/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 112/1 ]] }
    refalrts::reinit_number( context[1], 112UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdSpliceToFreeList-Range/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdSpliceToFreeListm_Range], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdSpliceToFreeList-Range/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 115/1 ]] }
    refalrts::reinit_number( context[1], 115UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdPushState/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdPushState], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdPushState/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 116/1 ]] }
    refalrts::reinit_number( context[1], 116UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromOpcode/4 # CmdPopState/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdPopState], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdPopState/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 117/1 ]] }
    refalrts::reinit_number( context[1], 117UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NumberFromOpcode/4 # CmdMainLoopReturnSuccess/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdMainLoopReturnSuccess], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NumberFromOpcode/4 # CmdMainLoopReturnSuccess/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 118/1 ]] }
  refalrts::reinit_number( context[1], 118UL );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NumberFromOpcode("NumberFromOpcode", 0U, 0U, func_NumberFromOpcode);


static refalrts::FnResult func_NumberFromBracket(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & NumberFromBracket/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NumberFromBracket/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & NumberFromBracket/4 # ElOpenADT/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElOpenADT], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElOpenADT/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
    refalrts::reinit_number( context[1], 0UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromBracket/4 # ElOpenBracket/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElOpenBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElOpenBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/1 ]] }
    refalrts::reinit_number( context[1], 1UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromBracket/4 # ElOpenCall/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElOpenCall], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElOpenCall/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/1 ]] }
    refalrts::reinit_number( context[1], 2UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromBracket/4 # ElCloseADT/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElCloseADT], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElCloseADT/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/1 ]] }
    refalrts::reinit_number( context[1], 3UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & NumberFromBracket/4 # ElCloseBracket/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElCloseBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElCloseBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 4/1 ]] }
    refalrts::reinit_number( context[1], 4UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NumberFromBracket/4 # ElCloseCall/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_ElCloseCall], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & NumberFromBracket/4 # ElCloseCall/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 5/1 ]] }
  refalrts::reinit_number( context[1], 5UL );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NumberFromBracket("NumberFromBracket", 0U, 0U, func_NumberFromBracket);


static refalrts::FnResult func_BlockTypeNumber(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & BlockTypeNumber/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & BlockTypeNumber/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & BlockTypeNumber/4 # Start/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Start], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # Start/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 1/1 ]] }
    refalrts::reinit_number( context[1], 1UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & BlockTypeNumber/4 # ConstTable/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ConstTable], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # ConstTable/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 2/1 ]] }
    refalrts::reinit_number( context[1], 2UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & BlockTypeNumber/4 # RefalFunction/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_RefalFunction], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # RefalFunction/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 3/1 ]] }
    refalrts::reinit_number( context[1], 3UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & BlockTypeNumber/4 # NativeFunction/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_NativeFunction], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # NativeFunction/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 4/1 ]] }
    refalrts::reinit_number( context[1], 4UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & BlockTypeNumber/4 # EmptyFunction/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_EmptyFunction], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # EmptyFunction/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 5/1 ]] }
    refalrts::reinit_number( context[1], 5UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & BlockTypeNumber/4 # Swap/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Swap], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # Swap/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 6/1 ]] }
    refalrts::reinit_number( context[1], 6UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & BlockTypeNumber/4 # Reference/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Reference], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # Reference/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 7/1 ]] }
    refalrts::reinit_number( context[1], 7UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & BlockTypeNumber/4 # ConditionRasl/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ConditionRasl], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # ConditionRasl/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 8/1 ]] }
    refalrts::reinit_number( context[1], 8UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & BlockTypeNumber/4 # ConditionNative/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ConditionNative], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # ConditionNative/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 9/1 ]] }
    refalrts::reinit_number( context[1], 9UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & BlockTypeNumber/4 # Incorporated/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Incorporated], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & BlockTypeNumber/4 # Incorporated/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 10/1 ]] }
  refalrts::reinit_number( context[1], 10UL );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BlockTypeNumber("BlockTypeNumber", 0U, 0U, func_BlockTypeNumber);


//End of file
