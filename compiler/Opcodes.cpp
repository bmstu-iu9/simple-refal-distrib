// This file automatically generated from 'Opcodes.ref'
// Don't edit! Edit 'Opcodes.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_35760015_2997675368
static const refalrts::IdentReference ident_k37_("%");
static const refalrts::IdentReference ident_k42_("*");
static const refalrts::IdentReference ident_k43_("+");
static const refalrts::IdentReference ident_m_("-");
static const refalrts::IdentReference ident_k47_("/");
static const refalrts::IdentReference ident_k63_("?");
static const refalrts::IdentReference ident_Add("Add");
static const refalrts::IdentReference ident_AlgLeft("AlgLeft");
static const refalrts::IdentReference ident_AlgRight("AlgRight");
static const refalrts::IdentReference ident_AlgTerm("AlgTerm");
static const refalrts::IdentReference ident_Allocate("Allocate");
static const refalrts::IdentReference ident_CmdADT("CmdADT");
static const refalrts::IdentReference ident_CmdADTSave("CmdADTSave");
static const refalrts::IdentReference ident_CmdBrackets("CmdBrackets");
static const refalrts::IdentReference ident_CmdBracketsSave("CmdBracketsSave");
static const refalrts::IdentReference ident_CmdCallSave("CmdCallSave");
static const refalrts::IdentReference ident_CmdChar("CmdChar");
static const refalrts::IdentReference ident_CmdCharSave("CmdCharSave");
static const refalrts::IdentReference ident_CmdCopyEVar("CmdCopyEVar");
static const refalrts::IdentReference ident_CmdCopySTVar("CmdCopySTVar");
static const refalrts::IdentReference ident_CmdEPrepare("CmdEPrepare");
static const refalrts::IdentReference ident_CmdEStart("CmdEStart");
static const refalrts::IdentReference ident_CmdEmpty("CmdEmpty");
static const refalrts::IdentReference ident_CmdFail("CmdFail");
static const refalrts::IdentReference ident_CmdFetchSwapHead("CmdFetchSwapHead");
static const refalrts::IdentReference ident_CmdFetchSwapInfoBounds("CmdFetchSwapInfoBounds");
static const refalrts::IdentReference ident_CmdHugeNum("CmdHugeNum");
static const refalrts::IdentReference ident_CmdHugeNumSave("CmdHugeNumSave");
static const refalrts::IdentReference ident_CmdIdent("CmdIdent");
static const refalrts::IdentReference ident_CmdIdentSave("CmdIdentSave");
static const refalrts::IdentReference ident_CmdInitB0("CmdInitB0");
static const refalrts::IdentReference ident_CmdInitB0m_Lite("CmdInitB0-Lite");
static const refalrts::IdentReference ident_CmdIssueMemory("CmdIssueMemory");
static const refalrts::IdentReference ident_CmdLinkBrackets("CmdLinkBrackets");
static const refalrts::IdentReference ident_CmdLoadConstants("CmdLoadConstants");
static const refalrts::IdentReference ident_CmdMainLoopReturnSuccess("CmdMainLoopReturnSuccess");
static const refalrts::IdentReference ident_CmdName("CmdName");
static const refalrts::IdentReference ident_CmdNameSave("CmdNameSave");
static const refalrts::IdentReference ident_CmdNextStep("CmdNextStep");
static const refalrts::IdentReference ident_CmdNotEmpty("CmdNotEmpty");
static const refalrts::IdentReference ident_CmdNumber("CmdNumber");
static const refalrts::IdentReference ident_CmdNumberSave("CmdNumberSave");
static const refalrts::IdentReference ident_CmdOnFailGoTo("CmdOnFailGoTo");
static const refalrts::IdentReference ident_CmdPerformNative("CmdPerformNative");
static const refalrts::IdentReference ident_CmdPopState("CmdPopState");
static const refalrts::IdentReference ident_CmdProfileFunction("CmdProfileFunction");
static const refalrts::IdentReference ident_CmdProfilerStopSentence("CmdProfilerStopSentence");
static const refalrts::IdentReference ident_CmdPushStack("CmdPushStack");
static const refalrts::IdentReference ident_CmdPushState("CmdPushState");
static const refalrts::IdentReference ident_CmdReinitSVar("CmdReinitSVar");
static const refalrts::IdentReference ident_CmdRepeated("CmdRepeated");
static const refalrts::IdentReference ident_CmdRepeatedSave("CmdRepeatedSave");
static const refalrts::IdentReference ident_CmdReserveBacktrackStack("CmdReserveBacktrackStack");
static const refalrts::IdentReference ident_CmdResetAllocator("CmdResetAllocator");
static const refalrts::IdentReference ident_CmdSave("CmdSave");
static const refalrts::IdentReference ident_CmdScale("CmdScale");
static const refalrts::IdentReference ident_CmdSetRes("CmdSetRes");
static const refalrts::IdentReference ident_CmdSetResArgBegin("CmdSetResArgBegin");
static const refalrts::IdentReference ident_CmdSetResRightEdge("CmdSetResRightEdge");
static const refalrts::IdentReference ident_CmdSpliceEVar("CmdSpliceEVar");
static const refalrts::IdentReference ident_CmdSpliceElem("CmdSpliceElem");
static const refalrts::IdentReference ident_CmdSpliceRange("CmdSpliceRange");
static const refalrts::IdentReference ident_CmdSpliceSTVar("CmdSpliceSTVar");
static const refalrts::IdentReference ident_CmdSpliceTile("CmdSpliceTile");
static const refalrts::IdentReference ident_CmdSpliceToFreeList("CmdSpliceToFreeList");
static const refalrts::IdentReference ident_CmdSpliceToFreeListm_Range("CmdSpliceToFreeList-Range");
static const refalrts::IdentReference ident_CmdSwapSave("CmdSwapSave");
static const refalrts::IdentReference ident_CmdTrash("CmdTrash");
static const refalrts::IdentReference ident_CmdTrashLeftEdge("CmdTrashLeftEdge");
static const refalrts::IdentReference ident_CmdVar("CmdVar");
static const refalrts::IdentReference ident_CmdVarSave("CmdVarSave");
static const refalrts::IdentReference ident_CmdVariableDebugOffset("CmdVariableDebugOffset");
static const refalrts::IdentReference ident_CmdWrapClosure("CmdWrapClosure");
static const refalrts::IdentReference ident_ConditionNative("ConditionNative");
static const refalrts::IdentReference ident_ConditionRasl("ConditionRasl");
static const refalrts::IdentReference ident_ConstTable("ConstTable");
static const refalrts::IdentReference ident_Div("Div");
static const refalrts::IdentReference ident_ElBracket("ElBracket");
static const refalrts::IdentReference ident_ElChar("ElChar");
static const refalrts::IdentReference ident_ElCloseADT("ElCloseADT");
static const refalrts::IdentReference ident_ElCloseBracket("ElCloseBracket");
static const refalrts::IdentReference ident_ElCloseCall("ElCloseCall");
static const refalrts::IdentReference ident_ElClosureHead("ElClosureHead");
static const refalrts::IdentReference ident_ElHugeNumber("ElHugeNumber");
static const refalrts::IdentReference ident_ElIdent("ElIdent");
static const refalrts::IdentReference ident_ElName("ElName");
static const refalrts::IdentReference ident_ElNumber("ElNumber");
static const refalrts::IdentReference ident_ElOpenADT("ElOpenADT");
static const refalrts::IdentReference ident_ElOpenBracket("ElOpenBracket");
static const refalrts::IdentReference ident_ElOpenCall("ElOpenCall");
static const refalrts::IdentReference ident_ElString("ElString");
static const refalrts::IdentReference ident_ElUnwrappedClosure("ElUnwrappedClosure");
static const refalrts::IdentReference ident_EmptyFunction("EmptyFunction");
static const refalrts::IdentReference ident_Incorporated("Incorporated");
static const refalrts::IdentReference ident_Mod("Mod");
static const refalrts::IdentReference ident_Mul("Mul");
static const refalrts::IdentReference ident_NativeFunction("NativeFunction");
static const refalrts::IdentReference ident_RefalFunction("RefalFunction");
static const refalrts::IdentReference ident_Reference("Reference");
static const refalrts::IdentReference ident_Reinit("Reinit");
static const refalrts::IdentReference ident_Residue("Residue");
static const refalrts::IdentReference ident_Start("Start");
static const refalrts::IdentReference ident_Sub("Sub");
static const refalrts::IdentReference ident_Swap("Swap");
static const refalrts::IdentReference ident_Update("Update");
static refalrts::ExternalReference ref_BlockTypeNumber("BlockTypeNumber", 0U, 0U);
static refalrts::ExternalReference ref_Evm_met("Ev-met", 35760015U, 2997675368U);
static refalrts::ExternalReference ref_Mu("Mu", 35760015U, 2997675368U);
static refalrts::ExternalReference ref_gen_Mu_C1("Mu?1", 35760015U, 2997675368U);
static refalrts::ExternalReference ref_NumberFromBracket("NumberFromBracket", 0U, 0U);
static refalrts::ExternalReference ref_NumberFromOpcode("NumberFromOpcode", 0U, 0U);
static refalrts::ExternalReference ref_Residue("Residue", 35760015U, 2997675368U);
static refalrts::ExternalReference ref_gen_Residue_C1("Residue?1", 35760015U, 2997675368U);
static refalrts::ExternalReference ref_Type("Type", 0U, 0U);
static refalrts::ExternalReference ref_Up("Up", 35760015U, 2997675368U);
static refalrts::ExternalReference ref_u_u_FindMuPtr("__FindMuPtr", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Mum_Aux("__Mu-Aux", 35760015U, 2997675368U);
static refalrts::ExternalReference ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 35760015U, 2997675368U);
static refalrts::ExternalReference ref_u_u_Stepm_End("__Step-End", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Stepm_Start("__Step-Start", 0U, 0U);

static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  if( ! refalrts::alloc_name( vm, context[9], ref_gen_Mu_C1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_u_u_Stepm_Start.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_u_u_Mum_Aux.ref(vm) ) )
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
    refalrts::update_name( context[4], ref_u_u_Stepm_End.ref(vm) );
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
    refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref(vm) );
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
  refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Add/1 ]] }
      refalrts::reinit_ident( context[1], ident_Add.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Div/1 ]] }
      refalrts::reinit_ident( context[1], ident_Div.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Mod/1 ]] }
      refalrts::reinit_ident( context[1], ident_Mod.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Mul/1 ]] }
      refalrts::reinit_ident( context[1], ident_Mul.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Residue/1 ]] }
      refalrts::reinit_ident( context[1], ident_Residue.ref(vm) );
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
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Sub/1 ]] }
      refalrts::reinit_ident( context[1], ident_Sub.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # +/5 >/1
      if( ! refalrts::ident_term(  ident_k43_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # +/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Add/1 ]] }
      refalrts::reinit_ident( context[1], ident_Add.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # //5 >/1
      if( ! refalrts::ident_term(  ident_k47_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # //5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Div/1 ]] }
      refalrts::reinit_ident( context[1], ident_Div.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # %/5 >/1
      if( ! refalrts::ident_term(  ident_k37_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # %/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Mod/1 ]] }
      refalrts::reinit_ident( context[1], ident_Mod.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # */5 >/1
      if( ! refalrts::ident_term(  ident_k42_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # */5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Mul/1 ]] }
      refalrts::reinit_ident( context[1], ident_Mul.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & __Mu-Aux/4 # ?/5 >/1
      if( ! refalrts::ident_term(  ident_k63_.ref(vm), context[5] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # ?/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Residue/1 ]] }
      refalrts::reinit_ident( context[1], ident_Residue.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & __Mu-Aux/4 # -/5 >/1
    if( ! refalrts::ident_term(  ident_m_.ref(vm), context[5] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # -/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Sub/1 ]] }
    refalrts::reinit_ident( context[1], ident_Sub.ref(vm) );
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
  if( ! refalrts::alloc_name( vm, context[8], ref_gen_u_u_Mum_Aux_S13B1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Type.ref(vm) );
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
  if( ! refalrts::alloc_name( vm, context[9], ref_gen_Residue_C1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_u_u_Stepm_Start.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_u_u_Mum_Aux.ref(vm) ) )
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
    refalrts::update_name( context[4], ref_u_u_Stepm_End.ref(vm) );
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
      if( ! refalrts::ident_term(  ident_CmdProfileFunction.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdLoadConstants.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdIssueMemory.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdReserveBacktrackStack.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdOnFailGoTo.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdProfilerStopSentence.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdInitB0.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdInitB0m_Lite.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdChar.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdChar/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgTerm.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdCharSave.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdCharSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdNumber.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdNumber/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgTerm.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdNumberSave.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdNumberSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdHugeNum.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdHugeNum/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgTerm.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdHugeNumSave.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdHugeNumSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdName.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdName/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgTerm.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdNameSave.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdNameSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdIdent.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdIdent/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgTerm.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdIdentSave.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdIdentSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdBrackets.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdBrackets/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgTerm.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdBracketsSave.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdBracketsSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdADT.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdADT/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgTerm.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdADTSave.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # CmdADTSave/8 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgTerm.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdCallSave.ref(vm), context[8] ) )
      continue;
    if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdEmpty.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdNotEmpty.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdVar.ref(vm), context[9] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 s.new#8/5 >/1
        if( ! refalrts::char_term( 's', context[8] ) )
          continue;
        do {
          // </0 & NumberFromOpcode/4 's'/8 # CmdVar/9 # AlgLeft/5 >/1
          if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
          if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgTerm.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdVarSave.ref(vm), context[9] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 't'/8 # CmdVarSave/9 # AlgLeft/5 >/1
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdRepeated.ref(vm), context[9] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 s.new#8/5 >/1
        if( ! refalrts::char_term( 'e', context[8] ) )
          continue;
        do {
          // </0 & NumberFromOpcode/4 'e'/8 # CmdRepeated/9 # AlgLeft/5 >/1
          if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
          if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
          if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgTerm.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_AlgTerm.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdRepeatedSave.ref(vm), context[9] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 't'/8 # CmdRepeatedSave/9 # AlgLeft/5 >/1
      if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_AlgRight.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdEPrepare.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdEStart.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdSave.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdResetAllocator.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdSetResArgBegin.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdSetResRightEdge.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdSetRes.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdCopyEVar.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_CmdCopySTVar.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdReinitSVar.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_Allocate.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # Allocate/8 # ElChar/5 >/1
        if( ! refalrts::ident_term(  ident_ElChar.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElName.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElNumber.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElHugeNumber.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElIdent.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElBracket.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElString.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElClosureHead.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_ElUnwrappedClosure.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_Reinit.ref(vm), context[8] ) )
        continue;
      do {
        // </0 & NumberFromOpcode/4 # Reinit/8 # ElChar/5 >/1
        if( ! refalrts::ident_term(  ident_ElChar.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElName.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElNumber.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElHugeNumber.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElIdent.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElBracket.ref(vm), context[5] ) )
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
        if( ! refalrts::ident_term(  ident_ElClosureHead.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_ElUnwrappedClosure.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_Update.ref(vm), context[8] ) )
      continue;
    do {
      // </0 & NumberFromOpcode/4 # Update/8 # ElChar/5 >/1
      if( ! refalrts::ident_term(  ident_ElChar.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_ElName.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_ElNumber.ref(vm), context[5] ) )
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
      if( ! refalrts::ident_term(  ident_ElHugeNumber.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_ElIdent.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdLinkBrackets.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdPushStack.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdWrapClosure.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdSpliceElem.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdSpliceEVar.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdSpliceSTVar.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdSpliceRange.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdSpliceTile.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdSpliceToFreeList.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdNextStep.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdTrashLeftEdge.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdTrash.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdFail.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdFetchSwapHead.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdFetchSwapInfoBounds.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdSwapSave.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdPerformNative.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdScale.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdVariableDebugOffset.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdSpliceToFreeListm_Range.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdPushState.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_CmdPopState.ref(vm), context[5] ) )
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
  if( ! refalrts::ident_term(  ident_CmdMainLoopReturnSuccess.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_ElOpenADT.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_ElOpenBracket.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_ElOpenCall.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_ElCloseADT.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_ElCloseBracket.ref(vm), context[5] ) )
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
  if( ! refalrts::ident_term(  ident_ElCloseCall.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_Start.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_ConstTable.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_RefalFunction.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_NativeFunction.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_EmptyFunction.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_Swap.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_Reference.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_ConditionRasl.ref(vm), context[5] ) )
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
    if( ! refalrts::ident_term(  ident_ConditionNative.ref(vm), context[5] ) )
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
  if( ! refalrts::ident_term(  ident_Incorporated.ref(vm), context[5] ) )
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
