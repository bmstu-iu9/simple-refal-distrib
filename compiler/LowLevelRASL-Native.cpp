// This file automatically generated from 'LowLevelRASL-Native.ref'
// Don't edit! Edit 'LowLevelRASL-Native.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_2415131115_4095631155
static const refalrts::IdentReference ident_k37_("%");
static const refalrts::IdentReference ident_k42_("*");
static const refalrts::IdentReference ident_k43_("+");
static const refalrts::IdentReference ident_m_("-");
static const refalrts::IdentReference ident_k47_("/");
static const refalrts::IdentReference ident_k63_("?");
static const refalrts::IdentReference ident_Add("Add");
static const refalrts::IdentReference ident_AlgLeft("AlgLeft");
static const refalrts::IdentReference ident_CmdADT("CmdADT");
static const refalrts::IdentReference ident_CmdADTSave("CmdADTSave");
static const refalrts::IdentReference ident_CmdComment("CmdComment");
static const refalrts::IdentReference ident_CmdConditionFuncm_ToNative("CmdConditionFunc-ToNative");
static const refalrts::IdentReference ident_CmdConditionFuncm_ToRASL("CmdConditionFunc-ToRASL");
static const refalrts::IdentReference ident_CmdCookieNS("CmdCookieNS");
static const refalrts::IdentReference ident_CmdCreateElem("CmdCreateElem");
static const refalrts::IdentReference ident_CmdDeclaration("CmdDeclaration");
static const refalrts::IdentReference ident_CmdDefineIdent("CmdDefineIdent");
static const refalrts::IdentReference ident_CmdEmitNativeCode("CmdEmitNativeCode");
static const refalrts::IdentReference ident_CmdEndSentence("CmdEndSentence");
static const refalrts::IdentReference ident_CmdEnum("CmdEnum");
static const refalrts::IdentReference ident_CmdExtern("CmdExtern");
static const refalrts::IdentReference ident_CmdFnEnd("CmdFnEnd");
static const refalrts::IdentReference ident_CmdFnStart("CmdFnStart");
static const refalrts::IdentReference ident_CmdIdent("CmdIdent");
static const refalrts::IdentReference ident_CmdIdentSave("CmdIdentSave");
static const refalrts::IdentReference ident_CmdName("CmdName");
static const refalrts::IdentReference ident_CmdNameSave("CmdNameSave");
static const refalrts::IdentReference ident_CmdNativeFuncDescr("CmdNativeFuncDescr");
static const refalrts::IdentReference ident_CmdNativeFunction("CmdNativeFunction");
static const refalrts::IdentReference ident_CmdOpenELoop("CmdOpenELoop");
static const refalrts::IdentReference ident_CmdOpenedEm_End("CmdOpenedE-End");
static const refalrts::IdentReference ident_CmdOpenedEm_Start("CmdOpenedE-Start");
static const refalrts::IdentReference ident_CmdProfileFunction("CmdProfileFunction");
static const refalrts::IdentReference ident_CmdSentence("CmdSentence");
static const refalrts::IdentReference ident_CmdStartSentence("CmdStartSentence");
static const refalrts::IdentReference ident_CmdSwap("CmdSwap");
static const refalrts::IdentReference ident_CmdVariableDebugTable("CmdVariableDebugTable");
static const refalrts::IdentReference ident_Div("Div");
static const refalrts::IdentReference ident_ElIdent("ElIdent");
static const refalrts::IdentReference ident_ElName("ElName");
static const refalrts::IdentReference ident_Extern("Extern");
static const refalrts::IdentReference ident_Functionm_ToNative("Function-ToNative");
static const refalrts::IdentReference ident_Functionm_ToRASL("Function-ToRASL");
static const refalrts::IdentReference ident_GNm_Entry("GN-Entry");
static const refalrts::IdentReference ident_GNm_Local("GN-Local");
static const refalrts::IdentReference ident_Hash("Hash");
static const refalrts::IdentReference ident_Ident("Ident");
static const refalrts::IdentReference ident_Mod("Mod");
static const refalrts::IdentReference ident_Mul("Mul");
static const refalrts::IdentReference ident_REQUEST("REQUEST");
static const refalrts::IdentReference ident_Residue("Residue");
static const refalrts::IdentReference ident_Sub("Sub");
static refalrts::ExternalReference ref_AddDefinition("AddDefinition", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_ClassifyItemsm_Native("ClassifyItems-Native", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_ConvertDirectCommands("ConvertDirectCommands", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_Evm_met("Ev-met", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_FillImplicitDeclarations("FillImplicitDeclarations", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_LowLevelRASLm_Native("LowLevelRASL-Native", 0U, 0U);
static refalrts::ExternalReference ref_gen_LowLevelRASLm_Native_B1("LowLevelRASL-Native:1", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_gen_LowLevelRASLm_Native_B1S2A1("LowLevelRASL-Native:1$2=1", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_gen_LowLevelRASLm_Native_B1S2A2("LowLevelRASL-Native:1$2=2", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_gen_LowLevelRASLm_Native_A1("LowLevelRASL-Native=1", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_MakeRequestCommand("MakeRequestCommand", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_MingleName("MingleName", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_Mu("Mu", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_gen_Mu_C1("Mu?1", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_PrepareFunctionsRASL("PrepareFunctionsRASL", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_Residue("Residue", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_gen_Residue_C1("Residue?1", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_SetCookies("SetCookies", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_Sort("Sort", 0U, 0U);
static refalrts::ExternalReference ref_Symb("Symb", 0U, 0U);
static refalrts::ExternalReference ref_Type("Type", 0U, 0U);
static refalrts::ExternalReference ref_UniqSorted("UniqSorted", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_Up("Up", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_u_u_FindMuPtr("__FindMuPtr", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Mum_Aux("__Mu-Aux", 2415131115U, 4095631155U);
static refalrts::ExternalReference ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 2415131115U, 4095631155U);
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

static refalrts::NativeReference nat_ref_Mu("Mu", 2415131115U, 4095631155U, func_Mu);


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
    if( ! refalrts::alloc_number( vm, context[9], 4095631155UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref(vm) );
    refalrts::reinit_number( context[5], 2415131115UL );
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
  refalrts::reinit_number( context[5], 2415131115UL );
  refalrts::reinit_number( context[7], 4095631155UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 2415131115U, 4095631155U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 2415131115U, 4095631155U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 2415131115U, 4095631155U, func_Residue);


static refalrts::FnResult func_gen_LowLevelRASLm_Native_B1S2A2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ HalfReuse: (/0 HalfReuse: # CmdCookieNS/4 AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Declarations#5/5 } Tile{ AsIs: e.DefinitionsRASL#5/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_CmdCookieNS.ref(vm) );
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

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_B1S2A2("LowLevelRASL-Native:1$2=2", 2415131115U, 4095631155U, func_gen_LowLevelRASLm_Native_B1S2A2);


static refalrts::FnResult func_gen_LowLevelRASLm_Native_B1S2A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL-Native:1$2=2/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 HalfReuse: {*}/9 } </12 & FillImplicitDeclarations/13 Tile{ AsIs: e.DefinitionsRASL#4/2 } (/14 Tile{ AsIs: e.Declarations#3/7 } Tile{ AsIs: )/10 } >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[13], ref_FillImplicitDeclarations.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_LowLevelRASLm_Native_B1S2A2.ref(vm) );
  refalrts::reinit_unwrapped_closure( context[9], context[0] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[12] );
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

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_B1S2A1("LowLevelRASL-Native:1$2=1", 2415131115U, 4095631155U, func_gen_LowLevelRASLm_Native_B1S2A1);


static refalrts::FnResult func_gen_LowLevelRASLm_Native_B1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
  // </0 & LowLevelRASL-Native:1/4 s.new#1/5 s.new#2/6 (/9 e.new#3/7 )/10 e.new#4/2 >/1
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
  // closed e.new#3 as range 7
  // closed e.new#4 as range 2
  do {
    // </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 (/9 e.Declarations#3/7 )/10 >/1
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    // closed e.Declarations#3 as range 7
    //DEBUG: s.Hash1#1: 5
    //DEBUG: s.Hash2#1: 6
    //DEBUG: e.Declarations#3: 7

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 (/9 e.Declarations#3/7 )/10 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & LowLevelRASL-Native:1/4 s.Hash1#1/5 s.Hash2#1/6 (/9 e.Declarations#3/7 )/10 e.Definitions#3/2 >/1
  // closed e.Declarations#3 as range 7
  // closed e.Definitions#3 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Declarations#3: 7
  //DEBUG: e.Definitions#3: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </11 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL-Native:1$2=1/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 AsIs: (/9 AsIs: e.Declarations#3/7 AsIs: )/10 } {*}/12 </13 & Map/14 & PrepareFunctionsRASL/15 Tile{ AsIs: e.Definitions#3/2 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[12], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[15], ref_PrepareFunctionsRASL.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_LowLevelRASLm_Native_B1S2A1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[16] );
  refalrts::push_stack( vm, context[13] );
  refalrts::link_brackets( context[9], context[10] );
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

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_B1("LowLevelRASL-Native:1", 2415131115U, 4095631155U, func_gen_LowLevelRASLm_Native_B1);


static refalrts::FnResult func_gen_LowLevelRASLm_Native_A1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL-Native:1/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } {*}/8 </9 & MapReduce/10 & ClassifyItems-Native/11 (/12 )/13 Tile{ AsIs: e.Items#2/2 } >/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[8], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[10], ref_MapReduce.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[11], ref_ClassifyItemsm_Native.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[14] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_LowLevelRASLm_Native_B1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[14] );
  refalrts::push_stack( vm, context[9] );
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

static refalrts::NativeReference nat_ref_gen_LowLevelRASLm_Native_A1("LowLevelRASL-Native=1", 2415131115U, 4095631155U, func_gen_LowLevelRASLm_Native_A1);


static refalrts::FnResult func_LowLevelRASLm_Native(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & LowLevelRASL-Native/4 s.Hash1#1/5 s.Hash2#1/6 t.Tables#1/7 e.Items#1/2 >/1
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
  // closed e.Items#1 as range 2
  //DEBUG: s.Hash1#1: 5
  //DEBUG: s.Hash2#1: 6
  //DEBUG: t.Tables#1: 7
  //DEBUG: e.Items#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} t.Tables#1/7 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: [*]/0 Reuse: & LowLevelRASL-Native=1/4 AsIs: s.Hash1#1/5 AsIs: s.Hash2#1/6 } {*}/10 </11 & Map/12 (/13 & SetCookies/14 s.Hash1#1/5/15 s.Hash2#1/6/16 )/17 Tile{ AsIs: e.Items#1/2 } >/18 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( vm, context[10], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[12], ref_Map.ref(vm) ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( vm, context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( vm, context[14], ref_SetCookies.ref(vm) ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[15], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(vm, context[16], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( vm, context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_LowLevelRASLm_Native_A1.ref(vm) );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[18] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[13], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[17] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_LowLevelRASLm_Native("LowLevelRASL-Native", 0U, 0U, func_LowLevelRASLm_Native);


static refalrts::FnResult func_SetCookies(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & SetCookies/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & SetCookies/4 s.new#1/9 s.new#2/10 (/7 s.new#3/11 e.new#4/5 )/8 >/1
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
  // closed e.new#4 as range 5
  do {
    // </0 & SetCookies/4 s.new#5/9 s.new#6/10 (/7 s.new#7/11 s.new#8/14 e.new#9/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    // closed e.new#9 as range 12
    do {
      // </0 & SetCookies/4 s.new#10/9 s.new#11/10 (/7 s.new#12/11 s.new#13/14 (/19 e.new#14/17 )/20 e.new#15/15 )/8 >/1
      context[15] = context[12];
      context[16] = context[13];
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      // closed e.new#14 as range 17
      // closed e.new#15 as range 15
      do {
        // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToRASL/11 s.ScopeClass#1/14 (/19 e.Name#1/17 )/20 e.Commands#1/15 )/8 >/1
        if( ! refalrts::ident_term(  ident_Functionm_ToRASL.ref(vm), context[11] ) )
          continue;
        // closed e.Name#1 as range 17
        // closed e.Commands#1 as range 15
        //DEBUG: s.Hash1#1: 9
        //DEBUG: s.Hash2#1: 10
        //DEBUG: s.ScopeClass#1: 14
        //DEBUG: e.Name#1: 17
        //DEBUG: e.Commands#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function-ToRASL/4 } Tile{ AsIs: (/19 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 } Tile{ AsIs: e.Name#1/17 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/20 AsIs: e.Commands#1/15 AsIs: )/8 } Tile{ ]] }
        refalrts::reinit_open_bracket( context[0] );
        refalrts::reinit_ident( context[4], ident_Functionm_ToRASL.ref(vm) );
        refalrts::reinit_open_call( context[1] );
        refalrts::reinit_name( context[11], ref_MingleName.ref(vm) );
        refalrts::reinit_close_call( context[7] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[20], context[8] );
        res = refalrts::splice_evar( res, context[9], context[7] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[11], context[14] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # Function-ToNative/11 s.ScopeClass#1/14 (/19 e.Name#1/17 )/20 e.Commands#1/15 )/8 >/1
        if( ! refalrts::ident_term(  ident_Functionm_ToNative.ref(vm), context[11] ) )
          continue;
        // closed e.Name#1 as range 17
        // closed e.Commands#1 as range 15
        //DEBUG: s.Hash1#1: 9
        //DEBUG: s.Hash2#1: 10
        //DEBUG: s.ScopeClass#1: 14
        //DEBUG: e.Name#1: 17
        //DEBUG: e.Commands#1: 15

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function-ToNative/4 } Tile{ AsIs: (/19 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 } Tile{ AsIs: e.Name#1/17 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/20 AsIs: e.Commands#1/15 AsIs: )/8 } Tile{ ]] }
        refalrts::reinit_open_bracket( context[0] );
        refalrts::reinit_ident( context[4], ident_Functionm_ToNative.ref(vm) );
        refalrts::reinit_open_call( context[1] );
        refalrts::reinit_name( context[11], ref_MingleName.ref(vm) );
        refalrts::reinit_close_call( context[7] );
        refalrts::link_brackets( context[0], context[8] );
        refalrts::link_brackets( context[19], context[20] );
        refalrts::push_stack( vm, context[7] );
        refalrts::push_stack( vm, context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[20], context[8] );
        res = refalrts::splice_evar( res, context[9], context[7] );
        res = refalrts::splice_evar( res, context[17], context[18] );
        res = refalrts::splice_evar( res, context[11], context[14] );
        res = refalrts::splice_evar( res, context[1], context[1] );
        res = refalrts::splice_evar( res, context[19], context[19] );
        refalrts::use( res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdNativeFunction/11 s.ScopeClass#1/14 (/19 e.Name#1/17 )/20 t.SrcPos#1/23 e.Code#1/21 )/8 >/1
      context[21] = context[15];
      context[22] = context[16];
      if( ! refalrts::ident_term(  ident_CmdNativeFunction.ref(vm), context[11] ) )
        continue;
      // closed e.Name#1 as range 17
      context[24] = refalrts::tvar_left( context[23], context[21], context[22] );
      if( ! context[24] )
        continue;
      // closed e.Code#1 as range 21
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 17
      //DEBUG: t.SrcPos#1: 23
      //DEBUG: e.Code#1: 21

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdNativeFunction/4 } Tile{ AsIs: (/19 } Tile{ HalfReuse: </1 } Tile{ HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 } Tile{ AsIs: e.Name#1/17 } Tile{ AsIs: s.Hash1#1/9 AsIs: s.Hash2#1/10 HalfReuse: >/7 } Tile{ AsIs: )/20 AsIs: t.SrcPos#1/23 AsIs: e.Code#1/21 AsIs: )/8 } Tile{ ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_CmdNativeFunction.ref(vm) );
      refalrts::reinit_open_call( context[1] );
      refalrts::reinit_name( context[11], ref_MingleName.ref(vm) );
      refalrts::reinit_close_call( context[7] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::push_stack( vm, context[7] );
      refalrts::push_stack( vm, context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[20], context[8] );
      res = refalrts::splice_evar( res, context[9], context[7] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[11], context[14] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[19], context[19] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdEnum/11 s.ScopeClass#1/14 e.Name#1/12 )/8 >/1
      if( ! refalrts::ident_term(  ident_CmdEnum.ref(vm), context[11] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdEnum/4 } Tile{ HalfReuse: </7 HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/12 HalfReuse: s.Hash11 #9/8 HalfReuse: s.Hash21 #10/1 } >/15 )/16 Tile{ ]] }
      if( ! refalrts::alloc_close_call( vm, context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[16] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_CmdEnum.ref(vm) );
      refalrts::reinit_open_call( context[7] );
      refalrts::reinit_name( context[11], ref_MingleName.ref(vm) );
      refalrts::reinit_svar( context[8], context[9] );
      refalrts::reinit_svar( context[1], context[10] );
      refalrts::link_brackets( context[0], context[16] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdSwap/11 s.ScopeClass#1/14 e.Name#1/12 )/8 >/1
      if( ! refalrts::ident_term(  ident_CmdSwap.ref(vm), context[11] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdSwap/4 } Tile{ HalfReuse: </7 HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/12 HalfReuse: s.Hash11 #9/8 HalfReuse: s.Hash21 #10/1 } >/15 )/16 Tile{ ]] }
      if( ! refalrts::alloc_close_call( vm, context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[16] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_CmdSwap.ref(vm) );
      refalrts::reinit_open_call( context[7] );
      refalrts::reinit_name( context[11], ref_MingleName.ref(vm) );
      refalrts::reinit_svar( context[8], context[9] );
      refalrts::reinit_svar( context[1], context[10] );
      refalrts::link_brackets( context[0], context[16] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdConditionFunc-ToRASL/11 s.ScopeClass#1/14 e.Name#1/12 )/8 >/1
      if( ! refalrts::ident_term(  ident_CmdConditionFuncm_ToRASL.ref(vm), context[11] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdConditionFunc-ToRASL/4 } Tile{ HalfReuse: </7 HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/12 HalfReuse: s.Hash11 #9/8 HalfReuse: s.Hash21 #10/1 } >/15 )/16 Tile{ ]] }
      if( ! refalrts::alloc_close_call( vm, context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[16] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_CmdConditionFuncm_ToRASL.ref(vm) );
      refalrts::reinit_open_call( context[7] );
      refalrts::reinit_name( context[11], ref_MingleName.ref(vm) );
      refalrts::reinit_svar( context[8], context[9] );
      refalrts::reinit_svar( context[1], context[10] );
      refalrts::link_brackets( context[0], context[16] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdConditionFunc-ToNative/11 s.ScopeClass#1/14 e.Name#1/12 )/8 >/1
      if( ! refalrts::ident_term(  ident_CmdConditionFuncm_ToNative.ref(vm), context[11] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: s.Hash1#1: 9
      //DEBUG: s.Hash2#1: 10
      //DEBUG: s.ScopeClass#1: 14
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdConditionFunc-ToNative/4 } Tile{ HalfReuse: </7 HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/12 HalfReuse: s.Hash11 #9/8 HalfReuse: s.Hash21 #10/1 } >/15 )/16 Tile{ ]] }
      if( ! refalrts::alloc_close_call( vm, context[15] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[16] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_CmdConditionFuncm_ToNative.ref(vm) );
      refalrts::reinit_open_call( context[7] );
      refalrts::reinit_name( context[11], ref_MingleName.ref(vm) );
      refalrts::reinit_svar( context[8], context[9] );
      refalrts::reinit_svar( context[1], context[10] );
      refalrts::link_brackets( context[0], context[16] );
      refalrts::push_stack( vm, context[15] );
      refalrts::push_stack( vm, context[7] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[7], context[1] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdDeclaration/11 s.ScopeClass#1/14 e.Name#1/12 )/8 >/1
    if( ! refalrts::ident_term(  ident_CmdDeclaration.ref(vm), context[11] ) )
      continue;
    // closed e.Name#1 as range 12
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: s.ScopeClass#1: 14
    //DEBUG: e.Name#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdDeclaration/4 } Tile{ HalfReuse: </7 HalfReuse: & MingleName/11 AsIs: s.ScopeClass#1/14 AsIs: e.Name#1/12 HalfReuse: s.Hash11 #9/8 HalfReuse: s.Hash21 #10/1 } >/15 )/16 Tile{ ]] }
    if( ! refalrts::alloc_close_call( vm, context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[16] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CmdDeclaration.ref(vm) );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[11], ref_MingleName.ref(vm) );
    refalrts::reinit_svar( context[8], context[9] );
    refalrts::reinit_svar( context[1], context[10] );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::push_stack( vm, context[15] );
    refalrts::push_stack( vm, context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdDefineIdent/11 e.Name#1/5 )/8 >/1
    if( ! refalrts::ident_term(  ident_CmdDefineIdent.ref(vm), context[11] ) )
      continue;
    // closed e.Name#1 as range 5
    //DEBUG: s.Hash1#1: 9
    //DEBUG: s.Hash2#1: 10
    //DEBUG: e.Name#1: 5

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # CmdDefineIdent/11 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & SetCookies/4 s.Hash1#1/9 s.Hash2#1/10 (/7 # CmdEmitNativeCode/11 t.SrcPos#1/12 e.Code#1/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_CmdEmitNativeCode.ref(vm), context[11] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 5
  //DEBUG: s.Hash1#1: 9
  //DEBUG: s.Hash2#1: 10
  //DEBUG: t.SrcPos#1: 12
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

static refalrts::NativeReference nat_ref_SetCookies("SetCookies", 2415131115U, 4095631155U, func_SetCookies);


static refalrts::FnResult func_MingleName(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
    if( ! refalrts::ident_term(  ident_GNm_Entry.ref(vm), context[5] ) )
      continue;
    // closed e.Name#1 as range 2
    //DEBUG: s.Hash1#1: 7
    //DEBUG: s.Hash2#1: 6
    //DEBUG: e.Name#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Hash1#1/7 s.Hash2#1/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ Reuse: # Hash/5 } Tile{ HalfReuse: 0/4 } Tile{ HalfReuse: 0/1 ]] }
    refalrts::update_ident( context[5], ident_Hash.ref(vm) );
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
  if( ! refalrts::ident_term(  ident_GNm_Local.ref(vm), context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: s.Hash1#1: 7
  //DEBUG: s.Hash2#1: 6
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MingleName/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Name#1/2 } Tile{ Reuse: # Hash/5 } Tile{ AsIs: s.Hash1#1/7 AsIs: s.Hash2#1/6 } Tile{ ]] }
  refalrts::update_ident( context[5], ident_Hash.ref(vm) );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[6] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MingleName("MingleName", 2415131115U, 4095631155U, func_MingleName);


static refalrts::FnResult func_ClassifyItemsm_Native(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ClassifyItems-Native/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ClassifyItems-Native/4 (/7 e.new#1/5 )/8 (/11 s.new#2/13 e.new#3/9 )/12 >/1
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
    // </0 & ClassifyItems-Native/4 (/7 e.new#4/5 )/8 (/11 s.new#5/13 (/18 e.new#6/16 )/19 e.new#7/14 )/12 >/1
    context[14] = context[9];
    context[15] = context[10];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.new#4 as range 5
    // closed e.new#6 as range 16
    // closed e.new#7 as range 14
    do {
      // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/5 )/8 (/11 # Function-ToRASL/13 (/18 e.Name#1/16 )/19 e.Commands#1/14 )/12 >/1
      if( ! refalrts::ident_term(  ident_Functionm_ToRASL.ref(vm), context[13] ) )
        continue;
      // closed e.Declarations#1 as range 5
      // closed e.Name#1 as range 16
      // closed e.Commands#1 as range 14
      //DEBUG: e.Declarations#1: 5
      //DEBUG: e.Name#1: 16
      //DEBUG: e.Commands#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} e.Commands#1/14 )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/5 } Tile{ HalfReuse: (/13 HalfReuse: # CmdExtern/18 AsIs: e.Name#1/16 AsIs: )/19 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_open_bracket( context[13] );
      refalrts::reinit_ident( context[18], ident_CmdExtern.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[13], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[19] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, context[0], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/5 )/8 (/11 # Function-ToNative/13 (/18 e.Name#1/16 )/19 e.Body#1/14 )/12 >/1
      if( ! refalrts::ident_term(  ident_Functionm_ToNative.ref(vm), context[13] ) )
        continue;
      // closed e.Declarations#1 as range 5
      // closed e.Name#1 as range 16
      // closed e.Body#1 as range 14
      //DEBUG: e.Declarations#1: 5
      //DEBUG: e.Name#1: 16
      //DEBUG: e.Body#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # CmdExtern/4 } e.Name#1/16/20 Tile{ HalfReuse: )/1 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # Function-ToNative/13 AsIs: (/18 AsIs: e.Name#1/16 AsIs: )/19 AsIs: e.Body#1/14 AsIs: )/12 } Tile{ ]] }
      if (! refalrts::copy_evar(vm, context[20], context[21], context[16], context[17]))
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_CmdExtern.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[18], context[19] );
      refalrts::link_brackets( context[0], context[8] );
      refalrts::link_brackets( context[7], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[8], context[12] );
      res = refalrts::splice_evar( res, context[1], context[1] );
      res = refalrts::splice_evar( res, context[20], context[21] );
      res = refalrts::splice_evar( res, context[4], context[4] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/5 )/8 (/11 # CmdNativeFunction/13 (/18 e.Name#1/16 )/19 t.SrcPos#1/22 e.Code#1/20 )/12 >/1
    context[20] = context[14];
    context[21] = context[15];
    if( ! refalrts::ident_term(  ident_CmdNativeFunction.ref(vm), context[13] ) )
      continue;
    // closed e.Declarations#1 as range 5
    // closed e.Name#1 as range 16
    context[23] = refalrts::tvar_left( context[22], context[20], context[21] );
    if( ! context[23] )
      continue;
    // closed e.Code#1 as range 20
    //DEBUG: e.Declarations#1: 5
    //DEBUG: e.Name#1: 16
    //DEBUG: t.SrcPos#1: 22
    //DEBUG: e.Code#1: 20

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/5 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # CmdExtern/1 } e.Name#1/16/24 Tile{ HalfReuse: )/4 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: # CmdNativeFunction/13 AsIs: (/18 AsIs: e.Name#1/16 AsIs: )/19 AsIs: t.SrcPos#1/22 AsIs: e.Code#1/20 AsIs: )/12 } Tile{ ]] }
    if (! refalrts::copy_evar(vm, context[24], context[25], context[16], context[17]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[1], ident_CmdExtern.ref(vm) );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[18], context[19] );
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
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/5 )/8 (/11 # CmdEnum/13 e.Name#1/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_CmdEnum.ref(vm), context[13] ) )
      continue;
    // closed e.Declarations#1 as range 5
    // closed e.Name#1 as range 9
    //DEBUG: e.Declarations#1: 5
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/5 } Tile{ AsIs: (/11 Reuse: # CmdExtern/13 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[13], ident_CmdExtern.ref(vm) );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/5 )/8 (/11 # CmdSwap/13 e.Name#1/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_CmdSwap.ref(vm), context[13] ) )
      continue;
    // closed e.Declarations#1 as range 5
    // closed e.Name#1 as range 9
    //DEBUG: e.Declarations#1: 5
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/5 } Tile{ AsIs: (/11 Reuse: # CmdExtern/13 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[13], ident_CmdExtern.ref(vm) );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/5 )/8 (/11 # CmdConditionFunc-ToRASL/13 e.Name#1/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_CmdConditionFuncm_ToRASL.ref(vm), context[13] ) )
      continue;
    // closed e.Declarations#1 as range 5
    // closed e.Name#1 as range 9
    //DEBUG: e.Declarations#1: 5
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/5 } Tile{ AsIs: (/11 Reuse: # CmdExtern/13 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[13], ident_CmdExtern.ref(vm) );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/5 )/8 (/11 # CmdConditionFunc-ToNative/13 e.Name#1/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_CmdConditionFuncm_ToNative.ref(vm), context[13] ) )
      continue;
    // closed e.Declarations#1 as range 5
    // closed e.Name#1 as range 9
    //DEBUG: e.Declarations#1: 5
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/5 } Tile{ AsIs: (/11 Reuse: # CmdExtern/13 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[13], ident_CmdExtern.ref(vm) );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/5 )/8 (/11 # CmdDeclaration/13 e.Name#1/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_CmdDeclaration.ref(vm), context[13] ) )
      continue;
    // closed e.Declarations#1 as range 5
    // closed e.Name#1 as range 9
    //DEBUG: e.Declarations#1: 5
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/5 } Tile{ AsIs: (/11 Reuse: # CmdExtern/13 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[13], ident_CmdExtern.ref(vm) );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  do {
    // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/5 )/8 (/11 # CmdDefineIdent/13 e.Name#1/9 )/12 >/1
    if( ! refalrts::ident_term(  ident_CmdDefineIdent.ref(vm), context[13] ) )
      continue;
    // closed e.Declarations#1 as range 5
    // closed e.Name#1 as range 9
    //DEBUG: e.Declarations#1: 5
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} & ClassifyItems-Native/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Declarations#1/5 } Tile{ AsIs: (/11 AsIs: # CmdDefineIdent/13 AsIs: e.Name#1/9 AsIs: )/12 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ClassifyItems-Native/4 (/7 e.Declarations#1/5 )/8 (/11 # CmdEmitNativeCode/13 t.SrcPos#1/14 e.Code#1/9 )/12 >/1
  if( ! refalrts::ident_term(  ident_CmdEmitNativeCode.ref(vm), context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Declarations#1 as range 5
  context[15] = refalrts::tvar_left( context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 9
  //DEBUG: e.Declarations#1: 5
  //DEBUG: t.SrcPos#1: 14
  //DEBUG: e.Code#1: 9

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ClassifyItems-Native/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Declarations#1/5 AsIs: )/8 AsIs: (/11 AsIs: # CmdEmitNativeCode/13 AsIs: t.SrcPos#1/14 AsIs: e.Code#1/9 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ClassifyItemsm_Native("ClassifyItems-Native", 2415131115U, 4095631155U, func_ClassifyItemsm_Native);


static refalrts::FnResult func_PrepareFunctionsRASL(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
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
      if( ! refalrts::ident_term(  ident_Functionm_ToNative.ref(vm), context[9] ) )
        continue;
      // closed e.Name#1 as range 12
      // closed e.Body#1 as range 5
      //DEBUG: e.Name#1: 12
      //DEBUG: e.Body#1: 5

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } (/14 # CmdFnStart/15 e.Name#1/12/16 Tile{ AsIs: )/8 HalfReuse: (/1 } # CmdProfileFunction/18 )/19 </20 & ConvertDirectCommands/21 Tile{ AsIs: e.Body#1/5 } >/22 Tile{ HalfReuse: (/0 HalfReuse: # CmdFnEnd/4 HalfReuse: )/7 HalfReuse: (/9 HalfReuse: # CmdNativeFuncDescr/10 AsIs: e.Name#1/12 AsIs: )/11 } Tile{ ]] }
      if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[15], ident_CmdFnStart.ref(vm) ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(vm, context[16], context[17], context[12], context[13]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( vm, context[18], ident_CmdProfileFunction.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[20] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[21], ref_ConvertDirectCommands.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[22] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[1] );
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_CmdFnEnd.ref(vm) );
      refalrts::reinit_close_bracket( context[7] );
      refalrts::reinit_open_bracket( context[9] );
      refalrts::reinit_ident( context[10], ident_CmdNativeFuncDescr.ref(vm) );
      refalrts::link_brackets( context[9], context[11] );
      refalrts::link_brackets( context[0], context[7] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[20] );
      refalrts::link_brackets( context[1], context[19] );
      refalrts::link_brackets( context[14], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[18], context[21] );
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
    if( ! refalrts::ident_term(  ident_CmdNativeFunction.ref(vm), context[9] ) )
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/10 } # CmdFnStart/18 Tile{ AsIs: e.Name#1/12 } )/19 (/20 Tile{ HalfReuse: # CmdEmitNativeCode/11 AsIs: t.SrcPos#1/16 AsIs: e.Code#1/14 AsIs: )/8 HalfReuse: (/1 } Tile{ HalfReuse: # CmdFnEnd/0 HalfReuse: )/4 AsIs: (/7 Reuse: # CmdNativeFuncDescr/9 } e.Name#1/12/21 )/23 Tile{ ]] }
    if( ! refalrts::alloc_ident( vm, context[18], ident_CmdFnStart.ref(vm) ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( vm, context[20] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[21], context[22], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[11], ident_CmdEmitNativeCode.ref(vm) );
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_ident( context[0], ident_CmdFnEnd.ref(vm) );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::update_ident( context[9], ident_CmdNativeFuncDescr.ref(vm) );
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
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & PrepareFunctionsRASL/4 (/7 # CmdEmitNativeCode/9 t.SrcPos#1/10 e.Code#1/5 )/8 >/1
  if( ! refalrts::ident_term(  ident_CmdEmitNativeCode.ref(vm), context[9] ) )
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

static refalrts::NativeReference nat_ref_PrepareFunctionsRASL("PrepareFunctionsRASL", 2415131115U, 4095631155U, func_PrepareFunctionsRASL);


static refalrts::FnResult func_ConvertDirectCommands(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
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
        if( ! refalrts::ident_term(  ident_CmdSentence.ref(vm), context[11] ) )
          continue;
        // closed e.SubCommands#1 as range 9
        // closed e.Tail#1 as range 5
        //DEBUG: e.SubCommands#1: 9
        //DEBUG: e.Tail#1: 5

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CmdStartSentence/4 HalfReuse: )/7 HalfReuse: </11 } & ConvertDirectCommands/12 Tile{ AsIs: e.SubCommands#1/9 } >/13 (/14 # CmdEndSentence/15 )/16 </17 Tile{ HalfReuse: & ConvertDirectCommands/8 AsIs: e.Tail#1/5 AsIs: >/1 ]] }
        if( ! refalrts::alloc_name( vm, context[12], ref_ConvertDirectCommands.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( vm, context[13] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( vm, context[14] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[15], ident_CmdEndSentence.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[16] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[17] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[0] );
        refalrts::reinit_ident( context[4], ident_CmdStartSentence.ref(vm) );
        refalrts::reinit_close_bracket( context[7] );
        refalrts::reinit_open_call( context[11] );
        refalrts::reinit_name( context[8], ref_ConvertDirectCommands.ref(vm) );
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
        if( ! refalrts::ident_term(  ident_CmdOpenELoop.ref(vm), context[11] ) )
          continue;
        if( ! refalrts::ident_term(  ident_AlgLeft.ref(vm), context[14] ) )
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
        if( ! refalrts::alloc_ident( vm, context[19], ident_CmdOpenedEm_Start.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_ident( vm, context[20], ident_AlgLeft.ref(vm) ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[21], context[17]))
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(vm, context[22], context[18]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[23] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[24] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( vm, context[25], ref_ConvertDirectCommands.ref(vm) ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( vm, context[26] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( vm, context[27] ) )
          return refalrts::cNoMemory;
        refalrts::reinit_open_bracket( context[0] );
        refalrts::reinit_close_call( context[4] );
        refalrts::update_ident( context[11], ident_CmdOpenedEm_End.ref(vm) );
        refalrts::reinit_name( context[8], ref_ConvertDirectCommands.ref(vm) );
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
      if( ! refalrts::ident_term(  ident_CmdVariableDebugTable.ref(vm), context[11] ) )
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
      if( ! refalrts::alloc_ident( vm, context[20], ident_CmdComment.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[21], context[22], "DEB", 3 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[23], '.' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_char( vm, context[24], '#' ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[25] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[26], ref_Symb.ref(vm) ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[27] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( vm, context[28], context[29], ": ", 2 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( vm, context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( vm, context[31], ref_Symb.ref(vm) ) )
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
      refalrts::reinit_name( context[8], ref_ConvertDirectCommands.ref(vm) );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & MakeRequestCommand/4 AsIs: t.Command#1/7 } >/9 t.Command#1/7/10 </12 & ConvertDirectCommands/13 Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( vm, context[9] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(vm, context[10], context[11], context[7], context[8]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( vm, context[12] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( vm, context[13], ref_ConvertDirectCommands.ref(vm) ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_MakeRequestCommand.ref(vm) );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[12] );
    refalrts::push_stack( vm, context[9] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[13] );
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

static refalrts::NativeReference nat_ref_ConvertDirectCommands("ConvertDirectCommands", 2415131115U, 4095631155U, func_ConvertDirectCommands);


static refalrts::FnResult func_MakeRequestCommand(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & MakeRequestCommand/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & MakeRequestCommand/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & MakeRequestCommand/4 (/5 s.new#2/9 s.new#3/10 s.new#4/11 s.new#5/12 e.new#6/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.new#6 as range 7
    do {
      // </0 & MakeRequestCommand/4 (/5 # CmdName/9 s.Direction#1/10 s.BracketNum#1/11 s.Num#1/12 e.Func#1/7 )/6 >/1
      if( ! refalrts::ident_term(  ident_CmdName.ref(vm), context[9] ) )
        continue;
      // closed e.Func#1 as range 7
      //DEBUG: s.Direction#1: 10
      //DEBUG: s.BracketNum#1: 11
      //DEBUG: s.Num#1: 12
      //DEBUG: e.Func#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # CmdName/9 s.Direction#1/10 s.BracketNum#1/11 s.Num#1/12 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Extern/5 } Tile{ AsIs: e.Func#1/7 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_REQUEST.ref(vm) );
      refalrts::reinit_ident( context[5], ident_Extern.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & MakeRequestCommand/4 (/5 s.new#7/9 s.new#8/10 s.new#9/11 s.new#10/12 s.new#11/15 e.new#12/13 )/6 >/1
      context[13] = context[7];
      context[14] = context[8];
      if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
        continue;
      // closed e.new#12 as range 13
      do {
        // </0 & MakeRequestCommand/4 (/5 # CmdNameSave/9 s.Direction#1/10 s.BracketNum#1/11 s.SaveOffset#1/12 s.Num#1/15 e.Func#1/13 )/6 >/1
        if( ! refalrts::ident_term(  ident_CmdNameSave.ref(vm), context[9] ) )
          continue;
        // closed e.Func#1 as range 13
        //DEBUG: s.Direction#1: 10
        //DEBUG: s.BracketNum#1: 11
        //DEBUG: s.SaveOffset#1: 12
        //DEBUG: s.Num#1: 15
        //DEBUG: e.Func#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} # CmdNameSave/9 s.Direction#1/10 s.BracketNum#1/11 s.SaveOffset#1/12 s.Num#1/15 {REMOVED TILE} )/6 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Extern/5 } Tile{ AsIs: e.Func#1/13 } Tile{ HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket( context[0] );
        refalrts::reinit_ident( context[4], ident_REQUEST.ref(vm) );
        refalrts::reinit_ident( context[5], ident_Extern.ref(vm) );
        refalrts::reinit_close_bracket( context[1] );
        refalrts::link_brackets( context[0], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & MakeRequestCommand/4 (/5 # CmdCreateElem/9 s.CreateMode#1/10 s.ElemNo#1/11 # ElName/12 s.Num#1/15 e.Func#1/13 )/6 >/1
        if( ! refalrts::ident_term(  ident_CmdCreateElem.ref(vm), context[9] ) )
          continue;
        if( ! refalrts::ident_term(  ident_ElName.ref(vm), context[12] ) )
          continue;
        // closed e.Func#1 as range 13
        //DEBUG: s.CreateMode#1: 10
        //DEBUG: s.ElemNo#1: 11
        //DEBUG: s.Num#1: 15
        //DEBUG: e.Func#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} # CmdCreateElem/9 s.CreateMode#1/10 s.ElemNo#1/11 # ElName/12 s.Num#1/15 {REMOVED TILE} )/6 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Extern/5 } Tile{ AsIs: e.Func#1/13 } Tile{ HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket( context[0] );
        refalrts::reinit_ident( context[4], ident_REQUEST.ref(vm) );
        refalrts::reinit_ident( context[5], ident_Extern.ref(vm) );
        refalrts::reinit_close_bracket( context[1] );
        refalrts::link_brackets( context[0], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      do {
        // </0 & MakeRequestCommand/4 (/5 # CmdADT/9 s.Direction#1/10 s.BracketNum#1/11 s.InnerBrackets#1/12 s.Num#1/15 e.Func#1/13 )/6 >/1
        if( ! refalrts::ident_term(  ident_CmdADT.ref(vm), context[9] ) )
          continue;
        // closed e.Func#1 as range 13
        //DEBUG: s.Direction#1: 10
        //DEBUG: s.BracketNum#1: 11
        //DEBUG: s.InnerBrackets#1: 12
        //DEBUG: s.Num#1: 15
        //DEBUG: e.Func#1: 13

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} # CmdADT/9 s.Direction#1/10 s.BracketNum#1/11 s.InnerBrackets#1/12 s.Num#1/15 {REMOVED TILE} )/6 {REMOVED TILE}
        //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Extern/5 } Tile{ AsIs: e.Func#1/13 } Tile{ HalfReuse: )/1 ]] }
        refalrts::reinit_open_bracket( context[0] );
        refalrts::reinit_ident( context[4], ident_REQUEST.ref(vm) );
        refalrts::reinit_ident( context[5], ident_Extern.ref(vm) );
        refalrts::reinit_close_bracket( context[1] );
        refalrts::link_brackets( context[0], context[1] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[13], context[14] );
        refalrts::splice_to_freelist_open( vm, context[5], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & MakeRequestCommand/4 (/5 # CmdADTSave/9 s.Direction#1/10 s.BracketNum#1/11 s.InnerBrackets#1/12 s.Num#1/15 e.Func#1/13 )/6 >/1
      if( ! refalrts::ident_term(  ident_CmdADTSave.ref(vm), context[9] ) )
        continue;
      // closed e.Func#1 as range 13
      //DEBUG: s.Direction#1: 10
      //DEBUG: s.BracketNum#1: 11
      //DEBUG: s.InnerBrackets#1: 12
      //DEBUG: s.Num#1: 15
      //DEBUG: e.Func#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # CmdADTSave/9 s.Direction#1/10 s.BracketNum#1/11 s.InnerBrackets#1/12 s.Num#1/15 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Extern/5 } Tile{ AsIs: e.Func#1/13 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_REQUEST.ref(vm) );
      refalrts::reinit_ident( context[5], ident_Extern.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & MakeRequestCommand/4 (/5 # CmdIdent/9 s.Direction#1/10 s.BracketNum#1/11 s.Num#1/12 e.Ident#1/7 )/6 >/1
      if( ! refalrts::ident_term(  ident_CmdIdent.ref(vm), context[9] ) )
        continue;
      // closed e.Ident#1 as range 7
      //DEBUG: s.Direction#1: 10
      //DEBUG: s.BracketNum#1: 11
      //DEBUG: s.Num#1: 12
      //DEBUG: e.Ident#1: 7

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # CmdIdent/9 s.Direction#1/10 s.BracketNum#1/11 s.Num#1/12 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Ident/5 } Tile{ AsIs: e.Ident#1/7 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_REQUEST.ref(vm) );
      refalrts::reinit_ident( context[5], ident_Ident.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MakeRequestCommand/4 (/5 s.new#7/9 s.new#8/10 s.new#9/11 s.new#10/12 s.new#11/15 e.new#12/13 )/6 >/1
    context[13] = context[7];
    context[14] = context[8];
    if( ! refalrts::svar_left( context[15], context[13], context[14] ) )
      continue;
    // closed e.new#12 as range 13
    do {
      // </0 & MakeRequestCommand/4 (/5 # CmdIdentSave/9 s.Direction#1/10 s.BracketNum#1/11 s.SaveOffset#1/12 s.Num#1/15 e.Ident#1/13 )/6 >/1
      if( ! refalrts::ident_term(  ident_CmdIdentSave.ref(vm), context[9] ) )
        continue;
      // closed e.Ident#1 as range 13
      //DEBUG: s.Direction#1: 10
      //DEBUG: s.BracketNum#1: 11
      //DEBUG: s.SaveOffset#1: 12
      //DEBUG: s.Num#1: 15
      //DEBUG: e.Ident#1: 13

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} # CmdIdentSave/9 s.Direction#1/10 s.BracketNum#1/11 s.SaveOffset#1/12 s.Num#1/15 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Ident/5 } Tile{ AsIs: e.Ident#1/13 } Tile{ HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_ident( context[4], ident_REQUEST.ref(vm) );
      refalrts::reinit_ident( context[5], ident_Ident.ref(vm) );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[13], context[14] );
      refalrts::splice_to_freelist_open( vm, context[5], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & MakeRequestCommand/4 (/5 # CmdCreateElem/9 s.CreateMode#1/10 s.ElemNo#1/11 # ElIdent/12 s.Num#1/15 e.Ident#1/13 )/6 >/1
    if( ! refalrts::ident_term(  ident_CmdCreateElem.ref(vm), context[9] ) )
      continue;
    if( ! refalrts::ident_term(  ident_ElIdent.ref(vm), context[12] ) )
      continue;
    // closed e.Ident#1 as range 13
    //DEBUG: s.CreateMode#1: 10
    //DEBUG: s.ElemNo#1: 11
    //DEBUG: s.Num#1: 15
    //DEBUG: e.Ident#1: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} # CmdCreateElem/9 s.CreateMode#1/10 s.ElemNo#1/11 # ElIdent/12 s.Num#1/15 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # REQUEST/4 HalfReuse: # Ident/5 } Tile{ AsIs: e.Ident#1/13 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_REQUEST.ref(vm) );
    refalrts::reinit_ident( context[5], ident_Ident.ref(vm) );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[13], context[14] );
    refalrts::splice_to_freelist_open( vm, context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & MakeRequestCommand/4 t.OtherCommand#1/5 >/1
  //DEBUG: t.OtherCommand#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & MakeRequestCommand/4 t.OtherCommand#1/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_MakeRequestCommand("MakeRequestCommand", 2415131115U, 4095631155U, func_MakeRequestCommand);


static refalrts::FnResult func_FillImplicitDeclarations(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & FillImplicitDeclarations/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & FillImplicitDeclarations/4 e.new#1/2 (/7 e.new#2/5 )/8 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 2
  // closed e.new#2 as range 5
  do {
    // </0 & FillImplicitDeclarations/4 e.RASL-B#1/11 (/17 # REQUEST/19 s.Type#1/20 e.Name#1/15 )/18 e.RASL-E#1/13 (/7 e.Definitions#1/5 )/8 >/1
    context[9] = context[2];
    context[10] = context[3];
    // closed e.Definitions#1 as range 5
    context[11] = 0;
    context[12] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[13] = context[9];
      context[14] = context[10];
      context[15] = 0;
      context[16] = 0;
      context[17] = refalrts::brackets_left( context[15], context[16], context[13], context[14] );
      if( ! context[17] )
        continue;
      refalrts::bracket_pointers(context[17], context[18]);
      context[19] = refalrts::ident_left(  ident_REQUEST.ref(vm), context[15], context[16] );
      if( ! context[19] )
        continue;
      // closed e.RASL-E#1 as range 13
      if( ! refalrts::svar_left( context[20], context[15], context[16] ) )
        continue;
      // closed e.Name#1 as range 15
      //DEBUG: e.Definitions#1: 5
      //DEBUG: e.RASL-B#1: 11
      //DEBUG: e.RASL-E#1: 13
      //DEBUG: s.Type#1: 20
      //DEBUG: e.Name#1: 15

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.RASL-B#1/11 } Tile{ AsIs: </0 AsIs: & FillImplicitDeclarations/4 } Tile{ AsIs: e.RASL-E#1/13 } Tile{ AsIs: (/7 } </21 Tile{ HalfReuse: & AddDefinition/17 HalfReuse: (/19 AsIs: s.Type#1/20 AsIs: e.Name#1/15 AsIs: )/18 } Tile{ AsIs: e.Definitions#1/5 } >/22 Tile{ AsIs: )/8 AsIs: >/1 ]] }
      if( ! refalrts::alloc_open_call( vm, context[21] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( vm, context[22] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_name( context[17], ref_AddDefinition.ref(vm) );
      refalrts::reinit_open_bracket( context[19] );
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::push_stack( vm, context[22] );
      refalrts::push_stack( vm, context[21] );
      refalrts::link_brackets( context[19], context[18] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      res = refalrts::splice_evar( res, context[22], context[22] );
      res = refalrts::splice_evar( res, context[5], context[6] );
      res = refalrts::splice_evar( res, context[17], context[18] );
      res = refalrts::splice_evar( res, context[21], context[21] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[13], context[14] );
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[11], context[12], context[9], context[10] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & FillImplicitDeclarations/4 e.RASL#1/2 (/7 e.Definitions#1/5 )/8 >/1
  // closed e.RASL#1 as range 2
  // closed e.Definitions#1 as range 5
  //DEBUG: e.RASL#1: 2
  //DEBUG: e.Definitions#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.RASL#1/2 } (/9 Tile{ AsIs: </0 Reuse: & UniqSorted/4 } </10 Tile{ HalfReuse: & Sort/7 AsIs: e.Definitions#1/5 HalfReuse: >/8 AsIs: >/1 } )/11 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( vm, context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( vm, context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( vm, context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UniqSorted.ref(vm) );
  refalrts::reinit_name( context[7], ref_Sort.ref(vm) );
  refalrts::reinit_close_call( context[8] );
  refalrts::link_brackets( context[9], context[11] );
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FillImplicitDeclarations("FillImplicitDeclarations", 2415131115U, 4095631155U, func_FillImplicitDeclarations);


static refalrts::FnResult func_AddDefinition(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & AddDefinition/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & AddDefinition/4 (/7 s.new#1/9 e.new#2/5 )/8 e.new#3/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#3 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 5
  do {
    // </0 & AddDefinition/4 (/7 # Extern/9 e.new#4/5 )/8 e.new#5/2 >/1
    if( ! refalrts::ident_term(  ident_Extern.ref(vm), context[9] ) )
      continue;
    // closed e.new#4 as range 5
    // closed e.new#5 as range 2
    do {
      // </0 & AddDefinition/4 (/7 # Extern/9 e.Name#1/5 )/8 e.Defs-B#1/12 (/18 # CmdExtern/20 e.Name#1/21 # Hash/23 s.Hash1#1/24 s.Hash2#1/25 )/19 e.Defs-E#1/14 >/1
      context[10] = context[2];
      context[11] = context[3];
      // closed e.Name#1 as range 5
      context[12] = 0;
      context[13] = 0;
      refalrts::start_e_loop(vm);
      do {
        context[14] = context[10];
        context[15] = context[11];
        context[16] = 0;
        context[17] = 0;
        context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
        if( ! context[18] )
          continue;
        refalrts::bracket_pointers(context[18], context[19]);
        context[20] = refalrts::ident_left(  ident_CmdExtern.ref(vm), context[16], context[17] );
        if( ! context[20] )
          continue;
        if( ! refalrts::repeated_evar_left( vm, context[21], context[22], context[5], context[6], context[16], context[17] ) )
          continue;
        context[23] = refalrts::ident_left(  ident_Hash.ref(vm), context[16], context[17] );
        if( ! context[23] )
          continue;
        // closed e.Defs-E#1 as range 14
        if( ! refalrts::svar_left( context[24], context[16], context[17] ) )
          continue;
        if( ! refalrts::svar_left( context[25], context[16], context[17] ) )
          continue;
        if( ! refalrts::empty_seq( context[16], context[17] ) )
          continue;
        //DEBUG: e.Name#1: 5
        //DEBUG: e.Defs-B#1: 12
        //DEBUG: e.Defs-E#1: 14
        //DEBUG: s.Hash1#1: 24
        //DEBUG: s.Hash2#1: 25

        refalrts::reset_allocator(vm);
        //TRASH: {REMOVED TILE} </0 & AddDefinition/4 (/7 # Extern/9 e.Name#1/5 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: (/18 AsIs: # CmdExtern/20 AsIs: e.Name#1/21 AsIs: # Hash/23 AsIs: s.Hash1#1/24 AsIs: s.Hash2#1/25 AsIs: )/19 } Tile{ AsIs: e.Defs-B#1/12 } Tile{ AsIs: e.Defs-E#1/14 } Tile{ ]] }
        refalrts::link_brackets( context[18], context[19] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        refalrts::splice_to_freelist_open( vm, trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & AddDefinition/4 (/7 # Extern/9 e.Name#1/5 )/8 e.Defs#1/2 >/1
    // closed e.Name#1 as range 5
    // closed e.Defs#1 as range 2
    //DEBUG: e.Name#1: 5
    //DEBUG: e.Defs#1: 2

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdExtern/9 AsIs: e.Name#1/5 HalfReuse: # Hash/8 } Tile{ HalfReuse: 0/0 HalfReuse: 0/4 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Defs#1/2 } Tile{ ]] }
    refalrts::update_ident( context[9], ident_CmdExtern.ref(vm) );
    refalrts::reinit_ident( context[8], ident_Hash.ref(vm) );
    refalrts::reinit_number( context[0], 0UL );
    refalrts::reinit_number( context[4], 0UL );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddDefinition/4 (/7 # Ident/9 e.new#4/5 )/8 e.new#5/2 >/1
  if( ! refalrts::ident_term(  ident_Ident.ref(vm), context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 5
  // closed e.new#5 as range 2
  do {
    // </0 & AddDefinition/4 (/7 # Ident/9 e.Name#1/5 )/8 e.Defs-B#1/12 (/18 # CmdDefineIdent/20 e.Name#1/21 )/19 e.Defs-E#1/14 >/1
    context[10] = context[2];
    context[11] = context[3];
    // closed e.Name#1 as range 5
    context[12] = 0;
    context[13] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[14] = context[10];
      context[15] = context[11];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  ident_CmdDefineIdent.ref(vm), context[16], context[17] );
      if( ! context[20] )
        continue;
      if( ! refalrts::repeated_evar_left( vm, context[21], context[22], context[5], context[6], context[16], context[17] ) )
        continue;
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Defs-E#1 as range 14
      //DEBUG: e.Name#1: 5
      //DEBUG: e.Defs-B#1: 12
      //DEBUG: e.Defs-E#1: 14

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & AddDefinition/4 (/7 # Ident/9 e.Name#1/5 )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/18 AsIs: # CmdDefineIdent/20 AsIs: e.Name#1/21 AsIs: )/19 } Tile{ AsIs: e.Defs-B#1/12 } Tile{ AsIs: e.Defs-E#1/14 } Tile{ ]] }
      refalrts::link_brackets( context[18], context[19] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[14], context[15] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[18], context[19] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[12], context[13], context[10], context[11] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & AddDefinition/4 (/7 # Ident/9 e.Name#1/5 )/8 e.Defs#1/2 >/1
  // closed e.Name#1 as range 5
  // closed e.Defs#1 as range 2
  //DEBUG: e.Name#1: 5
  //DEBUG: e.Defs#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & AddDefinition/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # CmdDefineIdent/9 AsIs: e.Name#1/5 AsIs: )/8 } Tile{ AsIs: e.Defs#1/2 } Tile{ ]] }
  refalrts::update_ident( context[9], ident_CmdDefineIdent.ref(vm) );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AddDefinition("AddDefinition", 2415131115U, 4095631155U, func_AddDefinition);


static refalrts::FnResult func_UniqSorted(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & UniqSorted/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & UniqSorted/4 e.Uniqs#1/7 t.Repeated#1/11 t.Repeated#1/13 e.NotScanned#1/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop(vm);
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[12] = refalrts::tvar_left( context[11], context[9], context[10] );
      if( ! context[12] )
        continue;
      context[14] = refalrts::repeated_stvar_left( vm, context[13], context[11], context[9], context[10] );
      if( ! context[14] )
        continue;
      // closed e.NotScanned#1 as range 9
      //DEBUG: e.Uniqs#1: 7
      //DEBUG: t.Repeated#1: 11
      //DEBUG: e.NotScanned#1: 9

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Repeated#1/11 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/7 } Tile{ AsIs: </0 AsIs: & UniqSorted/4 } Tile{ AsIs: t.Repeated#1/13 AsIs: e.NotScanned#1/9 AsIs: >/1 ]] }
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[13];
      res = refalrts::splice_evar( res, context[0], context[4] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & UniqSorted/4 e.Uniqs#1/2 >/1
  // closed e.Uniqs#1 as range 2
  //DEBUG: e.Uniqs#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & UniqSorted/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UniqSorted("UniqSorted", 2415131115U, 4095631155U, func_UniqSorted);


//End of file
