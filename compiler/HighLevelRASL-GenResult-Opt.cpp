// This file automatically generated from 'HighLevelRASL-GenResult-Opt.sref'
// Don't edit! Edit 'HighLevelRASL-GenResult-Opt.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3023103213_2120637161
static const refalrts::IdentReference ident_ADTm_Brackets("ADT-Brackets");
static const refalrts::IdentReference ident_Allocate("Allocate");
static const refalrts::IdentReference ident_AsIs("AsIs");
static const refalrts::IdentReference ident_Brackets("Brackets");
static const refalrts::IdentReference ident_CallBrackets("CallBrackets");
static const refalrts::IdentReference ident_ClosureBrackets("ClosureBrackets");
static const refalrts::IdentReference ident_CmdComment("CmdComment");
static const refalrts::IdentReference ident_CmdCopyVar("CmdCopyVar");
static const refalrts::IdentReference ident_CmdCreateElem("CmdCreateElem");
static const refalrts::IdentReference ident_CmdInsertTile("CmdInsertTile");
static const refalrts::IdentReference ident_CmdInsertVar("CmdInsertVar");
static const refalrts::IdentReference ident_CmdLinkBrackets("CmdLinkBrackets");
static const refalrts::IdentReference ident_CmdNextStep("CmdNextStep");
static const refalrts::IdentReference ident_CmdPushStack("CmdPushStack");
static const refalrts::IdentReference ident_CmdReinitSVar("CmdReinitSVar");
static const refalrts::IdentReference ident_CmdResetAllocator("CmdResetAllocator");
static const refalrts::IdentReference ident_CmdSetRes("CmdSetRes");
static const refalrts::IdentReference ident_CmdTrash("CmdTrash");
static const refalrts::IdentReference ident_CmdUseRes("CmdUseRes");
static const refalrts::IdentReference ident_CmdWrapClosure("CmdWrapClosure");
static const refalrts::IdentReference ident_ElChar("ElChar");
static const refalrts::IdentReference ident_ElCloseADT("ElCloseADT");
static const refalrts::IdentReference ident_ElCloseBracket("ElCloseBracket");
static const refalrts::IdentReference ident_ElCloseCall("ElCloseCall");
static const refalrts::IdentReference ident_ElClosureHead("ElClosureHead");
static const refalrts::IdentReference ident_ElIdent("ElIdent");
static const refalrts::IdentReference ident_ElName("ElName");
static const refalrts::IdentReference ident_ElNumber("ElNumber");
static const refalrts::IdentReference ident_ElOpenADT("ElOpenADT");
static const refalrts::IdentReference ident_ElOpenBracket("ElOpenBracket");
static const refalrts::IdentReference ident_ElOpenCall("ElOpenCall");
static const refalrts::IdentReference ident_ElString("ElString");
static const refalrts::IdentReference ident_ElUnwrappedClosure("ElUnwrappedClosure");
static const refalrts::IdentReference ident_HalfReuse("HalfReuse");
static const refalrts::IdentReference ident_LEFTm_EDGE("LEFT-EDGE");
static const refalrts::IdentReference ident_PatchCreateUnwrappedClosure("PatchCreateUnwrappedClosure");
static const refalrts::IdentReference ident_RIGHTm_EDGE("RIGHT-EDGE");
static const refalrts::IdentReference ident_Reinit("Reinit");
static const refalrts::IdentReference ident_RemovedTile("RemovedTile");
static const refalrts::IdentReference ident_Reuse("Reuse");
static const refalrts::IdentReference ident_Tile("Tile");
static const refalrts::IdentReference ident_TkChar("TkChar");
static const refalrts::IdentReference ident_TkCloseADT("TkCloseADT");
static const refalrts::IdentReference ident_TkCloseBracket("TkCloseBracket");
static const refalrts::IdentReference ident_TkCloseCall("TkCloseCall");
static const refalrts::IdentReference ident_TkClosureHead("TkClosureHead");
static const refalrts::IdentReference ident_TkIdentifier("TkIdentifier");
static const refalrts::IdentReference ident_TkName("TkName");
static const refalrts::IdentReference ident_TkNumber("TkNumber");
static const refalrts::IdentReference ident_TkOpenADT("TkOpenADT");
static const refalrts::IdentReference ident_TkOpenBracket("TkOpenBracket");
static const refalrts::IdentReference ident_TkOpenCall("TkOpenCall");
static const refalrts::IdentReference ident_TkString("TkString");
static const refalrts::IdentReference ident_TkUnwrappedClosure("TkUnwrappedClosure");
static const refalrts::IdentReference ident_TkVariable("TkVariable");
static const refalrts::IdentReference ident_TkVariableCopy("TkVariableCopy");
static const refalrts::IdentReference ident_Update("Update");
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_AddOffsets("AddOffsets", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_AddOffsets_L1("AddOffsets\\1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_AddOffsets_L1S1L1("AddOffsets\\1$1\\1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_BeginOffset("BeginOffset", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_CalcRes("CalcRes", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_CollectStrings("CollectStrings", 0U, 0U);
static refalrts::ExternalReference ref_CollectTiles("CollectTiles", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_CollectTilesm_Alloc("CollectTiles-Alloc", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_CreateElemParam("CreateElemParam", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_EndOffset("EndOffset", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_FlatResult("FlatResult", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_FlatTilesInResult("FlatTilesInResult", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_FlatTilesInResult_L1("FlatTilesInResult\\1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_FlatTilesInResult_L1S1L1("FlatTilesInResult\\1$1\\1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_GST("GST", 0U, 0U);
static refalrts::ExternalReference ref_GenPushLink("GenPushLink", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_GenPushLink_A1("GenPushLink=1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_GenPushLink_A1L1("GenPushLink=1\\1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_GenResultm_Allocations("GenResult-Allocations", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_GenResultm_Allocations_L1("GenResult-Allocations\\1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_GenResultm_Aux("GenResult-Aux", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_GenResultm_Aux_A1("GenResult-Aux=1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_GenResultm_Opt("GenResult-Opt", 0U, 0U);
static refalrts::ExternalReference ref_gen_GenResultm_Opt_A1("GenResult-Opt=1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_GenResultm_Opt_A2("GenResult-Opt=2", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_GenResultm_ReinitUpdate("GenResult-ReinitUpdate", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_GenResultm_ReinitUpdate_L1("GenResult-ReinitUpdate\\1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_GenResultm_ReinitUpdate_L1S1L1("GenResult-ReinitUpdate\\1$1\\1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_GenSplices("GenSplices", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_gen_GenSplices_S1L1("GenSplices$1\\1", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_GenTrash("GenTrash", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_GetSampleOffset("GetSampleOffset", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_Inc2("Inc2", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_PatchClosureLogic("PatchClosureLogic", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_Reverse("Reverse", 3023103213U, 2120637161U);
static refalrts::ExternalReference ref_TextFromExpr("TextFromExpr", 0U, 0U);

static refalrts::FnResult func_gen_GenResultm_Opt_A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & GenResult-Opt=2/4 (/7 e.Trash#2/5 )/8 s.ContextOffset#3/9 e.MarkedResult#3/2 >/1
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
  // closed e.Trash#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MarkedResult#3 as range 2
  //DEBUG: e.Trash#2: 5
  //DEBUG: s.ContextOffset#3: 9
  //DEBUG: e.MarkedResult#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.ContextOffset#3/9 } (/10 # CmdResetAllocator/11 )/12 Tile{ AsIs: </0 Reuse: & GenResult-Aux/4 AsIs: (/7 AsIs: e.Trash#2/5 AsIs: )/8 } (/13 Tile{ AsIs: e.MarkedResult#3/2 } )/14 >/15 (/16 # CmdNextStep/17 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[11], ident_CmdResetAllocator.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[17], ident_CmdNextStep.ref(vm) ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_GenResultm_Aux.ref(vm) );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[16], context[1] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[10], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Opt_A2("GenResult-Opt=2", 3023103213U, 2120637161U, func_gen_GenResultm_Opt_A2);


static refalrts::FnResult func_gen_GenResultm_Opt_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & GenResult-Opt=1/4 s.ContextOffset#1/17 (/15 e.PatternVars#1/13 )/16 (/11 e.Trash#2/9 )/12 (/7 e.MarkedResult#2/5 )/8 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.PatternVars#1 as range 13
  // closed e.Trash#2 as range 9
  // closed e.MarkedResult#2 as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.PatternVars#1: 13
  //DEBUG: e.Trash#2: 9
  //DEBUG: e.MarkedResult#2: 5
  //DEBUG: s.ContextOffset#1: 17

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 [*]/19 & GenResult-Opt=2/20 Tile{ AsIs: (/11 AsIs: e.Trash#2/9 AsIs: )/12 HalfReuse: {*}/7 } Tile{ AsIs: </0 Reuse: & AddOffsets/4 AsIs: s.ContextOffset#1/17 AsIs: (/15 AsIs: e.PatternVars#1/13 AsIs: )/16 } Tile{ AsIs: e.MarkedResult#2/5 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[20], ref_gen_GenResultm_Opt_A2.ref(vm) ) )
    return refalrts::cNoMemory;
  refalrts::reinit_unwrapped_closure( context[7], context[19] );
  refalrts::update_name( context[4], ref_AddOffsets.ref(vm) );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[11], context[7] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[7] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Opt_A1("GenResult-Opt=1", 3023103213U, 2120637161U, func_gen_GenResultm_Opt_A1);


static refalrts::FnResult func_GenResultm_Opt(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  // </0 & GenResult-Opt/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 (/12 e.MarkedPattern#1/10 )/13 e.Result#1/2 >/1
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
  // closed e.PatternVars#1 as range 6
  // closed e.MarkedPattern#1 as range 10
  // closed e.Result#1 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: e.PatternVars#1: 6
  //DEBUG: e.MarkedPattern#1: 10
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: [*]/0 Reuse: & GenResult-Opt=1/4 AsIs: s.ContextOffset#1/5 AsIs: (/8 AsIs: e.PatternVars#1/6 AsIs: )/9 HalfReuse: {*}/12 } </15 & GST/16 (/17 (/18 # LEFT-EDGE/19 )/20 Tile{ AsIs: e.MarkedPattern#1/10 } (/21 # RIGHT-EDGE/22 )/23 )/24 (/25 (/26 # LEFT-EDGE/27 )/28 </29 Tile{ HalfReuse: & FlatResult/13 AsIs: e.Result#1/2 AsIs: >/1 } (/30 # RIGHT-EDGE/31 )/32 )/33 >/34 >/35 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[16], ref_GST.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[19], ident_LEFTm_EDGE.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[22], ident_RIGHTm_EDGE.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[27], ident_LEFTm_EDGE.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[31], ident_RIGHTm_EDGE.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[35] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_GenResultm_Opt_A1.ref(vm) );
  refalrts::reinit_unwrapped_closure( context[12], context[0] );
  refalrts::reinit_name( context[13], ref_FlatResult.ref(vm) );
  refalrts::push_stack( vm, context[35] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[34] );
  refalrts::push_stack( vm, context[15] );
  refalrts::link_brackets( context[25], context[33] );
  refalrts::link_brackets( context[30], context[32] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[26], context[28] );
  refalrts::link_brackets( context[17], context[24] );
  refalrts::link_brackets( context[21], context[23] );
  refalrts::link_brackets( context[18], context[20] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[30], context[35] );
  res = refalrts::splice_evar( res, context[13], context[1] );
  res = refalrts::splice_evar( res, context[21], context[29] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[15], context[20] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Opt("GenResult-Opt", 0U, 0U, func_GenResultm_Opt);


static refalrts::FnResult func_FlatResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & FlatResult/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & FlatResult/4 e.Range-B#1/7 (/13 # CallBrackets/15 e.SubRange#1/11 )/14 e.Range-E#1/9 >/1
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
      context[15] = refalrts::ident_left(  ident_CallBrackets.ref(vm), context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.SubRange#1 as range 11
      // closed e.Range-E#1 as range 9
      //DEBUG: e.Range-B#1: 7
      //DEBUG: e.SubRange#1: 11
      //DEBUG: e.Range-E#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range-B#1/7 HalfReuse: >/13 HalfReuse: (/15 } # TkOpenCall/16 )/17 </18 & FlatResult/19 Tile{ AsIs: e.SubRange#1/11 } >/20 (/21 # TkCloseCall/22 )/23 </24 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E#1/9 AsIs: >/1 ]] }
      if( ! refalrts::alloc_ident( vm, context[16], ident_TkOpenCall.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[19], ref_FlatResult.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[22], ident_TkCloseCall.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[24] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[13] );
      refalrts::reinit_open_bracket( context[15] );
      refalrts::reinit_name( context[14], ref_FlatResult.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[21], context[23] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[18] );
      refalrts::link_brackets( context[15], context[17] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[20], context[24] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FlatResult/4 e.Range-B#1/7 (/13 # Brackets/15 e.SubRange#1/11 )/14 e.Range-E#1/9 >/1
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
      context[15] = refalrts::ident_left(  ident_Brackets.ref(vm), context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.SubRange#1 as range 11
      // closed e.Range-E#1 as range 9
      //DEBUG: e.Range-B#1: 7
      //DEBUG: e.SubRange#1: 11
      //DEBUG: e.Range-E#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range-B#1/7 HalfReuse: >/13 HalfReuse: (/15 } # TkOpenBracket/16 )/17 </18 & FlatResult/19 Tile{ AsIs: e.SubRange#1/11 } >/20 (/21 # TkCloseBracket/22 )/23 </24 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E#1/9 AsIs: >/1 ]] }
      if( ! refalrts::alloc_ident( vm, context[16], ident_TkOpenBracket.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[19], ref_FlatResult.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[22], ident_TkCloseBracket.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[24] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[13] );
      refalrts::reinit_open_bracket( context[15] );
      refalrts::reinit_name( context[14], ref_FlatResult.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[24] );
      refalrts::link_brackets( context[21], context[23] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[18] );
      refalrts::link_brackets( context[15], context[17] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[20], context[24] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FlatResult/4 e.Range-B#1/7 (/13 # ADT-Brackets/15 (/18 e.Name#1/16 )/19 e.SubRange#1/11 )/14 e.Range-E#1/9 >/1
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
      context[15] = refalrts::ident_left(  ident_ADTm_Brackets.ref(vm), context[11], context[12] );
      if( ! context[15] )
        continue;
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[11], context[12] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      // closed e.Name#1 as range 16
      // closed e.SubRange#1 as range 11
      // closed e.Range-E#1 as range 9
      //DEBUG: e.Range-B#1: 7
      //DEBUG: e.Name#1: 16
      //DEBUG: e.SubRange#1: 11
      //DEBUG: e.Range-E#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & FlatResult/4 AsIs: e.Range-B#1/7 HalfReuse: >/13 HalfReuse: (/15 HalfReuse: # TkOpenADT/18 } Tile{ AsIs: )/19 } (/20 # TkName/21 Tile{ AsIs: e.Name#1/16 } )/22 </23 & FlatResult/24 Tile{ AsIs: e.SubRange#1/11 } >/25 (/26 # TkCloseADT/27 )/28 </29 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E#1/9 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_bracket( vm, context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[21], ident_TkName.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[24], ref_FlatResult.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[26] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[27], ident_TkCloseADT.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[29] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[13] );
      refalrts::reinit_open_bracket( context[15] );
      refalrts::reinit_ident( context[18], ident_TkOpenADT.ref(vm) );
      refalrts::reinit_name( context[14], ref_FlatResult.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[29] );
      refalrts::link_brackets( context[26], context[28] );
      refalrts::push_stack( vm, context[25] );
      refalrts::push_stack( vm, context[23] );
      refalrts::link_brackets( context[20], context[22] );
      refalrts::link_brackets( context[15], context[19] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[25], context[29] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[22], context[24] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FlatResult/4 e.Range-B#1/7 (/13 # ClosureBrackets/15 e.SubRange#1/11 )/14 e.Range-E#1/9 >/1
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
      context[15] = refalrts::ident_left(  ident_ClosureBrackets.ref(vm), context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.SubRange#1 as range 11
      // closed e.Range-E#1 as range 9
      //DEBUG: e.Range-B#1: 7
      //DEBUG: e.SubRange#1: 11
      //DEBUG: e.Range-E#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Range-B#1/7 } Tile{ AsIs: (/13 Reuse: # TkClosureHead/15 } )/16 Tile{ AsIs: </0 AsIs: & FlatResult/4 } Tile{ AsIs: e.SubRange#1/11 } >/17 (/18 # TkUnwrappedClosure/19 )/20 </21 Tile{ HalfReuse: & FlatResult/14 AsIs: e.Range-E#1/9 AsIs: >/1 ]] }
      if( ! refalrts::alloc_close_bracket( vm, context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[17] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_bracket( vm, context[18] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[19], ident_TkUnwrappedClosure.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[21] ) )
        return refalrts::cNoMemory;
      refalrts::update_ident( context[15], ident_TkClosureHead.ref(vm) );
      refalrts::reinit_name( context[14], ref_FlatResult.ref(vm) );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[18], context[20] );
      refalrts::push_stack( vm, context[17] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[17], context[21] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[16], context[16] );
      res = refalrts::splice_evar( res, context[13], context[15] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlatResult/4 e.Range#1/2 >/1
  // closed e.Range#1 as range 2
  //DEBUG: e.Range#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FlatResult/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Range#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlatResult("FlatResult", 3023103213U, 2120637161U, func_FlatResult);


static refalrts::FnResult func_gen_GenResultm_Aux_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 5 elems
  refalrts::Iter context[5];
  refalrts::zeros( context, 5 );
  // </0 & GenResult-Aux=1/4 e.Commands#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Commands#2 as range 2
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & PatchClosureLogic/4 AsIs: e.Commands#2/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_PatchClosureLogic.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Aux_A1("GenResult-Aux=1", 3023103213U, 2120637161U, func_gen_GenResultm_Aux_A1);


static refalrts::FnResult func_GenResultm_Aux(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
  // </0 & GenResult-Aux/4 (/7 e.Trash#1/5 )/8 (/11 e.MarkedResult#1/9 )/12 >/1
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
  // closed e.Trash#1 as range 5
  // closed e.MarkedResult#1 as range 9
  //DEBUG: e.Trash#1: 5
  //DEBUG: e.MarkedResult#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 & GenResult-Aux=1/14 (/15 # CmdComment/16"TRASH:"/17 </19 & TextFromExpr/20 e.Trash#1/5/21 >/23 )/24 (/25 # CmdComment/26"RESULT:"/27 </29 & TextFromExpr/30 e.MarkedResult#1/9/31 >/33 )/34 </35 & GenResult-Allocations/36 e.MarkedResult#1/9/37 >/39 </40 & GenResult-ReinitUpdate/41 e.MarkedResult#1/9/42 >/44 </45 & GenPushLink/46 </47 Tile{ HalfReuse: & FlatTilesInResult/11 AsIs: e.MarkedResult#1/9 HalfReuse: >/12 AsIs: >/1 } Tile{ AsIs: </0 Reuse: & GenSplices/4 AsIs: (/7 AsIs: e.Trash#1/5 AsIs: )/8 } e.MarkedResult#1/9/48 >/50 >/51 Tile{ ]] }
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_gen_GenResultm_Aux_A1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[16], ident_CmdComment.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[17], context[18], "TRASH:", 6 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[20], ref_TextFromExpr.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[21], context[22], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[26], ident_CmdComment.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( vm, context[27], context[28], "RESULT:", 7 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[30], ref_TextFromExpr.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[31], context[32], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[36], ref_GenResultm_Allocations.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[37], context[38], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[41], ref_GenResultm_ReinitUpdate.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[42], context[43], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[46], ref_GenPushLink.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[47] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(vm, context[48], context[49], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[50] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[51] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[11], ref_FlatTilesInResult.ref(vm) );
  refalrts::reinit_close_call( context[12] );
  refalrts::update_name( context[4], ref_GenSplices.ref(vm) );
  refalrts::push_stack( vm, context[51] );
  refalrts::push_stack( vm, context[13] );
  refalrts::push_stack( vm, context[50] );
  refalrts::push_stack( vm, context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[45] );
  refalrts::push_stack( vm, context[12] );
  refalrts::push_stack( vm, context[47] );
  refalrts::push_stack( vm, context[44] );
  refalrts::push_stack( vm, context[40] );
  refalrts::push_stack( vm, context[39] );
  refalrts::push_stack( vm, context[35] );
  refalrts::link_brackets( context[25], context[34] );
  refalrts::push_stack( vm, context[33] );
  refalrts::push_stack( vm, context[29] );
  refalrts::link_brackets( context[15], context[24] );
  refalrts::push_stack( vm, context[23] );
  refalrts::push_stack( vm, context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[50], context[51] );
  res = refalrts::splice_evar( res, context[48], context[49] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[1] );
  res = refalrts::splice_evar( res, context[13], context[47] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Aux("GenResult-Aux", 3023103213U, 2120637161U, func_GenResultm_Aux);


static refalrts::FnResult func_gen_GenResultm_Allocations_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & GenResult-Allocations\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenResult-Allocations\1/4 (/7 e.new#1/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & GenResult-Allocations\1/4 (/7 s.new#2/11 e.new#3/9 )/8 >/1
    context[9] = context[5];
    context[10] = context[6];
    if( ! refalrts::svar_left( context[11], context[9], context[10] ) )
      continue;
    // closed e.new#3 as range 9
    do {
      // </0 & GenResult-Allocations\1/4 (/7 # Tile/11 e.Tile#2/9 )/8 >/1
      if( ! refalrts::ident_term(  ident_Tile.ref(vm), context[11] ) )
        continue;
      // closed e.Tile#2 as range 9
      //DEBUG: e.Tile#2: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenResult-Allocations\1/4 (/7 # Tile/11 e.Tile#2/9 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenResult-Allocations\1/4 (/7 s.new#4/11 e.new#5/12 s.new#6/14 )/8 >/1
    context[12] = context[9];
    context[13] = context[10];
    if( ! refalrts::svar_right( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#5 as range 12
    do {
      // </0 & GenResult-Allocations\1/4 (/7 # TkVariableCopy/11 s.new#8/17 e.new#9/15 s.new#10/19 s.new#11/18 s.new#7/14 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      if( ! refalrts::ident_term(  ident_TkVariableCopy.ref(vm), context[11] ) )
        continue;
      if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_right( context[18], context[15], context[16] ) )
        continue;
      if( ! refalrts::svar_right( context[19], context[15], context[16] ) )
        continue;
      // closed e.new#9 as range 15
      do {
        // </0 & GenResult-Allocations\1/4 (/7 # TkVariableCopy/11 't'/17 e.Index#2/15 s.Level#2/19 s.SampleOffset#2/18 s.Offset#2/14 )/8 >/1
        if( ! refalrts::char_term( 't', context[17] ) )
          continue;
        // closed e.Index#2 as range 15
        //DEBUG: s.Level#2: 19
        //DEBUG: s.SampleOffset#2: 18
        //DEBUG: s.Offset#2: 14
        //DEBUG: e.Index#2: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & GenResult-Allocations\1/4 {REMOVED TILE} e.Index#2/15 s.Level#2/19 s.SampleOffset#2/18 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCopyVar/11 Reuse: 'e'/17 } Tile{ AsIs: s.Offset#2/14 HalfReuse: s.SampleOffset2 #18/8 HalfReuse: )/1 ]] }
        refalrts::update_ident( context[11], ident_CmdCopyVar.ref(vm) );
        refalrts::update_char( context[17], 'e' );
        refalrts::reinit_svar( context[8], context[18] );
        refalrts::reinit_close_bracket( context[1] );
        refalrts::link_brackets( context[7], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[14];
        res = refalrts::splice_evar( res, context[7], context[17] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenResult-Allocations\1/4 (/7 # TkVariableCopy/11 s.Mode#2/17 e.Index#2/15 s.Level#2/19 s.SampleOffset#2/18 s.Offset#2/14 )/8 >/1
      // closed e.Index#2 as range 15
      //DEBUG: s.Mode#2: 17
      //DEBUG: s.Level#2: 19
      //DEBUG: s.SampleOffset#2: 18
      //DEBUG: s.Offset#2: 14
      //DEBUG: e.Index#2: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenResult-Allocations\1/4 {REMOVED TILE} e.Index#2/15 s.Level#2/19 s.SampleOffset#2/18 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdCopyVar/11 AsIs: s.Mode#2/17 } Tile{ AsIs: s.Offset#2/14 HalfReuse: s.SampleOffset2 #18/8 HalfReuse: )/1 ]] }
      refalrts::update_ident( context[11], ident_CmdCopyVar.ref(vm) );
      refalrts::reinit_svar( context[8], context[18] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[7], context[17] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenResult-Allocations\1/4 (/7 # TkString/11 e.String#2/12 s.Offset#2/14 )/8 >/1
    if( ! refalrts::ident_term(  ident_TkString.ref(vm), context[11] ) )
      continue;
    // closed e.String#2 as range 12
    //DEBUG: s.Offset#2: 14
    //DEBUG: e.String#2: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Offset#2/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Allocate/7 HalfReuse: s.Offset2 #14/11 } Tile{ HalfReuse: # ElString/8 } Tile{ AsIs: e.String#2/12 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdCreateElem.ref(vm) );
    refalrts::reinit_ident( context[7], ident_Allocate.ref(vm) );
    refalrts::reinit_svar( context[11], context[14] );
    refalrts::reinit_ident( context[8], ident_ElString.ref(vm) );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::splice_to_freelist_open( vm, context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-Allocations\1/4 (/7 e.Elem#2/5 )/8 >/1
  // closed e.Elem#2 as range 5
  //DEBUG: e.Elem#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 # CmdCreateElem/10 Tile{ HalfReuse: # Allocate/0 HalfReuse: </4 HalfReuse: & CreateElemParam/7 AsIs: e.Elem#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( vm, context[10], ident_CmdCreateElem.ref(vm) ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], ident_Allocate.ref(vm) );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ref_CreateElemParam.ref(vm) );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_Allocations_L1("GenResult-Allocations\\1", 3023103213U, 2120637161U, func_gen_GenResultm_Allocations_L1);


static refalrts::FnResult func_GenResultm_Allocations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & GenResult-Allocations/4 e.MarkedResult#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.MarkedResult#1 as range 2
  //DEBUG: e.MarkedResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & GenResult-Allocations\1/4 AsIs: e.MarkedResult#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref(vm) );
  refalrts::update_name( context[4], ref_gen_GenResultm_Allocations_L1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_Allocations("GenResult-Allocations", 3023103213U, 2120637161U, func_GenResultm_Allocations);


static refalrts::FnResult func_gen_GenResultm_ReinitUpdate_L1S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & GenResult-ReinitUpdate\1$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
    // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 s.new#3/9 t.new#4/12 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[13] = refalrts::tvar_left( context[12], context[10], context[11] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    do {
      // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # AsIs/9 t.Item#3/12 )/8 >/1
      if( ! refalrts::ident_term(  ident_AsIs.ref(vm), context[9] ) )
        continue;
      //DEBUG: t.Item#3: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # AsIs/9 t.Item#3/12 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 s.new#5/9 (/12 e.new#6/14 )/13 )/8 >/1
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[12] ) )
      continue;
    // closed e.new#6 as range 14
    do {
      // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # HalfReuse/9 (/12 e.new#7/14 )/13 )/8 >/1
      if( ! refalrts::ident_term(  ident_HalfReuse.ref(vm), context[9] ) )
        continue;
      // closed e.new#7 as range 14
      do {
        // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # HalfReuse/9 (/12 # TkVariable/18 's'/19 e.Index#3/16 s.SampleOffset#3/21 s.Offset#3/20 )/13 )/8 >/1
        context[16] = context[14];
        context[17] = context[15];
        context[18] = refalrts::ident_left(  ident_TkVariable.ref(vm), context[16], context[17] );
        if( ! context[18] )
          continue;
        context[19] = refalrts::char_left( 's', context[16], context[17] );
        if( ! context[19] )
          continue;
        if( ! refalrts::svar_right( context[20], context[16], context[17] ) )
          continue;
        if( ! refalrts::svar_right( context[21], context[16], context[17] ) )
          continue;
        // closed e.Index#3 as range 16
        //DEBUG: s.Offset#3: 20
        //DEBUG: s.SampleOffset#3: 21
        //DEBUG: e.Index#3: 16

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & GenResult-ReinitUpdate\1$1\1/4 {REMOVED TILE} e.Index#3/16 s.SampleOffset#3/21 s.Offset#3/20 )/13 )/8 >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdReinitSVar/9 HalfReuse: s.Offset3 #20/12 HalfReuse: s.SampleOffset3 #21/18 HalfReuse: )/19 } Tile{ ]] }
        refalrts::update_ident( context[9], ident_CmdReinitSVar.ref(vm) );
        refalrts::reinit_svar( context[12], context[20] );
        refalrts::reinit_svar( context[18], context[21] );
        refalrts::reinit_close_bracket( context[19] );
        refalrts::link_brackets( context[7], context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[7], context[19] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # HalfReuse/9 (/12 e.Elem#3/14 )/13 )/8 >/1
      // closed e.Elem#3 as range 14
      //DEBUG: e.Elem#3: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Reinit/7 HalfReuse: </9 HalfReuse: & CreateElemParam/12 AsIs: e.Elem#3/14 HalfReuse: >/13 AsIs: )/8 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_CmdCreateElem.ref(vm) );
      refalrts::reinit_ident( context[7], ident_Reinit.ref(vm) );
      refalrts::reinit_open_call( context[9] );
      refalrts::reinit_name( context[12], ref_CreateElemParam.ref(vm) );
      refalrts::reinit_close_call( context[13] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[9] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # Reuse/9 (/12 e.Elem#3/14 )/13 )/8 >/1
    if( ! refalrts::ident_term(  ident_Reuse.ref(vm), context[9] ) )
      continue;
    // closed e.Elem#3 as range 14
    //DEBUG: e.Elem#3: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdCreateElem/4 HalfReuse: # Update/7 HalfReuse: </9 HalfReuse: & CreateElemParam/12 AsIs: e.Elem#3/14 HalfReuse: >/13 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdCreateElem.ref(vm) );
    refalrts::reinit_ident( context[7], ident_Update.ref(vm) );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[12], ref_CreateElemParam.ref(vm) );
    refalrts::reinit_close_call( context[13] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( vm, context[13] );
    refalrts::push_stack( vm, context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 s.new#3/9 )/8 >/1
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # LEFT-EDGE/9 )/8 >/1
    if( ! refalrts::ident_term(  ident_LEFTm_EDGE.ref(vm), context[9] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # LEFT-EDGE/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # RIGHT-EDGE/9 )/8 >/1
  if( ! refalrts::ident_term(  ident_RIGHTm_EDGE.ref(vm), context[9] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenResult-ReinitUpdate\1$1\1/4 (/7 # RIGHT-EDGE/9 )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_ReinitUpdate_L1S1L1("GenResult-ReinitUpdate\\1$1\\1", 3023103213U, 2120637161U, func_gen_GenResultm_ReinitUpdate_L1S1L1);


static refalrts::FnResult func_gen_GenResultm_ReinitUpdate_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & GenResult-ReinitUpdate\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenResult-ReinitUpdate\1/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & GenResult-ReinitUpdate\1/4 (/5 # Tile/9 e.Tile#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_Tile.ref(vm), context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.Tile#2 as range 7
    //DEBUG: e.Tile#2: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Tile/9 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & GenResult-ReinitUpdate\1$1\1/5 } Tile{ AsIs: e.Tile#2/7 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Map.ref(vm) );
    refalrts::reinit_name( context[5], ref_gen_GenResultm_ReinitUpdate_L1S1L1.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenResult-ReinitUpdate\1/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenResult-ReinitUpdate\1/4 t.Other#2/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenResultm_ReinitUpdate_L1("GenResult-ReinitUpdate\\1", 3023103213U, 2120637161U, func_gen_GenResultm_ReinitUpdate_L1);


static refalrts::FnResult func_GenResultm_ReinitUpdate(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & GenResult-ReinitUpdate/4 e.MarkedResult#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.MarkedResult#1 as range 2
  //DEBUG: e.MarkedResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & GenResult-ReinitUpdate\1/4 AsIs: e.MarkedResult#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref(vm) );
  refalrts::update_name( context[4], ref_gen_GenResultm_ReinitUpdate_L1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenResultm_ReinitUpdate("GenResult-ReinitUpdate", 3023103213U, 2120637161U, func_GenResultm_ReinitUpdate);


static refalrts::FnResult func_CreateElemParam(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CreateElemParam/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CreateElemParam/4 s.new#1/5 e.new#2/2 s.new#3/6 >/1
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CreateElemParam/4 s.new#4/5 s.new#6/9 s.new#5/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & CreateElemParam/4 # TkChar/5 s.Char#1/9 s.Offset#1/6 >/1
      if( ! refalrts::ident_term(  ident_TkChar.ref(vm), context[5] ) )
        continue;
      //DEBUG: s.Char#1: 9
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.Offset#1/6 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #6/4 Reuse: # ElChar/5 AsIs: s.Char#1/9 } Tile{ ]] }
      refalrts::reinit_svar( context[4], context[6] );
      refalrts::update_ident( context[5], ident_ElChar.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CreateElemParam/4 # TkNumber/5 s.Number#1/9 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  ident_TkNumber.ref(vm), context[5] ) )
      continue;
    //DEBUG: s.Number#1: 9
    //DEBUG: s.Offset#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.Offset#1/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #6/4 Reuse: # ElNumber/5 AsIs: s.Number#1/9 } Tile{ ]] }
    refalrts::reinit_svar( context[4], context[6] );
    refalrts::update_ident( context[5], ident_ElNumber.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[9] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateElemParam/4 s.new#4/5 s.new#5/6 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    do {
      // </0 & CreateElemParam/4 # TkOpenBracket/5 s.Offset#1/6 >/1
      if( ! refalrts::ident_term(  ident_TkOpenBracket.ref(vm), context[5] ) )
        continue;
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkOpenBracket/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenBracket/1 ]] }
      refalrts::reinit_ident( context[1], ident_ElOpenBracket.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkCloseBracket/5 s.Offset#1/6 >/1
      if( ! refalrts::ident_term(  ident_TkCloseBracket.ref(vm), context[5] ) )
        continue;
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkCloseBracket/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseBracket/1 ]] }
      refalrts::reinit_ident( context[1], ident_ElCloseBracket.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkOpenADT/5 s.Offset#1/6 >/1
      if( ! refalrts::ident_term(  ident_TkOpenADT.ref(vm), context[5] ) )
        continue;
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkOpenADT/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenADT/1 ]] }
      refalrts::reinit_ident( context[1], ident_ElOpenADT.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkCloseADT/5 s.Offset#1/6 >/1
      if( ! refalrts::ident_term(  ident_TkCloseADT.ref(vm), context[5] ) )
        continue;
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkCloseADT/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseADT/1 ]] }
      refalrts::reinit_ident( context[1], ident_ElCloseADT.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & CreateElemParam/4 # TkOpenCall/5 s.Offset#1/6 >/1
      if( ! refalrts::ident_term(  ident_TkOpenCall.ref(vm), context[5] ) )
        continue;
      //DEBUG: s.Offset#1: 6

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkOpenCall/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElOpenCall/1 ]] }
      refalrts::reinit_ident( context[1], ident_ElOpenCall.ref(vm) );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[6];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & CreateElemParam/4 # TkCloseCall/5 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  ident_TkCloseCall.ref(vm), context[5] ) )
      continue;
    //DEBUG: s.Offset#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkCloseCall/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElCloseCall/1 ]] }
    refalrts::reinit_ident( context[1], ident_ElCloseCall.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateElemParam/4 # TkName/5 e.Name#1/2 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  ident_TkName.ref(vm), context[5] ) )
      continue;
    // closed e.Name#1 as range 2
    //DEBUG: s.Offset#1: 6
    //DEBUG: e.Name#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TkName/5 {REMOVED TILE} s.Offset#1/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Offset1 #6/0 HalfReuse: # ElName/4 } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[6] );
    refalrts::reinit_ident( context[4], ident_ElName.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CreateElemParam/4 # TkIdentifier/5 e.Name#1/2 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  ident_TkIdentifier.ref(vm), context[5] ) )
      continue;
    // closed e.Name#1 as range 2
    //DEBUG: s.Offset#1: 6
    //DEBUG: e.Name#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # TkIdentifier/5 {REMOVED TILE} s.Offset#1/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: s.Offset1 #6/0 HalfReuse: # ElIdent/4 } Tile{ AsIs: e.Name#1/2 } Tile{ ]] }
    refalrts::reinit_svar( context[0], context[6] );
    refalrts::reinit_ident( context[4], ident_ElIdent.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateElemParam/4 s.new#4/5 s.new#5/6 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & CreateElemParam/4 # TkClosureHead/5 s.Offset#1/6 >/1
    if( ! refalrts::ident_term(  ident_TkClosureHead.ref(vm), context[5] ) )
      continue;
    //DEBUG: s.Offset#1: 6

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkClosureHead/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElClosureHead/1 ]] }
    refalrts::reinit_ident( context[1], ident_ElClosureHead.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CreateElemParam/4 # TkUnwrappedClosure/5 s.Offset#1/6 >/1
  if( ! refalrts::ident_term(  ident_TkUnwrappedClosure.ref(vm), context[5] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Offset#1: 6

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & CreateElemParam/4 # TkUnwrappedClosure/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#1/6 HalfReuse: # ElUnwrappedClosure/1 ]] }
  refalrts::reinit_ident( context[1], ident_ElUnwrappedClosure.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateElemParam("CreateElemParam", 3023103213U, 2120637161U, func_CreateElemParam);


static refalrts::FnResult func_gen_GenPushLink_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & GenPushLink=1/4 (/7 )/8 e.Commands#2/2 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#2 as range 2
  //DEBUG: e.Commands#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenPushLink=1/4 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: & Reverse/8 AsIs: e.Commands#2/2 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[8], ref_Reverse.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[7];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenPushLink_A1("GenPushLink=1", 3023103213U, 2120637161U, func_gen_GenPushLink_A1);


static refalrts::FnResult func_gen_GenPushLink_A1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & GenPushLink=1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenPushLink=1\1/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 e.new#3/9 )/12 >/1
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
    // </0 & GenPushLink=1\1/4 (/7 e.new#4/5 )/8 (/11 s.new#5/13 s.new#6/16 )/12 >/1
    context[14] = context[9];
    context[15] = context[10];
    // closed e.new#4 as range 5
    if( ! refalrts::svar_left( context[16], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenCall/13 s.Offset#2/16 )/12 >/1
      if( ! refalrts::ident_term(  ident_TkOpenCall.ref(vm), context[13] ) )
        continue;
      // closed e.Stack#2 as range 5
      //DEBUG: s.Offset#2: 16
      //DEBUG: e.Stack#2: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenPushLink=1\1/4 {REMOVED TILE} # TkOpenCall/13 s.Offset#2/16 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #16/8 HalfReuse: )/11 } Tile{ ]] }
      refalrts::reinit_svar( context[8], context[16] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenADT/13 s.Offset#2/16 )/12 >/1
      if( ! refalrts::ident_term(  ident_TkOpenADT.ref(vm), context[13] ) )
        continue;
      // closed e.Stack#2 as range 5
      //DEBUG: s.Offset#2: 16
      //DEBUG: e.Stack#2: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenPushLink=1\1/4 {REMOVED TILE} # TkOpenADT/13 s.Offset#2/16 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #16/8 HalfReuse: )/11 } Tile{ ]] }
      refalrts::reinit_svar( context[8], context[16] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/5 )/8 (/11 # TkOpenBracket/13 s.Offset#2/16 )/12 >/1
      if( ! refalrts::ident_term(  ident_TkOpenBracket.ref(vm), context[13] ) )
        continue;
      // closed e.Stack#2 as range 5
      //DEBUG: s.Offset#2: 16
      //DEBUG: e.Stack#2: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenPushLink=1\1/4 {REMOVED TILE} # TkOpenBracket/13 s.Offset#2/16 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #16/8 HalfReuse: )/11 } Tile{ ]] }
      refalrts::reinit_svar( context[8], context[16] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/5 )/8 (/11 # TkClosureHead/13 s.Offset#2/16 )/12 >/1
      if( ! refalrts::ident_term(  ident_TkClosureHead.ref(vm), context[13] ) )
        continue;
      // closed e.Stack#2 as range 5
      //DEBUG: s.Offset#2: 16
      //DEBUG: e.Stack#2: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenPushLink=1\1/4 {REMOVED TILE} # TkClosureHead/13 s.Offset#2/16 )/12 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 HalfReuse: s.Offset2 #16/8 HalfReuse: )/11 } Tile{ ]] }
      refalrts::reinit_svar( context[8], context[16] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::link_brackets( context[7], context[11] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[7], context[11] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenPushLink=1\1/4 (/7 e.new#7/17 s.new#8/19 )/8 (/11 s.new#9/13 s.new#10/16 )/12 >/1
    context[17] = context[5];
    context[18] = context[6];
    if( ! refalrts::svar_right( context[19], context[17], context[18] ) )
      continue;
    // closed e.new#7 as range 17
    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/17 s.OpenOffset#2/19 )/8 (/11 # TkCloseCall/13 s.Offset#2/16 )/12 >/1
      if( ! refalrts::ident_term(  ident_TkCloseCall.ref(vm), context[13] ) )
        continue;
      // closed e.Stack#2 as range 17
      //DEBUG: s.OpenOffset#2: 19
      //DEBUG: s.Offset#2: 16
      //DEBUG: e.Stack#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/17 } Tile{ HalfReuse: )/4 AsIs: (/7 } Tile{ HalfReuse: # CmdPushStack/1 } Tile{ AsIs: s.OpenOffset#2/19 AsIs: )/8 AsIs: (/11 Reuse: # CmdPushStack/13 AsIs: s.Offset#2/16 AsIs: )/12 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_close_bracket( context[4] );
      refalrts::reinit_ident( context[1], ident_CmdPushStack.ref(vm) );
      refalrts::update_ident( context[13], ident_CmdPushStack.ref(vm) );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[0], context[4] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[19], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[4], context[7] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/17 s.OpenOffset#2/19 )/8 (/11 # TkCloseADT/13 s.Offset#2/16 )/12 >/1
      if( ! refalrts::ident_term(  ident_TkCloseADT.ref(vm), context[13] ) )
        continue;
      // closed e.Stack#2 as range 17
      //DEBUG: s.OpenOffset#2: 19
      //DEBUG: s.Offset#2: 16
      //DEBUG: e.Stack#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & GenPushLink=1\1/4 (/7 {REMOVED TILE} s.OpenOffset#2/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/17 } Tile{ HalfReuse: )/1 } Tile{ HalfReuse: (/8 HalfReuse: # CmdLinkBrackets/11 HalfReuse: s.OpenOffset2 #19/13 AsIs: s.Offset#2/16 AsIs: )/12 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[11], ident_CmdLinkBrackets.ref(vm) );
      refalrts::reinit_svar( context[13], context[19] );
      refalrts::link_brackets( context[8], context[12] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/17 s.OpenOffset#2/19 )/8 (/11 # TkCloseBracket/13 s.Offset#2/16 )/12 >/1
      if( ! refalrts::ident_term(  ident_TkCloseBracket.ref(vm), context[13] ) )
        continue;
      // closed e.Stack#2 as range 17
      //DEBUG: s.OpenOffset#2: 19
      //DEBUG: s.Offset#2: 16
      //DEBUG: e.Stack#2: 17

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & GenPushLink=1\1/4 (/7 {REMOVED TILE} s.OpenOffset#2/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/17 } Tile{ HalfReuse: )/1 } Tile{ HalfReuse: (/8 HalfReuse: # CmdLinkBrackets/11 HalfReuse: s.OpenOffset2 #19/13 AsIs: s.Offset#2/16 AsIs: )/12 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_ident( context[11], ident_CmdLinkBrackets.ref(vm) );
      refalrts::reinit_svar( context[13], context[19] );
      refalrts::link_brackets( context[8], context[12] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/17 s.HeadOffset#2/19 )/8 (/11 # TkUnwrappedClosure/13 s.Offset#2/16 )/12 >/1
    if( ! refalrts::ident_term(  ident_TkUnwrappedClosure.ref(vm), context[13] ) )
      continue;
    // closed e.Stack#2 as range 17
    //DEBUG: s.HeadOffset#2: 19
    //DEBUG: s.Offset#2: 16
    //DEBUG: e.Stack#2: 17

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Stack#2/17 } Tile{ HalfReuse: )/4 AsIs: (/7 } # PatchCreateUnwrappedClosure/20 Tile{ AsIs: s.HeadOffset#2/19 } Tile{ HalfReuse: s.Offset2 #16/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdWrapClosure/13 AsIs: s.Offset#2/16 AsIs: )/12 } Tile{ ]] }
    if( ! refalrts::alloc_ident( vm, context[20], ident_PatchCreateUnwrappedClosure.ref(vm) ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::reinit_svar( context[1], context[16] );
    refalrts::update_ident( context[13], ident_CmdWrapClosure.ref(vm) );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[4], context[7] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenPushLink=1\1/4 (/7 e.Stack#2/5 )/8 (/11 s.tag#2/13 e.Info#2/9 )/12 >/1
  // closed e.Stack#2 as range 5
  // closed e.Info#2 as range 9
  //DEBUG: s.tag#2: 13
  //DEBUG: e.Stack#2: 5
  //DEBUG: e.Info#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenPushLink=1\1/4 {REMOVED TILE} (/11 s.tag#2/13 e.Info#2/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Stack#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenPushLink_A1L1("GenPushLink=1\\1", 3023103213U, 2120637161U, func_gen_GenPushLink_A1L1);


static refalrts::FnResult func_GenPushLink(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & GenPushLink/4 e.MarkedResult#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.MarkedResult#1 as range 2
  //DEBUG: e.MarkedResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & GenPushLink=1/4 } </5 & MapReduce/6 & GenPushLink=1\1/7 (/8 )/9 Tile{ AsIs: e.MarkedResult#1/2 } >/10 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[6], ref_MapReduce.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[7], ref_gen_GenPushLink_A1L1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_GenPushLink_A1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenPushLink("GenPushLink", 3023103213U, 2120637161U, func_GenPushLink);


static refalrts::FnResult func_PatchClosureLogic(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & PatchClosureLogic/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & PatchClosureLogic/4 e.Commands-B#1/7 (/13 # CmdWrapClosure/15 s.Offset#1/16 )/14 e.Commands-E#1/9 >/1
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
      context[15] = refalrts::ident_left(  ident_CmdWrapClosure.ref(vm), context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Commands-E#1 as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      //DEBUG: e.Commands-B#1: 7
      //DEBUG: e.Commands-E#1: 9
      //DEBUG: s.Offset#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & PatchClosureLogic/4 } Tile{ AsIs: e.Commands-B#1/7 } Tile{ AsIs: e.Commands-E#1/9 } Tile{ AsIs: >/1 } Tile{ AsIs: (/13 AsIs: # CmdWrapClosure/15 AsIs: s.Offset#1/16 AsIs: )/14 } Tile{ ]] }
      refalrts::link_brackets( context[13], context[14] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & PatchClosureLogic/4 e.new#1/5 t.new#2/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_right( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.new#1 as range 5
    do {
      // </0 & PatchClosureLogic/4 e.Commands-B#1/16 (/22 # CmdCreateElem/24 s.CreateMode#1/27 s.Offset#1/26 # ElUnwrappedClosure/25 )/23 e.Commands-E#1/18 (/7 # PatchCreateUnwrappedClosure/13 s.HeadOffset#1/14 s.Offset#1/15 )/8 >/1
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[7] ) )
        continue;
      context[13] = refalrts::ident_left(  ident_PatchCreateUnwrappedClosure.ref(vm), context[11], context[12] );
      if( ! context[13] )
        continue;
      if( ! refalrts::svar_left( context[14], context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_left( context[15], context[11], context[12] ) )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      context[16] = 0;
      context[17] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[18] = context[9];
        context[19] = context[10];
        context[20] = 0;
        context[21] = 0;
        context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
        if( ! context[22] )
          continue;
        refalrts::bracket_pointers(context[22], context[23]);
        context[24] = refalrts::ident_left(  ident_CmdCreateElem.ref(vm), context[20], context[21] );
        if( ! context[24] )
          continue;
        context[25] = refalrts::ident_right(  ident_ElUnwrappedClosure.ref(vm), context[20], context[21] );
        if( ! context[25] )
          continue;
        if( ! refalrts::repeated_stvar_right( vm, context[26], context[15], context[20], context[21] ) )
          continue;
        // closed e.Commands-E#1 as range 18
        if( ! refalrts::svar_left( context[27], context[20], context[21] ) )
          continue;
        if( ! refalrts::empty_seq( context[20], context[21] ) )
          continue;
        //DEBUG: s.HeadOffset#1: 14
        //DEBUG: s.Offset#1: 15
        //DEBUG: e.Commands-B#1: 16
        //DEBUG: e.Commands-E#1: 18
        //DEBUG: s.CreateMode#1: 27

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} (/7 # PatchCreateUnwrappedClosure/13 s.HeadOffset#1/14 s.Offset#1/15 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & PatchClosureLogic/4 AsIs: e.Commands-B#1/16 AsIs: (/22 AsIs: # CmdCreateElem/24 AsIs: s.CreateMode#1/27 AsIs: s.Offset#1/26 AsIs: # ElUnwrappedClosure/25 HalfReuse: s.HeadOffset1 #14/23 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Commands-E#1/18 } Tile{ AsIs: >/1 ]] }
        refalrts::reinit_svar( context[23], context[14] );
        refalrts::push_stack( vm, context[1] );
        refalrts::push_stack( vm, context[0] );
        refalrts::link_brackets( context[22], context[8] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[8], context[8] );
        refalrts::splice_to_freelist_open( vm, context[23], res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[16], context[17], context[9], context[10] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & PatchClosureLogic/4 e.Commands#1/5 t.OtherCommand#1/7 >/1
    // closed e.Commands#1 as range 5
    //DEBUG: t.OtherCommand#1: 7
    //DEBUG: e.Commands#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & PatchClosureLogic/4 } Tile{ AsIs: e.Commands#1/5 } Tile{ AsIs: >/1 } Tile{ AsIs: t.OtherCommand#1/7 } Tile{ ]] }
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PatchClosureLogic/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & PatchClosureLogic/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PatchClosureLogic("PatchClosureLogic", 3023103213U, 2120637161U, func_PatchClosureLogic);


static refalrts::FnResult func_Reverse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Reverse/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & Reverse/4 e.Items#1/5 t.Last#1/7 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_right( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Items#1 as range 5
    //DEBUG: t.Last#1: 7
    //DEBUG: e.Items#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Last#1/7 } Tile{ AsIs: </0 AsIs: & Reverse/4 } Tile{ AsIs: e.Items#1/5 } Tile{ AsIs: >/1 ]] }
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

  // </0 & Reverse/4 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & Reverse/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Reverse("Reverse", 3023103213U, 2120637161U, func_Reverse);


static refalrts::FnResult func_gen_FlatTilesInResult_L1S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & FlatTilesInResult\1$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FlatTilesInResult\1$1\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
    // </0 & FlatTilesInResult\1$1\1/4 (/7 s.new#3/9 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & FlatTilesInResult\1$1\1/4 (/7 # RIGHT-EDGE/9 )/8 >/1
      if( ! refalrts::ident_term(  ident_RIGHTm_EDGE.ref(vm), context[9] ) )
        continue;

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1$1\1/4 (/7 # RIGHT-EDGE/9 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ ]] }
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & FlatTilesInResult\1$1\1/4 (/7 # LEFT-EDGE/9 )/8 >/1
    if( ! refalrts::ident_term(  ident_LEFTm_EDGE.ref(vm), context[9] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1$1\1/4 (/7 # LEFT-EDGE/9 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlatTilesInResult\1$1\1/4 (/7 s.new#3/9 t.new#4/10 )/8 >/1
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & FlatTilesInResult\1$1\1/4 (/7 # AsIs/9 t.Item#3/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_AsIs.ref(vm), context[9] ) )
      continue;
    //DEBUG: t.Item#3: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1$1\1/4 (/7 # AsIs/9 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#3/10 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & FlatTilesInResult\1$1\1/4 (/7 # HalfReuse/9 t.Item#3/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_HalfReuse.ref(vm), context[9] ) )
      continue;
    //DEBUG: t.Item#3: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1$1\1/4 (/7 # HalfReuse/9 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#3/10 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlatTilesInResult\1$1\1/4 (/7 # Reuse/9 t.Item#3/10 )/8 >/1
  if( ! refalrts::ident_term(  ident_Reuse.ref(vm), context[9] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Item#3: 10

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1$1\1/4 (/7 # Reuse/9 {REMOVED TILE} )/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Item#3/10 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FlatTilesInResult_L1S1L1("FlatTilesInResult\\1$1\\1", 3023103213U, 2120637161U, func_gen_FlatTilesInResult_L1S1L1);


static refalrts::FnResult func_gen_FlatTilesInResult_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & FlatTilesInResult\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FlatTilesInResult\1/4 (/7 s.new#1/9 e.new#2/5 )/8 >/1
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
    // </0 & FlatTilesInResult\1/4 (/7 # Tile/9 e.Tile#2/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_Tile.ref(vm), context[9] ) )
      continue;
    // closed e.Tile#2 as range 5
    //DEBUG: e.Tile#2: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # Tile/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & FlatTilesInResult\1$1\1/7 } Tile{ AsIs: e.Tile#2/5 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Map.ref(vm) );
    refalrts::reinit_name( context[7], ref_gen_FlatTilesInResult_L1S1L1.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FlatTilesInResult\1/4 (/7 s.tag#2/9 e.info#2/5 )/8 >/1
  // closed e.info#2 as range 5
  //DEBUG: s.tag#2: 9
  //DEBUG: e.info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & FlatTilesInResult\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.tag#2/9 AsIs: e.info#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_FlatTilesInResult_L1("FlatTilesInResult\\1", 3023103213U, 2120637161U, func_gen_FlatTilesInResult_L1);


static refalrts::FnResult func_FlatTilesInResult(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & FlatTilesInResult/4 e.Result#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Result#1 as range 2
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & FlatTilesInResult\1/4 AsIs: e.Result#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref(vm) );
  refalrts::update_name( context[4], ref_gen_FlatTilesInResult_L1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FlatTilesInResult("FlatTilesInResult", 3023103213U, 2120637161U, func_FlatTilesInResult);


static refalrts::FnResult func_gen_GenSplices_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & GenSplices$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenSplices$1\1/4 (/7 e.new#1/5 t.new#2/9 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  do {
    // </0 & GenSplices$1\1/4 (/7 t.new#3/9 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & GenSplices$1\1/4 (/7 (/9 # AsIs/13 (/16 # TkVariable/18 'e'/19 e.Index#2/14 s.Depth#2/21 s.Offset#2/20 )/17 )/10 )/8 >/1
      context[11] = 0;
      context[12] = 0;
      if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
        continue;
      context[13] = refalrts::ident_left(  ident_AsIs.ref(vm), context[11], context[12] );
      if( ! context[13] )
        continue;
      context[14] = 0;
      context[15] = 0;
      context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
      if( ! context[16] )
        continue;
      refalrts::bracket_pointers(context[16], context[17]);
      context[18] = refalrts::ident_left(  ident_TkVariable.ref(vm), context[14], context[15] );
      if( ! context[18] )
        continue;
      context[19] = refalrts::char_left( 'e', context[14], context[15] );
      if( ! context[19] )
        continue;
      if( ! refalrts::empty_seq( context[11], context[12] ) )
        continue;
      if( ! refalrts::svar_right( context[20], context[14], context[15] ) )
        continue;
      if( ! refalrts::svar_right( context[21], context[14], context[15] ) )
        continue;
      // closed e.Index#2 as range 14
      //DEBUG: s.Offset#2: 20
      //DEBUG: s.Depth#2: 21
      //DEBUG: e.Index#2: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & GenSplices$1\1/4 (/7 (/9 # AsIs/13 {REMOVED TILE} e.Index#2/14 s.Depth#2/21 {REMOVED TILE} )/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/16 Reuse: # CmdInsertVar/18 AsIs: 'e'/19 } Tile{ AsIs: s.Offset#2/20 AsIs: )/17 } Tile{ ]] }
      refalrts::update_ident( context[18], ident_CmdInsertVar.ref(vm) );
      refalrts::link_brackets( context[16], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[17] );
      res = refalrts::splice_evar( res, context[16], context[19] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & GenSplices$1\1/4 (/7 t.OneItem#2/9 )/8 >/1
    //DEBUG: t.OneItem#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/11 # CmdInsertTile/12 </13 & BeginOffset/14 t.OneItem#2/9/15 Tile{ HalfReuse: >/0 HalfReuse: </4 HalfReuse: & EndOffset/7 AsIs: t.OneItem#2/9 HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( vm, context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[12], ident_CmdInsertTile.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[14], ref_BeginOffset.ref(vm) ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[15], context[16], context[9], context[10]))
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_EndOffset.ref(vm) );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[4] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[11], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenSplices$1\1/4 (/7 t.Begin#2/11 e.Inner#2/5 t.End#2/9 )/8 >/1
  context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Inner#2 as range 5
  //DEBUG: t.End#2: 9
  //DEBUG: t.Begin#2: 11
  //DEBUG: e.Inner#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Inner#2/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 Tile{ HalfReuse: # CmdInsertTile/0 HalfReuse: </4 HalfReuse: & BeginOffset/7 AsIs: t.Begin#2/11 } >/14 </15 & EndOffset/16 Tile{ AsIs: t.End#2/9 HalfReuse: >/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[16], ref_EndOffset.ref(vm) ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], ident_CmdInsertTile.ref(vm) );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ref_BeginOffset.ref(vm) );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[13], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GenSplices_S1L1("GenSplices$1\\1", 3023103213U, 2120637161U, func_gen_GenSplices_S1L1);


static refalrts::FnResult func_GenSplices(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & GenSplices/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenSplices/4 (/7 e.new#1/5 )/8 e.new#2/2 (/11 # Tile/13 e.new#3/9 )/12 >/1
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
  context[13] = refalrts::ident_left(  ident_Tile.ref(vm), context[9], context[10] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  // closed e.new#3 as range 9
  do {
    // </0 & GenSplices/4 (/7 e.Trash#1/5 )/8 (/18 # Tile/20 e.LeftTile#1/16 )/19 e.Result#1/14 (/11 # Tile/13 e.RightTile#1/9 )/12 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  ident_Tile.ref(vm), context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.Trash#1 as range 5
    // closed e.LeftTile#1 as range 16
    // closed e.Result#1 as range 14
    // closed e.RightTile#1 as range 9
    //DEBUG: e.Trash#1: 5
    //DEBUG: e.LeftTile#1: 16
    //DEBUG: e.Result#1: 14
    //DEBUG: e.RightTile#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/21 # CmdSetRes/22 Tile{ HalfReuse: </11 HalfReuse: & CalcRes/13 AsIs: e.RightTile#1/9 HalfReuse: >/12 HalfReuse: )/1 } Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & GenSplices$1\1/7 } </23 & CollectTiles/24 Tile{ AsIs: e.Result#1/14 } >/25 >/26 Tile{ HalfReuse: </8 HalfReuse: & GenTrash/18 HalfReuse: (/20 AsIs: e.LeftTile#1/16 AsIs: )/19 } Tile{ AsIs: e.Trash#1/5 } >/27 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( vm, context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[22], ident_CmdSetRes.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[24], ref_CollectTiles.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[27] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[13], ref_CalcRes.ref(vm) );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::update_name( context[4], ref_Map.ref(vm) );
    refalrts::reinit_name( context[7], ref_gen_GenSplices_S1L1.ref(vm) );
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[18], ref_GenTrash.ref(vm) );
    refalrts::reinit_open_bracket( context[20] );
    refalrts::push_stack( vm, context[27] );
    refalrts::push_stack( vm, context[8] );
    refalrts::link_brackets( context[20], context[19] );
    refalrts::push_stack( vm, context[26] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[25] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[8], context[19] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenSplices/4 (/7 # RemovedTile/14 )/8 (/11 # Tile/13 e.OneTile#1/9 )/12 >/1
  context[14] = refalrts::ident_left(  ident_RemovedTile.ref(vm), context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OneTile#1 as range 9
  //DEBUG: e.OneTile#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & GenSplices/4 (/7 # RemovedTile/14 )/8 (/11 # Tile/13 e.OneTile#1/9 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenSplices("GenSplices", 3023103213U, 2120637161U, func_GenSplices);


static refalrts::FnResult func_CalcRes(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CalcRes/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & CalcRes/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & CalcRes/4 (/5 # RIGHT-EDGE/9 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_RIGHTm_EDGE.ref(vm), context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CalcRes/4 (/5 # RIGHT-EDGE/9 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # RIGHT-EDGE/1 ]] }
    refalrts::reinit_ident( context[1], ident_RIGHTm_EDGE.ref(vm) );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CalcRes/4 t.First#1/5 e.Tile#1/2 >/1
  // closed e.Tile#1 as range 2
  //DEBUG: t.First#1: 5
  //DEBUG: e.Tile#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Tile#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & BeginOffset/4 AsIs: t.First#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_BeginOffset.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CalcRes("CalcRes", 3023103213U, 2120637161U, func_CalcRes);


static refalrts::FnResult func_CollectTiles(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & CollectTiles/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CollectTiles/4 (/9 # Tile/11 e.Tile#1/7 )/10 e.Other#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_Tile.ref(vm), context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Tile#1 as range 7
    // closed e.Other#1 as range 5
    //DEBUG: e.Tile#1: 7
    //DEBUG: e.Other#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other#1/5 } Tile{ HalfReuse: >/9 HalfReuse: (/11 AsIs: e.Tile#1/7 AsIs: )/10 } Tile{ ]] }
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_open_bracket( context[11] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles/4 e.Allocated#1/7 (/13 # Tile/15 e.Tile#1/11 )/14 e.Other#1/9 >/1
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
      context[15] = refalrts::ident_left(  ident_Tile.ref(vm), context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.Tile#1 as range 11
      // closed e.Other#1 as range 9
      //DEBUG: e.Allocated#1: 7
      //DEBUG: e.Tile#1: 11
      //DEBUG: e.Other#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & CollectTiles/4 } Tile{ AsIs: e.Other#1/9 } Tile{ HalfReuse: >/13 HalfReuse: (/15 AsIs: e.Tile#1/11 AsIs: )/14 } </16 & CollectTiles-Alloc/17 Tile{ AsIs: e.Allocated#1/7 } Tile{ AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[16] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[17], ref_CollectTilesm_Alloc.ref(vm) ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[13] );
      refalrts::reinit_open_bracket( context[15] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[16] );
      refalrts::link_brackets( context[15], context[14] );
      refalrts::push_stack( vm, context[13] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[9], context[10] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CollectTiles/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CollectTiles/4 e.Allocated#1/2 >/1
  // closed e.Allocated#1 as range 2
  //DEBUG: e.Allocated#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CollectTiles-Alloc/4 AsIs: e.Allocated#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_CollectTilesm_Alloc.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectTiles("CollectTiles", 3023103213U, 2120637161U, func_CollectTiles);


static refalrts::FnResult func_CollectTilesm_Alloc(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & CollectTiles-Alloc/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & CollectTiles-Alloc/4 (/9 # TkVariableCopy/11 'e'/12 e.Index#1/7 s.Level#1/15 s.Sample#1/14 s.Offset#1/13 )/10 e.Alloc#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkVariableCopy.ref(vm), context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( 'e', context[7], context[8] );
    if( ! context[12] )
      continue;
    // closed e.Alloc#1 as range 5
    if( ! refalrts::svar_right( context[13], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[14], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[7], context[8] ) )
      continue;
    // closed e.Index#1 as range 7
    //DEBUG: e.Alloc#1: 5
    //DEBUG: s.Offset#1: 13
    //DEBUG: s.Sample#1: 14
    //DEBUG: s.Level#1: 15
    //DEBUG: e.Index#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </16 & CollectTiles-Alloc/17 Tile{ AsIs: e.Alloc#1/5 } Tile{ HalfReuse: >/0 HalfReuse: (/4 AsIs: (/9 AsIs: # TkVariableCopy/11 AsIs: 'e'/12 AsIs: e.Index#1/7 AsIs: s.Level#1/15 AsIs: s.Sample#1/14 AsIs: s.Offset#1/13 AsIs: )/10 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[17], ref_CollectTilesm_Alloc.ref(vm) ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( vm, context[0] );
    refalrts::push_stack( vm, context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles-Alloc/4 e.Alloc#1/5 (/9 # TkVariableCopy/11 'e'/12 e.Index#1/7 s.Level#1/15 s.Sample#1/14 s.Offset#1/13 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkVariableCopy.ref(vm), context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::char_left( 'e', context[7], context[8] );
    if( ! context[12] )
      continue;
    // closed e.Alloc#1 as range 5
    if( ! refalrts::svar_right( context[13], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[14], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[7], context[8] ) )
      continue;
    // closed e.Index#1 as range 7
    //DEBUG: e.Alloc#1: 5
    //DEBUG: s.Offset#1: 13
    //DEBUG: s.Sample#1: 14
    //DEBUG: s.Level#1: 15
    //DEBUG: e.Index#1: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 Tile{ AsIs: (/9 AsIs: # TkVariableCopy/11 AsIs: 'e'/12 AsIs: e.Index#1/7 AsIs: s.Level#1/15 AsIs: s.Sample#1/14 AsIs: s.Offset#1/13 AsIs: )/10 HalfReuse: )/1 } Tile{ AsIs: </0 AsIs: & CollectTiles-Alloc/4 } Tile{ AsIs: e.Alloc#1/5 } >/17 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( vm, context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( vm, context[17] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & CollectTiles-Alloc/4 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & CollectTiles-Alloc/4 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & CollectTiles-Alloc/4 e.Alloc#1/2 >/1
  // closed e.Alloc#1 as range 2
  //DEBUG: e.Alloc#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: e.Alloc#1/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CollectTilesm_Alloc("CollectTiles-Alloc", 3023103213U, 2120637161U, func_CollectTilesm_Alloc);


static refalrts::FnResult func_GenTrash(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & GenTrash/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & GenTrash/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & GenTrash/4 (/7 e.LeftTile#1/5 )/8 e.Trash-B#1/11 # RemovedTile/15 e.Trash-E#1/13 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.LeftTile#1 as range 5
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[13] = context[9];
      context[14] = context[10];
      context[15] = refalrts::ident_left(  ident_RemovedTile.ref(vm), context[13], context[14] );
      if( ! context[15] )
        continue;
      // closed e.Trash-E#1 as range 13
      //DEBUG: e.LeftTile#1: 5
      //DEBUG: e.Trash-B#1: 11
      //DEBUG: e.Trash-E#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} # RemovedTile/15 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & GenTrash/4 AsIs: (/7 AsIs: e.LeftTile#1/5 AsIs: )/8 } Tile{ AsIs: e.Trash-B#1/11 } Tile{ AsIs: e.Trash-E#1/13 } Tile{ AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( vm, context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & GenTrash/4 (/7 e.LeftTile#1/5 )/8 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.LeftTile#1 as range 5
    //DEBUG: e.LeftTile#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.LeftTile#1/5 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdUseRes/4 HalfReuse: )/7 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdUseRes.ref(vm) );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenTrash/4 (/7 e.new#3/5 t.new#4/9 )/8 e.new#5/2 >/1
  // closed e.new#5 as range 2
  context[10] = refalrts::tvar_right( context[9], context[5], context[6] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#3 as range 5
  do {
    // </0 & GenTrash/4 (/7 (/9 # LEFT-EDGE/13 )/10 )/8 e.Trash#1/2 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  ident_LEFTm_EDGE.ref(vm), context[11], context[12] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.Trash#1 as range 2
    //DEBUG: e.Trash#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GenTrash/4 {REMOVED TILE} )/8 e.Trash#1/2 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 HalfReuse: # CmdTrash/9 AsIs: # LEFT-EDGE/13 AsIs: )/10 } Tile{ ]] }
    refalrts::reinit_ident( context[9], ident_CmdTrash.ref(vm) );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[10] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & GenTrash/4 (/7 e.LeftTile#1/5 t.Last#1/9 )/8 e.Trash#1/2 >/1
  // closed e.LeftTile#1 as range 5
  // closed e.Trash#1 as range 2
  //DEBUG: t.Last#1: 9
  //DEBUG: e.LeftTile#1: 5
  //DEBUG: e.Trash#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.LeftTile#1/5 {REMOVED TILE} e.Trash#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdTrash/4 HalfReuse: </7 } & EndOffset/11 Tile{ AsIs: t.Last#1/9 HalfReuse: >/8 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_name( vm, context[11], ref_EndOffset.ref(vm) ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_CmdTrash.ref(vm) );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[8] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GenTrash("GenTrash", 3023103213U, 2120637161U, func_GenTrash);


static refalrts::FnResult func_BeginOffset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & BeginOffset/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & BeginOffset/4 (/7 s.new#1/9 e.new#2/5 t.new#3/10 )/8 >/1
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
  context[11] = refalrts::tvar_right( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & BeginOffset/4 (/7 s.new#4/9 t.new#5/10 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & BeginOffset/4 (/7 # AsIs/9 t.Item#1/10 )/8 >/1
      if( ! refalrts::ident_term(  ident_AsIs.ref(vm), context[9] ) )
        continue;
      //DEBUG: t.Item#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # AsIs/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
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

    do {
      // </0 & BeginOffset/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 >/1
      if( ! refalrts::ident_term(  ident_HalfReuse.ref(vm), context[9] ) )
        continue;
      //DEBUG: t.Item#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # HalfReuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
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

    // </0 & BeginOffset/4 (/7 # Reuse/9 t.Item#1/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_Reuse.ref(vm), context[9] ) )
      continue;
    //DEBUG: t.Item#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # Reuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & BeginOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
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

  // </0 & BeginOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1
  if( ! refalrts::svar_term( context[10], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#1 as range 5
  //DEBUG: s.Offset#1: 10
  //DEBUG: s.Tag#1: 9
  //DEBUG: e.Info#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & BeginOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
  refalrts::reinit_svar( context[1], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_BeginOffset("BeginOffset", 3023103213U, 2120637161U, func_BeginOffset);


static refalrts::FnResult func_EndOffset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & EndOffset/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & EndOffset/4 (/7 s.new#1/9 e.new#2/5 t.new#3/10 )/8 >/1
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
  context[11] = refalrts::tvar_right( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & EndOffset/4 (/7 s.new#4/9 t.new#5/10 )/8 >/1
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    do {
      // </0 & EndOffset/4 (/7 # AsIs/9 t.Item#1/10 )/8 >/1
      if( ! refalrts::ident_term(  ident_AsIs.ref(vm), context[9] ) )
        continue;
      //DEBUG: t.Item#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # AsIs/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
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

    do {
      // </0 & EndOffset/4 (/7 # HalfReuse/9 t.Item#1/10 )/8 >/1
      if( ! refalrts::ident_term(  ident_HalfReuse.ref(vm), context[9] ) )
        continue;
      //DEBUG: t.Item#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} (/7 # HalfReuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
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

    // </0 & EndOffset/4 (/7 # Reuse/9 t.Item#1/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_Reuse.ref(vm), context[9] ) )
      continue;
    //DEBUG: t.Item#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} (/7 # Reuse/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & EndOffset/4 } Tile{ AsIs: t.Item#1/10 } Tile{ AsIs: >/1 ]] }
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

  // </0 & EndOffset/4 (/7 s.new#4/9 e.new#6/5 s.new#5/10 )/8 >/1
  if( ! refalrts::svar_term( context[10], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 5
  do {
    // </0 & EndOffset/4 (/7 s.new#7/9 s.new#9/14 e.new#10/12 s.new#11/15 s.new#8/10 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    if( ! refalrts::svar_right( context[15], context[12], context[13] ) )
      continue;
    // closed e.new#10 as range 12
    do {
      // </0 & EndOffset/4 (/7 s.new#12/9 's'/14 e.new#15/12 s.new#14/15 s.new#13/10 )/8 >/1
      if( ! refalrts::char_term( 's', context[14] ) )
        continue;
      // closed e.new#15 as range 12
      do {
        // </0 & EndOffset/4 (/7 # TkVariable/9 's'/14 e.Index#1/12 s.Depth#1/15 s.Offset#1/10 )/8 >/1
        if( ! refalrts::ident_term(  ident_TkVariable.ref(vm), context[9] ) )
          continue;
        // closed e.Index#1 as range 12
        //DEBUG: s.Depth#1: 15
        //DEBUG: s.Offset#1: 10
        //DEBUG: e.Index#1: 12

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & EndOffset/4 (/7 # TkVariable/9 's'/14 e.Index#1/12 s.Depth#1/15 s.Offset#1/10 )/8 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
        refalrts::reinit_svar( context[1], context[10] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & EndOffset/4 (/7 # TkVariableCopy/9 's'/14 e.Index#1/16 s.Depth#1/18 s.Sample#1/15 s.Offset#1/10 )/8 >/1
      context[16] = context[12];
      context[17] = context[13];
      if( ! refalrts::ident_term(  ident_TkVariableCopy.ref(vm), context[9] ) )
        continue;
      if( ! refalrts::svar_right( context[18], context[16], context[17] ) )
        continue;
      // closed e.Index#1 as range 16
      //DEBUG: s.Sample#1: 15
      //DEBUG: s.Offset#1: 10
      //DEBUG: s.Depth#1: 18
      //DEBUG: e.Index#1: 16

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & EndOffset/4 (/7 # TkVariableCopy/9 's'/14 e.Index#1/16 s.Depth#1/18 s.Sample#1/15 s.Offset#1/10 )/8 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
      refalrts::reinit_svar( context[1], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & EndOffset/4 (/7 # TkVariable/9 s.Mode#1/14 e.Index#1/12 s.Depth#1/15 s.Offset#1/10 )/8 >/1
      if( ! refalrts::ident_term(  ident_TkVariable.ref(vm), context[9] ) )
        continue;
      // closed e.Index#1 as range 12
      //DEBUG: s.Mode#1: 14
      //DEBUG: s.Depth#1: 15
      //DEBUG: s.Offset#1: 10
      //DEBUG: e.Index#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Mode#1/14 e.Index#1/12 s.Depth#1/15 s.Offset#1/10 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset1 #10/7 HalfReuse: >/9 } Tile{ ]] }
      refalrts::update_name( context[4], ref_Inc.ref(vm) );
      refalrts::reinit_svar( context[7], context[10] );
      refalrts::reinit_close_call( context[9] );
      refalrts::push_stack( vm, context[9] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      refalrts::splice_to_freelist_open( vm, context[9], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & EndOffset/4 (/7 # TkVariableCopy/9 s.Mode#1/14 e.Index#1/16 s.Depth#1/18 s.Sample#1/15 s.Offset#1/10 )/8 >/1
    context[16] = context[12];
    context[17] = context[13];
    if( ! refalrts::ident_term(  ident_TkVariableCopy.ref(vm), context[9] ) )
      continue;
    if( ! refalrts::svar_right( context[18], context[16], context[17] ) )
      continue;
    // closed e.Index#1 as range 16
    //DEBUG: s.Mode#1: 14
    //DEBUG: s.Sample#1: 15
    //DEBUG: s.Offset#1: 10
    //DEBUG: s.Depth#1: 18
    //DEBUG: e.Index#1: 16

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Mode#1/14 e.Index#1/16 s.Depth#1/18 s.Sample#1/15 s.Offset#1/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset1 #10/7 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Inc.ref(vm) );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_close_call( context[9] );
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
    // </0 & EndOffset/4 (/7 # TkString/9 e.String#1/5 s.Offset#1/10 )/8 >/1
    if( ! refalrts::ident_term(  ident_TkString.ref(vm), context[9] ) )
      continue;
    // closed e.String#1 as range 5
    //DEBUG: s.Offset#1: 10
    //DEBUG: e.String#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.String#1/5 s.Offset#1/10 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset1 #10/7 HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Inc.ref(vm) );
    refalrts::reinit_svar( context[7], context[10] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & EndOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 >/1
  // closed e.Info#1 as range 5
  //DEBUG: s.Tag#1: 9
  //DEBUG: s.Offset#1: 10
  //DEBUG: e.Info#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & EndOffset/4 (/7 s.Tag#1/9 e.Info#1/5 s.Offset#1/10 )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Offset1 #10/1 ]] }
  refalrts::reinit_svar( context[1], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EndOffset("EndOffset", 3023103213U, 2120637161U, func_EndOffset);


static refalrts::FnResult func_gen_AddOffsets_L1S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & AddOffsets\1$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddOffsets\1$1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 >/1
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
    // </0 & AddOffsets\1$1\1/4 (/7 e.PatternVars#1/5 )/8 (/9 # HalfReuse/13 (/16 # TkVariable/18 's'/19 e.Index#3/14 s.Level#3/21 s.Offset#3/20 )/17 )/10 >/1
    context[11] = 0;
    context[12] = 0;
    if( ! refalrts::brackets_term( context[11], context[12], context[9] ) )
      continue;
    context[13] = refalrts::ident_left(  ident_HalfReuse.ref(vm), context[11], context[12] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  ident_TkVariable.ref(vm), context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( 's', context[14], context[15] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    // closed e.PatternVars#1 as range 5
    if( ! refalrts::svar_right( context[20], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_right( context[21], context[14], context[15] ) )
      continue;
    // closed e.Index#3 as range 14
    //DEBUG: e.PatternVars#1: 5
    //DEBUG: s.Offset#3: 20
    //DEBUG: s.Level#3: 21
    //DEBUG: e.Index#3: 14

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # HalfReuse/13 AsIs: (/16 AsIs: # TkVariable/18 HalfReuse: </19 } Tile{ HalfReuse: & GetSampleOffset/7 AsIs: e.PatternVars#1/5 HalfReuse: (/8 } Tile{ HalfReuse: 's'/4 } Tile{ AsIs: e.Index#3/14 } Tile{ AsIs: s.Level#3/21 } Tile{ HalfReuse: )/0 } Tile{ AsIs: >/1 } Tile{ AsIs: s.Offset#3/20 AsIs: )/17 AsIs: )/10 } Tile{ ]] }
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[7], ref_GetSampleOffset.ref(vm) );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_char( context[4], 's' );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[19] );
    refalrts::link_brackets( context[8], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[10] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[9], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddOffsets\1$1\1/4 (/7 e.PatternVars#1/5 )/8 t.Other#3/9 >/1
  // closed e.PatternVars#1 as range 5
  //DEBUG: t.Other#3: 9
  //DEBUG: e.PatternVars#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AddOffsets\1$1\1/4 (/7 e.PatternVars#1/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#3/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddOffsets_L1S1L1("AddOffsets\\1$1\\1", 3023103213U, 2120637161U, func_gen_AddOffsets_L1S1L1);


static refalrts::FnResult func_gen_AddOffsets_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & AddOffsets\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddOffsets\1/4 (/7 e.new#1/5 )/8 s.new#2/13 (/11 s.new#3/14 e.new#4/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 9
  do {
    // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # Tile/14 e.Tile#2/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_Tile.ref(vm), context[14] ) )
      continue;
    // closed e.PatternVars#1 as range 5
    // closed e.Tile#2 as range 9
    //DEBUG: s.Offset#2: 13
    //DEBUG: e.PatternVars#1: 5
    //DEBUG: e.Tile#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Offset#2/13 AsIs: (/11 AsIs: # Tile/14 } </15 & Map/16 Tile{ HalfReuse: [*]/0 Reuse: & AddOffsets\1$1\1/4 AsIs: (/7 AsIs: e.PatternVars#1/5 AsIs: )/8 } {*}/17 Tile{ AsIs: e.Tile#2/9 } Tile{ HalfReuse: >/12 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( vm, context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[16], ref_Map.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( vm, context[17], context[0] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_AddOffsets_L1S1L1.ref(vm) );
    refalrts::reinit_close_call( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[15] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::use( res );
    refalrts::wrap_closure( context[17] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AddOffsets\1/4 (/7 e.new#5/5 )/8 s.new#6/13 (/11 # TkVariable/14 s.new#7/17 e.new#8/15 s.new#9/18 )/12 >/1
    context[15] = context[9];
    context[16] = context[10];
    if( ! refalrts::ident_term(  ident_TkVariable.ref(vm), context[14] ) )
      continue;
    // closed e.new#5 as range 5
    if( ! refalrts::svar_left( context[17], context[15], context[16] ) )
      continue;
    if( ! refalrts::svar_right( context[18], context[15], context[16] ) )
      continue;
    // closed e.new#8 as range 15
    do {
      // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkVariable/14 's'/17 e.Index#2/15 s.Level#2/18 )/12 >/1
      if( ! refalrts::char_term( 's', context[17] ) )
        continue;
      // closed e.PatternVars#1 as range 5
      // closed e.Index#2 as range 15
      //DEBUG: s.Offset#2: 13
      //DEBUG: s.Level#2: 18
      //DEBUG: e.PatternVars#1: 5
      //DEBUG: e.Index#2: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 1/19 >/20 Tile{ HalfReuse: (/8 } # TkVariableCopy/21 </22 & GetSampleOffset/23 Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: (/14 AsIs: 's'/17 AsIs: e.Index#2/15 AsIs: s.Level#2/18 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
      if( ! refalrts::alloc_number( vm, context[19], 1UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[21], ident_TkVariableCopy.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[23], ref_GetSampleOffset.ref(vm) ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_Add.ref(vm) );
      refalrts::reinit_svar( context[7], context[13] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_open_bracket( context[14] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[14], context[12] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[11] );
      res = refalrts::splice_evar( res, context[14], context[1] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkVariable/14 't'/17 e.Index#2/15 s.Level#2/18 )/12 >/1
      if( ! refalrts::char_term( 't', context[17] ) )
        continue;
      // closed e.PatternVars#1 as range 5
      // closed e.Index#2 as range 15
      //DEBUG: s.Offset#2: 13
      //DEBUG: s.Level#2: 18
      //DEBUG: e.PatternVars#1: 5
      //DEBUG: e.Index#2: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 2/19 >/20 Tile{ HalfReuse: (/8 } # TkVariableCopy/21 </22 & GetSampleOffset/23 Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: (/14 AsIs: 't'/17 AsIs: e.Index#2/15 AsIs: s.Level#2/18 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
      if( ! refalrts::alloc_number( vm, context[19], 2UL ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[21], ident_TkVariableCopy.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[22] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[23], ref_GetSampleOffset.ref(vm) ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[4], ref_Add.ref(vm) );
      refalrts::reinit_svar( context[7], context[13] );
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_open_bracket( context[14] );
      refalrts::reinit_close_bracket( context[11] );
      refalrts::link_brackets( context[8], context[11] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[22] );
      refalrts::link_brackets( context[14], context[12] );
      refalrts::push_stack( vm, context[20] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[13], context[11] );
      res = refalrts::splice_evar( res, context[14], context[1] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[21], context[23] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkVariable/14 'e'/17 e.Index#2/15 s.Level#2/18 )/12 >/1
    if( ! refalrts::char_term( 'e', context[17] ) )
      continue;
    // closed e.PatternVars#1 as range 5
    // closed e.Index#2 as range 15
    //DEBUG: s.Offset#2: 13
    //DEBUG: s.Level#2: 18
    //DEBUG: e.PatternVars#1: 5
    //DEBUG: e.Index#2: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Add/4 HalfReuse: s.Offset2 #13/7 } 2/19 >/20 Tile{ HalfReuse: (/8 } # TkVariableCopy/21 </22 & GetSampleOffset/23 Tile{ AsIs: e.PatternVars#1/5 } Tile{ HalfReuse: (/14 AsIs: 'e'/17 AsIs: e.Index#2/15 AsIs: s.Level#2/18 AsIs: )/12 AsIs: >/1 } Tile{ AsIs: s.Offset#2/13 HalfReuse: )/11 } Tile{ ]] }
    if( ! refalrts::alloc_number( vm, context[19], 2UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( vm, context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( vm, context[21], ident_TkVariableCopy.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[23], ref_GetSampleOffset.ref(vm) ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Add.ref(vm) );
    refalrts::reinit_svar( context[7], context[13] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::link_brackets( context[8], context[11] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[22] );
    refalrts::link_brackets( context[14], context[12] );
    refalrts::push_stack( vm, context[20] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[11] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 # TkString/14 e.String#2/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_TkString.ref(vm), context[14] ) )
      continue;
    // closed e.PatternVars#1 as range 5
    // closed e.String#2 as range 9
    //DEBUG: s.Offset#2: 13
    //DEBUG: e.PatternVars#1: 5
    //DEBUG: e.String#2: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} e.PatternVars#1/5 {REMOVED TILE} s.Offset#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc2/4 HalfReuse: s.Offset2 #13/7 } Tile{ HalfReuse: >/8 } Tile{ AsIs: (/11 AsIs: # TkString/14 AsIs: e.String#2/9 HalfReuse: s.Offset2 #13/12 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_Inc2.ref(vm) );
    refalrts::reinit_svar( context[7], context[13] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_svar( context[12], context[13] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( vm, context[8] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::splice_to_freelist_open( vm, context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddOffsets\1/4 (/7 e.PatternVars#1/5 )/8 s.Offset#2/13 (/11 s.Tag#2/14 e.Info#2/9 )/12 >/1
  // closed e.PatternVars#1 as range 5
  // closed e.Info#2 as range 9
  //DEBUG: s.Offset#2: 13
  //DEBUG: s.Tag#2: 14
  //DEBUG: e.PatternVars#1: 5
  //DEBUG: e.Info#2: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.PatternVars#1/5 {REMOVED TILE} s.Offset#2/13 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 HalfReuse: s.Offset2 #13/7 } Tile{ HalfReuse: >/8 } Tile{ AsIs: (/11 AsIs: s.Tag#2/14 AsIs: e.Info#2/9 HalfReuse: s.Offset2 #13/12 HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], ref_Inc.ref(vm) );
  refalrts::reinit_svar( context[7], context[13] );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_svar( context[12], context[13] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( vm, context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddOffsets_L1("AddOffsets\\1", 3023103213U, 2120637161U, func_gen_AddOffsets_L1);


static refalrts::FnResult func_AddOffsets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & AddOffsets/4 s.ContextOffset#1/5 (/8 e.PatternVars#1/6 )/9 e.MarkedResult#1/2 >/1
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
  // closed e.PatternVars#1 as range 6
  // closed e.MarkedResult#1 as range 2
  //DEBUG: s.ContextOffset#1: 5
  //DEBUG: e.PatternVars#1: 6
  //DEBUG: e.MarkedResult#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } [*]/10 & AddOffsets\1/11 Tile{ AsIs: (/8 AsIs: e.PatternVars#1/6 AsIs: )/9 } {*}/12 Tile{ AsIs: s.ContextOffset#1/5 } </13 & CollectStrings/14 Tile{ AsIs: e.MarkedResult#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_gen_AddOffsets_L1.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[12], context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_CollectStrings.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_MapReduce.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddOffsets("AddOffsets", 3023103213U, 2120637161U, func_AddOffsets);


static refalrts::FnResult func_GetSampleOffset(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & GetSampleOffset/4 e.PatternVars-B#1/11 (/17 s.Mode#1/19 (/22 e.Index#1/24 s.Level#1/26 )/23 e.Offsets#1/15 s.SampleOffset#1/27 )/18 e.PatternVars-E#1/13 (/7 s.Mode#1/9 e.Index#1/5 s.Level#1/10 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Index#1 as range 5
  context[11] = 0;
  context[12] = 0;
  refalrts::start_e_loop(vm);
  do {
    context[13] = context[2];
    context[14] = context[3];
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    if( ! refalrts::repeated_stvar_left( vm, context[19], context[9], context[15], context[16] ) )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[15], context[16] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    if( ! refalrts::repeated_evar_left( vm, context[24], context[25], context[5], context[6], context[20], context[21] ) )
      continue;
    if( ! refalrts::repeated_stvar_left( vm, context[26], context[10], context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.PatternVars-E#1 as range 13
    if( ! refalrts::svar_right( context[27], context[15], context[16] ) )
      continue;
    // closed e.Offsets#1 as range 15
    //DEBUG: s.Mode#1: 9
    //DEBUG: s.Level#1: 10
    //DEBUG: e.Index#1: 5
    //DEBUG: e.PatternVars-B#1: 11
    //DEBUG: e.PatternVars-E#1: 13
    //DEBUG: s.SampleOffset#1: 27
    //DEBUG: e.Offsets#1: 15

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & GetSampleOffset/4 e.PatternVars-B#1/11 (/17 s.Mode#1/19 (/22 e.Index#1/24 s.Level#1/26 )/23 e.Offsets#1/15 s.SampleOffset#1/27 )/18 e.PatternVars-E#1/13 (/7 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Mode#1/9 AsIs: e.Index#1/5 AsIs: s.Level#1/10 HalfReuse: s.SampleOffset1 #27/8 } Tile{ ]] }
    refalrts::reinit_svar( context[8], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( refalrts::open_evar_advance( context[11], context[12], context[2], context[3] ) );
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_GetSampleOffset("GetSampleOffset", 3023103213U, 2120637161U, func_GetSampleOffset);


//End of file
