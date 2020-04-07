// This file automatically generated from 'Generator-Native.ref'
// Don't edit! Edit 'Generator-Native.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1746593834_2279083034
#define COOKIE1_ 1746593834U
#define COOKIE2_ 2279083034U

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
  efunc_Map = 14,
  efunc_Apply = 15,
  efunc_Reduce = 16,
  efunc_DoMapAccum = 17,
  efunc_DoMapAccumm_Aux = 18,
  efunc_Fetch = 19,
  efunc_Pipe = 20,
  efunc_gen_Pipe_S2L1 = 21,
  efunc_gen_Pipe_S3L1 = 22,
  efunc_SetLineNumbers = 23,
  efunc_gen_GenProgramm_Native_B1 = 24,
  efunc_MapAccum = 25,
  efunc_GenCommandm_Native = 26,
  efunc_gen_GenProgramm_Native_A1 = 27,
  efunc_EscapeString = 28,
  efunc_Symb = 29,
  efunc_ContextRangem_E = 30,
  efunc_ContextRangem_B = 31,
  efunc_CName = 32,
  efunc_DisplayCName = 33,
  efunc_ContextItem = 34,
  efunc_FormatOffsets = 35,
  efunc_NameAndCookies = 36,
  efunc_BaseCName = 37,
  efunc_ContextRange = 38,
  efunc_PrintMatchChar = 39,
  efunc_PrintMatchCharSave = 40,
  efunc_PrintMatchNumber = 41,
  efunc_PrintMatchNumberSave = 42,
  efunc_PrintMatchName = 43,
  efunc_PrintMatchNameSave = 44,
  efunc_PrintMatchIdent = 45,
  efunc_PrintMatchIdentSave = 46,
  efunc_PrintBracketsVarInit = 47,
  efunc_PrintMatchBrackets = 48,
  efunc_PrintMatchBracketsSave = 49,
  efunc_PrintMatchADT = 50,
  efunc_PrintMatchADTSave = 51,
  efunc_StrFromDirection = 52,
  efunc_PrintMatchEmpty = 53,
  efunc_PrintMatchSTVar = 54,
  efunc_PrintMatchSTVarSave = 55,
  efunc_PrintMatchRepeated = 56,
  efunc_PrintMatchRepeatedTVarSave = 57,
  efunc_PrintString = 58,
  efunc_PrintCreateElem = 59,
  efunc_BreakerFromIndent = 60,
  efunc_PrintLength = 61,
  efunc_DoPrintLength = 62,
  efunc_EscapeChar = 63,
  efunc_PrintMatch = 64,
  efunc_PrintMatchSave = 65,
  efunc_FunctionImage = 66,
  efunc_IdentifierImage = 67,
  efunc_VarMatchFunction = 68,
  efunc_PrintMatchm_VM = 69,
  efunc_PrintMatchSavem_VM = 70,
  efunc_AllocatorFuncArgument = 71,
  efunc_AllocatorFuncName = 72,
  efunc_AllocatorMode = 73,
};


enum ident {
  ident_k43_ = 0,
  ident_k47_ = 1,
  ident_k37_ = 2,
  ident_k42_ = 3,
  ident_k63_ = 4,
  ident_m_ = 5,
  ident_NativeInsertBegin = 6,
  ident_FileLine = 7,
  ident_FileRowCol = 8,
  ident_NativeInsertEnd = 9,
  ident_Hash = 10,
  ident_Offset = 11,
  ident_RIGHTm_EDGE = 12,
  ident_LEFTm_EDGE = 13,
  ident_CmdComment = 14,
  ident_CmdCEnumm_Start = 15,
  ident_CmdCEnumm_End = 16,
  ident_CmdCEnumm_Item = 17,
  ident_CmdCookieNS = 18,
  ident_CmdNativeFuncDescr = 19,
  ident_CmdFnStart = 20,
  ident_CmdFnEnd = 21,
  ident_CmdEmitNativeCode = 22,
  ident_CmdCallCondition = 23,
  ident_CmdProfileFunction = 24,
  ident_CmdLoadConstants = 25,
  ident_CmdIssueMemory = 26,
  ident_CmdStartSentence = 27,
  ident_CmdEndSentence = 28,
  ident_CmdInitB0 = 29,
  ident_CmdInitB0m_Lite = 30,
  ident_CmdChar = 31,
  ident_CmdCharSave = 32,
  ident_CmdNumber = 33,
  ident_CmdNumberSave = 34,
  ident_CmdName = 35,
  ident_CmdNameSave = 36,
  ident_CmdIdent = 37,
  ident_CmdIdentSave = 38,
  ident_CmdBrackets = 39,
  ident_CmdBracketsSave = 40,
  ident_CmdADT = 41,
  ident_CmdADTSave = 42,
  ident_CmdCallSave = 43,
  ident_CmdEmpty = 44,
  ident_CmdVar = 45,
  ident_CmdVarSave = 46,
  ident_CmdRepeated = 47,
  ident_CmdRepeatedTVarSave = 48,
  ident_AlgLeft = 49,
  ident_CmdOpenedEm_Start = 50,
  ident_CmdOpenedEm_End = 51,
  ident_CmdSave = 52,
  ident_CmdResetAllocator = 53,
  ident_CmdSetRes = 54,
  ident_ARGm_BEGIN = 55,
  ident_CmdCopyVar = 56,
  ident_CmdReinitSVar = 57,
  ident_CmdCreateElem = 58,
  ident_Allocate = 59,
  ident_ElString = 60,
  ident_CmdLinkBrackets = 61,
  ident_CmdPushStack = 62,
  ident_CmdWrapClosure = 63,
  ident_CmdInsertElem = 64,
  ident_CmdInsertVar = 65,
  ident_CmdInsertRange = 66,
  ident_CmdInsertTile = 67,
  ident_CmdUseRes = 68,
  ident_CmdSpliceToFreeList = 69,
  ident_CmdSpliceToFreeListm_Range = 70,
  ident_CmdNextStep = 71,
  ident_CmdTrash = 72,
  ident_CmdFail = 73,
  ident_AlgTerm = 74,
  ident_AlgRight = 75,
  ident_Reinit = 76,
  ident_Update = 77,
  ident_ElChar = 78,
  ident_ElName = 79,
  ident_ElNumber = 80,
  ident_ElIdent = 81,
  ident_ElOpenADT = 82,
  ident_ElCloseADT = 83,
  ident_ElOpenBracket = 84,
  ident_ElCloseBracket = 85,
  ident_ElOpenCall = 86,
  ident_ElCloseCall = 87,
  ident_ElClosureHead = 88,
  ident_ElUnwrappedClosure = 89,
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

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


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
    refalrts::alloc_number(vm, context[9], 2279083034UL);
    refalrts::update_name(context[4], functions[efunc_u_u_FindMuPtr]);
    refalrts::reinit_number(context[5], 1746593834UL);
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
  refalrts::reinit_number(context[5], 1746593834UL);
  refalrts::reinit_number(context[7], 2279083034UL);
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", COOKIE1_, COOKIE2_, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", COOKIE1_, COOKIE2_, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


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


static refalrts::FnResult func_Reduce(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
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
    //RESULT: Tile{ [[ } </13 & Reduce/14 t.Fn#1/5/15 Tile{ AsIs: </0 Reuse: & Apply/4 AsIs: t.Fn#1/5 AsIs: t.Acc#1/7 AsIs: t.Next#1/11 } >/17 Tile{ AsIs: e.Tail#1/9 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[13]);
    refalrts::alloc_name(vm, context[14], functions[efunc_Reduce]);
    refalrts::copy_evar(vm, context[15], context[16], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[17]);
    refalrts::update_name(context[4], functions[efunc_Apply]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[13], context[16] );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum-Aux/4 AsIs: t.Fn#1/5 } Tile{ AsIs: (/11 AsIs: e.Scanned#1/13 AsIs: )/12 } (/19 </20 & Apply/21 t.Fn#1/5/22 Tile{ AsIs: t.Acc#1/7 } Tile{ AsIs: t.Next#1/17 } >/24 )/25 Tile{ AsIs: e.Tail#1/15 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_bracket(vm, context[19]);
    refalrts::alloc_open_call(vm, context[20]);
    refalrts::alloc_name(vm, context[21], functions[efunc_Apply]);
    refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::update_name(context[4], functions[efunc_DoMapAccumm_Aux]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[19], context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[20] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[19], context[23] );
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


static refalrts::FnResult func_DoMapAccumm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoMapAccum-Aux/4 t.Fn#1/5 (/9 e.Scanned#1/7 )/10 (/13 t.Acc#1/15 e.StepScanned#1/11 )/14 e.Tail#1/2 >/1
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
  // closed e.Tail#1 as range 2
  context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.StepScanned#1 as range 11
  //DEBUG: t.Fn#1: 5
  //DEBUG: e.Scanned#1: 7
  //DEBUG: e.Tail#1: 2
  //DEBUG: t.Acc#1: 15
  //DEBUG: e.StepScanned#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoMapAccum/4 AsIs: t.Fn#1/5 } Tile{ AsIs: t.Acc#1/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Scanned#1/7 } Tile{ AsIs: e.StepScanned#1/11 } Tile{ AsIs: )/14 AsIs: e.Tail#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_DoMapAccum]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[14];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoMapAccumm_Aux("DoMapAccum-Aux", COOKIE1_, COOKIE2_, func_DoMapAccumm_Aux);


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


static refalrts::FnResult func_gen_GenProgramm_Native_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & GenProgram-Native:1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenProgram-Native:1/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 e.new#3/2 >/1
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
    // </0 & GenProgram-Native:1/4 (/7 e.SourceFileName#1/13 )/8 (/11 e.TargetFileName#1/15 )/12 e.Lines-B#3/19 (/25 # NativeInsertBegin/27 t.SrcPos#3/28 )/26 e.Lines-E#3/21 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.SourceFileName#1 as range 13
    // closed e.TargetFileName#1 as range 15
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[21] = context[17];
      context[22] = context[18];
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      context[27] = refalrts::ident_left( identifiers[ident_NativeInsertBegin], context[23], context[24] );
      if( ! context[27] )
        continue;
      // closed e.Lines-E#3 as range 21
      context[29] = refalrts::tvar_left( context[28], context[23], context[24] );
      if( ! context[29] )
        continue;
      if( ! refalrts::empty_seq( context[23], context[24] ) )
        continue;
      //DEBUG: e.SourceFileName#1: 13
      //DEBUG: e.TargetFileName#1: 15
      //DEBUG: e.Lines-B#3: 19
      //DEBUG: e.Lines-E#3: 21
      //DEBUG: t.SrcPos#3: 28

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & SetLineNumbers/4 AsIs: (/7 AsIs: e.SourceFileName#1/13 AsIs: )/8 AsIs: (/11 AsIs: e.TargetFileName#1/15 AsIs: )/12 } 1/30 Tile{ AsIs: e.Lines-B#3/19 } Tile{ AsIs: (/25 AsIs: # NativeInsertBegin/27 AsIs: t.SrcPos#3/28 AsIs: )/26 AsIs: e.Lines-E#3/21 AsIs: >/1 ]] }
      refalrts::alloc_number(vm, context[30], 1UL);
      refalrts::update_name(context[4], functions[efunc_SetLineNumbers]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[25];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[30], context[30] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenProgram-Native:1/4 (/7 e.SourceFileName#1/5 )/8 (/11 e.TargetFileName#1/9 )/12 e.Lines#3/2 >/1
  // closed e.SourceFileName#1 as range 5
  // closed e.TargetFileName#1 as range 9
  // closed e.Lines#3 as range 2
  //DEBUG: e.SourceFileName#1: 5
  //DEBUG: e.TargetFileName#1: 9
  //DEBUG: e.Lines#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenProgram-Native:1/4 (/7 e.SourceFileName#1/5 )/8 (/11 e.TargetFileName#1/9 )/12 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Lines#3/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenProgramm_Native_B1("GenProgram-Native:1", COOKIE1_, COOKIE2_, func_gen_GenProgramm_Native_B1);


static refalrts::FnResult func_gen_GenProgramm_Native_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & GenProgram-Native=1/4 (/7 e.SourceFileName#1/5 )/8 (/11 e.TargetFileName#1/9 )/12 (/15 )/16 e.Generated#2/2 >/1
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
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceFileName#1 as range 5
  // closed e.TargetFileName#1 as range 9
  // closed e.Generated#2 as range 2
  //DEBUG: e.SourceFileName#1: 5
  //DEBUG: e.TargetFileName#1: 9
  //DEBUG: e.Generated#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenProgram-Native:1/4 AsIs: (/7 AsIs: e.SourceFileName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetFileName#1/9 AsIs: )/12 AsIs: (/15 HalfReuse: '/'/16 }"/ This file automatically generated from \'"/17 e.SourceFileName#1/5/19 '\''/21 )/22 (/23"// Don\'t edit! Edit \'"/24 e.SourceFileName#1/5/26"\' and recompile it"/28 )/30 (/31 )/32 (/33"#include \"refalrts.h\""/34 )/36 (/37 )/38 Tile{ AsIs: e.Generated#2/2 } (/39 )/40 (/41"//End of file"/42 )/44 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[17], context[18], "/ This file automatically generated from \'", 42);
  refalrts::copy_evar(vm, context[19], context[20], context[5], context[6]);
  refalrts::alloc_char(vm, context[21], '\'');
  refalrts::alloc_close_bracket(vm, context[22]);
  refalrts::alloc_open_bracket(vm, context[23]);
  refalrts::alloc_chars(vm, context[24], context[25], "// Don\'t edit! Edit \'", 21);
  refalrts::copy_evar(vm, context[26], context[27], context[5], context[6]);
  refalrts::alloc_chars(vm, context[28], context[29], "\' and recompile it", 18);
  refalrts::alloc_close_bracket(vm, context[30]);
  refalrts::alloc_open_bracket(vm, context[31]);
  refalrts::alloc_close_bracket(vm, context[32]);
  refalrts::alloc_open_bracket(vm, context[33]);
  refalrts::alloc_chars(vm, context[34], context[35], "#include \"refalrts.h\"", 21);
  refalrts::alloc_close_bracket(vm, context[36]);
  refalrts::alloc_open_bracket(vm, context[37]);
  refalrts::alloc_close_bracket(vm, context[38]);
  refalrts::alloc_open_bracket(vm, context[39]);
  refalrts::alloc_close_bracket(vm, context[40]);
  refalrts::alloc_open_bracket(vm, context[41]);
  refalrts::alloc_chars(vm, context[42], context[43], "//End of file", 13);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::update_name(context[4], functions[efunc_gen_GenProgramm_Native_B1]);
  refalrts::reinit_char(context[16], '/');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[41], context[44] );
  refalrts::link_brackets( context[39], context[40] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[23], context[30] );
  refalrts::link_brackets( context[15], context[22] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[39], context[44] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[38] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenProgramm_Native_A1("GenProgram-Native=1", COOKIE1_, COOKIE2_, func_gen_GenProgramm_Native_A1);


static refalrts::FnResult func_GenProgramm_Native(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & GenProgram-Native/4 (/7 e.SourceFileName#1/5 )/8 (/11 e.TargetFileName#1/9 )/12 (/15 e.NativeRASL#1/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceFileName#1 as range 5
  // closed e.TargetFileName#1 as range 9
  // closed e.NativeRASL#1 as range 13
  //DEBUG: e.SourceFileName#1: 5
  //DEBUG: e.TargetFileName#1: 9
  //DEBUG: e.NativeRASL#1: 13

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenProgram-Native=1/4 AsIs: (/7 AsIs: e.SourceFileName#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.TargetFileName#1/9 AsIs: )/12 HalfReuse: </15 } & MapAccum/17 & GenCommand-Native/18 (/19 )/20 Tile{ AsIs: e.NativeRASL#1/13 } Tile{ HalfReuse: >/16 AsIs: >/1 ]] }
  refalrts::alloc_name(vm, context[17], functions[efunc_MapAccum]);
  refalrts::alloc_name(vm, context[18], functions[efunc_GenCommandm_Native]);
  refalrts::alloc_open_bracket(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_gen_GenProgramm_Native_A1]);
  refalrts::reinit_open_call(context[15]);
  refalrts::reinit_close_call(context[16]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenProgramm_Native("GenProgram-Native", 0U, 0U, func_GenProgramm_Native);


static refalrts::FnResult func_SetLineNumbers(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 79 elems
  refalrts::Iter context[79];
  refalrts::zeros( context, 79 );
  // </0 & SetLineNumbers/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetLineNumbers/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 s.new#3/13 e.new#4/2 >/1
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
  // closed e.new#4 as range 2
  do {
    // </0 & SetLineNumbers/4 (/7 e.new#8/14 )/8 (/11 e.new#9/16 )/12 s.new#5/13 (/22 e.new#6/20 )/23 e.new#7/18 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[2];
    context[19] = context[3];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.new#8 as range 14
    // closed e.new#9 as range 16
    // closed e.new#6 as range 20
    // closed e.new#7 as range 18
    do {
      // </0 & SetLineNumbers/4 (/7 e.new#14/24 )/8 (/11 e.new#15/26 )/12 s.new#10/13 (/22 s.new#12/32 e.new#13/28 )/23 e.new#11/30 >/1
      context[24] = context[14];
      context[25] = context[15];
      context[26] = context[16];
      context[27] = context[17];
      context[28] = context[20];
      context[29] = context[21];
      context[30] = context[18];
      context[31] = context[19];
      // closed e.new#14 as range 24
      // closed e.new#15 as range 26
      // closed e.new#11 as range 30
      if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
        continue;
      // closed e.new#13 as range 28
      do {
        // </0 & SetLineNumbers/4 (/7 e.new#19/33 )/8 (/11 e.new#20/35 )/12 s.new#16/13 (/22 # NativeInsertBegin/32 t.new#18/41 )/23 e.new#17/39 >/1
        context[33] = context[24];
        context[34] = context[25];
        context[35] = context[26];
        context[36] = context[27];
        context[37] = context[28];
        context[38] = context[29];
        context[39] = context[30];
        context[40] = context[31];
        if( ! refalrts::ident_term( identifiers[ident_NativeInsertBegin], context[32] ) )
          continue;
        // closed e.new#19 as range 33
        // closed e.new#20 as range 35
        // closed e.new#17 as range 39
        context[42] = refalrts::tvar_left( context[41], context[37], context[38] );
        if( ! context[42] )
          continue;
        if( ! refalrts::empty_seq( context[37], context[38] ) )
          continue;
        do {
          // </0 & SetLineNumbers/4 (/7 e.Source#1/43 )/8 (/11 e.Target#1/45 )/12 s.LineNum#1/13 (/22 # NativeInsertBegin/32 s.SrcLineNum#1/41 )/23 e.Lines#1/47 >/1
          context[43] = context[33];
          context[44] = context[34];
          context[45] = context[35];
          context[46] = context[36];
          context[47] = context[39];
          context[48] = context[40];
          if( ! refalrts::svar_term( context[41], context[41] ) )
            continue;
          // closed e.Source#1 as range 43
          // closed e.Target#1 as range 45
          // closed e.Lines#1 as range 47
          //DEBUG: s.SrcLineNum#1: 41
          //DEBUG: s.LineNum#1: 13
          //DEBUG: e.Source#1: 43
          //DEBUG: e.Target#1: 45
          //DEBUG: e.Lines#1: 47

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/49"#line "/50 Tile{ HalfReuse: </22 HalfReuse: & Symb/32 AsIs: s.SrcLineNum#1/41 } >/52" \""/53 </55 & EscapeString/56 e.Source#1/43/57 >/59 '\"'/60 )/61 Tile{ AsIs: </0 AsIs: & SetLineNumbers/4 AsIs: (/7 AsIs: e.Source#1/43 AsIs: )/8 AsIs: (/11 AsIs: e.Target#1/45 AsIs: )/12 } </62 & Add/63 1/64 Tile{ AsIs: s.LineNum#1/13 } Tile{ HalfReuse: >/23 AsIs: e.Lines#1/47 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[49]);
          refalrts::alloc_chars(vm, context[50], context[51], "#line ", 6);
          refalrts::alloc_close_call(vm, context[52]);
          refalrts::alloc_chars(vm, context[53], context[54], " \"", 2);
          refalrts::alloc_open_call(vm, context[55]);
          refalrts::alloc_name(vm, context[56], functions[efunc_EscapeString]);
          refalrts::copy_evar(vm, context[57], context[58], context[43], context[44]);
          refalrts::alloc_close_call(vm, context[59]);
          refalrts::alloc_char(vm, context[60], '\"');
          refalrts::alloc_close_bracket(vm, context[61]);
          refalrts::alloc_open_call(vm, context[62]);
          refalrts::alloc_name(vm, context[63], functions[efunc_Add]);
          refalrts::alloc_number(vm, context[64], 1UL);
          refalrts::reinit_open_call(context[22]);
          refalrts::reinit_name(context[32], functions[efunc_Symb]);
          refalrts::reinit_close_call(context[23]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[23] );
          refalrts::push_stack( vm, context[62] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[49], context[61] );
          refalrts::push_stack( vm, context[59] );
          refalrts::push_stack( vm, context[55] );
          refalrts::push_stack( vm, context[52] );
          refalrts::push_stack( vm, context[22] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[23];
          res = refalrts::splice_evar( res, context[13], context[13] );
          res = refalrts::splice_evar( res, context[62], context[64] );
          res = refalrts::splice_evar( res, context[0], context[12] );
          res = refalrts::splice_evar( res, context[52], context[61] );
          res = refalrts::splice_evar( res, context[22], context[41] );
          res = refalrts::splice_evar( res, context[49], context[51] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & SetLineNumbers/4 (/7 e.new#26/43 )/8 (/11 e.new#27/45 )/12 s.new#21/13 (/22 # NativeInsertBegin/32 (/41 s.new#23/51 t.new#24/52 e.new#25/49 )/42 )/23 e.new#22/47 >/1
        context[43] = context[33];
        context[44] = context[34];
        context[45] = context[35];
        context[46] = context[36];
        context[47] = context[39];
        context[48] = context[40];
        context[49] = 0;
        context[50] = 0;
        if( ! refalrts::brackets_term( context[49], context[50], context[41] ) )
          continue;
        // closed e.new#26 as range 43
        // closed e.new#27 as range 45
        // closed e.new#22 as range 47
        if( ! refalrts::svar_left( context[51], context[49], context[50] ) )
          continue;
        context[53] = refalrts::tvar_left( context[52], context[49], context[50] );
        if( ! context[53] )
          continue;
        // closed e.new#25 as range 49
        do {
          // </0 & SetLineNumbers/4 (/7 e.Source#1/54 )/8 (/11 e.Target#1/56 )/12 s.LineNum#1/13 (/22 # NativeInsertBegin/32 (/41 # FileLine/51 s.Line#1/52 e.File#1/58 )/42 )/23 e.Lines#1/60 >/1
          context[54] = context[43];
          context[55] = context[44];
          context[56] = context[45];
          context[57] = context[46];
          context[58] = context[49];
          context[59] = context[50];
          context[60] = context[47];
          context[61] = context[48];
          if( ! refalrts::svar_term( context[52], context[52] ) )
            continue;
          if( ! refalrts::ident_term( identifiers[ident_FileLine], context[51] ) )
            continue;
          // closed e.Source#1 as range 54
          // closed e.Target#1 as range 56
          // closed e.File#1 as range 58
          // closed e.Lines#1 as range 60
          //DEBUG: s.Line#1: 52
          //DEBUG: s.LineNum#1: 13
          //DEBUG: e.Source#1: 54
          //DEBUG: e.Target#1: 56
          //DEBUG: e.File#1: 58
          //DEBUG: e.Lines#1: 60

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.LineNum#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/62"#lin"/63 Tile{ HalfReuse: 'e'/22 HalfReuse: ' '/32 HalfReuse: </41 HalfReuse: & Symb/51 AsIs: s.Line#1/52 } >/65" \""/66 </68 & EscapeString/69 Tile{ AsIs: e.File#1/58 } >/70 '\"'/71 )/72 Tile{ AsIs: </0 AsIs: & SetLineNumbers/4 AsIs: (/7 AsIs: e.Source#1/54 AsIs: )/8 AsIs: (/11 AsIs: e.Target#1/56 AsIs: )/12 } </73 & Add/74 1/75 Tile{ HalfReuse: s.LineNum1 #13/42 HalfReuse: >/23 AsIs: e.Lines#1/60 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[62]);
          refalrts::alloc_chars(vm, context[63], context[64], "#lin", 4);
          refalrts::alloc_close_call(vm, context[65]);
          refalrts::alloc_chars(vm, context[66], context[67], " \"", 2);
          refalrts::alloc_open_call(vm, context[68]);
          refalrts::alloc_name(vm, context[69], functions[efunc_EscapeString]);
          refalrts::alloc_close_call(vm, context[70]);
          refalrts::alloc_char(vm, context[71], '\"');
          refalrts::alloc_close_bracket(vm, context[72]);
          refalrts::alloc_open_call(vm, context[73]);
          refalrts::alloc_name(vm, context[74], functions[efunc_Add]);
          refalrts::alloc_number(vm, context[75], 1UL);
          refalrts::reinit_char(context[22], 'e');
          refalrts::reinit_char(context[32], ' ');
          refalrts::reinit_open_call(context[41]);
          refalrts::reinit_name(context[51], functions[efunc_Symb]);
          refalrts::reinit_svar( context[42], context[13] );
          refalrts::reinit_close_call(context[23]);
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[23] );
          refalrts::push_stack( vm, context[73] );
          refalrts::link_brackets( context[11], context[12] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[62], context[72] );
          refalrts::push_stack( vm, context[70] );
          refalrts::push_stack( vm, context[68] );
          refalrts::push_stack( vm, context[65] );
          refalrts::push_stack( vm, context[41] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[42];
          res = refalrts::splice_evar( res, context[73], context[75] );
          res = refalrts::splice_evar( res, context[0], context[12] );
          res = refalrts::splice_evar( res, context[70], context[72] );
          res = refalrts::splice_evar( res, context[58], context[59] );
          res = refalrts::splice_evar( res, context[65], context[69] );
          res = refalrts::splice_evar( res, context[22], context[52] );
          res = refalrts::splice_evar( res, context[62], context[64] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & SetLineNumbers/4 (/7 e.Source#1/54 )/8 (/11 e.Target#1/56 )/12 s.LineNum#1/13 (/22 # NativeInsertBegin/32 (/41 # FileRowCol/51 (/52 s.Line#1/64 s.Col#1/65 )/53 e.File#1/58 )/42 )/23 e.Lines#1/60 >/1
        context[54] = context[43];
        context[55] = context[44];
        context[56] = context[45];
        context[57] = context[46];
        context[58] = context[49];
        context[59] = context[50];
        context[60] = context[47];
        context[61] = context[48];
        context[62] = 0;
        context[63] = 0;
        if( ! refalrts::brackets_term( context[62], context[63], context[52] ) )
          continue;
        if( ! refalrts::ident_term( identifiers[ident_FileRowCol], context[51] ) )
          continue;
        // closed e.Source#1 as range 54
        // closed e.Target#1 as range 56
        // closed e.File#1 as range 58
        // closed e.Lines#1 as range 60
        if( ! refalrts::svar_left( context[64], context[62], context[63] ) )
          continue;
        if( ! refalrts::svar_left( context[65], context[62], context[63] ) )
          continue;
        if( ! refalrts::empty_seq( context[62], context[63] ) )
          continue;
        //DEBUG: s.LineNum#1: 13
        //DEBUG: e.Source#1: 54
        //DEBUG: e.Target#1: 56
        //DEBUG: e.File#1: 58
        //DEBUG: e.Lines#1: 60
        //DEBUG: s.Line#1: 64
        //DEBUG: s.Col#1: 65

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.LineNum#1/13 {REMOVED TILE} s.Col#1/65 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/66"#li"/67 Tile{ HalfReuse: 'n'/22 HalfReuse: 'e'/32 HalfReuse: ' '/41 HalfReuse: </51 HalfReuse: & Symb/52 AsIs: s.Line#1/64 } >/69" \""/70 </72 & EscapeString/73 Tile{ AsIs: e.File#1/58 } >/74 '\"'/75 Tile{ AsIs: )/53 } Tile{ AsIs: </0 AsIs: & SetLineNumbers/4 AsIs: (/7 AsIs: e.Source#1/54 AsIs: )/8 AsIs: (/11 AsIs: e.Target#1/56 AsIs: )/12 } </76 & Add/77 1/78 Tile{ HalfReuse: s.LineNum1 #13/42 HalfReuse: >/23 AsIs: e.Lines#1/60 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[66]);
        refalrts::alloc_chars(vm, context[67], context[68], "#li", 3);
        refalrts::alloc_close_call(vm, context[69]);
        refalrts::alloc_chars(vm, context[70], context[71], " \"", 2);
        refalrts::alloc_open_call(vm, context[72]);
        refalrts::alloc_name(vm, context[73], functions[efunc_EscapeString]);
        refalrts::alloc_close_call(vm, context[74]);
        refalrts::alloc_char(vm, context[75], '\"');
        refalrts::alloc_open_call(vm, context[76]);
        refalrts::alloc_name(vm, context[77], functions[efunc_Add]);
        refalrts::alloc_number(vm, context[78], 1UL);
        refalrts::reinit_char(context[22], 'n');
        refalrts::reinit_char(context[32], 'e');
        refalrts::reinit_char(context[41], ' ');
        refalrts::reinit_open_call(context[51]);
        refalrts::reinit_name(context[52], functions[efunc_Symb]);
        refalrts::reinit_svar( context[42], context[13] );
        refalrts::reinit_close_call(context[23]);
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::push_stack( vm, context[23] );
        refalrts::push_stack( vm, context[76] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[66], context[53] );
        refalrts::push_stack( vm, context[74] );
        refalrts::push_stack( vm, context[72] );
        refalrts::push_stack( vm, context[69] );
        refalrts::push_stack( vm, context[51] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[42];
        res = refalrts::splice_evar( res, context[76], context[78] );
        res = refalrts::splice_evar( res, context[0], context[12] );
        res = refalrts::splice_evar( res, context[53], context[53] );
        res = refalrts::splice_evar( res, context[74], context[75] );
        res = refalrts::splice_evar( res, context[58], context[59] );
        res = refalrts::splice_evar( res, context[69], context[73] );
        res = refalrts::splice_evar( res, context[22], context[64] );
        res = refalrts::splice_evar( res, context[66], context[68] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SetLineNumbers/4 (/7 e.Source#1/33 )/8 (/11 e.Target#1/35 )/12 s.LineNum#1/13 (/22 # NativeInsertEnd/32 )/23 e.Lines#1/37 >/1
      context[33] = context[24];
      context[34] = context[25];
      context[35] = context[26];
      context[36] = context[27];
      context[37] = context[30];
      context[38] = context[31];
      if( ! refalrts::ident_term( identifiers[ident_NativeInsertEnd], context[32] ) )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;
      // closed e.Source#1 as range 33
      // closed e.Target#1 as range 35
      // closed e.Lines#1 as range 37
      //DEBUG: s.LineNum#1: 13
      //DEBUG: e.Source#1: 33
      //DEBUG: e.Target#1: 35
      //DEBUG: e.Lines#1: 37

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/39"#line "/40 </42 & Symb/43 </44 & Add/45 1/46 Tile{ AsIs: s.LineNum#1/13 } >/47 >/48" \""/49 </51 & EscapeString/52 e.Target#1/35/53 >/55 '\"'/56 )/57 Tile{ AsIs: </0 AsIs: & SetLineNumbers/4 AsIs: (/7 AsIs: e.Source#1/33 AsIs: )/8 AsIs: (/11 AsIs: e.Target#1/35 AsIs: )/12 } </58 & Add/59 Tile{ HalfReuse: 1/22 HalfReuse: s.LineNum1 #13/32 HalfReuse: >/23 AsIs: e.Lines#1/37 AsIs: >/1 ]] }
      refalrts::alloc_open_bracket(vm, context[39]);
      refalrts::alloc_chars(vm, context[40], context[41], "#line ", 6);
      refalrts::alloc_open_call(vm, context[42]);
      refalrts::alloc_name(vm, context[43], functions[efunc_Symb]);
      refalrts::alloc_open_call(vm, context[44]);
      refalrts::alloc_name(vm, context[45], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[46], 1UL);
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::alloc_close_call(vm, context[48]);
      refalrts::alloc_chars(vm, context[49], context[50], " \"", 2);
      refalrts::alloc_open_call(vm, context[51]);
      refalrts::alloc_name(vm, context[52], functions[efunc_EscapeString]);
      refalrts::copy_evar(vm, context[53], context[54], context[35], context[36]);
      refalrts::alloc_close_call(vm, context[55]);
      refalrts::alloc_char(vm, context[56], '\"');
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::alloc_open_call(vm, context[58]);
      refalrts::alloc_name(vm, context[59], functions[efunc_Add]);
      refalrts::reinit_number(context[22], 1UL);
      refalrts::reinit_svar( context[32], context[13] );
      refalrts::reinit_close_call(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[23] );
      refalrts::push_stack( vm, context[58] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[39], context[57] );
      refalrts::push_stack( vm, context[55] );
      refalrts::push_stack( vm, context[51] );
      refalrts::push_stack( vm, context[48] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[44] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[22];
      res = refalrts::splice_evar( res, context[58], context[59] );
      res = refalrts::splice_evar( res, context[0], context[12] );
      res = refalrts::splice_evar( res, context[47], context[57] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[39], context[46] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SetLineNumbers/4 (/7 e.Source#1/24 )/8 (/11 e.Target#1/26 )/12 s.LineNum#1/13 (/22 e.OtherLine#1/28 )/23 e.Lines#1/30 >/1
    context[24] = context[14];
    context[25] = context[15];
    context[26] = context[16];
    context[27] = context[17];
    context[28] = context[20];
    context[29] = context[21];
    context[30] = context[18];
    context[31] = context[19];
    // closed e.Source#1 as range 24
    // closed e.Target#1 as range 26
    // closed e.OtherLine#1 as range 28
    // closed e.Lines#1 as range 30
    //DEBUG: s.LineNum#1: 13
    //DEBUG: e.Source#1: 24
    //DEBUG: e.Target#1: 26
    //DEBUG: e.OtherLine#1: 28
    //DEBUG: e.Lines#1: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/22 } Tile{ AsIs: e.OtherLine#1/28 } )/32 Tile{ AsIs: </0 AsIs: & SetLineNumbers/4 AsIs: (/7 AsIs: e.Source#1/24 AsIs: )/8 AsIs: (/11 AsIs: e.Target#1/26 AsIs: )/12 } </33 & Add/34 1/35 Tile{ AsIs: s.LineNum#1/13 } Tile{ HalfReuse: >/23 AsIs: e.Lines#1/30 AsIs: >/1 ]] }
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::alloc_open_call(vm, context[33]);
    refalrts::alloc_name(vm, context[34], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[35], 1UL);
    refalrts::reinit_close_call(context[23]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[33] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[22], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[23];
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetLineNumbers/4 (/7 e.Source#1/5 )/8 (/11 e.Target#1/9 )/12 s.LineNum#1/13 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Source#1 as range 5
  // closed e.Target#1 as range 9
  //DEBUG: s.LineNum#1: 13
  //DEBUG: e.Source#1: 5
  //DEBUG: e.Target#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & SetLineNumbers/4 (/7 e.Source#1/5 )/8 (/11 e.Target#1/9 )/12 s.LineNum#1/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetLineNumbers("SetLineNumbers", COOKIE1_, COOKIE2_, func_SetLineNumbers);


static refalrts::FnResult func_ContextRangem_B(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ContextRange-B/4 s.RangeOffset#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.RangeOffset#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"context["/6 Tile{ AsIs: </0 Reuse: & Symb/4 AsIs: s.RangeOffset#1/5 AsIs: >/1 } ']'/8 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "context[", 8);
  refalrts::alloc_char(vm, context[8], ']');
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ContextRangem_B("ContextRange-B", COOKIE1_, COOKIE2_, func_ContextRangem_B);


static refalrts::FnResult func_ContextRangem_E(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ContextRange-E/4 s.RangeOffset#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.RangeOffset#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"context["/6 </8 & Symb/9 </10 Tile{ HalfReuse: & Add/0 HalfReuse: 1/4 AsIs: s.RangeOffset#1/5 AsIs: >/1 } >/11 ']'/12 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "context[", 8);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_Symb]);
  refalrts::alloc_open_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::alloc_char(vm, context[12], ']');
  refalrts::reinit_name(context[0], functions[efunc_Add]);
  refalrts::reinit_number(context[4], 1UL);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ContextRangem_E("ContextRange-E", COOKIE1_, COOKIE2_, func_ContextRangem_E);


static refalrts::FnResult func_ContextRange(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & ContextRange/4 s.RangeOffset#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.RangeOffset#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ContextRange-B/4 AsIs: s.RangeOffset#1/5 AsIs: >/1 }", "/6 </8 & ContextRange-E/9 s.RangeOffset#1/5/10 >/11 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], ", ", 2);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_ContextRangem_E]);
  refalrts::copy_stvar(vm, context[10], context[5]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_ContextRangem_B]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ContextRange("ContextRange", COOKIE1_, COOKIE2_, func_ContextRange);


static refalrts::FnResult func_ContextItem(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ContextItem/4 s.ItemNumber#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.ItemNumber#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"context["/6 Tile{ AsIs: </0 Reuse: & Symb/4 AsIs: s.ItemNumber#1/5 AsIs: >/1 } ']'/8 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "context[", 8);
  refalrts::alloc_char(vm, context[8], ']');
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ContextItem("ContextItem", COOKIE1_, COOKIE2_, func_ContextItem);


static refalrts::FnResult func_PrintBracketsVarInit(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & PrintBracketsVarInit/4 e.Indent#1/2 s.InnerBrackets#1/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Indent#1 as range 2
  //DEBUG: s.InnerBrackets#1: 5
  //DEBUG: e.Indent#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/6 Tile{ AsIs: e.Indent#1/2 } Tile{ AsIs: </0 Reuse: & ContextRange-B/4 } Tile{ AsIs: s.InnerBrackets#1/5 AsIs: >/1 }" = 0;"/7 )/9 (/10 e.Indent#1/2/11 </13 & ContextRange-E/14 s.InnerBrackets#1/5/15 >/16" = 0;"/17 )/19 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[6]);
  refalrts::alloc_chars(vm, context[7], context[8], " = 0;", 5);
  refalrts::alloc_close_bracket(vm, context[9]);
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::copy_evar(vm, context[11], context[12], context[2], context[3]);
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_ContextRangem_E]);
  refalrts::copy_stvar(vm, context[15], context[5]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_chars(vm, context[17], context[18], " = 0;", 5);
  refalrts::alloc_close_bracket(vm, context[19]);
  refalrts::update_name(context[4], functions[efunc_ContextRangem_B]);
  refalrts::link_brackets( context[10], context[19] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[6], context[9] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[19] );
  res = refalrts::splice_evar( res, context[5], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintBracketsVarInit("PrintBracketsVarInit", COOKIE1_, COOKIE2_, func_PrintBracketsVarInit);


static refalrts::FnResult func_FunctionImage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & FunctionImage/4 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"functions[efunc_"/5 Tile{ AsIs: </0 Reuse: & CName/4 AsIs: e.Name#1/2 AsIs: >/1 } ']'/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "functions[efunc_", 16);
  refalrts::alloc_char(vm, context[7], ']');
  refalrts::update_name(context[4], functions[efunc_CName]);
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

static refalrts::NativeReference nat_ref_FunctionImage("FunctionImage", COOKIE1_, COOKIE2_, func_FunctionImage);


static refalrts::FnResult func_IdentifierImage(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & IdentifierImage/4 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ }"identifiers[ident_"/5 Tile{ AsIs: </0 Reuse: & CName/4 AsIs: e.Name#1/2 AsIs: >/1 } ']'/7 Tile{ ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "identifiers[ident_", 18);
  refalrts::alloc_char(vm, context[7], ']');
  refalrts::update_name(context[4], functions[efunc_CName]);
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

static refalrts::NativeReference nat_ref_IdentifierImage("IdentifierImage", COOKIE1_, COOKIE2_, func_IdentifierImage);


static refalrts::FnResult func_BaseCName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & BaseCName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & BaseCName/4 e.Name#1/5 # Hash/9 s.Cookie1#1/8 s.Cookie2#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_right( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_right( context[8], context[5], context[6] ) )
      continue;
    context[9] = refalrts::ident_right( identifiers[ident_Hash], context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: s.Cookie2#1: 7
    //DEBUG: s.Cookie1#1: 8
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Cookie1#1/8 s.Cookie2#1/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CName/4 AsIs: e.Name#1/5 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name(context[4], functions[efunc_CName]);
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

  // </0 & BaseCName/4 e.Name#1/2 >/1
  // closed e.Name#1 as range 2
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CName/4 AsIs: e.Name#1/2 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_CName]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BaseCName("BaseCName", COOKIE1_, COOKIE2_, func_BaseCName);


static refalrts::FnResult func_NameAndCookies(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & NameAndCookies/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & NameAndCookies/4 e.new#1/2 # Hash/7 s.new#2/6 s.new#3/5 >/1
  if( ! refalrts::svar_right( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::ident_right( identifiers[ident_Hash], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 2
  do {
    // </0 & NameAndCookies/4 e.Name#1/8 # Hash/7 0/6 0/5 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::number_term( 0UL, context[6] ) )
      continue;
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Name#1 as range 8
    //DEBUG: e.Name#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } '\"'/10 Tile{ AsIs: </0 Reuse: & DisplayCName/4 AsIs: e.Name#1/8 HalfReuse: >/7 HalfReuse: '\"'/6 HalfReuse: ','/5 HalfReuse: ' '/1 }"0U, 0U"/11 Tile{ ]] }
    refalrts::alloc_char(vm, context[10], '\"');
    refalrts::alloc_chars(vm, context[11], context[12], "0U, 0U", 6);
    refalrts::update_name(context[4], functions[efunc_DisplayCName]);
    refalrts::reinit_close_call(context[7]);
    refalrts::reinit_char(context[6], '\"');
    refalrts::reinit_char(context[5], ',');
    refalrts::reinit_char(context[1], ' ');
    refalrts::push_stack( vm, context[7] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & NameAndCookies/4 e.Name#1/2 # Hash/7 s.Cookie1#1/6 s.Cookie2#1/5 >/1
  // closed e.Name#1 as range 2
  //DEBUG: s.Cookie1#1: 6
  //DEBUG: s.Cookie2#1: 5
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Cookie1#1/6 s.Cookie2#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } '\"'/8 Tile{ AsIs: </0 Reuse: & DisplayCName/4 AsIs: e.Name#1/2 HalfReuse: >/7 }"\", COOKIE1_, COOKIE2"/9 Tile{ HalfReuse: '_'/1 ]] }
  refalrts::alloc_char(vm, context[8], '\"');
  refalrts::alloc_chars(vm, context[9], context[10], "\", COOKIE1_, COOKIE2", 20);
  refalrts::update_name(context[4], functions[efunc_DisplayCName]);
  refalrts::reinit_close_call(context[7]);
  refalrts::reinit_char(context[1], '_');
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameAndCookies("NameAndCookies", COOKIE1_, COOKIE2_, func_NameAndCookies);


static refalrts::FnResult func_FormatOffsets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & FormatOffsets/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & FormatOffsets/4 e.Chars#1/7 # Offset/11 s.Offset#1/12 e.Text#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::ident_left( identifiers[ident_Offset], context[9], context[10] );
      if( ! context[11] )
        continue;
      if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
        continue;
      // closed e.Text#1 as range 9
      //DEBUG: e.Chars#1: 7
      //DEBUG: s.Offset#1: 12
      //DEBUG: e.Text#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Chars#1/7 } </13 Tile{ HalfReuse: & Symb/11 AsIs: s.Offset#1/12 } >/14 Tile{ AsIs: </0 AsIs: & FormatOffsets/4 } Tile{ AsIs: e.Text#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_open_call(vm, context[13]);
      refalrts::alloc_close_call(vm, context[14]);
      refalrts::reinit_name(context[11], functions[efunc_Symb]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[14] );
      refalrts::push_stack( vm, context[13] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[14], context[14] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FormatOffsets/4 e.Chars#1/2 >/1
  // closed e.Chars#1 as range 2
  //DEBUG: e.Chars#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FormatOffsets/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Chars#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FormatOffsets("FormatOffsets", COOKIE1_, COOKIE2_, func_FormatOffsets);


static refalrts::FnResult func_gen_GenCommandm_Native_S41L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & GenCommand-Native$41\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenCommand-Native$41\1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
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
    // </0 & GenCommand-Native$41\1/4 (/7 e.Indent#1/10 )/8 # RIGHT-EDGE/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[9] ) )
      continue;
    // closed e.Indent#1 as range 10
    //DEBUG: e.Indent#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/10 HalfReuse: 'r'/8 HalfReuse: 'e'/9 HalfReuse: 'f'/1 } 'a'/12 Tile{ HalfReuse: 'l'/0 HalfReuse: 'r'/4 }"ts::Iter res = arg_end->next;"/13 )/15 Tile{ ]] }
    refalrts::alloc_char(vm, context[12], 'a');
    refalrts::alloc_chars(vm, context[13], context[14], "ts::Iter res = arg_end->next;", 29);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::reinit_char(context[8], 'r');
    refalrts::reinit_char(context[9], 'e');
    refalrts::reinit_char(context[1], 'f');
    refalrts::reinit_char(context[0], 'l');
    refalrts::reinit_char(context[4], 'r');
    refalrts::link_brackets( context[7], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenCommand-Native$41\1/4 (/7 e.Indent#1/5 )/8 s.Offset#2/9 >/1
  // closed e.Indent#1 as range 5
  //DEBUG: s.Offset#2: 9
  //DEBUG: e.Indent#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'r'/8 }"efalrts::Iter res = "/10 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Offset#2/9 AsIs: >/1 } ';'/12 )/13 Tile{ ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "efalrts::Iter res = ", 20);
  refalrts::alloc_char(vm, context[12], ';');
  refalrts::alloc_close_bracket(vm, context[13]);
  refalrts::reinit_char(context[8], 'r');
  refalrts::update_name(context[4], functions[efunc_ContextItem]);
  refalrts::link_brackets( context[7], context[13] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenCommandm_Native_S41L1("GenCommand-Native$41\\1", COOKIE1_, COOKIE2_, func_gen_GenCommandm_Native_S41L1);


static refalrts::FnResult func_gen_GenCommandm_Native_S59L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & GenCommand-Native$59\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenCommand-Native$59\1/4 (/7 e.new#1/5 )/8 s.new#2/9 >/1
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
    // </0 & GenCommand-Native$59\1/4 (/7 e.Indent#1/10 )/8 # LEFT-EDGE/9 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[9] ) )
      continue;
    // closed e.Indent#1 as range 10
    //DEBUG: e.Indent#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/10 HalfReuse: 'r'/8 HalfReuse: 'e'/9 HalfReuse: 'f'/1 } 'a'/12 Tile{ HalfReuse: 'l'/0 HalfReuse: 'r'/4 }"ts::splice_to_freelist_open( vm, trash_prev, res );"/13 )/15 Tile{ ]] }
    refalrts::alloc_char(vm, context[12], 'a');
    refalrts::alloc_chars(vm, context[13], context[14], "ts::splice_to_freelist_open( vm, trash_prev, res );", 51);
    refalrts::alloc_close_bracket(vm, context[15]);
    refalrts::reinit_char(context[8], 'r');
    refalrts::reinit_char(context[9], 'e');
    refalrts::reinit_char(context[1], 'f');
    refalrts::reinit_char(context[0], 'l');
    refalrts::reinit_char(context[4], 'r');
    refalrts::link_brackets( context[7], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenCommand-Native$59\1/4 (/7 e.Indent#1/5 )/8 s.Offset#2/9 >/1
  // closed e.Indent#1 as range 5
  //DEBUG: s.Offset#2: 9
  //DEBUG: e.Indent#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'r'/8 }"efalrts::splice_to_freelist_open( vm, "/10 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Offset#2/9 AsIs: >/1 }", res );"/12 )/14 Tile{ ]] }
  refalrts::alloc_chars(vm, context[10], context[11], "efalrts::splice_to_freelist_open( vm, ", 38);
  refalrts::alloc_chars(vm, context[12], context[13], ", res );", 8);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::reinit_char(context[8], 'r');
  refalrts::update_name(context[4], functions[efunc_ContextItem]);
  refalrts::link_brackets( context[7], context[14] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenCommandm_Native_S59L1("GenCommand-Native$59\\1", COOKIE1_, COOKIE2_, func_gen_GenCommandm_Native_S59L1);


static refalrts::FnResult func_GenCommandm_Native(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 70 elems
  refalrts::Iter context[70];
  refalrts::zeros( context, 70 );
  // </0 & GenCommand-Native/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenCommand-Native/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 e.new#3/9 )/12 >/1
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
    // </0 & GenCommand-Native/4 (/7 e.Indent#1/14 )/8 (/11 # CmdComment/13 e.Text#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdComment], context[13] ) )
      continue;
    // closed e.Indent#1 as range 14
    // closed e.Text#1 as range 16
    //DEBUG: e.Indent#1: 14
    //DEBUG: e.Text#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/14 AsIs: )/8 AsIs: (/11 } e.Indent#1/14/18 Tile{ HalfReuse: '/'/4 } '/'/20 Tile{ AsIs: </0 } Tile{ HalfReuse: & FormatOffsets/13 AsIs: e.Text#1/16 HalfReuse: >/12 HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[18], context[19], context[14], context[15]);
    refalrts::alloc_char(vm, context[20], '/');
    refalrts::reinit_char(context[4], '/');
    refalrts::reinit_name(context[13], functions[efunc_FormatOffsets]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.Indent#1/14 )/8 (/11 # CmdCEnum-Start/13 e.Prefix#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdCEnumm_Start], context[13] ) )
      continue;
    // closed e.Indent#1 as range 14
    // closed e.Prefix#1 as range 16
    //DEBUG: e.Indent#1: 14
    //DEBUG: e.Prefix#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/14 AsIs: )/8 AsIs: (/11 HalfReuse: )/13 } (/18 e.Indent#1/14/19 Tile{ HalfReuse: 'e'/0 HalfReuse: 'n'/4 }"um "/21 Tile{ AsIs: e.Prefix#1/16 } ' '/23 Tile{ HalfReuse: '{'/12 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::copy_evar(vm, context[19], context[20], context[14], context[15]);
    refalrts::alloc_chars(vm, context[21], context[22], "um ", 3);
    refalrts::alloc_char(vm, context[23], ' ');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::reinit_char(context[0], 'e');
    refalrts::reinit_char(context[4], 'n');
    refalrts::reinit_char(context[12], '{');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[18], context[1] );
    refalrts::link_brackets( context[11], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.Indent#1/14 )/8 (/11 # CmdCEnum-End/13 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdCEnumm_End], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.Indent#1 as range 14
    //DEBUG: e.Indent#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/14/16 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/14 HalfReuse: '}'/8 HalfReuse: ';'/11 HalfReuse: )/13 HalfReuse: (/12 HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[16], context[17], context[14], context[15]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_char(context[8], '}');
    refalrts::reinit_char(context[11], ';');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[7], context[13] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.new#4/14 )/8 (/11 s.new#5/13 t.new#6/18 e.new#7/16 s.new#8/20 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.new#4 as range 14
    context[19] = refalrts::tvar_left( context[18], context[16], context[17] );
    if( ! context[19] )
      continue;
    if( ! refalrts::svar_right( context[20], context[16], context[17] ) )
      continue;
    // closed e.new#7 as range 16
    do {
      // </0 & GenCommand-Native/4 (/7 e.Indent#1/21 )/8 (/11 # CmdCEnum-Item/13 (/18 e.Prefix#1/25 )/19 e.Name#1/23 s.Id#1/20 )/12 >/1
      context[21] = context[14];
      context[22] = context[15];
      context[23] = context[16];
      context[24] = context[17];
      context[25] = 0;
      context[26] = 0;
      if( ! refalrts::brackets_term( context[25], context[26], context[18] ) )
        continue;
      if( ! refalrts::ident_term( identifiers[ident_CmdCEnumm_Item], context[13] ) )
        continue;
      // closed e.Indent#1 as range 21
      // closed e.Prefix#1 as range 25
      // closed e.Name#1 as range 23
      //DEBUG: s.Id#1: 20
      //DEBUG: e.Indent#1: 21
      //DEBUG: e.Prefix#1: 25
      //DEBUG: e.Name#1: 23

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/21 AsIs: )/8 AsIs: (/11 } e.Indent#1/21/27 Tile{ HalfReuse: ' '/13 HalfReuse: ' '/18 AsIs: e.Prefix#1/25 HalfReuse: '_'/19 } Tile{ AsIs: </0 Reuse: & CName/4 } Tile{ AsIs: e.Name#1/23 } >/29" = "/30 </32 & Symb/33 Tile{ AsIs: s.Id#1/20 HalfReuse: >/12 HalfReuse: ','/1 } )/34 Tile{ ]] }
      refalrts::copy_evar(vm, context[27], context[28], context[21], context[22]);
      refalrts::alloc_close_call(vm, context[29]);
      refalrts::alloc_chars(vm, context[30], context[31], " = ", 3);
      refalrts::alloc_open_call(vm, context[32]);
      refalrts::alloc_name(vm, context[33], functions[efunc_Symb]);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::reinit_char(context[13], ' ');
      refalrts::reinit_char(context[18], ' ');
      refalrts::reinit_char(context[19], '_');
      refalrts::update_name(context[4], functions[efunc_CName]);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_char(context[1], ',');
      refalrts::link_brackets( context[11], context[34] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[34], context[34] );
      res = refalrts::splice_evar( res, context[20], context[1] );
      res = refalrts::splice_evar( res, context[29], context[33] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[19] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-Native/4 (/7 e.Indent#1/21 )/8 (/11 # CmdCookieNS/13 s.Cookie1#1/18 s.Cookie2#1/20 )/12 >/1
    context[21] = context[14];
    context[22] = context[15];
    if( ! refalrts::svar_term( context[18], context[18] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_CmdCookieNS], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Indent#1 as range 21
    //DEBUG: s.Cookie1#1: 18
    //DEBUG: s.Cookie2#1: 20
    //DEBUG: e.Indent#1: 21

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/21 AsIs: )/8 AsIs: (/11 HalfReuse: '#'/13 }"define cookie_ns cookie_ns_"/23 Tile{ AsIs: </0 Reuse: & Symb/4 } Tile{ AsIs: s.Cookie1#1/18 } >/25 '_'/26 </27 & Symb/28 Tile{ AsIs: s.Cookie2#1/20 HalfReuse: >/12 HalfReuse: )/1 } (/29"#define COOKIE1_ "/30 </32 & Symb/33 s.Cookie1#1/18/34 >/35 'U'/36 )/37 (/38"#define COOKIE2_ "/39 </41 & Symb/42 s.Cookie2#1/20/43 >/44 'U'/45 )/46 Tile{ ]] }
    refalrts::alloc_chars(vm, context[23], context[24], "define cookie_ns cookie_ns_", 27);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_char(vm, context[26], '_');
    refalrts::alloc_open_call(vm, context[27]);
    refalrts::alloc_name(vm, context[28], functions[efunc_Symb]);
    refalrts::alloc_open_bracket(vm, context[29]);
    refalrts::alloc_chars(vm, context[30], context[31], "#define COOKIE1_ ", 17);
    refalrts::alloc_open_call(vm, context[32]);
    refalrts::alloc_name(vm, context[33], functions[efunc_Symb]);
    refalrts::copy_stvar(vm, context[34], context[18]);
    refalrts::alloc_close_call(vm, context[35]);
    refalrts::alloc_char(vm, context[36], 'U');
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::alloc_open_bracket(vm, context[38]);
    refalrts::alloc_chars(vm, context[39], context[40], "#define COOKIE2_ ", 17);
    refalrts::alloc_open_call(vm, context[41]);
    refalrts::alloc_name(vm, context[42], functions[efunc_Symb]);
    refalrts::copy_stvar(vm, context[43], context[20]);
    refalrts::alloc_close_call(vm, context[44]);
    refalrts::alloc_char(vm, context[45], 'U');
    refalrts::alloc_close_bracket(vm, context[46]);
    refalrts::reinit_char(context[13], '#');
    refalrts::update_name(context[4], functions[efunc_Symb]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[38], context[46] );
    refalrts::push_stack( vm, context[44] );
    refalrts::push_stack( vm, context[41] );
    refalrts::link_brackets( context[29], context[37] );
    refalrts::push_stack( vm, context[35] );
    refalrts::push_stack( vm, context[32] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[46] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[25], context[28] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.Indent#1/14 )/8 (/11 # CmdNativeFuncDescr/13 e.Name#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdNativeFuncDescr], context[13] ) )
      continue;
    // closed e.Indent#1 as range 14
    // closed e.Name#1 as range 16
    //DEBUG: e.Indent#1: 14
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/14 AsIs: )/8 AsIs: (/11 HalfReuse: )/13 } (/18"static refalrts::NativeReference nat_ref_"/19 Tile{ AsIs: </0 Reuse: & BaseCName/4 } Tile{ AsIs: e.Name#1/16 } >/21 '('/22 </23 & NameAndCookies/24 e.Name#1/16/25 >/27", func_"/28 </30 & BaseCName/31 e.Name#1/16/32 >/34");"/35 )/37 Tile{ HalfReuse: (/12 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_chars(vm, context[19], context[20], "static refalrts::NativeReference nat_ref_", 41);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_char(vm, context[22], '(');
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_name(vm, context[24], functions[efunc_NameAndCookies]);
    refalrts::copy_evar(vm, context[25], context[26], context[16], context[17]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_chars(vm, context[28], context[29], ", func_", 7);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_BaseCName]);
    refalrts::copy_evar(vm, context[32], context[33], context[16], context[17]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_chars(vm, context[35], context[36], ");", 2);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::update_name(context[4], functions[efunc_BaseCName]);
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[18], context[37] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[21], context[37] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.Indent#1/14 )/8 (/11 # CmdFnStart/13 e.Name#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdFnStart], context[13] ) )
      continue;
    // closed e.Indent#1 as range 14
    // closed e.Name#1 as range 16
    //DEBUG: e.Indent#1: 14
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/14 HalfReuse: ' '/8 HalfReuse: ' '/11 HalfReuse: )/13 } (/18 )/19 (/20"static refalrts::FnResult func_"/21 Tile{ AsIs: </0 Reuse: & BaseCName/4 } Tile{ AsIs: e.Name#1/16 } >/23"(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {"/24 )/26 (/27"  (void) vm"/28 Tile{ HalfReuse: ';'/12 HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::alloc_close_bracket(vm, context[19]);
    refalrts::alloc_open_bracket(vm, context[20]);
    refalrts::alloc_chars(vm, context[21], context[22], "static refalrts::FnResult func_", 31);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_chars(vm, context[24], context[25], "(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {", 70);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::alloc_chars(vm, context[28], context[29], "  (void) vm", 11);
    refalrts::reinit_char(context[8], ' ');
    refalrts::reinit_char(context[11], ' ');
    refalrts::reinit_close_bracket(context[13]);
    refalrts::update_name(context[4], functions[efunc_BaseCName]);
    refalrts::reinit_char(context[12], ';');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[27], context[1] );
    refalrts::link_brackets( context[20], context[26] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[7], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[23], context[29] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[22] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.Indent#1/14 ' '/17 ' '/16 )/8 (/11 # CmdFnEnd/13 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdFnEnd], context[13] ) )
      continue;
    context[16] = refalrts::char_right( ' ', context[14], context[15] );
    if( ! context[16] )
      continue;
    context[17] = refalrts::char_right( ' ', context[14], context[15] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.Indent#1 as range 14
    //DEBUG: e.Indent#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & GenCommand-Native/4 (/7 {REMOVED TILE} ' '/17 ' '/16 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Indent#1/14 } Tile{ AsIs: )/8 AsIs: (/11 HalfReuse: '}'/13 AsIs: )/12 } Tile{ ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_char(context[13], '}');
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.Indent#1/14 )/8 (/11 # CmdEmitNativeCode/13 t.SrcPos#1/18 e.Code#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdEmitNativeCode], context[13] ) )
      continue;
    // closed e.Indent#1 as range 14
    context[19] = refalrts::tvar_left( context[18], context[16], context[17] );
    if( ! context[19] )
      continue;
    // closed e.Code#1 as range 16
    //DEBUG: e.Indent#1: 14
    //DEBUG: t.SrcPos#1: 18
    //DEBUG: e.Code#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/14 AsIs: )/8 AsIs: (/11 Reuse: # NativeInsertBegin/13 AsIs: t.SrcPos#1/18 } Tile{ HalfReuse: )/4 } Tile{ AsIs: e.Code#1/16 } Tile{ HalfReuse: (/0 } Tile{ HalfReuse: # NativeInsertEnd/12 HalfReuse: )/1 ]] }
    refalrts::update_ident(context[13], identifiers[ident_NativeInsertBegin]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[12], identifiers[ident_NativeInsertEnd]);
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[4] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.new#4/14 )/8 (/11 s.new#5/13 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.new#4 as range 14
    do {
      // </0 & GenCommand-Native/4 (/7 e.Indent#1/16 )/8 (/11 # CmdCallCondition/13 )/12 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdCallCondition], context[13] ) )
        continue;
      // closed e.Indent#1 as range 16
      //DEBUG: e.Indent#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/18 e.Indent#1/16/19 )/21 (/22 e.Indent#1/16/23"refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm)"/25 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/16 HalfReuse: 'i'/8 HalfReuse: 'f'/11 HalfReuse: ' '/13 HalfReuse: '('/12 HalfReuse: 'r'/1 }"ec_res != refalrts::cSuccess)"/27 )/29 (/30 e.Indent#1/16/31"  return rec_res;"/33 )/35 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::copy_evar(vm, context[19], context[20], context[16], context[17]);
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::alloc_open_bracket(vm, context[22]);
      refalrts::copy_evar(vm, context[23], context[24], context[16], context[17]);
      refalrts::alloc_chars(vm, context[25], context[26], "refalrts::FnResult rec_res = refalrts::recursive_call_main_loop(vm)", 67);
      refalrts::alloc_chars(vm, context[27], context[28], "ec_res != refalrts::cSuccess)", 29);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::alloc_open_bracket(vm, context[30]);
      refalrts::copy_evar(vm, context[31], context[32], context[16], context[17]);
      refalrts::alloc_chars(vm, context[33], context[34], "  return rec_res;", 17);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::reinit_char(context[0], ';');
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_char(context[8], 'i');
      refalrts::reinit_char(context[11], 'f');
      refalrts::reinit_char(context[13], ' ');
      refalrts::reinit_char(context[12], '(');
      refalrts::reinit_char(context[1], 'r');
      refalrts::link_brackets( context[30], context[35] );
      refalrts::link_brackets( context[7], context[29] );
      refalrts::link_brackets( context[22], context[4] );
      refalrts::link_brackets( context[18], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[35] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[18], context[26] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-Native/4 (/7 e.Indent#1/16 )/8 (/11 # CmdProfileFunction/13 )/12 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdProfileFunction], context[13] ) )
        continue;
      // closed e.Indent#1 as range 16
      //DEBUG: e.Indent#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/16 AsIs: )/8 AsIs: (/11 } e.Indent#1/16/18 Tile{ HalfReuse: 'r'/0 HalfReuse: 'e'/4 }"falrts::this_is_generated_function(vm"/20 Tile{ HalfReuse: ')'/13 HalfReuse: ';'/12 HalfReuse: )/1 ]] }
      refalrts::copy_evar(vm, context[18], context[19], context[16], context[17]);
      refalrts::alloc_chars(vm, context[20], context[21], "falrts::this_is_generated_function(vm", 37);
      refalrts::reinit_char(context[0], 'r');
      refalrts::reinit_char(context[4], 'e');
      refalrts::reinit_char(context[13], ')');
      refalrts::reinit_char(context[12], ';');
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[11], context[1] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-Native/4 (/7 e.Indent#1/16 )/8 (/11 # CmdLoadConstants/13 )/12 >/1
    context[16] = context[14];
    context[17] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_CmdLoadConstants], context[13] ) )
      continue;
    // closed e.Indent#1 as range 16
    //DEBUG: e.Indent#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/16 AsIs: )/8 AsIs: (/11 HalfReuse: ' '/13 HalfReuse: ' '/12 HalfReuse: 'r'/1 } 'e'/18 Tile{ HalfReuse: 'f'/0 HalfReuse: 'a'/4 }"lrts::RefalFunction **functions;"/19 )/21 (/22"  const refalrts::RefalIdentifier *identifiers;"/23 )/25 (/26"  refalrts::load_constants(arg_begin, &functions, &identifiers);"/27 )/29 Tile{ ]] }
    refalrts::alloc_char(vm, context[18], 'e');
    refalrts::alloc_chars(vm, context[19], context[20], "lrts::RefalFunction **functions;", 32);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::alloc_chars(vm, context[23], context[24], "  const refalrts::RefalIdentifier *identifiers;", 47);
    refalrts::alloc_close_bracket(vm, context[25]);
    refalrts::alloc_open_bracket(vm, context[26]);
    refalrts::alloc_chars(vm, context[27], context[28], "  refalrts::load_constants(arg_begin, &functions, &identifiers);", 64);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::reinit_char(context[13], ' ');
    refalrts::reinit_char(context[12], ' ');
    refalrts::reinit_char(context[1], 'r');
    refalrts::reinit_char(context[0], 'f');
    refalrts::reinit_char(context[4], 'a');
    refalrts::link_brackets( context[26], context[29] );
    refalrts::link_brackets( context[22], context[25] );
    refalrts::link_brackets( context[11], context[21] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[29] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.Indent#1/14 )/8 (/11 # CmdIssueMemory/13 s.Number#1/18 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdIssueMemory], context[13] ) )
      continue;
    // closed e.Indent#1 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: e.Indent#1: 14
    //DEBUG: s.Number#1: 18

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/14 AsIs: )/8 AsIs: (/11 } e.Indent#1/14/19"// issue here memory for vars with "/21 </23 Tile{ HalfReuse: & Symb/13 AsIs: s.Number#1/18 HalfReuse: >/12 HalfReuse: ' '/1 }"elems"/24 )/26 (/27 e.Indent#1/14/28"refalrts::Iter context["/30 Tile{ AsIs: </0 Reuse: & Symb/4 } s.Number#1/18/32 >/33"];"/34 )/36 (/37 e.Indent#1/14/38"refalrts::zeros( context, "/40 </42 & Symb/43 s.Number#1/18/44 >/45" );"/46 )/48 Tile{ ]] }
    refalrts::copy_evar(vm, context[19], context[20], context[14], context[15]);
    refalrts::alloc_chars(vm, context[21], context[22], "// issue here memory for vars with ", 35);
    refalrts::alloc_open_call(vm, context[23]);
    refalrts::alloc_chars(vm, context[24], context[25], "elems", 5);
    refalrts::alloc_close_bracket(vm, context[26]);
    refalrts::alloc_open_bracket(vm, context[27]);
    refalrts::copy_evar(vm, context[28], context[29], context[14], context[15]);
    refalrts::alloc_chars(vm, context[30], context[31], "refalrts::Iter context[", 23);
    refalrts::copy_stvar(vm, context[32], context[18]);
    refalrts::alloc_close_call(vm, context[33]);
    refalrts::alloc_chars(vm, context[34], context[35], "];", 2);
    refalrts::alloc_close_bracket(vm, context[36]);
    refalrts::alloc_open_bracket(vm, context[37]);
    refalrts::copy_evar(vm, context[38], context[39], context[14], context[15]);
    refalrts::alloc_chars(vm, context[40], context[41], "refalrts::zeros( context, ", 26);
    refalrts::alloc_open_call(vm, context[42]);
    refalrts::alloc_name(vm, context[43], functions[efunc_Symb]);
    refalrts::copy_stvar(vm, context[44], context[18]);
    refalrts::alloc_close_call(vm, context[45]);
    refalrts::alloc_chars(vm, context[46], context[47], " );", 3);
    refalrts::alloc_close_bracket(vm, context[48]);
    refalrts::reinit_name(context[13], functions[efunc_Symb]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_char(context[1], ' ');
    refalrts::update_name(context[4], functions[efunc_Symb]);
    refalrts::link_brackets( context[37], context[48] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[42] );
    refalrts::link_brackets( context[27], context[36] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[26] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[32], context[48] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[24], context[31] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.new#4/14 )/8 (/11 s.new#5/13 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.new#4 as range 14
    do {
      // </0 & GenCommand-Native/4 (/7 e.Indent#1/16 )/8 (/11 # CmdStartSentence/13 )/12 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdStartSentence], context[13] ) )
        continue;
      // closed e.Indent#1 as range 16
      //DEBUG: e.Indent#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/18 e.Indent#1/16/19 ' '/21 Tile{ HalfReuse: ' '/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/16 HalfReuse: 'd'/8 HalfReuse: 'o'/11 HalfReuse: ' '/13 HalfReuse: '{'/12 HalfReuse: )/1 ]] }
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::copy_evar(vm, context[19], context[20], context[16], context[17]);
      refalrts::alloc_char(vm, context[21], ' ');
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_char(context[8], 'd');
      refalrts::reinit_char(context[11], 'o');
      refalrts::reinit_char(context[13], ' ');
      refalrts::reinit_char(context[12], '{');
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[7], context[1] );
      refalrts::link_brackets( context[18], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[0];
      res = refalrts::splice_evar( res, context[18], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-Native/4 (/7 e.Indent#1/16 ' '/19 ' '/18 )/8 (/11 # CmdEndSentence/13 )/12 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdEndSentence], context[13] ) )
        continue;
      context[18] = refalrts::char_right( ' ', context[16], context[17] );
      if( ! context[18] )
        continue;
      context[19] = refalrts::char_right( ' ', context[16], context[17] );
      if( ! context[19] )
        continue;
      // closed e.Indent#1 as range 16
      //DEBUG: e.Indent#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/16/20 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/16 Reuse: '}'/19 AsIs: ' '/18 HalfReuse: 'w'/8 HalfReuse: 'h'/11 HalfReuse: 'i'/13 HalfReuse: 'l'/12 HalfReuse: 'e'/1 }" ( 0 );"/22 )/24 (/25 e.Indent#1/16/26"refalrts::stop_sentence(vm);"/28 )/30 (/31 )/32 Tile{ ]] }
      refalrts::copy_evar(vm, context[20], context[21], context[16], context[17]);
      refalrts::alloc_chars(vm, context[22], context[23], " ( 0 );", 7);
      refalrts::alloc_close_bracket(vm, context[24]);
      refalrts::alloc_open_bracket(vm, context[25]);
      refalrts::copy_evar(vm, context[26], context[27], context[16], context[17]);
      refalrts::alloc_chars(vm, context[28], context[29], "refalrts::stop_sentence(vm);", 28);
      refalrts::alloc_close_bracket(vm, context[30]);
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::alloc_close_bracket(vm, context[32]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::update_char(context[19], '}');
      refalrts::reinit_char(context[8], 'w');
      refalrts::reinit_char(context[11], 'h');
      refalrts::reinit_char(context[13], 'i');
      refalrts::reinit_char(context[12], 'l');
      refalrts::reinit_char(context[1], 'e');
      refalrts::link_brackets( context[31], context[32] );
      refalrts::link_brackets( context[25], context[30] );
      refalrts::link_brackets( context[7], context[24] );
      refalrts::link_brackets( context[0], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[22], context[32] );
      res = refalrts::splice_evar( res, context[4], context[1] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-Native/4 (/7 e.Indent#1/16 )/8 (/11 # CmdInitB0/13 )/12 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdInitB0], context[13] ) )
        continue;
      // closed e.Indent#1 as range 16
      //DEBUG: e.Indent#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/18 e.Indent#1/16/19 )/21 (/22 e.Indent#1/16/23 </25 & ContextRange-B/26 0/27 >/28" = arg_begin"/29 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/16 HalfReuse: </8 HalfReuse: & ContextRange-E/11 HalfReuse: 0/13 HalfReuse: >/12 HalfReuse: ' '/1 }"= arg_end;"/31 )/33 (/34 e.Indent#1/16/35"refalrts::move_left( "/37 </39 & ContextRange/40 0/41 >/42" );"/43 )/45 (/46 e.Indent#1/16/47"refalrts::move_left( "/49 </51 & ContextRange/52 0/53 >/54" );"/55 )/57 (/58 e.Indent#1/16/59"refalrts::move_right( "/61 </63 & ContextRange/64 0/65 >/66" );"/67 )/69 Tile{ ]] }
      refalrts::alloc_open_bracket(vm, context[18]);
      refalrts::copy_evar(vm, context[19], context[20], context[16], context[17]);
      refalrts::alloc_close_bracket(vm, context[21]);
      refalrts::alloc_open_bracket(vm, context[22]);
      refalrts::copy_evar(vm, context[23], context[24], context[16], context[17]);
      refalrts::alloc_open_call(vm, context[25]);
      refalrts::alloc_name(vm, context[26], functions[efunc_ContextRangem_B]);
      refalrts::alloc_number(vm, context[27], 0UL);
      refalrts::alloc_close_call(vm, context[28]);
      refalrts::alloc_chars(vm, context[29], context[30], " = arg_begin", 12);
      refalrts::alloc_chars(vm, context[31], context[32], "= arg_end;", 10);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::copy_evar(vm, context[35], context[36], context[16], context[17]);
      refalrts::alloc_chars(vm, context[37], context[38], "refalrts::move_left( ", 21);
      refalrts::alloc_open_call(vm, context[39]);
      refalrts::alloc_name(vm, context[40], functions[efunc_ContextRange]);
      refalrts::alloc_number(vm, context[41], 0UL);
      refalrts::alloc_close_call(vm, context[42]);
      refalrts::alloc_chars(vm, context[43], context[44], " );", 3);
      refalrts::alloc_close_bracket(vm, context[45]);
      refalrts::alloc_open_bracket(vm, context[46]);
      refalrts::copy_evar(vm, context[47], context[48], context[16], context[17]);
      refalrts::alloc_chars(vm, context[49], context[50], "refalrts::move_left( ", 21);
      refalrts::alloc_open_call(vm, context[51]);
      refalrts::alloc_name(vm, context[52], functions[efunc_ContextRange]);
      refalrts::alloc_number(vm, context[53], 0UL);
      refalrts::alloc_close_call(vm, context[54]);
      refalrts::alloc_chars(vm, context[55], context[56], " );", 3);
      refalrts::alloc_close_bracket(vm, context[57]);
      refalrts::alloc_open_bracket(vm, context[58]);
      refalrts::copy_evar(vm, context[59], context[60], context[16], context[17]);
      refalrts::alloc_chars(vm, context[61], context[62], "refalrts::move_right( ", 22);
      refalrts::alloc_open_call(vm, context[63]);
      refalrts::alloc_name(vm, context[64], functions[efunc_ContextRange]);
      refalrts::alloc_number(vm, context[65], 0UL);
      refalrts::alloc_close_call(vm, context[66]);
      refalrts::alloc_chars(vm, context[67], context[68], " );", 3);
      refalrts::alloc_close_bracket(vm, context[69]);
      refalrts::reinit_char(context[0], ';');
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_open_call(context[8]);
      refalrts::reinit_name(context[11], functions[efunc_ContextRangem_E]);
      refalrts::reinit_number(context[13], 0UL);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_char(context[1], ' ');
      refalrts::link_brackets( context[58], context[69] );
      refalrts::push_stack( vm, context[66] );
      refalrts::push_stack( vm, context[63] );
      refalrts::link_brackets( context[46], context[57] );
      refalrts::push_stack( vm, context[54] );
      refalrts::push_stack( vm, context[51] );
      refalrts::link_brackets( context[34], context[45] );
      refalrts::push_stack( vm, context[42] );
      refalrts::push_stack( vm, context[39] );
      refalrts::link_brackets( context[7], context[33] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[8] );
      refalrts::link_brackets( context[22], context[4] );
      refalrts::push_stack( vm, context[28] );
      refalrts::push_stack( vm, context[25] );
      refalrts::link_brackets( context[18], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[31], context[69] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[18], context[30] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-Native/4 (/7 e.Indent#1/16 )/8 (/11 # CmdInitB0-Lite/13 )/12 >/1
    context[16] = context[14];
    context[17] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_CmdInitB0m_Lite], context[13] ) )
      continue;
    // closed e.Indent#1 as range 16
    //DEBUG: e.Indent#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/18 e.Indent#1/16/19 )/21 (/22 e.Indent#1/16/23 </25 & ContextRange-B/26 0/27 >/28" = arg_begin"/29 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/16 HalfReuse: </8 HalfReuse: & ContextRange-E/11 HalfReuse: 0/13 HalfReuse: >/12 HalfReuse: ' '/1 }"= arg_end;"/31 )/33 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[18]);
    refalrts::copy_evar(vm, context[19], context[20], context[16], context[17]);
    refalrts::alloc_close_bracket(vm, context[21]);
    refalrts::alloc_open_bracket(vm, context[22]);
    refalrts::copy_evar(vm, context[23], context[24], context[16], context[17]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_ContextRangem_B]);
    refalrts::alloc_number(vm, context[27], 0UL);
    refalrts::alloc_close_call(vm, context[28]);
    refalrts::alloc_chars(vm, context[29], context[30], " = arg_begin", 12);
    refalrts::alloc_chars(vm, context[31], context[32], "= arg_end;", 10);
    refalrts::alloc_close_bracket(vm, context[33]);
    refalrts::reinit_char(context[0], ';');
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_open_call(context[8]);
    refalrts::reinit_name(context[11], functions[efunc_ContextRangem_E]);
    refalrts::reinit_number(context[13], 0UL);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_char(context[1], ' ');
    refalrts::link_brackets( context[7], context[33] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[8] );
    refalrts::link_brackets( context[22], context[4] );
    refalrts::push_stack( vm, context[28] );
    refalrts::push_stack( vm, context[25] );
    refalrts::link_brackets( context[18], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[18], context[30] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.new#4/14 )/8 (/11 s.new#5/13 s.new#6/18 s.new#7/19 e.new#8/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.new#4 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[16], context[17] ) )
      continue;
    // closed e.new#8 as range 16
    do {
      // </0 & GenCommand-Native/4 (/7 e.new#9/20 )/8 (/11 s.new#10/13 s.new#11/18 s.new#12/19 s.new#13/24 e.new#14/22 )/12 >/1
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      // closed e.new#9 as range 20
      if( ! refalrts::svar_left( context[24], context[22], context[23] ) )
        continue;
      // closed e.new#14 as range 22
      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/25 )/8 (/11 # CmdChar/13 s.Direction#1/18 s.BracketNumber#1/19 s.Char#1/24 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::ident_term( identifiers[ident_CmdChar], context[13] ) )
          continue;
        if( ! refalrts::empty_seq( context[22], context[23] ) )
          continue;
        // closed e.Indent#1 as range 25
        //DEBUG: s.Direction#1: 18
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.Char#1: 24
        //DEBUG: e.Indent#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 s.Char#1/24 {REMOVED TILE}
        //RESULT: Tile{ [[ } (/27 e.Indent#1/25/28 )/30 Tile{ AsIs: </0 Reuse: & PrintMatchChar/4 AsIs: (/7 AsIs: e.Indent#1/25 AsIs: )/8 HalfReuse: s.Direction1 #18/11 HalfReuse: s.BracketNumber1 #19/13 } Tile{ HalfReuse: s.Char1 #24/12 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[27]);
        refalrts::copy_evar(vm, context[28], context[29], context[25], context[26]);
        refalrts::alloc_close_bracket(vm, context[30]);
        refalrts::update_name(context[4], functions[efunc_PrintMatchChar]);
        refalrts::reinit_svar( context[11], context[18] );
        refalrts::reinit_svar( context[13], context[19] );
        refalrts::reinit_svar( context[12], context[24] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[27], context[30] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[27], context[30] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/25 )/8 (/11 # CmdCharSave/13 s.Direction#1/18 s.BracketNumber#1/19 s.Offset#1/24 s.Char#1/29 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_CmdCharSave], context[13] ) )
          continue;
        // closed e.Indent#1 as range 25
        if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
          continue;
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;
        //DEBUG: s.Direction#1: 18
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.Offset#1: 24
        //DEBUG: e.Indent#1: 25
        //DEBUG: s.Char#1: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 {REMOVED TILE} s.Offset#1/24 s.Char#1/29 {REMOVED TILE}
        //RESULT: Tile{ [[ } (/30 e.Indent#1/25/31 )/33 Tile{ AsIs: </0 Reuse: & PrintMatchCharSave/4 AsIs: (/7 AsIs: e.Indent#1/25 AsIs: )/8 HalfReuse: s.Offset1 #24/11 HalfReuse: s.Direction1 #18/13 } Tile{ AsIs: s.BracketNumber#1/19 } Tile{ HalfReuse: s.Char1 #29/12 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[30]);
        refalrts::copy_evar(vm, context[31], context[32], context[25], context[26]);
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::update_name(context[4], functions[efunc_PrintMatchCharSave]);
        refalrts::reinit_svar( context[11], context[24] );
        refalrts::reinit_svar( context[13], context[18] );
        refalrts::reinit_svar( context[12], context[29] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[30], context[33] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[30], context[33] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/25 )/8 (/11 # CmdNumber/13 s.Direction#1/18 s.BracketNumber#1/19 s.Number#1/24 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::ident_term( identifiers[ident_CmdNumber], context[13] ) )
          continue;
        if( ! refalrts::empty_seq( context[22], context[23] ) )
          continue;
        // closed e.Indent#1 as range 25
        //DEBUG: s.Direction#1: 18
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.Number#1: 24
        //DEBUG: e.Indent#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 s.Number#1/24 {REMOVED TILE}
        //RESULT: Tile{ [[ } (/27 e.Indent#1/25/28 )/30 Tile{ AsIs: </0 Reuse: & PrintMatchNumber/4 AsIs: (/7 AsIs: e.Indent#1/25 AsIs: )/8 HalfReuse: s.Direction1 #18/11 HalfReuse: s.BracketNumber1 #19/13 } Tile{ HalfReuse: s.Number1 #24/12 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[27]);
        refalrts::copy_evar(vm, context[28], context[29], context[25], context[26]);
        refalrts::alloc_close_bracket(vm, context[30]);
        refalrts::update_name(context[4], functions[efunc_PrintMatchNumber]);
        refalrts::reinit_svar( context[11], context[18] );
        refalrts::reinit_svar( context[13], context[19] );
        refalrts::reinit_svar( context[12], context[24] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[27], context[30] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[27], context[30] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/25 )/8 (/11 # CmdNumberSave/13 s.Direction#1/18 s.BracketNumber#1/19 s.Offset#1/24 s.Number#1/29 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_CmdNumberSave], context[13] ) )
          continue;
        // closed e.Indent#1 as range 25
        if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
          continue;
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;
        //DEBUG: s.Direction#1: 18
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.Offset#1: 24
        //DEBUG: e.Indent#1: 25
        //DEBUG: s.Number#1: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 {REMOVED TILE} s.Offset#1/24 s.Number#1/29 {REMOVED TILE}
        //RESULT: Tile{ [[ } (/30 e.Indent#1/25/31 )/33 Tile{ AsIs: </0 Reuse: & PrintMatchNumberSave/4 AsIs: (/7 AsIs: e.Indent#1/25 AsIs: )/8 HalfReuse: s.Offset1 #24/11 HalfReuse: s.Direction1 #18/13 } Tile{ AsIs: s.BracketNumber#1/19 } Tile{ HalfReuse: s.Number1 #29/12 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[30]);
        refalrts::copy_evar(vm, context[31], context[32], context[25], context[26]);
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::update_name(context[4], functions[efunc_PrintMatchNumberSave]);
        refalrts::reinit_svar( context[11], context[24] );
        refalrts::reinit_svar( context[13], context[18] );
        refalrts::reinit_svar( context[12], context[29] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[30], context[33] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[30], context[33] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/25 )/8 (/11 # CmdName/13 s.Direction#1/18 s.BracketNumber#1/19 s.Num#1/24 e.Name#1/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_CmdName], context[13] ) )
          continue;
        // closed e.Indent#1 as range 25
        // closed e.Name#1 as range 27
        //DEBUG: s.Direction#1: 18
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.Num#1: 24
        //DEBUG: e.Indent#1: 25
        //DEBUG: e.Name#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 s.Num#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/29 e.Indent#1/25/30 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintMatchName/4 AsIs: (/7 AsIs: e.Indent#1/25 AsIs: )/8 HalfReuse: s.Direction1 #18/11 HalfReuse: s.BracketNumber1 #19/13 } Tile{ AsIs: e.Name#1/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[29]);
        refalrts::copy_evar(vm, context[30], context[31], context[25], context[26]);
        refalrts::update_name(context[4], functions[efunc_PrintMatchName]);
        refalrts::reinit_svar( context[11], context[18] );
        refalrts::reinit_svar( context[13], context[19] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[29], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[29], context[29] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/25 )/8 (/11 # CmdNameSave/13 s.Direction#1/18 s.BracketNumber#1/19 s.Offset#1/24 s.Num#1/29 e.Name#1/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_CmdNameSave], context[13] ) )
          continue;
        // closed e.Indent#1 as range 25
        if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
          continue;
        // closed e.Name#1 as range 27
        //DEBUG: s.Direction#1: 18
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.Offset#1: 24
        //DEBUG: e.Indent#1: 25
        //DEBUG: s.Num#1: 29
        //DEBUG: e.Name#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 {REMOVED TILE} s.Offset#1/24 s.Num#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/30 e.Indent#1/25/31 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintMatchNameSave/4 AsIs: (/7 AsIs: e.Indent#1/25 AsIs: )/8 HalfReuse: s.Offset1 #24/11 HalfReuse: s.Direction1 #18/13 } Tile{ AsIs: s.BracketNumber#1/19 } Tile{ AsIs: e.Name#1/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[30]);
        refalrts::copy_evar(vm, context[31], context[32], context[25], context[26]);
        refalrts::update_name(context[4], functions[efunc_PrintMatchNameSave]);
        refalrts::reinit_svar( context[11], context[24] );
        refalrts::reinit_svar( context[13], context[18] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[30], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/25 )/8 (/11 # CmdIdent/13 s.Direction#1/18 s.BracketNumber#1/19 s.Num#1/24 e.Name#1/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_CmdIdent], context[13] ) )
          continue;
        // closed e.Indent#1 as range 25
        // closed e.Name#1 as range 27
        //DEBUG: s.Direction#1: 18
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.Num#1: 24
        //DEBUG: e.Indent#1: 25
        //DEBUG: e.Name#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 s.Num#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/29 e.Indent#1/25/30 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintMatchIdent/4 AsIs: (/7 AsIs: e.Indent#1/25 AsIs: )/8 HalfReuse: s.Direction1 #18/11 HalfReuse: s.BracketNumber1 #19/13 } Tile{ AsIs: e.Name#1/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[29]);
        refalrts::copy_evar(vm, context[30], context[31], context[25], context[26]);
        refalrts::update_name(context[4], functions[efunc_PrintMatchIdent]);
        refalrts::reinit_svar( context[11], context[18] );
        refalrts::reinit_svar( context[13], context[19] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[29], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[29], context[29] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/25 )/8 (/11 # CmdIdentSave/13 s.Direction#1/18 s.BracketNumber#1/19 s.Offset#1/24 s.Num#1/29 e.Name#1/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        if( ! refalrts::ident_term( identifiers[ident_CmdIdentSave], context[13] ) )
          continue;
        // closed e.Indent#1 as range 25
        if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
          continue;
        // closed e.Name#1 as range 27
        //DEBUG: s.Direction#1: 18
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.Offset#1: 24
        //DEBUG: e.Indent#1: 25
        //DEBUG: s.Num#1: 29
        //DEBUG: e.Name#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 {REMOVED TILE} s.Offset#1/24 s.Num#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/30 e.Indent#1/25/31 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintMatchIdentSave/4 AsIs: (/7 AsIs: e.Indent#1/25 AsIs: )/8 HalfReuse: s.Offset1 #24/11 HalfReuse: s.Direction1 #18/13 } Tile{ AsIs: s.BracketNumber#1/19 } Tile{ AsIs: e.Name#1/27 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[30]);
        refalrts::copy_evar(vm, context[31], context[32], context[25], context[26]);
        refalrts::update_name(context[4], functions[efunc_PrintMatchIdentSave]);
        refalrts::reinit_svar( context[11], context[24] );
        refalrts::reinit_svar( context[13], context[18] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[30], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[27], context[28] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[30], context[30] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.new#15/25 )/8 (/11 s.new#16/13 s.new#17/18 s.new#18/19 s.new#19/24 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        if( ! refalrts::empty_seq( context[22], context[23] ) )
          continue;
        // closed e.new#15 as range 25
        do {
          // </0 & GenCommand-Native/4 (/7 e.Indent#1/27 )/8 (/11 # CmdBrackets/13 s.Direction#1/18 s.BracketNumber#1/19 s.InnerBrackets#1/24 )/12 >/1
          context[27] = context[25];
          context[28] = context[26];
          if( ! refalrts::ident_term( identifiers[ident_CmdBrackets], context[13] ) )
            continue;
          // closed e.Indent#1 as range 27
          //DEBUG: s.Direction#1: 18
          //DEBUG: s.BracketNumber#1: 19
          //DEBUG: s.InnerBrackets#1: 24
          //DEBUG: e.Indent#1: 27

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/29 e.Indent#1/27/30 )/32 </33 & PrintBracketsVarInit/34 e.Indent#1/27/35 Tile{ AsIs: s.InnerBrackets#1/24 } >/37 Tile{ AsIs: </0 Reuse: & PrintMatchBrackets/4 AsIs: (/7 AsIs: e.Indent#1/27 AsIs: )/8 HalfReuse: s.Direction1 #18/11 HalfReuse: s.BracketNumber1 #19/13 } Tile{ HalfReuse: s.InnerBrackets1 #24/12 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[29]);
          refalrts::copy_evar(vm, context[30], context[31], context[27], context[28]);
          refalrts::alloc_close_bracket(vm, context[32]);
          refalrts::alloc_open_call(vm, context[33]);
          refalrts::alloc_name(vm, context[34], functions[efunc_PrintBracketsVarInit]);
          refalrts::copy_evar(vm, context[35], context[36], context[27], context[28]);
          refalrts::alloc_close_call(vm, context[37]);
          refalrts::update_name(context[4], functions[efunc_PrintMatchBrackets]);
          refalrts::reinit_svar( context[11], context[18] );
          refalrts::reinit_svar( context[13], context[19] );
          refalrts::reinit_svar( context[12], context[24] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::push_stack( vm, context[37] );
          refalrts::push_stack( vm, context[33] );
          refalrts::link_brackets( context[29], context[32] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[12];
          res = refalrts::splice_evar( res, context[0], context[13] );
          res = refalrts::splice_evar( res, context[37], context[37] );
          res = refalrts::splice_evar( res, context[24], context[24] );
          res = refalrts::splice_evar( res, context[35], context[36] );
          res = refalrts::splice_evar( res, context[29], context[34] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & GenCommand-Native/4 (/7 e.Indent#1/27 )/8 (/11 # CmdBracketsSave/13 s.Direction#1/18 s.BracketNumber#1/19 s.InnerBrackets#1/24 )/12 >/1
        context[27] = context[25];
        context[28] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_CmdBracketsSave], context[13] ) )
          continue;
        // closed e.Indent#1 as range 27
        //DEBUG: s.Direction#1: 18
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.InnerBrackets#1: 24
        //DEBUG: e.Indent#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/29 e.Indent#1/27/30 )/32 </33 & PrintBracketsVarInit/34 e.Indent#1/27/35 Tile{ AsIs: s.InnerBrackets#1/24 } >/37 Tile{ AsIs: </0 Reuse: & PrintMatchBracketsSave/4 AsIs: (/7 AsIs: e.Indent#1/27 AsIs: )/8 HalfReuse: s.Direction1 #18/11 HalfReuse: s.BracketNumber1 #19/13 } Tile{ HalfReuse: s.InnerBrackets1 #24/12 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[29]);
        refalrts::copy_evar(vm, context[30], context[31], context[27], context[28]);
        refalrts::alloc_close_bracket(vm, context[32]);
        refalrts::alloc_open_call(vm, context[33]);
        refalrts::alloc_name(vm, context[34], functions[efunc_PrintBracketsVarInit]);
        refalrts::copy_evar(vm, context[35], context[36], context[27], context[28]);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::update_name(context[4], functions[efunc_PrintMatchBracketsSave]);
        refalrts::reinit_svar( context[11], context[18] );
        refalrts::reinit_svar( context[13], context[19] );
        refalrts::reinit_svar( context[12], context[24] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[33] );
        refalrts::link_brackets( context[29], context[32] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[37], context[37] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[29], context[34] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.new#15/25 )/8 (/11 s.new#16/13 s.new#17/18 s.new#18/19 s.new#19/24 s.new#20/29 e.new#21/27 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        // closed e.new#15 as range 25
        if( ! refalrts::svar_left( context[29], context[27], context[28] ) )
          continue;
        // closed e.new#21 as range 27
        do {
          // </0 & GenCommand-Native/4 (/7 e.Indent#1/30 )/8 (/11 # CmdADT/13 s.Direction#1/18 s.BracketNumber#1/19 s.InnerBrackets#1/24 s.Num#1/29 e.Name#1/32 )/12 >/1
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[27];
          context[33] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_CmdADT], context[13] ) )
            continue;
          // closed e.Indent#1 as range 30
          // closed e.Name#1 as range 32
          //DEBUG: s.Direction#1: 18
          //DEBUG: s.BracketNumber#1: 19
          //DEBUG: s.InnerBrackets#1: 24
          //DEBUG: s.Num#1: 29
          //DEBUG: e.Indent#1: 30
          //DEBUG: e.Name#1: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 {REMOVED TILE} s.Num#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } (/34 e.Indent#1/30/35 Tile{ AsIs: )/12 } </37 & PrintBracketsVarInit/38 e.Indent#1/30/39 Tile{ AsIs: s.InnerBrackets#1/24 } >/41 Tile{ AsIs: </0 Reuse: & PrintMatchADT/4 AsIs: (/7 AsIs: e.Indent#1/30 AsIs: )/8 HalfReuse: s.Direction1 #18/11 HalfReuse: s.BracketNumber1 #19/13 } s.InnerBrackets#1/24/42 Tile{ AsIs: e.Name#1/32 } Tile{ AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[34]);
          refalrts::copy_evar(vm, context[35], context[36], context[30], context[31]);
          refalrts::alloc_open_call(vm, context[37]);
          refalrts::alloc_name(vm, context[38], functions[efunc_PrintBracketsVarInit]);
          refalrts::copy_evar(vm, context[39], context[40], context[30], context[31]);
          refalrts::alloc_close_call(vm, context[41]);
          refalrts::copy_stvar(vm, context[42], context[24]);
          refalrts::update_name(context[4], functions[efunc_PrintMatchADT]);
          refalrts::reinit_svar( context[11], context[18] );
          refalrts::reinit_svar( context[13], context[19] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::push_stack( vm, context[41] );
          refalrts::push_stack( vm, context[37] );
          refalrts::link_brackets( context[34], context[12] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[32], context[33] );
          res = refalrts::splice_evar( res, context[42], context[42] );
          res = refalrts::splice_evar( res, context[0], context[13] );
          res = refalrts::splice_evar( res, context[41], context[41] );
          res = refalrts::splice_evar( res, context[24], context[24] );
          res = refalrts::splice_evar( res, context[39], context[40] );
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_evar( res, context[12], context[12] );
          res = refalrts::splice_evar( res, context[35], context[36] );
          res = refalrts::splice_evar( res, context[34], context[34] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & GenCommand-Native/4 (/7 e.Indent#1/30 )/8 (/11 # CmdADTSave/13 s.Direction#1/18 s.BracketNumber#1/19 s.InnerBrackets#1/24 s.Num#1/29 e.Name#1/32 )/12 >/1
        context[30] = context[25];
        context[31] = context[26];
        context[32] = context[27];
        context[33] = context[28];
        if( ! refalrts::ident_term( identifiers[ident_CmdADTSave], context[13] ) )
          continue;
        // closed e.Indent#1 as range 30
        // closed e.Name#1 as range 32
        //DEBUG: s.Direction#1: 18
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.InnerBrackets#1: 24
        //DEBUG: s.Num#1: 29
        //DEBUG: e.Indent#1: 30
        //DEBUG: e.Name#1: 32

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 {REMOVED TILE} s.Num#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/34 e.Indent#1/30/35 Tile{ AsIs: )/12 } </37 & PrintBracketsVarInit/38 e.Indent#1/30/39 Tile{ AsIs: s.InnerBrackets#1/24 } >/41 Tile{ AsIs: </0 Reuse: & PrintMatchADTSave/4 AsIs: (/7 AsIs: e.Indent#1/30 AsIs: )/8 HalfReuse: s.Direction1 #18/11 HalfReuse: s.BracketNumber1 #19/13 } s.InnerBrackets#1/24/42 Tile{ AsIs: e.Name#1/32 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[34]);
        refalrts::copy_evar(vm, context[35], context[36], context[30], context[31]);
        refalrts::alloc_open_call(vm, context[37]);
        refalrts::alloc_name(vm, context[38], functions[efunc_PrintBracketsVarInit]);
        refalrts::copy_evar(vm, context[39], context[40], context[30], context[31]);
        refalrts::alloc_close_call(vm, context[41]);
        refalrts::copy_stvar(vm, context[42], context[24]);
        refalrts::update_name(context[4], functions[efunc_PrintMatchADTSave]);
        refalrts::reinit_svar( context[11], context[18] );
        refalrts::reinit_svar( context[13], context[19] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::push_stack( vm, context[41] );
        refalrts::push_stack( vm, context[37] );
        refalrts::link_brackets( context[34], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[32], context[33] );
        res = refalrts::splice_evar( res, context[42], context[42] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[41], context[41] );
        res = refalrts::splice_evar( res, context[24], context[24] );
        res = refalrts::splice_evar( res, context[39], context[40] );
        res = refalrts::splice_evar( res, context[37], context[38] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[34], context[34] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-Native/4 (/7 e.Indent#1/25 )/8 (/11 # CmdCallSave/13 s.Direction#1/18 s.BracketNumber#1/19 s.InnerBrackets#1/24 )/12 >/1
      context[25] = context[20];
      context[26] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_CmdCallSave], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      // closed e.Indent#1 as range 25
      //DEBUG: s.Direction#1: 18
      //DEBUG: s.BracketNumber#1: 19
      //DEBUG: s.InnerBrackets#1: 24
      //DEBUG: e.Indent#1: 25

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/25 AsIs: )/8 HalfReuse: </11 HalfReuse: & PrintBracketsVarInit/13 } e.Indent#1/25/27 s.InnerBrackets#1/24/29 >/30 (/31 e.Indent#1/25/32 Tile{ AsIs: </0 Reuse: & ContextItem/4 } </34 & Add/35 2/36 Tile{ AsIs: s.InnerBrackets#1/24 HalfReuse: >/12 AsIs: >/1 }" = refalrts::call_"/37 </39 & StrFromDirection/40 Tile{ AsIs: s.Direction#1/18 } >/41"( "/42 </44 & ContextRange/45 s.InnerBrackets#1/24/46 >/47", "/48 </50 & ContextRange/51 Tile{ AsIs: s.BracketNumber#1/19 } >/52" );"/53 )/55 Tile{ ]] }
      refalrts::copy_evar(vm, context[27], context[28], context[25], context[26]);
      refalrts::copy_stvar(vm, context[29], context[24]);
      refalrts::alloc_close_call(vm, context[30]);
      refalrts::alloc_open_bracket(vm, context[31]);
      refalrts::copy_evar(vm, context[32], context[33], context[25], context[26]);
      refalrts::alloc_open_call(vm, context[34]);
      refalrts::alloc_name(vm, context[35], functions[efunc_Add]);
      refalrts::alloc_number(vm, context[36], 2UL);
      refalrts::alloc_chars(vm, context[37], context[38], " = refalrts::call_", 18);
      refalrts::alloc_open_call(vm, context[39]);
      refalrts::alloc_name(vm, context[40], functions[efunc_StrFromDirection]);
      refalrts::alloc_close_call(vm, context[41]);
      refalrts::alloc_chars(vm, context[42], context[43], "( ", 2);
      refalrts::alloc_open_call(vm, context[44]);
      refalrts::alloc_name(vm, context[45], functions[efunc_ContextRange]);
      refalrts::copy_stvar(vm, context[46], context[24]);
      refalrts::alloc_close_call(vm, context[47]);
      refalrts::alloc_chars(vm, context[48], context[49], ", ", 2);
      refalrts::alloc_open_call(vm, context[50]);
      refalrts::alloc_name(vm, context[51], functions[efunc_ContextRange]);
      refalrts::alloc_close_call(vm, context[52]);
      refalrts::alloc_chars(vm, context[53], context[54], " );", 3);
      refalrts::alloc_close_bracket(vm, context[55]);
      refalrts::reinit_open_call(context[11]);
      refalrts::reinit_name(context[13], functions[efunc_PrintBracketsVarInit]);
      refalrts::update_name(context[4], functions[efunc_ContextItem]);
      refalrts::reinit_close_call(context[12]);
      refalrts::link_brackets( context[31], context[55] );
      refalrts::push_stack( vm, context[52] );
      refalrts::push_stack( vm, context[50] );
      refalrts::push_stack( vm, context[47] );
      refalrts::push_stack( vm, context[44] );
      refalrts::push_stack( vm, context[41] );
      refalrts::push_stack( vm, context[39] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[34] );
      refalrts::push_stack( vm, context[30] );
      refalrts::push_stack( vm, context[11] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[52], context[55] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[41], context[51] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[37], context[40] );
      res = refalrts::splice_evar( res, context[24], context[1] );
      res = refalrts::splice_evar( res, context[34], context[36] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[32], context[33] );
      res = refalrts::splice_evar( res, context[29], context[31] );
      res = refalrts::splice_evar( res, context[27], context[28] );
      res = refalrts::splice_evar( res, context[7], context[13] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-Native/4 (/7 e.Indent#1/20 )/8 (/11 # CmdEmpty/13 s.Direction#1/18 s.BracketNumber#1/19 )/12 >/1
      context[20] = context[14];
      context[21] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdEmpty], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Indent#1 as range 20
      //DEBUG: s.Direction#1: 18
      //DEBUG: s.BracketNumber#1: 19
      //DEBUG: e.Indent#1: 20

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/1 } e.Indent#1/20/22 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintMatchEmpty/4 AsIs: (/7 AsIs: e.Indent#1/20 AsIs: )/8 HalfReuse: s.BracketNumber1 #19/11 HalfReuse: >/13 } Tile{ ]] }
      refalrts::copy_evar(vm, context[22], context[23], context[20], context[21]);
      refalrts::reinit_open_bracket(context[1]);
      refalrts::update_name(context[4], functions[efunc_PrintMatchEmpty]);
      refalrts::reinit_svar( context[11], context[19] );
      refalrts::reinit_close_call(context[13]);
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[1], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[13] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-Native/4 (/7 e.new#9/20 )/8 (/11 s.new#10/13 s.new#11/18 s.new#12/19 e.new#13/22 s.new#14/24 )/12 >/1
      context[20] = context[14];
      context[21] = context[15];
      context[22] = context[16];
      context[23] = context[17];
      // closed e.new#9 as range 20
      if( ! refalrts::svar_right( context[24], context[22], context[23] ) )
        continue;
      // closed e.new#13 as range 22
      do {
        // </0 & GenCommand-Native/4 (/7 e.new#15/25 )/8 (/11 s.new#16/13 s.new#17/18 s.new#18/19 e.new#20/27 s.new#21/29 s.new#19/24 )/12 >/1
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        context[28] = context[23];
        // closed e.new#15 as range 25
        if( ! refalrts::svar_right( context[29], context[27], context[28] ) )
          continue;
        // closed e.new#20 as range 27
        do {
          // </0 & GenCommand-Native/4 (/7 e.new#22/30 )/8 (/11 s.new#23/13 s.new#24/18 s.new#25/19 s.new#27/29 s.new#26/24 )/12 >/1
          context[30] = context[25];
          context[31] = context[26];
          if( ! refalrts::empty_seq( context[27], context[28] ) )
            continue;
          // closed e.new#22 as range 30
          do {
            // </0 & GenCommand-Native/4 (/7 e.Indent#1/32 )/8 (/11 # CmdVar/13 s.Direction#1/18 s.BracketNumber#1/19 s.Mode#1/29 s.VarNumber#1/24 )/12 >/1
            context[32] = context[30];
            context[33] = context[31];
            if( ! refalrts::ident_term( identifiers[ident_CmdVar], context[13] ) )
              continue;
            // closed e.Indent#1 as range 32
            //DEBUG: s.Direction#1: 18
            //DEBUG: s.BracketNumber#1: 19
            //DEBUG: s.Mode#1: 29
            //DEBUG: s.VarNumber#1: 24
            //DEBUG: e.Indent#1: 32

            refalrts::reset_allocator(vm);
            //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 {REMOVED TILE} s.VarNumber#1/24 {REMOVED TILE}
            //RESULT: Tile{ [[ } (/34 e.Indent#1/32/35 )/37 Tile{ AsIs: </0 Reuse: & PrintMatchSTVar/4 AsIs: (/7 AsIs: e.Indent#1/32 AsIs: )/8 HalfReuse: s.Direction1 #18/11 HalfReuse: s.BracketNumber1 #19/13 } Tile{ AsIs: s.Mode#1/29 } Tile{ HalfReuse: s.VarNumber1 #24/12 AsIs: >/1 ]] }
            refalrts::alloc_open_bracket(vm, context[34]);
            refalrts::copy_evar(vm, context[35], context[36], context[32], context[33]);
            refalrts::alloc_close_bracket(vm, context[37]);
            refalrts::update_name(context[4], functions[efunc_PrintMatchSTVar]);
            refalrts::reinit_svar( context[11], context[18] );
            refalrts::reinit_svar( context[13], context[19] );
            refalrts::reinit_svar( context[12], context[24] );
            refalrts::push_stack( vm, context[1] );
            refalrts::push_stack( vm, context[0] );
            refalrts::link_brackets( context[7], context[8] );
            refalrts::link_brackets( context[34], context[37] );
            refalrts::Iter trash_prev = arg_begin->prev;
            refalrts::use(trash_prev);
            refalrts::Iter res = context[12];
            res = refalrts::splice_evar( res, context[29], context[29] );
            res = refalrts::splice_evar( res, context[0], context[13] );
            res = refalrts::splice_evar( res, context[34], context[37] );
            refalrts::splice_to_freelist_open( vm, trash_prev, res );
            return refalrts::cSuccess;
          } while ( 0 );
          refalrts::stop_sentence(vm);

          // </0 & GenCommand-Native/4 (/7 e.Indent#1/32 )/8 (/11 # CmdVarSave/13 s.Direction#1/18 s.BracketNumber#1/19 s.Mode#1/29 s.VarNumber#1/24 )/12 >/1
          context[32] = context[30];
          context[33] = context[31];
          if( ! refalrts::ident_term( identifiers[ident_CmdVarSave], context[13] ) )
            continue;
          // closed e.Indent#1 as range 32
          //DEBUG: s.Direction#1: 18
          //DEBUG: s.BracketNumber#1: 19
          //DEBUG: s.Mode#1: 29
          //DEBUG: s.VarNumber#1: 24
          //DEBUG: e.Indent#1: 32

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 {REMOVED TILE} s.VarNumber#1/24 {REMOVED TILE}
          //RESULT: Tile{ [[ } (/34 e.Indent#1/32/35 )/37 Tile{ AsIs: </0 Reuse: & PrintMatchSTVarSave/4 AsIs: (/7 AsIs: e.Indent#1/32 AsIs: )/8 HalfReuse: s.Direction1 #18/11 HalfReuse: s.BracketNumber1 #19/13 } Tile{ AsIs: s.Mode#1/29 } Tile{ HalfReuse: s.VarNumber1 #24/12 AsIs: >/1 ]] }
          refalrts::alloc_open_bracket(vm, context[34]);
          refalrts::copy_evar(vm, context[35], context[36], context[32], context[33]);
          refalrts::alloc_close_bracket(vm, context[37]);
          refalrts::update_name(context[4], functions[efunc_PrintMatchSTVarSave]);
          refalrts::reinit_svar( context[11], context[18] );
          refalrts::reinit_svar( context[13], context[19] );
          refalrts::reinit_svar( context[12], context[24] );
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::link_brackets( context[34], context[37] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[12];
          res = refalrts::splice_evar( res, context[29], context[29] );
          res = refalrts::splice_evar( res, context[0], context[13] );
          res = refalrts::splice_evar( res, context[34], context[37] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        do {
          // </0 & GenCommand-Native/4 (/7 e.Indent#1/30 )/8 (/11 # CmdRepeated/13 s.Direction#1/18 s.BracketNumber#1/19 s.Mode#1/34 s.Var#1/29 s.Sample#1/24 )/12 >/1
          context[30] = context[25];
          context[31] = context[26];
          context[32] = context[27];
          context[33] = context[28];
          if( ! refalrts::ident_term( identifiers[ident_CmdRepeated], context[13] ) )
            continue;
          // closed e.Indent#1 as range 30
          if( ! refalrts::svar_left( context[34], context[32], context[33] ) )
            continue;
          if( ! refalrts::empty_seq( context[32], context[33] ) )
            continue;
          //DEBUG: s.Direction#1: 18
          //DEBUG: s.BracketNumber#1: 19
          //DEBUG: s.Var#1: 29
          //DEBUG: s.Sample#1: 24
          //DEBUG: e.Indent#1: 30
          //DEBUG: s.Mode#1: 34

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/30 AsIs: )/8 HalfReuse: </11 } Tile{ Reuse: & PrintMatchRepeated/4 } Tile{ HalfReuse: (/1 } e.Indent#1/30/35 Tile{ HalfReuse: )/13 AsIs: s.Direction#1/18 AsIs: s.BracketNumber#1/19 AsIs: s.Mode#1/34 AsIs: s.Var#1/29 AsIs: s.Sample#1/24 HalfReuse: >/12 } Tile{ ]] }
          refalrts::copy_evar(vm, context[35], context[36], context[30], context[31]);
          refalrts::reinit_open_call(context[11]);
          refalrts::update_name(context[4], functions[efunc_PrintMatchRepeated]);
          refalrts::reinit_open_bracket(context[1]);
          refalrts::reinit_close_bracket(context[13]);
          refalrts::reinit_close_call(context[12]);
          refalrts::push_stack( vm, context[12] );
          refalrts::push_stack( vm, context[11] );
          refalrts::link_brackets( context[1], context[13] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[13], context[12] );
          res = refalrts::splice_evar( res, context[35], context[36] );
          res = refalrts::splice_evar( res, context[1], context[1] );
          res = refalrts::splice_evar( res, context[4], context[4] );
          res = refalrts::splice_evar( res, context[7], context[11] );
          refalrts::splice_to_freelist_open( vm, trash_prev, res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & GenCommand-Native/4 (/7 e.Indent#1/30 )/8 (/11 # CmdRepeatedTVarSave/13 s.Direction#1/18 s.BracketNumber#1/19 s.Var#1/29 s.Sample#1/24 )/12 >/1
        context[30] = context[25];
        context[31] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_CmdRepeatedTVarSave], context[13] ) )
          continue;
        if( ! refalrts::empty_seq( context[27], context[28] ) )
          continue;
        // closed e.Indent#1 as range 30
        //DEBUG: s.Direction#1: 18
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.Var#1: 29
        //DEBUG: s.Sample#1: 24
        //DEBUG: e.Indent#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.Direction#1/18 s.BracketNumber#1/19 {REMOVED TILE} s.Sample#1/24 {REMOVED TILE}
        //RESULT: Tile{ [[ } (/32 e.Indent#1/30/33 )/35 Tile{ AsIs: </0 Reuse: & PrintMatchRepeatedTVarSave/4 AsIs: (/7 AsIs: e.Indent#1/30 AsIs: )/8 HalfReuse: s.Direction1 #18/11 HalfReuse: s.BracketNumber1 #19/13 } Tile{ AsIs: s.Var#1/29 } Tile{ HalfReuse: s.Sample1 #24/12 AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[32]);
        refalrts::copy_evar(vm, context[33], context[34], context[30], context[31]);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::update_name(context[4], functions[efunc_PrintMatchRepeatedTVarSave]);
        refalrts::reinit_svar( context[11], context[18] );
        refalrts::reinit_svar( context[13], context[19] );
        refalrts::reinit_svar( context[12], context[24] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[32], context[35] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[12];
        res = refalrts::splice_evar( res, context[29], context[29] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[32], context[35] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-Native/4 (/7 e.new#15/25 )/8 (/11 s.new#16/13 # AlgLeft/18 s.new#17/19 s.new#18/24 )/12 >/1
      context[25] = context[20];
      context[26] = context[21];
      if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[18] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      // closed e.new#15 as range 25
      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/27 )/8 (/11 # CmdOpenedE-Start/13 # AlgLeft/18 s.BracketNumber#1/19 s.VarNumber#1/24 )/12 >/1
        context[27] = context[25];
        context[28] = context[26];
        if( ! refalrts::ident_term( identifiers[ident_CmdOpenedEm_Start], context[13] ) )
          continue;
        // closed e.Indent#1 as range 27
        //DEBUG: s.BracketNumber#1: 19
        //DEBUG: s.VarNumber#1: 24
        //DEBUG: e.Indent#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.BracketNumber#1/19 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/29 e.Indent#1/27/30 ' '/32 Tile{ HalfReuse: ' '/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/27 HalfReuse: </8 HalfReuse: & ContextRange-B/11 HalfReuse: s.VarNumber1 #24/13 HalfReuse: >/18 }" = 0;"/33 )/35 (/36 e.Indent#1/27/37 </39 & ContextRange-E/40 Tile{ AsIs: s.VarNumber#1/24 HalfReuse: >/12 HalfReuse: ' '/1 }"= 0;"/41 )/43 (/44 e.Indent#1/27/45"refalrts::start_e_loop(vm);"/47 )/49 (/50 e.Indent#1/27/51"do {"/53 )/55 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[29]);
        refalrts::copy_evar(vm, context[30], context[31], context[27], context[28]);
        refalrts::alloc_char(vm, context[32], ' ');
        refalrts::alloc_chars(vm, context[33], context[34], " = 0;", 5);
        refalrts::alloc_close_bracket(vm, context[35]);
        refalrts::alloc_open_bracket(vm, context[36]);
        refalrts::copy_evar(vm, context[37], context[38], context[27], context[28]);
        refalrts::alloc_open_call(vm, context[39]);
        refalrts::alloc_name(vm, context[40], functions[efunc_ContextRangem_E]);
        refalrts::alloc_chars(vm, context[41], context[42], "= 0;", 4);
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::alloc_open_bracket(vm, context[44]);
        refalrts::copy_evar(vm, context[45], context[46], context[27], context[28]);
        refalrts::alloc_chars(vm, context[47], context[48], "refalrts::start_e_loop(vm);", 27);
        refalrts::alloc_close_bracket(vm, context[49]);
        refalrts::alloc_open_bracket(vm, context[50]);
        refalrts::copy_evar(vm, context[51], context[52], context[27], context[28]);
        refalrts::alloc_chars(vm, context[53], context[54], "do {", 4);
        refalrts::alloc_close_bracket(vm, context[55]);
        refalrts::reinit_char(context[0], ' ');
        refalrts::reinit_close_bracket(context[4]);
        refalrts::reinit_open_call(context[8]);
        refalrts::reinit_name(context[11], functions[efunc_ContextRangem_B]);
        refalrts::reinit_svar( context[13], context[24] );
        refalrts::reinit_close_call(context[18]);
        refalrts::reinit_close_call(context[12]);
        refalrts::reinit_char(context[1], ' ');
        refalrts::link_brackets( context[50], context[55] );
        refalrts::link_brackets( context[44], context[49] );
        refalrts::link_brackets( context[36], context[43] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[39] );
        refalrts::link_brackets( context[7], context[35] );
        refalrts::push_stack( vm, context[18] );
        refalrts::push_stack( vm, context[8] );
        refalrts::link_brackets( context[29], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[41], context[55] );
        res = refalrts::splice_evar( res, context[24], context[1] );
        res = refalrts::splice_evar( res, context[33], context[40] );
        res = refalrts::splice_evar( res, context[0], context[18] );
        res = refalrts::splice_evar( res, context[29], context[32] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-Native/4 (/7 e.Indent#1/27 ' '/30 ' '/29 )/8 (/11 # CmdOpenedE-End/13 # AlgLeft/18 s.BracketNumber#1/19 s.VarNumber#1/24 )/12 >/1
      context[27] = context[25];
      context[28] = context[26];
      if( ! refalrts::ident_term( identifiers[ident_CmdOpenedEm_End], context[13] ) )
        continue;
      context[29] = refalrts::char_right( ' ', context[27], context[28] );
      if( ! context[29] )
        continue;
      context[30] = refalrts::char_right( ' ', context[27], context[28] );
      if( ! context[30] )
        continue;
      // closed e.Indent#1 as range 27
      //DEBUG: s.BracketNumber#1: 19
      //DEBUG: s.VarNumber#1: 24
      //DEBUG: e.Indent#1: 27

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/27/31 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/27 Reuse: '}'/30 AsIs: ' '/29 HalfReuse: 'w'/8 HalfReuse: 'h'/11 HalfReuse: 'i'/13 HalfReuse: 'l'/18 }"e ( refalrts::open_evar_advance( "/33 </35 & ContextRange/36 Tile{ AsIs: s.VarNumber#1/24 HalfReuse: >/12 HalfReuse: ','/1 } ' '/37 </38 & ContextRange/39 Tile{ AsIs: s.BracketNumber#1/19 } >/40" ) );"/41 )/43 Tile{ ]] }
      refalrts::copy_evar(vm, context[31], context[32], context[27], context[28]);
      refalrts::alloc_chars(vm, context[33], context[34], "e ( refalrts::open_evar_advance( ", 33);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_ContextRange]);
      refalrts::alloc_char(vm, context[37], ' ');
      refalrts::alloc_open_call(vm, context[38]);
      refalrts::alloc_name(vm, context[39], functions[efunc_ContextRange]);
      refalrts::alloc_close_call(vm, context[40]);
      refalrts::alloc_chars(vm, context[41], context[42], " ) );", 5);
      refalrts::alloc_close_bracket(vm, context[43]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::update_char(context[30], '}');
      refalrts::reinit_char(context[8], 'w');
      refalrts::reinit_char(context[11], 'h');
      refalrts::reinit_char(context[13], 'i');
      refalrts::reinit_char(context[18], 'l');
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_char(context[1], ',');
      refalrts::link_brackets( context[7], context[43] );
      refalrts::push_stack( vm, context[40] );
      refalrts::push_stack( vm, context[38] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[35] );
      refalrts::link_brackets( context[0], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[40], context[43] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[24], context[1] );
      res = refalrts::splice_evar( res, context[33], context[36] );
      res = refalrts::splice_evar( res, context[4], context[18] );
      res = refalrts::splice_evar( res, context[31], context[32] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-Native/4 (/7 e.Indent#1/20 )/8 (/11 # CmdSave/13 s.OldBracketNumber#1/18 s.NewBracketNumber#1/19 )/12 >/1
    context[20] = context[14];
    context[21] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_CmdSave], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Indent#1 as range 20
    //DEBUG: s.OldBracketNumber#1: 18
    //DEBUG: s.NewBracketNumber#1: 19
    //DEBUG: e.Indent#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/20 AsIs: )/8 AsIs: (/11 } e.Indent#1/20/22 Tile{ AsIs: </0 Reuse: & ContextRange-B/4 } Tile{ AsIs: s.NewBracketNumber#1/19 HalfReuse: >/12 HalfReuse: ' '/1 }"= "/24 </26 Tile{ HalfReuse: & ContextRange-B/13 AsIs: s.OldBracketNumber#1/18 } >/27 ';'/28 )/29 (/30 e.Indent#1/20/31 </33 & ContextRange-E/34 s.NewBracketNumber#1/19/35 >/36" = "/37 </39 & ContextRange-E/40 s.OldBracketNumber#1/18/41 >/42 ';'/43 )/44 Tile{ ]] }
    refalrts::copy_evar(vm, context[22], context[23], context[20], context[21]);
    refalrts::alloc_chars(vm, context[24], context[25], "= ", 2);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_close_call(vm, context[27]);
    refalrts::alloc_char(vm, context[28], ';');
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::alloc_open_bracket(vm, context[30]);
    refalrts::copy_evar(vm, context[31], context[32], context[20], context[21]);
    refalrts::alloc_open_call(vm, context[33]);
    refalrts::alloc_name(vm, context[34], functions[efunc_ContextRangem_E]);
    refalrts::copy_stvar(vm, context[35], context[19]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_chars(vm, context[37], context[38], " = ", 3);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_ContextRangem_E]);
    refalrts::copy_stvar(vm, context[41], context[18]);
    refalrts::alloc_close_call(vm, context[42]);
    refalrts::alloc_char(vm, context[43], ';');
    refalrts::alloc_close_bracket(vm, context[44]);
    refalrts::update_name(context[4], functions[efunc_ContextRangem_B]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_char(context[1], ' ');
    refalrts::reinit_name(context[13], functions[efunc_ContextRangem_B]);
    refalrts::link_brackets( context[30], context[44] );
    refalrts::push_stack( vm, context[42] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[33] );
    refalrts::link_brackets( context[11], context[29] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[44] );
    res = refalrts::splice_evar( res, context[13], context[18] );
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[19], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.Indent#1/14 )/8 (/11 # CmdResetAllocator/13 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdResetAllocator], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.Indent#1 as range 14
    //DEBUG: e.Indent#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/14 AsIs: )/8 AsIs: (/11 HalfReuse: )/13 HalfReuse: (/12 } e.Indent#1/14/16 'r'/18 Tile{ HalfReuse: 'e'/0 HalfReuse: 'f'/4 }"alrts::reset_allocator(vm);"/19 Tile{ HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[16], context[17], context[14], context[15]);
    refalrts::alloc_char(vm, context[18], 'r');
    refalrts::alloc_chars(vm, context[19], context[20], "alrts::reset_allocator(vm);", 27);
    refalrts::reinit_close_bracket(context[13]);
    refalrts::reinit_open_bracket(context[12]);
    refalrts::reinit_char(context[0], 'e');
    refalrts::reinit_char(context[4], 'f');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[11], context[13] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.new#4/14 )/8 (/11 s.new#5/13 s.new#6/18 e.new#7/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    // closed e.new#4 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.new#7 as range 16
    do {
      // </0 & GenCommand-Native/4 (/7 e.new#8/19 )/8 (/11 # CmdSetRes/13 s.new#9/18 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdSetRes], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.new#8 as range 19
      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/21 )/8 (/11 # CmdSetRes/13 # ARG-BEGIN/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_ARGm_BEGIN], context[18] ) )
          continue;
        // closed e.Indent#1 as range 21
        //DEBUG: e.Indent#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/21/23 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/21 HalfReuse: 'r'/8 HalfReuse: 'e'/11 HalfReuse: 'f'/13 HalfReuse: 'a'/18 HalfReuse: 'l'/12 HalfReuse: 'r'/1 }"ts::Iter res = arg_begin;"/25 )/27 Tile{ ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[21], context[22]);
        refalrts::alloc_chars(vm, context[25], context[26], "ts::Iter res = arg_begin;", 25);
        refalrts::alloc_close_bracket(vm, context[27]);
        refalrts::reinit_open_bracket(context[0]);
        refalrts::reinit_close_bracket(context[4]);
        refalrts::reinit_char(context[8], 'r');
        refalrts::reinit_char(context[11], 'e');
        refalrts::reinit_char(context[13], 'f');
        refalrts::reinit_char(context[18], 'a');
        refalrts::reinit_char(context[12], 'l');
        refalrts::reinit_char(context[1], 'r');
        refalrts::link_brackets( context[7], context[27] );
        refalrts::link_brackets( context[0], context[4] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[25], context[27] );
        res = refalrts::splice_evar( res, context[4], context[1] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/21 )/8 (/11 # CmdSetRes/13 # RIGHT-EDGE/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_RIGHTm_EDGE], context[18] ) )
          continue;
        // closed e.Indent#1 as range 21
        //DEBUG: e.Indent#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/23 e.Indent#1/21/24 )/26 (/27 e.Indent#1/21/28"refalrts::Iter trash_prev = arg_begin->prev"/30 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/21 HalfReuse: 'r'/8 HalfReuse: 'e'/11 HalfReuse: 'f'/13 HalfReuse: 'a'/18 HalfReuse: 'l'/12 HalfReuse: 'r'/1 }"ts::use(trash_prev);"/32 )/34 (/35 e.Indent#1/21/36"refalrts::Iter res = arg_end->next;"/38 )/40 Tile{ ]] }
        refalrts::alloc_open_bracket(vm, context[23]);
        refalrts::copy_evar(vm, context[24], context[25], context[21], context[22]);
        refalrts::alloc_close_bracket(vm, context[26]);
        refalrts::alloc_open_bracket(vm, context[27]);
        refalrts::copy_evar(vm, context[28], context[29], context[21], context[22]);
        refalrts::alloc_chars(vm, context[30], context[31], "refalrts::Iter trash_prev = arg_begin->prev", 43);
        refalrts::alloc_chars(vm, context[32], context[33], "ts::use(trash_prev);", 20);
        refalrts::alloc_close_bracket(vm, context[34]);
        refalrts::alloc_open_bracket(vm, context[35]);
        refalrts::copy_evar(vm, context[36], context[37], context[21], context[22]);
        refalrts::alloc_chars(vm, context[38], context[39], "refalrts::Iter res = arg_end->next;", 35);
        refalrts::alloc_close_bracket(vm, context[40]);
        refalrts::reinit_char(context[0], ';');
        refalrts::reinit_close_bracket(context[4]);
        refalrts::reinit_char(context[8], 'r');
        refalrts::reinit_char(context[11], 'e');
        refalrts::reinit_char(context[13], 'f');
        refalrts::reinit_char(context[18], 'a');
        refalrts::reinit_char(context[12], 'l');
        refalrts::reinit_char(context[1], 'r');
        refalrts::link_brackets( context[35], context[40] );
        refalrts::link_brackets( context[7], context[34] );
        refalrts::link_brackets( context[27], context[4] );
        refalrts::link_brackets( context[23], context[26] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[32], context[40] );
        res = refalrts::splice_evar( res, context[0], context[1] );
        res = refalrts::splice_evar( res, context[23], context[31] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-Native/4 (/7 e.Indent#1/21 )/8 (/11 # CmdSetRes/13 s.Offset#1/18 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      // closed e.Indent#1 as range 21
      //DEBUG: s.Offset#1: 18
      //DEBUG: e.Indent#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/21 AsIs: )/8 AsIs: (/11 } e.Indent#1/21/23 Tile{ HalfReuse: 'r'/4 }"efalrts::Iter trash_prev = arg_begin->prev;"/25 )/27 (/28 e.Indent#1/21/29"refalrts::use(trash_prev);"/31 )/33 (/34 e.Indent#1/21/35"refalrts::Iter res = "/37 Tile{ AsIs: </0 } Tile{ HalfReuse: & ContextItem/13 AsIs: s.Offset#1/18 HalfReuse: >/12 HalfReuse: ';'/1 } )/39 Tile{ ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[21], context[22]);
      refalrts::alloc_chars(vm, context[25], context[26], "efalrts::Iter trash_prev = arg_begin->prev;", 43);
      refalrts::alloc_close_bracket(vm, context[27]);
      refalrts::alloc_open_bracket(vm, context[28]);
      refalrts::copy_evar(vm, context[29], context[30], context[21], context[22]);
      refalrts::alloc_chars(vm, context[31], context[32], "refalrts::use(trash_prev);", 26);
      refalrts::alloc_close_bracket(vm, context[33]);
      refalrts::alloc_open_bracket(vm, context[34]);
      refalrts::copy_evar(vm, context[35], context[36], context[21], context[22]);
      refalrts::alloc_chars(vm, context[37], context[38], "refalrts::Iter res = ", 21);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::reinit_char(context[4], 'r');
      refalrts::reinit_name(context[13], functions[efunc_ContextItem]);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_char(context[1], ';');
      refalrts::link_brackets( context[34], context[39] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[28], context[33] );
      refalrts::link_brackets( context[11], context[27] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[39], context[39] );
      res = refalrts::splice_evar( res, context[13], context[1] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[25], context[38] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-Native/4 (/7 e.new#8/19 )/8 (/11 s.new#9/13 s.new#10/18 s.new#11/23 e.new#12/21 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[17];
      // closed e.new#8 as range 19
      if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
        continue;
      // closed e.new#12 as range 21
      do {
        // </0 & GenCommand-Native/4 (/7 e.new#13/24 )/8 (/11 # CmdCopyVar/13 s.new#14/18 s.new#15/23 s.new#16/28 )/12 >/1
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        if( ! refalrts::ident_term( identifiers[ident_CmdCopyVar], context[13] ) )
          continue;
        // closed e.new#13 as range 24
        if( ! refalrts::svar_left( context[28], context[26], context[27] ) )
          continue;
        if( ! refalrts::empty_seq( context[26], context[27] ) )
          continue;
        do {
          // </0 & GenCommand-Native/4 (/7 e.Indent#1/29 )/8 (/11 # CmdCopyVar/13 'e'/18 s.Target#1/23 s.Sample#1/28 )/12 >/1
          context[29] = context[24];
          context[30] = context[25];
          if( ! refalrts::char_term( 'e', context[18] ) )
            continue;
          // closed e.Indent#1 as range 29
          //DEBUG: s.Target#1: 23
          //DEBUG: s.Sample#1: 28
          //DEBUG: e.Indent#1: 29

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/29 AsIs: )/8 AsIs: (/11 } e.Indent#1/29/31"refalrts::copy_evar(vm, "/33 Tile{ HalfReuse: </13 HalfReuse: & ContextRange/18 AsIs: s.Target#1/23 } >/35", "/36 Tile{ AsIs: </0 Reuse: & ContextRange/4 } Tile{ AsIs: s.Sample#1/28 HalfReuse: >/12 HalfReuse: ')'/1 } ';'/38 )/39 Tile{ ]] }
          refalrts::copy_evar(vm, context[31], context[32], context[29], context[30]);
          refalrts::alloc_chars(vm, context[33], context[34], "refalrts::copy_evar(vm, ", 24);
          refalrts::alloc_close_call(vm, context[35]);
          refalrts::alloc_chars(vm, context[36], context[37], ", ", 2);
          refalrts::alloc_char(vm, context[38], ';');
          refalrts::alloc_close_bracket(vm, context[39]);
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[18], functions[efunc_ContextRange]);
          refalrts::update_name(context[4], functions[efunc_ContextRange]);
          refalrts::reinit_close_call(context[12]);
          refalrts::reinit_char(context[1], ')');
          refalrts::link_brackets( context[11], context[39] );
          refalrts::push_stack( vm, context[12] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[35] );
          refalrts::push_stack( vm, context[13] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = arg_end->next;
          res = refalrts::splice_evar( res, context[38], context[39] );
          res = refalrts::splice_evar( res, context[28], context[1] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[35], context[37] );
          res = refalrts::splice_evar( res, context[13], context[23] );
          res = refalrts::splice_evar( res, context[33], context[34] );
          res = refalrts::splice_evar( res, context[31], context[32] );
          res = refalrts::splice_evar( res, context[7], context[11] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & GenCommand-Native/4 (/7 e.Indent#1/29 )/8 (/11 # CmdCopyVar/13 s.Mode#1/18 s.Target#1/23 s.Sample#1/28 )/12 >/1
        context[29] = context[24];
        context[30] = context[25];
        // closed e.Indent#1 as range 29
        //DEBUG: s.Mode#1: 18
        //DEBUG: s.Target#1: 23
        //DEBUG: s.Sample#1: 28
        //DEBUG: e.Indent#1: 29

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/29 AsIs: )/8 AsIs: (/11 } e.Indent#1/29/31"refa"/33 Tile{ HalfReuse: 'l'/13 }"rts::copy_stvar(vm, "/35 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Target#1/23 } >/37", "/38 </40 & ContextItem/41 Tile{ AsIs: s.Sample#1/28 HalfReuse: >/12 HalfReuse: ')'/1 } ';'/42 )/43 Tile{ ]] }
        refalrts::copy_evar(vm, context[31], context[32], context[29], context[30]);
        refalrts::alloc_chars(vm, context[33], context[34], "refa", 4);
        refalrts::alloc_chars(vm, context[35], context[36], "rts::copy_stvar(vm, ", 20);
        refalrts::alloc_close_call(vm, context[37]);
        refalrts::alloc_chars(vm, context[38], context[39], ", ", 2);
        refalrts::alloc_open_call(vm, context[40]);
        refalrts::alloc_name(vm, context[41], functions[efunc_ContextItem]);
        refalrts::alloc_char(vm, context[42], ';');
        refalrts::alloc_close_bracket(vm, context[43]);
        refalrts::reinit_char(context[13], 'l');
        refalrts::update_name(context[4], functions[efunc_ContextItem]);
        refalrts::reinit_close_call(context[12]);
        refalrts::reinit_char(context[1], ')');
        refalrts::link_brackets( context[11], context[43] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[40] );
        refalrts::push_stack( vm, context[37] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[42], context[43] );
        res = refalrts::splice_evar( res, context[28], context[1] );
        res = refalrts::splice_evar( res, context[37], context[41] );
        res = refalrts::splice_evar( res, context[23], context[23] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[35], context[36] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_evar( res, context[31], context[32] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/24 )/8 (/11 # CmdReinitSVar/13 s.Offset#1/18 s.Sample#1/23 )/12 >/1
        context[24] = context[19];
        context[25] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_CmdReinitSVar], context[13] ) )
          continue;
        if( ! refalrts::empty_seq( context[21], context[22] ) )
          continue;
        // closed e.Indent#1 as range 24
        //DEBUG: s.Offset#1: 18
        //DEBUG: s.Sample#1: 23
        //DEBUG: e.Indent#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/24 AsIs: )/8 AsIs: (/11 } e.Indent#1/24/26"ref"/28 Tile{ HalfReuse: 'a'/13 }"lrts::reinit_svar( "/30 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Offset#1/18 } >/32", "/33 </35 & ContextItem/36 Tile{ AsIs: s.Sample#1/23 HalfReuse: >/12 HalfReuse: ' '/1 }");"/37 )/39 Tile{ ]] }
        refalrts::copy_evar(vm, context[26], context[27], context[24], context[25]);
        refalrts::alloc_chars(vm, context[28], context[29], "ref", 3);
        refalrts::alloc_chars(vm, context[30], context[31], "lrts::reinit_svar( ", 19);
        refalrts::alloc_close_call(vm, context[32]);
        refalrts::alloc_chars(vm, context[33], context[34], ", ", 2);
        refalrts::alloc_open_call(vm, context[35]);
        refalrts::alloc_name(vm, context[36], functions[efunc_ContextItem]);
        refalrts::alloc_chars(vm, context[37], context[38], ");", 2);
        refalrts::alloc_close_bracket(vm, context[39]);
        refalrts::reinit_char(context[13], 'a');
        refalrts::update_name(context[4], functions[efunc_ContextItem]);
        refalrts::reinit_close_call(context[12]);
        refalrts::reinit_char(context[1], ' ');
        refalrts::link_brackets( context[11], context[39] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[35] );
        refalrts::push_stack( vm, context[32] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[37], context[39] );
        res = refalrts::splice_evar( res, context[23], context[1] );
        res = refalrts::splice_evar( res, context[32], context[36] );
        res = refalrts::splice_evar( res, context[18], context[18] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[13], context[13] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.new#13/24 )/8 (/11 # CmdCreateElem/13 s.new#14/18 s.new#15/23 e.new#16/26 )/12 >/1
        context[24] = context[19];
        context[25] = context[20];
        context[26] = context[21];
        context[27] = context[22];
        if( ! refalrts::ident_term( identifiers[ident_CmdCreateElem], context[13] ) )
          continue;
        // closed e.new#13 as range 24
        // closed e.new#16 as range 26
        do {
          // </0 & GenCommand-Native/4 (/7 e.Indent#1/28 )/8 (/11 # CmdCreateElem/13 # Allocate/18 s.ElemNumber#1/23 # ElString/32 e.String#1/30 )/12 >/1
          context[28] = context[24];
          context[29] = context[25];
          context[30] = context[26];
          context[31] = context[27];
          if( ! refalrts::ident_term( identifiers[ident_Allocate], context[18] ) )
            continue;
          context[32] = refalrts::ident_left( identifiers[ident_ElString], context[30], context[31] );
          if( ! context[32] )
            continue;
          // closed e.Indent#1 as range 28
          // closed e.String#1 as range 30
          //DEBUG: s.ElemNumber#1: 23
          //DEBUG: e.Indent#1: 28
          //DEBUG: e.String#1: 30

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
          //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/28 AsIs: )/8 AsIs: (/11 } e.Indent#1/28/33"refalrts::alloc_chars(vm, "/35 Tile{ HalfReuse: </13 HalfReuse: & ContextItem/18 AsIs: s.ElemNumber#1/23 HalfReuse: >/32 }", "/37 Tile{ AsIs: </0 Reuse: & ContextItem/4 } </39 & Add/40 1/41 s.ElemNumber#1/23/42 >/43 >/44", "/45 </47 & PrintString/48 Tile{ AsIs: e.String#1/30 } >/49 ')'/50 Tile{ HalfReuse: ';'/12 HalfReuse: )/1 ]] }
          refalrts::copy_evar(vm, context[33], context[34], context[28], context[29]);
          refalrts::alloc_chars(vm, context[35], context[36], "refalrts::alloc_chars(vm, ", 26);
          refalrts::alloc_chars(vm, context[37], context[38], ", ", 2);
          refalrts::alloc_open_call(vm, context[39]);
          refalrts::alloc_name(vm, context[40], functions[efunc_Add]);
          refalrts::alloc_number(vm, context[41], 1UL);
          refalrts::copy_stvar(vm, context[42], context[23]);
          refalrts::alloc_close_call(vm, context[43]);
          refalrts::alloc_close_call(vm, context[44]);
          refalrts::alloc_chars(vm, context[45], context[46], ", ", 2);
          refalrts::alloc_open_call(vm, context[47]);
          refalrts::alloc_name(vm, context[48], functions[efunc_PrintString]);
          refalrts::alloc_close_call(vm, context[49]);
          refalrts::alloc_char(vm, context[50], ')');
          refalrts::reinit_open_call(context[13]);
          refalrts::reinit_name(context[18], functions[efunc_ContextItem]);
          refalrts::reinit_close_call(context[32]);
          refalrts::update_name(context[4], functions[efunc_ContextItem]);
          refalrts::reinit_char(context[12], ';');
          refalrts::reinit_close_bracket(context[1]);
          refalrts::link_brackets( context[11], context[1] );
          refalrts::push_stack( vm, context[49] );
          refalrts::push_stack( vm, context[47] );
          refalrts::push_stack( vm, context[44] );
          refalrts::push_stack( vm, context[0] );
          refalrts::push_stack( vm, context[43] );
          refalrts::push_stack( vm, context[39] );
          refalrts::push_stack( vm, context[32] );
          refalrts::push_stack( vm, context[13] );
          refalrts::link_brackets( context[7], context[8] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[12];
          res = refalrts::splice_evar( res, context[49], context[50] );
          res = refalrts::splice_evar( res, context[30], context[31] );
          res = refalrts::splice_evar( res, context[39], context[48] );
          res = refalrts::splice_evar( res, context[0], context[4] );
          res = refalrts::splice_evar( res, context[37], context[38] );
          res = refalrts::splice_evar( res, context[13], context[32] );
          res = refalrts::splice_evar( res, context[35], context[36] );
          res = refalrts::splice_evar( res, context[33], context[34] );
          res = refalrts::splice_evar( res, context[7], context[11] );
          refalrts::use( res );
          return refalrts::cSuccess;
        } while ( 0 );
        refalrts::stop_sentence(vm);

        // </0 & GenCommand-Native/4 (/7 e.Indent#1/28 )/8 (/11 # CmdCreateElem/13 s.CreateMode#1/18 s.ElemNumber#1/23 e.ElemInfo#1/30 )/12 >/1
        context[28] = context[24];
        context[29] = context[25];
        context[30] = context[26];
        context[31] = context[27];
        // closed e.Indent#1 as range 28
        // closed e.ElemInfo#1 as range 30
        //DEBUG: s.CreateMode#1: 18
        //DEBUG: s.ElemNumber#1: 23
        //DEBUG: e.Indent#1: 28
        //DEBUG: e.ElemInfo#1: 30

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} s.CreateMode#1/18 s.ElemNumber#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } (/32 e.Indent#1/28/33 Tile{ AsIs: )/12 } Tile{ AsIs: </0 Reuse: & PrintCreateElem/4 AsIs: (/7 AsIs: e.Indent#1/28 AsIs: )/8 HalfReuse: s.CreateMode1 #18/11 HalfReuse: s.ElemNumber1 #23/13 } Tile{ AsIs: e.ElemInfo#1/30 } Tile{ AsIs: >/1 ]] }
        refalrts::alloc_open_bracket(vm, context[32]);
        refalrts::copy_evar(vm, context[33], context[34], context[28], context[29]);
        refalrts::update_name(context[4], functions[efunc_PrintCreateElem]);
        refalrts::reinit_svar( context[11], context[18] );
        refalrts::reinit_svar( context[13], context[23] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[32], context[12] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[30], context[31] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[12], context[12] );
        res = refalrts::splice_evar( res, context[33], context[34] );
        res = refalrts::splice_evar( res, context[32], context[32] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-Native/4 (/7 e.Indent#1/24 )/8 (/11 # CmdLinkBrackets/13 s.Left#1/18 s.Right#1/23 )/12 >/1
      context[24] = context[19];
      context[25] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_CmdLinkBrackets], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.Indent#1 as range 24
      //DEBUG: s.Left#1: 18
      //DEBUG: s.Right#1: 23
      //DEBUG: e.Indent#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/24 AsIs: )/8 AsIs: (/11 } e.Indent#1/24/26"ref"/28 Tile{ HalfReuse: 'a'/13 }"lrts::link_brackets( "/30 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Left#1/18 } >/32", "/33 </35 & ContextItem/36 Tile{ AsIs: s.Right#1/23 HalfReuse: >/12 HalfReuse: ' '/1 }");"/37 )/39 Tile{ ]] }
      refalrts::copy_evar(vm, context[26], context[27], context[24], context[25]);
      refalrts::alloc_chars(vm, context[28], context[29], "ref", 3);
      refalrts::alloc_chars(vm, context[30], context[31], "lrts::link_brackets( ", 21);
      refalrts::alloc_close_call(vm, context[32]);
      refalrts::alloc_chars(vm, context[33], context[34], ", ", 2);
      refalrts::alloc_open_call(vm, context[35]);
      refalrts::alloc_name(vm, context[36], functions[efunc_ContextItem]);
      refalrts::alloc_chars(vm, context[37], context[38], ");", 2);
      refalrts::alloc_close_bracket(vm, context[39]);
      refalrts::reinit_char(context[13], 'a');
      refalrts::update_name(context[4], functions[efunc_ContextItem]);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_char(context[1], ' ');
      refalrts::link_brackets( context[11], context[39] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[35] );
      refalrts::push_stack( vm, context[32] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[23], context[1] );
      res = refalrts::splice_evar( res, context[32], context[36] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-Native/4 (/7 e.new#8/19 )/8 (/11 s.new#9/13 s.new#10/18 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.new#8 as range 19
      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/21 )/8 (/11 # CmdPushStack/13 s.ElemNumber#1/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_CmdPushStack], context[13] ) )
          continue;
        // closed e.Indent#1 as range 21
        //DEBUG: s.ElemNumber#1: 18
        //DEBUG: e.Indent#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/21 AsIs: )/8 AsIs: (/11 } e.Indent#1/21/23 Tile{ HalfReuse: 'r'/4 }"efalrts::push_stack( vm, "/25 Tile{ AsIs: </0 } Tile{ HalfReuse: & ContextItem/13 AsIs: s.ElemNumber#1/18 HalfReuse: >/12 HalfReuse: ' '/1 }");"/27 )/29 Tile{ ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[21], context[22]);
        refalrts::alloc_chars(vm, context[25], context[26], "efalrts::push_stack( vm, ", 25);
        refalrts::alloc_chars(vm, context[27], context[28], ");", 2);
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::reinit_char(context[4], 'r');
        refalrts::reinit_name(context[13], functions[efunc_ContextItem]);
        refalrts::reinit_close_call(context[12]);
        refalrts::reinit_char(context[1], ' ');
        refalrts::link_brackets( context[11], context[29] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[27], context[29] );
        res = refalrts::splice_evar( res, context[13], context[1] );
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/21 )/8 (/11 # CmdWrapClosure/13 s.Offset#1/18 )/12 >/1
        context[21] = context[19];
        context[22] = context[20];
        if( ! refalrts::ident_term( identifiers[ident_CmdWrapClosure], context[13] ) )
          continue;
        // closed e.Indent#1 as range 21
        //DEBUG: s.Offset#1: 18
        //DEBUG: e.Indent#1: 21

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/21 AsIs: )/8 AsIs: (/11 } e.Indent#1/21/23 Tile{ HalfReuse: 'r'/4 }"efalrts::wrap_closure( "/25 Tile{ AsIs: </0 } Tile{ HalfReuse: & ContextItem/13 AsIs: s.Offset#1/18 HalfReuse: >/12 HalfReuse: ' '/1 }");"/27 )/29 Tile{ ]] }
        refalrts::copy_evar(vm, context[23], context[24], context[21], context[22]);
        refalrts::alloc_chars(vm, context[25], context[26], "efalrts::wrap_closure( ", 23);
        refalrts::alloc_chars(vm, context[27], context[28], ");", 2);
        refalrts::alloc_close_bracket(vm, context[29]);
        refalrts::reinit_char(context[4], 'r');
        refalrts::reinit_name(context[13], functions[efunc_ContextItem]);
        refalrts::reinit_close_call(context[12]);
        refalrts::reinit_char(context[1], ' ');
        refalrts::link_brackets( context[11], context[29] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[27], context[29] );
        res = refalrts::splice_evar( res, context[13], context[1] );
        res = refalrts::splice_evar( res, context[0], context[0] );
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[4], context[4] );
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-Native/4 (/7 e.Indent#1/21 )/8 (/11 # CmdInsertElem/13 s.ElemNumber#1/18 )/12 >/1
      context[21] = context[19];
      context[22] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_CmdInsertElem], context[13] ) )
        continue;
      // closed e.Indent#1 as range 21
      //DEBUG: s.ElemNumber#1: 18
      //DEBUG: e.Indent#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/21 AsIs: )/8 AsIs: (/11 } e.Indent#1/21/23 Tile{ HalfReuse: 'r'/4 }"es = refalrts::splice_elem( res, "/25 Tile{ AsIs: </0 } Tile{ HalfReuse: & ContextItem/13 AsIs: s.ElemNumber#1/18 HalfReuse: >/12 HalfReuse: ' '/1 }");"/27 )/29 Tile{ ]] }
      refalrts::copy_evar(vm, context[23], context[24], context[21], context[22]);
      refalrts::alloc_chars(vm, context[25], context[26], "es = refalrts::splice_elem( res, ", 33);
      refalrts::alloc_chars(vm, context[27], context[28], ");", 2);
      refalrts::alloc_close_bracket(vm, context[29]);
      refalrts::reinit_char(context[4], 'r');
      refalrts::reinit_name(context[13], functions[efunc_ContextItem]);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_char(context[1], ' ');
      refalrts::link_brackets( context[11], context[29] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[27], context[29] );
      res = refalrts::splice_evar( res, context[13], context[1] );
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-Native/4 (/7 e.new#8/19 )/8 (/11 # CmdInsertVar/13 s.new#9/18 s.new#10/23 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      context[21] = context[16];
      context[22] = context[17];
      if( ! refalrts::ident_term( identifiers[ident_CmdInsertVar], context[13] ) )
        continue;
      // closed e.new#8 as range 19
      if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      do {
        // </0 & GenCommand-Native/4 (/7 e.Indent#1/24 )/8 (/11 # CmdInsertVar/13 'e'/18 s.Number#1/23 )/12 >/1
        context[24] = context[19];
        context[25] = context[20];
        if( ! refalrts::char_term( 'e', context[18] ) )
          continue;
        // closed e.Indent#1 as range 24
        //DEBUG: s.Number#1: 23
        //DEBUG: e.Indent#1: 24

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/24 AsIs: )/8 AsIs: (/11 } e.Indent#1/24/26 'r'/28 Tile{ HalfReuse: 'e'/0 HalfReuse: 's'/4 }" = refalrts::splice_evar( res, "/29 Tile{ HalfReuse: </13 HalfReuse: & ContextRange/18 AsIs: s.Number#1/23 HalfReuse: >/12 HalfReuse: ' '/1 }");"/31 )/33 Tile{ ]] }
        refalrts::copy_evar(vm, context[26], context[27], context[24], context[25]);
        refalrts::alloc_char(vm, context[28], 'r');
        refalrts::alloc_chars(vm, context[29], context[30], " = refalrts::splice_evar( res, ", 31);
        refalrts::alloc_chars(vm, context[31], context[32], ");", 2);
        refalrts::alloc_close_bracket(vm, context[33]);
        refalrts::reinit_char(context[0], 'e');
        refalrts::reinit_char(context[4], 's');
        refalrts::reinit_open_call(context[13]);
        refalrts::reinit_name(context[18], functions[efunc_ContextRange]);
        refalrts::reinit_close_call(context[12]);
        refalrts::reinit_char(context[1], ' ');
        refalrts::link_brackets( context[11], context[33] );
        refalrts::push_stack( vm, context[12] );
        refalrts::push_stack( vm, context[13] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[31], context[33] );
        res = refalrts::splice_evar( res, context[13], context[1] );
        res = refalrts::splice_evar( res, context[29], context[30] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[28], context[28] );
        res = refalrts::splice_evar( res, context[26], context[27] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenCommand-Native/4 (/7 e.Indent#1/24 )/8 (/11 # CmdInsertVar/13 s.Mode#1/18 s.Number#1/23 )/12 >/1
      context[24] = context[19];
      context[25] = context[20];
      // closed e.Indent#1 as range 24
      //DEBUG: s.Mode#1: 18
      //DEBUG: s.Number#1: 23
      //DEBUG: e.Indent#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/18 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/24 AsIs: )/8 AsIs: (/11 } e.Indent#1/24/26"res"/28 Tile{ HalfReuse: ' '/13 }"= refalrts::splice_stvar( res, "/30 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Number#1/23 HalfReuse: >/12 HalfReuse: ' '/1 }");"/32 )/34 Tile{ ]] }
      refalrts::copy_evar(vm, context[26], context[27], context[24], context[25]);
      refalrts::alloc_chars(vm, context[28], context[29], "res", 3);
      refalrts::alloc_chars(vm, context[30], context[31], "= refalrts::splice_stvar( res, ", 31);
      refalrts::alloc_chars(vm, context[32], context[33], ");", 2);
      refalrts::alloc_close_bracket(vm, context[34]);
      refalrts::reinit_char(context[13], ' ');
      refalrts::update_name(context[4], functions[efunc_ContextItem]);
      refalrts::reinit_close_call(context[12]);
      refalrts::reinit_char(context[1], ' ');
      refalrts::link_brackets( context[11], context[34] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[32], context[34] );
      res = refalrts::splice_evar( res, context[23], context[1] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenCommand-Native/4 (/7 e.Indent#1/19 )/8 (/11 # CmdInsertRange/13 s.Number#1/18 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdInsertRange], context[13] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Indent#1 as range 19
      //DEBUG: s.Number#1: 18
      //DEBUG: e.Indent#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/19 AsIs: )/8 AsIs: (/11 } e.Indent#1/19/21"res = refalrts::splice_evar( res, "/23 Tile{ AsIs: </0 Reuse: & ContextItem/4 } s.Number#1/18/25 >/26", "/27 </29 & ContextItem/30 </31 & Add/32 Tile{ HalfReuse: 1/13 AsIs: s.Number#1/18 HalfReuse: >/12 AsIs: >/1 }" );"/33 )/35 Tile{ ]] }
      refalrts::copy_evar(vm, context[21], context[22], context[19], context[20]);
      refalrts::alloc_chars(vm, context[23], context[24], "res = refalrts::splice_evar( res, ", 34);
      refalrts::copy_stvar(vm, context[25], context[18]);
      refalrts::alloc_close_call(vm, context[26]);
      refalrts::alloc_chars(vm, context[27], context[28], ", ", 2);
      refalrts::alloc_open_call(vm, context[29]);
      refalrts::alloc_name(vm, context[30], functions[efunc_ContextItem]);
      refalrts::alloc_open_call(vm, context[31]);
      refalrts::alloc_name(vm, context[32], functions[efunc_Add]);
      refalrts::alloc_chars(vm, context[33], context[34], " );", 3);
      refalrts::alloc_close_bracket(vm, context[35]);
      refalrts::update_name(context[4], functions[efunc_ContextItem]);
      refalrts::reinit_number(context[13], 1UL);
      refalrts::reinit_close_call(context[12]);
      refalrts::link_brackets( context[11], context[35] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[29] );
      refalrts::push_stack( vm, context[12] );
      refalrts::push_stack( vm, context[31] );
      refalrts::push_stack( vm, context[26] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[33], context[35] );
      res = refalrts::splice_evar( res, context[13], context[1] );
      res = refalrts::splice_evar( res, context[25], context[32] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-Native/4 (/7 e.Indent#1/19 )/8 (/11 # CmdInsertTile/13 s.BeginOffset#1/18 s.EndOffset#1/23 )/12 >/1
    context[19] = context[14];
    context[20] = context[15];
    context[21] = context[16];
    context[22] = context[17];
    if( ! refalrts::ident_term( identifiers[ident_CmdInsertTile], context[13] ) )
      continue;
    // closed e.Indent#1 as range 19
    if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: s.BeginOffset#1: 18
    //DEBUG: e.Indent#1: 19
    //DEBUG: s.EndOffset#1: 23

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/19 AsIs: )/8 AsIs: (/11 } e.Indent#1/19/24"res"/26 Tile{ HalfReuse: ' '/13 }"= refalrts::splice_evar( res, "/28 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.BeginOffset#1/18 } >/30", "/31 </33 & ContextItem/34 Tile{ AsIs: s.EndOffset#1/23 HalfReuse: >/12 HalfReuse: ' '/1 }");"/35 )/37 Tile{ ]] }
    refalrts::copy_evar(vm, context[24], context[25], context[19], context[20]);
    refalrts::alloc_chars(vm, context[26], context[27], "res", 3);
    refalrts::alloc_chars(vm, context[28], context[29], "= refalrts::splice_evar( res, ", 30);
    refalrts::alloc_close_call(vm, context[30]);
    refalrts::alloc_chars(vm, context[31], context[32], ", ", 2);
    refalrts::alloc_open_call(vm, context[33]);
    refalrts::alloc_name(vm, context[34], functions[efunc_ContextItem]);
    refalrts::alloc_chars(vm, context[35], context[36], ");", 2);
    refalrts::alloc_close_bracket(vm, context[37]);
    refalrts::reinit_char(context[13], ' ');
    refalrts::update_name(context[4], functions[efunc_ContextItem]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_char(context[1], ' ');
    refalrts::link_brackets( context[11], context[37] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[33] );
    refalrts::push_stack( vm, context[30] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[23], context[1] );
    res = refalrts::splice_evar( res, context[30], context[34] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.new#4/14 )/8 (/11 s.new#5/13 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.new#4 as range 14
    do {
      // </0 & GenCommand-Native/4 (/7 e.Indent#1/16 )/8 (/11 # CmdUseRes/13 )/12 >/1
      context[16] = context[14];
      context[17] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_CmdUseRes], context[13] ) )
        continue;
      // closed e.Indent#1 as range 16
      //DEBUG: e.Indent#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/16 AsIs: )/8 AsIs: (/11 } e.Indent#1/16/18 Tile{ HalfReuse: 'r'/0 HalfReuse: 'e'/4 }"falrts::use( res "/20 Tile{ HalfReuse: ')'/13 HalfReuse: ';'/12 HalfReuse: )/1 ]] }
      refalrts::copy_evar(vm, context[18], context[19], context[16], context[17]);
      refalrts::alloc_chars(vm, context[20], context[21], "falrts::use( res ", 17);
      refalrts::reinit_char(context[0], 'r');
      refalrts::reinit_char(context[4], 'e');
      refalrts::reinit_char(context[13], ')');
      refalrts::reinit_char(context[12], ';');
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[11], context[1] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-Native/4 (/7 e.Indent#1/16 )/8 (/11 # CmdSpliceToFreeList/13 )/12 >/1
    context[16] = context[14];
    context[17] = context[15];
    if( ! refalrts::ident_term( identifiers[ident_CmdSpliceToFreeList], context[13] ) )
      continue;
    // closed e.Indent#1 as range 16
    //DEBUG: e.Indent#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/16 AsIs: )/8 AsIs: (/11 } e.Indent#1/16/18 Tile{ HalfReuse: 'r'/0 HalfReuse: 'e'/4 }"falrts::splice_to_freelist( vm, arg_begin, arg_end "/20 Tile{ HalfReuse: ')'/13 HalfReuse: ';'/12 HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[18], context[19], context[16], context[17]);
    refalrts::alloc_chars(vm, context[20], context[21], "falrts::splice_to_freelist( vm, arg_begin, arg_end ", 51);
    refalrts::reinit_char(context[0], 'r');
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[13], ')');
    refalrts::reinit_char(context[12], ';');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.Indent#1/14 )/8 (/11 # CmdSpliceToFreeList-Range/13 s.Left#1/18 s.Right#1/19 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdSpliceToFreeListm_Range], context[13] ) )
      continue;
    // closed e.Indent#1 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: e.Indent#1: 14
    //DEBUG: s.Left#1: 18
    //DEBUG: s.Right#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/14 AsIs: )/8 AsIs: (/11 } e.Indent#1/14/20"ref"/22 Tile{ HalfReuse: 'a'/13 }"lrts::splice_to_freelist(vm, "/24 Tile{ AsIs: </0 Reuse: & ContextItem/4 } Tile{ AsIs: s.Left#1/18 } >/26", "/27 </29 & ContextItem/30 Tile{ AsIs: s.Right#1/19 HalfReuse: >/12 HalfReuse: ')'/1 } ';'/31 )/32 Tile{ ]] }
    refalrts::copy_evar(vm, context[20], context[21], context[14], context[15]);
    refalrts::alloc_chars(vm, context[22], context[23], "ref", 3);
    refalrts::alloc_chars(vm, context[24], context[25], "lrts::splice_to_freelist(vm, ", 29);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::alloc_chars(vm, context[27], context[28], ", ", 2);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_ContextItem]);
    refalrts::alloc_char(vm, context[31], ';');
    refalrts::alloc_close_bracket(vm, context[32]);
    refalrts::reinit_char(context[13], 'a');
    refalrts::update_name(context[4], functions[efunc_ContextItem]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_char(context[1], ')');
    refalrts::link_brackets( context[11], context[32] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[19], context[1] );
    res = refalrts::splice_evar( res, context[26], context[30] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.Indent#1/14 )/8 (/11 # CmdNextStep/13 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_CmdNextStep], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    // closed e.Indent#1 as range 14
    //DEBUG: e.Indent#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/14 AsIs: )/8 AsIs: (/11 } e.Indent#1/14/16 Tile{ HalfReuse: 'r'/0 HalfReuse: 'e'/4 }"turn refalrts::cSucces"/18 Tile{ HalfReuse: 's'/13 HalfReuse: ';'/12 HalfReuse: )/1 ]] }
    refalrts::copy_evar(vm, context[16], context[17], context[14], context[15]);
    refalrts::alloc_chars(vm, context[18], context[19], "turn refalrts::cSucces", 22);
    refalrts::reinit_char(context[0], 'r');
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[13], 's');
    refalrts::reinit_char(context[12], ';');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenCommand-Native/4 (/7 e.new#4/14 )/8 (/11 # CmdTrash/13 s.new#5/18 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term( identifiers[ident_CmdTrash], context[13] ) )
      continue;
    // closed e.new#4 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    do {
      // </0 & GenCommand-Native/4 (/7 e.Indent#1/19 )/8 (/11 # CmdTrash/13 # LEFT-EDGE/18 )/12 >/1
      context[19] = context[14];
      context[20] = context[15];
      if( ! refalrts::ident_term( identifiers[ident_LEFTm_EDGE], context[18] ) )
        continue;
      // closed e.Indent#1 as range 19
      //DEBUG: e.Indent#1: 19

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } e.Indent#1/19/21 Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/19 HalfReuse: 'r'/8 HalfReuse: 'e'/11 HalfReuse: 'f'/13 HalfReuse: 'a'/18 HalfReuse: 'l'/12 HalfReuse: 'r'/1 }"ts::splice_to_freelist_open( vm, trash_prev, res );"/23 )/25 Tile{ ]] }
      refalrts::copy_evar(vm, context[21], context[22], context[19], context[20]);
      refalrts::alloc_chars(vm, context[23], context[24], "ts::splice_to_freelist_open( vm, trash_prev, res );", 51);
      refalrts::alloc_close_bracket(vm, context[25]);
      refalrts::reinit_open_bracket(context[0]);
      refalrts::reinit_close_bracket(context[4]);
      refalrts::reinit_char(context[8], 'r');
      refalrts::reinit_char(context[11], 'e');
      refalrts::reinit_char(context[13], 'f');
      refalrts::reinit_char(context[18], 'a');
      refalrts::reinit_char(context[12], 'l');
      refalrts::reinit_char(context[1], 'r');
      refalrts::link_brackets( context[7], context[25] );
      refalrts::link_brackets( context[0], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[25] );
      res = refalrts::splice_evar( res, context[4], context[1] );
      res = refalrts::splice_evar( res, context[21], context[22] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenCommand-Native/4 (/7 e.Indent#1/19 )/8 (/11 # CmdTrash/13 s.Offset#1/18 )/12 >/1
    context[19] = context[14];
    context[20] = context[15];
    // closed e.Indent#1 as range 19
    //DEBUG: s.Offset#1: 18
    //DEBUG: e.Indent#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/19 AsIs: )/8 AsIs: (/11 } e.Indent#1/19/21"ref"/23 Tile{ HalfReuse: 'a'/4 }"lrts::splice_to_freelist_open( vm, "/25 Tile{ AsIs: </0 } Tile{ HalfReuse: & ContextItem/13 AsIs: s.Offset#1/18 HalfReuse: >/12 HalfReuse: ','/1 }" res );"/27 )/29 Tile{ ]] }
    refalrts::copy_evar(vm, context[21], context[22], context[19], context[20]);
    refalrts::alloc_chars(vm, context[23], context[24], "ref", 3);
    refalrts::alloc_chars(vm, context[25], context[26], "lrts::splice_to_freelist_open( vm, ", 35);
    refalrts::alloc_chars(vm, context[27], context[28], " res );", 7);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_name(context[13], functions[efunc_ContextItem]);
    refalrts::reinit_close_call(context[12]);
    refalrts::reinit_char(context[1], ',');
    refalrts::link_brackets( context[11], context[29] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenCommand-Native/4 (/7 e.Indent#1/5 )/8 (/11 # CmdFail/13 )/12 >/1
  if( ! refalrts::ident_term( identifiers[ident_CmdFail], context[13] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Indent#1 as range 5
  //DEBUG: e.Indent#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # CmdFail/13 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: (/11 } e.Indent#1/5/14 Tile{ AsIs: </0 Reuse: & BreakerFromIndent/4 } e.Indent#1/5/16 Tile{ HalfReuse: >/12 HalfReuse: )/1 ]] }
  refalrts::copy_evar(vm, context[14], context[15], context[5], context[6]);
  refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
  refalrts::update_name(context[4], functions[efunc_BreakerFromIndent]);
  refalrts::reinit_close_call(context[12]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenCommandm_Native("GenCommand-Native", COOKIE1_, COOKIE2_, func_GenCommandm_Native);


static refalrts::FnResult func_PrintString(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & PrintString/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } '\"'/5 </6 & EscapeString/7 e.String#1/2/8 >/10"\", "/11 Tile{ AsIs: </0 Reuse: & PrintLength/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  refalrts::alloc_char(vm, context[5], '\"');
  refalrts::alloc_open_call(vm, context[6]);
  refalrts::alloc_name(vm, context[7], functions[efunc_EscapeString]);
  refalrts::copy_evar(vm, context[8], context[9], context[2], context[3]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_chars(vm, context[11], context[12], "\", ", 3);
  refalrts::update_name(context[4], functions[efunc_PrintLength]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintString("PrintString", COOKIE1_, COOKIE2_, func_PrintString);


static refalrts::FnResult func_PrintLength(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & PrintLength/4 e.String#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.String#1 as range 2
  //DEBUG: e.String#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & DoPrintLength/0 HalfReuse: 0/4 AsIs: e.String#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::reinit_name(context[0], functions[efunc_DoPrintLength]);
  refalrts::reinit_number(context[4], 0UL);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintLength("PrintLength", COOKIE1_, COOKIE2_, func_PrintLength);


static refalrts::FnResult func_DoPrintLength(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & DoPrintLength/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & DoPrintLength/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & DoPrintLength/4 s.Length#1/5 s.Char#1/8 e.Tail#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.Tail#1 as range 6
    //DEBUG: s.Length#1: 5
    //DEBUG: s.Char#1: 8
    //DEBUG: e.Tail#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Char#1/8 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoPrintLength/4 } </9 & Add/10 1/11 Tile{ AsIs: s.Length#1/5 } >/12 Tile{ AsIs: e.Tail#1/6 } Tile{ AsIs: >/1 ]] }
    refalrts::alloc_open_call(vm, context[9]);
    refalrts::alloc_name(vm, context[10], functions[efunc_Add]);
    refalrts::alloc_number(vm, context[11], 1UL);
    refalrts::alloc_close_call(vm, context[12]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DoPrintLength/4 s.Length#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Length#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Symb/4 AsIs: s.Length#1/5 AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_Symb]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoPrintLength("DoPrintLength", COOKIE1_, COOKIE2_, func_DoPrintLength);


static refalrts::FnResult func_PrintMatchChar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & PrintMatchChar/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.Char#1/11 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: s.Char#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/12"char"/13 )/15 '\''/16 </17 & EscapeChar/18 Tile{ AsIs: s.Char#1/11 AsIs: >/1 } '\''/19 >/20 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "char", 4);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_char(vm, context[16], '\'');
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_EscapeChar]);
  refalrts::alloc_char(vm, context[19], '\'');
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_PrintMatch]);
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[12], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchChar("PrintMatchChar", COOKIE1_, COOKIE2_, func_PrintMatchChar);


static refalrts::FnResult func_PrintMatchCharSave(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & PrintMatchCharSave/4 (/7 e.Indent#1/5 )/8 s.Offset#1/9 s.Direction#1/10 s.BracketNumber#1/11 s.Char#1/12 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Offset#1: 9
  //DEBUG: s.Direction#1: 10
  //DEBUG: s.BracketNumber#1: 11
  //DEBUG: s.Char#1: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Offset#1/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 } (/13"char"/14 )/16 '\''/17 </18 & EscapeChar/19 Tile{ AsIs: s.Char#1/12 AsIs: >/1 } '\''/20 >/21 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_chars(vm, context[14], context[15], "char", 4);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_char(vm, context[17], '\'');
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_EscapeChar]);
  refalrts::alloc_char(vm, context[20], '\'');
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_PrintMatchSave]);
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[13], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchCharSave("PrintMatchCharSave", COOKIE1_, COOKIE2_, func_PrintMatchCharSave);


static refalrts::FnResult func_PrintMatchNumber(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & PrintMatchNumber/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.Number#1/11 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: s.Number#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/12"number"/13 )/15 </16 & Symb/17 Tile{ AsIs: s.Number#1/11 AsIs: >/1 }"UL"/18 >/20 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "number", 6);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_Symb]);
  refalrts::alloc_chars(vm, context[18], context[19], "UL", 2);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_PrintMatch]);
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchNumber("PrintMatchNumber", COOKIE1_, COOKIE2_, func_PrintMatchNumber);


static refalrts::FnResult func_PrintMatchNumberSave(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & PrintMatchNumberSave/4 (/7 e.Indent#1/5 )/8 s.Offset#1/9 s.Direction#1/10 s.BracketNumber#1/11 s.Number#1/12 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Offset#1: 9
  //DEBUG: s.Direction#1: 10
  //DEBUG: s.BracketNumber#1: 11
  //DEBUG: s.Number#1: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Offset#1/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 } (/13"number"/14 )/16 </17 & Symb/18 Tile{ AsIs: s.Number#1/12 AsIs: >/1 }"UL"/19 >/21 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_chars(vm, context[14], context[15], "number", 6);
  refalrts::alloc_close_bracket(vm, context[16]);
  refalrts::alloc_open_call(vm, context[17]);
  refalrts::alloc_name(vm, context[18], functions[efunc_Symb]);
  refalrts::alloc_chars(vm, context[19], context[20], "UL", 2);
  refalrts::alloc_close_call(vm, context[21]);
  refalrts::update_name(context[4], functions[efunc_PrintMatchSave]);
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[17] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[13], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchNumberSave("PrintMatchNumberSave", COOKIE1_, COOKIE2_, func_PrintMatchNumberSave);


static refalrts::FnResult func_PrintMatchName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & PrintMatchName/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 e.Name#1/2 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/11"function"/12 )/14 </15 & FunctionImage/16 Tile{ AsIs: e.Name#1/2 } >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "function", 8);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_FunctionImage]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_PrintMatch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchName("PrintMatchName", COOKIE1_, COOKIE2_, func_PrintMatchName);


static refalrts::FnResult func_PrintMatchNameSave(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & PrintMatchNameSave/4 (/7 e.Indent#1/5 )/8 s.Offset#1/9 s.Direction#1/10 s.BracketNumber#1/11 e.Name#1/2 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Offset#1: 9
  //DEBUG: s.Direction#1: 10
  //DEBUG: s.BracketNumber#1: 11
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Offset#1/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 } (/12"function"/13 )/15 </16 & FunctionImage/17 Tile{ AsIs: e.Name#1/2 } >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "function", 8);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_FunctionImage]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_PrintMatchSave]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchNameSave("PrintMatchNameSave", COOKIE1_, COOKIE2_, func_PrintMatchNameSave);


static refalrts::FnResult func_PrintMatchIdent(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & PrintMatchIdent/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 e.Name#1/2 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/11"ident"/12 )/14 </15 & IdentifierImage/16 Tile{ AsIs: e.Name#1/2 } >/17 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[11]);
  refalrts::alloc_chars(vm, context[12], context[13], "ident", 5);
  refalrts::alloc_close_bracket(vm, context[14]);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_IdentifierImage]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::update_name(context[4], functions[efunc_PrintMatch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchIdent("PrintMatchIdent", COOKIE1_, COOKIE2_, func_PrintMatchIdent);


static refalrts::FnResult func_PrintMatchIdentSave(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & PrintMatchIdentSave/4 (/7 e.Indent#1/5 )/8 s.Offset#1/9 s.Direction#1/10 s.BracketNumber#1/11 e.Name#1/2 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Offset#1: 9
  //DEBUG: s.Direction#1: 10
  //DEBUG: s.BracketNumber#1: 11
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Offset#1/9 AsIs: s.Direction#1/10 AsIs: s.BracketNumber#1/11 } (/12"ident"/13 )/15 </16 & IdentifierImage/17 Tile{ AsIs: e.Name#1/2 } >/18 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "ident", 5);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_IdentifierImage]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_PrintMatchSave]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchIdentSave("PrintMatchIdentSave", COOKIE1_, COOKIE2_, func_PrintMatchIdentSave);


static refalrts::FnResult func_PrintMatchBrackets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & PrintMatchBrackets/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.InnerNum#1/11 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: s.InnerNum#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/12"brackets"/13 )/15 </16 & ContextRange/17 Tile{ AsIs: s.InnerNum#1/11 AsIs: >/1 } >/18 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "brackets", 8);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_ContextRange]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::update_name(context[4], functions[efunc_PrintMatch]);
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchBrackets("PrintMatchBrackets", COOKIE1_, COOKIE2_, func_PrintMatchBrackets);


static refalrts::FnResult func_PrintMatchBracketsSave(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & PrintMatchBracketsSave/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.InnerNum#1/11 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: s.InnerNum#1: 11

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 } </12 & Add/13 2/14 Tile{ AsIs: s.InnerNum#1/11 AsIs: >/1 } Tile{ AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/15"brackets"/16 )/18 </19 & ContextRange/20 s.InnerNum#1/11/21 >/22 >/23 (/24 e.Indent#1/5/25"refalrts::bracket_pointers("/27 </29 & ContextItem/30 </31 & Add/32 s.InnerNum#1/11/33 2/34 >/35 >/36", "/37 </39 & ContextItem/40 </41 & Add/42 s.InnerNum#1/11/43 3/44 >/45 >/46");"/47 )/49 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[14], 2UL);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_chars(vm, context[16], context[17], "brackets", 8);
  refalrts::alloc_close_bracket(vm, context[18]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_ContextRange]);
  refalrts::copy_stvar(vm, context[21], context[11]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_open_bracket(vm, context[24]);
  refalrts::copy_evar(vm, context[25], context[26], context[5], context[6]);
  refalrts::alloc_chars(vm, context[27], context[28], "refalrts::bracket_pointers(", 27);
  refalrts::alloc_open_call(vm, context[29]);
  refalrts::alloc_name(vm, context[30], functions[efunc_ContextItem]);
  refalrts::alloc_open_call(vm, context[31]);
  refalrts::alloc_name(vm, context[32], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[33], context[11]);
  refalrts::alloc_number(vm, context[34], 2UL);
  refalrts::alloc_close_call(vm, context[35]);
  refalrts::alloc_close_call(vm, context[36]);
  refalrts::alloc_chars(vm, context[37], context[38], ", ", 2);
  refalrts::alloc_open_call(vm, context[39]);
  refalrts::alloc_name(vm, context[40], functions[efunc_ContextItem]);
  refalrts::alloc_open_call(vm, context[41]);
  refalrts::alloc_name(vm, context[42], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[43], context[11]);
  refalrts::alloc_number(vm, context[44], 3UL);
  refalrts::alloc_close_call(vm, context[45]);
  refalrts::alloc_close_call(vm, context[46]);
  refalrts::alloc_chars(vm, context[47], context[48], ");", 2);
  refalrts::alloc_close_bracket(vm, context[49]);
  refalrts::update_name(context[4], functions[efunc_PrintMatchSave]);
  refalrts::link_brackets( context[24], context[49] );
  refalrts::push_stack( vm, context[46] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[45] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[36] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[31] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[19] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[49] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchBracketsSave("PrintMatchBracketsSave", COOKIE1_, COOKIE2_, func_PrintMatchBracketsSave);


static refalrts::FnResult func_PrintMatchADT(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & PrintMatchADT/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.InnerNum#1/11 e.Name#1/2 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: s.InnerNum#1: 11
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/12"adt"/13 )/15 </16 & ContextRange/17 Tile{ AsIs: s.InnerNum#1/11 } >/18", "/19 </21 & FunctionImage/22 Tile{ AsIs: e.Name#1/2 } >/23 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_bracket(vm, context[12]);
  refalrts::alloc_chars(vm, context[13], context[14], "adt", 3);
  refalrts::alloc_close_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_ContextRange]);
  refalrts::alloc_close_call(vm, context[18]);
  refalrts::alloc_chars(vm, context[19], context[20], ", ", 2);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_FunctionImage]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::update_name(context[4], functions[efunc_PrintMatch]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[16] );
  refalrts::link_brackets( context[12], context[15] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchADT("PrintMatchADT", COOKIE1_, COOKIE2_, func_PrintMatchADT);


static refalrts::FnResult func_PrintMatchADTSave(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 66 elems
  refalrts::Iter context[66];
  refalrts::zeros( context, 66 );
  // </0 & PrintMatchADTSave/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrintMatchADTSave/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 s.new#4/11 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
    // </0 & PrintMatchADTSave/4 (/7 e.Indent#1/12 )/8 # AlgTerm/9 s.Offset#1/10 s.InnerNum#1/11 e.Name#1/14 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[9] ) )
      continue;
    // closed e.Indent#1 as range 12
    // closed e.Name#1 as range 14
    //DEBUG: s.Offset#1: 10
    //DEBUG: s.InnerNum#1: 11
    //DEBUG: e.Indent#1: 12
    //DEBUG: e.Name#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 e.Indent#1/12/17 </19 & ContextItem/20 </21 & Add/22 s.InnerNum#1/11/23 2/24 >/25 >/26" = refalrts::adt_term("/27 </29 & ContextRange/30 Tile{ AsIs: s.InnerNum#1/11 } >/31", "/32 </34 & FunctionImage/35 Tile{ AsIs: e.Name#1/14 } >/36", "/37 </39 & ContextItem/40 Tile{ AsIs: s.Offset#1/10 } >/41 ')'/42 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/12 HalfReuse: 'i'/8 HalfReuse: 'f'/9 }"( ! "/43 </45 & ContextItem/46 </47 & Add/48 s.InnerNum#1/11/49 2/50 >/51 >/52" )"/53 )/55 (/56 e.Indent#1/12/57"  "/59 </61 & BreakerFromIndent/62 e.Indent#1/12/63 >/65 Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::copy_evar(vm, context[17], context[18], context[12], context[13]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_ContextItem]);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_Add]);
    refalrts::copy_stvar(vm, context[23], context[11]);
    refalrts::alloc_number(vm, context[24], 2UL);
    refalrts::alloc_close_call(vm, context[25]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::alloc_chars(vm, context[27], context[28], " = refalrts::adt_term(", 22);
    refalrts::alloc_open_call(vm, context[29]);
    refalrts::alloc_name(vm, context[30], functions[efunc_ContextRange]);
    refalrts::alloc_close_call(vm, context[31]);
    refalrts::alloc_chars(vm, context[32], context[33], ", ", 2);
    refalrts::alloc_open_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_FunctionImage]);
    refalrts::alloc_close_call(vm, context[36]);
    refalrts::alloc_chars(vm, context[37], context[38], ", ", 2);
    refalrts::alloc_open_call(vm, context[39]);
    refalrts::alloc_name(vm, context[40], functions[efunc_ContextItem]);
    refalrts::alloc_close_call(vm, context[41]);
    refalrts::alloc_char(vm, context[42], ')');
    refalrts::alloc_chars(vm, context[43], context[44], "( ! ", 4);
    refalrts::alloc_open_call(vm, context[45]);
    refalrts::alloc_name(vm, context[46], functions[efunc_ContextItem]);
    refalrts::alloc_open_call(vm, context[47]);
    refalrts::alloc_name(vm, context[48], functions[efunc_Add]);
    refalrts::copy_stvar(vm, context[49], context[11]);
    refalrts::alloc_number(vm, context[50], 2UL);
    refalrts::alloc_close_call(vm, context[51]);
    refalrts::alloc_close_call(vm, context[52]);
    refalrts::alloc_chars(vm, context[53], context[54], " )", 2);
    refalrts::alloc_close_bracket(vm, context[55]);
    refalrts::alloc_open_bracket(vm, context[56]);
    refalrts::copy_evar(vm, context[57], context[58], context[12], context[13]);
    refalrts::alloc_chars(vm, context[59], context[60], "  ", 2);
    refalrts::alloc_open_call(vm, context[61]);
    refalrts::alloc_name(vm, context[62], functions[efunc_BreakerFromIndent]);
    refalrts::copy_evar(vm, context[63], context[64], context[12], context[13]);
    refalrts::alloc_close_call(vm, context[65]);
    refalrts::reinit_char(context[0], ';');
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_char(context[8], 'i');
    refalrts::reinit_char(context[9], 'f');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[56], context[1] );
    refalrts::push_stack( vm, context[65] );
    refalrts::push_stack( vm, context[61] );
    refalrts::link_brackets( context[7], context[55] );
    refalrts::push_stack( vm, context[52] );
    refalrts::push_stack( vm, context[45] );
    refalrts::push_stack( vm, context[51] );
    refalrts::push_stack( vm, context[47] );
    refalrts::link_brackets( context[16], context[4] );
    refalrts::push_stack( vm, context[41] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[36] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[31] );
    refalrts::push_stack( vm, context[29] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[43], context[65] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[36], context[40] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[31], context[35] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[16], context[30] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintMatchADTSave/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.InnerNum#1/11 e.Name#1/2 >/1
  // closed e.Indent#1 as range 5
  // closed e.Name#1 as range 2
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: s.InnerNum#1: 11
  //DEBUG: e.Indent#1: 5
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 } </12 & Add/13 2/14 s.InnerNum#1/11/15 >/16 Tile{ AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/17"adt"/18 )/20 </21 & ContextRange/22 Tile{ AsIs: s.InnerNum#1/11 } >/23", "/24 </26 & FunctionImage/27 Tile{ AsIs: e.Name#1/2 } >/28 >/29 (/30 e.Indent#1/5/31"refalrts::adt_pointers("/33 </35 & ContextItem/36 </37 & Add/38 s.InnerNum#1/11/39 2/40 >/41 >/42", "/43 </45 & ContextItem/46 </47 & Add/48 s.InnerNum#1/11/49 3/50 >/51 >/52", "/53 </55 & ContextItem/56 </57 & Add/58 s.InnerNum#1/11/59 4/60 >/61 >/62");"/63 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_call(vm, context[12]);
  refalrts::alloc_name(vm, context[13], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[14], 2UL);
  refalrts::copy_stvar(vm, context[15], context[11]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_open_bracket(vm, context[17]);
  refalrts::alloc_chars(vm, context[18], context[19], "adt", 3);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_ContextRange]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_chars(vm, context[24], context[25], ", ", 2);
  refalrts::alloc_open_call(vm, context[26]);
  refalrts::alloc_name(vm, context[27], functions[efunc_FunctionImage]);
  refalrts::alloc_close_call(vm, context[28]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::alloc_open_bracket(vm, context[30]);
  refalrts::copy_evar(vm, context[31], context[32], context[5], context[6]);
  refalrts::alloc_chars(vm, context[33], context[34], "refalrts::adt_pointers(", 23);
  refalrts::alloc_open_call(vm, context[35]);
  refalrts::alloc_name(vm, context[36], functions[efunc_ContextItem]);
  refalrts::alloc_open_call(vm, context[37]);
  refalrts::alloc_name(vm, context[38], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[39], context[11]);
  refalrts::alloc_number(vm, context[40], 2UL);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::alloc_close_call(vm, context[42]);
  refalrts::alloc_chars(vm, context[43], context[44], ", ", 2);
  refalrts::alloc_open_call(vm, context[45]);
  refalrts::alloc_name(vm, context[46], functions[efunc_ContextItem]);
  refalrts::alloc_open_call(vm, context[47]);
  refalrts::alloc_name(vm, context[48], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[49], context[11]);
  refalrts::alloc_number(vm, context[50], 3UL);
  refalrts::alloc_close_call(vm, context[51]);
  refalrts::alloc_close_call(vm, context[52]);
  refalrts::alloc_chars(vm, context[53], context[54], ", ", 2);
  refalrts::alloc_open_call(vm, context[55]);
  refalrts::alloc_name(vm, context[56], functions[efunc_ContextItem]);
  refalrts::alloc_open_call(vm, context[57]);
  refalrts::alloc_name(vm, context[58], functions[efunc_Add]);
  refalrts::copy_stvar(vm, context[59], context[11]);
  refalrts::alloc_number(vm, context[60], 4UL);
  refalrts::alloc_close_call(vm, context[61]);
  refalrts::alloc_close_call(vm, context[62]);
  refalrts::alloc_chars(vm, context[63], context[64], ");", 2);
  refalrts::update_name(context[4], functions[efunc_PrintMatchSave]);
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[30], context[1] );
  refalrts::push_stack( vm, context[62] );
  refalrts::push_stack( vm, context[55] );
  refalrts::push_stack( vm, context[61] );
  refalrts::push_stack( vm, context[57] );
  refalrts::push_stack( vm, context[52] );
  refalrts::push_stack( vm, context[45] );
  refalrts::push_stack( vm, context[51] );
  refalrts::push_stack( vm, context[47] );
  refalrts::push_stack( vm, context[42] );
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[28] );
  refalrts::push_stack( vm, context[26] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[17], context[20] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[64] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[27] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[17], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchADTSave("PrintMatchADTSave", COOKIE1_, COOKIE2_, func_PrintMatchADTSave);


static refalrts::FnResult func_BreakerFromIndent(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & BreakerFromIndent/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & BreakerFromIndent/4 ' '/7 ' '/8 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = refalrts::char_left( ' ', context[5], context[6] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_left( ' ', context[5], context[6] );
    if( ! context[8] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 Reuse: 't'/7 Reuse: 'u'/8 HalfReuse: 'r'/1 }"n refalrts::cRecognitionImpossible;"/9 Tile{ ]] }
    refalrts::alloc_chars(vm, context[9], context[10], "n refalrts::cRecognitionImpossible;", 35);
    refalrts::reinit_char(context[0], 'r');
    refalrts::reinit_char(context[4], 'e');
    refalrts::update_char(context[7], 't');
    refalrts::update_char(context[8], 'u');
    refalrts::reinit_char(context[1], 'r');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & BreakerFromIndent/4 e.OtherIndent#1/2 >/1
  // closed e.OtherIndent#1 as range 2
  //DEBUG: e.OtherIndent#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.OtherIndent#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'o'/4 }"ntinue"/5 Tile{ HalfReuse: ';'/1 ]] }
  refalrts::alloc_chars(vm, context[5], context[6], "ntinue", 6);
  refalrts::reinit_char(context[0], 'c');
  refalrts::reinit_char(context[4], 'o');
  refalrts::reinit_char(context[1], ';');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BreakerFromIndent("BreakerFromIndent", COOKIE1_, COOKIE2_, func_BreakerFromIndent);


static refalrts::FnResult func_PrintMatchEmpty(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & PrintMatchEmpty/4 (/7 e.Indent#1/5 )/8 s.BracketNumber#1/9 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.BracketNumber#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/10 e.Indent#1/5/11"if( ! refalrts::empty_seq( "/13 </15 & ContextRange/16 Tile{ AsIs: s.BracketNumber#1/9 AsIs: >/1 }" ) "/17 Tile{ HalfReuse: ')'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 } ' '/19 </20 & BreakerFromIndent/21 e.Indent#1/5/22 >/24 )/25 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[10]);
  refalrts::copy_evar(vm, context[11], context[12], context[5], context[6]);
  refalrts::alloc_chars(vm, context[13], context[14], "if( ! refalrts::empty_seq( ", 27);
  refalrts::alloc_open_call(vm, context[15]);
  refalrts::alloc_name(vm, context[16], functions[efunc_ContextRange]);
  refalrts::alloc_chars(vm, context[17], context[18], " ) ", 3);
  refalrts::alloc_char(vm, context[19], ' ');
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_BreakerFromIndent]);
  refalrts::copy_evar(vm, context[22], context[23], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_close_bracket(vm, context[25]);
  refalrts::reinit_char(context[0], ')');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_char(context[8], ' ');
  refalrts::link_brackets( context[7], context[25] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[20] );
  refalrts::link_brackets( context[10], context[4] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[25] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[10], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchEmpty("PrintMatchEmpty", COOKIE1_, COOKIE2_, func_PrintMatchEmpty);


static refalrts::FnResult func_StrFromDirection(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & StrFromDirection/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & StrFromDirection/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & StrFromDirection/4 # AlgLeft/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_AlgLeft], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'l'/0 HalfReuse: 'e'/4 HalfReuse: 'f'/5 HalfReuse: 't'/1 ]] }
    refalrts::reinit_char(context[0], 'l');
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[5], 'f');
    refalrts::reinit_char(context[1], 't');
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & StrFromDirection/4 # AlgRight/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_AlgRight], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'i'/4 HalfReuse: 'g'/5 HalfReuse: 'h'/1 } 't'/6 Tile{ ]] }
  refalrts::alloc_char(vm, context[6], 't');
  refalrts::reinit_char(context[0], 'r');
  refalrts::reinit_char(context[4], 'i');
  refalrts::reinit_char(context[5], 'g');
  refalrts::reinit_char(context[1], 'h');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_StrFromDirection("StrFromDirection", COOKIE1_, COOKIE2_, func_StrFromDirection);


static refalrts::FnResult func_VarMatchFunction(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & VarMatchFunction/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & VarMatchFunction/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & VarMatchFunction/4 's'/5 >/1
    if( ! refalrts::char_term( 's', context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 's'/0 HalfReuse: 'v'/4 Reuse: 'a'/5 HalfReuse: 'r'/1 ]] }
    refalrts::reinit_char(context[0], 's');
    refalrts::reinit_char(context[4], 'v');
    refalrts::update_char(context[5], 'a');
    refalrts::reinit_char(context[1], 'r');
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & VarMatchFunction/4 't'/5 >/1
  if( ! refalrts::char_term( 't', context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 't'/0 HalfReuse: 'v'/4 Reuse: 'a'/5 HalfReuse: 'r'/1 ]] }
  refalrts::reinit_char(context[0], 't');
  refalrts::reinit_char(context[4], 'v');
  refalrts::update_char(context[5], 'a');
  refalrts::reinit_char(context[1], 'r');
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_VarMatchFunction("VarMatchFunction", COOKIE1_, COOKIE2_, func_VarMatchFunction);


static refalrts::FnResult func_PrintMatchSTVar(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & PrintMatchSTVar/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.Mode#1/11 s.VarNumber#1/12 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: s.Mode#1: 11
  //DEBUG: s.VarNumber#1: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/13 </14 & VarMatchFunction/15 Tile{ AsIs: s.Mode#1/11 } >/16 )/17 </18 & ContextItem/19 Tile{ AsIs: s.VarNumber#1/12 AsIs: >/1 } >/20 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[13]);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_VarMatchFunction]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_ContextItem]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::update_name(context[4], functions[efunc_PrintMatch]);
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[13], context[17] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchSTVar("PrintMatchSTVar", COOKIE1_, COOKIE2_, func_PrintMatchSTVar);


static refalrts::FnResult func_PrintMatchSTVarSave(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & PrintMatchSTVarSave/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 't'/11 s.VarNumber#1/12 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::char_left( 't', context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: s.VarNumber#1: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 } </13 & Add/14 Tile{ HalfReuse: 1/11 AsIs: s.VarNumber#1/12 AsIs: >/1 } Tile{ AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/15 </16 & VarMatchFunction/17 't'/18 >/19 )/20 </21 & ContextItem/22 s.VarNumber#1/12/23 >/24 >/25 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Add]);
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::alloc_open_call(vm, context[16]);
  refalrts::alloc_name(vm, context[17], functions[efunc_VarMatchFunction]);
  refalrts::alloc_char(vm, context[18], 't');
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_close_bracket(vm, context[20]);
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_ContextItem]);
  refalrts::copy_stvar(vm, context[23], context[12]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_PrintMatchSave]);
  refalrts::reinit_number(context[11], 1UL);
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[21] );
  refalrts::link_brackets( context[15], context[20] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[25] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchSTVarSave("PrintMatchSTVarSave", COOKIE1_, COOKIE2_, func_PrintMatchSTVarSave);


static refalrts::FnResult func_PrintMatchRepeated(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & PrintMatchRepeated/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrintMatchRepeated/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 s.new#4/11 s.new#5/12 s.new#6/13 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & PrintMatchRepeated/4 (/7 e.Indent#1/14 )/8 s.Direction#1/9 s.BracketNumber#1/10 'e'/11 s.VarNumber#1/12 s.SampleNumber#1/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::char_term( 'e', context[11] ) )
      continue;
    // closed e.Indent#1 as range 14
    //DEBUG: s.Direction#1: 9
    //DEBUG: s.BracketNumber#1: 10
    //DEBUG: s.VarNumber#1: 12
    //DEBUG: s.SampleNumber#1: 13
    //DEBUG: e.Indent#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch-VM/4 AsIs: (/7 AsIs: e.Indent#1/14 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 HalfReuse: (/11 }"repeated_evar"/16 )/18 </19 & ContextRange/20 Tile{ AsIs: s.VarNumber#1/12 } >/21", "/22 </24 & ContextRange/25 Tile{ AsIs: s.SampleNumber#1/13 AsIs: >/1 } >/26 Tile{ ]] }
    refalrts::alloc_chars(vm, context[16], context[17], "repeated_evar", 13);
    refalrts::alloc_close_bracket(vm, context[18]);
    refalrts::alloc_open_call(vm, context[19]);
    refalrts::alloc_name(vm, context[20], functions[efunc_ContextRange]);
    refalrts::alloc_close_call(vm, context[21]);
    refalrts::alloc_chars(vm, context[22], context[23], ", ", 2);
    refalrts::alloc_open_call(vm, context[24]);
    refalrts::alloc_name(vm, context[25], functions[efunc_ContextRange]);
    refalrts::alloc_close_call(vm, context[26]);
    refalrts::update_name(context[4], functions[efunc_PrintMatchm_VM]);
    refalrts::reinit_open_bracket(context[11]);
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[21] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[11], context[18] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[21], context[25] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PrintMatchRepeated/4 (/7 e.Indent#1/14 )/8 # AlgTerm/9 s.BracketNumber#1/10 s.Mode#1/11 s.VarNumber#1/12 s.SampleNumber#1/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[9] ) )
      continue;
    // closed e.Indent#1 as range 14
    //DEBUG: s.BracketNumber#1: 10
    //DEBUG: s.Mode#1: 11
    //DEBUG: s.VarNumber#1: 12
    //DEBUG: s.SampleNumber#1: 13
    //DEBUG: e.Indent#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.BracketNumber#1/10 s.Mode#1/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 e.Indent#1/14/17"if( ! refalrts::repeated_stvar_term( vm, "/19 </21 & ContextItem/22 Tile{ AsIs: s.VarNumber#1/12 } >/23", "/24 </26 & ContextItem/27 Tile{ AsIs: s.SampleNumber#1/13 AsIs: >/1 }" ) "/28 Tile{ HalfReuse: ')'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/14 HalfReuse: ' '/8 HalfReuse: ' '/9 } </30 & BreakerFromIndent/31 e.Indent#1/14/32 >/34 )/35 Tile{ ]] }
    refalrts::alloc_open_bracket(vm, context[16]);
    refalrts::copy_evar(vm, context[17], context[18], context[14], context[15]);
    refalrts::alloc_chars(vm, context[19], context[20], "if( ! refalrts::repeated_stvar_term( vm, ", 41);
    refalrts::alloc_open_call(vm, context[21]);
    refalrts::alloc_name(vm, context[22], functions[efunc_ContextItem]);
    refalrts::alloc_close_call(vm, context[23]);
    refalrts::alloc_chars(vm, context[24], context[25], ", ", 2);
    refalrts::alloc_open_call(vm, context[26]);
    refalrts::alloc_name(vm, context[27], functions[efunc_ContextItem]);
    refalrts::alloc_chars(vm, context[28], context[29], " ) ", 3);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_BreakerFromIndent]);
    refalrts::copy_evar(vm, context[32], context[33], context[14], context[15]);
    refalrts::alloc_close_call(vm, context[34]);
    refalrts::alloc_close_bracket(vm, context[35]);
    refalrts::reinit_char(context[0], ')');
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_char(context[8], ' ');
    refalrts::reinit_char(context[9], ' ');
    refalrts::link_brackets( context[7], context[35] );
    refalrts::push_stack( vm, context[34] );
    refalrts::push_stack( vm, context[30] );
    refalrts::link_brackets( context[16], context[4] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[23] );
    refalrts::push_stack( vm, context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[30], context[35] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[23], context[27] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[16], context[22] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintMatchRepeated/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.Mode#1/11 s.VarNumber#1/12 s.SampleNumber#1/13 >/1
  // closed e.Indent#1 as range 5
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: s.Mode#1: 11
  //DEBUG: s.VarNumber#1: 12
  //DEBUG: s.SampleNumber#1: 13
  //DEBUG: e.Indent#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} s.Mode#1/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatch-VM/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/14"repeated_stvar"/15 )/17 </18 & ContextItem/19 Tile{ AsIs: s.VarNumber#1/12 } >/20", "/21 </23 & ContextItem/24 Tile{ AsIs: s.SampleNumber#1/13 AsIs: >/1 } >/25 Tile{ ]] }
  refalrts::alloc_open_bracket(vm, context[14]);
  refalrts::alloc_chars(vm, context[15], context[16], "repeated_stvar", 14);
  refalrts::alloc_close_bracket(vm, context[17]);
  refalrts::alloc_open_call(vm, context[18]);
  refalrts::alloc_name(vm, context[19], functions[efunc_ContextItem]);
  refalrts::alloc_close_call(vm, context[20]);
  refalrts::alloc_chars(vm, context[21], context[22], ", ", 2);
  refalrts::alloc_open_call(vm, context[23]);
  refalrts::alloc_name(vm, context[24], functions[efunc_ContextItem]);
  refalrts::alloc_close_call(vm, context[25]);
  refalrts::update_name(context[4], functions[efunc_PrintMatchm_VM]);
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[20] );
  refalrts::push_stack( vm, context[18] );
  refalrts::link_brackets( context[14], context[17] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[14], context[19] );
  refalrts::splice_to_freelist_open( vm, context[10], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchRepeated("PrintMatchRepeated", COOKIE1_, COOKIE2_, func_PrintMatchRepeated);


static refalrts::FnResult func_PrintMatchRepeatedTVarSave(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & PrintMatchRepeatedTVarSave/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 s.VarNumber#1/11 s.SampleNumber#1/12 >/1
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
  // closed e.Indent#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: s.VarNumber#1: 11
  //DEBUG: s.SampleNumber#1: 12

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PrintMatchSave-VM/4 AsIs: (/7 AsIs: e.Indent#1/5 AsIs: )/8 } </13 & Add/14 1/15 s.VarNumber#1/11/16 >/17 Tile{ AsIs: s.Direction#1/9 AsIs: s.BracketNumber#1/10 } (/18"repeated_stvar"/19 )/21 </22 & ContextItem/23 Tile{ AsIs: s.VarNumber#1/11 } >/24", "/25 </27 & ContextItem/28 Tile{ AsIs: s.SampleNumber#1/12 AsIs: >/1 } >/29 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[13]);
  refalrts::alloc_name(vm, context[14], functions[efunc_Add]);
  refalrts::alloc_number(vm, context[15], 1UL);
  refalrts::copy_stvar(vm, context[16], context[11]);
  refalrts::alloc_close_call(vm, context[17]);
  refalrts::alloc_open_bracket(vm, context[18]);
  refalrts::alloc_chars(vm, context[19], context[20], "repeated_stvar", 14);
  refalrts::alloc_close_bracket(vm, context[21]);
  refalrts::alloc_open_call(vm, context[22]);
  refalrts::alloc_name(vm, context[23], functions[efunc_ContextItem]);
  refalrts::alloc_close_call(vm, context[24]);
  refalrts::alloc_chars(vm, context[25], context[26], ", ", 2);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_ContextItem]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::update_name(context[4], functions[efunc_PrintMatchSavem_VM]);
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[22] );
  refalrts::link_brackets( context[18], context[21] );
  refalrts::push_stack( vm, context[17] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[18], context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchRepeatedTVarSave("PrintMatchRepeatedTVarSave", COOKIE1_, COOKIE2_, func_PrintMatchRepeatedTVarSave);


static refalrts::FnResult func_PrintMatch(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & PrintMatch/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrintMatch/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 (/13 e.new#4/11 )/14 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
    // </0 & PrintMatch/4 (/7 e.Indent#1/15 )/8 # AlgTerm/9 s.Offset#1/10 (/13 e.Function#1/17 )/14 e.TextRep#1/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[9] ) )
      continue;
    // closed e.Indent#1 as range 15
    // closed e.Function#1 as range 17
    // closed e.TextRep#1 as range 19
    //DEBUG: s.Offset#1: 10
    //DEBUG: e.Indent#1: 15
    //DEBUG: e.Function#1: 17
    //DEBUG: e.TextRep#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/21 e.Indent#1/15/22"if( ! refalrts:"/24 Tile{ HalfReuse: ':'/13 AsIs: e.Function#1/17 HalfReuse: '_'/14 }"term( "/26 Tile{ AsIs: e.TextRep#1/19 }", "/28 </30 & ContextItem/31 Tile{ AsIs: s.Offset#1/10 } >/32" ) "/33 Tile{ HalfReuse: ')'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/15 HalfReuse: ' '/8 HalfReuse: ' '/9 } </35 & BreakerFromIndent/36 e.Indent#1/15/37 >/39 Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[15], context[16]);
    refalrts::alloc_chars(vm, context[24], context[25], "if( ! refalrts:", 15);
    refalrts::alloc_chars(vm, context[26], context[27], "term( ", 6);
    refalrts::alloc_chars(vm, context[28], context[29], ", ", 2);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_ContextItem]);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::alloc_chars(vm, context[33], context[34], " ) ", 3);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_BreakerFromIndent]);
    refalrts::copy_evar(vm, context[37], context[38], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::reinit_char(context[13], ':');
    refalrts::reinit_char(context[14], '_');
    refalrts::reinit_char(context[0], ')');
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_char(context[8], ' ');
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[35] );
    refalrts::link_brackets( context[21], context[4] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[35], context[39] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[32], context[34] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[21], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintMatch/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 (/13 e.Function#1/11 )/14 e.TextRep#1/2 >/1
  // closed e.Indent#1 as range 5
  // closed e.Function#1 as range 11
  // closed e.TextRep#1 as range 2
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: e.Indent#1: 5
  //DEBUG: e.Function#1: 11
  //DEBUG: e.TextRep#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/15 e.Indent#1/5/16"if( ! refalrts:"/18 Tile{ HalfReuse: ':'/13 AsIs: e.Function#1/11 HalfReuse: '_'/14 } </20 & StrFromDirection/21 Tile{ AsIs: s.Direction#1/9 } >/22"( "/23 Tile{ AsIs: e.TextRep#1/2 }", "/25 </27 & ContextRange/28 Tile{ AsIs: s.BracketNumber#1/10 } >/29" ) "/30 Tile{ HalfReuse: ')'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 } ' '/32 </33 & BreakerFromIndent/34 e.Indent#1/5/35 >/37 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
  refalrts::alloc_chars(vm, context[18], context[19], "if( ! refalrts:", 15);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_StrFromDirection]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_chars(vm, context[23], context[24], "( ", 2);
  refalrts::alloc_chars(vm, context[25], context[26], ", ", 2);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_ContextRange]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::alloc_chars(vm, context[30], context[31], " ) ", 3);
  refalrts::alloc_char(vm, context[32], ' ');
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_BreakerFromIndent]);
  refalrts::copy_evar(vm, context[35], context[36], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::reinit_char(context[13], ':');
  refalrts::reinit_char(context[14], '_');
  refalrts::reinit_char(context[0], ')');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_char(context[8], ' ');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[32], context[37] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[29], context[31] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatch("PrintMatch", COOKIE1_, COOKIE2_, func_PrintMatch);


static refalrts::FnResult func_PrintMatchSave(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & PrintMatchSave/4 (/7 e.Indent#1/5 )/8 s.Offset#1/9 s.Direction#1/10 s.BracketNumber#1/11 (/14 e.Function#1/12 )/15 e.TextRep#1/2 >/1
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
  // closed e.Indent#1 as range 5
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
  // closed e.Function#1 as range 12
  // closed e.TextRep#1 as range 2
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Offset#1: 9
  //DEBUG: s.Direction#1: 10
  //DEBUG: s.BracketNumber#1: 11
  //DEBUG: e.Function#1: 12
  //DEBUG: e.TextRep#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/16 e.Indent#1/5/17 </19 & ContextItem/20 s.Offset#1/9/21 >/22" = refalrts:"/23 Tile{ HalfReuse: ':'/14 AsIs: e.Function#1/12 HalfReuse: '_'/15 } </25 & StrFromDirection/26 Tile{ AsIs: s.Direction#1/10 } >/27"( "/28 Tile{ AsIs: e.TextRep#1/2 }", "/30 </32 & ContextRange/33 Tile{ AsIs: s.BracketNumber#1/11 } >/34" )"/35 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'i'/8 }"f( ! "/37 </39 & ContextItem/40 Tile{ AsIs: s.Offset#1/9 } >/41" )"/42 )/44 (/45 e.Indent#1/5/46"  "/48 </50 & BreakerFromIndent/51 e.Indent#1/5/52 >/54 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_ContextItem]);
  refalrts::copy_stvar(vm, context[21], context[9]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_chars(vm, context[23], context[24], " = refalrts:", 12);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_StrFromDirection]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_chars(vm, context[28], context[29], "( ", 2);
  refalrts::alloc_chars(vm, context[30], context[31], ", ", 2);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_ContextRange]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::alloc_chars(vm, context[35], context[36], " )", 2);
  refalrts::alloc_chars(vm, context[37], context[38], "f( ! ", 5);
  refalrts::alloc_open_call(vm, context[39]);
  refalrts::alloc_name(vm, context[40], functions[efunc_ContextItem]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::alloc_chars(vm, context[42], context[43], " )", 2);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_open_bracket(vm, context[45]);
  refalrts::copy_evar(vm, context[46], context[47], context[5], context[6]);
  refalrts::alloc_chars(vm, context[48], context[49], "  ", 2);
  refalrts::alloc_open_call(vm, context[50]);
  refalrts::alloc_name(vm, context[51], functions[efunc_BreakerFromIndent]);
  refalrts::copy_evar(vm, context[52], context[53], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[54]);
  refalrts::reinit_char(context[14], ':');
  refalrts::reinit_char(context[15], '_');
  refalrts::reinit_char(context[0], ';');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_char(context[8], 'i');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[45], context[1] );
  refalrts::push_stack( vm, context[54] );
  refalrts::push_stack( vm, context[50] );
  refalrts::link_brackets( context[7], context[44] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[39] );
  refalrts::link_brackets( context[16], context[4] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[41], context[54] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[37], context[40] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[34], context[36] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[30], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[16], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchSave("PrintMatchSave", COOKIE1_, COOKIE2_, func_PrintMatchSave);


static refalrts::FnResult func_PrintMatchm_VM(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & PrintMatch-VM/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrintMatch-VM/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 (/13 e.new#4/11 )/14 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
    // </0 & PrintMatch-VM/4 (/7 e.Indent#1/15 )/8 # AlgTerm/9 s.Offset#1/10 (/13 e.Function#1/17 )/14 e.TextRep#1/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[11];
    context[18] = context[12];
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_AlgTerm], context[9] ) )
      continue;
    // closed e.Indent#1 as range 15
    // closed e.Function#1 as range 17
    // closed e.TextRep#1 as range 19
    //DEBUG: s.Offset#1: 10
    //DEBUG: e.Indent#1: 15
    //DEBUG: e.Function#1: 17
    //DEBUG: e.TextRep#1: 19

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/21 e.Indent#1/15/22"if( ! refalrts:"/24 Tile{ HalfReuse: ':'/13 AsIs: e.Function#1/17 HalfReuse: '_'/14 }"term( vm, "/26 Tile{ AsIs: e.TextRep#1/19 }", "/28 </30 & ContextItem/31 Tile{ AsIs: s.Offset#1/10 } >/32" ) "/33 Tile{ HalfReuse: ')'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/15 HalfReuse: ' '/8 HalfReuse: ' '/9 } </35 & BreakerFromIndent/36 e.Indent#1/15/37 >/39 Tile{ HalfReuse: )/1 ]] }
    refalrts::alloc_open_bracket(vm, context[21]);
    refalrts::copy_evar(vm, context[22], context[23], context[15], context[16]);
    refalrts::alloc_chars(vm, context[24], context[25], "if( ! refalrts:", 15);
    refalrts::alloc_chars(vm, context[26], context[27], "term( vm, ", 10);
    refalrts::alloc_chars(vm, context[28], context[29], ", ", 2);
    refalrts::alloc_open_call(vm, context[30]);
    refalrts::alloc_name(vm, context[31], functions[efunc_ContextItem]);
    refalrts::alloc_close_call(vm, context[32]);
    refalrts::alloc_chars(vm, context[33], context[34], " ) ", 3);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_name(vm, context[36], functions[efunc_BreakerFromIndent]);
    refalrts::copy_evar(vm, context[37], context[38], context[15], context[16]);
    refalrts::alloc_close_call(vm, context[39]);
    refalrts::reinit_char(context[13], ':');
    refalrts::reinit_char(context[14], '_');
    refalrts::reinit_char(context[0], ')');
    refalrts::reinit_close_bracket(context[4]);
    refalrts::reinit_char(context[8], ' ');
    refalrts::reinit_char(context[9], ' ');
    refalrts::reinit_close_bracket(context[1]);
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( vm, context[39] );
    refalrts::push_stack( vm, context[35] );
    refalrts::link_brackets( context[21], context[4] );
    refalrts::push_stack( vm, context[32] );
    refalrts::push_stack( vm, context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[35], context[39] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[32], context[34] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[21], context[25] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintMatch-VM/4 (/7 e.Indent#1/5 )/8 s.Direction#1/9 s.BracketNumber#1/10 (/13 e.Function#1/11 )/14 e.TextRep#1/2 >/1
  // closed e.Indent#1 as range 5
  // closed e.Function#1 as range 11
  // closed e.TextRep#1 as range 2
  //DEBUG: s.Direction#1: 9
  //DEBUG: s.BracketNumber#1: 10
  //DEBUG: e.Indent#1: 5
  //DEBUG: e.Function#1: 11
  //DEBUG: e.TextRep#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/15 e.Indent#1/5/16"if( ! refalrts:"/18 Tile{ HalfReuse: ':'/13 AsIs: e.Function#1/11 HalfReuse: '_'/14 } </20 & StrFromDirection/21 Tile{ AsIs: s.Direction#1/9 } >/22"( vm, "/23 Tile{ AsIs: e.TextRep#1/2 }", "/25 </27 & ContextRange/28 Tile{ AsIs: s.BracketNumber#1/10 } >/29" ) "/30 Tile{ HalfReuse: ')'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: ' '/8 } ' '/32 </33 & BreakerFromIndent/34 e.Indent#1/5/35 >/37 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[15]);
  refalrts::copy_evar(vm, context[16], context[17], context[5], context[6]);
  refalrts::alloc_chars(vm, context[18], context[19], "if( ! refalrts:", 15);
  refalrts::alloc_open_call(vm, context[20]);
  refalrts::alloc_name(vm, context[21], functions[efunc_StrFromDirection]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_chars(vm, context[23], context[24], "( vm, ", 6);
  refalrts::alloc_chars(vm, context[25], context[26], ", ", 2);
  refalrts::alloc_open_call(vm, context[27]);
  refalrts::alloc_name(vm, context[28], functions[efunc_ContextRange]);
  refalrts::alloc_close_call(vm, context[29]);
  refalrts::alloc_chars(vm, context[30], context[31], " ) ", 3);
  refalrts::alloc_char(vm, context[32], ' ');
  refalrts::alloc_open_call(vm, context[33]);
  refalrts::alloc_name(vm, context[34], functions[efunc_BreakerFromIndent]);
  refalrts::copy_evar(vm, context[35], context[36], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[37]);
  refalrts::reinit_char(context[13], ':');
  refalrts::reinit_char(context[14], '_');
  refalrts::reinit_char(context[0], ')');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_char(context[8], ' ');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( vm, context[37] );
  refalrts::push_stack( vm, context[33] );
  refalrts::link_brackets( context[15], context[4] );
  refalrts::push_stack( vm, context[29] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[32], context[37] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[29], context[31] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[25], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchm_VM("PrintMatch-VM", COOKIE1_, COOKIE2_, func_PrintMatchm_VM);


static refalrts::FnResult func_PrintMatchSavem_VM(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 55 elems
  refalrts::Iter context[55];
  refalrts::zeros( context, 55 );
  // </0 & PrintMatchSave-VM/4 (/7 e.Indent#1/5 )/8 s.Offset#1/9 s.Direction#1/10 s.BracketNumber#1/11 (/14 e.Function#1/12 )/15 e.TextRep#1/2 >/1
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
  // closed e.Indent#1 as range 5
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
  // closed e.Function#1 as range 12
  // closed e.TextRep#1 as range 2
  //DEBUG: e.Indent#1: 5
  //DEBUG: s.Offset#1: 9
  //DEBUG: s.Direction#1: 10
  //DEBUG: s.BracketNumber#1: 11
  //DEBUG: e.Function#1: 12
  //DEBUG: e.TextRep#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/16 e.Indent#1/5/17 </19 & ContextItem/20 s.Offset#1/9/21 >/22" = refalrts:"/23 Tile{ HalfReuse: ':'/14 AsIs: e.Function#1/12 HalfReuse: '_'/15 } </25 & StrFromDirection/26 Tile{ AsIs: s.Direction#1/10 } >/27"( vm, "/28 Tile{ AsIs: e.TextRep#1/2 }", "/30 </32 & ContextRange/33 Tile{ AsIs: s.BracketNumber#1/11 } >/34" )"/35 Tile{ HalfReuse: ';'/0 HalfReuse: )/4 AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'i'/8 }"f( ! "/37 </39 & ContextItem/40 Tile{ AsIs: s.Offset#1/9 } >/41" )"/42 )/44 (/45 e.Indent#1/5/46"  "/48 </50 & BreakerFromIndent/51 e.Indent#1/5/52 >/54 Tile{ HalfReuse: )/1 ]] }
  refalrts::alloc_open_bracket(vm, context[16]);
  refalrts::copy_evar(vm, context[17], context[18], context[5], context[6]);
  refalrts::alloc_open_call(vm, context[19]);
  refalrts::alloc_name(vm, context[20], functions[efunc_ContextItem]);
  refalrts::copy_stvar(vm, context[21], context[9]);
  refalrts::alloc_close_call(vm, context[22]);
  refalrts::alloc_chars(vm, context[23], context[24], " = refalrts:", 12);
  refalrts::alloc_open_call(vm, context[25]);
  refalrts::alloc_name(vm, context[26], functions[efunc_StrFromDirection]);
  refalrts::alloc_close_call(vm, context[27]);
  refalrts::alloc_chars(vm, context[28], context[29], "( vm, ", 6);
  refalrts::alloc_chars(vm, context[30], context[31], ", ", 2);
  refalrts::alloc_open_call(vm, context[32]);
  refalrts::alloc_name(vm, context[33], functions[efunc_ContextRange]);
  refalrts::alloc_close_call(vm, context[34]);
  refalrts::alloc_chars(vm, context[35], context[36], " )", 2);
  refalrts::alloc_chars(vm, context[37], context[38], "f( ! ", 5);
  refalrts::alloc_open_call(vm, context[39]);
  refalrts::alloc_name(vm, context[40], functions[efunc_ContextItem]);
  refalrts::alloc_close_call(vm, context[41]);
  refalrts::alloc_chars(vm, context[42], context[43], " )", 2);
  refalrts::alloc_close_bracket(vm, context[44]);
  refalrts::alloc_open_bracket(vm, context[45]);
  refalrts::copy_evar(vm, context[46], context[47], context[5], context[6]);
  refalrts::alloc_chars(vm, context[48], context[49], "  ", 2);
  refalrts::alloc_open_call(vm, context[50]);
  refalrts::alloc_name(vm, context[51], functions[efunc_BreakerFromIndent]);
  refalrts::copy_evar(vm, context[52], context[53], context[5], context[6]);
  refalrts::alloc_close_call(vm, context[54]);
  refalrts::reinit_char(context[14], ':');
  refalrts::reinit_char(context[15], '_');
  refalrts::reinit_char(context[0], ';');
  refalrts::reinit_close_bracket(context[4]);
  refalrts::reinit_char(context[8], 'i');
  refalrts::reinit_close_bracket(context[1]);
  refalrts::link_brackets( context[45], context[1] );
  refalrts::push_stack( vm, context[54] );
  refalrts::push_stack( vm, context[50] );
  refalrts::link_brackets( context[7], context[44] );
  refalrts::push_stack( vm, context[41] );
  refalrts::push_stack( vm, context[39] );
  refalrts::link_brackets( context[16], context[4] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[32] );
  refalrts::push_stack( vm, context[27] );
  refalrts::push_stack( vm, context[25] );
  refalrts::push_stack( vm, context[22] );
  refalrts::push_stack( vm, context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[41], context[54] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[37], context[40] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[34], context[36] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[30], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[16], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintMatchSavem_VM("PrintMatchSave-VM", COOKIE1_, COOKIE2_, func_PrintMatchSavem_VM);


static refalrts::FnResult func_PrintCreateElem(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & PrintCreateElem/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & PrintCreateElem/4 (/7 e.new#1/5 )/8 s.new#2/9 s.new#3/10 s.new#4/11 e.new#5/2 >/1
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
  // closed e.new#5 as range 2
  do {
    // </0 & PrintCreateElem/4 (/7 e.Indent#1/12 )/8 # Allocate/9 s.ElemNumber#1/10 s.ElementType#1/11 e.Info#1/14 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_Allocate], context[9] ) )
      continue;
    // closed e.Indent#1 as range 12
    // closed e.Info#1 as range 14
    //DEBUG: s.ElemNumber#1: 10
    //DEBUG: s.ElementType#1: 11
    //DEBUG: e.Indent#1: 12
    //DEBUG: e.Info#1: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/12 HalfReuse: 'r'/8 HalfReuse: 'e'/9 }"falrts::alloc_"/16 Tile{ AsIs: </0 Reuse: & AllocatorFuncName/4 } s.ElementType#1/11/18 >/19"(vm, "/20 </22 & ContextItem/23 Tile{ AsIs: s.ElemNumber#1/10 } >/24 </25 & AllocatorFuncArgument/26 Tile{ AsIs: s.ElementType#1/11 AsIs: e.Info#1/14 AsIs: >/1 }");"/27 )/29 Tile{ ]] }
    refalrts::alloc_chars(vm, context[16], context[17], "falrts::alloc_", 14);
    refalrts::copy_stvar(vm, context[18], context[11]);
    refalrts::alloc_close_call(vm, context[19]);
    refalrts::alloc_chars(vm, context[20], context[21], "(vm, ", 5);
    refalrts::alloc_open_call(vm, context[22]);
    refalrts::alloc_name(vm, context[23], functions[efunc_ContextItem]);
    refalrts::alloc_close_call(vm, context[24]);
    refalrts::alloc_open_call(vm, context[25]);
    refalrts::alloc_name(vm, context[26], functions[efunc_AllocatorFuncArgument]);
    refalrts::alloc_chars(vm, context[27], context[28], ");", 2);
    refalrts::alloc_close_bracket(vm, context[29]);
    refalrts::reinit_char(context[8], 'r');
    refalrts::reinit_char(context[9], 'e');
    refalrts::update_name(context[4], functions[efunc_AllocatorFuncName]);
    refalrts::link_brackets( context[7], context[29] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[24] );
    refalrts::push_stack( vm, context[22] );
    refalrts::push_stack( vm, context[19] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[18], context[23] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrintCreateElem/4 (/7 e.Indent#1/5 )/8 s.CreateMode#1/9 s.ElemNumber#1/10 s.ElementType#1/11 e.Info#1/2 >/1
  // closed e.Indent#1 as range 5
  // closed e.Info#1 as range 2
  //DEBUG: s.CreateMode#1: 9
  //DEBUG: s.ElemNumber#1: 10
  //DEBUG: s.ElementType#1: 11
  //DEBUG: e.Indent#1: 5
  //DEBUG: e.Info#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Indent#1/5 HalfReuse: 'r'/8 }"efalrts::"/12 </14 & AllocatorMode/15 Tile{ AsIs: s.CreateMode#1/9 } >/16 '_'/17 Tile{ AsIs: </0 Reuse: & AllocatorFuncName/4 } s.ElementType#1/11/18 >/19 '('/20 </21 & ContextItem/22 Tile{ AsIs: s.ElemNumber#1/10 } >/23 </24 & AllocatorFuncArgument/25 Tile{ AsIs: s.ElementType#1/11 AsIs: e.Info#1/2 AsIs: >/1 }");"/26 )/28 Tile{ ]] }
  refalrts::alloc_chars(vm, context[12], context[13], "efalrts::", 9);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_name(vm, context[15], functions[efunc_AllocatorMode]);
  refalrts::alloc_close_call(vm, context[16]);
  refalrts::alloc_char(vm, context[17], '_');
  refalrts::copy_stvar(vm, context[18], context[11]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::alloc_char(vm, context[20], '(');
  refalrts::alloc_open_call(vm, context[21]);
  refalrts::alloc_name(vm, context[22], functions[efunc_ContextItem]);
  refalrts::alloc_close_call(vm, context[23]);
  refalrts::alloc_open_call(vm, context[24]);
  refalrts::alloc_name(vm, context[25], functions[efunc_AllocatorFuncArgument]);
  refalrts::alloc_chars(vm, context[26], context[27], ");", 2);
  refalrts::alloc_close_bracket(vm, context[28]);
  refalrts::reinit_char(context[8], 'r');
  refalrts::update_name(context[4], functions[efunc_AllocatorFuncName]);
  refalrts::link_brackets( context[7], context[28] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[24] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[21] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[26], context[28] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[18], context[22] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrintCreateElem("PrintCreateElem", COOKIE1_, COOKIE2_, func_PrintCreateElem);


static refalrts::FnResult func_AllocatorMode(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & AllocatorMode/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AllocatorMode/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & AllocatorMode/4 # Reinit/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_Reinit], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'r'/0 HalfReuse: 'e'/4 HalfReuse: 'i'/5 HalfReuse: 'n'/1 }"it"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "it", 2);
    refalrts::reinit_char(context[0], 'r');
    refalrts::reinit_char(context[4], 'e');
    refalrts::reinit_char(context[5], 'i');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AllocatorMode/4 # Update/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_Update], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'u'/0 HalfReuse: 'p'/4 HalfReuse: 'd'/5 HalfReuse: 'a'/1 }"te"/6 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "te", 2);
  refalrts::reinit_char(context[0], 'u');
  refalrts::reinit_char(context[4], 'p');
  refalrts::reinit_char(context[5], 'd');
  refalrts::reinit_char(context[1], 'a');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AllocatorMode("AllocatorMode", COOKIE1_, COOKIE2_, func_AllocatorMode);


static refalrts::FnResult func_AllocatorFuncName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & AllocatorFuncName/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AllocatorFuncName/4 s.new#1/5 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & AllocatorFuncName/4 # ElChar/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElChar], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'h'/4 HalfReuse: 'a'/5 HalfReuse: 'r'/1 ]] }
    refalrts::reinit_char(context[0], 'c');
    refalrts::reinit_char(context[4], 'h');
    refalrts::reinit_char(context[5], 'a');
    refalrts::reinit_char(context[1], 'r');
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AllocatorFuncName/4 # ElName/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElName], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 'm'/5 HalfReuse: 'e'/1 ]] }
    refalrts::reinit_char(context[0], 'n');
    refalrts::reinit_char(context[4], 'a');
    refalrts::reinit_char(context[5], 'm');
    refalrts::reinit_char(context[1], 'e');
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AllocatorFuncName/4 # ElNumber/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElNumber], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'u'/4 HalfReuse: 'm'/5 HalfReuse: 'b'/1 }"er"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "er", 2);
    refalrts::reinit_char(context[0], 'n');
    refalrts::reinit_char(context[4], 'u');
    refalrts::reinit_char(context[5], 'm');
    refalrts::reinit_char(context[1], 'b');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AllocatorFuncName/4 # ElIdent/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElIdent], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'd'/4 HalfReuse: 'e'/5 HalfReuse: 'n'/1 } 't'/6 Tile{ ]] }
    refalrts::alloc_char(vm, context[6], 't');
    refalrts::reinit_char(context[0], 'i');
    refalrts::reinit_char(context[4], 'd');
    refalrts::reinit_char(context[5], 'e');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AllocatorFuncName/4 # ElOpenADT/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElOpenADT], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 'e'/5 HalfReuse: 'n'/1 }"_adt"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "_adt", 4);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'p');
    refalrts::reinit_char(context[5], 'e');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AllocatorFuncName/4 # ElCloseADT/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElCloseADT], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'l'/4 HalfReuse: 'o'/5 HalfReuse: 's'/1 }"e_adt"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "e_adt", 5);
    refalrts::reinit_char(context[0], 'c');
    refalrts::reinit_char(context[4], 'l');
    refalrts::reinit_char(context[5], 'o');
    refalrts::reinit_char(context[1], 's');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AllocatorFuncName/4 # ElOpenBracket/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElOpenBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 'e'/5 HalfReuse: 'n'/1 }"_bracket"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "_bracket", 8);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'p');
    refalrts::reinit_char(context[5], 'e');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AllocatorFuncName/4 # ElCloseBracket/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElCloseBracket], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'l'/4 HalfReuse: 'o'/5 HalfReuse: 's'/1 }"e_bracket"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "e_bracket", 9);
    refalrts::reinit_char(context[0], 'c');
    refalrts::reinit_char(context[4], 'l');
    refalrts::reinit_char(context[5], 'o');
    refalrts::reinit_char(context[1], 's');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AllocatorFuncName/4 # ElOpenCall/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElOpenCall], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'o'/0 HalfReuse: 'p'/4 HalfReuse: 'e'/5 HalfReuse: 'n'/1 }"_call"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "_call", 5);
    refalrts::reinit_char(context[0], 'o');
    refalrts::reinit_char(context[4], 'p');
    refalrts::reinit_char(context[5], 'e');
    refalrts::reinit_char(context[1], 'n');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AllocatorFuncName/4 # ElCloseCall/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElCloseCall], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'l'/4 HalfReuse: 'o'/5 HalfReuse: 's'/1 }"e_call"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "e_call", 6);
    refalrts::reinit_char(context[0], 'c');
    refalrts::reinit_char(context[4], 'l');
    refalrts::reinit_char(context[5], 'o');
    refalrts::reinit_char(context[1], 's');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AllocatorFuncName/4 # ElClosureHead/5 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElClosureHead], context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'l'/4 HalfReuse: 'o'/5 HalfReuse: 's'/1 }"ure_head"/6 Tile{ ]] }
    refalrts::alloc_chars(vm, context[6], context[7], "ure_head", 8);
    refalrts::reinit_char(context[0], 'c');
    refalrts::reinit_char(context[4], 'l');
    refalrts::reinit_char(context[5], 'o');
    refalrts::reinit_char(context[1], 's');
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AllocatorFuncName/4 # ElUnwrappedClosure/5 >/1
  if( ! refalrts::ident_term( identifiers[ident_ElUnwrappedClosure], context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'u'/0 HalfReuse: 'n'/4 HalfReuse: 'w'/5 HalfReuse: 'r'/1 }"apped_closure"/6 Tile{ ]] }
  refalrts::alloc_chars(vm, context[6], context[7], "apped_closure", 13);
  refalrts::reinit_char(context[0], 'u');
  refalrts::reinit_char(context[4], 'n');
  refalrts::reinit_char(context[5], 'w');
  refalrts::reinit_char(context[1], 'r');
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AllocatorFuncName("AllocatorFuncName", COOKIE1_, COOKIE2_, func_AllocatorFuncName);


static refalrts::FnResult func_AllocatorFuncArgument(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & AllocatorFuncArgument/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AllocatorFuncArgument/4 s.new#1/5 e.new#2/2 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & AllocatorFuncArgument/4 s.new#3/5 s.new#4/8 e.new#5/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
      continue;
    // closed e.new#5 as range 6
    do {
      // </0 & AllocatorFuncArgument/4 # ElChar/5 s.Char#1/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_ElChar], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;
      //DEBUG: s.Char#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ }", "/9 Tile{ HalfReuse: '\''/0 HalfReuse: </4 HalfReuse: & EscapeChar/5 AsIs: s.Char#1/8 AsIs: >/1 } '\''/11 Tile{ ]] }
      refalrts::alloc_chars(vm, context[9], context[10], ", ", 2);
      refalrts::alloc_char(vm, context[11], '\'');
      refalrts::reinit_char(context[0], '\'');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_EscapeChar]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[11] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & AllocatorFuncArgument/4 # ElName/5 s.Num#1/8 e.Name#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_ElName], context[5] ) )
        continue;
      // closed e.Name#1 as range 9
      //DEBUG: s.Num#1: 8
      //DEBUG: e.Name#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num#1/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ','/0 HalfReuse: ' '/4 HalfReuse: </5 } & FunctionImage/11 Tile{ AsIs: e.Name#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[11], functions[efunc_FunctionImage]);
      refalrts::reinit_char(context[0], ',');
      refalrts::reinit_char(context[4], ' ');
      refalrts::reinit_open_call(context[5]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & AllocatorFuncArgument/4 # ElNumber/5 s.Number#1/8 >/1
      if( ! refalrts::ident_term( identifiers[ident_ElNumber], context[5] ) )
        continue;
      if( ! refalrts::empty_seq( context[6], context[7] ) )
        continue;
      //DEBUG: s.Number#1: 8

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } ','/9 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & Symb/5 AsIs: s.Number#1/8 AsIs: >/1 }"UL"/10 Tile{ ]] }
      refalrts::alloc_char(vm, context[9], ',');
      refalrts::alloc_chars(vm, context[10], context[11], "UL", 2);
      refalrts::reinit_char(context[0], ' ');
      refalrts::reinit_open_call(context[4]);
      refalrts::reinit_name(context[5], functions[efunc_Symb]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[10], context[11] );
      res = refalrts::splice_evar( res, context[0], context[1] );
      res = refalrts::splice_evar( res, context[9], context[9] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & AllocatorFuncArgument/4 # ElIdent/5 s.Num#1/8 e.Name#1/9 >/1
      context[9] = context[6];
      context[10] = context[7];
      if( ! refalrts::ident_term( identifiers[ident_ElIdent], context[5] ) )
        continue;
      // closed e.Name#1 as range 9
      //DEBUG: s.Num#1: 8
      //DEBUG: e.Name#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Num#1/8 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: ','/0 HalfReuse: ' '/4 HalfReuse: </5 } & IdentifierImage/11 Tile{ AsIs: e.Name#1/9 } Tile{ AsIs: >/1 ]] }
      refalrts::alloc_name(vm, context[11], functions[efunc_IdentifierImage]);
      refalrts::reinit_char(context[0], ',');
      refalrts::reinit_char(context[4], ' ');
      refalrts::reinit_open_call(context[5]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[5] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[11], context[11] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AllocatorFuncArgument/4 # ElUnwrappedClosure/5 s.HeadOffset#1/8 >/1
    if( ! refalrts::ident_term( identifiers[ident_ElUnwrappedClosure], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    //DEBUG: s.HeadOffset#1: 8

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } ','/9 Tile{ HalfReuse: ' '/0 HalfReuse: </4 HalfReuse: & ContextItem/5 AsIs: s.HeadOffset#1/8 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[9], ',');
    refalrts::reinit_char(context[0], ' ');
    refalrts::reinit_open_call(context[4]);
    refalrts::reinit_name(context[5], functions[efunc_ContextItem]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AllocatorFuncArgument/4 s.Other#1/5 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Other#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AllocatorFuncArgument/4 s.Other#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AllocatorFuncArgument("AllocatorFuncArgument", COOKIE1_, COOKIE2_, func_AllocatorFuncArgument);


//End of file
