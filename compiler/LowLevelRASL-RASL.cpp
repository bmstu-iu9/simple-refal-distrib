// This file automatically generated from 'LowLevelRASL-RASL.sref'
// Don't edit! Edit 'LowLevelRASL-RASL.sref' and recompile it

#include "refalrts.h"

static const refalrts::RefalIdentifier ident_AlgLeft = refalrts::ident_from_static("AlgLeft");
static const refalrts::RefalIdentifier ident_CmdADT = refalrts::ident_from_static("CmdADT");
static const refalrts::RefalIdentifier ident_CmdADTSave = refalrts::ident_from_static("CmdADTSave");
static const refalrts::RefalIdentifier ident_CmdComment = refalrts::ident_from_static("CmdComment");
static const refalrts::RefalIdentifier ident_CmdCreateElem = refalrts::ident_from_static("CmdCreateElem");
static const refalrts::RefalIdentifier ident_CmdDeclaration = refalrts::ident_from_static("CmdDeclaration");
static const refalrts::RefalIdentifier ident_CmdDefineIdent = refalrts::ident_from_static("CmdDefineIdent");
static const refalrts::RefalIdentifier ident_CmdEPrepare = refalrts::ident_from_static("CmdEPrepare");
static const refalrts::RefalIdentifier ident_CmdEStart = refalrts::ident_from_static("CmdEStart");
static const refalrts::RefalIdentifier ident_CmdEmitNativeCode = refalrts::ident_from_static("CmdEmitNativeCode");
static const refalrts::RefalIdentifier ident_CmdEnum = refalrts::ident_from_static("CmdEnum");
static const refalrts::RefalIdentifier ident_CmdEnumDescr = refalrts::ident_from_static("CmdEnumDescr");
static const refalrts::RefalIdentifier ident_CmdFuncArray = refalrts::ident_from_static("CmdFuncArray");
static const refalrts::RefalIdentifier ident_CmdIdent = refalrts::ident_from_static("CmdIdent");
static const refalrts::RefalIdentifier ident_CmdIdentArray = refalrts::ident_from_static("CmdIdentArray");
static const refalrts::RefalIdentifier ident_CmdIdentSave = refalrts::ident_from_static("CmdIdentSave");
static const refalrts::RefalIdentifier ident_CmdInterpretFuncDescr = refalrts::ident_from_static("CmdInterpretFuncDescr");
static const refalrts::RefalIdentifier ident_CmdLoadConstants = refalrts::ident_from_static("CmdLoadConstants");
static const refalrts::RefalIdentifier ident_CmdName = refalrts::ident_from_static("CmdName");
static const refalrts::RefalIdentifier ident_CmdNameSave = refalrts::ident_from_static("CmdNameSave");
static const refalrts::RefalIdentifier ident_CmdNativeFuncDescr = refalrts::ident_from_static("CmdNativeFuncDescr");
static const refalrts::RefalIdentifier ident_CmdNativeFunction = refalrts::ident_from_static("CmdNativeFunction");
static const refalrts::RefalIdentifier ident_CmdNumberArray = refalrts::ident_from_static("CmdNumberArray");
static const refalrts::RefalIdentifier ident_CmdOnFailGoTo = refalrts::ident_from_static("CmdOnFailGoTo");
static const refalrts::RefalIdentifier ident_CmdOpenELoop = refalrts::ident_from_static("CmdOpenELoop");
static const refalrts::RefalIdentifier ident_CmdProfileFunction = refalrts::ident_from_static("CmdProfileFunction");
static const refalrts::RefalIdentifier ident_CmdProfilerStopSentence = refalrts::ident_from_static("CmdProfilerStopSentence");
static const refalrts::RefalIdentifier ident_CmdReserveBacktrackStack = refalrts::ident_from_static("CmdReserveBacktrackStack");
static const refalrts::RefalIdentifier ident_CmdSentence = refalrts::ident_from_static("CmdSentence");
static const refalrts::RefalIdentifier ident_CmdStringArray = refalrts::ident_from_static("CmdStringArray");
static const refalrts::RefalIdentifier ident_CmdSwap = refalrts::ident_from_static("CmdSwap");
static const refalrts::RefalIdentifier ident_CmdSwapDescr = refalrts::ident_from_static("CmdSwapDescr");
static const refalrts::RefalIdentifier ident_CmdUseRes = refalrts::ident_from_static("CmdUseRes");
static const refalrts::RefalIdentifier ident_CmdVariableDebugTable = refalrts::ident_from_static("CmdVariableDebugTable");
static const refalrts::RefalIdentifier ident_DebugInfo = refalrts::ident_from_static("DebugInfo");
static const refalrts::RefalIdentifier ident_ElIdent = refalrts::ident_from_static("ElIdent");
static const refalrts::RefalIdentifier ident_ElName = refalrts::ident_from_static("ElName");
static const refalrts::RefalIdentifier ident_ElString = refalrts::ident_from_static("ElString");
static const refalrts::RefalIdentifier ident_Funck32_namek58_ = refalrts::ident_from_static("Func name:");
static const refalrts::RefalIdentifier ident_Functionm_ToNative = refalrts::ident_from_static("Function-ToNative");
static const refalrts::RefalIdentifier ident_Functionm_ToRASL = refalrts::ident_from_static("Function-ToRASL");
static const refalrts::RefalIdentifier ident_GNm_Entry = refalrts::ident_from_static("GN-Entry");
static const refalrts::RefalIdentifier ident_Items = refalrts::ident_from_static("Items");
static const refalrts::RefalIdentifier ident_LABEL = refalrts::ident_from_static("LABEL");
static const refalrts::RefalIdentifier ident_ModuleID = refalrts::ident_from_static("ModuleID");
static const refalrts::RefalIdentifier ident_NoDebugInfo = refalrts::ident_from_static("NoDebugInfo");
static const refalrts::RefalIdentifier ident_RASL = refalrts::ident_from_static("RASL");
static refalrts::ExternalReference ref_AddBacktrackStackAllocationCommand("AddBacktrackStackAllocationCommand", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_AddBacktrackStackAllocationCommand_B1("AddBacktrackStackAllocationCommand:1", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_AddBacktrackStackAllocationCommand_L1("AddBacktrackStackAllocationCommand\\1", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_AddFunctionNameComment("AddFunctionNameComment", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_AddFunctionNameComment_L1("AddFunctionNameComment\\1", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_ClassifyItems("ClassifyItems", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_ConvertInterpretCommands("ConvertInterpretCommands", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_ConvertOneInterpretCommand("ConvertOneInterpretCommand", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_ConvertOneInterpretCommand_S1A1("ConvertOneInterpretCommand$1=1", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_ConvertOneInterpretCommand_S2A1("ConvertOneInterpretCommand$2=1", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_ConvertOneInterpretCommandm_Simple("ConvertOneInterpretCommand-Simple", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_GlueFunctionRASLs("GlueFunctionRASLs", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_GlueFunctionRASLs_L1("GlueFunctionRASLs\\1", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_LowLevelRASLm_RASL("LowLevelRASL-RASL", 0U, 0U);
static refalrts::ExternalReference ref_gen_LowLevelRASLm_RASL_A1("LowLevelRASL-RASL=1", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_LowLevelRASLm_RASL_A2("LowLevelRASL-RASL=2", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_OutlineConstants("OutlineConstants", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_PrepareCommonRASL("PrepareCommonRASL", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_PrepareCommonRASL_A1("PrepareCommonRASL=1", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_PrepareCommonRASL_A2("PrepareCommonRASL=2", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_PrepareFunctionsRASL("PrepareFunctionsRASL", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_PrepareFunctionsRASL_S1A1("PrepareFunctionsRASL$1=1", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_PrepareFunctionsRASL_S1A2("PrepareFunctionsRASL$1=2", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_PrepareFunctionsRASL_S1A3("PrepareFunctionsRASL$1=3", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_PrepareFunctionsRASL_S1A4("PrepareFunctionsRASL$1=4", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_RemoveDebugInfo("RemoveDebugInfo", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_RemoveDebugInfoRec("RemoveDebugInfoRec", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_RemoveNumber("RemoveNumber", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_SetFunctionsScopeClass("SetFunctionsScopeClass", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_SetFunctionsScopeClass_A1("SetFunctionsScopeClass=1", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_gen_SetFunctionsScopeClass_A1L1("SetFunctionsScopeClass=1\\1", 1202773828U, 297103057U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);

static refalrts::FnResult func_gen_LowLevelRASLm_RASL_A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & LowLevelRASL-RASL=2/4 s.Hash1#1/5 s.Hash2#1/6 (/9 e.FuncScopeClass#2/7 )/10 s.MaxLabel#3/11 e.Definitions#3/2 >/1
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
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Definitions#3 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.FuncScopeClass#2: 7
  //DEBUG: s.MaxLabel#3: 11
  //DEBUG: e.Definitions#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MaxLabel#3/11 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/12 Tile{ HalfReuse: (/0 HalfReuse: # ModuleID/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: )/9 } </13 & PrepareCommonRASL/14 (/15 Tile{ AsIs: e.FuncScopeClass#2/7 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Definitions#3/2 } >/16 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_PrepareCommonRASL.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_ModuleID );
  refalrts::reinit_close_bracket( context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[15], context[10] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_RASL_A2("LowLevelRASL-RASL=2", 1202773828U, 297103057U, func_gen_LowLevelRASLm_RASL_A2);


static refalrts::FnResult func_gen_LowLevelRASLm_RASL_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & LowLevelRASL-RASL=1/4 s.Hash1#1/5 s.Hash2#1/6 s.DebugInfo#1/7 (/10 e.FuncScopeClass#2/8 )/11 e.Definitions#2/2 >/1
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
  // closed e.FuncScopeClass#2 as range 8
  // closed e.Definitions#2 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: s.DebugInfo#1: 7
  //DEBUG: e.FuncScopeClass#2: 8
  //DEBUG: e.Definitions#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL-RASL=2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: (/10 AsIs: e.FuncScopeClass#2/8 AsIs: )/11 } {*}/13 </14 & MapReduce/15 (/16 & PrepareFunctionsRASL/17 Tile{ AsIs: s.DebugInfo#1/7 } )/18 0/19 Tile{ AsIs: e.Definitions#2/2 } >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[13], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_PrepareFunctionsRASL.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[19], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_LowLevelRASLm_RASL_A2.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[16], context[18] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_RASL_A1("LowLevelRASL-RASL=1", 1202773828U, 297103057U, func_gen_LowLevelRASLm_RASL_A1);


static refalrts::FnResult func_LowLevelRASLm_RASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & LowLevelRASL-RASL/4 s.DebugInfo#1/5 s.Hash1#1/6 s.Hash2#1/7 e.Items#1/2 >/1
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
  // closed e.Items#1 as range 2
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#1: 6
  //DEBUG: s.Hash2#1: 7
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & LowLevelRASL-RASL=1/8 Tile{ AsIs: s.Hash1#1/6 AsIs: s.Hash2#1/7 } Tile{ AsIs: s.DebugInfo#1/5 } {*}/9 </10 & MapReduce/11 & ClassifyItems/12 (/13 )/14 Tile{ AsIs: e.Items#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[8], ref_gen_LowLevelRASLm_RASL_A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[9], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_ClassifyItems.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[10] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LowLevelRASLm_RASL("LowLevelRASL-RASL", 0U, 0U, func_LowLevelRASLm_RASL);


static refalrts::FnResult func_ClassifyItems(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: ( e.$ ) ( s.$ e.$ )
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ )
  // </0 & ClassifyItems/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
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
  // closed e.idxB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  do {
    // ( e.idx ) ( # Function-ToRASL s.idx ( e.idx ) e.idx )
    // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/14 )/8 (/11 # Function-ToRASL/13 s.ScopeClass#1/18 (/21 e.Name#1/19 )/22 e.FunctionBody#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_Functionm_ToRASL, context[13] ) )
      continue;
    // closed e.FuncScopeClass#1 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[16], context[17] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Name#1 as range 19
    // closed e.FunctionBody#1 as range 16
    //DEBUG: e.FuncScopeClass#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 19
    //DEBUG: e.FunctionBody#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/14 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #18/4 } e.Name#1/19/23 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function-ToRASL/13 AsIs: s.ScopeClass#1/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 AsIs: e.FunctionBody#1/16 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[23], context[24], context[19], context[20]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[18] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Function-ToNative s.idx ( e.idx ) e.idx )
    // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/14 )/8 (/11 # Function-ToNative/13 s.ScopeClass#1/18 (/21 e.Name#1/19 )/22 e.Commands#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_Functionm_ToNative, context[13] ) )
      continue;
    // closed e.FuncScopeClass#1 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[16], context[17] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Name#1 as range 19
    // closed e.Commands#1 as range 16
    //DEBUG: e.FuncScopeClass#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 19
    //DEBUG: e.Commands#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & ClassifyItems/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Commands#1/16 )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/14 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #18/21 AsIs: e.Name#1/19 AsIs: )/22 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdNativeFuncDescr/13 AsIs: s.ScopeClass#1/18 } e.Name#1/19/23 Tile{ HalfReuse: )/1 ]] }
    if (! refalrts::copy_evar(context[23], context[24], context[19], context[20]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[21], context[18] );
    refalrts::update_ident( context[13], ident_CmdNativeFuncDescr );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[8], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # CmdNativeFunction s.idx ( e.idx ) t.idx e.idx )
    // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/14 )/8 (/11 # CmdNativeFunction/13 s.ScopeClass#1/18 (/21 e.Name#1/19 )/22 t.SrcPos#1/23 e.Code#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdNativeFunction, context[13] ) )
      continue;
    // closed e.FuncScopeClass#1 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[16], context[17] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Name#1 as range 19
    context[24] = refalrts::tvar_left( context[23], context[16], context[17] );
    if( ! context[24] )
      continue;
    // closed e.Code#1 as range 16
    //DEBUG: e.FuncScopeClass#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 19
    //DEBUG: t.SrcPos#1: 23
    //DEBUG: e.Code#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & ClassifyItems/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/23 e.Code#1/16 )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/14 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #18/21 AsIs: e.Name#1/19 AsIs: )/22 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdNativeFuncDescr/13 AsIs: s.ScopeClass#1/18 } e.Name#1/19/25 Tile{ HalfReuse: )/1 ]] }
    if (! refalrts::copy_evar(context[25], context[26], context[19], context[20]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[21], context[18] );
    refalrts::update_ident( context[13], ident_CmdNativeFuncDescr );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[8], context[18] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # CmdEnum s.idx e.idx )
    // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/14 )/8 (/11 # CmdEnum/13 s.ScopeClass#1/18 e.Name#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdEnum, context[13] ) )
      continue;
    // closed e.FuncScopeClass#1 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: e.FuncScopeClass#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/14 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #18/4 } e.Name#1/16/19 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdEnumDescr/13 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/16 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[19], context[20], context[16], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[18] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::update_ident( context[13], ident_CmdEnumDescr );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # CmdSwap s.idx e.idx )
    // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/14 )/8 (/11 # CmdSwap/13 s.ScopeClass#1/18 e.Name#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdSwap, context[13] ) )
      continue;
    // closed e.FuncScopeClass#1 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: e.FuncScopeClass#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/14 } Tile{ AsIs: (/7 } Tile{ HalfReuse: s.ScopeClass1 #18/4 } e.Name#1/16/19 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 Reuse: # CmdSwapDescr/13 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/16 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[19], context[20], context[16], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_svar( context[4], context[18] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::update_ident( context[13], ident_CmdSwapDescr );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # CmdDeclaration s.idx e.idx )
    // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/14 )/8 (/11 # CmdDeclaration/13 s.ScopeClass#1/18 e.Name#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdDeclaration, context[13] ) )
      continue;
    // closed e.FuncScopeClass#1 as range 14
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: e.FuncScopeClass#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & ClassifyItems/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.FuncScopeClass#1/14 } Tile{ HalfReuse: (/13 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/16 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[13], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # CmdDefineIdent e.idx )
    // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/14 )/8 (/11 # CmdDefineIdent/13 e.Name#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdDefineIdent, context[13] ) )
      continue;
    // closed e.FuncScopeClass#1 as range 14
    // closed e.Name#1 as range 16
    //DEBUG: e.FuncScopeClass#1: 14
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ClassifyItems/4 {REMOVED TILE} (/11 # CmdDefineIdent/13 e.Name#1/16 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.FuncScopeClass#1/14 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( # CmdEmitNativeCode t.idx e.idx )
  // </0 & ClassifyItems/4 (/7 e.FuncScopeClass#1/14 )/8 (/11 # CmdEmitNativeCode/13 t.SrcPos#1/18 e.Code#1/16 )/12 >/1
  context[14] = context[5];
  context[15] = context[6];
  context[16] = context[9];
  context[17] = context[10];
  if( ! refalrts::ident_term(  ident_CmdEmitNativeCode, context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FuncScopeClass#1 as range 14
  context[19] = refalrts::tvar_left( context[18], context[16], context[17] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 16
  //DEBUG: e.FuncScopeClass#1: 14
  //DEBUG: t.SrcPos#1: 18
  //DEBUG: e.Code#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ClassifyItems/4 {REMOVED TILE} (/11 # CmdEmitNativeCode/13 t.SrcPos#1/18 e.Code#1/16 )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.FuncScopeClass#1/14 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ClassifyItems("ClassifyItems", 1202773828U, 297103057U, func_ClassifyItems);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextLabel3 #5/0 HalfReuse: (/4 } # CmdInterpretFuncDescr/11 Tile{ AsIs: s.ScopeClass#1/6 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } (/12 # LABEL/13 Tile{ AsIs: s.NextLabel#3/5 } )/14 (/15 # CmdProfileFunction/16 )/17 (/18 # CmdLoadConstants/19 )/20 Tile{ AsIs: e.RASLCommands#5/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_ident( context[11], ident_CmdInterpretFuncDescr ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], ident_LABEL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[16], ident_CmdProfileFunction ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[19], ident_CmdLoadConstants ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
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

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A4("PrepareFunctionsRASL$1=4", 1202773828U, 297103057U, func_gen_PrepareFunctionsRASL_S1A4);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: [*]/0 Reuse: & PrepareFunctionsRASL$1=4/4 AsIs: s.NextLabel#3/5 AsIs: s.ScopeClass#1/6 AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } {*}/12 </13 & AddFunctionNameComment/14 (/15 e.Name#1/7/16 )/18 Tile{ AsIs: e.RASLCommands#4/2 } >/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[12], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_AddFunctionNameComment.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[16], context[17], context[7], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_PrepareFunctionsRASL_S1A4.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[13] );
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

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A3("PrepareFunctionsRASL$1=3", 1202773828U, 297103057U, func_gen_PrepareFunctionsRASL_S1A3);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextLabel#3/10 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 [*]/12 Tile{ HalfReuse: & PrepareFunctionsRASL$1=3/0 HalfReuse: s.NextLabel3 #10/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } {*}/13 </14 & AddBacktrackStackAllocationCommand/15 Tile{ AsIs: e.RASLCommands#3/2 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[13], context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_AddBacktrackStackAllocationCommand.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_gen_PrepareFunctionsRASL_S1A3.ref.function );
  refalrts::reinit_svar( context[4], context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A2("PrepareFunctionsRASL$1=2", 1202773828U, 297103057U, func_gen_PrepareFunctionsRASL_S1A2);


static refalrts::FnResult func_gen_PrepareFunctionsRASL_S1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: [*]/0 Reuse: & PrepareFunctionsRASL$1=2/4 AsIs: s.ScopeClass#1/5 AsIs: (/8 AsIs: e.Name#1/6 AsIs: )/9 } {*}/12 </13 & ConvertInterpretCommands/14 </15 & Inc/16 Tile{ AsIs: s.NextLabel#1/10 } >/17 Tile{ AsIs: e.FunctionBody#2/2 } >/18 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[12], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_ConvertInterpretCommands.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_Inc.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_PrepareFunctionsRASL_S1A2.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[15] );
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

static refalrts::NativeReference nat_ref_gen_PrepareFunctionsRASL_S1A1("PrepareFunctionsRASL$1=1", 1202773828U, 297103057U, func_gen_PrepareFunctionsRASL_S1A1);


static refalrts::FnResult func_PrepareFunctionsRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: s.$ s.$ t.$
  //GLOBAL GEN: s.$ s.$ t.$
  // </0 & PrepareFunctionsRASL/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx s.idx ( # Function-ToRASL s.idx ( e.idx ) e.idx )
    // </0 & PrepareFunctionsRASL/4 s.DebugInfo#1/5 s.NextLabel#1/6 (/7 # Function-ToRASL/11 s.ScopeClass#1/12 (/15 e.Name#1/13 )/16 e.FunctionBody#1/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_Functionm_ToRASL, context[9], context[10] );
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/7 HalfReuse: & PrepareFunctionsRASL$1=1/11 AsIs: s.ScopeClass#1/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: s.NextLabel#1/6 } {*}/18 Tile{ AsIs: </0 Reuse: & RemoveDebugInfo/4 AsIs: s.DebugInfo#1/5 } Tile{ AsIs: e.FunctionBody#1/9 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[18], context[7] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[7] );
    refalrts::reinit_name( context[11], ref_gen_PrepareFunctionsRASL_S1A1.ref.function );
    refalrts::update_name( context[4], ref_RemoveDebugInfo.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
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
  refalrts::stop_sentence();

  // s.idx s.idx t.idx
  // </0 & PrepareFunctionsRASL/4 s.DebugInfo#1/5 s.NextLabel#1/6 t.OtherItem#1/7 >/1
  //DEBUG: t.OtherItem#1: 7
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.NextLabel#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & PrepareFunctionsRASL/4 s.DebugInfo#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextLabel#1/6 AsIs: t.OtherItem#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareFunctionsRASL("PrepareFunctionsRASL", 1202773828U, 297103057U, func_PrepareFunctionsRASL);


static refalrts::FnResult func_RemoveDebugInfo(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & RemoveDebugInfo/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # DebugInfo e.idx
    // </0 & RemoveDebugInfo/4 # DebugInfo/5 e.FunctionBody#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_DebugInfo, context[5] ) )
      continue;
    // closed e.FunctionBody#1 as range 6
    //DEBUG: e.FunctionBody#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RemoveDebugInfo/4 # DebugInfo/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.FunctionBody#1/6 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # NoDebugInfo e.idx
  // </0 & RemoveDebugInfo/4 # NoDebugInfo/5 e.FunctionBody#1/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_NoDebugInfo, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FunctionBody#1 as range 6
  //DEBUG: e.FunctionBody#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: & RemoveDebugInfoRec/5 AsIs: e.FunctionBody#1/6 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[5], ref_RemoveDebugInfoRec.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveDebugInfo("RemoveDebugInfo", 1202773828U, 297103057U, func_RemoveDebugInfo);


static refalrts::FnResult func_RemoveDebugInfoRec(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & RemoveDebugInfoRec/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( # CmdSentence e.idx ) e.idx
    // </0 & RemoveDebugInfoRec/4 (/9 # CmdSentence/11 e.SubCommands#1/7 )/10 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_CmdSentence, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.SubCommands#1 as range 7
    // closed e.Tail#1 as range 5
    //DEBUG: e.SubCommands#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdSentence/4 HalfReuse: </9 HalfReuse: & RemoveDebugInfoRec/11 AsIs: e.SubCommands#1/7 HalfReuse: >/10 } )/12 </13 & RemoveDebugInfoRec/14 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[14], ref_RemoveDebugInfoRec.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdSentence );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[11], ref_RemoveDebugInfoRec.ref.function );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdOpenELoop # AlgLeft s.idx s.idx e.idx ) e.idx
    // </0 & RemoveDebugInfoRec/4 (/9 # CmdOpenELoop/11 # AlgLeft/12 s.BracketNum#1/13 s.VarNumber#1/14 e.SubCommands#1/7 )/10 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_CmdOpenELoop, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::ident_left(  ident_AlgLeft, context[7], context[8] );
    if( ! context[12] )
      continue;
    // closed e.Tail#1 as range 5
    if( ! refalrts::svar_left( context[13], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[7], context[8] ) )
      continue;
    // closed e.SubCommands#1 as range 7
    //DEBUG: e.Tail#1: 5
    //DEBUG: s.BracketNum#1: 13
    //DEBUG: s.VarNumber#1: 14
    //DEBUG: e.SubCommands#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdOpenELoop/11 AsIs: # AlgLeft/12 AsIs: s.BracketNum#1/13 AsIs: s.VarNumber#1/14 } Tile{ AsIs: </0 AsIs: & RemoveDebugInfoRec/4 } Tile{ AsIs: e.SubCommands#1/7 } >/15 )/16 </17 Tile{ HalfReuse: & RemoveDebugInfoRec/10 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[10], ref_RemoveDebugInfoRec.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[9], context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdVariableDebugTable s.idx e.idx s.idx s.idx ) e.idx
    // </0 & RemoveDebugInfoRec/4 (/9 # CmdVariableDebugTable/11 s.Mode#1/12 e.Index#1/7 s.Depth#1/14 s.Offset#1/13 )/10 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_CmdVariableDebugTable, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Tail#1 as range 5
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[13], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[14], context[7], context[8] ) )
      continue;
    // closed e.Index#1 as range 7
    //DEBUG: e.Tail#1: 5
    //DEBUG: s.Mode#1: 12
    //DEBUG: s.Offset#1: 13
    //DEBUG: s.Depth#1: 14
    //DEBUG: e.Index#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & RemoveDebugInfoRec/4 (/9 # CmdVariableDebugTable/11 s.Mode#1/12 e.Index#1/7 s.Depth#1/14 s.Offset#1/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & RemoveDebugInfoRec/10 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
    refalrts::reinit_name( context[10], ref_RemoveDebugInfoRec.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx e.idx
    // </0 & RemoveDebugInfoRec/4 t.Command#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: t.Command#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.Command#1/7 } Tile{ AsIs: </0 AsIs: & RemoveDebugInfoRec/4 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & RemoveDebugInfoRec/4 >/1
  context[5] = context[2];
  context[6] = context[3];
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemoveDebugInfoRec/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveDebugInfoRec("RemoveDebugInfoRec", 1202773828U, 297103057U, func_RemoveDebugInfoRec);


static refalrts::FnResult func_ConvertInterpretCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 Tile{ HalfReuse: & MapReduce/0 Reuse: & ConvertOneInterpretCommand/4 AsIs: s.NextLabel#1/5 AsIs: e.Commands#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_MapReduce.ref.function );
  refalrts::update_name( context[4], ref_ConvertOneInterpretCommand.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertInterpretCommands("ConvertInterpretCommands", 1202773828U, 297103057U, func_ConvertInterpretCommands);


static refalrts::FnResult func_ConvertOneInterpretCommandm_Simple(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & ConvertOneInterpretCommand-Simple/4 t.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( # CmdComment e.idx )
    // </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdComment/9 e.Text#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CmdComment, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.Text#1 as range 7
    //DEBUG: e.Text#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdComment/9 e.Text#1/7 )/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdUseRes )
    // </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdUseRes/9 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CmdUseRes, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdUseRes/9 )/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdVariableDebugTable s.idx e.idx s.idx s.idx )
    // </0 & ConvertOneInterpretCommand-Simple/4 (/5 # CmdVariableDebugTable/9 s.Mode#1/10 e.Index#1/7 s.Depth#1/12 s.Offset#1/11 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CmdVariableDebugTable, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_right( context[12], context[7], context[8] ) )
      continue;
    // closed e.Index#1 as range 7
    //DEBUG: s.Mode#1: 10
    //DEBUG: s.Offset#1: 11
    //DEBUG: s.Depth#1: 12
    //DEBUG: e.Index#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # CmdVariableDebugTable/9 AsIs: s.Mode#1/10 } '.'/13 Tile{ AsIs: e.Index#1/7 } '#'/14 Tile{ AsIs: </0 Reuse: & StrFromInt/4 } Tile{ AsIs: s.Depth#1/12 } Tile{ AsIs: >/1 } Tile{ AsIs: s.Offset#1/11 AsIs: )/6 } Tile{ ]] }
    if( ! refalrts::alloc_char( context[13], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[14], '#' ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_StrFromInt.ref.function );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[6] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[5], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & ConvertOneInterpretCommand-Simple/4 t.Command#1/5 >/1
  //DEBUG: t.Command#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ConvertOneInterpretCommand-Simple/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Command#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertOneInterpretCommandm_Simple("ConvertOneInterpretCommand-Simple", 1202773828U, 297103057U, func_ConvertOneInterpretCommandm_Simple);


static refalrts::FnResult func_gen_ConvertOneInterpretCommand_S1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.NextLabel#2/5 } >/6 (/7 # CmdOnFailGoTo/8 s.NextLabel#2/5/9 )/10 Tile{ AsIs: e.SubCommands#2/2 } (/11 # LABEL/12 s.NextLabel#2/5/13 )/14 (/15 # CmdProfilerStopSentence/16 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_close_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], ident_CmdOnFailGoTo ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[9], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[12], ident_LABEL ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[13], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[16], ident_CmdProfilerStopSentence ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Inc.ref.function );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[11], context[14] );
  refalrts::link_brackets( context[7], context[10] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ConvertOneInterpretCommand_S1A1("ConvertOneInterpretCommand$1=1", 1202773828U, 297103057U, func_gen_ConvertOneInterpretCommand_S1A1);


static refalrts::FnResult func_gen_ConvertOneInterpretCommand_S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextLabel#2/7 } Tile{ HalfReuse: (/0 HalfReuse: # CmdEPrepare/4 AsIs: s.BracketNum#1/5 AsIs: s.VarNumber#1/6 } )/8 (/9 Tile{ HalfReuse: # CmdEStart/1 } s.BracketNum#1/5/10 s.VarNumber#1/6/11 )/12 Tile{ AsIs: e.SubCommands#2/2 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[11], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_CmdEPrepare );
  refalrts::reinit_ident( context[1], ident_CmdEStart );
  refalrts::link_brackets( context[9], context[12] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ConvertOneInterpretCommand_S2A1("ConvertOneInterpretCommand$2=1", 1202773828U, 297103057U, func_gen_ConvertOneInterpretCommand_S2A1);


static refalrts::FnResult func_ConvertOneInterpretCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: s.$ t.$
  //GLOBAL GEN: s.$ t.$
  // </0 & ConvertOneInterpretCommand/4 s.idx#0/5 t.idxV#0/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx ( # CmdSentence e.idx )
    // </0 & ConvertOneInterpretCommand/4 s.NextLabel#1/5 (/6 # CmdSentence/10 e.SubCommands#1/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  ident_CmdSentence, context[8], context[9] );
    if( ! context[10] )
      continue;
    // closed e.SubCommands#1 as range 8
    //DEBUG: s.NextLabel#1: 5
    //DEBUG: e.SubCommands#1: 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.NextLabel#1/5 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ConvertOneInterpretCommand$1=1/4 } </11 Tile{ HalfReuse: & ConvertInterpretCommands/6 HalfReuse: s.NextLabel1 #5/10 AsIs: e.SubCommands#1/8 HalfReuse: >/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_ConvertOneInterpretCommand_S1A1.ref.function );
    refalrts::reinit_name( context[6], ref_ConvertInterpretCommands.ref.function );
    refalrts::reinit_svar( context[10], context[5] );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # CmdOpenELoop # AlgLeft s.idx s.idx e.idx )
    // </0 & ConvertOneInterpretCommand/4 s.NextLabel#1/5 (/6 # CmdOpenELoop/10 # AlgLeft/11 s.BracketNum#1/12 s.VarNumber#1/13 e.SubCommands#1/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  ident_CmdOpenELoop, context[8], context[9] );
    if( ! context[10] )
      continue;
    context[11] = refalrts::ident_left(  ident_AlgLeft, context[8], context[9] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[8], context[9] ) )
      continue;
    // closed e.SubCommands#1 as range 8
    //DEBUG: s.NextLabel#1: 5
    //DEBUG: s.BracketNum#1: 12
    //DEBUG: s.VarNumber#1: 13
    //DEBUG: e.SubCommands#1: 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </6 HalfReuse: [*]/10 HalfReuse: & ConvertOneInterpretCommand$2=1/11 AsIs: s.BracketNum#1/12 AsIs: s.VarNumber#1/13 } {*}/14 Tile{ AsIs: </0 Reuse: & ConvertInterpretCommands/4 AsIs: s.NextLabel#1/5 } Tile{ AsIs: e.SubCommands#1/8 } Tile{ HalfReuse: >/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_unwrapped_closure( context[14], context[10] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[6] );
    refalrts::reinit_closure_head( context[10] );
    refalrts::reinit_name( context[11], ref_gen_ConvertOneInterpretCommand_S2A1.ref.function );
    refalrts::update_name( context[4], ref_ConvertInterpretCommands.ref.function );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[6], context[13] );
    refalrts::use( res );
    refalrts::wrap_closure( context[14] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx t.idx
  // </0 & ConvertOneInterpretCommand/4 s.NextLabel#1/5 t.Command#1/6 >/1
  //DEBUG: t.Command#1: 6
  //DEBUG: s.NextLabel#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.NextLabel#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextLabel1 #5/0 HalfReuse: </4 } & ConvertOneInterpretCommand-Simple/8 Tile{ AsIs: t.Command#1/6 AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[8], ref_ConvertOneInterpretCommandm_Simple.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_call( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[6];
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertOneInterpretCommand("ConvertOneInterpretCommand", 1202773828U, 297103057U, func_ConvertOneInterpretCommand);


static refalrts::FnResult func_gen_AddBacktrackStackAllocationCommand_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & AddBacktrackStackAllocationCommand:1/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // 0 e.idx
    // </0 & AddBacktrackStackAllocationCommand:1/4 0/5 e.Commands#2/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::number_term( 0UL, context[5] ) )
      continue;
    // closed e.Commands#2 as range 6
    //DEBUG: e.Commands#2: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AddBacktrackStackAllocationCommand:1/4 0/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Commands#2/6 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx e.idx
  // </0 & AddBacktrackStackAllocationCommand:1/4 s.Depth#2/5 e.Commands#2/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  // closed e.Commands#2 as range 6
  //DEBUG: s.Depth#2: 5
  //DEBUG: e.Commands#2: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdReserveBacktrackStack/4 AsIs: s.Depth#2/5 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Commands#2/6 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_CmdReserveBacktrackStack );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddBacktrackStackAllocationCommand_B1("AddBacktrackStackAllocationCommand:1", 1202773828U, 297103057U, func_gen_AddBacktrackStackAllocationCommand_B1);


static refalrts::FnResult func_gen_AddBacktrackStackAllocationCommand_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: s.$ t.$
  //GLOBAL GEN: s.$ t.$
  // </0 & AddBacktrackStackAllocationCommand\1/4 s.idx#0/5 t.idxV#0/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[7] = refalrts::tvar_left( context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx ( # CmdEStart e.idx )
    // </0 & AddBacktrackStackAllocationCommand\1/4 s.Depth#2/5 (/6 # CmdEStart/10 e.VarInfo#2/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  ident_CmdEStart, context[8], context[9] );
    if( ! context[10] )
      continue;
    // closed e.VarInfo#2 as range 8
    //DEBUG: s.Depth#2: 5
    //DEBUG: e.VarInfo#2: 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Depth#2/5 HalfReuse: >/6 HalfReuse: (/10 } Tile{ HalfReuse: # CmdEStart/7 } Tile{ AsIs: e.VarInfo#2/8 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_Inc.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[7], ident_CmdEStart );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # CmdOnFailGoTo s.idx )
    // </0 & AddBacktrackStackAllocationCommand\1/4 s.Depth#2/5 (/6 # CmdOnFailGoTo/10 s.Offset#2/11 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  ident_CmdOnFailGoTo, context[8], context[9] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    //DEBUG: s.Depth#2: 5
    //DEBUG: s.Offset#2: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.Depth#2/5 HalfReuse: >/6 HalfReuse: (/10 } Tile{ HalfReuse: # CmdOnFailGoTo/1 } Tile{ AsIs: s.Offset#2/11 AsIs: )/7 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Inc.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[1], ident_CmdOnFailGoTo );
    refalrts::link_brackets( context[10], context[7] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[7] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx t.idx
  // </0 & AddBacktrackStackAllocationCommand\1/4 s.Depth#2/5 t.OtherCommand#2/6 >/1
  //DEBUG: t.OtherCommand#2: 6
  //DEBUG: s.Depth#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AddBacktrackStackAllocationCommand\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.Depth#2/5 AsIs: t.OtherCommand#2/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddBacktrackStackAllocationCommand_L1("AddBacktrackStackAllocationCommand\\1", 1202773828U, 297103057U, func_gen_AddBacktrackStackAllocationCommand_L1);


static refalrts::FnResult func_AddBacktrackStackAllocationCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AddBacktrackStackAllocationCommand:1/4 } </5 & MapReduce/6 & AddBacktrackStackAllocationCommand\1/7 0/8 Tile{ AsIs: e.Commands#1/2 } >/9 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_gen_AddBacktrackStackAllocationCommand_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[8], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_AddBacktrackStackAllocationCommand_B1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddBacktrackStackAllocationCommand("AddBacktrackStackAllocationCommand", 1202773828U, 297103057U, func_AddBacktrackStackAllocationCommand);


static refalrts::FnResult func_gen_AddFunctionNameComment_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: ( e.$ ) t.$
  //GLOBAL GEN: ( e.$ ) t.$
  // </0 & AddFunctionNameComment\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
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
  // closed e.idxB#0 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( # CmdOnFailGoTo s.idx )
    // </0 & AddFunctionNameComment\1/4 (/7 e.Name#1/11 )/8 (/9 # CmdOnFailGoTo/15 s.NextLabel#2/16 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_CmdOnFailGoTo, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.Name#1 as range 11
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: e.Name#1: 11
    //DEBUG: s.NextLabel#2: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AddFunctionNameComment\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: # CmdOnFailGoTo/15 AsIs: s.NextLabel#2/16 HalfReuse: # Func$_name:/10 } Tile{ AsIs: e.Name#1/11 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_ident( context[10], ident_Funck32_namek58_ );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx
  // </0 & AddFunctionNameComment\1/4 (/7 e.Name#1/11 )/8 t.OtherCommand#2/9 >/1
  context[11] = context[5];
  context[12] = context[6];
  // closed e.Name#1 as range 11
  //DEBUG: t.OtherCommand#2: 9
  //DEBUG: e.Name#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AddFunctionNameComment\1/4 (/7 e.Name#1/11 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherCommand#2/9 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_AddFunctionNameComment_L1("AddFunctionNameComment\\1", 1202773828U, 297103057U, func_gen_AddFunctionNameComment_L1);


static refalrts::FnResult func_AddFunctionNameComment(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map/10 Tile{ HalfReuse: [*]/0 Reuse: & AddFunctionNameComment\1/4 AsIs: (/7 AsIs: e.Name#1/5 AsIs: )/8 } {*}/11 Tile{ AsIs: e.RASLCommands#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[11], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_AddFunctionNameComment_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
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

static refalrts::NativeReference nat_ref_AddFunctionNameComment("AddFunctionNameComment", 1202773828U, 297103057U, func_AddFunctionNameComment);


static refalrts::FnResult func_gen_PrepareCommonRASL_A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & PrepareCommonRASL=2/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 e.Items#2/9 )/12 (/15 # CmdFuncArray/17 s.FunctionCount#3/28 e.Functions#3/13 )/16 (/20 # CmdIdentArray/22 s.IdentCount#3/29 e.Idents#3/18 )/21 (/25 # CmdStringArray/27 s.StringCount#3/30 e.Strings#3/23 )/26 e.RASL-Commands#3/2 >/1
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
  context[17] = refalrts::ident_left(  ident_CmdFuncArray, context[13], context[14] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = refalrts::ident_left(  ident_CmdIdentArray, context[18], context[19] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  context[27] = refalrts::ident_left(  ident_CmdStringArray, context[23], context[24] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  // closed e.FuncScopeClass#1 as range 5
  // closed e.Items#2 as range 9
  // closed e.RASL-Commands#3 as range 2
  if( ! refalrts::svar_left( context[28], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Functions#3 as range 13
  if( ! refalrts::svar_left( context[29], context[18], context[19] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Idents#3 as range 18
  if( ! refalrts::svar_left( context[30], context[23], context[24] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Strings#3 as range 23
  //DEBUG: e.FuncScopeClass#1: 5
  //DEBUG: e.Items#2: 9
  //DEBUG: e.RASL-Commands#3: 2
  //DEBUG: s.FunctionCount#3: 28
  //DEBUG: e.Functions#3: 13
  //DEBUG: s.IdentCount#3: 29
  //DEBUG: e.Idents#3: 18
  //DEBUG: s.StringCount#3: 30
  //DEBUG: e.Strings#3: 23

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/15 AsIs: # CmdFuncArray/17 AsIs: s.FunctionCount#3/28 } Tile{ AsIs: </0 Reuse: & SetFunctionsScopeClass/4 AsIs: (/7 AsIs: e.FuncScopeClass#1/5 AsIs: )/8 } Tile{ AsIs: e.Functions#3/13 } Tile{ AsIs: >/1 } Tile{ AsIs: )/16 AsIs: (/20 AsIs: # CmdIdentArray/22 AsIs: s.IdentCount#3/29 AsIs: e.Idents#3/18 AsIs: )/21 AsIs: (/25 Reuse: # CmdNumberArray/27 } 0/31 )/32 (/33 # CmdStringArray/34 Tile{ AsIs: s.StringCount#3/30 AsIs: e.Strings#3/23 AsIs: )/26 } (/35 # RASL/36 Tile{ AsIs: e.RASL-Commands#3/2 } )/37 (/38 Tile{ HalfReuse: # Items/11 AsIs: e.Items#2/9 AsIs: )/12 } Tile{ ]] }
  if( ! refalrts::alloc_number( context[31], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[34], ident_CmdStringArray ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[36], ident_RASL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[38] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_SetFunctionsScopeClass.ref.function );
  refalrts::update_ident( context[27], ident_CmdNumberArray );
  refalrts::reinit_ident( context[11], ident_Items );
  refalrts::link_brackets( context[38], context[12] );
  refalrts::link_brackets( context[35], context[37] );
  refalrts::link_brackets( context[33], context[26] );
  refalrts::link_brackets( context[25], context[32] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[30], context[26] );
  res = refalrts::splice_evar( res, context[31], context[34] );
  res = refalrts::splice_evar( res, context[16], context[27] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[15], context[28] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareCommonRASL_A2("PrepareCommonRASL=2", 1202773828U, 297103057U, func_gen_PrepareCommonRASL_A2);


static refalrts::FnResult func_gen_PrepareCommonRASL_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & PrepareCommonRASL=1/4 (/7 e.FuncScopeClass#1/5 )/8 (/11 e.RASL-Commands#2/9 )/12 e.Items#2/2 >/1
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
  // closed e.FuncScopeClass#1 as range 5
  // closed e.RASL-Commands#2 as range 9
  // closed e.Items#2 as range 2
  //DEBUG: e.FuncScopeClass#1: 5
  //DEBUG: e.RASL-Commands#2: 9
  //DEBUG: e.Items#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: [*]/0 Reuse: & PrepareCommonRASL=2/4 AsIs: (/7 AsIs: e.FuncScopeClass#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Items#2/2 } Tile{ AsIs: )/12 } {*}/14 </15 & OutlineConstants/16 (/17 0/18 )/19 (/20 0/21 )/22 (/23 0/24 )/25 Tile{ AsIs: e.RASL-Commands#2/9 } >/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[14], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_OutlineConstants.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[18], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[21], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[24], 0UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_PrepareCommonRASL_A2.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[23], context[25] );
  refalrts::link_brackets( context[20], context[22] );
  refalrts::link_brackets( context[17], context[19] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[25] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[14] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_PrepareCommonRASL_A1("PrepareCommonRASL=1", 1202773828U, 297103057U, func_gen_PrepareCommonRASL_A1);


static refalrts::FnResult func_PrepareCommonRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & PrepareCommonRASL/4 (/7 e.FuncScopeClass#1/5 )/8 e.Definitions#1/2 >/1
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
  // closed e.Definitions#1 as range 2
  //DEBUG: e.FuncScopeClass#1: 5
  //DEBUG: e.Definitions#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: [*]/0 Reuse: & PrepareCommonRASL=1/4 AsIs: (/7 AsIs: e.FuncScopeClass#1/5 AsIs: )/8 } {*}/10 </11 & GlueFunctionRASLs/12 Tile{ AsIs: e.Definitions#1/2 } >/13 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[10], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_GlueFunctionRASLs.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_PrepareCommonRASL_A1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareCommonRASL("PrepareCommonRASL", 1202773828U, 297103057U, func_PrepareCommonRASL);


static refalrts::FnResult func_gen_GlueFunctionRASLs_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: ( e.$ ) t.$
  //GLOBAL GEN: ( e.$ ) t.$
  // </0 & GlueFunctionRASLs\1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 >/1
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
  // closed e.idxB#0 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( # CmdInterpretFuncDescr s.idx ( e.idx ) ( # LABEL s.idx ) e.idx )
    // </0 & GlueFunctionRASLs\1/4 (/7 e.All-RASL-Commands#2/11 )/8 (/9 # CmdInterpretFuncDescr/15 s.ScopeClass#2/16 (/19 e.Name#2/17 )/20 (/23 # LABEL/25 s.Label#2/26 )/24 e.RASL-Commands#2/13 )/10 >/1
    context[11] = context[5];
    context[12] = context[6];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    context[15] = refalrts::ident_left(  ident_CmdInterpretFuncDescr, context[13], context[14] );
    if( ! context[15] )
      continue;
    // closed e.All-RASL-Commands#2 as range 11
    if( ! refalrts::svar_left( context[16], context[13], context[14] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[13], context[14] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  ident_LABEL, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Name#2 as range 17
    // closed e.RASL-Commands#2 as range 13
    if( ! refalrts::svar_left( context[26], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: e.All-RASL-Commands#2: 11
    //DEBUG: s.ScopeClass#2: 16
    //DEBUG: e.Name#2: 17
    //DEBUG: e.RASL-Commands#2: 13
    //DEBUG: s.Label#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & GlueFunctionRASLs\1/4 (/7 {REMOVED TILE} )/8 (/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.All-RASL-Commands#2/11 } Tile{ AsIs: (/23 AsIs: # LABEL/25 AsIs: s.Label#2/26 AsIs: )/24 AsIs: e.RASL-Commands#2/13 AsIs: )/10 HalfReuse: (/1 } Tile{ AsIs: # CmdInterpretFuncDescr/15 AsIs: s.ScopeClass#2/16 } Tile{ AsIs: e.Name#2/17 } Tile{ HalfReuse: s.Label2 #26/19 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_svar( context[19], context[26] );
    refalrts::link_brackets( context[1], context[20] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[23], context[1] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx
  // </0 & GlueFunctionRASLs\1/4 (/7 e.All-RASL-Commands#2/11 )/8 t.OtherItem#2/9 >/1
  context[11] = context[5];
  context[12] = context[6];
  // closed e.All-RASL-Commands#2 as range 11
  //DEBUG: t.OtherItem#2: 9
  //DEBUG: e.All-RASL-Commands#2: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & GlueFunctionRASLs\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.All-RASL-Commands#2/11 AsIs: )/8 AsIs: t.OtherItem#2/9 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_GlueFunctionRASLs_L1("GlueFunctionRASLs\\1", 1202773828U, 297103057U, func_gen_GlueFunctionRASLs_L1);


static refalrts::FnResult func_GlueFunctionRASLs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & MapReduce/6 & GlueFunctionRASLs\1/7 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Definitions#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_gen_GlueFunctionRASLs_L1.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_GlueFunctionRASLs("GlueFunctionRASLs", 1202773828U, 297103057U, func_GlueFunctionRASLs);


static refalrts::FnResult func_gen_SetFunctionsScopeClass_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetFunctionsScopeClass=1/4 (/7 e.FuncScopeClass-NotCalledFromRASL#2/5 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Functions#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SetFunctionsScopeClass_A1("SetFunctionsScopeClass=1", 1202773828U, 297103057U, func_gen_SetFunctionsScopeClass_A1);


static refalrts::FnResult func_gen_SetFunctionsScopeClass_A1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: ( e.$ ) ( e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ )
  // </0 & SetFunctionsScopeClass=1\1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  do {
    // ( e.idx ) ( e.idx )
    // </0 & SetFunctionsScopeClass=1\1/4 (/7 e.Decls-B#2/17 (/23 s.ScopeClass#2/27 e.FuncName#2/25 )/24 e.Decls-E#2/19 )/8 (/11 e.FuncName#2/15 )/12 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    // closed e.FuncName#2 as range 15
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[19] = context[13];
      context[20] = context[14];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      if( ! refalrts::repeated_evar_right( context[25], context[26], context[15], context[16], context[21], context[22] ) )
        continue;
      // closed e.Decls-E#2 as range 19
      if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
        continue;
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      //DEBUG: e.FuncName#2: 15
      //DEBUG: e.Decls-B#2: 17
      //DEBUG: e.Decls-E#2: 19
      //DEBUG: s.ScopeClass#2: 27

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} & SetFunctionsScopeClass=1\1/4 (/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 (/11 e.FuncName#2/15 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Decls-B#2/17 } Tile{ AsIs: e.Decls-E#2/19 } Tile{ AsIs: )/12 } Tile{ AsIs: (/23 AsIs: s.ScopeClass#2/27 AsIs: e.FuncName#2/25 AsIs: )/24 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::link_brackets( context[23], context[24] );
      refalrts::link_brackets( context[0], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      refalrts::splice_to_freelist_open( context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[17], context[18], context[13], context[14] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx )
  // </0 & SetFunctionsScopeClass=1\1/4 (/7 e.Decls#2/13 )/8 (/11 e.FuncName#2/15 )/12 >/1
  context[13] = context[5];
  context[14] = context[6];
  context[15] = context[9];
  context[16] = context[10];
  // closed e.Decls#2 as range 13
  // closed e.FuncName#2 as range 15
  //DEBUG: e.Decls#2: 13
  //DEBUG: e.FuncName#2: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetFunctionsScopeClass=1\1/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Decls#2/13 AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # GN-Entry/12 } Tile{ AsIs: e.FuncName#2/15 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_ident( context[12], ident_GNm_Entry );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SetFunctionsScopeClass_A1L1("SetFunctionsScopeClass=1\\1", 1202773828U, 297103057U, func_gen_SetFunctionsScopeClass_A1L1);


static refalrts::FnResult func_SetFunctionsScopeClass(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & SetFunctionsScopeClass=1/10 </11 Tile{ HalfReuse: & MapReduce/0 Reuse: & SetFunctionsScopeClass=1\1/4 AsIs: (/7 AsIs: e.FuncScopeClass#1/5 AsIs: )/8 AsIs: e.Functions#1/2 AsIs: >/1 } >/12 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_gen_SetFunctionsScopeClass_A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_MapReduce.ref.function );
  refalrts::update_name( context[4], ref_gen_SetFunctionsScopeClass_A1L1.ref.function );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
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

static refalrts::NativeReference nat_ref_SetFunctionsScopeClass("SetFunctionsScopeClass", 1202773828U, 297103057U, func_SetFunctionsScopeClass);


static refalrts::FnResult func_RemoveNumber(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & RemoveNumber/4 (/7 s.Number#1/9 e.Name#1/5 )/8 >/1
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
  // closed e.Name#1 as range 5
  //DEBUG: s.Number#1: 9
  //DEBUG: e.Name#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & RemoveNumber/4 (/7 s.Number#1/9 {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Name#1/5 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveNumber("RemoveNumber", 1202773828U, 297103057U, func_RemoveNumber);


static refalrts::FnResult func_OutlineConstants(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) e.$
  // </0 & OutlineConstants/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 e.idxTTT#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTT#0 as range 2
  do {
    // ( s.idx e.idx ) ( s.idx e.idx ) ( s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/25 e.Funcs#1/17 )/8 (/11 s.NextIdent#1/26 e.Idents#1/19 )/12 (/15 s.NextString#1/27 e.Strings#1/21 )/16 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[17], context[18] ) )
      continue;
    // closed e.Funcs#1 as range 17
    if( ! refalrts::svar_left( context[26], context[19], context[20] ) )
      continue;
    // closed e.Idents#1 as range 19
    if( ! refalrts::svar_left( context[27], context[21], context[22] ) )
      continue;
    // closed e.Strings#1 as range 21
    //DEBUG: s.NextFunc#1: 25
    //DEBUG: e.Funcs#1: 17
    //DEBUG: s.NextIdent#1: 26
    //DEBUG: e.Idents#1: 19
    //DEBUG: s.NextString#1: 27
    //DEBUG: e.Strings#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.NextFunc#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdFuncArray/4 HalfReuse: s.NextFunc1 #25/7 } </28 & Map/29 & RemoveNumber/30 Tile{ AsIs: e.Funcs#1/17 } >/31 Tile{ AsIs: )/12 AsIs: (/15 } # CmdIdentArray/32 Tile{ AsIs: s.NextIdent#1/26 } </33 & Map/34 & RemoveNumber/35 Tile{ AsIs: e.Idents#1/19 } >/36 Tile{ AsIs: )/8 AsIs: (/11 } # CmdStringArray/37 Tile{ AsIs: s.NextString#1/27 } </38 & Map/39 & RemoveNumber/40 Tile{ AsIs: e.Strings#1/21 } Tile{ HalfReuse: >/16 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], ref_RemoveNumber.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], ident_CmdIdentArray ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ref_RemoveNumber.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[37], ident_CmdStringArray ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[39], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[40], ref_RemoveNumber.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdFuncArray );
    refalrts::reinit_svar( context[7], context[25] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[38] );
    refalrts::link_brackets( context[15], context[8] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[33] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[38], context[40] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[28], context[30] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( e.idx ) ( e.idx ) e.idx ( # CmdName s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/30 e.Funcs-B#1/33 (/39 s.Num#1/43 e.Func#1/41 )/40 e.Funcs-E#1/35 )/8 (/11 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdName/29 s.Direction#1/31 s.BracketNum#1/32 e.Func#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdName, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Idents#1 as range 19
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    // closed e.Func#1 as range 25
    context[33] = 0;
    context[34] = 0;
    refalrts::start_e_loop();
    do {
      context[35] = context[17];
      context[36] = context[18];
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[35], context[36] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      if( ! refalrts::repeated_evar_right( context[41], context[42], context[25], context[26], context[37], context[38] ) )
        continue;
      // closed e.Funcs-E#1 as range 35
      if( ! refalrts::svar_left( context[43], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: e.Idents#1: 19
      //DEBUG: e.Strings#1: 21
      //DEBUG: e.Commands#1: 23
      //DEBUG: s.NextFunc#1: 30
      //DEBUG: s.Direction#1: 31
      //DEBUG: s.BracketNum#1: 32
      //DEBUG: e.Func#1: 25
      //DEBUG: e.Funcs-B#1: 33
      //DEBUG: e.Funcs-E#1: 35
      //DEBUG: s.Num#1: 43

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Func#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: s.NextFunc#1/30 AsIs: e.Funcs-B#1/33 AsIs: (/39 AsIs: s.Num#1/43 AsIs: e.Func#1/41 AsIs: )/40 AsIs: e.Funcs-E#1/35 AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdName/44 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 } Tile{ HalfReuse: s.Num1 #43/28 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[44], ident_CmdName ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_svar( context[28], context[43] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[29], context[1] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[39], context[40] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[33], context[34], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( e.idx ) ( e.idx ) e.idx ( # CmdName s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/30 e.Funcs#1/17 )/8 (/11 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdName/29 s.Direction#1/31 s.BracketNum#1/32 e.Func#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdName, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Idents#1 as range 19
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[17], context[18] ) )
      continue;
    // closed e.Funcs#1 as range 17
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    // closed e.Func#1 as range 25
    //DEBUG: e.Idents#1: 19
    //DEBUG: e.Strings#1: 21
    //DEBUG: e.Commands#1: 23
    //DEBUG: s.NextFunc#1: 30
    //DEBUG: e.Funcs#1: 17
    //DEBUG: s.Direction#1: 31
    //DEBUG: s.BracketNum#1: 32
    //DEBUG: e.Func#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 } </33 & Inc/34 s.NextFunc#1/30/35 >/36 Tile{ AsIs: e.Funcs#1/17 } (/37 Tile{ AsIs: s.NextFunc#1/30 } Tile{ AsIs: e.Func#1/25 } )/38 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdName/39 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 } Tile{ HalfReuse: s.NextFunc1 #30/28 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[39], ident_CmdName ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::reinit_svar( context[28], context[30] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[37], context[38] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[39], context[39] );
    res = refalrts::splice_evar( res, context[8], context[29] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[33], context[36] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( e.idx ) ( e.idx ) e.idx ( # CmdNameSave s.idx s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/30 e.Funcs-B#1/34 (/40 s.Num#1/44 e.Func#1/42 )/41 e.Funcs-E#1/36 )/8 (/11 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdNameSave/29 s.Direction#1/31 s.BracketNum#1/32 s.SaveOffset#1/33 e.Func#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdNameSave, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Idents#1 as range 19
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[25], context[26] ) )
      continue;
    // closed e.Func#1 as range 25
    context[34] = 0;
    context[35] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[17];
      context[37] = context[18];
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      if( ! refalrts::repeated_evar_right( context[42], context[43], context[25], context[26], context[38], context[39] ) )
        continue;
      // closed e.Funcs-E#1 as range 36
      if( ! refalrts::svar_left( context[44], context[38], context[39] ) )
        continue;
      if( ! refalrts::empty_seq( context[38], context[39] ) )
        continue;
      //DEBUG: e.Idents#1: 19
      //DEBUG: e.Strings#1: 21
      //DEBUG: e.Commands#1: 23
      //DEBUG: s.NextFunc#1: 30
      //DEBUG: s.Direction#1: 31
      //DEBUG: s.BracketNum#1: 32
      //DEBUG: s.SaveOffset#1: 33
      //DEBUG: e.Func#1: 25
      //DEBUG: e.Funcs-B#1: 34
      //DEBUG: e.Funcs-E#1: 36
      //DEBUG: s.Num#1: 44

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Func#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: s.NextFunc#1/30 AsIs: e.Funcs-B#1/34 AsIs: (/40 AsIs: s.Num#1/44 AsIs: e.Func#1/42 AsIs: )/41 AsIs: e.Funcs-E#1/36 AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdNameSave/45 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 AsIs: s.SaveOffset#1/33 } Tile{ HalfReuse: s.Num1 #44/28 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[45], ident_CmdNameSave ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_svar( context[28], context[44] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[29], context[1] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[31], context[33] );
      res = refalrts::splice_evar( res, context[45], context[45] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[34], context[35], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( e.idx ) ( e.idx ) e.idx ( # CmdNameSave s.idx s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/30 e.Funcs#1/17 )/8 (/11 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdNameSave/29 s.Direction#1/31 s.BracketNum#1/32 s.SaveOffset#1/33 e.Func#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdNameSave, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Idents#1 as range 19
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[17], context[18] ) )
      continue;
    // closed e.Funcs#1 as range 17
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[25], context[26] ) )
      continue;
    // closed e.Func#1 as range 25
    //DEBUG: e.Idents#1: 19
    //DEBUG: e.Strings#1: 21
    //DEBUG: e.Commands#1: 23
    //DEBUG: s.NextFunc#1: 30
    //DEBUG: e.Funcs#1: 17
    //DEBUG: s.Direction#1: 31
    //DEBUG: s.BracketNum#1: 32
    //DEBUG: s.SaveOffset#1: 33
    //DEBUG: e.Func#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 } </34 & Inc/35 s.NextFunc#1/30/36 >/37 Tile{ AsIs: e.Funcs#1/17 } (/38 Tile{ AsIs: s.NextFunc#1/30 } Tile{ AsIs: e.Func#1/25 } )/39 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdNameSave/40 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 AsIs: s.SaveOffset#1/33 } Tile{ HalfReuse: s.NextFunc1 #30/28 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[40], ident_CmdNameSave ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::reinit_svar( context[28], context[30] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[38], context[39] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[8], context[29] );
    res = refalrts::splice_evar( res, context[39], context[39] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[34], context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( e.idx ) ( e.idx ) e.idx ( # CmdCreateElem s.idx s.idx # ElName e.idx )
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/30 e.Funcs-B#1/34 (/40 s.Num#1/44 e.Func#1/42 )/41 e.Funcs-E#1/36 )/8 (/11 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdCreateElem/29 s.CreateMode#1/31 s.ElemNo#1/32 # ElName/33 e.Func#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdCreateElem, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Idents#1 as range 19
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    context[33] = refalrts::ident_left(  ident_ElName, context[25], context[26] );
    if( ! context[33] )
      continue;
    // closed e.Func#1 as range 25
    context[34] = 0;
    context[35] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[17];
      context[37] = context[18];
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      if( ! refalrts::repeated_evar_right( context[42], context[43], context[25], context[26], context[38], context[39] ) )
        continue;
      // closed e.Funcs-E#1 as range 36
      if( ! refalrts::svar_left( context[44], context[38], context[39] ) )
        continue;
      if( ! refalrts::empty_seq( context[38], context[39] ) )
        continue;
      //DEBUG: e.Idents#1: 19
      //DEBUG: e.Strings#1: 21
      //DEBUG: e.Commands#1: 23
      //DEBUG: s.NextFunc#1: 30
      //DEBUG: s.CreateMode#1: 31
      //DEBUG: s.ElemNo#1: 32
      //DEBUG: e.Func#1: 25
      //DEBUG: e.Funcs-B#1: 34
      //DEBUG: e.Funcs-E#1: 36
      //DEBUG: s.Num#1: 44

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Func#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: s.NextFunc#1/30 AsIs: e.Funcs-B#1/34 AsIs: (/40 AsIs: s.Num#1/44 AsIs: e.Func#1/42 AsIs: )/41 AsIs: e.Funcs-E#1/36 AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdCreateElem/45 Tile{ AsIs: s.CreateMode#1/31 AsIs: s.ElemNo#1/32 AsIs: # ElName/33 } Tile{ HalfReuse: s.Num1 #44/28 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[45], ident_CmdCreateElem ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_svar( context[28], context[44] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[29], context[1] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[31], context[33] );
      res = refalrts::splice_evar( res, context[45], context[45] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[34], context[35], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( e.idx ) ( e.idx ) e.idx ( # CmdCreateElem s.idx s.idx # ElName e.idx )
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/30 e.Funcs#1/17 )/8 (/11 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdCreateElem/29 s.CreateMode#1/31 s.ElemNo#1/32 # ElName/33 e.Func#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdCreateElem, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Idents#1 as range 19
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[17], context[18] ) )
      continue;
    // closed e.Funcs#1 as range 17
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    context[33] = refalrts::ident_left(  ident_ElName, context[25], context[26] );
    if( ! context[33] )
      continue;
    // closed e.Func#1 as range 25
    //DEBUG: e.Idents#1: 19
    //DEBUG: e.Strings#1: 21
    //DEBUG: e.Commands#1: 23
    //DEBUG: s.NextFunc#1: 30
    //DEBUG: e.Funcs#1: 17
    //DEBUG: s.CreateMode#1: 31
    //DEBUG: s.ElemNo#1: 32
    //DEBUG: e.Func#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 } </34 & Inc/35 s.NextFunc#1/30/36 >/37 Tile{ AsIs: e.Funcs#1/17 } (/38 Tile{ AsIs: s.NextFunc#1/30 } Tile{ AsIs: e.Func#1/25 } )/39 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdCreateElem/40 Tile{ AsIs: s.CreateMode#1/31 AsIs: s.ElemNo#1/32 AsIs: # ElName/33 } Tile{ HalfReuse: s.NextFunc1 #30/28 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[40], ident_CmdCreateElem ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::reinit_svar( context[28], context[30] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[38], context[39] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[8], context[29] );
    res = refalrts::splice_evar( res, context[39], context[39] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[34], context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( e.idx ) ( e.idx ) e.idx ( # CmdADT s.idx s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/30 e.Funcs-B#1/34 (/40 s.Num#1/44 e.Func#1/42 )/41 e.Funcs-E#1/36 )/8 (/11 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdADT/29 s.Direction#1/31 s.BracketNum#1/32 s.InnerBrackets#1/33 e.Func#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdADT, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Idents#1 as range 19
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[25], context[26] ) )
      continue;
    // closed e.Func#1 as range 25
    context[34] = 0;
    context[35] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[17];
      context[37] = context[18];
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      if( ! refalrts::repeated_evar_right( context[42], context[43], context[25], context[26], context[38], context[39] ) )
        continue;
      // closed e.Funcs-E#1 as range 36
      if( ! refalrts::svar_left( context[44], context[38], context[39] ) )
        continue;
      if( ! refalrts::empty_seq( context[38], context[39] ) )
        continue;
      //DEBUG: e.Idents#1: 19
      //DEBUG: e.Strings#1: 21
      //DEBUG: e.Commands#1: 23
      //DEBUG: s.NextFunc#1: 30
      //DEBUG: s.Direction#1: 31
      //DEBUG: s.BracketNum#1: 32
      //DEBUG: s.InnerBrackets#1: 33
      //DEBUG: e.Func#1: 25
      //DEBUG: e.Funcs-B#1: 34
      //DEBUG: e.Funcs-E#1: 36
      //DEBUG: s.Num#1: 44

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Func#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: s.NextFunc#1/30 AsIs: e.Funcs-B#1/34 AsIs: (/40 AsIs: s.Num#1/44 AsIs: e.Func#1/42 AsIs: )/41 AsIs: e.Funcs-E#1/36 AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdADT/45 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 AsIs: s.InnerBrackets#1/33 } Tile{ HalfReuse: s.Num1 #44/28 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[45], ident_CmdADT ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_svar( context[28], context[44] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[29], context[1] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[31], context[33] );
      res = refalrts::splice_evar( res, context[45], context[45] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[34], context[35], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( e.idx ) ( e.idx ) e.idx ( # CmdADT s.idx s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/30 e.Funcs#1/17 )/8 (/11 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdADT/29 s.Direction#1/31 s.BracketNum#1/32 s.InnerBrackets#1/33 e.Func#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdADT, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Idents#1 as range 19
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[17], context[18] ) )
      continue;
    // closed e.Funcs#1 as range 17
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[25], context[26] ) )
      continue;
    // closed e.Func#1 as range 25
    //DEBUG: e.Idents#1: 19
    //DEBUG: e.Strings#1: 21
    //DEBUG: e.Commands#1: 23
    //DEBUG: s.NextFunc#1: 30
    //DEBUG: e.Funcs#1: 17
    //DEBUG: s.Direction#1: 31
    //DEBUG: s.BracketNum#1: 32
    //DEBUG: s.InnerBrackets#1: 33
    //DEBUG: e.Func#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 } </34 & Inc/35 s.NextFunc#1/30/36 >/37 Tile{ AsIs: e.Funcs#1/17 } (/38 Tile{ AsIs: s.NextFunc#1/30 } Tile{ AsIs: e.Func#1/25 } )/39 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdADT/40 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 AsIs: s.InnerBrackets#1/33 } Tile{ HalfReuse: s.NextFunc1 #30/28 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[40], ident_CmdADT ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::reinit_svar( context[28], context[30] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[38], context[39] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[8], context[29] );
    res = refalrts::splice_evar( res, context[39], context[39] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[34], context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( e.idx ) ( e.idx ) e.idx ( # CmdADTSave s.idx s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/30 e.Funcs-B#1/34 (/40 s.Num#1/44 e.Func#1/42 )/41 e.Funcs-E#1/36 )/8 (/11 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdADTSave/29 s.Direction#1/31 s.BracketNum#1/32 s.InnerBrackets#1/33 e.Func#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdADTSave, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Idents#1 as range 19
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[17], context[18] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[25], context[26] ) )
      continue;
    // closed e.Func#1 as range 25
    context[34] = 0;
    context[35] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[17];
      context[37] = context[18];
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      if( ! refalrts::repeated_evar_right( context[42], context[43], context[25], context[26], context[38], context[39] ) )
        continue;
      // closed e.Funcs-E#1 as range 36
      if( ! refalrts::svar_left( context[44], context[38], context[39] ) )
        continue;
      if( ! refalrts::empty_seq( context[38], context[39] ) )
        continue;
      //DEBUG: e.Idents#1: 19
      //DEBUG: e.Strings#1: 21
      //DEBUG: e.Commands#1: 23
      //DEBUG: s.NextFunc#1: 30
      //DEBUG: s.Direction#1: 31
      //DEBUG: s.BracketNum#1: 32
      //DEBUG: s.InnerBrackets#1: 33
      //DEBUG: e.Func#1: 25
      //DEBUG: e.Funcs-B#1: 34
      //DEBUG: e.Funcs-E#1: 36
      //DEBUG: s.Num#1: 44

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Func#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: s.NextFunc#1/30 AsIs: e.Funcs-B#1/34 AsIs: (/40 AsIs: s.Num#1/44 AsIs: e.Func#1/42 AsIs: )/41 AsIs: e.Funcs-E#1/36 AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdADTSave/45 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 AsIs: s.InnerBrackets#1/33 } Tile{ HalfReuse: s.Num1 #44/28 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[45], ident_CmdADTSave ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_svar( context[28], context[44] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[29], context[1] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[31], context[33] );
      res = refalrts::splice_evar( res, context[45], context[45] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[34], context[35], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx e.idx ) ( e.idx ) ( e.idx ) e.idx ( # CmdADTSave s.idx s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 s.NextFunc#1/30 e.Funcs#1/17 )/8 (/11 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdADTSave/29 s.Direction#1/31 s.BracketNum#1/32 s.InnerBrackets#1/33 e.Func#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdADTSave, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Idents#1 as range 19
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[17], context[18] ) )
      continue;
    // closed e.Funcs#1 as range 17
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[25], context[26] ) )
      continue;
    // closed e.Func#1 as range 25
    //DEBUG: e.Idents#1: 19
    //DEBUG: e.Strings#1: 21
    //DEBUG: e.Commands#1: 23
    //DEBUG: s.NextFunc#1: 30
    //DEBUG: e.Funcs#1: 17
    //DEBUG: s.Direction#1: 31
    //DEBUG: s.BracketNum#1: 32
    //DEBUG: s.InnerBrackets#1: 33
    //DEBUG: e.Func#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 } </34 & Inc/35 s.NextFunc#1/30/36 >/37 Tile{ AsIs: e.Funcs#1/17 } (/38 Tile{ AsIs: s.NextFunc#1/30 } Tile{ AsIs: e.Func#1/25 } )/39 Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdADTSave/40 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 AsIs: s.InnerBrackets#1/33 } Tile{ HalfReuse: s.NextFunc1 #30/28 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[40], ident_CmdADTSave ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::reinit_svar( context[28], context[30] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[38], context[39] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[8], context[29] );
    res = refalrts::splice_evar( res, context[39], context[39] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[34], context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx ( # CmdIdent s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/17 )/8 (/11 s.NextIdent#1/30 e.Idents-B#1/33 (/39 s.Num#1/43 e.Ident#1/41 )/40 e.Idents-E#1/35 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdIdent/29 s.Direction#1/31 s.BracketNum#1/32 e.Ident#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdIdent, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Funcs#1 as range 17
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    // closed e.Ident#1 as range 25
    context[33] = 0;
    context[34] = 0;
    refalrts::start_e_loop();
    do {
      context[35] = context[19];
      context[36] = context[20];
      context[37] = 0;
      context[38] = 0;
      context[39] = refalrts::brackets_left( context[37], context[38], context[35], context[36] );
      if( ! context[39] )
        continue;
      refalrts::bracket_pointers(context[39], context[40]);
      if( ! refalrts::repeated_evar_right( context[41], context[42], context[25], context[26], context[37], context[38] ) )
        continue;
      // closed e.Idents-E#1 as range 35
      if( ! refalrts::svar_left( context[43], context[37], context[38] ) )
        continue;
      if( ! refalrts::empty_seq( context[37], context[38] ) )
        continue;
      //DEBUG: e.Funcs#1: 17
      //DEBUG: e.Strings#1: 21
      //DEBUG: e.Commands#1: 23
      //DEBUG: s.NextIdent#1: 30
      //DEBUG: s.Direction#1: 31
      //DEBUG: s.BracketNum#1: 32
      //DEBUG: e.Ident#1: 25
      //DEBUG: e.Idents-B#1: 33
      //DEBUG: e.Idents-E#1: 35
      //DEBUG: s.Num#1: 43

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Ident#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/17 AsIs: )/8 AsIs: (/11 AsIs: s.NextIdent#1/30 AsIs: e.Idents-B#1/33 AsIs: (/39 AsIs: s.Num#1/43 AsIs: e.Ident#1/41 AsIs: )/40 AsIs: e.Idents-E#1/35 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdIdent/44 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 } Tile{ HalfReuse: s.Num1 #43/28 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[44], ident_CmdIdent ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_svar( context[28], context[43] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[29], context[1] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[39], context[40] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[31], context[32] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[33], context[34], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx ( # CmdIdent s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/17 )/8 (/11 s.NextIdent#1/30 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdIdent/29 s.Direction#1/31 s.BracketNum#1/32 e.Ident#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdIdent, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Funcs#1 as range 17
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[19], context[20] ) )
      continue;
    // closed e.Idents#1 as range 19
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    // closed e.Ident#1 as range 25
    //DEBUG: e.Funcs#1: 17
    //DEBUG: e.Strings#1: 21
    //DEBUG: e.Commands#1: 23
    //DEBUG: s.NextIdent#1: 30
    //DEBUG: e.Idents#1: 19
    //DEBUG: s.Direction#1: 31
    //DEBUG: s.BracketNum#1: 32
    //DEBUG: e.Ident#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/17 AsIs: )/8 AsIs: (/11 } </33 & Inc/34 Tile{ AsIs: s.NextIdent#1/30 } >/35 Tile{ AsIs: e.Idents#1/19 } (/36 s.NextIdent#1/30/37 Tile{ AsIs: e.Ident#1/25 } )/38 Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdIdent/39 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 } Tile{ HalfReuse: s.NextIdent1 #30/28 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[37], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[39], ident_CmdIdent ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::reinit_svar( context[28], context[30] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[36], context[38] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[33] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[39], context[39] );
    res = refalrts::splice_evar( res, context[12], context[29] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx ( # CmdIdentSave s.idx s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/17 )/8 (/11 s.NextIdent#1/30 e.Idents-B#1/34 (/40 s.Num#1/44 e.Ident#1/42 )/41 e.Idents-E#1/36 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdIdentSave/29 s.Direction#1/31 s.BracketNum#1/32 s.SaveOffset#1/33 e.Ident#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdIdentSave, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Funcs#1 as range 17
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[25], context[26] ) )
      continue;
    // closed e.Ident#1 as range 25
    context[34] = 0;
    context[35] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[19];
      context[37] = context[20];
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      if( ! refalrts::repeated_evar_right( context[42], context[43], context[25], context[26], context[38], context[39] ) )
        continue;
      // closed e.Idents-E#1 as range 36
      if( ! refalrts::svar_left( context[44], context[38], context[39] ) )
        continue;
      if( ! refalrts::empty_seq( context[38], context[39] ) )
        continue;
      //DEBUG: e.Funcs#1: 17
      //DEBUG: e.Strings#1: 21
      //DEBUG: e.Commands#1: 23
      //DEBUG: s.NextIdent#1: 30
      //DEBUG: s.Direction#1: 31
      //DEBUG: s.BracketNum#1: 32
      //DEBUG: s.SaveOffset#1: 33
      //DEBUG: e.Ident#1: 25
      //DEBUG: e.Idents-B#1: 34
      //DEBUG: e.Idents-E#1: 36
      //DEBUG: s.Num#1: 44

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Ident#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/17 AsIs: )/8 AsIs: (/11 AsIs: s.NextIdent#1/30 AsIs: e.Idents-B#1/34 AsIs: (/40 AsIs: s.Num#1/44 AsIs: e.Ident#1/42 AsIs: )/41 AsIs: e.Idents-E#1/36 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdIdentSave/45 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 AsIs: s.SaveOffset#1/33 } Tile{ HalfReuse: s.Num1 #44/28 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[45], ident_CmdIdentSave ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_svar( context[28], context[44] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[29], context[1] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[31], context[33] );
      res = refalrts::splice_evar( res, context[45], context[45] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[34], context[35], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx ( # CmdIdentSave s.idx s.idx s.idx e.idx )
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/17 )/8 (/11 s.NextIdent#1/30 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdIdentSave/29 s.Direction#1/31 s.BracketNum#1/32 s.SaveOffset#1/33 e.Ident#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdIdentSave, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Funcs#1 as range 17
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[19], context[20] ) )
      continue;
    // closed e.Idents#1 as range 19
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[33], context[25], context[26] ) )
      continue;
    // closed e.Ident#1 as range 25
    //DEBUG: e.Funcs#1: 17
    //DEBUG: e.Strings#1: 21
    //DEBUG: e.Commands#1: 23
    //DEBUG: s.NextIdent#1: 30
    //DEBUG: e.Idents#1: 19
    //DEBUG: s.Direction#1: 31
    //DEBUG: s.BracketNum#1: 32
    //DEBUG: s.SaveOffset#1: 33
    //DEBUG: e.Ident#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/17 AsIs: )/8 AsIs: (/11 } </34 & Inc/35 Tile{ AsIs: s.NextIdent#1/30 } >/36 Tile{ AsIs: e.Idents#1/19 } (/37 s.NextIdent#1/30/38 Tile{ AsIs: e.Ident#1/25 } )/39 Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdIdentSave/40 Tile{ AsIs: s.Direction#1/31 AsIs: s.BracketNum#1/32 AsIs: s.SaveOffset#1/33 } Tile{ HalfReuse: s.NextIdent1 #30/28 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[38], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[40], ident_CmdIdentSave ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::reinit_svar( context[28], context[30] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[37], context[39] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[34] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[12], context[29] );
    res = refalrts::splice_evar( res, context[39], context[39] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx ( # CmdCreateElem s.idx s.idx # ElIdent e.idx )
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/17 )/8 (/11 s.NextIdent#1/30 e.Idents-B#1/34 (/40 s.Num#1/44 e.Ident#1/42 )/41 e.Idents-E#1/36 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdCreateElem/29 s.CreateMode#1/31 s.ElemNo#1/32 # ElIdent/33 e.Ident#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdCreateElem, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Funcs#1 as range 17
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[19], context[20] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    context[33] = refalrts::ident_left(  ident_ElIdent, context[25], context[26] );
    if( ! context[33] )
      continue;
    // closed e.Ident#1 as range 25
    context[34] = 0;
    context[35] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[19];
      context[37] = context[20];
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      if( ! refalrts::repeated_evar_right( context[42], context[43], context[25], context[26], context[38], context[39] ) )
        continue;
      // closed e.Idents-E#1 as range 36
      if( ! refalrts::svar_left( context[44], context[38], context[39] ) )
        continue;
      if( ! refalrts::empty_seq( context[38], context[39] ) )
        continue;
      //DEBUG: e.Funcs#1: 17
      //DEBUG: e.Strings#1: 21
      //DEBUG: e.Commands#1: 23
      //DEBUG: s.NextIdent#1: 30
      //DEBUG: s.CreateMode#1: 31
      //DEBUG: s.ElemNo#1: 32
      //DEBUG: e.Ident#1: 25
      //DEBUG: e.Idents-B#1: 34
      //DEBUG: e.Idents-E#1: 36
      //DEBUG: s.Num#1: 44

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.Ident#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/17 AsIs: )/8 AsIs: (/11 AsIs: s.NextIdent#1/30 AsIs: e.Idents-B#1/34 AsIs: (/40 AsIs: s.Num#1/44 AsIs: e.Ident#1/42 AsIs: )/41 AsIs: e.Idents-E#1/36 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdCreateElem/45 Tile{ AsIs: s.CreateMode#1/31 AsIs: s.ElemNo#1/32 AsIs: # ElIdent/33 } Tile{ HalfReuse: s.Num1 #44/28 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[45], ident_CmdCreateElem ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_svar( context[28], context[44] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[29], context[1] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[31], context[33] );
      res = refalrts::splice_evar( res, context[45], context[45] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[34], context[35], context[19], context[20] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( s.idx e.idx ) ( e.idx ) e.idx ( # CmdCreateElem s.idx s.idx # ElIdent e.idx )
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/17 )/8 (/11 s.NextIdent#1/30 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdCreateElem/29 s.CreateMode#1/31 s.ElemNo#1/32 # ElIdent/33 e.Ident#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdCreateElem, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Funcs#1 as range 17
    // closed e.Strings#1 as range 21
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[19], context[20] ) )
      continue;
    // closed e.Idents#1 as range 19
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    context[33] = refalrts::ident_left(  ident_ElIdent, context[25], context[26] );
    if( ! context[33] )
      continue;
    // closed e.Ident#1 as range 25
    //DEBUG: e.Funcs#1: 17
    //DEBUG: e.Strings#1: 21
    //DEBUG: e.Commands#1: 23
    //DEBUG: s.NextIdent#1: 30
    //DEBUG: e.Idents#1: 19
    //DEBUG: s.CreateMode#1: 31
    //DEBUG: s.ElemNo#1: 32
    //DEBUG: e.Ident#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/17 AsIs: )/8 AsIs: (/11 } </34 & Inc/35 s.NextIdent#1/30/36 >/37 Tile{ AsIs: e.Idents#1/19 } (/38 Tile{ AsIs: s.NextIdent#1/30 } Tile{ AsIs: e.Ident#1/25 } )/39 Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdCreateElem/40 Tile{ AsIs: s.CreateMode#1/31 AsIs: s.ElemNo#1/32 AsIs: # ElIdent/33 } Tile{ HalfReuse: s.NextIdent1 #30/28 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[40], ident_CmdCreateElem ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::reinit_svar( context[28], context[30] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[38], context[39] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[34] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[12], context[29] );
    res = refalrts::splice_evar( res, context[39], context[39] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[34], context[37] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( s.idx e.idx ) e.idx ( # CmdCreateElem s.idx s.idx # ElString e.idx )
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/17 )/8 (/11 e.Idents#1/19 )/12 (/15 s.NextStringId#1/30 e.Strings-B#1/34 (/40 s.Id#1/44 e.String#1/42 )/41 e.Strings-E#1/36 )/16 e.Commands#1/23 (/27 # CmdCreateElem/29 s.CreateMode#1/31 s.ElemNo#1/32 # ElString/33 e.String#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdCreateElem, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Funcs#1 as range 17
    // closed e.Idents#1 as range 19
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    context[33] = refalrts::ident_left(  ident_ElString, context[25], context[26] );
    if( ! context[33] )
      continue;
    // closed e.String#1 as range 25
    context[34] = 0;
    context[35] = 0;
    refalrts::start_e_loop();
    do {
      context[36] = context[21];
      context[37] = context[22];
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_left( context[38], context[39], context[36], context[37] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      if( ! refalrts::repeated_evar_right( context[42], context[43], context[25], context[26], context[38], context[39] ) )
        continue;
      // closed e.Strings-E#1 as range 36
      if( ! refalrts::svar_left( context[44], context[38], context[39] ) )
        continue;
      if( ! refalrts::empty_seq( context[38], context[39] ) )
        continue;
      //DEBUG: e.Funcs#1: 17
      //DEBUG: e.Idents#1: 19
      //DEBUG: e.Commands#1: 23
      //DEBUG: s.NextStringId#1: 30
      //DEBUG: s.CreateMode#1: 31
      //DEBUG: s.ElemNo#1: 32
      //DEBUG: e.String#1: 25
      //DEBUG: e.Strings-B#1: 34
      //DEBUG: e.Strings-E#1: 36
      //DEBUG: s.Id#1: 44

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} e.String#1/25 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/17 AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: s.NextStringId#1/30 AsIs: e.Strings-B#1/34 AsIs: (/40 AsIs: s.Id#1/44 AsIs: e.String#1/42 AsIs: )/41 AsIs: e.Strings-E#1/36 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdCreateElem/45 Tile{ AsIs: s.CreateMode#1/31 AsIs: s.ElemNo#1/32 AsIs: # ElString/33 } Tile{ HalfReuse: s.Id1 #44/28 HalfReuse: )/1 ]] }
      if( ! refalrts::alloc_ident( context[45], ident_CmdCreateElem ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_svar( context[28], context[44] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[29], context[1] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[28];
      res = refalrts::splice_evar( res, context[31], context[33] );
      res = refalrts::splice_evar( res, context[45], context[45] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[34], context[35], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( s.idx e.idx ) e.idx ( # CmdCreateElem s.idx s.idx # ElString e.idx )
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/17 )/8 (/11 e.Idents#1/19 )/12 (/15 s.NextStringId#1/30 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdCreateElem/29 s.CreateMode#1/31 s.ElemNo#1/32 # ElString/33 e.String#1/25 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdCreateElem, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Funcs#1 as range 17
    // closed e.Idents#1 as range 19
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[21], context[22] ) )
      continue;
    // closed e.Strings#1 as range 21
    if( ! refalrts::svar_left( context[31], context[25], context[26] ) )
      continue;
    if( ! refalrts::svar_left( context[32], context[25], context[26] ) )
      continue;
    context[33] = refalrts::ident_left(  ident_ElString, context[25], context[26] );
    if( ! context[33] )
      continue;
    // closed e.String#1 as range 25
    //DEBUG: e.Funcs#1: 17
    //DEBUG: e.Idents#1: 19
    //DEBUG: e.Commands#1: 23
    //DEBUG: s.NextStringId#1: 30
    //DEBUG: e.Strings#1: 21
    //DEBUG: s.CreateMode#1: 31
    //DEBUG: s.ElemNo#1: 32
    //DEBUG: e.String#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/17 AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 } </34 & Inc/35 Tile{ AsIs: s.NextStringId#1/30 } >/36 Tile{ AsIs: e.Strings#1/21 } (/37 s.NextStringId#1/30/38 Tile{ AsIs: e.String#1/25 } Tile{ AsIs: )/16 } )/39 Tile{ AsIs: e.Commands#1/23 } >/40 Tile{ AsIs: (/27 AsIs: # CmdCreateElem/29 AsIs: s.CreateMode#1/31 AsIs: s.ElemNo#1/32 AsIs: # ElString/33 } Tile{ HalfReuse: s.NextStringId1 #30/28 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[38], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[28], context[30] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[27], context[1] );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[39] );
    refalrts::link_brackets( context[37], context[16] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[34] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[27], context[33] );
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[39], context[39] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( s.idx e.idx ) e.idx ( # CmdVariableDebugTable e.idx s.idx )
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/17 )/8 (/11 e.Idents#1/19 )/12 (/15 s.NextStringId#1/30 e.Strings-B#1/32 (/38 s.Id#1/42 e.VarName#1/40 )/39 e.Strings-E#1/34 )/16 e.Commands#1/23 (/27 # CmdVariableDebugTable/29 e.VarName#1/25 s.Offset#1/31 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdVariableDebugTable, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Funcs#1 as range 17
    // closed e.Idents#1 as range 19
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[21], context[22] ) )
      continue;
    if( ! refalrts::svar_right( context[31], context[25], context[26] ) )
      continue;
    // closed e.VarName#1 as range 25
    context[32] = 0;
    context[33] = 0;
    refalrts::start_e_loop();
    do {
      context[34] = context[21];
      context[35] = context[22];
      context[36] = 0;
      context[37] = 0;
      context[38] = refalrts::brackets_left( context[36], context[37], context[34], context[35] );
      if( ! context[38] )
        continue;
      refalrts::bracket_pointers(context[38], context[39]);
      if( ! refalrts::repeated_evar_right( context[40], context[41], context[25], context[26], context[36], context[37] ) )
        continue;
      // closed e.Strings-E#1 as range 34
      if( ! refalrts::svar_left( context[42], context[36], context[37] ) )
        continue;
      if( ! refalrts::empty_seq( context[36], context[37] ) )
        continue;
      //DEBUG: e.Funcs#1: 17
      //DEBUG: e.Idents#1: 19
      //DEBUG: e.Commands#1: 23
      //DEBUG: s.NextStringId#1: 30
      //DEBUG: s.Offset#1: 31
      //DEBUG: e.VarName#1: 25
      //DEBUG: e.Strings-B#1: 32
      //DEBUG: e.Strings-E#1: 34
      //DEBUG: s.Id#1: 42

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} e.VarName#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/17 AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: s.NextStringId#1/30 AsIs: e.Strings-B#1/32 AsIs: (/38 AsIs: s.Id#1/42 AsIs: e.VarName#1/40 AsIs: )/39 AsIs: e.Strings-E#1/34 AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdVariableDebugTable/43 Tile{ HalfReuse: s.Id1 #42/1 } Tile{ AsIs: s.Offset#1/31 AsIs: )/28 } Tile{ ]] }
      if( ! refalrts::alloc_ident( context[43], ident_CmdVariableDebugTable ) )
        return refalrts::cNoMemory;
      refalrts::reinit_close_call( context[27] );
      refalrts::reinit_open_bracket( context[29] );
      refalrts::reinit_svar( context[1], context[42] );
      refalrts::link_brackets( context[29], context[28] );
      refalrts::push_stack( context[27] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[38], context[39] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[31], context[28] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[43], context[43] );
      refalrts::splice_to_freelist_open( context[29], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[32], context[33], context[21], context[22] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( s.idx e.idx ) e.idx ( # CmdVariableDebugTable e.idx s.idx )
    // </0 & OutlineConstants/4 (/7 e.Funcs#1/17 )/8 (/11 e.Idents#1/19 )/12 (/15 s.NextStringId#1/30 e.Strings#1/21 )/16 e.Commands#1/23 (/27 # CmdVariableDebugTable/29 e.VarName#1/25 s.Offset#1/31 )/28 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_right( context[25], context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    context[29] = refalrts::ident_left(  ident_CmdVariableDebugTable, context[25], context[26] );
    if( ! context[29] )
      continue;
    // closed e.Funcs#1 as range 17
    // closed e.Idents#1 as range 19
    // closed e.Commands#1 as range 23
    if( ! refalrts::svar_left( context[30], context[21], context[22] ) )
      continue;
    // closed e.Strings#1 as range 21
    if( ! refalrts::svar_right( context[31], context[25], context[26] ) )
      continue;
    // closed e.VarName#1 as range 25
    //DEBUG: e.Funcs#1: 17
    //DEBUG: e.Idents#1: 19
    //DEBUG: e.Commands#1: 23
    //DEBUG: s.NextStringId#1: 30
    //DEBUG: e.Strings#1: 21
    //DEBUG: s.Offset#1: 31
    //DEBUG: e.VarName#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/17 AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 } </32 & Inc/33 Tile{ AsIs: s.NextStringId#1/30 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Strings#1/21 } (/34 s.NextStringId#1/30/35 Tile{ AsIs: e.VarName#1/25 } )/36 Tile{ AsIs: )/16 AsIs: e.Commands#1/23 HalfReuse: >/27 HalfReuse: (/29 } # CmdVariableDebugTable/37 s.NextStringId#1/30/38 Tile{ AsIs: s.Offset#1/31 AsIs: )/28 } Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[35], context[30]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[37], ident_CmdVariableDebugTable ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[38], context[30]))
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[27] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::link_brackets( context[29], context[28] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[34], context[36] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[32] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[28] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[16], context[29] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( e.idx ) e.idx t.idx
  // </0 & OutlineConstants/4 (/7 e.Funcs#1/17 )/8 (/11 e.Idents#1/19 )/12 (/15 e.Strings#1/21 )/16 e.Commands#1/23 t.OtherCommand#1/25 >/1
  context[17] = context[5];
  context[18] = context[6];
  context[19] = context[9];
  context[20] = context[10];
  context[21] = context[13];
  context[22] = context[14];
  context[23] = context[2];
  context[24] = context[3];
  // closed e.Funcs#1 as range 17
  // closed e.Idents#1 as range 19
  // closed e.Strings#1 as range 21
  context[26] = refalrts::tvar_right( context[25], context[23], context[24] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 23
  //DEBUG: e.Funcs#1: 17
  //DEBUG: e.Idents#1: 19
  //DEBUG: e.Strings#1: 21
  //DEBUG: t.OtherCommand#1: 25
  //DEBUG: e.Commands#1: 23

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & OutlineConstants/4 AsIs: (/7 AsIs: e.Funcs#1/17 AsIs: )/8 AsIs: (/11 AsIs: e.Idents#1/19 AsIs: )/12 AsIs: (/15 AsIs: e.Strings#1/21 AsIs: )/16 } Tile{ AsIs: e.Commands#1/23 } Tile{ AsIs: >/1 } Tile{ AsIs: t.OtherCommand#1/25 } Tile{ ]] }
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OutlineConstants("OutlineConstants", 1202773828U, 297103057U, func_OutlineConstants);


//End of file
