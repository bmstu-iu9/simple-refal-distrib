// This file automatically generated from 'LowLevelRASL.sref'
// Don't edit! Edit 'LowLevelRASL.sref' and recompile it

#include "refalrts.h"

static const refalrts::RefalIdentifier ident_AlgLeft = refalrts::ident_from_static("AlgLeft");
static const refalrts::RefalIdentifier ident_CmdCreateElem = refalrts::ident_from_static("CmdCreateElem");
static const refalrts::RefalIdentifier ident_CmdDeclaration = refalrts::ident_from_static("CmdDeclaration");
static const refalrts::RefalIdentifier ident_CmdDefineIdent = refalrts::ident_from_static("CmdDefineIdent");
static const refalrts::RefalIdentifier ident_CmdEmitNativeCode = refalrts::ident_from_static("CmdEmitNativeCode");
static const refalrts::RefalIdentifier ident_CmdEnum = refalrts::ident_from_static("CmdEnum");
static const refalrts::RefalIdentifier ident_CmdNativeFunction = refalrts::ident_from_static("CmdNativeFunction");
static const refalrts::RefalIdentifier ident_CmdNumber = refalrts::ident_from_static("CmdNumber");
static const refalrts::RefalIdentifier ident_CmdNumberSave = refalrts::ident_from_static("CmdNumberSave");
static const refalrts::RefalIdentifier ident_CmdOpenELoop = refalrts::ident_from_static("CmdOpenELoop");
static const refalrts::RefalIdentifier ident_CmdSentence = refalrts::ident_from_static("CmdSentence");
static const refalrts::RefalIdentifier ident_CmdSwap = refalrts::ident_from_static("CmdSwap");
static const refalrts::RefalIdentifier ident_Cookie1 = refalrts::ident_from_static("Cookie1");
static const refalrts::RefalIdentifier ident_Cookie2 = refalrts::ident_from_static("Cookie2");
static const refalrts::RefalIdentifier ident_ElNumber = refalrts::ident_from_static("ElNumber");
static const refalrts::RefalIdentifier ident_Function = refalrts::ident_from_static("Function");
static const refalrts::RefalIdentifier ident_Functionm_ToNative = refalrts::ident_from_static("Function-ToNative");
static const refalrts::RefalIdentifier ident_Functionm_ToRASL = refalrts::ident_from_static("Function-ToRASL");
static const refalrts::RefalIdentifier ident_GNm_Entry = refalrts::ident_from_static("GN-Entry");
static const refalrts::RefalIdentifier ident_GNm_Local = refalrts::ident_from_static("GN-Local");
static const refalrts::RefalIdentifier ident_OnlyDirect = refalrts::ident_from_static("OnlyDirect");
static const refalrts::RefalIdentifier ident_OnlyInterpret = refalrts::ident_from_static("OnlyInterpret");
static refalrts::ExternalReference ref_CalcDigest("CalcDigest", 3079895392U, 1396489177U);
static refalrts::ExternalReference ref_Canonize("Canonize", 3079895392U, 1396489177U);
static refalrts::ExternalReference ref_CharFromScopeClass("CharFromScopeClass", 3079895392U, 1396489177U);
static refalrts::ExternalReference ref_DisplayName("DisplayName", 0U, 0U);
static refalrts::ExternalReference ref_HashFuncName("HashFuncName", 3079895392U, 1396489177U);
static refalrts::ExternalReference ref_HashLittle2m_Chars("HashLittle2-Chars", 0U, 0U);
static refalrts::ExternalReference ref_LowLevelRASL("LowLevelRASL", 0U, 0U);
static refalrts::ExternalReference ref_gen_LowLevelRASL_A1("LowLevelRASL=1", 3079895392U, 1396489177U);
static refalrts::ExternalReference ref_gen_LowLevelRASL_A2("LowLevelRASL=2", 3079895392U, 1396489177U);
static refalrts::ExternalReference ref_gen_LowLevelRASL_A3("LowLevelRASL=3", 3079895392U, 1396489177U);
static refalrts::ExternalReference ref_LowLevelRASLm_Native("LowLevelRASL-Native", 0U, 0U);
static refalrts::ExternalReference ref_LowLevelRASLm_RASL("LowLevelRASL-RASL", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_MarkFunctionGenMode("MarkFunctionGenMode", 3079895392U, 1396489177U);
static refalrts::ExternalReference ref_SetScopeIDs("SetScopeIDs", 3079895392U, 1396489177U);
static refalrts::ExternalReference ref_SetScopeIDsm_Command("SetScopeIDs-Command", 3079895392U, 1396489177U);
static refalrts::ExternalReference ref_SetScopeIDsm_Commands("SetScopeIDs-Commands", 3079895392U, 1396489177U);
static refalrts::ExternalReference ref_SetScopeIDsm_Patch("SetScopeIDs-Patch", 3079895392U, 1396489177U);

static refalrts::FnResult func_gen_LowLevelRASL_A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & LowLevelRASL=3/4 s.DebugInfo#1/5 s.Hash1#2/6 s.Hash2#2/7 e.Items#4/2 >/1
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
  // closed e.Items#4 as range 2
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#2: 6
  //DEBUG: s.Hash2#2: 7
  //DEBUG: e.Items#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & LowLevelRASL-RASL/4 AsIs: s.DebugInfo#1/5 AsIs: s.Hash1#2/6 AsIs: s.Hash2#2/7 AsIs: e.Items#4/2 AsIs: >/1 } </8 & LowLevelRASL-Native/9 s.Hash1#2/6/10 s.Hash2#2/7/11 e.Items#4/2/12 >/14 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_LowLevelRASLm_Native.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[6]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[11], context[7]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_LowLevelRASLm_RASL.ref.function );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A3("LowLevelRASL=3", 3079895392U, 1396489177U, func_gen_LowLevelRASL_A3);


static refalrts::FnResult func_gen_LowLevelRASL_A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & LowLevelRASL=2/4 s.DebugInfo#1/5 s.Hash1#2/6 s.Hash2#2/7 s.GenMode#1/8 e.Items#3/2 >/1
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
  // closed e.Items#3 as range 2
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.Hash1#2: 6
  //DEBUG: s.Hash2#2: 7
  //DEBUG: s.GenMode#1: 8
  //DEBUG: e.Items#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL=3/4 AsIs: s.DebugInfo#1/5 AsIs: s.Hash1#2/6 AsIs: s.Hash2#2/7 } {*}/10 </11 & Map/12 (/13 & MarkFunctionGenMode/14 Tile{ AsIs: s.GenMode#1/8 } )/15 Tile{ AsIs: e.Items#3/2 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[10], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_MarkFunctionGenMode.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_LowLevelRASL_A3.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[13], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A2("LowLevelRASL=2", 3079895392U, 1396489177U, func_gen_LowLevelRASL_A2);


static refalrts::FnResult func_gen_LowLevelRASL_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & LowLevelRASL=1/4 s.DebugInfo#1/5 s.GenMode#1/6 (/9 s.Hash1#2/11 s.Hash2#2/12 )/10 e.Items#2/2 >/1
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
  // closed e.Items#2 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.DebugInfo#1: 5
  //DEBUG: s.GenMode#1: 6
  //DEBUG: e.Items#2: 2
  //DEBUG: s.Hash1#2: 11
  //DEBUG: s.Hash2#2: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & LowLevelRASL=2/13 Tile{ AsIs: s.DebugInfo#1/5 } s.Hash1#2/11/14 s.Hash2#2/12/15 Tile{ AsIs: s.GenMode#1/6 } {*}/16 </17 & Map/18 (/19 Tile{ HalfReuse: & SetScopeIDs/9 AsIs: s.Hash1#2/11 AsIs: s.Hash2#2/12 AsIs: )/10 AsIs: e.Items#2/2 AsIs: >/1 } >/20 Tile{ ]] }
  if( ! refalrts::alloc_name( context[13], ref_gen_LowLevelRASL_A2.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[14], context[11]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[15], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[16], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[9], ref_SetScopeIDs.ref.function );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[19], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASL_A1("LowLevelRASL=1", 3079895392U, 1396489177U, func_gen_LowLevelRASL_A1);


static refalrts::FnResult func_LowLevelRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & LowLevelRASL/4 s.GenMode#1/5 s.DebugInfo#1/6 (/9 e.SrcName#1/7 )/10 e.ProgramElements#1/2 >/1
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
  // closed e.SrcName#1 as range 7
  // closed e.ProgramElements#1 as range 2
  //DEBUG: s.GenMode#1: 5
  //DEBUG: s.DebugInfo#1: 6
  //DEBUG: e.SrcName#1: 7
  //DEBUG: e.ProgramElements#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.GenMode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & LowLevelRASL=1/11 Tile{ AsIs: s.DebugInfo#1/6 HalfReuse: s.GenMode1 #5/9 } {*}/12 </13 & MapReduce/14 & CalcDigest/15 (/16 </17 & HashLittle2-Chars/18 4001567069/19 291363191/20 </21 & Canonize/22 Tile{ AsIs: e.SrcName#1/7 } >/23 >/24 Tile{ AsIs: )/10 AsIs: e.ProgramElements#1/2 AsIs: >/1 } >/25 Tile{ ]] }
  if( ! refalrts::alloc_name( context[11], ref_gen_LowLevelRASL_A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[12], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_CalcDigest.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ref_HashLittle2m_Chars.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[19], 4001567069UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[20], 291363191UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[22], ref_Canonize.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[16], context[10] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[10], context[1] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[22] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( context[4], res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LowLevelRASL("LowLevelRASL", 0U, 0U, func_LowLevelRASL);


static refalrts::FnResult func_Canonize(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Canonize/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx
    // </0 & Canonize/4 e.Canonized#1/7 '\\'/11 e.NotCanonized#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = refalrts::char_left( '\\', context[9], context[10] );
      if( ! context[11] )
        continue;
      // closed e.NotCanonized#1 as range 9
      //DEBUG: e.Canonized#1: 7
      //DEBUG: e.NotCanonized#1: 9

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Canonized#1/7 } Tile{ HalfReuse: '/'/4 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Canonize/11 AsIs: e.NotCanonized#1/9 AsIs: >/1 ]] }
      refalrts::reinit_char( context[4], '/' );
      refalrts::reinit_name( context[11], ref_Canonize.ref.function );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[11];
      res = refalrts::splice_evar( res, context[0], context[0] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & Canonize/4 e.Canonized#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Canonized#1 as range 5
  //DEBUG: e.Canonized#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Canonize/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Canonized#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Canonize("Canonize", 3079895392U, 1396489177U, func_Canonize);


static refalrts::FnResult func_CalcDigest(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: ( s.$ s.$ ) ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ s.$ ) ( s.$ e.$ )
  // </0 & CalcDigest/4 (/7 s.idxB#0/13 s.idxBV#0/14 )/8 (/11 s.idxTB#0/15 e.idxTBV#0/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTBV#0 as range 9
  do {
    // ( s.idx s.idx ) ( # Function s.idx ( e.idx ) e.idx )
    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # Function/15 s.ScopeClass#1/18 (/21 e.Name#1/19 )/22 e.Commands#1/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_Function, context[15] ) )
      continue;
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
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 19
    //DEBUG: e.Commands#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/23 e.Name#1/19/24 'R'/26 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function/15 AsIs: s.ScopeClass#1/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 AsIs: e.Commands#1/16 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_stvar(context[23], context[18]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[24], context[25], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[26], 'R' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_HashFuncName.ref.function );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[23], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx s.idx ) ( # CmdNativeFunction s.idx ( e.idx ) t.idx e.idx )
    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdNativeFunction/15 s.ScopeClass#1/18 (/21 e.Name#1/19 )/22 t.SrcPos#1/23 e.Code#1/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdNativeFunction, context[15] ) )
      continue;
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
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 19
    //DEBUG: t.SrcPos#1: 23
    //DEBUG: e.Code#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/25 e.Name#1/19/26 'N'/28 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdNativeFunction/15 AsIs: s.ScopeClass#1/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 AsIs: t.SrcPos#1/23 AsIs: e.Code#1/16 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_stvar(context[25], context[18]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[28], 'N' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_HashFuncName.ref.function );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[25], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx s.idx ) ( # CmdEnum s.idx e.idx )
    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdEnum/15 s.ScopeClass#1/18 e.Name#1/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdEnum, context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/19 e.Name#1/16/20 'E'/22 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdEnum/15 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/16 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_stvar(context[19], context[18]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[20], context[21], context[16], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'E' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_HashFuncName.ref.function );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx s.idx ) ( # CmdSwap s.idx e.idx )
    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdSwap/15 s.ScopeClass#1/18 e.Name#1/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdSwap, context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/19 e.Name#1/16/20 'S'/22 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdSwap/15 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/16 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_stvar(context[19], context[18]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[20], context[21], context[16], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'S' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_HashFuncName.ref.function );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx s.idx ) ( # CmdDeclaration s.idx e.idx )
    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdDeclaration/15 s.ScopeClass#1/18 e.Name#1/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdDeclaration, context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[18], context[16], context[17] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: s.ScopeClass#1: 18
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & HashFuncName/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 } s.ScopeClass#1/18/19 e.Name#1/16/20 'D'/22 Tile{ AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdDeclaration/15 AsIs: s.ScopeClass#1/18 AsIs: e.Name#1/16 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_stvar(context[19], context[18]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[20], context[21], context[16], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[22], 'D' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[7], ref_HashFuncName.ref.function );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( s.idx s.idx ) ( # CmdDefineIdent e.idx )
    // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdDefineIdent/15 e.Name#1/16 )/12 >/1
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdDefineIdent, context[15] ) )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: s.Hash1#1: 13
    //DEBUG: s.Hash2#1: 14
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & CalcDigest/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 AsIs: )/8 AsIs: (/11 AsIs: # CmdDefineIdent/15 AsIs: e.Name#1/16 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx s.idx ) ( # CmdEmitNativeCode t.idx e.idx )
  // </0 & CalcDigest/4 (/7 s.Hash1#1/13 s.Hash2#1/14 )/8 (/11 # CmdEmitNativeCode/15 t.SrcPos#1/18 e.Code#1/16 )/12 >/1
  context[16] = context[9];
  context[17] = context[10];
  if( ! refalrts::ident_term(  ident_CmdEmitNativeCode, context[15] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::tvar_left( context[18], context[16], context[17] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 16
  //DEBUG: s.Hash1#1: 13
  //DEBUG: s.Hash2#1: 14
  //DEBUG: t.SrcPos#1: 18
  //DEBUG: e.Code#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CalcDigest/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Hash1#1/13 AsIs: s.Hash2#1/14 AsIs: )/8 AsIs: (/11 AsIs: # CmdEmitNativeCode/15 AsIs: t.SrcPos#1/18 AsIs: e.Code#1/16 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CalcDigest("CalcDigest", 3079895392U, 1396489177U, func_CalcDigest);


static refalrts::FnResult func_HashFuncName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & HashFuncName/4 s.Hash1#1/5 s.Hash2#1/6 s.ScopeClass#1/7 e.Name#1/2 s.Sign#1/8 >/1
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
  if( ! refalrts::svar_right( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: s.ScopeClass#1: 7
  //DEBUG: s.Sign#1: 8
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & HashLittle2-Chars/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } </9 & CharFromScopeClass/10 Tile{ AsIs: s.ScopeClass#1/7 } >/11 </12 & DisplayName/13 Tile{ AsIs: e.Name#1/2 } >/14 Tile{ AsIs: s.Sign#1/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_CharFromScopeClass.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ref_DisplayName.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_HashLittle2m_Chars.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_HashFuncName("HashFuncName", 3079895392U, 1396489177U, func_HashFuncName);


static refalrts::FnResult func_CharFromScopeClass(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & CharFromScopeClass/4 s.idx#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // # GN-Entry
    // </0 & CharFromScopeClass/4 # GN-Entry/5 >/1
    if( ! refalrts::ident_term(  ident_GNm_Entry, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & CharFromScopeClass/4 # GN-Entry/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: 'E'/1 ]] }
    refalrts::reinit_char( context[1], 'E' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # GN-Local
  // </0 & CharFromScopeClass/4 # GN-Local/5 >/1
  if( ! refalrts::ident_term(  ident_GNm_Local, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CharFromScopeClass/4 # GN-Local/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: 'L'/1 ]] }
  refalrts::reinit_char( context[1], 'L' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CharFromScopeClass("CharFromScopeClass", 3079895392U, 1396489177U, func_CharFromScopeClass);


static refalrts::FnResult func_SetScopeIDs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  //FAST GEN: s.$ s.$ t.$
  //GLOBAL GEN: s.$ s.$ t.$
  // </0 & SetScopeIDs/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 >/1
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
    // s.idx s.idx ( # Function s.idx ( e.idx ) e.idx )
    // </0 & SetScopeIDs/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # Function/11 s.ScopeClass#1/12 (/15 e.Name#1/13 )/16 e.Commands#1/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_Function, context[9], context[10] );
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
    // closed e.Commands#1 as range 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.ScopeClass#1: 12
    //DEBUG: e.Name#1: 13
    //DEBUG: e.Commands#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/11 AsIs: s.ScopeClass#1/12 AsIs: (/15 AsIs: e.Name#1/13 AsIs: )/16 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Commands/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.Commands#1/9 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_SetScopeIDsm_Commands.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx t.idx
  // </0 & SetScopeIDs/4 s.Hash1#1/5 s.Hash2#1/6 t.OtherItem#1/7 >/1
  //DEBUG: t.OtherItem#1: 7
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDs("SetScopeIDs", 3079895392U, 1396489177U, func_SetScopeIDs);


static refalrts::FnResult func_SetScopeIDsm_Commands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & SetScopeIDs-Commands/4 s.Hash1#1/5 s.Hash2#1/6 e.Commands#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Commands#1 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Commands#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Map/8 Tile{ HalfReuse: (/0 Reuse: & SetScopeIDs-Command/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } )/9 Tile{ AsIs: e.Commands#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::update_name( context[4], ref_SetScopeIDsm_Command.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDsm_Commands("SetScopeIDs-Commands", 3079895392U, 1396489177U, func_SetScopeIDsm_Commands);


static refalrts::FnResult func_SetScopeIDsm_Command(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: s.$ s.$ t.$
  //GLOBAL GEN: s.$ s.$ t.$
  // </0 & SetScopeIDs-Command/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 >/1
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
    // s.idx s.idx ( # CmdNumber s.idx s.idx s.idx )
    // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdNumber/11 s.Direction#1/12 s.BracketNum#1/13 s.Number#1/14 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_CmdNumber, context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.Direction#1: 12
    //DEBUG: s.BracketNum#1: 13
    //DEBUG: s.Number#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Number#1/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 } # CmdNumber/15 Tile{ AsIs: s.Direction#1/12 AsIs: s.BracketNum#1/13 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Patch/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: s.Number1 #14/7 HalfReuse: >/11 } Tile{ HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_ident( context[15], ident_CmdNumber ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::update_name( context[4], ref_SetScopeIDsm_Patch.ref.function );
    refalrts::reinit_svar( context[7], context[14] );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[8], context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # CmdNumberSave s.idx s.idx s.idx s.idx )
    // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdNumberSave/11 s.Direction#1/12 s.BracketNum#1/13 s.SaveOffset#1/14 s.Number#1/15 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_CmdNumberSave, context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.Direction#1: 12
    //DEBUG: s.BracketNum#1: 13
    //DEBUG: s.SaveOffset#1: 14
    //DEBUG: s.Number#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdNumberSave/11 AsIs: s.Direction#1/12 AsIs: s.BracketNum#1/13 AsIs: s.SaveOffset#1/14 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Patch/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: s.Number#1/15 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_SetScopeIDsm_Patch.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # CmdCreateElem s.idx s.idx # ElNumber s.idx )
    // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdCreateElem/11 s.CreateMode#1/12 s.ElemNo#1/13 # ElNumber/14 s.Number#1/15 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_CmdCreateElem, context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    context[14] = refalrts::ident_left(  ident_ElNumber, context[9], context[10] );
    if( ! context[14] )
      continue;
    if( ! refalrts::svar_left( context[15], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.CreateMode#1: 12
    //DEBUG: s.ElemNo#1: 13
    //DEBUG: s.Number#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdCreateElem/11 AsIs: s.CreateMode#1/12 AsIs: s.ElemNo#1/13 AsIs: # ElNumber/14 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Patch/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: s.Number#1/15 HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_SetScopeIDsm_Patch.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # CmdSentence e.idx )
    // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdSentence/11 e.SubCommands#1/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_CmdSentence, context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.SubCommands#1 as range 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: e.SubCommands#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdSentence/11 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Commands/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.SubCommands#1/9 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_SetScopeIDsm_Commands.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # CmdOpenELoop # AlgLeft s.idx s.idx e.idx )
    // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 (/7 # CmdOpenELoop/11 # AlgLeft/12 s.BracketNum#1/13 s.VarNumber#1/14 e.SubCommands#1/9 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_CmdOpenELoop, context[9], context[10] );
    if( ! context[11] )
      continue;
    context[12] = refalrts::ident_left(  ident_AlgLeft, context[9], context[10] );
    if( ! context[12] )
      continue;
    if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    // closed e.SubCommands#1 as range 9
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: s.BracketNum#1: 13
    //DEBUG: s.VarNumber#1: 14
    //DEBUG: e.SubCommands#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdOpenELoop/11 AsIs: # AlgLeft/12 AsIs: s.BracketNum#1/13 AsIs: s.VarNumber#1/14 } Tile{ AsIs: </0 Reuse: & SetScopeIDs-Commands/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } Tile{ AsIs: e.SubCommands#1/9 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_SetScopeIDsm_Commands.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[7], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx t.idx
  // </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 t.OtherCommand#1/7 >/1
  //DEBUG: t.OtherCommand#1: 7
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Command/4 s.Hash1#1/5 s.Hash2#1/6 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherCommand#1/7 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDsm_Command("SetScopeIDs-Command", 3079895392U, 1396489177U, func_SetScopeIDsm_Command);


static refalrts::FnResult func_SetScopeIDsm_Patch(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: s.$ s.$ s.$
  //GLOBAL GEN: s.$ s.$ s.$
  // </0 & SetScopeIDs-Patch/4 s.idx#0/5 s.idxV#0/6 s.idxVV#0/7 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx s.idx # Cookie1
    // </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie1/7 >/1
    if( ! refalrts::ident_term(  ident_Cookie1, context[7] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie1/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Hash11 #5/1 ]] }
    refalrts::reinit_svar( context[1], context[5] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx # Cookie2
    // </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie2/7 >/1
    if( ! refalrts::ident_term(  ident_Cookie2, context[7] ) )
      continue;
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 # Cookie2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Hash21 #6/1 ]] }
    refalrts::reinit_svar( context[1], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx s.idx
  // </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 s.Number#1/7 >/1
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: s.Number#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetScopeIDs-Patch/4 s.Hash1#1/5 s.Hash2#1/6 s.Number#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: s.Number1 #7/1 ]] }
  refalrts::reinit_svar( context[1], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetScopeIDsm_Patch("SetScopeIDs-Patch", 3079895392U, 1396489177U, func_SetScopeIDsm_Patch);


static refalrts::FnResult func_MarkFunctionGenMode(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: s.$ ( s.$ e.$ )
  //GLOBAL GEN: s.$ ( s.$ e.$ )
  // </0 & MarkFunctionGenMode/4 s.idx#0/9 (/7 s.idxVB#0/10 e.idxVBV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBV#0 as range 5
  do {
    // # OnlyInterpret ( # Function s.idx ( e.idx ) e.idx )
    // </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 (/7 # Function/10 s.ScopeClass#1/13 (/16 e.Name#1/14 )/17 e.Commands#1/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term(  ident_OnlyInterpret, context[9] ) )
      continue;
    if( ! refalrts::ident_term(  ident_Function, context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Name#1 as range 14
    // closed e.Commands#1 as range 11
    //DEBUG: s.ScopeClass#1: 13
    //DEBUG: e.Name#1: 14
    //DEBUG: e.Commands#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyInterpret/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToRASL/10 AsIs: s.ScopeClass#1/13 AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 AsIs: e.Commands#1/11 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[10], ident_Functionm_ToRASL );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # OnlyDirect ( # Function s.idx ( e.idx ) e.idx )
    // </0 & MarkFunctionGenMode/4 # OnlyDirect/9 (/7 # Function/10 s.ScopeClass#1/13 (/16 e.Name#1/14 )/17 e.Commands#1/11 )/8 >/1
    context[11] = context[5];
    context[12] = context[6];
    if( ! refalrts::ident_term(  ident_OnlyDirect, context[9] ) )
      continue;
    if( ! refalrts::ident_term(  ident_Function, context[10] ) )
      continue;
    if( ! refalrts::svar_left( context[13], context[11], context[12] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Name#1 as range 14
    // closed e.Commands#1 as range 11
    //DEBUG: s.ScopeClass#1: 13
    //DEBUG: e.Name#1: 14
    //DEBUG: e.Commands#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 # OnlyDirect/9 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Function-ToNative/10 AsIs: s.ScopeClass#1/13 AsIs: (/16 AsIs: e.Name#1/14 AsIs: )/17 AsIs: e.Commands#1/11 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[10], ident_Functionm_ToNative );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( s.idx e.idx )
  // </0 & MarkFunctionGenMode/4 s.GenMode#1/9 (/7 s.Type#1/10 e.Info#1/11 )/8 >/1
  context[11] = context[5];
  context[12] = context[6];
  // closed e.Info#1 as range 11
  //DEBUG: s.GenMode#1: 9
  //DEBUG: s.Type#1: 10
  //DEBUG: e.Info#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & MarkFunctionGenMode/4 s.GenMode#1/9 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.Type#1/10 AsIs: e.Info#1/11 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MarkFunctionGenMode("MarkFunctionGenMode", 3079895392U, 1396489177U, func_MarkFunctionGenMode);


//End of file
