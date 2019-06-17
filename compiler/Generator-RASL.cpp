// This file automatically generated from 'Generator-RASL.ref'
// Don't edit! Edit 'Generator-RASL.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2067244950_1894985041

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
  efunc_BytesFromString = 14,
  efunc_PutBlock = 15,
  efunc_PutWordLE = 16,
  efunc_Map = 17,
  efunc_GenCommandm_Globals = 18,
  efunc_UnBracket = 19,
  efunc_Assemble = 20,
  efunc_gen_GenProgramm_RASL_A4 = 21,
  efunc_Lenw = 22,
  efunc_BytesFromStringList = 23,
  efunc_gen_GenProgramm_RASL_A3 = 24,
  efunc_BytesFromIdentList = 25,
  efunc_gen_GenProgramm_RASL_A2 = 26,
  efunc_gen_GenProgramm_RASL_A1 = 27,
  efunc_BytesFromFunctionList = 28,
  efunc_NameWithSignm_Bytes = 29,
  efunc_gen_BytesFromFunctionList_L1 = 30,
  efunc_DisplayName = 31,
  efunc_Asciiz = 32,
  efunc_gen_BytesFromIdentList_L1 = 33,
  efunc_Fetch = 34,
  efunc_gen_BytesFromStringList_L1L1 = 35,
  efunc_gen_BytesFromStringList_L1 = 36,
  efunc_Ord = 37,
  efunc_gen_PutBlock_L1 = 38,
  efunc_BlockTypeNumber = 39,
  efunc_gen_PutWordLE_S2A1 = 40,
  efunc_Divmod = 41,
  efunc_ResolveLabeledDestinations = 42,
  efunc_gen_Assemble_A3 = 43,
  efunc_gen_Assemble_A2 = 44,
  efunc_CalcLabelsOffsets = 45,
  efunc_gen_Assemble_A1 = 46,
  efunc_GenCommandm_RASL = 47,
  efunc_PutCommand = 48,
  efunc_gen_GenCommandm_RASL_S33L1 = 49,
  efunc_CreateCommandTag = 50,
  efunc_CreateCommandInfo = 51,
  efunc_gen_GenCommandm_RASL_S50L1 = 52,
  efunc_NumberFromOpcode = 53,
  efunc_gen_PutCommand_S3B1 = 54,
  efunc_NumberFromBracket = 55,
  efunc_Inc = 56,
  efunc_MapReduce = 57,
  efunc_gen_CalcLabelsOffsets_L1 = 58,
  efunc_gen_ResolveLabeledDestinations_S1B1S1A1 = 59,
  efunc_Prout = 60,
  efunc_Exit = 61,
  efunc_Symb = 62,
  efunc_gen_ResolveLabeledDestinations_S1B1 = 63,
  efunc_TermCompare = 64,
  efunc_gen_ResolveLabeledDestinations_S1A2 = 65,
  efunc_gen_ResolveLabeledDestinations_S1A1 = 66,
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
  ident_ModuleID = 99,
  ident_CmdFuncArray = 100,
  ident_CmdIdentArray = 101,
  ident_CmdStringArray = 102,
  ident_RASL = 103,
  ident_Items = 104,
  ident_GNm_Entry = 105,
  ident_GNm_Local = 106,
  ident_CmdEnumDescr = 107,
  ident_CmdInterpretFuncDescr = 108,
  ident_CmdSwapDescr = 109,
  ident_CmdConditionFuncDecsrRasl = 110,
  ident_CmdConditionFuncDecsrNative = 111,
  ident_CmdNativeFuncDescr = 112,
  ident_ARGm_BEGIN = 113,
  ident_RIGHTm_EDGE = 114,
  ident_LEFTm_EDGE = 115,
  ident_LABEL = 116,
  ident_Funck32_namek58_ = 117,
  ident_CmdRepeatedTVarSave = 118,
  ident_CmdVariableDebugTable = 119,
  ident_CmdCopyVar = 120,
  ident_CmdCreateElem = 121,
  ident_CmdInsertElem = 122,
  ident_CmdInsertVar = 123,
  ident_CmdInsertRange = 124,
  ident_CmdInsertTile = 125,
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

static refalrts::NativeReference nat_ref_Mu("Mu", 2067244950U, 1894985041U, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 1894985041UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 2067244950UL);
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
  refalrts::reinit_number(context[5], 2067244950UL);
  refalrts::reinit_number(context[7], 1894985041UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 2067244950U, 1894985041U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 2067244950U, 1894985041U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 2067244950U, 1894985041U, func_Residue);


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
      refalrts::reinit_number(context[1], 0UL);
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
      refalrts::reinit_number(context[1], 1UL);
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
      refalrts::reinit_number(context[1], 2UL);
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
      refalrts::reinit_number(context[1], 3UL);
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
      refalrts::reinit_number(context[1], 4UL);
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
      refalrts::reinit_number(context[1], 5UL);
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
      refalrts::reinit_number(context[1], 6UL);
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
    refalrts::reinit_number(context[1], 7UL);
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
        refalrts::reinit_number(context[1], 8UL);
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
        refalrts::reinit_number(context[1], 9UL);
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
      refalrts::reinit_number(context[1], 10UL);
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
        refalrts::reinit_number(context[1], 11UL);
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
      refalrts::reinit_number(context[1], 12UL);
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
        refalrts::reinit_number(context[1], 13UL);
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
        refalrts::reinit_number(context[1], 14UL);
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
      refalrts::reinit_number(context[1], 15UL);
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
        refalrts::reinit_number(context[1], 16UL);
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
      refalrts::reinit_number(context[1], 17UL);
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
        refalrts::reinit_number(context[1], 18UL);
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
        refalrts::reinit_number(context[1], 19UL);
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
      refalrts::reinit_number(context[1], 20UL);
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
        refalrts::reinit_number(context[1], 21UL);
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
      refalrts::reinit_number(context[1], 22UL);
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
        refalrts::reinit_number(context[1], 23UL);
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
        refalrts::reinit_number(context[1], 24UL);
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
      refalrts::reinit_number(context[1], 25UL);
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
        refalrts::reinit_number(context[1], 26UL);
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
      refalrts::reinit_number(context[1], 27UL);
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
        refalrts::reinit_number(context[1], 28UL);
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
        refalrts::reinit_number(context[1], 29UL);
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
      refalrts::reinit_number(context[1], 30UL);
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
        refalrts::reinit_number(context[1], 31UL);
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
      refalrts::reinit_number(context[1], 32UL);
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
        refalrts::reinit_number(context[1], 33UL);
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
        refalrts::reinit_number(context[1], 34UL);
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
      refalrts::reinit_number(context[1], 35UL);
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
        refalrts::reinit_number(context[1], 36UL);
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
      refalrts::reinit_number(context[1], 37UL);
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
        refalrts::reinit_number(context[1], 38UL);
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
        refalrts::reinit_number(context[1], 39UL);
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
      refalrts::reinit_number(context[1], 40UL);
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
        refalrts::reinit_number(context[1], 41UL);
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
        refalrts::reinit_number(context[1], 42UL);
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
      refalrts::reinit_number(context[1], 43UL);
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
    refalrts::reinit_number(context[1], 44UL);
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
      refalrts::reinit_number(context[1], 45UL);
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
    refalrts::reinit_number(context[1], 46UL);
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
          refalrts::reinit_number(context[1], 47UL);
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
          refalrts::reinit_number(context[1], 48UL);
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
        refalrts::reinit_number(context[1], 49UL);
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
        refalrts::reinit_number(context[1], 50UL);
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
      refalrts::reinit_number(context[1], 51UL);
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
        refalrts::reinit_number(context[1], 52UL);
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
      refalrts::reinit_number(context[1], 53UL);
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
          refalrts::reinit_number(context[1], 54UL);
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
        refalrts::reinit_number(context[1], 55UL);
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
          refalrts::reinit_number(context[1], 56UL);
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
          refalrts::reinit_number(context[1], 57UL);
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
        refalrts::reinit_number(context[1], 58UL);
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
        refalrts::reinit_number(context[1], 59UL);
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
        refalrts::reinit_number(context[1], 60UL);
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
      refalrts::reinit_number(context[1], 61UL);
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
      refalrts::reinit_number(context[1], 62UL);
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
    refalrts::reinit_number(context[1], 63UL);
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
      refalrts::reinit_number(context[1], 64UL);
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
      refalrts::reinit_number(context[1], 65UL);
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
      refalrts::reinit_number(context[1], 66UL);
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
      refalrts::reinit_number(context[1], 67UL);
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
      refalrts::reinit_number(context[1], 68UL);
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
      refalrts::reinit_number(context[1], 69UL);
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
      refalrts::reinit_number(context[1], 70UL);
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
      refalrts::reinit_number(context[1], 71UL);
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
      refalrts::reinit_number(context[1], 72UL);
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
    refalrts::reinit_number(context[1], 73UL);
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
        refalrts::reinit_number(context[1], 74UL);
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
        refalrts::reinit_number(context[1], 75UL);
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
        refalrts::reinit_number(context[1], 76UL);
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
        refalrts::reinit_number(context[1], 77UL);
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
        refalrts::reinit_number(context[1], 78UL);
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
        refalrts::reinit_number(context[1], 79UL);
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
        refalrts::reinit_number(context[1], 80UL);
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
        refalrts::reinit_number(context[1], 113UL);
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
      refalrts::reinit_number(context[1], 114UL);
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
        refalrts::reinit_number(context[1], 81UL);
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
        refalrts::reinit_number(context[1], 82UL);
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
        refalrts::reinit_number(context[1], 83UL);
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
        refalrts::reinit_number(context[1], 84UL);
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
        refalrts::reinit_number(context[1], 85UL);
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
        refalrts::reinit_number(context[1], 86UL);
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
        refalrts::reinit_number(context[1], 87UL);
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
      refalrts::reinit_number(context[1], 88UL);
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
      refalrts::reinit_number(context[1], 89UL);
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
      refalrts::reinit_number(context[1], 90UL);
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
      refalrts::reinit_number(context[1], 91UL);
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
      refalrts::reinit_number(context[1], 92UL);
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
    refalrts::reinit_number(context[1], 93UL);
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
    refalrts::reinit_number(context[1], 94UL);
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
    refalrts::reinit_number(context[1], 95UL);
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
    refalrts::reinit_number(context[1], 110UL);
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
    refalrts::reinit_number(context[1], 96UL);
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
    refalrts::reinit_number(context[1], 97UL);
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
    refalrts::reinit_number(context[1], 98UL);
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
    refalrts::reinit_number(context[1], 99UL);
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
    refalrts::reinit_number(context[1], 100UL);
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
    refalrts::reinit_number(context[1], 101UL);
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
    refalrts::reinit_number(context[1], 102UL);
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
    refalrts::reinit_number(context[1], 103UL);
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
    refalrts::reinit_number(context[1], 104UL);
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
    refalrts::reinit_number(context[1], 105UL);
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
    refalrts::reinit_number(context[1], 106UL);
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
    refalrts::reinit_number(context[1], 107UL);
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
    refalrts::reinit_number(context[1], 108UL);
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
    refalrts::reinit_number(context[1], 109UL);
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
    refalrts::reinit_number(context[1], 111UL);
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
    refalrts::reinit_number(context[1], 112UL);
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
    refalrts::reinit_number(context[1], 115UL);
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
    refalrts::reinit_number(context[1], 116UL);
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
    refalrts::reinit_number(context[1], 117UL);
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
  refalrts::reinit_number(context[1], 118UL);
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
    refalrts::reinit_number(context[1], 0UL);
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
    refalrts::reinit_number(context[1], 1UL);
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
    refalrts::reinit_number(context[1], 2UL);
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
    refalrts::reinit_number(context[1], 3UL);
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
    refalrts::reinit_number(context[1], 4UL);
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
  refalrts::reinit_number(context[1], 5UL);
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
    refalrts::reinit_number(context[1], 1UL);
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
    refalrts::reinit_number(context[1], 2UL);
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
    refalrts::reinit_number(context[1], 3UL);
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
    refalrts::reinit_number(context[1], 4UL);
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
    refalrts::reinit_number(context[1], 5UL);
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
    refalrts::reinit_number(context[1], 6UL);
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
    refalrts::reinit_number(context[1], 7UL);
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
    refalrts::reinit_number(context[1], 8UL);
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
    refalrts::reinit_number(context[1], 9UL);
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
  refalrts::reinit_number(context[1], 10UL);
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BlockTypeNumber("BlockTypeNumber", 0U, 0U, func_BlockTypeNumber);


static refalrts::FnResult func_gen_GenProgramm_RASL_A4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 87 elems
  refalrts::Iter context[87];
  refalrts::zeros( context, 87 );
  // </0 & GenProgram-RASL=4/4 s.Cookie1#1/5 s.Cookie2#1/6 s.FunctionCount#1/7 s.IdentCount#1/8 s.StringCount#1/9 s.ExternalSize#2/10 s.IdentSize#3/11 s.StringSize#4/12 (/15 e.FuncNamesAsBytes#2/13 )/16 (/19 e.IdentsAsBytes#3/17 )/20 (/23 e.StringsAsBytes#4/21 )/24 (/27 e.Items#1/25 )/28 s.RaslLength#5/29 (/32 e.LabelOffsets#5/30 )/33 e.RASLAsWords#5/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_left( context[25], context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  // closed e.FuncNamesAsBytes#2 as range 13
  // closed e.IdentsAsBytes#3 as range 17
  // closed e.StringsAsBytes#4 as range 21
  // closed e.Items#1 as range 25
  if( ! refalrts::svar_left( context[29], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.LabelOffsets#5 as range 30
  // closed e.RASLAsWords#5 as range 2
  //DEBUG: s.Cookie1#1: 5
  //DEBUG: s.Cookie2#1: 6
  //DEBUG: s.FunctionCount#1: 7
  //DEBUG: s.IdentCount#1: 8
  //DEBUG: s.StringCount#1: 9
  //DEBUG: s.ExternalSize#2: 10
  //DEBUG: s.IdentSize#3: 11
  //DEBUG: s.StringSize#4: 12
  //DEBUG: e.FuncNamesAsBytes#2: 13
  //DEBUG: e.IdentsAsBytes#3: 17
  //DEBUG: e.StringsAsBytes#4: 21
  //DEBUG: e.Items#1: 25
  //DEBUG: s.RaslLength#5: 29
  //DEBUG: e.LabelOffsets#5: 30
  //DEBUG: e.RASLAsWords#5: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutBlock/4 } Tile{ HalfReuse: # Start/23 } </34 & BytesFromString/35"RAS"/36 Tile{ HalfReuse: 'L'/16 HalfReuse: 'C'/19 }"ODE"/38 >/40 >/41 </42 & PutBlock/43 # ConstTable/44 </45 & PutWordLE/46 Tile{ AsIs: s.Cookie1#1/5 } >/47 </48 & PutWordLE/49 Tile{ AsIs: s.Cookie2#1/6 } >/50 </51 & PutWordLE/52 Tile{ AsIs: s.FunctionCount#1/7 } >/53 </54 & PutWordLE/55 Tile{ AsIs: s.IdentCount#1/8 } >/56 </57 & PutWordLE/58 0/59 >/60 </61 & PutWordLE/62 Tile{ AsIs: s.StringCount#1/9 } >/63 </64 Tile{ HalfReuse: & PutWordLE/28 AsIs: s.RaslLength#5/29 HalfReuse: >/32 } </65 & PutWordLE/66 Tile{ AsIs: s.ExternalSize#2/10 } >/67 </68 & PutWordLE/69 Tile{ AsIs: s.IdentSize#3/11 } >/70 </71 & PutWordLE/72 </73 & Sub/74 Tile{ AsIs: s.StringSize#4/12 HalfReuse: </15 } & Mul/75 4/76 s.StringCount#1/9/77 >/78 >/79 >/80 Tile{ AsIs: e.FuncNamesAsBytes#2/13 } Tile{ AsIs: e.IdentsAsBytes#3/17 } Tile{ AsIs: e.StringsAsBytes#4/21 } </81 & Map/82 Tile{ HalfReuse: & UnBracket/33 AsIs: e.RASLAsWords#5/2 AsIs: >/1 } >/83 </84 Tile{ HalfReuse: & Map/24 AsIs: (/27 } & GenCommand-Globals/85 Tile{ AsIs: e.LabelOffsets#5/30 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Items#1/25 } >/86 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[34]);
  refalrts::alloc_name(vm, context[35], functions[efunc_BytesFromString]);
  refalrts::alloc_chars(vm, context[36], context[37], "RAS", 3);
  refalrts::alloc_chars(vm, context[38], context[39], "ODE", 3);
  refalrts::alloc_close_call(vm, context[40]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::alloc_open_call(vm, context[42]);
  refalrts::alloc_name(vm, context[43], functions[efunc_PutBlock]);
  refalrts::alloc_ident(vm, context[44], identifiers[ident_ConstTable]);
  refalrts::alloc_open_call(vm, context[45]);
  refalrts::alloc_name(vm, context[46], functions[efunc_PutWordLE]);
  refalrts::alloc_close_call(vm, context[47]);
  refalrts::alloc_open_call(vm, context[48]);
  refalrts::alloc_name(vm, context[49], functions[efunc_PutWordLE]);
  refalrts::alloc_close_call(vm, context[50]);
  refalrts::alloc_open_call(vm, context[51]);
  refalrts::alloc_name(vm, context[52], functions[efunc_PutWordLE]);
  refalrts::alloc_close_call(vm, context[53]);
  refalrts::alloc_open_call(vm, context[54]);
  refalrts::alloc_name(vm, context[55], functions[efunc_PutWordLE]);
  refalrts::alloc_close_call(vm, context[56]);
  refalrts::alloc_open_call(vm, context[57]);
  refalrts::alloc_name(vm, context[58], functions[efunc_PutWordLE]);
  refalrts::alloc_number(vm, context[59], 0UL);
  refalrts::alloc_close_call(vm, context[60]);
  refalrts::alloc_open_call(vm, context[61]);
  refalrts::alloc_name(vm, context[62], functions[efunc_PutWordLE]);
  refalrts::alloc_close_call(vm, context[63]);
  refalrts::alloc_open_call(vm, context[64]);
  refalrts::alloc_open_call(vm, context[65]);
  refalrts::alloc_name(vm, context[66], functions[efunc_PutWordLE]);
  refalrts::alloc_close_call(vm, context[67]);
  refalrts::alloc_open_call(vm, context[68]);
  refalrts::alloc_name(vm, context[69], functions[efunc_PutWordLE]);
  refalrts::alloc_close_call(vm, context[70]);
  refalrts::alloc_open_call(vm, context[71]);
  refalrts::alloc_name(vm, context[72], functions[efunc_PutWordLE]);
  refalrts::alloc_open_call(vm, context[73]);
  refalrts::alloc_name(vm, context[74], functions[efunc_Sub]);
  refalrts::alloc_name(vm, context[75], functions[efunc_Mul]);
  refalrts::alloc_number(vm, context[76], 4UL);
  refalrts::copy_stvar(vm, context[77], context[9]);
  refalrts::alloc_close_call(vm, context[78]);
  refalrts::alloc_close_call(vm, context[79]);
  refalrts::alloc_close_call(vm, context[80]);
  refalrts::alloc_open_call(vm, context[81]);
  refalrts::alloc_name(vm, context[82], functions[efunc_Map]);
  refalrts::alloc_close_call(vm, context[83]);
  refalrts::alloc_open_call(vm, context[84]);
  refalrts::alloc_name(vm, context[85], functions[efunc_GenCommandm_Globals]);
  refalrts::alloc_close_call(vm, context[86]);
  refalrts::update_name(context[4], functions[efunc_PutBlock]);
  refalrts::reinit_ident(context[23], identifiers[ident_Start]);
  refalrts::reinit_char(context[16], 'L');
  refalrts::reinit_char(context[19], 'C');
  refalrts::reinit_name(context[28], functions[efunc_PutWordLE]);
  refalrts::reinit_close_call(context[32]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_name(context[33], functions[efunc_UnBracket]);
  refalrts::reinit_name(context[24], functions[efunc_Map]);
  refalrts::push_stack( vm, context[86] );
  refalrts::push_stack( vm, context[84] );
  refalrts::link_brackets( context[27], context[20] );
  refalrts::push_stack( vm, context[83] );
  refalrts::push_stack( vm, context[42] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[81] );
  refalrts::push_stack( vm, context[80] );
  refalrts::push_stack( vm, context[71] );
  refalrts::push_stack( vm, context[79] );
  refalrts::push_stack( vm, context[73] );
  refalrts::push_stack( vm, context[78] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[70] );
  refalrts::push_stack( vm, context[68] );
  refalrts::push_stack( vm, context[67] );
  refalrts::push_stack( vm, context[65] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[64] );
  refalrts::push_stack( vm, context[63] );
  refalrts::push_stack( vm, context[61] );
  refalrts::push_stack( vm, context[60] );
  refalrts::push_stack( vm, context[57] );
  refalrts::push_stack( vm, context[56] );
  refalrts::push_stack( vm, context[54] );
  refalrts::push_stack( vm, context[53] );
  refalrts::push_stack( vm, context[51] );
  refalrts::push_stack( vm, context[50] );
  refalrts::push_stack( vm, context[48] );
  refalrts::push_stack( vm, context[47] );
  refalrts::push_stack( vm, context[45] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[34] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[86], context[86] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[85], context[85] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[83], context[84] );
  res = refalrts::splice_evar( res, context[33], context[1] );
  res = refalrts::splice_evar( res, context[81], context[82] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[75], context[80] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[70], context[74] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[67], context[69] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[65], context[66] );
  res = refalrts::splice_evar( res, context[28], context[32] );
  res = refalrts::splice_evar( res, context[63], context[64] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[56], context[62] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[53], context[55] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[50], context[52] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[47], context[49] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[38], context[46] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[34], context[37] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenProgramm_RASL_A4("GenProgram-RASL=4", 2067244950U, 1894985041U, func_gen_GenProgramm_RASL_A4);


static refalrts::FnResult func_gen_GenProgramm_RASL_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & GenProgram-RASL=3/4 s.Cookie1#1/5 s.Cookie2#1/6 s.FunctionCount#1/7 s.IdentCount#1/8 s.StringCount#1/9 s.ExternalSize#2/10 s.IdentSize#3/11 (/14 e.FuncNamesAsBytes#2/12 )/15 (/18 e.IdentsAsBytes#3/16 )/19 (/22 e.Items#1/20 )/23 (/26 e.RASL#1/24 )/27 s.StringSize#4/28 e.StringsAsBytes#4/2 >/1
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
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  // closed e.FuncNamesAsBytes#2 as range 12
  // closed e.IdentsAsBytes#3 as range 16
  // closed e.Items#1 as range 20
  // closed e.RASL#1 as range 24
  if( ! refalrts::svar_left( context[28], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.StringsAsBytes#4 as range 2
  //DEBUG: s.Cookie1#1: 5
  //DEBUG: s.Cookie2#1: 6
  //DEBUG: s.FunctionCount#1: 7
  //DEBUG: s.IdentCount#1: 8
  //DEBUG: s.StringCount#1: 9
  //DEBUG: s.ExternalSize#2: 10
  //DEBUG: s.IdentSize#3: 11
  //DEBUG: e.FuncNamesAsBytes#2: 12
  //DEBUG: e.IdentsAsBytes#3: 16
  //DEBUG: e.Items#1: 20
  //DEBUG: e.RASL#1: 24
  //DEBUG: s.StringSize#4: 28
  //DEBUG: e.StringsAsBytes#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.StringSize#4/28 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </29 Tile{ HalfReuse: [*]/0 Reuse: & GenProgram-RASL=4/4 AsIs: s.Cookie1#1/5 AsIs: s.Cookie2#1/6 AsIs: s.FunctionCount#1/7 AsIs: s.IdentCount#1/8 AsIs: s.StringCount#1/9 AsIs: s.ExternalSize#2/10 AsIs: s.IdentSize#3/11 HalfReuse: s.StringSize4 #28/14 } (/30 Tile{ AsIs: e.FuncNamesAsBytes#2/12 } Tile{ AsIs: )/15 AsIs: (/18 AsIs: e.IdentsAsBytes#3/16 AsIs: )/19 AsIs: (/22 } Tile{ AsIs: e.StringsAsBytes#4/2 } Tile{ AsIs: )/23 AsIs: (/26 } Tile{ AsIs: e.Items#1/20 } Tile{ AsIs: )/27 } {*}/31 </32 & Assemble/33 Tile{ AsIs: e.RASL#1/24 } >/34 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_unwrapped_closure(vm, context[31], context[0]);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_Assemble]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenProgramm_RASL_A4]);
  refalrts::reinit_svar( context[14], context[28] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[32] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[30], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[31], context[33] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[22] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[31] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenProgramm_RASL_A3("GenProgram-RASL=3", 2067244950U, 1894985041U, func_gen_GenProgramm_RASL_A3);


static refalrts::FnResult func_gen_GenProgramm_RASL_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & GenProgram-RASL=2/4 s.Cookie1#1/5 s.Cookie2#1/6 s.FunctionCount#1/7 s.IdentCount#1/8 s.StringCount#1/9 s.ExternalSize#2/10 (/13 e.FuncNamesAsBytes#2/11 )/14 (/17 e.Items#1/15 )/18 (/21 e.RASL#1/19 )/22 (/25 e.Strings#1/23 )/26 s.IdentSize#3/27 e.IdentsAsBytes#3/2 >/1
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
  // closed e.FuncNamesAsBytes#2 as range 11
  // closed e.Items#1 as range 15
  // closed e.RASL#1 as range 19
  // closed e.Strings#1 as range 23
  if( ! refalrts::svar_left( context[27], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.IdentsAsBytes#3 as range 2
  //DEBUG: s.Cookie1#1: 5
  //DEBUG: s.Cookie2#1: 6
  //DEBUG: s.FunctionCount#1: 7
  //DEBUG: s.IdentCount#1: 8
  //DEBUG: s.StringCount#1: 9
  //DEBUG: s.ExternalSize#2: 10
  //DEBUG: e.FuncNamesAsBytes#2: 11
  //DEBUG: e.Items#1: 15
  //DEBUG: e.RASL#1: 19
  //DEBUG: e.Strings#1: 23
  //DEBUG: s.IdentSize#3: 27
  //DEBUG: e.IdentsAsBytes#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.IdentSize#3/27 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </28 Tile{ HalfReuse: [*]/0 Reuse: & GenProgram-RASL=3/4 AsIs: s.Cookie1#1/5 AsIs: s.Cookie2#1/6 AsIs: s.FunctionCount#1/7 AsIs: s.IdentCount#1/8 AsIs: s.StringCount#1/9 AsIs: s.ExternalSize#2/10 HalfReuse: s.IdentSize3 #27/13 } (/29 Tile{ AsIs: e.FuncNamesAsBytes#2/11 } Tile{ AsIs: )/26 } (/30 Tile{ AsIs: e.IdentsAsBytes#3/2 } Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Items#1/15 AsIs: )/18 AsIs: (/21 AsIs: e.RASL#1/19 AsIs: )/22 HalfReuse: {*}/25 } </31 & Lenw/32 </33 & BytesFromStringList/34 Tile{ AsIs: e.Strings#1/23 } >/35 >/36 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[28]);
  refalrts::alloc_open_bracket(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_Lenw]);
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_BytesFromStringList]);
  refalrts::alloc_close_call(vm, context[35]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenProgramm_RASL_A3]);
  refalrts::reinit_svar( context[13], context[27] );
  refalrts::reinit_unwrapped_closure(context[25], context[0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[30], context[14] );
  refalrts::link_brackets( context[29], context[26] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[31], context[34] );
  res = refalrts::splice_evar( res, context[14], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[25] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenProgramm_RASL_A2("GenProgram-RASL=2", 2067244950U, 1894985041U, func_gen_GenProgramm_RASL_A2);


static refalrts::FnResult func_gen_GenProgramm_RASL_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & GenProgram-RASL=1/4 s.Cookie1#1/5 s.Cookie2#1/6 s.FunctionCount#1/7 s.IdentCount#1/8 s.StringCount#1/9 (/12 e.Items#1/10 )/13 (/16 e.RASL#1/14 )/17 (/20 e.Strings#1/18 )/21 (/24 e.Idents#1/22 )/25 s.ExternalSize#2/26 e.FuncNamesAsBytes#2/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.Items#1 as range 10
  // closed e.RASL#1 as range 14
  // closed e.Strings#1 as range 18
  // closed e.Idents#1 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FuncNamesAsBytes#2 as range 2
  //DEBUG: s.Cookie1#1: 5
  //DEBUG: s.Cookie2#1: 6
  //DEBUG: s.FunctionCount#1: 7
  //DEBUG: s.IdentCount#1: 8
  //DEBUG: s.StringCount#1: 9
  //DEBUG: e.Items#1: 10
  //DEBUG: e.RASL#1: 14
  //DEBUG: e.Strings#1: 18
  //DEBUG: e.Idents#1: 22
  //DEBUG: s.ExternalSize#2: 26
  //DEBUG: e.FuncNamesAsBytes#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </27 Tile{ HalfReuse: [*]/0 Reuse: & GenProgram-RASL=2/4 AsIs: s.Cookie1#1/5 AsIs: s.Cookie2#1/6 AsIs: s.FunctionCount#1/7 AsIs: s.IdentCount#1/8 AsIs: s.StringCount#1/9 } Tile{ AsIs: s.ExternalSize#2/26 } (/28 Tile{ AsIs: e.FuncNamesAsBytes#2/2 } Tile{ AsIs: )/25 } Tile{ AsIs: (/12 AsIs: e.Items#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.RASL#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Strings#1/18 AsIs: )/21 HalfReuse: {*}/24 } </29 & Lenw/30 </31 & BytesFromIdentList/32 Tile{ AsIs: e.Idents#1/22 } >/33 >/34 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_open_bracket(vm, context[28]);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_Lenw]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_BytesFromIdentList]);
  refalrts::alloc_close_call(vm, context[33]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_GenProgramm_RASL_A2]);
  refalrts::reinit_unwrapped_closure(context[24], context[0]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[31] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[28], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  res = refalrts::splice_evar( res, context[12], context[24] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenProgramm_RASL_A1("GenProgram-RASL=1", 2067244950U, 1894985041U, func_gen_GenProgramm_RASL_A1);


static refalrts::FnResult func_GenProgramm_RASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  // </0 & GenProgram-RASL/4 (/7 (/11 # ModuleID/13 s.Cookie1#1/39 s.Cookie2#1/40 )/12 (/16 # CmdFuncArray/18 s.FunctionCount#1/41 e.FuncNames#1/14 )/17 (/21 # CmdIdentArray/23 s.IdentCount#1/42 e.Idents#1/19 )/22 (/26 # CmdStringArray/28 s.StringCount#1/43 e.Strings#1/24 )/27 (/31 # RASL/33 e.RASL#1/29 )/32 (/36 # Items/38 e.Items#1/34 )/37 )/8 >/1
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
  context[13] = refalrts::ident_left( identifiers[ident_ModuleID], context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = refalrts::ident_left( identifiers[ident_CmdFuncArray], context[14], context[15] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[5], context[6] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  context[23] = refalrts::ident_left( identifiers[ident_CmdIdentArray], context[19], context[20] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_left( context[24], context[25], context[5], context[6] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  context[28] = refalrts::ident_left( identifiers[ident_CmdStringArray], context[24], context[25] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[5], context[6] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  context[33] = refalrts::ident_left( identifiers[ident_RASL], context[29], context[30] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  context[34] = 0;
  context[35] = 0;
  context[36] = refalrts::brackets_left( context[34], context[35], context[5], context[6] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[36], context[37]);
  context[38] = refalrts::ident_left( identifiers[ident_Items], context[34], context[35] );
  if( ! context[38] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.RASL#1 as range 29
  // closed e.Items#1 as range 34
  if( ! refalrts::svar_left( context[39], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[40], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[41], context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FuncNames#1 as range 14
  if( ! refalrts::svar_left( context[42], context[19], context[20] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents#1 as range 19
  if( ! refalrts::svar_left( context[43], context[24], context[25] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Strings#1 as range 24
  //DEBUG: e.RASL#1: 29
  //DEBUG: e.Items#1: 34
  //DEBUG: s.Cookie1#1: 39
  //DEBUG: s.Cookie2#1: 40
  //DEBUG: s.FunctionCount#1: 41
  //DEBUG: e.FuncNames#1: 14
  //DEBUG: s.IdentCount#1: 42
  //DEBUG: e.Idents#1: 19
  //DEBUG: s.StringCount#1: 43
  //DEBUG: e.Strings#1: 24

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.FunctionCount#1/41 {REMOVED TILE} {REMOVED TILE} s.IdentCount#1/42 {REMOVED TILE} {REMOVED TILE} # CmdStringArray/28 s.StringCount#1/43 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: [*]/11 HalfReuse: & GenProgram-RASL=1/13 AsIs: s.Cookie1#1/39 AsIs: s.Cookie2#1/40 HalfReuse: s.FunctionCount1 #41/12 HalfReuse: s.IdentCount1 #42/16 HalfReuse: s.StringCount1 #43/18 } Tile{ HalfReuse: (/38 } Tile{ AsIs: e.Items#1/34 } Tile{ HalfReuse: )/31 HalfReuse: (/33 AsIs: e.RASL#1/29 AsIs: )/32 AsIs: (/36 } Tile{ AsIs: e.Strings#1/24 } Tile{ AsIs: )/22 AsIs: (/26 } Tile{ AsIs: e.Idents#1/19 } Tile{ AsIs: )/17 HalfReuse: {*}/21 HalfReuse: </23 } Tile{ HalfReuse: & Lenw/27 } Tile{ AsIs: </0 Reuse: & BytesFromFunctionList/4 } Tile{ AsIs: e.FuncNames#1/14 } Tile{ HalfReuse: >/37 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_closure_head(context[11]);
  refalrts::reinit_name(context[13], functions[efunc_gen_GenProgramm_RASL_A1]);
  refalrts::reinit_svar( context[12], context[41] );
  refalrts::reinit_svar( context[16], context[42] );
  refalrts::reinit_svar( context[18], context[43] );
  refalrts::reinit_open_bracket(context[38]);
  refalrts::reinit_close_bracket(context[31]);
  refalrts::reinit_open_bracket(context[33]);
  refalrts::reinit_unwrapped_closure(context[21], context[11]);
  refalrts::reinit_open_call(context[23]);
  refalrts::reinit_name(context[27], functions[efunc_Lenw]);
  refalrts::update_name(context[4], functions[efunc_BytesFromFunctionList]);
  refalrts::reinit_close_call(context[37]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[26], context[17] );
  refalrts::link_brackets( context[36], context[22] );
  refalrts::link_brackets( context[33], context[32] );
  refalrts::link_brackets( context[38], context[31] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[37];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[17], context[23] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[31], context[36] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[7], context[18] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[21] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenProgramm_RASL("GenProgram-RASL", 0U, 0U, func_GenProgramm_RASL);


static refalrts::FnResult func_gen_BytesFromFunctionList_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & BytesFromFunctionList\1/4 (/7 s.ScopeClass#2/9 e.FuncName#2/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FuncName#2 as range 5
  //DEBUG: s.ScopeClass#2: 9
  //DEBUG: e.FuncName#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & NameWithSign-Bytes/7 AsIs: s.ScopeClass#2/9 AsIs: e.FuncName#2/5 HalfReuse: >/8 } Tile{ ]] }
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_NameWithSignm_Bytes]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BytesFromFunctionList_L1("BytesFromFunctionList\\1", 2067244950U, 1894985041U, func_gen_BytesFromFunctionList_L1);


static refalrts::FnResult func_BytesFromFunctionList(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & BytesFromFunctionList/4 e.FuncNames#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FuncNames#1 as range 2
  //DEBUG: e.FuncNames#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & BytesFromFunctionList\1/4 AsIs: e.FuncNames#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_BytesFromFunctionList_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BytesFromFunctionList("BytesFromFunctionList", 2067244950U, 1894985041U, func_BytesFromFunctionList);


static refalrts::FnResult func_gen_BytesFromIdentList_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & BytesFromIdentList\1/4 (/7 s.IdentId#2/9 e.Ident#2/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Ident#2 as range 5
  //DEBUG: s.IdentId#2: 9
  //DEBUG: e.Ident#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.IdentId#2/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Asciiz/4 HalfReuse: </7 } & DisplayName/10 Tile{ AsIs: e.Ident#2/5 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_DisplayName]);
  refalrts::update_name(context[4], functions[efunc_Asciiz]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BytesFromIdentList_L1("BytesFromIdentList\\1", 2067244950U, 1894985041U, func_gen_BytesFromIdentList_L1);


static refalrts::FnResult func_BytesFromIdentList(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & BytesFromIdentList/4 e.Idents#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Idents#1 as range 2
  //DEBUG: e.Idents#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & BytesFromIdentList\1/4 AsIs: e.Idents#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_BytesFromIdentList_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BytesFromIdentList("BytesFromIdentList", 2067244950U, 1894985041U, func_BytesFromIdentList);


static refalrts::FnResult func_gen_BytesFromStringList_L1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & BytesFromStringList\1\1/4 s.Length#3/5 e.String#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.String#3 as range 2
  //DEBUG: s.Length#3: 5
  //DEBUG: e.String#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutWordLE/4 AsIs: s.Length#3/5 } >/6 </7 & BytesFromString/8 Tile{ AsIs: e.String#3/2 } Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_BytesFromString]);
  refalrts::update_name(context[4], functions[efunc_PutWordLE]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BytesFromStringList_L1L1("BytesFromStringList\\1\\1", 2067244950U, 1894985041U, func_gen_BytesFromStringList_L1L1);


static refalrts::FnResult func_gen_BytesFromStringList_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & BytesFromStringList\1/4 (/7 s.StringId#2/9 e.String#2/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.String#2 as range 5
  //DEBUG: s.StringId#2: 9
  //DEBUG: e.String#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.StringId#2/9 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & Lenw/10 Tile{ AsIs: e.String#2/5 } >/11 Tile{ HalfReuse: & BytesFromStringList\1\1/8 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[10], functions[efunc_Lenw]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_Fetch]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[8], functions[efunc_gen_BytesFromStringList_L1L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_BytesFromStringList_L1("BytesFromStringList\\1", 2067244950U, 1894985041U, func_gen_BytesFromStringList_L1);


static refalrts::FnResult func_BytesFromStringList(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & BytesFromStringList/4 e.Strings#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Strings#1 as range 2
  //DEBUG: e.Strings#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & BytesFromStringList\1/4 AsIs: e.Strings#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_gen_BytesFromStringList_L1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BytesFromStringList("BytesFromStringList", 2067244950U, 1894985041U, func_BytesFromStringList);


static refalrts::FnResult func_BytesFromString(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & BytesFromString/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Ord/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Ord]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BytesFromString("BytesFromString", 2067244950U, 1894985041U, func_BytesFromString);


static refalrts::FnResult func_Asciiz(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Asciiz/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BytesFromString/4 AsIs: e.String#1/2 AsIs: >/1 } 0/5 Tile{ ]] }
  refalrts::alloc_number(vm, context[5], 0UL);
  refalrts::update_name(context[4], functions[efunc_BytesFromString]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Asciiz("Asciiz", 2067244950U, 1894985041U, func_Asciiz);


static refalrts::FnResult func_gen_PutBlock_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PutBlock\1/4 s.Length#2/5 e.Bytes#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Bytes#2 as range 2
  //DEBUG: s.Length#2: 5
  //DEBUG: e.Bytes#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutWordLE/4 AsIs: s.Length#2/5 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Bytes#2/2 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_PutWordLE]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PutBlock_L1("PutBlock\\1", 2067244950U, 1894985041U, func_gen_PutBlock_L1);


static refalrts::FnResult func_PutBlock(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & PutBlock/4 s.Type#1/5 e.Bytes#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Bytes#1 as range 2
  //DEBUG: s.Type#1: 5
  //DEBUG: e.Bytes#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BlockTypeNumber/4 AsIs: s.Type#1/5 } >/6 </7 & Fetch/8 </9 & Lenw/10 Tile{ AsIs: e.Bytes#1/2 } >/11 & PutBlock\1/12 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_close_call(vm, context[6]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_name(vm, context[8], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Lenw]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_gen_PutBlock_L1]);
  refalrts::update_name(context[4], functions[efunc_BlockTypeNumber]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[6] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutBlock("PutBlock", 2067244950U, 1894985041U, func_PutBlock);


static refalrts::FnResult func_gen_PutWordLE_S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & PutWordLE$2=1/4 (/7 e.Bytes#1/5 )/8 (/11 s.ValueHigh#2/13 )/12 s.ValueLow#2/14 >/1
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
  // closed e.Bytes#1 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Bytes#1: 5
  //DEBUG: s.ValueHigh#2: 13
  //DEBUG: s.ValueLow#2: 14

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 {REMOVED TILE} )/12 s.ValueLow#2/14 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutWordLE/4 } Tile{ AsIs: e.Bytes#1/5 } Tile{ HalfReuse: s.ValueLow2 #14/11 AsIs: s.ValueHigh#2/13 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_PutWordLE]);
  refalrts::reinit_svar( context[11], context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PutWordLE_S2A1("PutWordLE$2=1", 2067244950U, 1894985041U, func_gen_PutWordLE_S2A1);


static refalrts::FnResult func_PutWordLE(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & PutWordLE/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PutWordLE/4 e.new#1/2 s.new#2/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & PutWordLE/4 s.1#1/8 s.2#1/9 s.3#1/10 s.4#1/5 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[6], context[7] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //DEBUG: s.4#1: 5
    //DEBUG: s.1#1: 8
    //DEBUG: s.2#1: 9
    //DEBUG: s.3#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & PutWordLE/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.1#1/8 AsIs: s.2#1/9 AsIs: s.3#1/10 AsIs: s.4#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[5] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutWordLE/4 e.Bytes#1/2 s.Value#1/5 >/1
  // closed e.Bytes#1 as range 2
  //DEBUG: s.Value#1: 5
  //DEBUG: e.Bytes#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & PutWordLE$2=1/6 (/7 Tile{ AsIs: e.Bytes#1/2 } )/8 {*}/9 </10 & Divmod/11 Tile{ AsIs: s.Value#1/5 } 256/12 >/13 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_PutWordLE_S2A1]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_close_bracket(vm, context[8]);
  refalrts::alloc_unwrapped_closure(vm, context[9], context[4]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_name(vm, context[11], functions[efunc_Divmod]);
  refalrts::alloc_number(vm, context[12], 256UL);
  refalrts::alloc_close_call(vm, context[13]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[10] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutWordLE("PutWordLE", 2067244950U, 1894985041U, func_PutWordLE);


static refalrts::FnResult func_NameWithSignm_Bytes(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & NameWithSign-Bytes/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NameWithSign-Bytes/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & NameWithSign-Bytes/4 # GN-Entry/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_GNm_Entry], context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Asciiz/4 HalfReuse: '*'/5 } </8 & DisplayName/9 Tile{ AsIs: e.Name#1/6 } >/10 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[8]);
    refalrts::alloc_name(vm, context[9], functions[efunc_DisplayName]);
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_Asciiz]);
    refalrts::reinit_char(context[5], '*');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NameWithSign-Bytes/4 # GN-Local/5 e.Name#1/2 >/1
  if( ! refalrts::ident_term( identifiers[ident_GNm_Local], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Asciiz/4 HalfReuse: '#'/5 } </6 & DisplayName/7 Tile{ AsIs: e.Name#1/2 } >/8 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_DisplayName]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_Asciiz]);
  refalrts::reinit_char(context[5], '#');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameWithSignm_Bytes("NameWithSign-Bytes", 2067244950U, 1894985041U, func_NameWithSignm_Bytes);


static refalrts::FnResult func_GenCommandm_Globals(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & GenCommand-Globals/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenCommand-Globals/4 e.new#1/2 (/7 s.new#2/9 s.new#3/10 e.new#4/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  do {
    // </0 & GenCommand-Globals/4 e.Labels#1/11 (/7 # CmdEnumDescr/9 s.ScopeClass#1/10 e.Name#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdEnumDescr], context[9] ) )
      continue;
    // closed e.Labels#1 as range 11
    // closed e.Name#1 as range 13
    //DEBUG: s.ScopeClass#1: 10
    //DEBUG: e.Labels#1: 11
    //DEBUG: e.Name#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Labels#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutBlock/4 } # EmptyFunction/15 Tile{ HalfReuse: </7 HalfReuse: & NameWithSign-Bytes/9 AsIs: s.ScopeClass#1/10 AsIs: e.Name#1/13 HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[15], identifiers[ident_EmptyFunction]);
    refalrts::update_name(context[4], functions[efunc_PutBlock]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_NameWithSignm_Bytes]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Globals/4 e.Labels-B#1/16 (/22 s.Label#1/24 s.Offset#1/25 )/23 e.Labels-E#1/18 (/7 # CmdInterpretFuncDescr/9 s.ScopeClass#1/10 e.Name#1/13 s.Label#1/15 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdInterpretFuncDescr], context[9] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[13], context[14] ) )
      continue;
    // closed e.Name#1 as range 13
    context[16] = 0;
    context[17] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[18] = context[11];
      context[19] = context[12];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      if( ! refalrts::repeated_stvar_left( vm, context[24], context[15], context[20], context[21] ) )
        continue;
      // closed e.Labels-E#1 as range 18
      if( ! refalrts::svar_left( context[25], context[20], context[21] ) )
        continue;
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      //DEBUG: s.ScopeClass#1: 10
      //DEBUG: s.Label#1: 15
      //DEBUG: e.Name#1: 13
      //DEBUG: e.Labels-B#1: 16
      //DEBUG: e.Labels-E#1: 18
      //DEBUG: s.Offset#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} e.Labels-B#1/16 {REMOVED TILE} s.Label#1/24 {REMOVED TILE} {REMOVED TILE} e.Labels-E#1/18 {REMOVED TILE} {REMOVED TILE} s.Label#1/15 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutBlock/4 } Tile{ HalfReuse: # RefalFunction/23 } Tile{ HalfReuse: </7 HalfReuse: & NameWithSign-Bytes/9 AsIs: s.ScopeClass#1/10 } Tile{ AsIs: e.Name#1/13 } Tile{ HalfReuse: >/22 } </26 & PutWordLE/27 Tile{ AsIs: s.Offset#1/25 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[26]);
      refalrts::alloc_name(vm, context[27], functions[efunc_PutWordLE]);
      refalrts::update_name(context[4], functions[efunc_PutBlock]);
      refalrts::reinit_ident(context[23], identifiers[ident_RefalFunction]);
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[9], functions[efunc_NameWithSignm_Bytes]);
      refalrts::reinit_close_call(context[22]);
      refalrts::reinit_close_call(context[8]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[8] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[7], context[10] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[16], context[17], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Globals/4 e.Labels#1/11 (/7 # CmdSwapDescr/9 s.ScopeClass#1/10 e.Name#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdSwapDescr], context[9] ) )
      continue;
    // closed e.Labels#1 as range 11
    // closed e.Name#1 as range 13
    //DEBUG: s.ScopeClass#1: 10
    //DEBUG: e.Labels#1: 11
    //DEBUG: e.Name#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Labels#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutBlock/4 } # Swap/15 Tile{ HalfReuse: </7 HalfReuse: & NameWithSign-Bytes/9 AsIs: s.ScopeClass#1/10 AsIs: e.Name#1/13 HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[15], identifiers[ident_Swap]);
    refalrts::update_name(context[4], functions[efunc_PutBlock]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_NameWithSignm_Bytes]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Globals/4 e.Labels#1/11 (/7 # CmdConditionFuncDecsrRasl/9 s.ScopeClass#1/10 e.Name#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncDecsrRasl], context[9] ) )
      continue;
    // closed e.Labels#1 as range 11
    // closed e.Name#1 as range 13
    //DEBUG: s.ScopeClass#1: 10
    //DEBUG: e.Labels#1: 11
    //DEBUG: e.Name#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Labels#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutBlock/4 } # ConditionRasl/15 Tile{ HalfReuse: </7 HalfReuse: & NameWithSign-Bytes/9 AsIs: s.ScopeClass#1/10 AsIs: e.Name#1/13 HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[15], identifiers[ident_ConditionRasl]);
    refalrts::update_name(context[4], functions[efunc_PutBlock]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_NameWithSignm_Bytes]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Globals/4 e.Labels#1/11 (/7 # CmdConditionFuncDecsrNative/9 s.ScopeClass#1/10 e.Name#1/13 )/8 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = context[5];
    context[14] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdConditionFuncDecsrNative], context[9] ) )
      continue;
    // closed e.Labels#1 as range 11
    // closed e.Name#1 as range 13
    //DEBUG: s.ScopeClass#1: 10
    //DEBUG: e.Labels#1: 11
    //DEBUG: e.Name#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.Labels#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutBlock/4 } # ConditionNative/15 Tile{ HalfReuse: </7 HalfReuse: & NameWithSign-Bytes/9 AsIs: s.ScopeClass#1/10 AsIs: e.Name#1/13 HalfReuse: >/8 AsIs: >/1 ]] }
    refalrts::alloc_ident(vm, context[15], identifiers[ident_ConditionNative]);
    refalrts::update_name(context[4], functions[efunc_PutBlock]);
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_NameWithSignm_Bytes]);
    refalrts::reinit_close_call(context[8]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenCommand-Globals/4 e.Labels#1/2 (/7 # CmdNativeFuncDescr/9 s.ScopeClass#1/10 e.Name#1/5 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdNativeFuncDescr], context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Labels#1 as range 2
  // closed e.Name#1 as range 5
  //DEBUG: s.ScopeClass#1: 10
  //DEBUG: e.Labels#1: 2
  //DEBUG: e.Name#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Labels#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutBlock/4 } # NativeFunction/11 Tile{ HalfReuse: </7 HalfReuse: & NameWithSign-Bytes/9 AsIs: s.ScopeClass#1/10 AsIs: e.Name#1/5 HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::alloc_ident(vm, context[11], identifiers[ident_NativeFunction]);
  refalrts::update_name(context[4], functions[efunc_PutBlock]);
  refalrts::reinit_open_call(context[7]);
  refalrts::reinit_name(context[9], functions[efunc_NameWithSignm_Bytes]);
  refalrts::reinit_close_call(context[8]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenCommandm_Globals("GenCommand-Globals", 2067244950U, 1894985041U, func_GenCommandm_Globals);


static refalrts::FnResult func_gen_Assemble_A3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Assemble=3/4 s.RaslLength#3/5 (/8 e.Labels#3/6 )/9 e.RASLAsWords#4/2 >/1
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
  // closed e.Labels#3 as range 6
  // closed e.RASLAsWords#4 as range 2
  //DEBUG: s.RaslLength#3: 5
  //DEBUG: e.Labels#3: 6
  //DEBUG: e.RASLAsWords#4: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Assemble=3/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.RaslLength#3/5 AsIs: (/8 AsIs: e.Labels#3/6 AsIs: )/9 } Tile{ AsIs: e.RASLAsWords#4/2 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Assemble_A3("Assemble=3", 2067244950U, 1894985041U, func_gen_Assemble_A3);


static refalrts::FnResult func_gen_Assemble_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Assemble=2/4 (/7 s.RaslLength#3/9 e.Labels#3/5 )/8 e.RASLAsWords#3/2 >/1
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
  // closed e.RASLAsWords#3 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Labels#3 as range 5
  //DEBUG: e.RASLAsWords#3: 2
  //DEBUG: s.RaslLength#3: 9
  //DEBUG: e.Labels#3: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & Assemble=3/7 AsIs: s.RaslLength#3/9 } (/10 e.Labels#3/5/11 )/13 {*}/14 </15 & ResolveLabeledDestinations/16 (/17 Tile{ AsIs: e.Labels#3/5 } Tile{ AsIs: )/8 AsIs: e.RASLAsWords#3/2 AsIs: >/1 } >/18 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::copy_evar(vm, context[11], context[12], context[5], context[6]);
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::alloc_unwrapped_closure(vm, context[14], context[4]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_ResolveLabeledDestinations]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::reinit_closure_head(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_gen_Assemble_A3]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[17], context[8] );
  refalrts::link_brackets( context[10], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Assemble_A2("Assemble=2", 2067244950U, 1894985041U, func_gen_Assemble_A2);


static refalrts::FnResult func_gen_Assemble_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Assemble=1/4 e.RASLAsWords#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.RASLAsWords#2 as range 2
  //DEBUG: e.RASLAsWords#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Assemble=2/6 Tile{ AsIs: </0 Reuse: & CalcLabelsOffsets/4 AsIs: e.RASLAsWords#2/2 AsIs: >/1 } >/7 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Assemble_A2]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_CalcLabelsOffsets]);
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

static refalrts::NativeReference nat_ref_gen_Assemble_A1("Assemble=1", 2067244950U, 1894985041U, func_gen_Assemble_A1);


static refalrts::FnResult func_Assemble(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Assemble/4 e.RASL#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.RASL#1 as range 2
  //DEBUG: e.RASL#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Assemble=1/6 </7 Tile{ HalfReuse: & Map/0 Reuse: & GenCommand-RASL/4 AsIs: e.RASL#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_gen_Assemble_A1]);
  refalrts::alloc_open_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::reinit_name(context[0], functions[efunc_Map]);
  refalrts::update_name(context[4], functions[efunc_GenCommandm_RASL]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Assemble("Assemble", 2067244950U, 1894985041U, func_Assemble);


static refalrts::FnResult func_gen_GenCommandm_RASL_S33L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & GenCommand-RASL$33\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenCommand-RASL$33\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenCommand-RASL$33\1/4 # ARG-BEGIN/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ARGm_BEGIN], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 Reuse: # CmdSetResArgBegin/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_PutCommand]);
    refalrts::update_ident(context[5], identifiers[ident_CmdSetResArgBegin]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL$33\1/4 # RIGHT-EDGE/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 Reuse: # CmdSetResRightEdge/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_PutCommand]);
    refalrts::update_ident(context[5], identifiers[ident_CmdSetResRightEdge]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenCommand-RASL$33\1/4 s.Offset#2/5 >/1
  //DEBUG: s.Offset#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & PutCommand/7 # CmdSetRes/8 Tile{ HalfReuse: 0/0 HalfReuse: 0/4 AsIs: s.Offset#2/5 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_PutCommand]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_CmdSetRes]);
  refalrts::reinit_number(context[0], 0UL);
  refalrts::reinit_number(context[4], 0UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenCommandm_RASL_S33L1("GenCommand-RASL$33\\1", 2067244950U, 1894985041U, func_gen_GenCommandm_RASL_S33L1);


static refalrts::FnResult func_gen_GenCommandm_RASL_S50L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & GenCommand-RASL$50\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenCommand-RASL$50\1/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenCommand-RASL$50\1/4 # LEFT-EDGE/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 Reuse: # CmdTrashLeftEdge/5 AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_PutCommand]);
    refalrts::update_ident(context[5], identifiers[ident_CmdTrashLeftEdge]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenCommand-RASL$50\1/4 s.Offset#2/5 >/1
  //DEBUG: s.Offset#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & PutCommand/7 # CmdTrash/8 Tile{ HalfReuse: 0/0 HalfReuse: 0/4 AsIs: s.Offset#2/5 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_PutCommand]);
  refalrts::alloc_ident(vm, context[8], identifiers[ident_CmdTrash]);
  refalrts::reinit_number(context[0], 0UL);
  refalrts::reinit_number(context[4], 0UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenCommandm_RASL_S50L1("GenCommand-RASL$50\\1", 2067244950U, 1894985041U, func_gen_GenCommandm_RASL_S50L1);


static refalrts::FnResult func_GenCommandm_RASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & GenCommand-RASL/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenCommand-RASL/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
  // closed e.new#2 as range 5
  do {
    // </0 & GenCommand-RASL/4 (/7 # LABEL/9 s.Label#1/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_LABEL], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Label#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenCommand-RASL/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # LABEL/9 AsIs: s.Label#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 s.new#3/9 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & GenCommand-RASL/4 (/7 # CmdProfileFunction/9 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdProfileFunction], context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdProfileFunction/7 HalfReuse: >/9 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdProfileFunction]);
      refalrts::reinit_close_call(context[9]);
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-RASL/4 (/7 # CmdLoadConstants/9 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdLoadConstants], context[9] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdLoadConstants/7 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_PutCommand]);
    refalrts::reinit_ident(context[7], identifiers[ident_CmdLoadConstants]);
    refalrts::reinit_close_call(context[9]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 s.new#3/9 s.new#4/12 e.new#5/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    // closed e.new#5 as range 10
    do {
      // </0 & GenCommand-RASL/4 (/7 s.new#6/9 s.new#7/12 )/8 >/1
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdIssueMemory/9 s.Memory#1/12 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdIssueMemory], context[9] ) )
          continue;
        //DEBUG: s.Memory#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & PutCommand/7 AsIs: # CmdIssueMemory/9 AsIs: s.Memory#1/12 HalfReuse: 0/8 HalfReuse: 0/1 } Tile{ HalfReuse: >/0 } Tile{ ]] }
        refalrts::reinit_open_call(context[4]);
        refalrts::reinit_name(context[7], functions[efunc_PutCommand]);
        refalrts::reinit_number(context[8], 0UL);
        refalrts::reinit_number(context[1], 0UL);
        refalrts::reinit_close_call(context[0]);
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[4], context[1] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-RASL/4 (/7 # CmdReserveBacktrackStack/9 s.Depth#1/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdReserveBacktrackStack], context[9] ) )
        continue;
      //DEBUG: s.Depth#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & PutCommand/7 AsIs: # CmdReserveBacktrackStack/9 AsIs: s.Depth#1/12 HalfReuse: 0/8 HalfReuse: 0/1 } Tile{ HalfReuse: >/0 } Tile{ ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_PutCommand]);
      refalrts::reinit_number(context[8], 0UL);
      refalrts::reinit_number(context[1], 0UL);
      refalrts::reinit_close_call(context[0]);
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[4], context[1] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-RASL/4 (/7 # CmdOnFailGoTo/9 s.Offset#1/12 # Func$_name:/15 e.FuncName#1/13 )/8 >/1
    context[13] = context[10];
    context[14] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_CmdOnFailGoTo], context[9] ) )
      continue;
    context[15] = refalrts::ident_left( identifiers[ident_Funck32_namek58_], context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.FuncName#1 as range 13
    //DEBUG: s.Offset#1: 12
    //DEBUG: e.FuncName#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenCommand-RASL/4 {REMOVED TILE} # Func$_name:/15 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdOnFailGoTo/9 AsIs: s.Offset#1/12 } Tile{ AsIs: e.FuncName#1/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 s.new#3/9 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & GenCommand-RASL/4 (/7 # CmdProfilerStopSentence/9 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdProfilerStopSentence], context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdProfilerStopSentence/7 HalfReuse: >/9 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdProfilerStopSentence]);
      refalrts::reinit_close_call(context[9]);
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-RASL/4 (/7 # CmdInitB0/9 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdInitB0], context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdInitB0/7 HalfReuse: >/9 } Tile{ ]] }
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdInitB0]);
      refalrts::reinit_close_call(context[9]);
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-RASL/4 (/7 # CmdInitB0-Lite/9 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdInitB0m_Lite], context[9] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdInitB0-Lite/7 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_PutCommand]);
    refalrts::reinit_ident(context[7], identifiers[ident_CmdInitB0m_Lite]);
    refalrts::reinit_close_call(context[9]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 s.new#3/9 s.new#4/12 s.new#5/13 e.new#6/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    // closed e.new#6 as range 10
    do {
      // </0 & GenCommand-RASL/4 (/7 s.new#7/9 s.new#8/12 s.new#9/13 s.new#10/16 e.new#11/14 )/8 >/1
      context[14] = context[10];
      context[15] = context[11];
      if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
        continue;
      // closed e.new#11 as range 14
      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdChar/9 s.Direction#1/12 s.BracketNumber#1/13 s.Char#1/16 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdChar], context[9] ) )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.BracketNumber#1: 13
        //DEBUG: s.Char#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdChar/9 AsIs: s.Direction#1/12 } )/17 0/18 </19 & Ord/20 Tile{ AsIs: s.Char#1/16 } >/21 Tile{ HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[17]);
        refalrts::alloc_number(vm, context[18], 0UL);
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_Ord]);
        refalrts::alloc_close_call(vm, context[21]);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[21] );
        refalrts::push_stack( vm, context[19] );
        refalrts::link_brackets( context[7], context[17] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[21], context[21] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[17], context[20] );
        refalrts::splice_to_freelist_open( vm, context[12], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdCharSave/9 s.Direction#1/12 s.BracketNumber#1/13 s.SaveOffset#1/16 s.Char#1/19 )/8 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_CmdCharSave], context[9] ) )
          continue;
        if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.BracketNumber#1: 13
        //DEBUG: s.SaveOffset#1: 16
        //DEBUG: s.Char#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdCharSave/9 AsIs: s.Direction#1/12 } )/20 Tile{ AsIs: s.SaveOffset#1/16 } </21 & Ord/22 Tile{ AsIs: s.Char#1/19 } >/23 Tile{ HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[20]);
        refalrts::alloc_open_call(vm, context[21]);
        refalrts::alloc_name(vm, context[22], functions[efunc_Ord]);
        refalrts::alloc_close_call(vm, context[23]);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[21] );
        refalrts::link_brackets( context[7], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[21], context[22] );
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        refalrts::splice_to_freelist_open( vm, context[12], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdNumber/9 s.Direction#1/12 s.BracketNumber#1/13 s.Number#1/16 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdNumber], context[9] ) )
          continue;
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.BracketNumber#1: 13
        //DEBUG: s.Number#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdNumber/9 AsIs: s.Direction#1/12 } )/17 0/18 Tile{ AsIs: s.Number#1/16 HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[17]);
        refalrts::alloc_number(vm, context[18], 0UL);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[17] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::splice_to_freelist_open( vm, context[12], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdNumberSave/9 s.Direction#1/12 s.BracketNumber#1/13 s.SaveOffset#1/16 s.Number#1/19 )/8 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_CmdNumberSave], context[9] ) )
          continue;
        if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
          continue;
        if( ! refalrts::empty_seq( context[17], context[18] ) )
          continue;
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.BracketNumber#1: 13
        //DEBUG: s.SaveOffset#1: 16
        //DEBUG: s.Number#1: 19

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdNumberSave/9 AsIs: s.Direction#1/12 } )/20 Tile{ AsIs: s.SaveOffset#1/16 AsIs: s.Number#1/19 HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[20]);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[20], context[20] );
        refalrts::splice_to_freelist_open( vm, context[12], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdName/9 s.Direction#1/12 s.BracketNumber#1/13 s.NameId#1/16 e.Name#1/17 )/8 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_CmdName], context[9] ) )
          continue;
        // closed e.Name#1 as range 17
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.BracketNumber#1: 13
        //DEBUG: s.NameId#1: 16
        //DEBUG: e.Name#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE} e.Name#1/17 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdName/9 AsIs: s.Direction#1/12 } )/19 0/20 Tile{ AsIs: s.NameId#1/16 } Tile{ HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[19]);
        refalrts::alloc_number(vm, context[20], 0UL);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::splice_to_freelist_open( vm, context[12], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdNameSave/9 s.Direction#1/12 s.BracketNumber#1/13 s.SaveOffset#1/16 s.NameId#1/19 e.Name#1/17 )/8 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_CmdNameSave], context[9] ) )
          continue;
        if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
          continue;
        // closed e.Name#1 as range 17
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.BracketNumber#1: 13
        //DEBUG: s.SaveOffset#1: 16
        //DEBUG: s.NameId#1: 19
        //DEBUG: e.Name#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE} e.Name#1/17 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdNameSave/9 AsIs: s.Direction#1/12 } )/20 Tile{ AsIs: s.SaveOffset#1/16 AsIs: s.NameId#1/19 } Tile{ HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[20]);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[16], context[19] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        refalrts::splice_to_freelist_open( vm, context[12], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdIdent/9 s.Direction#1/12 s.BracketNumber#1/13 s.NameId#1/16 e.Name#1/17 )/8 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_CmdIdent], context[9] ) )
          continue;
        // closed e.Name#1 as range 17
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.BracketNumber#1: 13
        //DEBUG: s.NameId#1: 16
        //DEBUG: e.Name#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE} e.Name#1/17 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdIdent/9 AsIs: s.Direction#1/12 } )/19 0/20 Tile{ AsIs: s.NameId#1/16 } Tile{ HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[19]);
        refalrts::alloc_number(vm, context[20], 0UL);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[19], context[20] );
        refalrts::splice_to_freelist_open( vm, context[12], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdIdentSave/9 s.Direction#1/12 s.BracketNumber#1/13 s.SaveOffset#1/16 s.NameId#1/19 e.Name#1/17 )/8 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_CmdIdentSave], context[9] ) )
          continue;
        if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
          continue;
        // closed e.Name#1 as range 17
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.BracketNumber#1: 13
        //DEBUG: s.SaveOffset#1: 16
        //DEBUG: s.NameId#1: 19
        //DEBUG: e.Name#1: 17

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE} e.Name#1/17 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdIdentSave/9 AsIs: s.Direction#1/12 } )/20 Tile{ AsIs: s.SaveOffset#1/16 AsIs: s.NameId#1/19 } Tile{ HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[20]);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[20] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[16], context[19] );
        res = refalrts::splice_evar( res, context[20], context[20] );
        refalrts::splice_to_freelist_open( vm, context[12], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 s.new#12/9 s.new#13/12 s.new#14/13 s.new#15/16 )/8 >/1
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        do {
          // </0 & GenCommand-RASL/4 (/7 # CmdBrackets/9 s.Direction#1/12 s.Num#1/13 s.NumRanges#1/16 )/8 >/1
          if( ! refalrts::ident_term( identifiers[ident_CmdBrackets], context[9] ) )
            continue;
          //DEBUG: s.Direction#1: 12
          //DEBUG: s.Num#1: 13
          //DEBUG: s.NumRanges#1: 16

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.Num#1/13 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdBrackets/9 AsIs: s.Direction#1/12 } )/17 0/18 Tile{ AsIs: s.NumRanges#1/16 HalfReuse: s.Num1 #13/8 AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[17]);
          refalrts::alloc_number(vm, context[18], 0UL);
          refalrts::update_name(context[4], functions[efunc_PutCommand]);
          refalrts::reinit_svar( context[8], context[13] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[17] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[17], context[18] );
          refalrts::splice_to_freelist_open( vm, context[12], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & GenCommand-RASL/4 (/7 # CmdBracketsSave/9 s.Direction#1/12 s.Num#1/13 s.NumRanges#1/16 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdBracketsSave], context[9] ) )
          continue;
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.Num#1: 13
        //DEBUG: s.NumRanges#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Num#1/13 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdBracketsSave/9 AsIs: s.Direction#1/12 } )/17 0/18 Tile{ AsIs: s.NumRanges#1/16 HalfReuse: s.Num1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[17]);
        refalrts::alloc_number(vm, context[18], 0UL);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[17] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[17], context[18] );
        refalrts::splice_to_freelist_open( vm, context[12], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 s.new#12/9 s.new#13/12 s.new#14/13 s.new#15/16 s.new#16/19 e.new#17/17 )/8 >/1
        context[17] = context[14];
        context[18] = context[15];
        if( ! refalrts::svar_left( context[19], context[17], context[18] ) )
          continue;
        // closed e.new#17 as range 17
        do {
          // </0 & GenCommand-RASL/4 (/7 # CmdADT/9 s.Direction#1/12 s.BracketNumber#1/13 s.InnerBrackets#1/16 s.NameId#1/19 e.Name#1/20 )/8 >/1
          context[20] = context[17];
          context[21] = context[18];
          if( ! refalrts::ident_term( identifiers[ident_CmdADT], context[9] ) )
            continue;
          // closed e.Name#1 as range 20
          //DEBUG: s.Direction#1: 12
          //DEBUG: s.BracketNumber#1: 13
          //DEBUG: s.InnerBrackets#1: 16
          //DEBUG: s.NameId#1: 19
          //DEBUG: e.Name#1: 20

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE} {REMOVED TILE} e.Name#1/20 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdADT/9 AsIs: s.Direction#1/12 } )/22 Tile{ AsIs: s.NameId#1/19 } Tile{ AsIs: s.InnerBrackets#1/16 } Tile{ HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
          refalrts::alloc_close_bracket(vm, context[22]);
          refalrts::update_name(context[4], functions[efunc_PutCommand]);
          refalrts::reinit_svar( context[8], context[13] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[22] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[8];
          res = refalrts::splice_evar( res, context[16], context[16] );
          res = refalrts::splice_evar( res, context[19], context[19] );
          res = refalrts::splice_evar( res, context[22], context[22] );
          refalrts::splice_to_freelist_open( vm, context[12], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & GenCommand-RASL/4 (/7 # CmdADTSave/9 s.Direction#1/12 s.BracketNumber#1/13 s.InnerBrackets#1/16 s.NameId#1/19 e.Name#1/20 )/8 >/1
        context[20] = context[17];
        context[21] = context[18];
        if( ! refalrts::ident_term( identifiers[ident_CmdADTSave], context[9] ) )
          continue;
        // closed e.Name#1 as range 20
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.BracketNumber#1: 13
        //DEBUG: s.InnerBrackets#1: 16
        //DEBUG: s.NameId#1: 19
        //DEBUG: e.Name#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE} {REMOVED TILE} e.Name#1/20 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdADTSave/9 AsIs: s.Direction#1/12 } )/22 Tile{ AsIs: s.NameId#1/19 } Tile{ AsIs: s.InnerBrackets#1/16 } Tile{ HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[16], context[16] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[22], context[22] );
        refalrts::splice_to_freelist_open( vm, context[12], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-RASL/4 (/7 # CmdCallSave/9 s.Direction#1/12 s.BracketNumber#1/13 s.InnerBrackets#1/16 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdCallSave], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //DEBUG: s.Direction#1: 12
      //DEBUG: s.BracketNumber#1: 13
      //DEBUG: s.InnerBrackets#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 AsIs: # CmdCallSave/9 AsIs: s.Direction#1/12 } )/17 0/18 Tile{ AsIs: s.InnerBrackets#1/16 HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[17]);
      refalrts::alloc_number(vm, context[18], 0UL);
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_svar( context[8], context[13] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[12], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-RASL/4 (/7 # CmdEmpty/9 s.Direction#1/12 s.Num#1/13 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdEmpty], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      //DEBUG: s.Direction#1: 12
      //DEBUG: s.Num#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Direction#1/12 s.Num#1/13 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdEmpty/7 HalfReuse: 0/9 } 0/14 Tile{ HalfReuse: s.Num1 #13/8 AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[14], 0UL);
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdEmpty]);
      refalrts::reinit_number(context[9], 0UL);
      refalrts::reinit_svar( context[8], context[13] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[14], context[14] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-RASL/4 (/7 s.new#7/9 s.new#8/12 s.new#9/13 e.new#10/14 s.new#11/17 s.new#12/16 )/8 >/1
      context[14] = context[10];
      context[15] = context[11];
      if( ! refalrts::svar_right( context[16], context[14], context[15] ) )
        continue;
      if( ! refalrts::svar_right( context[17], context[14], context[15] ) )
        continue;
      // closed e.new#10 as range 14
      do {
        // </0 & GenCommand-RASL/4 (/7 s.new#13/9 s.new#14/12 s.new#15/13 s.new#17/17 s.new#16/16 )/8 >/1
        if( ! refalrts::empty_seq( context[14], context[15] ) )
          continue;
        do {
          // </0 & GenCommand-RASL/4 (/7 # CmdVar/9 s.Direction#1/12 s.BracketNumber#1/13 s.Mode#1/17 s.VarNumber#1/16 )/8 >/1
          if( ! refalrts::ident_term( identifiers[ident_CmdVar], context[9] ) )
            continue;
          //DEBUG: s.Direction#1: 12
          //DEBUG: s.BracketNumber#1: 13
          //DEBUG: s.Mode#1: 17
          //DEBUG: s.VarNumber#1: 16

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.BracketNumber#1/13 s.Mode#1/17 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 HalfReuse: s.Mode1 #17/9 } # CmdVar/18 Tile{ AsIs: s.Direction#1/12 } )/19 0/20 Tile{ AsIs: s.VarNumber#1/16 HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
          refalrts::alloc_ident(vm, context[18], identifiers[ident_CmdVar]);
          refalrts::alloc_close_bracket(vm, context[19]);
          refalrts::alloc_number(vm, context[20], 0UL);
          refalrts::update_name(context[4], functions[efunc_PutCommand]);
          refalrts::reinit_svar( context[9], context[17] );
          refalrts::reinit_svar( context[8], context[13] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[19] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[16];
          res = refalrts::splice_evar( res, context[19], context[20] );
          res = refalrts::splice_evar( res, context[12], context[12] );
          res = refalrts::splice_evar( res, context[18], context[18] );
          refalrts::splice_to_freelist_open( vm, context[9], res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & GenCommand-RASL/4 (/7 # CmdVarSave/9 s.Direction#1/12 s.BracketNumber#1/13 s.Mode#1/17 s.VarNumber#1/16 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdVarSave], context[9] ) )
          continue;
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.BracketNumber#1: 13
        //DEBUG: s.Mode#1: 17
        //DEBUG: s.VarNumber#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.BracketNumber#1/13 s.Mode#1/17 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 HalfReuse: s.Mode1 #17/9 } # CmdVarSave/18 Tile{ AsIs: s.Direction#1/12 } )/19 0/20 Tile{ AsIs: s.VarNumber#1/16 HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[18], identifiers[ident_CmdVarSave]);
        refalrts::alloc_close_bracket(vm, context[19]);
        refalrts::alloc_number(vm, context[20], 0UL);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[9], context[17] );
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[19], context[20] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdRepeated/9 s.Direction#1/12 s.BracketNumber#1/13 s.Mode#1/20 s.VarNumber#1/17 s.SampleNumber#1/16 )/8 >/1
        context[18] = context[14];
        context[19] = context[15];
        if( ! refalrts::ident_term( identifiers[ident_CmdRepeated], context[9] ) )
          continue;
        if( ! refalrts::svar_left( context[20], context[18], context[19] ) )
          continue;
        if( ! refalrts::empty_seq( context[18], context[19] ) )
          continue;
        //DEBUG: s.Direction#1: 12
        //DEBUG: s.BracketNumber#1: 13
        //DEBUG: s.VarNumber#1: 17
        //DEBUG: s.SampleNumber#1: 16
        //DEBUG: s.Mode#1: 20

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.BracketNumber#1/13 s.Mode#1/20 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 HalfReuse: s.Mode1 #20/9 } # CmdRepeated/21 Tile{ AsIs: s.Direction#1/12 } )/22 Tile{ AsIs: s.VarNumber#1/17 AsIs: s.SampleNumber#1/16 HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
        refalrts::alloc_ident(vm, context[21], identifiers[ident_CmdRepeated]);
        refalrts::alloc_close_bracket(vm, context[22]);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[9], context[20] );
        refalrts::reinit_svar( context[8], context[13] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[22] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[17];
        res = refalrts::splice_evar( res, context[22], context[22] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[21], context[21] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-RASL/4 (/7 # CmdRepeatedTVarSave/9 s.Direction#1/12 s.BracketNumber#1/13 s.VarNumber#1/17 s.SampleNumber#1/16 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdRepeatedTVarSave], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      //DEBUG: s.Direction#1: 12
      //DEBUG: s.BracketNumber#1: 13
      //DEBUG: s.VarNumber#1: 17
      //DEBUG: s.SampleNumber#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.BracketNumber#1/13 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 HalfReuse: 't'/9 } # CmdRepeatedSave/18 Tile{ AsIs: s.Direction#1/12 } )/19 Tile{ AsIs: s.VarNumber#1/17 AsIs: s.SampleNumber#1/16 HalfReuse: s.BracketNumber1 #13/8 AsIs: >/1 ]] }
      refalrts::alloc_ident(vm, context[18], identifiers[ident_CmdRepeatedSave]);
      refalrts::alloc_close_bracket(vm, context[19]);
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_char(context[9], 't');
      refalrts::reinit_svar( context[8], context[13] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[17];
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-RASL/4 (/7 s.new#7/9 s.new#8/12 s.new#9/13 )/8 >/1
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    do {
      // </0 & GenCommand-RASL/4 (/7 # CmdEPrepare/9 s.BracketNumber#1/12 s.VarNumber#1/13 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdEPrepare], context[9] ) )
        continue;
      //DEBUG: s.BracketNumber#1: 12
      //DEBUG: s.VarNumber#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.BracketNumber#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdEPrepare/7 HalfReuse: 0/9 } Tile{ AsIs: s.VarNumber#1/13 HalfReuse: s.BracketNumber1 #12/8 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdEPrepare]);
      refalrts::reinit_number(context[9], 0UL);
      refalrts::reinit_svar( context[8], context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-RASL/4 (/7 # CmdEStart/9 s.BracketNumber#1/12 s.VarNumber#1/13 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdEStart], context[9] ) )
        continue;
      //DEBUG: s.BracketNumber#1: 12
      //DEBUG: s.VarNumber#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.BracketNumber#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdEStart/7 HalfReuse: 0/9 } Tile{ AsIs: s.VarNumber#1/13 HalfReuse: s.BracketNumber1 #12/8 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdEStart]);
      refalrts::reinit_number(context[9], 0UL);
      refalrts::reinit_svar( context[8], context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-RASL/4 (/7 # CmdSave/9 s.OldBracketNumber#1/12 s.NewBracketNumber#1/13 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdSave], context[9] ) )
        continue;
      //DEBUG: s.OldBracketNumber#1: 12
      //DEBUG: s.NewBracketNumber#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.OldBracketNumber#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdSave/7 HalfReuse: 0/9 } Tile{ AsIs: s.NewBracketNumber#1/13 HalfReuse: s.OldBracketNumber1 #12/8 AsIs: >/1 ]] }
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdSave]);
      refalrts::reinit_number(context[9], 0UL);
      refalrts::reinit_svar( context[8], context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-RASL/4 (/7 # CmdVariableDebugTable/9 s.StringId#1/12 s.Offset#1/13 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdVariableDebugTable], context[9] ) )
      continue;
    //DEBUG: s.StringId#1: 12
    //DEBUG: s.Offset#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.StringId#1/12 s.Offset#1/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdVariableDebugOffset/7 HalfReuse: s.StringId1 #12/9 } 0/14 Tile{ HalfReuse: s.Offset1 #13/8 AsIs: >/1 ]] }
    refalrts::alloc_number(vm, context[14], 0UL);
    refalrts::update_name(context[4], functions[efunc_PutCommand]);
    refalrts::reinit_ident(context[7], identifiers[ident_CmdVariableDebugOffset]);
    refalrts::reinit_svar( context[9], context[12] );
    refalrts::reinit_svar( context[8], context[13] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 # CmdResetAllocator/9 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdResetAllocator], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdResetAllocator/7 HalfReuse: 0/9 HalfReuse: 0/8 HalfReuse: 0/1 } >/10 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_PutCommand]);
    refalrts::reinit_ident(context[7], identifiers[ident_CmdResetAllocator]);
    refalrts::reinit_number(context[9], 0UL);
    refalrts::reinit_number(context[8], 0UL);
    refalrts::reinit_number(context[1], 0UL);
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 s.new#3/9 s.new#4/12 e.new#5/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    // closed e.new#5 as range 10
    do {
      // </0 & GenCommand-RASL/4 (/7 # CmdSetRes/9 s.Offset#1/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdSetRes], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      //DEBUG: s.Offset#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenCommand-RASL/4 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: s.Offset#1/12 HalfReuse: & GenCommand-RASL$33\1/8 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[7]);
      refalrts::reinit_name(context[9], functions[efunc_Fetch]);
      refalrts::reinit_name(context[8], functions[efunc_gen_GenCommandm_RASL_S33L1]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-RASL/4 (/7 s.new#6/9 s.new#7/12 s.new#8/15 e.new#9/13 )/8 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      // closed e.new#9 as range 13
      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdCopyVar/9 s.new#10/12 s.new#11/15 s.new#12/18 )/8 >/1
        context[16] = context[13];
        context[17] = context[14];
        if( ! refalrts::ident_term( identifiers[ident_CmdCopyVar], context[9] ) )
          continue;
        if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
          continue;
        if( ! refalrts::empty_seq( context[16], context[17] ) )
          continue;
        do {
          // </0 & GenCommand-RASL/4 (/7 # CmdCopyVar/9 'e'/12 s.Target#1/15 s.Sample#1/18 )/8 >/1
          if( ! refalrts::char_term( 'e', context[12] ) )
            continue;
          //DEBUG: s.Target#1: 15
          //DEBUG: s.Sample#1: 18

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 & GenCommand-RASL/4 {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & PutCommand/9 HalfReuse: # CmdCopyEVar/12 AsIs: s.Target#1/15 AsIs: s.Sample#1/18 HalfReuse: 0/8 AsIs: >/1 ]] }
          refalrts::reinit_open_call(context[7]);
          refalrts::reinit_name(context[9], functions[efunc_PutCommand]);
          refalrts::reinit_ident(context[12], identifiers[ident_CmdCopyEVar]);
          refalrts::reinit_number(context[8], 0UL);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[7] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[7];
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & GenCommand-RASL/4 (/7 # CmdCopyVar/9 s.Mode#1/12 s.Target#1/15 s.Sample#1/18 )/8 >/1
        //DEBUG: s.Mode#1: 12
        //DEBUG: s.Target#1: 15
        //DEBUG: s.Sample#1: 18

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} # CmdCopyVar/9 s.Mode#1/12 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdCopySTVar/7 } Tile{ AsIs: s.Target#1/15 AsIs: s.Sample#1/18 HalfReuse: 0/8 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_ident(context[7], identifiers[ident_CmdCopySTVar]);
        refalrts::reinit_number(context[8], 0UL);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[15];
        refalrts::splice_to_freelist_open( vm, context[7], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdReinitSVar/9 s.Offset#1/12 s.Sample#1/15 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdReinitSVar], context[9] ) )
          continue;
        if( ! refalrts::empty_seq( context[13], context[14] ) )
          continue;
        //DEBUG: s.Offset#1: 12
        //DEBUG: s.Sample#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Offset#1/12 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdReinitSVar/7 HalfReuse: 0/9 } Tile{ AsIs: s.Sample#1/15 HalfReuse: s.Offset1 #12/8 AsIs: >/1 ]] }
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_ident(context[7], identifiers[ident_CmdReinitSVar]);
        refalrts::reinit_number(context[9], 0UL);
        refalrts::reinit_svar( context[8], context[12] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[15];
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdCreateElem/9 s.CreateMode#1/12 s.ElemNumber#1/15 s.ElementType#1/18 e.Info#1/16 )/8 >/1
        context[16] = context[13];
        context[17] = context[14];
        if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[9] ) )
          continue;
        if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
          continue;
        // closed e.Info#1 as range 16
        //DEBUG: s.CreateMode#1: 12
        //DEBUG: s.ElemNumber#1: 15
        //DEBUG: s.ElementType#1: 18
        //DEBUG: e.Info#1: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.CreateMode#1/12 s.ElemNumber#1/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 HalfReuse: s.CreateMode1 #12/9 } </19 & CreateCommandTag/20 s.ElementType#1/18/21 >/22 )/23 0/24 </25 & CreateCommandInfo/26 Tile{ AsIs: s.ElementType#1/18 AsIs: e.Info#1/16 HalfReuse: >/8 HalfReuse: s.ElemNumber1 #15/1 } >/27 Tile{ ]] }
        refalrts::alloc_open_call(vm, context[19]);
        refalrts::alloc_name(vm, context[20], functions[efunc_CreateCommandTag]);
        refalrts::copy_stvar(vm, context[21], context[18]);
        refalrts::alloc_close_call(vm, context[22]);
        refalrts::alloc_close_bracket(vm, context[23]);
        refalrts::alloc_number(vm, context[24], 0UL);
        refalrts::alloc_open_call(vm, context[25]);
        refalrts::alloc_name(vm, context[26], functions[efunc_CreateCommandInfo]);
        refalrts::alloc_close_call(vm, context[27]);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_svar( context[9], context[12] );
        refalrts::reinit_close_call(context[8]);
        refalrts::reinit_svar( context[1], context[15] );
        refalrts::push_stack( vm, context[27] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[25] );
        refalrts::link_brackets( context[7], context[23] );
        refalrts::push_stack( vm, context[22] );
        refalrts::push_stack( vm, context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[27], context[27] );
        res = refalrts::splice_evar( res, context[18], context[1] );
        res = refalrts::splice_evar( res, context[19], context[26] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-RASL/4 (/7 # CmdLinkBrackets/9 s.Left#1/12 s.Right#1/15 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdLinkBrackets], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      //DEBUG: s.Left#1: 12
      //DEBUG: s.Right#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & PutCommand/7 AsIs: # CmdLinkBrackets/9 AsIs: s.Left#1/12 AsIs: s.Right#1/15 HalfReuse: 0/8 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[7], functions[efunc_PutCommand]);
      refalrts::reinit_number(context[8], 0UL);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-RASL/4 (/7 # CmdPushStack/9 s.ElemNumber#1/12 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdPushStack], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.ElemNumber#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.ElemNumber#1/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdPushStack/7 HalfReuse: 0/9 } 0/13 Tile{ HalfReuse: s.ElemNumber1 #12/8 AsIs: >/1 ]] }
    refalrts::alloc_number(vm, context[13], 0UL);
    refalrts::update_name(context[4], functions[efunc_PutCommand]);
    refalrts::reinit_ident(context[7], identifiers[ident_CmdPushStack]);
    refalrts::reinit_number(context[9], 0UL);
    refalrts::reinit_svar( context[8], context[12] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 # CmdPushState/9 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdPushState], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdPushState/7 HalfReuse: 0/9 HalfReuse: 0/8 HalfReuse: 0/1 } >/10 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_PutCommand]);
    refalrts::reinit_ident(context[7], identifiers[ident_CmdPushState]);
    refalrts::reinit_number(context[9], 0UL);
    refalrts::reinit_number(context[8], 0UL);
    refalrts::reinit_number(context[1], 0UL);
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 s.new#3/9 e.new#4/10 s.new#5/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::svar_right( context[12], context[10], context[11] ) )
      continue;
    // closed e.new#4 as range 10
    do {
      // </0 & GenCommand-RASL/4 (/7 s.new#6/9 s.new#7/12 )/8 >/1
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdWrapClosure/9 s.Offset#1/12 )/8 >/1
        if( ! refalrts::ident_term( identifiers[ident_CmdWrapClosure], context[9] ) )
          continue;
        //DEBUG: s.Offset#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} s.Offset#1/12 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdWrapClosure/7 HalfReuse: 0/9 } 0/13 Tile{ HalfReuse: s.Offset1 #12/8 AsIs: >/1 ]] }
        refalrts::alloc_number(vm, context[13], 0UL);
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_ident(context[7], identifiers[ident_CmdWrapClosure]);
        refalrts::reinit_number(context[9], 0UL);
        refalrts::reinit_svar( context[8], context[12] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[8];
        res = refalrts::splice_evar( res, context[13], context[13] );
        refalrts::splice_to_freelist_open( vm, context[9], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-RASL/4 (/7 # CmdInsertElem/9 s.ElemNumber#1/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdInsertElem], context[9] ) )
        continue;
      //DEBUG: s.ElemNumber#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.ElemNumber#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdSpliceElem/7 HalfReuse: 0/9 } 0/13 Tile{ HalfReuse: s.ElemNumber1 #12/8 AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[13], 0UL);
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdSpliceElem]);
      refalrts::reinit_number(context[9], 0UL);
      refalrts::reinit_svar( context[8], context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[13] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-RASL/4 (/7 # CmdInsertVar/9 s.new#7/15 s.new#6/12 )/8 >/1
      context[13] = context[10];
      context[14] = context[11];
      if( ! refalrts::ident_term( identifiers[ident_CmdInsertVar], context[9] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      if( ! refalrts::empty_seq( context[13], context[14] ) )
        continue;
      do {
        // </0 & GenCommand-RASL/4 (/7 # CmdInsertVar/9 'e'/15 s.Offset#1/12 )/8 >/1
        if( ! refalrts::char_term( 'e', context[15] ) )
          continue;
        //DEBUG: s.Offset#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdSpliceEVar/7 HalfReuse: 0/9 HalfReuse: 0/15 AsIs: s.Offset#1/12 HalfReuse: >/8 } Tile{ ]] }
        refalrts::update_name(context[4], functions[efunc_PutCommand]);
        refalrts::reinit_ident(context[7], identifiers[ident_CmdSpliceEVar]);
        refalrts::reinit_number(context[9], 0UL);
        refalrts::reinit_number(context[15], 0UL);
        refalrts::reinit_close_call(context[8]);
        refalrts::push_stack( vm, context[8] );
        refalrts::push_stack( vm, context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        refalrts::splice_to_freelist_open( vm, context[8], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-RASL/4 (/7 # CmdInsertVar/9 s.Mode#1/15 s.Offset#1/12 )/8 >/1
      //DEBUG: s.Mode#1: 15
      //DEBUG: s.Offset#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/15 s.Offset#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdSpliceSTVar/7 HalfReuse: 0/9 } 0/16 Tile{ HalfReuse: s.Offset1 #12/8 AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[16], 0UL);
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdSpliceSTVar]);
      refalrts::reinit_number(context[9], 0UL);
      refalrts::reinit_svar( context[8], context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[16], context[16] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-RASL/4 (/7 # CmdInsertRange/9 s.ElemNumber#1/12 )/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_CmdInsertRange], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[10], context[11] ) )
        continue;
      //DEBUG: s.ElemNumber#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.ElemNumber#1/12 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdSpliceRange/7 HalfReuse: 0/9 } 0/13 Tile{ HalfReuse: s.ElemNumber1 #12/8 AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[13], 0UL);
      refalrts::update_name(context[4], functions[efunc_PutCommand]);
      refalrts::reinit_ident(context[7], identifiers[ident_CmdSpliceRange]);
      refalrts::reinit_number(context[9], 0UL);
      refalrts::reinit_svar( context[8], context[12] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[13], context[13] );
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-RASL/4 (/7 # CmdInsertTile/9 s.BeginOffset#1/15 s.EndOffset#1/12 )/8 >/1
    context[13] = context[10];
    context[14] = context[11];
    if( ! refalrts::ident_term( identifiers[ident_CmdInsertTile], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: s.EndOffset#1: 12
    //DEBUG: s.BeginOffset#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & PutCommand/7 Reuse: # CmdSpliceTile/9 AsIs: s.BeginOffset#1/15 AsIs: s.EndOffset#1/12 HalfReuse: 0/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_PutCommand]);
    refalrts::update_ident(context[9], identifiers[ident_CmdSpliceTile]);
    refalrts::reinit_number(context[8], 0UL);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 # CmdSpliceToFreeList/9 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdSpliceToFreeList], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdSpliceToFreeList/7 HalfReuse: 0/9 HalfReuse: 0/8 HalfReuse: 0/1 } >/10 Tile{ ]] }
    refalrts::alloc_close_call(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_PutCommand]);
    refalrts::reinit_ident(context[7], identifiers[ident_CmdSpliceToFreeList]);
    refalrts::reinit_number(context[9], 0UL);
    refalrts::reinit_number(context[8], 0UL);
    refalrts::reinit_number(context[1], 0UL);
    refalrts::push_stack( vm, context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 # CmdSpliceToFreeList-Range/9 s.Start#1/12 s.End#1/13 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdSpliceToFreeListm_Range], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Start#1: 12
    //DEBUG: s.End#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & PutCommand/7 AsIs: # CmdSpliceToFreeList-Range/9 AsIs: s.Start#1/12 AsIs: s.End#1/13 HalfReuse: 0/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_PutCommand]);
    refalrts::reinit_number(context[8], 0UL);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 # CmdNextStep/9 )/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_CmdNextStep], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdNextStep/7 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_PutCommand]);
    refalrts::reinit_ident(context[7], identifiers[ident_CmdNextStep]);
    refalrts::reinit_close_call(context[9]);
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-RASL/4 (/7 # CmdTrash/9 s.Offset#1/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdTrash], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Offset#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenCommand-RASL/4 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Fetch/9 AsIs: s.Offset#1/12 HalfReuse: & GenCommand-RASL$50\1/8 AsIs: >/1 ]] }
    refalrts::reinit_open_call(context[7]);
    refalrts::reinit_name(context[9], functions[efunc_Fetch]);
    refalrts::reinit_name(context[8], functions[efunc_gen_GenCommandm_RASL_S50L1]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenCommand-RASL/4 (/7 # CmdFail/9 )/8 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdFail], context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdFail/7 HalfReuse: >/9 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_PutCommand]);
  refalrts::reinit_ident(context[7], identifiers[ident_CmdFail]);
  refalrts::reinit_close_call(context[9]);
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenCommandm_RASL("GenCommand-RASL", 2067244950U, 1894985041U, func_GenCommandm_RASL);


static refalrts::FnResult func_gen_PutCommand_S3B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & PutCommand$3:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PutCommand$3:1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 )/12 s.new#3/14 (/17 s.new#4/19 )/18 s.new#5/20 (/23 s.new#6/25 )/24 s.new#7/26 >/1
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
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[20], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  if( ! refalrts::svar_left( context[25], context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[21], context[22] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PutCommand$3:1/4 (/7 e.Symbolic#1/27 )/8 (/11 0/13 )/12 s.LoArg1#2/14 (/17 0/19 )/18 s.LoArg2#2/20 (/23 0/25 )/24 s.LoArg3#2/26 >/1
    context[27] = context[5];
    context[28] = context[6];
    if( ! refalrts::number_term( 0UL, context[13] ) )
      continue;
    if( ! refalrts::number_term( 0UL, context[19] ) )
      continue;
    if( ! refalrts::number_term( 0UL, context[25] ) )
      continue;
    // closed e.Symbolic#1 as range 27
    //DEBUG: s.LoArg1#2: 14
    //DEBUG: s.LoArg2#2: 20
    //DEBUG: s.LoArg3#2: 26
    //DEBUG: e.Symbolic#1: 27

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.LoArg1#2/14 (/17 0/19 )/18 s.LoArg2#2/20 (/23 0/25 )/24 s.LoArg3#2/26 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & NumberFromOpcode/7 AsIs: e.Symbolic#1/27 HalfReuse: >/8 HalfReuse: s.LoArg12 #14/11 HalfReuse: s.LoArg22 #20/13 HalfReuse: s.LoArg32 #26/12 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_NumberFromOpcode]);
    refalrts::reinit_close_call(context[8]);
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_svar( context[13], context[20] );
    refalrts::reinit_svar( context[12], context[26] );
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, context[12], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutCommand$3:1/4 (/7 e.Symbolic#1/5 )/8 (/11 s.HiArg1#2/13 )/12 s.LoArg1#2/14 (/17 s.HiArg2#2/19 )/18 s.LoArg2#2/20 (/23 s.HiArg3#2/25 )/24 s.LoArg3#2/26 >/1
  // closed e.Symbolic#1 as range 5
  //DEBUG: s.HiArg1#2: 13
  //DEBUG: s.LoArg1#2: 14
  //DEBUG: s.HiArg2#2: 19
  //DEBUG: s.LoArg2#2: 20
  //DEBUG: s.HiArg3#2: 25
  //DEBUG: s.LoArg3#2: 26
  //DEBUG: e.Symbolic#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.HiArg2#2/19 {REMOVED TILE} s.LoArg2#2/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PutCommand/4 AsIs: (/7 } Tile{ HalfReuse: # CmdScale/8 HalfReuse: )/11 AsIs: s.HiArg1#2/13 HalfReuse: s.HiArg22 #19/12 } Tile{ AsIs: s.HiArg3#2/25 } Tile{ HalfReuse: >/18 } Tile{ AsIs: (/23 } Tile{ HalfReuse: </17 } & NumberFromOpcode/27 Tile{ AsIs: e.Symbolic#1/5 } >/28 Tile{ AsIs: s.LoArg1#2/14 } Tile{ HalfReuse: s.LoArg22 #20/24 AsIs: s.LoArg3#2/26 HalfReuse: )/1 ]] }
  refalrts::alloc_name(vm, context[27], functions[efunc_NumberFromOpcode]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::update_name(context[4], functions[efunc_PutCommand]);
  refalrts::reinit_ident(context[8], identifiers[ident_CmdScale]);
  refalrts::reinit_close_bracket(context[11]);
  refalrts::reinit_svar( context[12], context[19] );
  refalrts::reinit_close_call(context[18]);
  refalrts::reinit_open_call(context[17]);
  refalrts::reinit_svar( context[24], context[20] );
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[23], context[1] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PutCommand_S3B1("PutCommand$3:1", 2067244950U, 1894985041U, func_gen_PutCommand_S3B1);


static refalrts::FnResult func_PutCommand(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & PutCommand/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PutCommand/4 e.new#1/2 s.new#2/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & PutCommand/4 s.Symbolic#1/5 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    //DEBUG: s.Symbolic#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/6 Tile{ AsIs: </0 Reuse: & NumberFromOpcode/4 AsIs: s.Symbolic#1/5 AsIs: >/1 } 0/7 0/8 0/9 )/10 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[6]);
    refalrts::alloc_number(vm, context[7], 0UL);
    refalrts::alloc_number(vm, context[8], 0UL);
    refalrts::alloc_number(vm, context[9], 0UL);
    refalrts::alloc_close_bracket(vm, context[10]);
    refalrts::update_name(context[4], functions[efunc_NumberFromOpcode]);
    refalrts::link_brackets( context[6], context[10] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutCommand/4 t.new#4/6 s.new#5/8 s.new#6/9 s.new#3/5 >/1
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PutCommand/4 s.Symbolic#1/6 s.Arg1#1/8 s.Arg2#1/9 s.Arg3#1/5 >/1
    if( ! refalrts::svar_term( context[6], context[6] ) )
      continue;
    //DEBUG: s.Symbolic#1: 6
    //DEBUG: s.Arg1#1: 8
    //DEBUG: s.Arg2#1: 9
    //DEBUG: s.Arg3#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & PutCommand/4 } (/10 Tile{ AsIs: s.Symbolic#1/6 } )/11 Tile{ AsIs: s.Arg1#1/8 AsIs: s.Arg2#1/9 AsIs: s.Arg3#1/5 AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[10]);
    refalrts::alloc_close_bracket(vm, context[11]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PutCommand/4 (/6 e.Symbolic#1/10 )/7 s.Arg1#1/8 s.Arg2#1/9 s.Arg3#1/5 >/1
  context[10] = 0;
  context[11] = 0;
  if( ! refalrts::brackets_term( context[10], context[11], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Symbolic#1 as range 10
  //DEBUG: s.Arg1#1: 8
  //DEBUG: s.Arg2#1: 9
  //DEBUG: s.Arg3#1: 5
  //DEBUG: e.Symbolic#1: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: [*]/0 Reuse: & PutCommand$3:1/4 AsIs: (/6 AsIs: e.Symbolic#1/10 AsIs: )/7 } {*}/13 </14 & Divmod/15 Tile{ AsIs: s.Arg1#1/8 } 256/16 >/17 </18 & Divmod/19 Tile{ AsIs: s.Arg2#1/9 } 256/20 >/21 </22 & Divmod/23 Tile{ AsIs: s.Arg3#1/5 } 256/24 >/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_unwrapped_closure(vm, context[13], context[0]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_Divmod]);
  refalrts::alloc_number(vm, context[16], 256UL);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_Divmod]);
  refalrts::alloc_number(vm, context[20], 256UL);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_Divmod]);
  refalrts::alloc_number(vm, context[24], 256UL);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_PutCommand_S3B1]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutCommand("PutCommand", 2067244950U, 1894985041U, func_PutCommand);


static refalrts::FnResult func_CreateCommandTag(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & CreateCommandTag/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateCommandTag/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CreateCommandTag/4 # ElOpenBracket/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElOpenBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateCommandTag/4 # ElOpenBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # ElBracket/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_ElBracket]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateCommandTag/4 # ElOpenADT/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElOpenADT], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateCommandTag/4 # ElOpenADT/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # ElBracket/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_ElBracket]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateCommandTag/4 # ElOpenCall/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElOpenCall], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateCommandTag/4 # ElOpenCall/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # ElBracket/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_ElBracket]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateCommandTag/4 # ElCloseBracket/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElCloseBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateCommandTag/4 # ElCloseBracket/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # ElBracket/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_ElBracket]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateCommandTag/4 # ElCloseADT/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElCloseADT], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateCommandTag/4 # ElCloseADT/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # ElBracket/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_ElBracket]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateCommandTag/4 # ElCloseCall/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElCloseCall], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateCommandTag/4 # ElCloseCall/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # ElBracket/1 ]] }
    refalrts::reinit_ident(context[1], identifiers[ident_ElBracket]);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateCommandTag/4 s.Other#1/5 >/1
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CreateCommandTag/4 s.Other#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Other1 #5/1 ]] }
  refalrts::reinit_svar( context[1], context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateCommandTag("CreateCommandTag", 2067244950U, 1894985041U, func_CreateCommandTag);


static refalrts::FnResult func_CreateCommandInfo(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & CreateCommandInfo/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateCommandInfo/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CreateCommandInfo/4 s.new#3/5 s.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & CreateCommandInfo/4 # ElChar/5 s.Char#1/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_ElChar], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;
      //DEBUG: s.Char#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & Ord/5 AsIs: s.Char#1/8 AsIs: >/1 ]] }
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_Ord]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[4];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateCommandInfo/4 # ElName/5 s.NameId#1/8 e.Name#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_ElName], context[5] ) )
        continue;
      // closed e.Name#1 as range 9
      //DEBUG: s.NameId#1: 8
      //DEBUG: e.Name#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateCommandInfo/4 # ElName/5 s.NameId#1/8 e.Name#1/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.NameId1 #8/1 ]] }
      refalrts::reinit_svar( context[1], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateCommandInfo/4 # ElNumber/5 s.Number#1/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_ElNumber], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;
      //DEBUG: s.Number#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateCommandInfo/4 # ElNumber/5 s.Number#1/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Number1 #8/1 ]] }
      refalrts::reinit_svar( context[1], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateCommandInfo/4 # ElIdent/5 s.NameId#1/8 e.Name#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_ElIdent], context[5] ) )
        continue;
      // closed e.Name#1 as range 9
      //DEBUG: s.NameId#1: 8
      //DEBUG: e.Name#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateCommandInfo/4 # ElIdent/5 s.NameId#1/8 e.Name#1/9 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.NameId1 #8/1 ]] }
      refalrts::reinit_svar( context[1], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CreateCommandInfo/4 # ElString/5 s.StringId#1/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElString], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //DEBUG: s.StringId#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateCommandInfo/4 # ElString/5 s.StringId#1/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.StringId1 #8/1 ]] }
    refalrts::reinit_svar( context[1], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateCommandInfo/4 # ElClosureHead/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElClosureHead], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateCommandInfo/4 # ElClosureHead/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 0/1 ]] }
    refalrts::reinit_number(context[1], 0UL);
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateCommandInfo/4 # ElUnwrappedClosure/5 s.HeadCounter#1/8 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_ElUnwrappedClosure], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //DEBUG: s.HeadCounter#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateCommandInfo/4 # ElUnwrappedClosure/5 s.HeadCounter#1/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.HeadCounter1 #8/1 ]] }
    refalrts::reinit_svar( context[1], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateCommandInfo/4 s.Bracket#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Bracket#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NumberFromBracket/4 AsIs: s.Bracket#1/5 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_NumberFromBracket]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateCommandInfo("CreateCommandInfo", 2067244950U, 1894985041U, func_CreateCommandInfo);


static refalrts::FnResult func_gen_CalcLabelsOffsets_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & CalcLabelsOffsets\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CalcLabelsOffsets\1/4 (/7 s.new#1/9 e.new#2/5 )/8 t.new#3/10 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CalcLabelsOffsets\1/4 (/7 s.new#4/9 e.new#5/12 )/8 (/10 s.new#6/16 s.new#7/17 e.new#8/14 )/11 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    // closed e.new#5 as range 12
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[17], context[14], context[15] ) )
      continue;
    // closed e.new#8 as range 14
    do {
      // </0 & CalcLabelsOffsets\1/4 (/7 s.Offset#2/9 e.Labels#2/18 )/8 (/10 # LABEL/16 s.Label#2/17 )/11 >/1
      context[18] = context[12];
      context[19] = context[13];
      if( ! refalrts::ident_term( identifiers[ident_LABEL], context[16] ) )
        continue;
      if( ! refalrts::empty_seq( context[14], context[15] ) )
        continue;
      // closed e.Labels#2 as range 18
      //DEBUG: s.Offset#2: 9
      //DEBUG: s.Label#2: 17
      //DEBUG: e.Labels#2: 18

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CalcLabelsOffsets\1/4 {REMOVED TILE} s.Label#2/17 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Offset#2/9 AsIs: e.Labels#2/18 HalfReuse: (/8 HalfReuse: s.Label2 #17/10 HalfReuse: s.Offset2 #9/16 } Tile{ AsIs: )/11 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_svar( context[10], context[17] );
      refalrts::reinit_svar( context[16], context[9] );
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[7], context[16] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CalcLabelsOffsets\1/4 (/7 s.Offset#2/9 e.Labels#2/18 )/8 (/10 # CmdOnFailGoTo/16 s.Destination#2/17 e.FuncName#2/20 )/11 >/1
    context[18] = context[12];
    context[19] = context[13];
    context[20] = context[14];
    context[21] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_CmdOnFailGoTo], context[16] ) )
      continue;
    // closed e.Labels#2 as range 18
    // closed e.FuncName#2 as range 20
    //DEBUG: s.Offset#2: 9
    //DEBUG: s.Destination#2: 17
    //DEBUG: e.Labels#2: 18
    //DEBUG: e.FuncName#2: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Inc/7 AsIs: s.Offset#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Labels#2/18 } )/22 (/23 # CmdOnFailGoTo/24 </25 Tile{ HalfReuse: & Inc/8 HalfReuse: s.Offset2 #9/10 HalfReuse: >/16 AsIs: s.Destination#2/17 AsIs: e.FuncName#2/20 AsIs: )/11 } Tile{ ]] }
    refalrts::alloc_close_bracket(vm, context[22]);
    refalrts::alloc_open_bracket(vm, context[23]);
    refalrts::alloc_ident(vm, context[24], identifiers[ident_CmdOnFailGoTo]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[7], functions[efunc_Inc]);
    refalrts::reinit_name(context[8], functions[efunc_Inc]);
    refalrts::reinit_svar( context[10], context[9] );
    refalrts::reinit_close_call(context[16]);
    refalrts::link_brackets( context[23], context[11] );
    refalrts::push_stack( vm, context[16] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[0], context[22] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[22], context[25] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CalcLabelsOffsets\1/4 (/7 s.Offset#2/9 e.Labels#2/5 )/8 t.OtherCommand#2/10 >/1
  // closed e.Labels#2 as range 5
  //DEBUG: t.OtherCommand#2: 10
  //DEBUG: s.Offset#2: 9
  //DEBUG: e.Labels#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & Inc/7 AsIs: s.Offset#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Labels#2/5 } Tile{ AsIs: )/8 AsIs: t.OtherCommand#2/10 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_open_call(context[4]);
  refalrts::reinit_name(context[7], functions[efunc_Inc]);
  refalrts::link_brackets( context[0], context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CalcLabelsOffsets_L1("CalcLabelsOffsets\\1", 2067244950U, 1894985041U, func_gen_CalcLabelsOffsets_L1);


static refalrts::FnResult func_CalcLabelsOffsets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & CalcLabelsOffsets/4 e.RASL#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.RASL#1 as range 2
  //DEBUG: e.RASL#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & MapReduce/6 & CalcLabelsOffsets\1/7 (/8 Tile{ HalfReuse: 0/0 HalfReuse: )/4 AsIs: e.RASL#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_MapReduce]);
  refalrts::alloc_name(vm, context[7], functions[efunc_gen_CalcLabelsOffsets_L1]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::reinit_number(context[0], 0UL);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CalcLabelsOffsets("CalcLabelsOffsets", 2067244950U, 1894985041U, func_CalcLabelsOffsets);


static refalrts::FnResult func_gen_ResolveLabeledDestinations_S1B1S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & ResolveLabeledDestinations$1:1$1=1/4 (/7 e.ReadyRASL#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 e.UnscannedRASL#1/13 )/16 (/19 s.JumpHigh#5/21 )/20 s.JumpLow#5/22 >/1
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
  // closed e.ReadyRASL#1 as range 5
  // closed e.Labels#1 as range 9
  // closed e.UnscannedRASL#1 as range 13
  if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.ReadyRASL#1: 5
  //DEBUG: e.Labels#1: 9
  //DEBUG: e.UnscannedRASL#1: 13
  //DEBUG: s.JumpHigh#5: 21
  //DEBUG: s.JumpLow#5: 22

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.JumpLow#5/22 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ReadyRASL#1/5 } Tile{ AsIs: </0 Reuse: & PutCommand/4 HalfReuse: # CmdOnFailGoTo/7 } Tile{ HalfReuse: s.JumpLow5 #22/19 AsIs: s.JumpHigh#5/21 HalfReuse: 0/20 } Tile{ HalfReuse: >/16 } Tile{ HalfReuse: </15 } Tile{ HalfReuse: & ResolveLabeledDestinations/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 } Tile{ AsIs: e.UnscannedRASL#1/13 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_PutCommand]);
  refalrts::reinit_ident(context[7], identifiers[ident_CmdOnFailGoTo]);
  refalrts::reinit_svar( context[19], context[22] );
  refalrts::reinit_number(context[20], 0UL);
  refalrts::reinit_close_call(context[16]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_name(context[8], functions[efunc_ResolveLabeledDestinations]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveLabeledDestinations_S1B1S1A1("ResolveLabeledDestinations$1:1$1=1", 2067244950U, 1894985041U, func_gen_ResolveLabeledDestinations_S1B1S1A1);


static refalrts::FnResult func_gen_ResolveLabeledDestinations_S1B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & ResolveLabeledDestinations$1:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveLabeledDestinations$1:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 (/15 e.new#3/13 )/16 s.new#4/17 (/20 e.new#5/18 )/21 s.new#6/22 >/1
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
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  // closed e.new#3 as range 13
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.new#5 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ResolveLabeledDestinations$1:1/4 (/7 e.ReadyRASL#1/23 )/8 (/11 e.Labels#1/25 )/12 (/15 e.UnscannedRASL#1/27 )/16 s.RelativeJump#3/17 (/20 e.FuncName#1/29 )/21 '<'/22 >/1
    context[23] = context[5];
    context[24] = context[6];
    context[25] = context[9];
    context[26] = context[10];
    context[27] = context[13];
    context[28] = context[14];
    context[29] = context[18];
    context[30] = context[19];
    if( ! refalrts::char_term( '<', context[22] ) )
      continue;
    // closed e.ReadyRASL#1 as range 23
    // closed e.Labels#1 as range 25
    // closed e.UnscannedRASL#1 as range 27
    // closed e.FuncName#1 as range 29
    //DEBUG: s.RelativeJump#3: 17
    //DEBUG: e.ReadyRASL#1: 23
    //DEBUG: e.Labels#1: 25
    //DEBUG: e.UnscannedRASL#1: 27
    //DEBUG: e.FuncName#1: 29

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.FuncName#1/29 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </20 } Tile{ HalfReuse: [*]/0 Reuse: & ResolveLabeledDestinations$1:1$1=1/4 AsIs: (/7 AsIs: e.ReadyRASL#1/23 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/25 AsIs: )/12 AsIs: (/15 AsIs: e.UnscannedRASL#1/27 AsIs: )/16 } {*}/31 </32 & Divmod/33 Tile{ AsIs: s.RelativeJump#3/17 } Tile{ HalfReuse: 256/21 HalfReuse: >/22 AsIs: >/1 ]] }
    refalrts::alloc_unwrapped_closure(vm, context[31], context[0]);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_Divmod]);
    refalrts::reinit_open_call(context[20]);
    refalrts::reinit_closure_head(context[0]);
    refalrts::update_name(context[4], functions[efunc_gen_ResolveLabeledDestinations_S1B1S1A1]);
    refalrts::reinit_number(context[21], 256UL);
    refalrts::reinit_close_call(context[22]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[32] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[21];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[0], context[16] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    refalrts::wrap_closure( context[31] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveLabeledDestinations$1:1/4 (/7 e.ReadyRASL#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 e.UnscannedRASL#1/13 )/16 s.RelativeJump#3/17 (/20 e.FuncName#1/18 )/21 s.Other#4/22 >/1
  // closed e.ReadyRASL#1 as range 5
  // closed e.Labels#1 as range 9
  // closed e.UnscannedRASL#1 as range 13
  // closed e.FuncName#1 as range 18
  //DEBUG: s.RelativeJump#3: 17
  //DEBUG: s.Other#4: 22
  //DEBUG: e.ReadyRASL#1: 5
  //DEBUG: e.Labels#1: 9
  //DEBUG: e.UnscannedRASL#1: 13
  //DEBUG: e.FuncName#1: 18

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.ReadyRASL#1/5 {REMOVED TILE} e.Labels#1/9 {REMOVED TILE} e.UnscannedRASL#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Other#4/22 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Prout/4 HalfReuse: 'C'/7 } Tile{ HalfReuse: 'o'/8 HalfReuse: 'm'/11 } 'p'/23 Tile{ HalfReuse: 'i'/12 HalfReuse: 'l'/15 } Tile{ HalfReuse: 'a'/21 }"tion failure in function "/24 </26 & DisplayName/27 Tile{ AsIs: e.FuncName#1/18 } >/28 ':'/29 >/30 </31 & Prout/32"  this function try jump over "/33 </35 Tile{ HalfReuse: & Symb/16 AsIs: s.RelativeJump#3/17 HalfReuse: >/20 }" commands, but maximum jump length is 65535."/36 >/38 </39 & Prout/40"  Compilation aborted."/41 >/43 </44 & Exit/45 1/46 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[23], 'p');
  refalrts::alloc_chars(vm, context[24], context[25], "tion failure in function ", 25);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_DisplayName]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::alloc_char(vm, context[29], ':');
  refalrts::alloc_close_call(vm, context[30]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[33], context[34], "  this function try jump over ", 30);
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_chars(vm, context[36], context[37], " commands, but maximum jump length is 65535.", 44);
  refalrts::alloc_close_call(vm, context[38]);
  refalrts::alloc_open_call(vm, context[39]);
  refalrts::alloc_name(vm, context[40], functions[efunc_Prout]);
  refalrts::alloc_chars(vm, context[41], context[42], "  Compilation aborted.", 22);
  refalrts::alloc_close_call(vm, context[43]);
  refalrts::alloc_open_call(vm, context[44]);
  refalrts::alloc_name(vm, context[45], functions[efunc_Exit]);
  refalrts::alloc_number(vm, context[46], 1UL);
  refalrts::update_name(context[4], functions[efunc_Prout]);
  refalrts::reinit_char(context[7], 'C');
  refalrts::reinit_char(context[8], 'o');
  refalrts::reinit_char(context[11], 'm');
  refalrts::reinit_char(context[12], 'i');
  refalrts::reinit_char(context[15], 'l');
  refalrts::reinit_char(context[21], 'a');
  refalrts::reinit_name(context[16], functions[efunc_Symb]);
  refalrts::reinit_close_call(context[20]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[44] );
  refalrts::push_stack( vm, context[43] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[38] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[30] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[26] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[36], context[46] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[28], context[35] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveLabeledDestinations_S1B1("ResolveLabeledDestinations$1:1", 2067244950U, 1894985041U, func_gen_ResolveLabeledDestinations_S1B1);


static refalrts::FnResult func_gen_ResolveLabeledDestinations_S1A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & ResolveLabeledDestinations$1=2/4 (/7 e.ReadyRASL#1/5 )/8 (/11 e.Labels#1/9 )/12 (/15 e.UnscannedRASL#1/13 )/16 (/19 e.FuncName#1/17 )/20 s.RelativeJump#3/21 >/1
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
  // closed e.ReadyRASL#1 as range 5
  // closed e.Labels#1 as range 9
  // closed e.UnscannedRASL#1 as range 13
  // closed e.FuncName#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.ReadyRASL#1: 5
  //DEBUG: e.Labels#1: 9
  //DEBUG: e.UnscannedRASL#1: 13
  //DEBUG: e.FuncName#1: 17
  //DEBUG: s.RelativeJump#3: 21

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </22 Tile{ HalfReuse: [*]/0 Reuse: & ResolveLabeledDestinations$1:1/4 AsIs: (/7 AsIs: e.ReadyRASL#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Labels#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.UnscannedRASL#1/13 AsIs: )/16 HalfReuse: s.RelativeJump3 #21/19 } (/23 Tile{ AsIs: e.FuncName#1/17 } )/24 {*}/25 </26 Tile{ HalfReuse: & TermCompare/20 AsIs: s.RelativeJump#3/21 } 65536/27 >/28 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_close_bracket(vm, context[24]);
  refalrts::alloc_unwrapped_closure(vm, context[25], context[0]);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_number(vm, context[27], 65536UL);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ResolveLabeledDestinations_S1B1]);
  refalrts::reinit_svar( context[19], context[21] );
  refalrts::reinit_name(context[20], functions[efunc_TermCompare]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[26] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[0], context[19] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::use( res );
  refalrts::wrap_closure( context[25] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ResolveLabeledDestinations_S1A2("ResolveLabeledDestinations$1=2", 2067244950U, 1894985041U, func_gen_ResolveLabeledDestinations_S1A2);


static refalrts::FnResult func_gen_ResolveLabeledDestinations_S1A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & ResolveLabeledDestinations$1=1/4 s.DestinationLabel#1/5 (/8 e.ReadyRASL#1/6 )/9 (/12 e.Labels#1/10 )/13 (/16 e.UnscannedRASL#1/14 )/17 (/20 e.FuncName#1/18 )/21 s.CommandOffset#1/22 e.Labels-B#2/23 (/29 s.DestinationLabel#1/31 s.DestinationOffset#2/32 )/30 e.Labels-E#2/25 >/1
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
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.ReadyRASL#1 as range 6
  // closed e.Labels#1 as range 10
  // closed e.UnscannedRASL#1 as range 14
  // closed e.FuncName#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = 0;
  context[24] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[25] = context[2];
    context[26] = context[3];
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[25], context[26] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    if( ! refalrts::repeated_stvar_left( vm, context[31], context[5], context[27], context[28] ) )
      continue;
    // closed e.Labels-E#2 as range 25
    if( ! refalrts::svar_left( context[32], context[27], context[28] ) )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    //DEBUG: s.DestinationLabel#1: 5
    //DEBUG: e.ReadyRASL#1: 6
    //DEBUG: e.Labels#1: 10
    //DEBUG: e.UnscannedRASL#1: 14
    //DEBUG: e.FuncName#1: 18
    //DEBUG: s.CommandOffset#1: 22
    //DEBUG: e.Labels-B#2: 23
    //DEBUG: e.Labels-E#2: 25
    //DEBUG: s.DestinationOffset#2: 32

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.DestinationLabel#1/5 {REMOVED TILE} s.CommandOffset#1/22 e.Labels-B#2/23 {REMOVED TILE} s.DestinationLabel#1/31 {REMOVED TILE} e.Labels-E#2/25 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & ResolveLabeledDestinations$1=2/29 } Tile{ AsIs: (/8 AsIs: e.ReadyRASL#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Labels#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.UnscannedRASL#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.FuncName#1/18 AsIs: )/21 } {*}/33 </34 & Sub/35 Tile{ AsIs: s.DestinationOffset#2/32 HalfReuse: s.CommandOffset1 #22/30 } >/36 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_unwrapped_closure(vm, context[33], context[4]);
    refalrts::alloc_open_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_Sub]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::reinit_closure_head(context[4]);
    refalrts::reinit_name(context[29], functions[efunc_gen_ResolveLabeledDestinations_S1A2]);
    refalrts::reinit_svar( context[30], context[22] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[34] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[32], context[30] );
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[8], context[21] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    refalrts::wrap_closure( context[33] );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[23], context[24], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_ResolveLabeledDestinations_S1A1("ResolveLabeledDestinations$1=1", 2067244950U, 1894985041U, func_gen_ResolveLabeledDestinations_S1A1);


static refalrts::FnResult func_ResolveLabeledDestinations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & ResolveLabeledDestinations/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ResolveLabeledDestinations/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ResolveLabeledDestinations/4 (/7 e.Labels#1/9 )/8 e.ReadyRASL#1/13 (/19 # CmdOnFailGoTo/21 s.CommandOffset#1/22 s.DestinationLabel#1/23 e.FuncName#1/17 )/20 e.UnscannedRASL#1/15 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    // closed e.Labels#1 as range 9
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
      context[21] = refalrts::ident_left( identifiers[ident_CmdOnFailGoTo], context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.UnscannedRASL#1 as range 15
      if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
        continue;
      if( ! refalrts::svar_left( context[23], context[17], context[18] ) )
        continue;
      // closed e.FuncName#1 as range 17
      //DEBUG: e.Labels#1: 9
      //DEBUG: e.ReadyRASL#1: 13
      //DEBUG: e.UnscannedRASL#1: 15
      //DEBUG: s.CommandOffset#1: 22
      //DEBUG: s.DestinationLabel#1: 23
      //DEBUG: e.FuncName#1: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 } [*]/24 & ResolveLabeledDestinations$1=1/25 Tile{ AsIs: s.DestinationLabel#1/23 } (/26 Tile{ AsIs: e.ReadyRASL#1/13 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Labels#1/9 AsIs: )/8 } Tile{ AsIs: (/19 } Tile{ AsIs: e.UnscannedRASL#1/15 } Tile{ AsIs: )/20 } (/27 Tile{ AsIs: e.FuncName#1/17 } Tile{ HalfReuse: )/21 AsIs: s.CommandOffset#1/22 } {*}/28 e.Labels#1/9/29 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_closure_head(vm, context[24]);
      refalrts::alloc_name(vm, context[25], functions[efunc_gen_ResolveLabeledDestinations_S1A1]);
      refalrts::alloc_open_bracket(vm, context[26]);
      refalrts::alloc_open_bracket(vm, context[27]);
      refalrts::alloc_unwrapped_closure(vm, context[28], context[24]);
      refalrts::copy_evar(vm, context[29], context[30], context[9], context[10]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_close_bracket(context[21]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[27], context[21] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[26], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[29], context[30] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[20], context[20] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[4], context[8] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[26], context[26] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      refalrts::use( res );
      refalrts::wrap_closure( context[28] );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[11], context[12] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ResolveLabeledDestinations/4 (/7 e.Labels#1/5 )/8 e.ReadyRASL#1/2 >/1
  // closed e.Labels#1 as range 5
  // closed e.ReadyRASL#1 as range 2
  //DEBUG: e.Labels#1: 5
  //DEBUG: e.ReadyRASL#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ResolveLabeledDestinations/4 (/7 e.Labels#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ReadyRASL#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ResolveLabeledDestinations("ResolveLabeledDestinations", 2067244950U, 1894985041U, func_ResolveLabeledDestinations);


static refalrts::FnResult func_PutBlockReference(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & PutBlockReference/4 e.Reference#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Reference#1 as range 2
  //DEBUG: e.Reference#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & PutBlock/6 # Reference/7 Tile{ AsIs: </0 Reuse: & Asciiz/4 AsIs: e.Reference#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_PutBlock]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_Reference]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_Asciiz]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutBlockReference("PutBlockReference", 0U, 0U, func_PutBlockReference);


static refalrts::FnResult func_PutBlockIncorporated(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & PutBlockIncorporated/4 e.LibName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.LibName#1 as range 2
  //DEBUG: e.LibName#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & PutBlock/6 # Incorporated/7 Tile{ AsIs: </0 Reuse: & Asciiz/4 AsIs: e.LibName#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_PutBlock]);
  refalrts::alloc_ident(vm, context[7], identifiers[ident_Incorporated]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_Asciiz]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[5] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PutBlockIncorporated("PutBlockIncorporated", 0U, 0U, func_PutBlockIncorporated);


//End of file
