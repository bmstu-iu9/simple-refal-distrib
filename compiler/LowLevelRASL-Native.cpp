// This file automatically generated from 'LowLevelRASL-Native.sref'
// Don't edit! Edit 'LowLevelRASL-Native.sref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_3891527568_831717443
static const refalrts::RefalIdentifier ident_AlgLeft = refalrts::ident_from_static("AlgLeft");
static const refalrts::RefalIdentifier ident_CmdADT = refalrts::ident_from_static("CmdADT");
static const refalrts::RefalIdentifier ident_CmdADTSave = refalrts::ident_from_static("CmdADTSave");
static const refalrts::RefalIdentifier ident_CmdComment = refalrts::ident_from_static("CmdComment");
static const refalrts::RefalIdentifier ident_CmdCookieNS = refalrts::ident_from_static("CmdCookieNS");
static const refalrts::RefalIdentifier ident_CmdCreateElem = refalrts::ident_from_static("CmdCreateElem");
static const refalrts::RefalIdentifier ident_CmdDeclaration = refalrts::ident_from_static("CmdDeclaration");
static const refalrts::RefalIdentifier ident_CmdDefineIdent = refalrts::ident_from_static("CmdDefineIdent");
static const refalrts::RefalIdentifier ident_CmdEmitNativeCode = refalrts::ident_from_static("CmdEmitNativeCode");
static const refalrts::RefalIdentifier ident_CmdEndSentence = refalrts::ident_from_static("CmdEndSentence");
static const refalrts::RefalIdentifier ident_CmdEnum = refalrts::ident_from_static("CmdEnum");
static const refalrts::RefalIdentifier ident_CmdExtern = refalrts::ident_from_static("CmdExtern");
static const refalrts::RefalIdentifier ident_CmdFnEnd = refalrts::ident_from_static("CmdFnEnd");
static const refalrts::RefalIdentifier ident_CmdFnStart = refalrts::ident_from_static("CmdFnStart");
static const refalrts::RefalIdentifier ident_CmdIdent = refalrts::ident_from_static("CmdIdent");
static const refalrts::RefalIdentifier ident_CmdIdentSave = refalrts::ident_from_static("CmdIdentSave");
static const refalrts::RefalIdentifier ident_CmdName = refalrts::ident_from_static("CmdName");
static const refalrts::RefalIdentifier ident_CmdNameSave = refalrts::ident_from_static("CmdNameSave");
static const refalrts::RefalIdentifier ident_CmdNativeFuncDescr = refalrts::ident_from_static("CmdNativeFuncDescr");
static const refalrts::RefalIdentifier ident_CmdNativeFunction = refalrts::ident_from_static("CmdNativeFunction");
static const refalrts::RefalIdentifier ident_CmdOpenELoop = refalrts::ident_from_static("CmdOpenELoop");
static const refalrts::RefalIdentifier ident_CmdOpenedEm_End = refalrts::ident_from_static("CmdOpenedE-End");
static const refalrts::RefalIdentifier ident_CmdOpenedEm_Start = refalrts::ident_from_static("CmdOpenedE-Start");
static const refalrts::RefalIdentifier ident_CmdProfileFunction = refalrts::ident_from_static("CmdProfileFunction");
static const refalrts::RefalIdentifier ident_CmdSentence = refalrts::ident_from_static("CmdSentence");
static const refalrts::RefalIdentifier ident_CmdStartSentence = refalrts::ident_from_static("CmdStartSentence");
static const refalrts::RefalIdentifier ident_CmdSwap = refalrts::ident_from_static("CmdSwap");
static const refalrts::RefalIdentifier ident_CmdVariableDebugTable = refalrts::ident_from_static("CmdVariableDebugTable");
static const refalrts::RefalIdentifier ident_ElIdent = refalrts::ident_from_static("ElIdent");
static const refalrts::RefalIdentifier ident_ElName = refalrts::ident_from_static("ElName");
static const refalrts::RefalIdentifier ident_Extern = refalrts::ident_from_static("Extern");
static const refalrts::RefalIdentifier ident_Functionm_ToNative = refalrts::ident_from_static("Function-ToNative");
static const refalrts::RefalIdentifier ident_Functionm_ToRASL = refalrts::ident_from_static("Function-ToRASL");
static const refalrts::RefalIdentifier ident_GNm_Entry = refalrts::ident_from_static("GN-Entry");
static const refalrts::RefalIdentifier ident_GNm_Local = refalrts::ident_from_static("GN-Local");
static const refalrts::RefalIdentifier ident_Hash = refalrts::ident_from_static("Hash");
static const refalrts::RefalIdentifier ident_Ident = refalrts::ident_from_static("Ident");
static const refalrts::RefalIdentifier ident_REQUEST = refalrts::ident_from_static("REQUEST");
static refalrts::ExternalReference ref_AddDefinition("AddDefinition", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_ClassifyItemsm_Native("ClassifyItems-Native", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_ConvertDirectCommands("ConvertDirectCommands", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_FillImplicitDeclarations("FillImplicitDeclarations", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_LowLevelRASLm_Native("LowLevelRASL-Native", 0U, 0U);
static refalrts::ExternalReference ref_gen_LowLevelRASLm_Native_B1("LowLevelRASL-Native:1", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_gen_LowLevelRASLm_Native_B1S2A1("LowLevelRASL-Native:1$2=1", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_gen_LowLevelRASLm_Native_B1S2A2("LowLevelRASL-Native:1$2=2", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_gen_LowLevelRASLm_Native_A1("LowLevelRASL-Native=1", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_MakeRequestCommand("MakeRequestCommand", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_MingleName("MingleName", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_PrepareFunctionsRASL("PrepareFunctionsRASL", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_SetCookies("SetCookies", 3891527568U, 831717443U);
static refalrts::ExternalReference ref_Sort("Sort", 0U, 0U);
static refalrts::ExternalReference ref_StrFromInt("StrFromInt", 0U, 0U);
static refalrts::ExternalReference ref_UniqSorted("UniqSorted", 3891527568U, 831717443U);

static refalrts::FnResult func_gen_LowLevelRASLm_Native_B1S2A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & LowLevelRASL-Native:1$2=2/4 s.Hash1#1/9 s.Hash2#1/10 e.DefinitionsRASL#5/2 (/7 e.Declarations#5/5 )/8 >/1
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
  // closed e.Declarations#5 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.DefinitionsRASL#5 as range 2
  //DEBUG: e.Declarations#5: 5
  //DEBUG: s.Hash1#1: 9
  //DEBUG: s.Hash2#1: 10
  //DEBUG: e.DefinitionsRASL#5: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Declarations#5/5 } Tile{ AsIs: e.DefinitionsRASL#5/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_CmdCookieNS );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_B1S2A2("LowLevelRASL-Native:1$2=2", 3891527568U, 831717443U, func_gen_LowLevelRASLm_Native_B1S2A2);


static refalrts::FnResult func_gen_LowLevelRASLm_Native_B1S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & LowLevelRASL-Native:1$2=1/4 s.Hash1#1/5 s.Hash2#1/6 (/9 e.Declarations#3/7 )/10 e.DefinitionsRASL#4/2 >/1
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
  // closed e.Declarations#3 as range 7
  // closed e.DefinitionsRASL#4 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Declarations#3: 7
  //DEBUG: e.DefinitionsRASL#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL-Native:1$2=2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: {*}/9 } </12 & FillImplicitDeclarations/13 Tile{ AsIs: e.DefinitionsRASL#4/2 } (/14 Tile{ AsIs: e.Declarations#3/7 } Tile{ AsIs: )/10 } >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ref_FillImplicitDeclarations.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_LowLevelRASLm_Native_B1S2A2.ref.function );
  refalrts::reinit_unwrapped_closure( context[9], context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[14], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[9] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_B1S2A1("LowLevelRASL-Native:1$2=1", 3891527568U, 831717443U, func_gen_LowLevelRASLm_Native_B1S2A1);


static refalrts::FnResult func_gen_LowLevelRASLm_Native_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) e.$
  // </0 & LowLevelRASL-Native:1/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 e.idxVVT#0/2 >/1
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
  // closed e.idxVVB#0 as range 7
  // closed e.idxVVT#0 as range 2
  do {
    // s.idx s.idx ( e.idx )
    // </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 (/9 e.Declarations#3/11 )/10 >/1
    context[11] = context[7];
    context[12] = context[8];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Declarations#3 as range 11
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: e.Declarations#3: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 (/9 e.Declarations#3/11 )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx ( e.idx ) e.idx
  // </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 (/9 e.Declarations#3/11 )/10 e.Definitions#3/13 >/1
  context[11] = context[7];
  context[12] = context[8];
  context[13] = context[2];
  context[14] = context[3];
  // closed e.Declarations#3 as range 11
  // closed e.Definitions#3 as range 13
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Declarations#3: 11
  //DEBUG: e.Definitions#3: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL-Native:1$2=1/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 AsIs: (/9 AsIs: e.Declarations#3/11 AsIs: )/10 } {*}/16 </17 & Map/18 & PrepareFunctionsRASL/19 Tile{ AsIs: e.Definitions#3/13 } >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[16], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[18], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_PrepareFunctionsRASL.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_LowLevelRASLm_Native_B1S2A1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[19] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_B1("LowLevelRASL-Native:1", 3891527568U, 831717443U, func_gen_LowLevelRASLm_Native_B1);


static refalrts::FnResult func_gen_LowLevelRASLm_Native_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & LowLevelRASL-Native=1/4 s.Hash1#1/5 s.Hash2#1/6 e.Items#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#2 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Items#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL-Native:1/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } {*}/8 </9 & MapReduce/10 & ClassifyItems-Native/11 (/12 )/13 Tile{ AsIs: e.Items#2/2 } >/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[8], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_ClassifyItemsm_Native.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_LowLevelRASLm_Native_B1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_A1("LowLevelRASL-Native=1", 3891527568U, 831717443U, func_gen_LowLevelRASLm_Native_A1);


static refalrts::FnResult func_LowLevelRASLm_Native(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & LowLevelRASL-Native/4 s.Hash1#1/5 s.Hash2#1/6 e.Items#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Items#1 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL-Native=1/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } {*}/8 </9 & Map/10 (/11 & SetCookies/12 s.Hash1#1/5/13 s.Hash2#1/6/14 )/15 Tile{ AsIs: e.Items#1/2 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[8], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_SetCookies.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[13], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[14], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_LowLevelRASLm_Native_A1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[11], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[15] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LowLevelRASLm_Native("LowLevelRASL-Native", 0U, 0U, func_LowLevelRASLm_Native);


static refalrts::FnResult func_SetCookies(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  //FAST GEN: s.$ s.$ ( s.$ e.$ )
  //GLOBAL GEN: s.$ s.$ ( s.$ e.$ )
  // </0 & SetCookies/4 s.idx#0/9 s.idxV#0/10 (/7 s.idxVVB#0/11 e.idxVVBV#0/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVBV#0 as range 5
  do {
    // s.idx s.idx ( # Function-ToRASL s.idx ( e.idx ) e.idx )
    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToRASL/11 s.ScopeClass#1/14 (/17 e.Name#1/15 )/18 e.Commands#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_Functionm_ToRASL, context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Name#1 as range 15
    // closed e.Commands#1 as range 12
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Commands#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function-ToRASL/4 } Tile{ AsIs: (/17 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 } Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/18 AsIs: e.Commands#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Functionm_ToRASL );
    refalrts::reinit_open_call( context[1] );
    refalrts::reinit_name( context[11], ref_MingleName.ref.function );
    refalrts::reinit_close_call( context[7] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[8] );
    res = refalrts::splice_evar( res, context[9], context[7] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # Function-ToNative s.idx ( e.idx ) e.idx )
    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToNative/11 s.ScopeClass#1/14 (/17 e.Name#1/15 )/18 e.Commands#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_Functionm_ToNative, context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Name#1 as range 15
    // closed e.Commands#1 as range 12
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Commands#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function-ToNative/4 } Tile{ AsIs: (/17 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 } Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/18 AsIs: e.Commands#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Functionm_ToNative );
    refalrts::reinit_open_call( context[1] );
    refalrts::reinit_name( context[11], ref_MingleName.ref.function );
    refalrts::reinit_close_call( context[7] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[8] );
    res = refalrts::splice_evar( res, context[9], context[7] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # CmdNativeFunction s.idx ( e.idx ) t.idx e.idx )
    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdNativeFunction/11 s.ScopeClass#1/14 (/17 e.Name#1/15 )/18 t.SrcPos#1/19 e.Code#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_CmdNativeFunction, context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Name#1 as range 15
    context[20] = refalrts::tvar_left( context[19], context[12], context[13] );
    if( ! context[20] )
      continue;
    // closed e.Code#1 as range 12
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.Name#1: 15
    //DEBUG: t.SrcPos#1: 19
    //DEBUG: e.Code#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdNativeFunction/4 } Tile{ AsIs: (/17 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 } Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/18 AsIs: t.SrcPos#1/19 AsIs: e.Code#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdNativeFunction );
    refalrts::reinit_open_call( context[1] );
    refalrts::reinit_name( context[11], ref_MingleName.ref.function );
    refalrts::reinit_close_call( context[7] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[8] );
    res = refalrts::splice_evar( res, context[9], context[7] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # CmdEnum s.idx e.idx )
    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdEnum/11 s.ScopeClass#1/14 e.Name#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_CmdEnum, context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.Name#1 as range 12
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.Name#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 } Tile{ HalfReuse: </7 HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/12 HalfReuse: s.Hash11 #9/8 HalfReuse: s.Hash21 #10/1 } >/15 )/16 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdEnum );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[11], ref_MingleName.ref.function );
    refalrts::reinit_svar( context[8], context[9] );
    refalrts::reinit_svar( context[1], context[10] );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # CmdSwap s.idx e.idx )
    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdSwap/11 s.ScopeClass#1/14 e.Name#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_CmdSwap, context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.Name#1 as range 12
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.Name#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdSwap/4 } Tile{ HalfReuse: </7 HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/12 HalfReuse: s.Hash11 #9/8 HalfReuse: s.Hash21 #10/1 } >/15 )/16 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdSwap );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[11], ref_MingleName.ref.function );
    refalrts::reinit_svar( context[8], context[9] );
    refalrts::reinit_svar( context[1], context[10] );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # CmdDeclaration s.idx e.idx )
    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdDeclaration/11 s.ScopeClass#1/14 e.Name#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_CmdDeclaration, context[11] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.Name#1 as range 12
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.Name#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdDeclaration/4 } Tile{ HalfReuse: </7 HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/12 HalfReuse: s.Hash11 #9/8 HalfReuse: s.Hash21 #10/1 } >/15 )/16 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdDeclaration );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[11], ref_MingleName.ref.function );
    refalrts::reinit_svar( context[8], context[9] );
    refalrts::reinit_svar( context[1], context[10] );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( # CmdDefineIdent e.idx )
    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdDefineIdent/11 e.Name#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_CmdDefineIdent, context[11] ) )
      continue;
    // closed e.Name#1 as range 12
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: e.Name#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdDefineIdent/11 AsIs: e.Name#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx ( # CmdEmitNativeCode t.idx e.idx )
  // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdEmitNativeCode/11 t.SrcPos#1/14 e.Code#1/12 )/8 >/1
  context[12] = context[5];
  context[13] = context[6];
  if( ! refalrts::ident_term(  ident_CmdEmitNativeCode, context[11] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 12
  //DEBUG: s.Hash1#1: 9
  //DEBUG: s.Hash2#1: 10
  //DEBUG: t.SrcPos#1: 14
  //DEBUG: e.Code#1: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdEmitNativeCode/11 AsIs: t.SrcPos#1/14 AsIs: e.Code#1/12 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SetCookies("SetCookies", 3891527568U, 831717443U, func_SetCookies);


static refalrts::FnResult func_MingleName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: s.$ e.$ s.$ s.$
  //GLOBAL GEN: s.$ e.$ s.$ s.$
  // </0 & MingleName/4 s.idx#0/5 e.idxV#0/2 s.idxVV#0/7 s.idxVVV#0/6 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_right( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # GN-Entry e.idx s.idx s.idx
    // </0 & MingleName/4 # GN-Entry/5 e.Name#1/8 s.Hash1#1/7 s.Hash2#1/6 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term(  ident_GNm_Entry, context[5] ) )
      continue;
    // closed e.Name#1 as range 8
    //DEBUG: s.Hash1#1: 7
    //DEBUG: s.Hash2#1: 6
    //DEBUG: e.Name#1: 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Hash1#1/7 s.Hash2#1/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/8 } Tile{ Reuse: # Hash/5 } Tile{ HalfReuse: 0/4 } Tile{ HalfReuse: 0/1 ]] }
    refalrts::update_ident( context[5], ident_Hash );
    refalrts::reinit_number( context[4], 0UL );
    refalrts::reinit_number( context[1], 0UL );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # GN-Local e.idx s.idx s.idx
  // </0 & MingleName/4 # GN-Local/5 e.Name#1/8 s.Hash1#1/7 s.Hash2#1/6 >/1
  context[8] = context[2];
  context[9] = context[3];
  if( ! refalrts::ident_term(  ident_GNm_Local, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 8
  //DEBUG: s.Hash1#1: 7
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Name#1: 8

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & MingleName/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/8 } Tile{ Reuse: # Hash/5 } Tile{ AsIs: s.Hash1#1/7 AsIs: s.Hash2#1/6 } Tile{ ]] }
  refalrts::update_ident( context[5], ident_Hash );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[6] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MingleName("MingleName", 3891527568U, 831717443U, func_MingleName);


static refalrts::FnResult func_ClassifyItemsm_Native(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  //FAST GEN: ( e.$ ) ( s.$ e.$ )
  //GLOBAL GEN: ( e.$ ) ( s.$ e.$ )
  // </0 & ClassifyItems-Native/4 (/7 e.idxB#0/5 )/8 (/11 s.idxTB#0/13 e.idxTBV#0/9 )/12 >/1
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
    // ( e.idx ) ( # Function-ToRASL ( e.idx ) e.idx )
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/14 )/8 (/11 # Function-ToRASL/13 (/20 e.Name#1/18 )/21 e.Commands#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_Functionm_ToRASL, context[13] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.Declarations#1 as range 14
    // closed e.Name#1 as range 18
    // closed e.Commands#1 as range 16
    //DEBUG: e.Declarations#1: 14
    //DEBUG: e.Name#1: 18
    //DEBUG: e.Commands#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} e.Commands#1/16 )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/14 } Tile{ HalfReuse: (/13 HalfReuse: # CmdExtern/20 AsIs: e.Name#1/18 AsIs: )/21 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[20], ident_CmdExtern );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[13], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[21] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Function-ToNative ( e.idx ) e.idx )
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/14 )/8 (/11 # Function-ToNative/13 (/20 e.Name#1/18 )/21 e.Body#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_Functionm_ToNative, context[13] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.Declarations#1 as range 14
    // closed e.Name#1 as range 18
    // closed e.Body#1 as range 16
    //DEBUG: e.Declarations#1: 14
    //DEBUG: e.Name#1: 18
    //DEBUG: e.Body#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/14 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # CmdExtern/4 } e.Name#1/18/22 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function-ToNative/13 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: e.Body#1/16 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[22], context[23], context[18], context[19]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdExtern );
    refalrts::reinit_close_bracket( context[1] );
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
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # CmdNativeFunction ( e.idx ) t.idx e.idx )
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/14 )/8 (/11 # CmdNativeFunction/13 (/20 e.Name#1/18 )/21 t.SrcPos#1/22 e.Code#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdNativeFunction, context[13] ) )
      continue;
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    // closed e.Declarations#1 as range 14
    // closed e.Name#1 as range 18
    context[23] = refalrts::tvar_left( context[22], context[16], context[17] );
    if( ! context[23] )
      continue;
    // closed e.Code#1 as range 16
    //DEBUG: e.Declarations#1: 14
    //DEBUG: e.Name#1: 18
    //DEBUG: t.SrcPos#1: 22
    //DEBUG: e.Code#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/14 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # CmdExtern/1 } e.Name#1/18/24 Tile{ HalfReuse: )/4 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdNativeFunction/13 AsIs: (/20 AsIs: e.Name#1/18 AsIs: )/21 AsIs: t.SrcPos#1/22 AsIs: e.Code#1/16 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_evar(context[24], context[25], context[18], context[19]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[1], ident_CmdExtern );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # CmdEnum e.idx )
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/14 )/8 (/11 # CmdEnum/13 e.Name#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdEnum, context[13] ) )
      continue;
    // closed e.Declarations#1 as range 14
    // closed e.Name#1 as range 16
    //DEBUG: e.Declarations#1: 14
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/14 } Tile{ AsIs: (/11 Reuse: # CmdExtern/13 AsIs: e.Name#1/16 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[13], ident_CmdExtern );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # CmdSwap e.idx )
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/14 )/8 (/11 # CmdSwap/13 e.Name#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdSwap, context[13] ) )
      continue;
    // closed e.Declarations#1 as range 14
    // closed e.Name#1 as range 16
    //DEBUG: e.Declarations#1: 14
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/14 } Tile{ AsIs: (/11 Reuse: # CmdExtern/13 AsIs: e.Name#1/16 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[13], ident_CmdExtern );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # CmdDeclaration e.idx )
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/14 )/8 (/11 # CmdDeclaration/13 e.Name#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdDeclaration, context[13] ) )
      continue;
    // closed e.Declarations#1 as range 14
    // closed e.Name#1 as range 16
    //DEBUG: e.Declarations#1: 14
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/14 } Tile{ AsIs: (/11 Reuse: # CmdExtern/13 AsIs: e.Name#1/16 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[13], ident_CmdExtern );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # CmdDefineIdent e.idx )
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/14 )/8 (/11 # CmdDefineIdent/13 e.Name#1/16 )/12 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[9];
    context[17] = context[10];
    if( ! refalrts::ident_term(  ident_CmdDefineIdent, context[13] ) )
      continue;
    // closed e.Declarations#1 as range 14
    // closed e.Name#1 as range 16
    //DEBUG: e.Declarations#1: 14
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/14 } Tile{ AsIs: (/11 AsIs: # CmdDefineIdent/13 AsIs: e.Name#1/16 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( # CmdEmitNativeCode t.idx e.idx )
  // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/14 )/8 (/11 # CmdEmitNativeCode/13 t.SrcPos#1/18 e.Code#1/16 )/12 >/1
  context[14] = context[5];
  context[15] = context[6];
  context[16] = context[9];
  context[17] = context[10];
  if( ! refalrts::ident_term(  ident_CmdEmitNativeCode, context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Declarations#1 as range 14
  context[19] = refalrts::tvar_left( context[18], context[16], context[17] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 16
  //DEBUG: e.Declarations#1: 14
  //DEBUG: t.SrcPos#1: 18
  //DEBUG: e.Code#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ClassifyItems-Native/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Declarations#1/14 AsIs: )/8 AsIs: (/11 AsIs: # CmdEmitNativeCode/13 AsIs: t.SrcPos#1/18 AsIs: e.Code#1/16 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ClassifyItemsm_Native("ClassifyItems-Native", 3891527568U, 831717443U, func_ClassifyItemsm_Native);


static refalrts::FnResult func_PrepareFunctionsRASL(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: ( s.$ t.$ e.$ )
  //GLOBAL GEN: ( s.$ t.$ e.$ )
  // </0 & PrepareFunctionsRASL/4 (/7 s.idxB#0/9 t.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBVV#0 as range 5
  do {
    // ( # Function-ToNative ( e.idx ) e.idx )
    // </0 & PrepareFunctionsRASL/4 (/7 # Function-ToNative/9 (/10 e.Name#1/14 )/11 e.Body#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  ident_Functionm_ToNative, context[9] ) )
      continue;
    // closed e.Name#1 as range 14
    // closed e.Body#1 as range 12
    //DEBUG: e.Name#1: 14
    //DEBUG: e.Body#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/16 # CmdFnStart/17 e.Name#1/14/18 Tile{ AsIs: )/8 HalfReuse: (/1 } # CmdProfileFunction/20 )/21 </22 & ConvertDirectCommands/23 Tile{ AsIs: e.Body#1/12 } >/24 Tile{ HalfReuse: (/0 HalfReuse: # CmdFnEnd/4 HalfReuse: )/7 HalfReuse: (/9 HalfReuse: # CmdNativeFuncDescr/10 AsIs: e.Name#1/14 AsIs: )/11 } Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[17], ident_CmdFnStart ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[18], context[19], context[14], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[20], ident_CmdProfileFunction ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], ref_ConvertDirectCommands.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdFnEnd );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_ident( context[10], ident_CmdNativeFuncDescr );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[22] );
    refalrts::link_brackets( context[1], context[21] );
    refalrts::link_brackets( context[16], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdNativeFunction ( e.idx ) t.idx e.idx )
    // </0 & PrepareFunctionsRASL/4 (/7 # CmdNativeFunction/9 (/10 e.Name#1/14 )/11 t.SrcPos#1/16 e.Code#1/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    if( ! refalrts::ident_term(  ident_CmdNativeFunction, context[9] ) )
      continue;
    // closed e.Name#1 as range 14
    context[17] = refalrts::tvar_left( context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    // closed e.Code#1 as range 12
    //DEBUG: e.Name#1: 14
    //DEBUG: t.SrcPos#1: 16
    //DEBUG: e.Code#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/10 } # CmdFnStart/18 Tile{ AsIs: e.Name#1/14 } )/19 (/20 Tile{ HalfReuse: # CmdEmitNativeCode/11 AsIs: t.SrcPos#1/16 AsIs: e.Code#1/12 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # CmdFnEnd/0 HalfReuse: )/4 AsIs: (/7 Reuse: # CmdNativeFuncDescr/9 } e.Name#1/14/21 )/23 Tile{ ]] }
    if( ! refalrts::alloc_ident( context[18], ident_CmdFnStart ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[14], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[11], ident_CmdEmitNativeCode );
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_ident( context[0], ident_CmdFnEnd );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::update_ident( context[9], ident_CmdNativeFuncDescr );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::link_brackets( context[1], context[4] );
    refalrts::link_brackets( context[20], context[8] );
    refalrts::link_brackets( context[10], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # CmdEmitNativeCode t.idx e.idx )
  // </0 & PrepareFunctionsRASL/4 (/7 # CmdEmitNativeCode/9 t.SrcPos#1/10 e.Code#1/12 )/8 >/1
  context[12] = context[5];
  context[13] = context[6];
  if( ! refalrts::ident_term(  ident_CmdEmitNativeCode, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 12
  //DEBUG: t.SrcPos#1: 10
  //DEBUG: e.Code#1: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & PrepareFunctionsRASL/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdEmitNativeCode/9 AsIs: t.SrcPos#1/10 AsIs: e.Code#1/12 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_PrepareFunctionsRASL("PrepareFunctionsRASL", 3891527568U, 831717443U, func_PrepareFunctionsRASL);


static refalrts::FnResult func_ConvertDirectCommands(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & ConvertDirectCommands/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( # CmdSentence e.idx ) e.idx
    // </0 & ConvertDirectCommands/4 (/9 # CmdSentence/11 e.SubCommands#1/7 )/10 e.Tail#1/5 >/1
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
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdStartSentence/4 HalfReuse: )/9 HalfReuse: </11 } & ConvertDirectCommands/12 Tile{ AsIs: e.SubCommands#1/7 } >/13 (/14 # CmdEndSentence/15 )/16 </17 Tile{ HalfReuse: & ConvertDirectCommands/10 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[12], ref_ConvertDirectCommands.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[15], ident_CmdEndSentence ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdStartSentence );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[10], ref_ConvertDirectCommands.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[14], context[16] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[0], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[13], context[17] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdOpenELoop # AlgLeft s.idx s.idx e.idx ) e.idx
    // </0 & ConvertDirectCommands/4 (/9 # CmdOpenELoop/11 # AlgLeft/12 s.BracketNum#1/13 s.VarNumber#1/14 e.SubCommands#1/7 )/10 e.Tail#1/5 >/1
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } # CmdOpenedE-Start/15 # AlgLeft/16 s.BracketNum#1/13/17 s.VarNumber#1/14/18 )/19 </20 & ConvertDirectCommands/21 Tile{ AsIs: e.SubCommands#1/7 } Tile{ HalfReuse: >/4 AsIs: (/9 Reuse: # CmdOpenedE-End/11 AsIs: # AlgLeft/12 AsIs: s.BracketNum#1/13 AsIs: s.VarNumber#1/14 } )/22 </23 Tile{ HalfReuse: & ConvertDirectCommands/10 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[15], ident_CmdOpenedEm_Start ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], ident_AlgLeft ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[17], context[13]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[18], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ref_ConvertDirectCommands.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_call( context[4] );
    refalrts::update_ident( context[11], ident_CmdOpenedEm_End );
    refalrts::reinit_name( context[10], ref_ConvertDirectCommands.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[9], context[22] );
    refalrts::push_stack( context[4] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[0], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[4], context[14] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdVariableDebugTable s.idx e.idx s.idx s.idx ) e.idx
    // </0 & ConvertDirectCommands/4 (/9 # CmdVariableDebugTable/11 s.Mode#1/12 e.Index#1/7 s.Depth#1/14 s.Offset#1/13 )/10 e.Tail#1/5 >/1
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/15 # CmdComment/16"DEB"/17 Tile{ HalfReuse: 'U'/0 HalfReuse: 'G'/4 HalfReuse: ':'/9 HalfReuse: ' '/11 AsIs: s.Mode#1/12 } '.'/19 Tile{ AsIs: e.Index#1/7 } '#'/20 </21 & StrFromInt/22 Tile{ AsIs: s.Depth#1/14 } >/23": "/24 </26 & StrFromInt/27 Tile{ AsIs: s.Offset#1/13 } >/28 )/29 </30 Tile{ HalfReuse: & ConvertDirectCommands/10 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], ident_CmdComment ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[17], context[18], "DEB", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '.' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[20], '#' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ref_StrFromInt.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], ": ", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], ref_StrFromInt.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'U' );
    refalrts::reinit_char( context[4], 'G' );
    refalrts::reinit_char( context[9], ':' );
    refalrts::reinit_char( context[11], ' ' );
    refalrts::reinit_name( context[10], ref_ConvertDirectCommands.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[15], context[29] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[23], context[27] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[15], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx e.idx
    // </0 & ConvertDirectCommands/4 t.Command#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: t.Command#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeRequestCommand/4 AsIs: t.Command#1/7 } >/9 t.Command#1/7/10 </12 & ConvertDirectCommands/13 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[9] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[10], context[11], context[7], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_ConvertDirectCommands.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_MakeRequestCommand.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & ConvertDirectCommands/4 >/1
  context[5] = context[2];
  context[6] = context[3];
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ConvertDirectCommands/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ConvertDirectCommands("ConvertDirectCommands", 3891527568U, 831717443U, func_ConvertDirectCommands);


static refalrts::FnResult func_MakeRequestCommand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & MakeRequestCommand/4 t.idx#0/5 >/1
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
    // ( # CmdName s.idx s.idx e.idx )
    // </0 & MakeRequestCommand/4 (/5 # CmdName/9 s.Direction#1/10 s.BracketNum#1/11 e.Func#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CmdName, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    // closed e.Func#1 as range 7
    //DEBUG: s.Direction#1: 10
    //DEBUG: s.BracketNum#1: 11
    //DEBUG: e.Func#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # CmdName/9 s.Direction#1/10 s.BracketNum#1/11 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Extern/5 } Tile{ AsIs: e.Func#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_REQUEST );
    refalrts::reinit_ident( context[5], ident_Extern );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdNameSave s.idx s.idx s.idx e.idx )
    // </0 & MakeRequestCommand/4 (/5 # CmdNameSave/9 s.Direction#1/10 s.BracketNum#1/11 s.SaveOffset#1/12 e.Func#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CmdNameSave, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Func#1 as range 7
    //DEBUG: s.Direction#1: 10
    //DEBUG: s.BracketNum#1: 11
    //DEBUG: s.SaveOffset#1: 12
    //DEBUG: e.Func#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # CmdNameSave/9 s.Direction#1/10 s.BracketNum#1/11 s.SaveOffset#1/12 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Extern/5 } Tile{ AsIs: e.Func#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_REQUEST );
    refalrts::reinit_ident( context[5], ident_Extern );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdCreateElem s.idx s.idx # ElName e.idx )
    // </0 & MakeRequestCommand/4 (/5 # CmdCreateElem/9 s.CreateMode#1/10 s.ElemNo#1/11 # ElName/12 e.Func#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CmdCreateElem, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    context[12] = refalrts::ident_left(  ident_ElName, context[7], context[8] );
    if( ! context[12] )
      continue;
    // closed e.Func#1 as range 7
    //DEBUG: s.CreateMode#1: 10
    //DEBUG: s.ElemNo#1: 11
    //DEBUG: e.Func#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & MakeRequestCommand/4 {REMOVED TILE} s.CreateMode#1/10 s.ElemNo#1/11 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # REQUEST/9 } Tile{ Reuse: # Extern/12 AsIs: e.Func#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::update_ident( context[9], ident_REQUEST );
    refalrts::update_ident( context[12], ident_Extern );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[6] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdADT s.idx s.idx s.idx e.idx )
    // </0 & MakeRequestCommand/4 (/5 # CmdADT/9 s.Direction#1/10 s.BracketNum#1/11 s.InnerBrackets#1/12 e.Func#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CmdADT, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Func#1 as range 7
    //DEBUG: s.Direction#1: 10
    //DEBUG: s.BracketNum#1: 11
    //DEBUG: s.InnerBrackets#1: 12
    //DEBUG: e.Func#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # CmdADT/9 s.Direction#1/10 s.BracketNum#1/11 s.InnerBrackets#1/12 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Extern/5 } Tile{ AsIs: e.Func#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_REQUEST );
    refalrts::reinit_ident( context[5], ident_Extern );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdADTSave s.idx s.idx s.idx e.idx )
    // </0 & MakeRequestCommand/4 (/5 # CmdADTSave/9 s.Direction#1/10 s.BracketNum#1/11 s.InnerBrackets#1/12 e.Func#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CmdADTSave, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Func#1 as range 7
    //DEBUG: s.Direction#1: 10
    //DEBUG: s.BracketNum#1: 11
    //DEBUG: s.InnerBrackets#1: 12
    //DEBUG: e.Func#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # CmdADTSave/9 s.Direction#1/10 s.BracketNum#1/11 s.InnerBrackets#1/12 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Extern/5 } Tile{ AsIs: e.Func#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_REQUEST );
    refalrts::reinit_ident( context[5], ident_Extern );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdIdent s.idx s.idx e.idx )
    // </0 & MakeRequestCommand/4 (/5 # CmdIdent/9 s.Direction#1/10 s.BracketNum#1/11 e.Ident#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CmdIdent, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    // closed e.Ident#1 as range 7
    //DEBUG: s.Direction#1: 10
    //DEBUG: s.BracketNum#1: 11
    //DEBUG: e.Ident#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # CmdIdent/9 s.Direction#1/10 s.BracketNum#1/11 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Ident/5 } Tile{ AsIs: e.Ident#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_REQUEST );
    refalrts::reinit_ident( context[5], ident_Ident );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdIdentSave s.idx s.idx s.idx e.idx )
    // </0 & MakeRequestCommand/4 (/5 # CmdIdentSave/9 s.Direction#1/10 s.BracketNum#1/11 s.SaveOffset#1/12 e.Ident#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CmdIdentSave, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Ident#1 as range 7
    //DEBUG: s.Direction#1: 10
    //DEBUG: s.BracketNum#1: 11
    //DEBUG: s.SaveOffset#1: 12
    //DEBUG: e.Ident#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # CmdIdentSave/9 s.Direction#1/10 s.BracketNum#1/11 s.SaveOffset#1/12 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Ident/5 } Tile{ AsIs: e.Ident#1/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_REQUEST );
    refalrts::reinit_ident( context[5], ident_Ident );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CmdCreateElem s.idx s.idx # ElIdent e.idx )
    // </0 & MakeRequestCommand/4 (/5 # CmdCreateElem/9 s.CreateMode#1/10 s.ElemNo#1/11 # ElIdent/12 e.Ident#1/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CmdCreateElem, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    context[12] = refalrts::ident_left(  ident_ElIdent, context[7], context[8] );
    if( ! context[12] )
      continue;
    // closed e.Ident#1 as range 7
    //DEBUG: s.CreateMode#1: 10
    //DEBUG: s.ElemNo#1: 11
    //DEBUG: e.Ident#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & MakeRequestCommand/4 {REMOVED TILE} s.CreateMode#1/10 s.ElemNo#1/11 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # REQUEST/9 } Tile{ Reuse: # Ident/12 AsIs: e.Ident#1/7 AsIs: )/6 } Tile{ ]] }
    refalrts::update_ident( context[9], ident_REQUEST );
    refalrts::update_ident( context[12], ident_Ident );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[6] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & MakeRequestCommand/4 t.OtherCommand#1/5 >/1
  //DEBUG: t.OtherCommand#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & MakeRequestCommand/4 t.OtherCommand#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeRequestCommand("MakeRequestCommand", 3891527568U, 831717443U, func_MakeRequestCommand);


static refalrts::FnResult func_FillImplicitDeclarations(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: e.$ ( e.$ )
  //GLOBAL GEN: e.$ ( e.$ )
  // </0 & FillImplicitDeclarations/4 e.idx#0/2 (/7 e.idxVB#0/5 )/8 >/1
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
  // closed e.idx#0 as range 2
  // closed e.idxVB#0 as range 5
  do {
    // e.idx ( e.idx )
    // </0 & FillImplicitDeclarations/4 e.RASL-B#1/13 (/19 # REQUEST/21 s.Type#1/22 e.Name#1/17 )/20 e.RASL-E#1/15 (/7 e.Definitions#1/11 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    context[11] = context[5];
    context[12] = context[6];
    // closed e.Definitions#1 as range 11
    context[13] = 0;
    context[14] = 0;
    refalrts::start_e_loop();
    do {
      context[15] = context[9];
      context[16] = context[10];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left(  ident_REQUEST, context[17], context[18] );
      if( ! context[21] )
        continue;
      // closed e.RASL-E#1 as range 15
      if( ! refalrts::svar_left( context[22], context[17], context[18] ) )
        continue;
      // closed e.Name#1 as range 17
      //DEBUG: e.Definitions#1: 11
      //DEBUG: e.RASL-B#1: 13
      //DEBUG: e.RASL-E#1: 15
      //DEBUG: s.Type#1: 22
      //DEBUG: e.Name#1: 17

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.RASL-B#1/13 } Tile{ AsIs: </0 AsIs: & FillImplicitDeclarations/4 } Tile{ AsIs: e.RASL-E#1/15 } Tile{ AsIs: (/7 } </23 Tile{ HalfReuse: & AddDefinition/19 HalfReuse: (/21 AsIs: s.Type#1/22 AsIs: e.Name#1/17 AsIs: )/20 } Tile{ AsIs: e.Definitions#1/11 } >/24 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( context[23] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[24] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_name( context[19], ref_AddDefinition.ref.function );
      refalrts::reinit_open_bracket( context[21] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( context[24] );
      refalrts::push_stack( context[23] );
      refalrts::link_brackets( context[21], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[24], context[24] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx ( e.idx )
  // </0 & FillImplicitDeclarations/4 e.RASL#1/9 (/7 e.Definitions#1/11 )/8 >/1
  context[9] = context[2];
  context[10] = context[3];
  context[11] = context[5];
  context[12] = context[6];
  // closed e.RASL#1 as range 9
  // closed e.Definitions#1 as range 11
  //DEBUG: e.RASL#1: 9
  //DEBUG: e.Definitions#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.RASL#1/9 } (/13 Tile{ AsIs: </0 Reuse: & UniqSorted/4 } </14 Tile{ HalfReuse: & Sort/7 AsIs: e.Definitions#1/11 HalfReuse: >/8 AsIs: >/1 } )/15 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UniqSorted.ref.function );
  refalrts::reinit_name( context[7], ref_Sort.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::link_brackets( context[13], context[15] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FillImplicitDeclarations("FillImplicitDeclarations", 3891527568U, 831717443U, func_FillImplicitDeclarations);


static refalrts::FnResult func_AddDefinition(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: ( s.$ e.$ ) e.$
  //GLOBAL GEN: ( s.$ e.$ ) e.$
  // </0 & AddDefinition/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxT#0 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  do {
    // ( # Extern e.idx ) e.idx
    // </0 & AddDefinition/4 (/7 # Extern/9 e.Name#1/10 )/8 e.Defs-B#1/14 (/20 # CmdExtern/22 e.Name#1/23 # Hash/25 s.Hash1#1/26 s.Hash2#1/27 )/21 e.Defs-E#1/16 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term(  ident_Extern, context[9] ) )
      continue;
    // closed e.Name#1 as range 10
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[12];
      context[17] = context[13];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = refalrts::ident_left(  ident_CmdExtern, context[18], context[19] );
      if( ! context[22] )
        continue;
      if( ! refalrts::repeated_evar_left( context[23], context[24], context[10], context[11], context[18], context[19] ) )
        continue;
      context[25] = refalrts::ident_left(  ident_Hash, context[18], context[19] );
      if( ! context[25] )
        continue;
      // closed e.Defs-E#1 as range 16
      if( ! refalrts::svar_left( context[26], context[18], context[19] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      //DEBUG: e.Name#1: 10
      //DEBUG: e.Defs-B#1: 14
      //DEBUG: e.Defs-E#1: 16
      //DEBUG: s.Hash1#1: 26
      //DEBUG: s.Hash2#1: 27

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & AddDefinition/4 (/7 # Extern/9 e.Name#1/10 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/20 AsIs: # CmdExtern/22 AsIs: e.Name#1/23 AsIs: # Hash/25 AsIs: s.Hash1#1/26 AsIs: s.Hash2#1/27 AsIs: )/21 } Tile{ AsIs: e.Defs-B#1/14 } Tile{ AsIs: e.Defs-E#1/16 } Tile{ ]] }
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[12], context[13] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Extern e.idx ) e.idx
    // </0 & AddDefinition/4 (/7 # Extern/9 e.Name#1/10 )/8 e.Defs#1/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term(  ident_Extern, context[9] ) )
      continue;
    // closed e.Name#1 as range 10
    // closed e.Defs#1 as range 12
    //DEBUG: e.Name#1: 10
    //DEBUG: e.Defs#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdExtern/9 AsIs: e.Name#1/10 HalfReuse: # Hash/8 } Tile{ HalfReuse: 0/0 HalfReuse: 0/4 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Defs#1/12 } Tile{ ]] }
    refalrts::update_ident( context[9], ident_CmdExtern );
    refalrts::reinit_ident( context[8], ident_Hash );
    refalrts::reinit_number( context[0], 0UL );
    refalrts::reinit_number( context[4], 0UL );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Ident e.idx ) e.idx
    // </0 & AddDefinition/4 (/7 # Ident/9 e.Name#1/10 )/8 e.Defs-B#1/14 (/20 # CmdDefineIdent/22 e.Name#1/23 )/21 e.Defs-E#1/16 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term(  ident_Ident, context[9] ) )
      continue;
    // closed e.Name#1 as range 10
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[16] = context[12];
      context[17] = context[13];
      context[18] = 0;
      context[19] = 0;
      context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
      if( ! context[20] )
        continue;
      refalrts::bracket_pointers(context[20], context[21]);
      context[22] = refalrts::ident_left(  ident_CmdDefineIdent, context[18], context[19] );
      if( ! context[22] )
        continue;
      if( ! refalrts::repeated_evar_left( context[23], context[24], context[10], context[11], context[18], context[19] ) )
        continue;
      if( ! refalrts::empty_seq( context[18], context[19] ) )
        continue;
      // closed e.Defs-E#1 as range 16
      //DEBUG: e.Name#1: 10
      //DEBUG: e.Defs-B#1: 14
      //DEBUG: e.Defs-E#1: 16

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & AddDefinition/4 (/7 # Ident/9 e.Name#1/10 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/20 AsIs: # CmdDefineIdent/22 AsIs: e.Name#1/23 AsIs: )/21 } Tile{ AsIs: e.Defs-B#1/14 } Tile{ AsIs: e.Defs-E#1/16 } Tile{ ]] }
      refalrts::link_brackets( context[20], context[21] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[16], context[17] );
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[14], context[15], context[12], context[13] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # Ident e.idx ) e.idx
  // </0 & AddDefinition/4 (/7 # Ident/9 e.Name#1/10 )/8 e.Defs#1/12 >/1
  context[10] = context[5];
  context[11] = context[6];
  context[12] = context[2];
  context[13] = context[3];
  if( ! refalrts::ident_term(  ident_Ident, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 10
  // closed e.Defs#1 as range 12
  //DEBUG: e.Name#1: 10
  //DEBUG: e.Defs#1: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AddDefinition/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDefineIdent/9 AsIs: e.Name#1/10 AsIs: )/8 } Tile{ AsIs: e.Defs#1/12 } Tile{ ]] }
  refalrts::update_ident( context[9], ident_CmdDefineIdent );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddDefinition("AddDefinition", 3891527568U, 831717443U, func_AddDefinition);


static refalrts::FnResult func_UniqSorted(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & UniqSorted/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx
    // </0 & UniqSorted/4 e.Uniqs#1/7 t.Repeated#1/11 t.Repeated#1/13 e.NotScanned#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
      if( ! context[12] )
        continue;
      context[14] = refalrts::repeated_stvar_left( context[13], context[11], context[9], context[10] );
      if( ! context[14] )
        continue;
      // closed e.NotScanned#1 as range 9
      //DEBUG: e.Uniqs#1: 7
      //DEBUG: t.Repeated#1: 11
      //DEBUG: e.NotScanned#1: 9

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Repeated#1/11 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/7 } Tile{ AsIs: </0 AsIs: & UniqSorted/4 } Tile{ AsIs: t.Repeated#1/13 AsIs: e.NotScanned#1/9 AsIs: >/1 ]] }
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & UniqSorted/4 e.Uniqs#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Uniqs#1 as range 5
  //DEBUG: e.Uniqs#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & UniqSorted/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UniqSorted("UniqSorted", 3891527568U, 831717443U, func_UniqSorted);


//End of file
