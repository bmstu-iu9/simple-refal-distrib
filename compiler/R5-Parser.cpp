// This file automatically generated from 'R5-Parser.ref'
// Don't edit! Edit 'R5-Parser.ref' and recompile it

#include "refalrts.h"

static const refalrts::RefalIdentifier ident_k37_ = refalrts::ident_from_static("%");
static const refalrts::RefalIdentifier ident_k42_ = refalrts::ident_from_static("*");
static const refalrts::RefalIdentifier ident_k43_ = refalrts::ident_from_static("+");
static const refalrts::RefalIdentifier ident_m_ = refalrts::ident_from_static("-");
static const refalrts::RefalIdentifier ident_k47_ = refalrts::ident_from_static("/");
static const refalrts::RefalIdentifier ident_k63_ = refalrts::ident_from_static("?");
static const refalrts::RefalIdentifier ident_Brackets = refalrts::ident_from_static("Brackets");
static const refalrts::RefalIdentifier ident_CallBrackets = refalrts::ident_from_static("CallBrackets");
static const refalrts::RefalIdentifier ident_Condition = refalrts::ident_from_static("Condition");
static const refalrts::RefalIdentifier ident_Declaration = refalrts::ident_from_static("Declaration");
static const refalrts::RefalIdentifier ident_Error = refalrts::ident_from_static("Error");
static const refalrts::RefalIdentifier ident_False = refalrts::ident_from_static("False");
static const refalrts::RefalIdentifier ident_Function = refalrts::ident_from_static("Function");
static const refalrts::RefalIdentifier ident_GNm_Entry = refalrts::ident_from_static("GN-Entry");
static const refalrts::RefalIdentifier ident_GNm_Local = refalrts::ident_from_static("GN-Local");
static const refalrts::RefalIdentifier ident_Pattern = refalrts::ident_from_static("Pattern");
static const refalrts::RefalIdentifier ident_Result = refalrts::ident_from_static("Result");
static const refalrts::RefalIdentifier ident_Sentences = refalrts::ident_from_static("Sentences");
static const refalrts::RefalIdentifier ident_TkAssign = refalrts::ident_from_static("TkAssign");
static const refalrts::RefalIdentifier ident_TkChar = refalrts::ident_from_static("TkChar");
static const refalrts::RefalIdentifier ident_TkCloseBlock = refalrts::ident_from_static("TkCloseBlock");
static const refalrts::RefalIdentifier ident_TkCloseBracket = refalrts::ident_from_static("TkCloseBracket");
static const refalrts::RefalIdentifier ident_TkCloseCall = refalrts::ident_from_static("TkCloseCall");
static const refalrts::RefalIdentifier ident_TkColon = refalrts::ident_from_static("TkColon");
static const refalrts::RefalIdentifier ident_TkComma = refalrts::ident_from_static("TkComma");
static const refalrts::RefalIdentifier ident_TkCompound = refalrts::ident_from_static("TkCompound");
static const refalrts::RefalIdentifier ident_TkEOF = refalrts::ident_from_static("TkEOF");
static const refalrts::RefalIdentifier ident_TkEntry = refalrts::ident_from_static("TkEntry");
static const refalrts::RefalIdentifier ident_TkError = refalrts::ident_from_static("TkError");
static const refalrts::RefalIdentifier ident_TkExtern = refalrts::ident_from_static("TkExtern");
static const refalrts::RefalIdentifier ident_TkIdentifier = refalrts::ident_from_static("TkIdentifier");
static const refalrts::RefalIdentifier ident_TkMacroDigit = refalrts::ident_from_static("TkMacroDigit");
static const refalrts::RefalIdentifier ident_TkName = refalrts::ident_from_static("TkName");
static const refalrts::RefalIdentifier ident_TkNumber = refalrts::ident_from_static("TkNumber");
static const refalrts::RefalIdentifier ident_TkOpenBlock = refalrts::ident_from_static("TkOpenBlock");
static const refalrts::RefalIdentifier ident_TkOpenBracket = refalrts::ident_from_static("TkOpenBracket");
static const refalrts::RefalIdentifier ident_TkOpenCall = refalrts::ident_from_static("TkOpenCall");
static const refalrts::RefalIdentifier ident_TkSemicolon = refalrts::ident_from_static("TkSemicolon");
static const refalrts::RefalIdentifier ident_TkVariable = refalrts::ident_from_static("TkVariable");
static const refalrts::RefalIdentifier ident_True = refalrts::ident_from_static("True");
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_Block("Block", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Blockm_AfterSentence("Block-AfterSentence", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Blockm_AfterSentence_S1B1("Block-AfterSentence$1:1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_CheckEmptyBlock("CheckEmptyBlock", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
static refalrts::ExternalReference ref_DoExpression("DoExpression", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_DoExpression_B1("DoExpression:1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_DoExpressionm_AfterBracket("DoExpression-AfterBracket", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_DoExpressionm_AfterCall("DoExpression-AfterCall", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_DoFilterErrors("DoFilterErrors", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Evm_met("Ev-met", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Expression("Expression", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Expressionm_Aux("Expression-Aux", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Expressionm_CheckBrackets("Expression-CheckBrackets", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Expressionm_CheckBrackets_S1C1C0("Expression-CheckBrackets$1?1?0", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Expressionm_CheckBrackets_S1C1C1("Expression-CheckBrackets$1?1?1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Expressionm_CheckBracketsm_AfterSubexpr("Expression-CheckBrackets-AfterSubexpr", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_ExtensionChain("ExtensionChain", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_ExtensionChainm_AfterBlock("ExtensionChain-AfterBlock", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_ExtensionChainm_AfterExtensionChain("ExtensionChain-AfterExtensionChain", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_ExtensionChainm_AfterPattern("ExtensionChain-AfterPattern", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_ExtensionChainm_AfterPattern_B1("ExtensionChain-AfterPattern:1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_ExtensionChainm_AfterPatternm_AfterResult("ExtensionChain-AfterPattern-AfterResult", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_ExtensionChainm_AfterResult("ExtensionChain-AfterResult", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_ExtensionChainm_AfterResult_S2B1("ExtensionChain-AfterResult$2:1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_ExtensionChainm_AfterResult_S2B1S4C1C0("ExtensionChain-AfterResult$2:1$4?1?0", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_ExtensionChainm_AfterResult_S2B1S4C1C1("ExtensionChain-AfterResult$2:1$4?1?1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Extern("Extern", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_FilterErrors("FilterErrors", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Function("Function", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Functionm_AfterBlock("Function-AfterBlock", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
static refalrts::ExternalReference ref_Mu("Mu", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Mu_A1("Mu=1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Mul("Mul", 0U, 0U);
static refalrts::ExternalReference ref_NameList("NameList", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_NameList_S2C1C0("NameList$2?1?0", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_NameListm_DoNames("NameList-DoNames", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S6C1C0("NameList-DoNames$6?1?0", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S6C1C1("NameList-DoNames$6?1?1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S6C2C0("NameList-DoNames$6?2?0", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S6C2C1("NameList-DoNames$6?2?1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_OneOf("OneOf", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Pattern("Pattern", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Program("Program", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Program_S1C1C0("Program$1?1?0", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Program_S1C1C1("Program$1?1?1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Program_S1C2C0("Program$1?2?0", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Program_S1C2C1("Program$1?2?1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Program_S3C1C0("Program$3?1?0", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Programm_AfterUnit("Program-AfterUnit", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_R5m_Parse("R5-Parse", 0U, 0U);
static refalrts::ExternalReference ref_Residue("Residue", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Residue_A1("Residue=1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Result("Result", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Sentence("Sentence", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Sentencem_AfterExtensionChain("Sentence-AfterExtensionChain", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Sentencem_AfterPattern("Sentence-AfterPattern", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Sentencem_AfterResult("Sentence-AfterResult", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Sub("Sub", 0U, 0U);
static refalrts::ExternalReference ref_TokName("TokName", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Type("Type", 0U, 0U);
static refalrts::ExternalReference ref_UnexpectedToken("UnexpectedToken", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_UnexpectedTokenInSentence("UnexpectedTokenInSentence", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Unit("Unit", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Unit_B1("Unit:1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_Unit_B1S3C1C0("Unit:1$3?1?0", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_Up("Up", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_u_u_FindMuPtr("__FindMuPtr", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Mum_Aux("__Mu-Aux", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 893557537U, 3673923261U);
static refalrts::ExternalReference ref_u_u_Stepm_End("__Step-End", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Stepm_Start("__Step-Start", 0U, 0U);

static refalrts::FnResult func_gen_Mu_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Mu=1/4 (/7 e.Arg#1/5 )/8 s.Function-Ptr#2/9 >/1
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
  // closed e.Arg#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Arg#1: 5
  //DEBUG: s.Function-Ptr#2: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 HalfReuse: >/7 } Tile{ HalfReuse: </8 AsIs: s.Function-Ptr#2/9 } Tile{ AsIs: e.Arg#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_u_u_Stepm_End.ref.function );
  refalrts::reinit_close_call( context[7] );
  refalrts::reinit_open_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Mu_A1("Mu=1", 893557537U, 3673923261U, func_gen_Mu_A1);


static refalrts::FnResult func_Mu(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 [*]/8 & Mu=1/9 (/10 Tile{ AsIs: e.Arg#1/2 } )/11 {*}/12 </13 & __Step-Start/14 >/15 Tile{ AsIs: </0 Reuse: & __Mu-Aux/4 AsIs: t.Function#1/5 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_Mu_A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[12], context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_u_u_Stepm_Start.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_u_u_Mum_Aux.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mu("Mu", 893557537U, 3673923261U, func_Mu);


static refalrts::FnResult func_gen_u_u_Mum_Aux_S13B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  //FAST GEN: s.$ s.$ t.$
  //GLOBAL GEN: s.$ s.$ t.$
  // </0 & __Mu-Aux$13:1/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 >/1
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
    // 'F' s.idx s.idx
    // </0 & __Mu-Aux$13:1/4 'F'/5 s.SubType#2/6 s.FnPtr#2/7 >/1
    if( ! refalrts::svar_term( context[7], context[7] ) )
      continue;
    if( ! refalrts::char_term( 'F', context[5] ) )
      continue;
    //DEBUG: s.FnPtr#2: 7
    //DEBUG: s.SubType#2: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux$13:1/4 'F'/5 s.SubType#2/6 s.FnPtr#2/7 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: s.FnPtr2 #7/1 ]] }
    refalrts::reinit_svar( context[1], context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // 'W' s.idx s.idx
    // </0 & __Mu-Aux$13:1/4 'W'/5 s.SubType#2/6 s.FnName#2/7 >/1
    if( ! refalrts::svar_term( context[7], context[7] ) )
      continue;
    if( ! refalrts::char_term( 'W', context[5] ) )
      continue;
    //DEBUG: s.FnName#2: 7
    //DEBUG: s.SubType#2: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.SubType#2/6 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } <Cookie2>/9 Tile{ AsIs: s.FnName#2/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_number( context[9], 3673923261UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref.function );
    refalrts::reinit_number( context[5], 893557537UL );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // 'B' s.idx ( e.idx )
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.0#2/6 {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __FindMuPtr/4 HalfReuse: <Cookie1>/5 } Tile{ HalfReuse: <Cookie2>/7 } Tile{ AsIs: e.FnName#2/9 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref.function );
  refalrts::reinit_number( context[5], 893557537UL );
  refalrts::reinit_number( context[7], 3673923261UL );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 893557537U, 3673923261U, func_gen_u_u_Mum_Aux_S13B1);


static refalrts::FnResult func_u_u_Mum_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & __Mu-Aux/4 t.idx#0/5 >/1
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
    // '+'
    // </0 & __Mu-Aux/4 '+'/5 >/1
    if( ! refalrts::char_term( '+', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '+'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
    refalrts::reinit_name( context[1], ref_Add.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '/'
    // </0 & __Mu-Aux/4 '/'/5 >/1
    if( ! refalrts::char_term( '/', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '/'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
    refalrts::reinit_name( context[1], ref_Div.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '%'
    // </0 & __Mu-Aux/4 '%'/5 >/1
    if( ! refalrts::char_term( '%', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '%'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
    refalrts::reinit_name( context[1], ref_Mod.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '*'
    // </0 & __Mu-Aux/4 '*'/5 >/1
    if( ! refalrts::char_term( '*', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '*'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
    refalrts::reinit_name( context[1], ref_Mul.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '?'
    // </0 & __Mu-Aux/4 '?'/5 >/1
    if( ! refalrts::char_term( '?', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '?'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
    refalrts::reinit_name( context[1], ref_Residue.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // '-'
    // </0 & __Mu-Aux/4 '-'/5 >/1
    if( ! refalrts::char_term( '-', context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 '-'/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
    refalrts::reinit_name( context[1], ref_Sub.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # +
    // </0 & __Mu-Aux/4 # +/5 >/1
    if( ! refalrts::ident_term(  ident_k43_, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # +/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Add/1 ]] }
    refalrts::reinit_name( context[1], ref_Add.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # /
    // </0 & __Mu-Aux/4 # //5 >/1
    if( ! refalrts::ident_term(  ident_k47_, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # //5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Div/1 ]] }
    refalrts::reinit_name( context[1], ref_Div.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # %
    // </0 & __Mu-Aux/4 # %/5 >/1
    if( ! refalrts::ident_term(  ident_k37_, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # %/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mod/1 ]] }
    refalrts::reinit_name( context[1], ref_Mod.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # *
    // </0 & __Mu-Aux/4 # */5 >/1
    if( ! refalrts::ident_term(  ident_k42_, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # */5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Mul/1 ]] }
    refalrts::reinit_name( context[1], ref_Mul.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # ?
    // </0 & __Mu-Aux/4 # ?/5 >/1
    if( ! refalrts::ident_term(  ident_k63_, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # ?/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Residue/1 ]] }
    refalrts::reinit_name( context[1], ref_Residue.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # -
    // </0 & __Mu-Aux/4 # -/5 >/1
    if( ! refalrts::ident_term(  ident_m_, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & __Mu-Aux/4 # -/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: & Sub/1 ]] }
    refalrts::reinit_name( context[1], ref_Sub.ref.function );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & __Mu-Aux/4 t.Function#1/5 >/1
  //DEBUG: t.Function#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & __Mu-Aux$13:1/8 Tile{ AsIs: </0 Reuse: & Type/4 AsIs: t.Function#1/5 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_gen_u_u_Mum_Aux_S13B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Type.ref.function );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 893557537U, 3673923261U, func_u_u_Mum_Aux);


static refalrts::FnResult func_gen_Residue_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Residue=1/4 (/7 e.Arg#1/5 )/8 s.Function-Ptr#2/9 >/1
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
  // closed e.Arg#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Arg#1: 5
  //DEBUG: s.Function-Ptr#2: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 HalfReuse: >/7 } Tile{ HalfReuse: </8 AsIs: s.Function-Ptr#2/9 } Tile{ AsIs: e.Arg#1/5 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_u_u_Stepm_End.ref.function );
  refalrts::reinit_close_call( context[7] );
  refalrts::reinit_open_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Residue_A1("Residue=1", 893557537U, 3673923261U, func_gen_Residue_A1);


static refalrts::FnResult func_Residue(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
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

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 [*]/8 & Residue=1/9 (/10 Tile{ AsIs: e.Arg#1/2 } )/11 {*}/12 </13 & __Step-Start/14 >/15 Tile{ AsIs: </0 Reuse: & __Mu-Aux/4 AsIs: t.Function#1/5 } >/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_Residue_A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[12], context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_u_u_Stepm_Start.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_u_u_Mum_Aux.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[13] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Residue("Residue", 893557537U, 3673923261U, func_Residue);


static refalrts::FnResult func_R5m_Parse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & R5-Parse/4 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & FilterErrors/6 Tile{ AsIs: </0 Reuse: & Program/4 AsIs: e.Tokens#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_FilterErrors.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Program.ref.function );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_R5m_Parse("R5-Parse", 0U, 0U, func_R5m_Parse);


static refalrts::FnResult func_FilterErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & FilterErrors/4 e.UnitsAndErrors#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.UnitsAndErrors#1 as range 2
  //DEBUG: e.UnitsAndErrors#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & DoFilterErrors/6 (/7 )/8 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.UnitsAndErrors#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_DoFilterErrors.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_FilterErrors("FilterErrors", 893557537U, 3673923261U, func_FilterErrors);


static refalrts::FnResult func_DoFilterErrors(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) e.$
  // </0 & DoFilterErrors/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 e.idxTT#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTT#0 as range 2
  do {
    // ( e.idx ) ( e.idx ) e.idx
    // </0 & DoFilterErrors/4 (/7 e.Errors#1/13 )/8 (/11 e.Units#1/15 )/12 e.Units-B#1/19 (/25 # Error/27 t.Pos#1/28 e.Message#1/23 )/26 e.UnitsAndErrors-E#1/21 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Errors#1 as range 13
    // closed e.Units#1 as range 15
    context[19] = 0;
    context[20] = 0;
    refalrts::start_e_loop();
    do {
      context[21] = context[17];
      context[22] = context[18];
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      context[27] = refalrts::ident_left(  ident_Error, context[23], context[24] );
      if( ! context[27] )
        continue;
      // closed e.UnitsAndErrors-E#1 as range 21
      context[29] = refalrts::tvar_left( context[28], context[23], context[24] );
      if( ! context[29] )
        continue;
      // closed e.Message#1 as range 23
      //DEBUG: e.Errors#1: 13
      //DEBUG: e.Units#1: 15
      //DEBUG: e.Units-B#1: 19
      //DEBUG: e.UnitsAndErrors-E#1: 21
      //DEBUG: t.Pos#1: 28
      //DEBUG: e.Message#1: 23

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFilterErrors/4 AsIs: (/7 AsIs: e.Errors#1/13 HalfReuse: (/8 } Tile{ AsIs: t.Pos#1/28 } Tile{ AsIs: e.Message#1/23 } Tile{ AsIs: )/12 } Tile{ HalfReuse: )/27 } Tile{ AsIs: (/25 } Tile{ AsIs: e.Units#1/15 } Tile{ AsIs: e.Units-B#1/19 } Tile{ AsIs: )/26 AsIs: e.UnitsAndErrors-E#1/21 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket( context[8] );
      refalrts::reinit_close_bracket( context[27] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[25], context[26] );
      refalrts::link_brackets( context[7], context[27] );
      refalrts::link_brackets( context[8], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[26];
      res = refalrts::splice_evar( res, context[19], context[20] );
      res = refalrts::splice_evar( res, context[15], context[16] );
      res = refalrts::splice_evar( res, context[25], context[25] );
      res = refalrts::splice_evar( res, context[27], context[27] );
      res = refalrts::splice_evar( res, context[12], context[12] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[28], context[29] );
      refalrts::splice_to_freelist_open( context[8], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[19], context[20], context[17], context[18] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) t.idx e.idx
    // </0 & DoFilterErrors/4 (/7 e.Errors#1/13 )/8 (/11 e.Units#1/15 )/12 t.Unit#1/19 e.UnitsAndErrors#1/17 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[9];
    context[16] = context[10];
    context[17] = context[2];
    context[18] = context[3];
    // closed e.Errors#1 as range 13
    // closed e.Units#1 as range 15
    context[20] = refalrts::tvar_left( context[19], context[17], context[18] );
    if( ! context[20] )
      continue;
    // closed e.UnitsAndErrors#1 as range 17
    //DEBUG: e.Errors#1: 13
    //DEBUG: e.Units#1: 15
    //DEBUG: t.Unit#1: 19
    //DEBUG: e.UnitsAndErrors#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoFilterErrors/4 AsIs: (/7 AsIs: e.Errors#1/13 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Units#1/15 } Tile{ AsIs: t.Unit#1/19 } Tile{ AsIs: )/12 } Tile{ AsIs: e.UnitsAndErrors#1/17 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx )
  // </0 & DoFilterErrors/4 (/7 e.Errors#1/13 )/8 (/11 e.Units#1/15 )/12 >/1
  context[13] = context[5];
  context[14] = context[6];
  context[15] = context[9];
  context[16] = context[10];
  context[17] = context[2];
  context[18] = context[3];
  if( ! refalrts::empty_seq( context[17], context[18] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 13
  // closed e.Units#1 as range 15
  //DEBUG: e.Errors#1: 13
  //DEBUG: e.Units#1: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoFilterErrors/4 {REMOVED TILE} (/11 {REMOVED TILE} )/12 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#1/13 AsIs: )/8 } Tile{ AsIs: e.Units#1/15 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoFilterErrors("DoFilterErrors", 893557537U, 3673923261U, func_DoFilterErrors);


static refalrts::FnResult func_Program(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Program/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // t.idx e.idx
    // </0 & Program/4 t.NextToken#1/7 e.Tokens#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tokens#1 as range 5
    //DEBUG: t.NextToken#1: 7
    //DEBUG: e.Tokens#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$1?1?0/4 AsIs: t.NextToken#1/7 } (/9 Tile{ AsIs: e.Tokens#1/5 } )/10 t.NextToken#1/7/11 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[11], context[12], context[7], context[8]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_Program_S1C1C0.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & Program/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$1?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_Program_S1C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Program("Program", 893557537U, 3673923261U, func_Program);


static refalrts::FnResult func_gen_Program_S1C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Program$1?1?0/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // t.idx ( e.idx ) ( s.idx t.idx e.idx )
    // </0 & Program$1?1?0/4 t.NextToken#1/16 (/13 e.Tokens#1/11 )/14 (/9 s.Type#2/15 t.Pos#2/18 e.Value#2/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_right( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Tokens#1 as range 11
    if( ! refalrts::svar_left( context[15], context[7], context[8] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[5], context[6] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[7], context[8] );
    if( ! context[19] )
      continue;
    // closed e.Value#2 as range 7
    //DEBUG: e.Tokens#1: 11
    //DEBUG: s.Type#2: 15
    //DEBUG: t.NextToken#1: 16
    //DEBUG: t.Pos#2: 18
    //DEBUG: e.Value#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$1?2?0/4 AsIs: t.NextToken#1/16 AsIs: (/13 AsIs: e.Tokens#1/11 AsIs: )/14 HalfReuse: s.Type2 #15/9 } Tile{ AsIs: t.Pos#2/18 } (/20 Tile{ AsIs: e.Value#2/7 } )/21 </22 & OneOf/23 Tile{ AsIs: s.Type#2/15 } # TkExtern/24 # TkEntry/25 # TkName/26 # TkSemicolon/27 Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[24], ident_TkExtern ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], ident_TkEntry ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[26], ident_TkName ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], ident_TkSemicolon ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_Program_S1C2C0.ref.function );
    refalrts::reinit_svar( context[9], context[15] );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[22] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & Program$1?1?0/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$1?2?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_Program_S1C2C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Program_S1C1C0("Program$1?1?0", 893557537U, 3673923261U, func_gen_Program_S1C1C0);


static refalrts::FnResult func_gen_Program_S1C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & Program$1?1?1/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // ( # TkEOF t.idx )
    // </0 & Program$1?1?1/4 (/5 # TkEOF/11 t.Pos#1/12 )/6 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_TkEOF, context[9], context[10] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.Pos#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Program$1?1?1/4 (/5 # TkEOF/11 t.Pos#1/12 )/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & Program$1?1?1/4 t.Unexpected#1/5 e.Tokens#1/7 >/1
  context[7] = context[2];
  context[8] = context[3];
  // closed e.Tokens#1 as range 7
  //DEBUG: t.Unexpected#1: 5
  //DEBUG: e.Tokens#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$3?1?0/4 AsIs: t.Unexpected#1/5 } (/9 Tile{ AsIs: e.Tokens#1/7 } )/10 t.Unexpected#1/5/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[11], context[12], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_Program_S3C1C0.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Program_S1C1C1("Program$1?1?1", 893557537U, 3673923261U, func_gen_Program_S1C1C1);


static refalrts::FnResult func_gen_Program_S1C2C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: t.$ ( e.$ ) s.$ t.$ ( e.$ ) e.$
  //GLOBAL GEN: t.$ ( e.$ ) s.$ t.$ ( e.$ ) e.$
  // </0 & Program$1?2?0/4 t.idx#0/5 (/9 e.idxVB#0/7 )/10 s.idxVT#0/11 t.idxVTV#0/12 (/16 e.idxVTVVB#0/14 )/17 e.idxVTVVT#0/2 >/1
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
  // closed e.idxVB#0 as range 7
  if( ! refalrts::svar_left( context[11], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.idxVTVVB#0 as range 14
  // closed e.idxVTVVT#0 as range 2
  do {
    // t.idx ( e.idx ) s.idx t.idx ( e.idx ) # True
    // </0 & Program$1?2?0/4 t.NextToken#1/5 (/9 e.Tokens#1/18 )/10 s.Type#2/11 t.Pos#2/12 (/16 e.Value#2/20 )/17 # True/24 >/1
    context[18] = context[7];
    context[19] = context[8];
    context[20] = context[14];
    context[21] = context[15];
    context[22] = context[2];
    context[23] = context[3];
    context[24] = refalrts::ident_left(  ident_True, context[22], context[23] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.Tokens#1 as range 18
    // closed e.Value#2 as range 20
    //DEBUG: t.NextToken#1: 5
    //DEBUG: t.Pos#2: 12
    //DEBUG: s.Type#2: 11
    //DEBUG: e.Tokens#1: 18
    //DEBUG: e.Value#2: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} s.Type#2/11 t.Pos#2/12 {REMOVED TILE} e.Value#2/20 )/17 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program-AfterUnit/4 } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & Unit/10 } Tile{ AsIs: t.NextToken#1/5 } Tile{ AsIs: e.Tokens#1/18 } Tile{ HalfReuse: >/24 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Programm_AfterUnit.ref.function );
    refalrts::reinit_open_call( context[16] );
    refalrts::reinit_name( context[10], ref_Unit.ref.function );
    refalrts::reinit_close_call( context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( e.idx ) s.idx t.idx ( e.idx ) e.idx
  // </0 & Program$1?2?0/4 t.NextToken#1/5 (/9 e.Tokens#1/18 )/10 s.Type#2/11 t.Pos#2/12 (/16 e.Value#2/20 )/17 e.Other#0/22 >/1
  context[18] = context[7];
  context[19] = context[8];
  context[20] = context[14];
  context[21] = context[15];
  context[22] = context[2];
  context[23] = context[3];
  // closed e.Tokens#1 as range 18
  // closed e.Value#2 as range 20
  // closed e.Other#0 as range 22
  //DEBUG: t.NextToken#1: 5
  //DEBUG: t.Pos#2: 12
  //DEBUG: s.Type#2: 11
  //DEBUG: e.Tokens#1: 18
  //DEBUG: e.Value#2: 20
  //DEBUG: e.Other#0: 22

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Other#0/22 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$1?2?1/4 AsIs: t.NextToken#1/5 AsIs: (/9 AsIs: e.Tokens#1/18 AsIs: )/10 } Tile{ AsIs: (/16 } Tile{ AsIs: s.Type#2/11 AsIs: t.Pos#2/12 } Tile{ AsIs: e.Value#2/20 } Tile{ AsIs: )/17 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_Program_S1C2C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::splice_to_freelist_open( context[10], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Program_S1C2C0("Program$1?2?0", 893557537U, 3673923261U, func_gen_Program_S1C2C0);


static refalrts::FnResult func_gen_Program_S1C2C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Program$1?2?1/4 t.NextToken#1/5 (/9 e.Tokens#1/7 )/10 e.Other#0/2 >/1
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
  // closed e.Tokens#1 as range 7
  // closed e.Other#0 as range 2
  //DEBUG: t.NextToken#1: 5
  //DEBUG: e.Tokens#1: 7
  //DEBUG: e.Other#0: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 e.Other#0/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$1?1?1/4 AsIs: t.NextToken#1/5 } Tile{ AsIs: e.Tokens#1/7 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_Program_S1C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Program_S1C2C1("Program$1?2?1", 893557537U, 3673923261U, func_gen_Program_S1C2C1);


static refalrts::FnResult func_gen_Program_S3C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & Program$3?1?0/4 t.Unexpected#1/14 (/11 e.Tokens#1/9 )/12 (/7 s.Type#2/13 t.Pos#2/16 e.Value#2/5 )/8 >/1
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
  // closed e.Tokens#1 as range 9
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[5], context[6] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.Value#2 as range 5
  //DEBUG: e.Tokens#1: 9
  //DEBUG: s.Type#2: 13
  //DEBUG: t.Unexpected#1: 14
  //DEBUG: t.Pos#2: 16
  //DEBUG: e.Value#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/13 t.Pos#2/16 e.Value#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/14 HalfReuse: '$'/11 } 'E'/18 Tile{ HalfReuse: 'X'/12 HalfReuse: 'T'/7 } Tile{ HalfReuse: 'E'/8 }"RN, $ENTRY, function name or special comment"/19 >/21 </22 & Program/23 Tile{ AsIs: e.Tokens#1/9 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[18], 'E' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[19], context[20], "RN, $ENTRY, function name or special comment", 44 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ref_Program.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[11], '$' );
  refalrts::reinit_char( context[12], 'X' );
  refalrts::reinit_char( context[7], 'T' );
  refalrts::reinit_char( context[8], 'E' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[12], context[7] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::splice_to_freelist_open( context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Program_S3C1C0("Program$3?1?0", 893557537U, 3673923261U, func_gen_Program_S3C1C0);


static refalrts::FnResult func_OneOf(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & OneOf/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // t.idx e.idx
    // </0 & OneOf/4 t.Elem#1/5 e.Elems-B#1/9 t.Elem#1/13 e.Elems-E#1/11 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    refalrts::start_e_loop();
    do {
      context[11] = context[7];
      context[12] = context[8];
      context[14] = refalrts::repeated_stvar_left( context[13], context[5], context[11], context[12] );
      if( ! context[14] )
        continue;
      // closed e.Elems-E#1 as range 11
      //DEBUG: t.Elem#1: 5
      //DEBUG: e.Elems-B#1: 9
      //DEBUG: e.Elems-E#1: 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & OneOf/4 t.Elem#1/5 e.Elems-B#1/9 t.Elem#1/13 e.Elems-E#1/11 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # True/1 ]] }
      refalrts::reinit_ident( context[1], ident_True );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[9], context[10], context[7], context[8] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & OneOf/4 t.Elem#1/5 e.Elems#1/7 >/1
  context[7] = context[2];
  context[8] = context[3];
  // closed e.Elems#1 as range 7
  //DEBUG: t.Elem#1: 5
  //DEBUG: e.Elems#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & OneOf/4 t.Elem#1/5 e.Elems#1/7 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: # False/1 ]] }
  refalrts::reinit_ident( context[1], ident_False );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_OneOf("OneOf", 893557537U, 3673923261U, func_OneOf);


static refalrts::FnResult func_Programm_AfterUnit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Program-AfterUnit/4 (/7 e.ErrorsUnits#1/5 )/8 e.Tokens#1/2 >/1
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
  // closed e.ErrorsUnits#1 as range 5
  // closed e.Tokens#1 as range 2
  //DEBUG: e.ErrorsUnits#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} & Program-AfterUnit/4 (/7 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ErrorsUnits#1/5 } Tile{ AsIs: </0 } Tile{ HalfReuse: & Program/8 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  refalrts::reinit_name( context[8], ref_Program.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Programm_AfterUnit("Program-AfterUnit", 893557537U, 3673923261U, func_Programm_AfterUnit);


static refalrts::FnResult func_gen_Unit_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: ( e.$ ) t.$ ( e.$ )
  //GLOBAL GEN: ( e.$ ) t.$ ( s.$ t.$ e.$ )
  // </0 & Unit:1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/14 (/11 s.idxTVB#0/13 t.idxTVBV#0/16 e.idxTVBVV#0/9 )/12 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[9], context[10] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVBVV#0 as range 9
  do {
    // ( e.idx ) t.idx ( # TkExtern t.idx )
    // </0 & Unit:1/4 (/7 e.Tokens#1/18 )/8 t.NextToken#1/14 (/11 # TkExtern/13 t.Pos#2/16 )/12 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    if( ! refalrts::ident_term(  ident_TkExtern, context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.Tokens#1 as range 18
    //DEBUG: t.NextToken#1: 14
    //DEBUG: t.Pos#2: 16
    //DEBUG: e.Tokens#1: 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 t.NextToken#1/14 (/11 # TkExtern/13 t.Pos#2/16 )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList/4 } Tile{ AsIs: e.Tokens#1/18 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_NameList.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx ( # TkSemicolon t.idx )
    // </0 & Unit:1/4 (/7 e.Tokens#1/18 )/8 t.NextToken#1/14 (/11 # TkSemicolon/13 t.Pos#2/16 )/12 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    if( ! refalrts::ident_term(  ident_TkSemicolon, context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.Tokens#1 as range 18
    //DEBUG: t.NextToken#1: 14
    //DEBUG: t.Pos#2: 16
    //DEBUG: e.Tokens#1: 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 t.NextToken#1/14 (/11 # TkSemicolon/13 t.Pos#2/16 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 } Tile{ AsIs: e.Tokens#1/18 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx ( s.idx t.idx e.idx )
  // </0 & Unit:1/4 (/7 e.Tokens#1/18 )/8 t.NextToken#1/14 (/11 s.Type#2/13 t.Pos#2/16 e.Value#2/20 )/12 >/1
  context[18] = context[5];
  context[19] = context[6];
  context[20] = context[9];
  context[21] = context[10];
  // closed e.Tokens#1 as range 18
  // closed e.Value#2 as range 20
  //DEBUG: t.NextToken#1: 14
  //DEBUG: t.Pos#2: 16
  //DEBUG: s.Type#2: 13
  //DEBUG: e.Tokens#1: 18
  //DEBUG: e.Value#2: 20

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Unit:1$3?1?0/4 AsIs: (/7 AsIs: e.Tokens#1/18 AsIs: )/8 AsIs: t.NextToken#1/14 HalfReuse: s.Type2 #13/11 } Tile{ AsIs: t.Pos#2/16 } (/22 Tile{ AsIs: e.Value#2/20 } )/23 </24 & OneOf/25 Tile{ AsIs: s.Type#2/13 } # TkEntry/26 # TkName/27 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], ref_OneOf.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[26], ident_TkEntry ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[27], ident_TkName ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_Unit_B1S3C1C0.ref.function );
  refalrts::reinit_svar( context[11], context[13] );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1("Unit:1", 893557537U, 3673923261U, func_gen_Unit_B1);


static refalrts::FnResult func_gen_Unit_B1S3C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Unit:1$3?1?0/4 (/8 e.Tokens#1/6 )/9 t.NextToken#1/14 s.Type#2/16 t.Pos#2/17 (/12 e.Value#2/10 )/13 # True/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = refalrts::ident_right(  ident_True, context[2], context[3] );
  if( ! context[5] )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_right( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Tokens#1 as range 6
  // closed e.Value#2 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Tokens#1: 6
  //DEBUG: e.Value#2: 10
  //DEBUG: t.NextToken#1: 14
  //DEBUG: s.Type#2: 16
  //DEBUG: t.Pos#2: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/8 {REMOVED TILE} )/9 {REMOVED TILE} s.Type#2/16 t.Pos#2/17 (/12 e.Value#2/10 )/13 # True/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function/4 } Tile{ AsIs: t.NextToken#1/14 } Tile{ AsIs: e.Tokens#1/6 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Function.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1S3C1C0("Unit:1$3?1?0", 893557537U, 3673923261U, func_gen_Unit_B1S3C1C0);


static refalrts::FnResult func_Unit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Unit/4 t.NextToken#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.NextToken#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Unit:1/7 (/8 Tile{ AsIs: e.Tokens#1/2 } )/9 Tile{ AsIs: t.NextToken#1/5 } {*}/10 t.NextToken#1/5/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[7], ref_gen_Unit_B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[10], context[4] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[11], context[12], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::wrap_closure( context[10] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Unit("Unit", 893557537U, 3673923261U, func_Unit);


static refalrts::FnResult func_NameList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & NameList/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // ( # TkName t.idx e.idx ) e.idx
    // </0 & NameList/4 (/5 # TkName/11 t.Pos#1/12 e.Name#1/9 )/6 e.Tokens#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_TkName, context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.Tokens#1 as range 7
    context[13] = refalrts::tvar_left( context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.Name#1 as range 9
    //DEBUG: e.Tokens#1: 7
    //DEBUG: t.Pos#1: 12
    //DEBUG: e.Name#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames/4 AsIs: (/5 HalfReuse: </11 } & Extern/14 Tile{ AsIs: t.Pos#1/12 } Tile{ AsIs: e.Name#1/9 } >/15 Tile{ AsIs: )/6 AsIs: e.Tokens#1/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[14], ref_Extern.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_NameListm_DoNames.ref.function );
    refalrts::reinit_open_call( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[5], context[6] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & NameList/4 t.NextToken#1/5 e.Tokens#1/7 >/1
  context[7] = context[2];
  context[8] = context[3];
  // closed e.Tokens#1 as range 7
  //DEBUG: t.NextToken#1: 5
  //DEBUG: e.Tokens#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList$2?1?0/4 AsIs: t.NextToken#1/5 } (/9 Tile{ AsIs: e.Tokens#1/7 } )/10 t.NextToken#1/5/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[11], context[12], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_NameList_S2C1C0.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameList("NameList", 893557537U, 3673923261U, func_NameList);


static refalrts::FnResult func_gen_NameList_S2C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & NameList$2?1?0/4 t.NextToken#1/14 (/11 e.Tokens#1/9 )/12 (/7 s.Type#2/13 t.Pos#2/16 e.Value#2/5 )/8 >/1
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
  // closed e.Tokens#1 as range 9
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[5], context[6] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.Value#2 as range 5
  //DEBUG: e.Tokens#1: 9
  //DEBUG: s.Type#2: 13
  //DEBUG: t.NextToken#1: 14
  //DEBUG: t.Pos#2: 16
  //DEBUG: e.Value#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/13 {REMOVED TILE} e.Value#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } # Error/18 Tile{ AsIs: t.Pos#2/16 } Tile{ HalfReuse: 'e'/11 }"xpe"/19 Tile{ HalfReuse: 'c'/12 HalfReuse: 't'/7 }"ed function name after $EXTERN keyword"/21 Tile{ AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: t.NextToken#1/14 } Tile{ AsIs: e.Tokens#1/9 } Tile{ ]] }
  if( ! refalrts::alloc_ident( context[18], ident_Error ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[19], context[20], "xpe", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[21], context[22], "ed function name after $EXTERN keyword", 38 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_char( context[11], 'e' );
  refalrts::reinit_char( context[12], 'c' );
  refalrts::reinit_char( context[7], 't' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[12], context[7] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameList_S2C1C0("NameList$2?1?0", 893557537U, 3673923261U, func_gen_NameList_S2C1C0);


static refalrts::FnResult func_Extern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Extern/4 t.Pos#1/5 e.Name#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Name#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Declaration/4 AsIs: t.Pos#1/5 } # GN-Entry/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_ident( context[7], ident_GNm_Entry ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Declaration );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Extern("Extern", 893557537U, 3673923261U, func_Extern);


static refalrts::FnResult func_NameListm_DoNames(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & NameList-DoNames/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( e.idx ) ( # TkComma t.idx ) ( # TkName t.idx e.idx ) e.idx
    // </0 & NameList-DoNames/4 (/9 e.ExternsAndErrors#1/7 )/10 (/13 # TkComma/15 t.CommaPos#1/21 )/14 (/18 # TkName/20 t.NamePos#1/23 e.Name#1/16 )/19 e.Tokens#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  ident_TkComma, context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  ident_TkName, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.ExternsAndErrors#1 as range 7
    // closed e.Tokens#1 as range 5
    context[22] = refalrts::tvar_left( context[21], context[11], context[12] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    context[24] = refalrts::tvar_left( context[23], context[16], context[17] );
    if( ! context[24] )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: e.ExternsAndErrors#1: 7
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.CommaPos#1: 21
    //DEBUG: t.NamePos#1: 23
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # TkComma/15 t.CommaPos#1/21 )/14 (/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: (/9 AsIs: e.ExternsAndErrors#1/7 HalfReuse: </10 HalfReuse: & Extern/13 } Tile{ AsIs: t.NamePos#1/23 } Tile{ AsIs: e.Name#1/16 } Tile{ HalfReuse: >/20 } Tile{ AsIs: )/19 AsIs: e.Tokens#1/5 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[13], ref_Extern.ref.function );
    refalrts::reinit_close_call( context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[19] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::splice_to_freelist_open( context[13], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # TkSemicolon t.idx ) e.idx
    // </0 & NameList-DoNames/4 (/9 e.ExternsAndErrors#1/7 )/10 (/13 # TkSemicolon/15 t.Pos#1/16 )/14 e.Tokens#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  ident_TkSemicolon, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.ExternsAndErrors#1 as range 7
    // closed e.Tokens#1 as range 5
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.ExternsAndErrors#1: 7
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.Pos#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NameList-DoNames/4 {REMOVED TILE} (/13 # TkSemicolon/15 t.Pos#1/16 )/14 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: e.ExternsAndErrors#1/7 AsIs: )/10 } Tile{ AsIs: e.Tokens#1/5 } Tile{ ]] }
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # TkComma t.idx ) e.idx
    // </0 & NameList-DoNames/4 (/9 e.ExternsAndErrors#1/7 )/10 (/13 # TkComma/15 t.Pos#1/16 )/14 e.Tokens#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  ident_TkComma, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.ExternsAndErrors#1 as range 7
    // closed e.Tokens#1 as range 5
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.ExternsAndErrors#1: 7
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.Pos#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: (/9 AsIs: e.ExternsAndErrors#1/7 HalfReuse: (/10 HalfReuse: # Error/13 } Tile{ AsIs: t.Pos#1/16 } 'e'/18 Tile{ HalfReuse: 'x'/15 }"pected name after comma"/19 )/21 Tile{ AsIs: )/14 AsIs: e.Tokens#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[18], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "pected name after comma", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[13], ident_Error );
    refalrts::reinit_char( context[15], 'x' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[14] );
    refalrts::link_brackets( context[10], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # TkName t.idx e.idx ) ( # TkOpenBlock t.idx ) e.idx
    // </0 & NameList-DoNames/4 (/9 e.ExternsAndErrors#1/7 )/10 (/13 # TkName/15 t.NamePos#1/21 e.Name#1/11 )/14 (/18 # TkOpenBlock/20 t.BracketPos#1/23 )/19 e.Tokens#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  ident_TkName, context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  ident_TkOpenBlock, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.ExternsAndErrors#1 as range 7
    // closed e.Tokens#1 as range 5
    context[22] = refalrts::tvar_left( context[21], context[11], context[12] );
    if( ! context[22] )
      continue;
    // closed e.Name#1 as range 11
    context[24] = refalrts::tvar_left( context[23], context[16], context[17] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: e.ExternsAndErrors#1: 7
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.NamePos#1: 21
    //DEBUG: e.Name#1: 11
    //DEBUG: t.BracketPos#1: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.ExternsAndErrors#1/7 } Tile{ AsIs: (/9 } Tile{ HalfReuse: # Error/4 } t.NamePos#1/21/25"mis"/27 Tile{ HalfReuse: 's'/1 }"ed semicolon after previous $EXTERN declaration"/29 )/31 Tile{ AsIs: )/10 AsIs: (/13 AsIs: # TkName/15 AsIs: t.NamePos#1/21 AsIs: e.Name#1/11 AsIs: )/14 AsIs: (/18 AsIs: # TkOpenBlock/20 AsIs: t.BracketPos#1/23 AsIs: )/19 } Tile{ AsIs: e.Tokens#1/5 } Tile{ ]] }
    if (! refalrts::copy_evar(context[25], context[26], context[21], context[22]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], "mis", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[29], context[30], "ed semicolon after previous $EXTERN declaration", 47 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Error );
    refalrts::reinit_char( context[1], 's' );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[0], context[10] );
    refalrts::link_brackets( context[9], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[19] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[25], context[28] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # TkName t.idx e.idx ) e.idx
    // </0 & NameList-DoNames/4 (/9 e.ExternsAndErrors#1/7 )/10 (/13 # TkName/15 t.Pos#1/16 e.Name#1/11 )/14 e.Tokens#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  ident_TkName, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.ExternsAndErrors#1 as range 7
    // closed e.Tokens#1 as range 5
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    // closed e.Name#1 as range 11
    //DEBUG: e.ExternsAndErrors#1: 7
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.Pos#1: 16
    //DEBUG: e.Name#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#1/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: (/9 AsIs: e.ExternsAndErrors#1/7 HalfReuse: (/10 HalfReuse: # Error/13 } Tile{ AsIs: t.Pos#1/16 } 'm'/18 Tile{ HalfReuse: 'i'/15 }"ssed comma after external name"/19 )/21 Tile{ AsIs: )/14 AsIs: e.Tokens#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[18], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[19], context[20], "ssed comma after external name", 30 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[13], ident_Error );
    refalrts::reinit_char( context[15], 'i' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[14] );
    refalrts::link_brackets( context[10], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[19], context[21] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( context[13], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx e.idx
    // </0 & NameList-DoNames/4 (/9 e.ExternsAndErrors#1/7 )/10 t.NextToken#1/11 e.Tokens#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    // closed e.ExternsAndErrors#1 as range 7
    context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
    // closed e.Tokens#1 as range 5
    //DEBUG: e.ExternsAndErrors#1: 7
    //DEBUG: t.NextToken#1: 11
    //DEBUG: e.Tokens#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$6?1?0/4 AsIs: (/9 AsIs: e.ExternsAndErrors#1/7 AsIs: )/10 AsIs: t.NextToken#1/11 } (/13 Tile{ AsIs: e.Tokens#1/5 } )/14 t.NextToken#1/11/15 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[11], context[12]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S6C1C0.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[16] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & NameList-DoNames/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$6?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S6C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameListm_DoNames("NameList-DoNames", 893557537U, 3673923261U, func_NameListm_DoNames);


static refalrts::FnResult func_gen_NameListm_DoNames_S6C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & NameList-DoNames$6?1?0/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( e.idx ) t.idx ( e.idx ) ( s.idx t.idx e.idx )
    // </0 & NameList-DoNames$6?1?0/4 (/9 e.ExternsAndErrors#1/7 )/10 t.NextToken#1/20 (/17 e.Tokens#1/15 )/18 (/13 s.Type#2/19 t.Pos#2/22 e.Value#2/11 )/14 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_right( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[5], context[6] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.ExternsAndErrors#1 as range 7
    // closed e.Tokens#1 as range 15
    if( ! refalrts::svar_left( context[19], context[11], context[12] ) )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[5], context[6] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[11], context[12] );
    if( ! context[23] )
      continue;
    // closed e.Value#2 as range 11
    //DEBUG: e.ExternsAndErrors#1: 7
    //DEBUG: e.Tokens#1: 15
    //DEBUG: s.Type#2: 19
    //DEBUG: t.NextToken#1: 20
    //DEBUG: t.Pos#2: 22
    //DEBUG: e.Value#2: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$6?2?0/4 AsIs: (/9 AsIs: e.ExternsAndErrors#1/7 AsIs: )/10 AsIs: t.NextToken#1/20 AsIs: (/17 AsIs: e.Tokens#1/15 AsIs: )/18 HalfReuse: s.Type2 #19/13 } Tile{ AsIs: t.Pos#2/22 } (/24 Tile{ AsIs: e.Value#2/11 } )/25 </26 & OneOf/27 Tile{ AsIs: s.Type#2/19 } # TkExtern/28 # TkEntry/29 # TkEOF/30 Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], ident_TkExtern ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], ident_TkEntry ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[30], ident_TkEOF ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S6C2C0.ref.function );
    refalrts::reinit_svar( context[13], context[19] );
    refalrts::reinit_close_call( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[28], context[30] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & NameList-DoNames$6?1?0/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$6?2?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S6C2C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S6C1C0("NameList-DoNames$6?1?0", 893557537U, 3673923261U, func_gen_NameListm_DoNames_S6C1C0);


static refalrts::FnResult func_gen_NameListm_DoNames_S6C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & NameList-DoNames$6?1?1/4 (/7 e.ExternsAndErrors#1/5 )/8 t.NextToken#1/9 e.Tokens#1/2 >/1
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
  // closed e.ExternsAndErrors#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: e.ExternsAndErrors#1: 5
  //DEBUG: t.NextToken#1: 9
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames/4 AsIs: (/7 AsIs: e.ExternsAndErrors#1/5 HalfReuse: </8 } & UnexpectedToken/11 Tile{ AsIs: t.NextToken#1/9 }"comma or semicolon"/12 >/14 )/15 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[11], ref_UnexpectedToken.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[12], context[13], "comma or semicolon", 18 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_NameListm_DoNames.ref.function );
  refalrts::reinit_open_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S6C1C1("NameList-DoNames$6?1?1", 893557537U, 3673923261U, func_gen_NameListm_DoNames_S6C1C1);


static refalrts::FnResult func_gen_NameListm_DoNames_S6C2C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  //FAST GEN: ( e.$ ) t.$ ( e.$ ) s.$ t.$ ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) t.$ ( e.$ ) s.$ t.$ ( e.$ ) e.$
  // </0 & NameList-DoNames$6?2?0/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 s.idxTVT#0/15 t.idxTVTV#0/16 (/20 e.idxTVTVVB#0/18 )/21 e.idxTVTVVT#0/2 >/1
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.idxTVB#0 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.idxTVTVVB#0 as range 18
  // closed e.idxTVTVVT#0 as range 2
  do {
    // ( e.idx ) t.idx ( e.idx ) s.idx t.idx ( e.idx ) # True
    // </0 & NameList-DoNames$6?2?0/4 (/7 e.ExternsAndErrors#1/22 )/8 t.NextToken#1/9 (/13 e.Tokens#1/24 )/14 s.Type#2/15 t.Pos#2/16 (/20 e.Value#2/26 )/21 # True/30 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[24] = context[11];
    context[25] = context[12];
    context[26] = context[18];
    context[27] = context[19];
    context[28] = context[2];
    context[29] = context[3];
    context[30] = refalrts::ident_left(  ident_True, context[28], context[29] );
    if( ! context[30] )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    // closed e.ExternsAndErrors#1 as range 22
    // closed e.Tokens#1 as range 24
    // closed e.Value#2 as range 26
    //DEBUG: t.NextToken#1: 9
    //DEBUG: t.Pos#2: 16
    //DEBUG: s.Type#2: 15
    //DEBUG: e.ExternsAndErrors#1: 22
    //DEBUG: e.Tokens#1: 24
    //DEBUG: e.Value#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/15 {REMOVED TILE} e.Value#2/26 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ExternsAndErrors#1/22 HalfReuse: (/8 } Tile{ HalfReuse: # Error/13 } Tile{ AsIs: t.Pos#2/16 HalfReuse: 'm'/20 } Tile{ HalfReuse: 'i'/14 }"ss"/31 Tile{ HalfReuse: 'e'/0 HalfReuse: 'd'/4 } Tile{ HalfReuse: ' '/1 }"semicolon"/33 Tile{ AsIs: )/21 HalfReuse: )/30 } Tile{ AsIs: t.NextToken#1/9 } Tile{ AsIs: e.Tokens#1/24 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[31], context[32], "ss", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[33], context[34], "semicolon", 9 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[13], ident_Error );
    refalrts::reinit_char( context[20], 'm' );
    refalrts::reinit_char( context[14], 'i' );
    refalrts::reinit_char( context[0], 'e' );
    refalrts::reinit_char( context[4], 'd' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::reinit_close_bracket( context[30] );
    refalrts::link_brackets( context[7], context[30] );
    refalrts::link_brackets( context[8], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[21], context[30] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx ( e.idx ) s.idx t.idx ( e.idx ) e.idx
  // </0 & NameList-DoNames$6?2?0/4 (/7 e.ExternsAndErrors#1/22 )/8 t.NextToken#1/9 (/13 e.Tokens#1/24 )/14 s.Type#2/15 t.Pos#2/16 (/20 e.Value#2/26 )/21 e.Other#0/28 >/1
  context[22] = context[5];
  context[23] = context[6];
  context[24] = context[11];
  context[25] = context[12];
  context[26] = context[18];
  context[27] = context[19];
  context[28] = context[2];
  context[29] = context[3];
  // closed e.ExternsAndErrors#1 as range 22
  // closed e.Tokens#1 as range 24
  // closed e.Value#2 as range 26
  // closed e.Other#0 as range 28
  //DEBUG: t.NextToken#1: 9
  //DEBUG: t.Pos#2: 16
  //DEBUG: s.Type#2: 15
  //DEBUG: e.ExternsAndErrors#1: 22
  //DEBUG: e.Tokens#1: 24
  //DEBUG: e.Value#2: 26
  //DEBUG: e.Other#0: 28

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Other#0/28 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$6?2?1/4 AsIs: (/7 AsIs: e.ExternsAndErrors#1/22 AsIs: )/8 AsIs: t.NextToken#1/9 AsIs: (/13 AsIs: e.Tokens#1/24 AsIs: )/14 } Tile{ AsIs: (/20 } Tile{ AsIs: s.Type#2/15 AsIs: t.Pos#2/16 } Tile{ AsIs: e.Value#2/26 } Tile{ AsIs: )/21 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S6C2C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::splice_to_freelist_open( context[14], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S6C2C0("NameList-DoNames$6?2?0", 893557537U, 3673923261U, func_gen_NameListm_DoNames_S6C2C0);


static refalrts::FnResult func_gen_NameListm_DoNames_S6C2C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & NameList-DoNames$6?2?1/4 (/7 e.ExternsAndErrors#1/5 )/8 t.NextToken#1/9 (/13 e.Tokens#1/11 )/14 e.Other#0/2 >/1
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
  // closed e.ExternsAndErrors#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Tokens#1 as range 11
  // closed e.Other#0 as range 2
  //DEBUG: e.ExternsAndErrors#1: 5
  //DEBUG: t.NextToken#1: 9
  //DEBUG: e.Tokens#1: 11
  //DEBUG: e.Other#0: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/13 {REMOVED TILE} )/14 e.Other#0/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$6?1?1/4 AsIs: (/7 AsIs: e.ExternsAndErrors#1/5 AsIs: )/8 AsIs: t.NextToken#1/9 } Tile{ AsIs: e.Tokens#1/11 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S6C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( context[10], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S6C2C1("NameList-DoNames$6?2?1", 893557537U, 3673923261U, func_gen_NameListm_DoNames_S6C2C1);


static refalrts::FnResult func_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  //FAST GEN: ( e.$ ) e.$
  //GLOBAL GEN: ( s.$ t.$ e.$ ) e.$
  // </0 & Function/4 (/7 s.idxB#0/9 t.idxBV#0/10 e.idxBVV#0/5 )/8 e.idxT#0/2 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBVV#0 as range 5
  do {
    // ( # TkEntry t.idx ) ( # TkName t.idx e.idx ) e.idx
    // </0 & Function/4 (/7 # TkEntry/9 t.EntryPos#1/10 )/8 (/18 # TkName/20 t.NamePos#1/21 e.Name#1/16 )/19 e.Tokens#1/14 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::ident_term(  ident_TkEntry, context[9] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  ident_TkName, context[16], context[17] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    // closed e.Tokens#1 as range 14
    context[22] = refalrts::tvar_left( context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    // closed e.Name#1 as range 16
    //DEBUG: t.EntryPos#1: 10
    //DEBUG: e.Tokens#1: 14
    //DEBUG: t.NamePos#1: 21
    //DEBUG: e.Name#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NamePos#1/21 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function-AfterBlock/4 } Tile{ AsIs: t.EntryPos#1/10 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/16 } Tile{ AsIs: )/8 HalfReuse: # GN-Entry/18 HalfReuse: </20 } Tile{ HalfReuse: & Block/19 AsIs: e.Tokens#1/14 AsIs: >/1 } Tile{ HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], ref_Functionm_AfterBlock.ref.function );
    refalrts::reinit_ident( context[18], ident_GNm_Entry );
    refalrts::reinit_open_call( context[20] );
    refalrts::reinit_name( context[19], ref_Block.ref.function );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[19], context[1] );
    res = refalrts::splice_evar( res, context[8], context[20] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # TkName t.idx e.idx ) e.idx
    // </0 & Function/4 (/7 # TkName/9 t.Pos#1/10 e.Name#1/12 )/8 e.Tokens#1/14 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::ident_term(  ident_TkName, context[9] ) )
      continue;
    // closed e.Name#1 as range 12
    // closed e.Tokens#1 as range 14
    //DEBUG: t.Pos#1: 10
    //DEBUG: e.Name#1: 12
    //DEBUG: e.Tokens#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function-AfterBlock/4 } Tile{ AsIs: t.Pos#1/10 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/12 } )/16 Tile{ Reuse: # GN-Local/9 } </17 Tile{ HalfReuse: & Block/8 AsIs: e.Tokens#1/14 AsIs: >/1 } >/18 Tile{ ]] }
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Functionm_AfterBlock.ref.function );
    refalrts::update_ident( context[9], ident_GNm_Local );
    refalrts::reinit_name( context[8], ref_Block.ref.function );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # TkEntry t.idx ) e.idx
  // </0 & Function/4 (/7 # TkEntry/9 t.Pos#1/10 )/8 e.Tokens#1/14 >/1
  context[12] = context[5];
  context[13] = context[6];
  context[14] = context[2];
  context[15] = context[3];
  if( ! refalrts::ident_term(  ident_TkEntry, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 14
  //DEBUG: t.Pos#1: 10
  //DEBUG: e.Tokens#1: 14

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 Reuse: # Error/9 AsIs: t.Pos#1/10 HalfReuse: '$'/8 } Tile{ HalfReuse: 'E'/0 } 'N'/16 Tile{ HalfReuse: 'T'/1 }"RY without function name, skipped"/17 )/19 )/20 Tile{ AsIs: e.Tokens#1/14 } Tile{ ]] }
  if( ! refalrts::alloc_char( context[16], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], "RY without function name, skipped", 33 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::update_ident( context[9], ident_Error );
  refalrts::reinit_char( context[8], '$' );
  refalrts::reinit_char( context[0], 'E' );
  refalrts::reinit_char( context[1], 'T' );
  refalrts::link_brackets( context[4], context[20] );
  refalrts::link_brackets( context[7], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Function("Function", 893557537U, 3673923261U, func_Function);


static refalrts::FnResult func_Functionm_AfterBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Function-AfterBlock/4 t.Pos#1/5 (/9 e.Name#1/7 )/10 s.Scope#1/11 (/14 e.Errors#1/12 )/15 (/18 e.Sentences#1/16 )/19 e.Tokens#1/2 >/1
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
  // closed e.Name#1 as range 7
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
  // closed e.Errors#1 as range 12
  // closed e.Sentences#1 as range 16
  // closed e.Tokens#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Name#1: 7
  //DEBUG: s.Scope#1: 11
  //DEBUG: e.Errors#1: 12
  //DEBUG: e.Sentences#1: 16
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/9 } Tile{ AsIs: e.Errors#1/12 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: t.Pos#1/5 } Tile{ AsIs: s.Scope#1/11 AsIs: (/14 } Tile{ AsIs: e.Name#1/7 } Tile{ AsIs: )/15 HalfReuse: # Sentences/18 AsIs: e.Sentences#1/16 AsIs: )/19 } Tile{ AsIs: )/10 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Function );
  refalrts::reinit_ident( context[18], ident_Sentences );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[0], context[19] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Functionm_AfterBlock("Function-AfterBlock", 893557537U, 3673923261U, func_Functionm_AfterBlock);


static refalrts::FnResult func_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: t.$ e.$
  //GLOBAL GEN: t.$ e.$
  // </0 & Block/4 t.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // ( # TkOpenBlock t.idx ) e.idx
    // </0 & Block/4 (/5 # TkOpenBlock/11 t.Pos#1/12 )/6 e.Tokens#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_TkOpenBlock, context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.Tokens#1 as range 7
    context[13] = refalrts::tvar_left( context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: e.Tokens#1: 7
    //DEBUG: t.Pos#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.Pos#1/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence/4 AsIs: (/5 HalfReuse: )/11 } (/14 )/15 </16 Tile{ HalfReuse: & Sentence/6 AsIs: e.Tokens#1/7 AsIs: >/1 } >/17 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Blockm_AfterSentence.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_name( context[6], ref_Sentence.ref.function );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[5], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[6], context[1] );
    res = refalrts::splice_evar( res, context[14], context[16] );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx e.idx
  // </0 & Block/4 t.Unexpected#1/5 e.Tokens#1/7 >/1
  context[7] = context[2];
  context[8] = context[3];
  // closed e.Tokens#1 as range 7
  //DEBUG: t.Unexpected#1: 5
  //DEBUG: e.Tokens#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/9 Tile{ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 }"\'{\'"/10 Tile{ AsIs: >/1 } )/12 (/13 )/14 t.Unexpected#1/5/15 Tile{ AsIs: e.Tokens#1/7 } Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[10], context[11], "\'{\'", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[15], context[16], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Block("Block", 893557537U, 3673923261U, func_Block);


static refalrts::FnResult func_gen_Blockm_AfterSentence_S1B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 49 elems
  refalrts::Iter context[49];
  refalrts::zeros( context, 49 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ t.$ t.$ t.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ t.$ t.$ t.$
  // </0 & Block-AfterSentence$1:1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 t.idxTTT#0/17 (/21 e.idxTTTVB#0/19 )/22 t.idxTTTVT#0/23 t.idxTTTVTV#0/25 t.idxTTTVTVV#0/27 t.idxTTTVTVVV#0/29 >/1
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
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.idxTTTVB#0 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  context[28] = refalrts::tvar_left( context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  context[30] = refalrts::tvar_left( context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx t.idx ( # TkSemicolon t.idx ) ( # TkCloseBlock t.idx )
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Errors#1/31 )/8 (/11 e.SentenceErrors#1/33 )/12 (/15 e.Sentences#1/35 )/16 t.NextSentence#1/17 (/21 e.Tokens#1/37 )/22 t.Token2#1/23 t.Token1#1/25 (/27 # TkSemicolon/43 t.Pos1#2/45 )/28 (/29 # TkCloseBlock/44 t.Pos2#2/47 )/30 >/1
    context[31] = context[5];
    context[32] = context[6];
    context[33] = context[9];
    context[34] = context[10];
    context[35] = context[13];
    context[36] = context[14];
    context[37] = context[19];
    context[38] = context[20];
    context[39] = 0;
    context[40] = 0;
    if( ! refalrts::brackets_term( context[39], context[40], context[27] ) )
      continue;
    context[41] = 0;
    context[42] = 0;
    if( ! refalrts::brackets_term( context[41], context[42], context[29] ) )
      continue;
    context[43] = refalrts::ident_left(  ident_TkSemicolon, context[39], context[40] );
    if( ! context[43] )
      continue;
    context[44] = refalrts::ident_left(  ident_TkCloseBlock, context[41], context[42] );
    if( ! context[44] )
      continue;
    // closed e.Errors#1 as range 31
    // closed e.SentenceErrors#1 as range 33
    // closed e.Sentences#1 as range 35
    // closed e.Tokens#1 as range 37
    context[46] = refalrts::tvar_left( context[45], context[39], context[40] );
    if( ! context[46] )
      continue;
    if( ! refalrts::empty_seq( context[39], context[40] ) )
      continue;
    context[48] = refalrts::tvar_left( context[47], context[41], context[42] );
    if( ! context[48] )
      continue;
    if( ! refalrts::empty_seq( context[41], context[42] ) )
      continue;
    //DEBUG: t.NextSentence#1: 17
    //DEBUG: t.Token2#1: 23
    //DEBUG: t.Token1#1: 25
    //DEBUG: e.Errors#1: 31
    //DEBUG: e.SentenceErrors#1: 33
    //DEBUG: e.Sentences#1: 35
    //DEBUG: e.Tokens#1: 37
    //DEBUG: t.Pos1#2: 45
    //DEBUG: t.Pos2#2: 47

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} )/22 t.Token2#1/23 t.Token1#1/25 (/27 # TkSemicolon/43 {REMOVED TILE} )/28 (/29 # TkCloseBlock/44 t.Pos2#2/47 )/30 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckEmptyBlock/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/31 } Tile{ AsIs: e.SentenceErrors#1/33 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Sentences#1/35 } Tile{ AsIs: t.NextSentence#1/17 HalfReuse: )/21 } Tile{ AsIs: t.Pos1#2/45 } Tile{ AsIs: e.Tokens#1/37 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_CheckEmptyBlock.ref.function );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[21] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx t.idx ( # TkCloseBlock t.idx ) t.idx
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Errors#1/31 )/8 (/11 e.SentenceErrors#1/33 )/12 (/15 e.Sentences#1/35 )/16 t.NextSentence#1/17 (/21 e.Tokens#1/37 )/22 t.Token2#1/23 t.Token1#1/25 (/27 # TkCloseBlock/41 t.Pos#2/42 )/28 t.Token2#1/29 >/1
    context[31] = context[5];
    context[32] = context[6];
    context[33] = context[9];
    context[34] = context[10];
    context[35] = context[13];
    context[36] = context[14];
    context[37] = context[19];
    context[38] = context[20];
    context[39] = 0;
    context[40] = 0;
    if( ! refalrts::brackets_term( context[39], context[40], context[27] ) )
      continue;
    if( ! refalrts::repeated_stvar_term( context[29], context[23] ) )
      continue;
    context[41] = refalrts::ident_left(  ident_TkCloseBlock, context[39], context[40] );
    if( ! context[41] )
      continue;
    // closed e.Errors#1 as range 31
    // closed e.SentenceErrors#1 as range 33
    // closed e.Sentences#1 as range 35
    // closed e.Tokens#1 as range 37
    context[43] = refalrts::tvar_left( context[42], context[39], context[40] );
    if( ! context[43] )
      continue;
    if( ! refalrts::empty_seq( context[39], context[40] ) )
      continue;
    //DEBUG: t.NextSentence#1: 17
    //DEBUG: t.Token2#1: 23
    //DEBUG: t.Token1#1: 25
    //DEBUG: e.Errors#1: 31
    //DEBUG: e.SentenceErrors#1: 33
    //DEBUG: e.Sentences#1: 35
    //DEBUG: e.Tokens#1: 37
    //DEBUG: t.Pos#2: 42

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} (/21 {REMOVED TILE} )/22 {REMOVED TILE} t.Token1#1/25 (/27 {REMOVED TILE} )/28 t.Token2#1/29 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckEmptyBlock/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/31 } Tile{ AsIs: e.SentenceErrors#1/33 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Sentences#1/35 } Tile{ AsIs: t.NextSentence#1/17 } Tile{ HalfReuse: )/41 AsIs: t.Pos#2/42 } Tile{ AsIs: t.Token2#1/23 } Tile{ AsIs: e.Tokens#1/37 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_CheckEmptyBlock.ref.function );
    refalrts::reinit_close_bracket( context[41] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[41] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[41], context[43] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx t.idx ( # TkSemicolon t.idx ) t.idx
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Errors#1/31 )/8 (/11 e.SentenceErrors#1/33 )/12 (/15 e.Sentences#1/35 )/16 t.NextSentence#1/17 (/21 e.Tokens#1/37 )/22 t.Token2#1/23 t.Token1#1/25 (/27 # TkSemicolon/41 t.Pos#2/42 )/28 t.Token2#1/29 >/1
    context[31] = context[5];
    context[32] = context[6];
    context[33] = context[9];
    context[34] = context[10];
    context[35] = context[13];
    context[36] = context[14];
    context[37] = context[19];
    context[38] = context[20];
    context[39] = 0;
    context[40] = 0;
    if( ! refalrts::brackets_term( context[39], context[40], context[27] ) )
      continue;
    if( ! refalrts::repeated_stvar_term( context[29], context[23] ) )
      continue;
    context[41] = refalrts::ident_left(  ident_TkSemicolon, context[39], context[40] );
    if( ! context[41] )
      continue;
    // closed e.Errors#1 as range 31
    // closed e.SentenceErrors#1 as range 33
    // closed e.Sentences#1 as range 35
    // closed e.Tokens#1 as range 37
    context[43] = refalrts::tvar_left( context[42], context[39], context[40] );
    if( ! context[43] )
      continue;
    if( ! refalrts::empty_seq( context[39], context[40] ) )
      continue;
    //DEBUG: t.NextSentence#1: 17
    //DEBUG: t.Token2#1: 23
    //DEBUG: t.Token1#1: 25
    //DEBUG: e.Errors#1: 31
    //DEBUG: e.SentenceErrors#1: 33
    //DEBUG: e.Sentences#1: 35
    //DEBUG: e.Tokens#1: 37
    //DEBUG: t.Pos#2: 42

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Token1#1/25 {REMOVED TILE} {REMOVED TILE} t.Pos#2/42 )/28 t.Token2#1/29 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/31 } Tile{ AsIs: e.SentenceErrors#1/33 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Sentences#1/35 } Tile{ AsIs: t.NextSentence#1/17 HalfReuse: )/21 } Tile{ HalfReuse: </41 } Tile{ HalfReuse: & Sentence/22 AsIs: t.Token2#1/23 } Tile{ AsIs: e.Tokens#1/37 } Tile{ HalfReuse: >/27 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Blockm_AfterSentence.ref.function );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_open_call( context[41] );
    refalrts::reinit_name( context[22], ref_Sentence.ref.function );
    refalrts::reinit_close_call( context[27] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[41] );
    refalrts::link_brackets( context[15], context[21] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[41], context[41] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx t.idx t.idx t.idx
  // </0 & Block-AfterSentence$1:1/4 (/7 e.Errors#1/31 )/8 (/11 e.SentenceErrors#1/33 )/12 (/15 e.Sentences#1/35 )/16 t.NextSentence#1/17 (/21 e.Tokens#1/37 )/22 t.Token2#1/23 t.Token1#1/25 t.Token1#1/27 t.Token2#1/29 >/1
  context[31] = context[5];
  context[32] = context[6];
  context[33] = context[9];
  context[34] = context[10];
  context[35] = context[13];
  context[36] = context[14];
  context[37] = context[19];
  context[38] = context[20];
  if( ! refalrts::repeated_stvar_term( context[29], context[23] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::repeated_stvar_term( context[27], context[25] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 31
  // closed e.SentenceErrors#1 as range 33
  // closed e.Sentences#1 as range 35
  // closed e.Tokens#1 as range 37
  //DEBUG: t.NextSentence#1: 17
  //DEBUG: t.Token2#1: 23
  //DEBUG: t.Token1#1: 25
  //DEBUG: e.Errors#1: 31
  //DEBUG: e.SentenceErrors#1: 33
  //DEBUG: e.Sentences#1: 35
  //DEBUG: e.Tokens#1: 37

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Token1#1/25 {REMOVED TILE} t.Token2#1/29 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/31 } Tile{ AsIs: e.SentenceErrors#1/33 } Tile{ HalfReuse: </16 } & UnexpectedToken/39 Tile{ AsIs: t.Token1#1/27 }"\';\' "/40 Tile{ HalfReuse: 'o'/8 HalfReuse: 'r'/11 }" \'}\', skipped"/42 >/44 Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Sentences#1/35 } Tile{ AsIs: t.NextSentence#1/17 HalfReuse: )/21 } </45 Tile{ HalfReuse: & Sentence/22 AsIs: t.Token2#1/23 } Tile{ AsIs: e.Tokens#1/37 } >/46 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[39], ref_UnexpectedToken.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[40], context[41], "\';\' ", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[42], context[43], " \'}\', skipped", 13 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[44] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[46] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Blockm_AfterSentence.ref.function );
  refalrts::reinit_open_call( context[16] );
  refalrts::reinit_char( context[8], 'o' );
  refalrts::reinit_char( context[11], 'r' );
  refalrts::reinit_close_bracket( context[21] );
  refalrts::reinit_name( context[22], ref_Sentence.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[46] );
  refalrts::push_stack( context[45] );
  refalrts::link_brackets( context[15], context[21] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::push_stack( context[44] );
  refalrts::push_stack( context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[46], context[46] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[45], context[45] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[42], context[44] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Blockm_AfterSentence_S1B1("Block-AfterSentence$1:1", 893557537U, 3673923261U, func_gen_Blockm_AfterSentence_S1B1);


static refalrts::FnResult func_Blockm_AfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ t.$ e.$
  // </0 & Block-AfterSentence/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 t.idxTTT#0/17 t.idxTTTV#0/19 e.idxTTTVV#0/2 >/1
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
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTTVV#0 as range 2
  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) t.idx t.idx t.idx e.idx
    // </0 & Block-AfterSentence/4 (/7 e.Errors#1/21 )/8 (/11 e.Sentences#1/23 )/12 (/15 e.SentenceErrors#1/25 )/16 t.NextSentence#1/17 t.Token1#1/19 t.Token2#1/29 e.Tokens#1/27 >/1
    context[21] = context[5];
    context[22] = context[6];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[13];
    context[26] = context[14];
    context[27] = context[2];
    context[28] = context[3];
    // closed e.Errors#1 as range 21
    // closed e.Sentences#1 as range 23
    // closed e.SentenceErrors#1 as range 25
    context[30] = refalrts::tvar_left( context[29], context[27], context[28] );
    if( ! context[30] )
      continue;
    // closed e.Tokens#1 as range 27
    //DEBUG: t.NextSentence#1: 17
    //DEBUG: t.Token1#1: 19
    //DEBUG: e.Errors#1: 21
    //DEBUG: e.Sentences#1: 23
    //DEBUG: e.SentenceErrors#1: 25
    //DEBUG: t.Token2#1: 29
    //DEBUG: e.Tokens#1: 27

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & Block-AfterSentence$1:1/4 AsIs: (/7 AsIs: e.Errors#1/21 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.SentenceErrors#1/25 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Sentences#1/23 } Tile{ AsIs: )/16 AsIs: t.NextSentence#1/17 } (/32 Tile{ AsIs: e.Tokens#1/27 } )/33 t.Token2#1/29/34 t.Token1#1/19/36 {*}/38 Tile{ AsIs: t.Token1#1/19 AsIs: t.Token2#1/29 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[34], context[35], context[29], context[30]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[36], context[37], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[38], context[0] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_Blockm_AfterSentence_S1B1.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[31] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[30] );
    res = refalrts::splice_evar( res, context[33], context[38] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    refalrts::use( res );
    refalrts::wrap_closure( context[38] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( # TkEOF t.idx )
  // </0 & Block-AfterSentence/4 (/7 e.Errors#1/21 )/8 (/11 e.Sentences#1/23 )/12 (/15 e.SentenceErrors#1/25 )/16 t.NextSentence#1/17 (/19 # TkEOF/31 t.Pos#1/32 )/20 >/1
  context[21] = context[5];
  context[22] = context[6];
  context[23] = context[9];
  context[24] = context[10];
  context[25] = context[13];
  context[26] = context[14];
  context[27] = context[2];
  context[28] = context[3];
  context[29] = 0;
  context[30] = 0;
  if( ! refalrts::brackets_term( context[29], context[30], context[19] ) )
    return refalrts::cRecognitionImpossible;
  context[31] = refalrts::ident_left(  ident_TkEOF, context[29], context[30] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[27], context[28] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 21
  // closed e.Sentences#1 as range 23
  // closed e.SentenceErrors#1 as range 25
  context[33] = refalrts::tvar_left( context[32], context[29], context[30] );
  if( ! context[33] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[29], context[30] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.NextSentence#1: 17
  //DEBUG: e.Errors#1: 21
  //DEBUG: e.Sentences#1: 23
  //DEBUG: e.SentenceErrors#1: 25
  //DEBUG: t.Pos#1: 32

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckEmptyBlock/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/21 } Tile{ AsIs: e.SentenceErrors#1/25 } </34 Tile{ HalfReuse: & UnexpectedToken/8 AsIs: (/11 } # TkEOF/35 t.Pos#1/32/36 Tile{ AsIs: )/16 }"\';\' or \'}\'"/38 >/40 Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Sentences#1/23 } Tile{ AsIs: t.NextSentence#1/17 } )/41 t.Pos#1/32/42 Tile{ AsIs: (/19 AsIs: # TkEOF/31 AsIs: t.Pos#1/32 AsIs: )/20 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[35], ident_TkEOF ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[36], context[37], context[32], context[33]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[38], context[39], "\';\' or \'}\'", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[41] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[42], context[43], context[32], context[33]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_CheckEmptyBlock.ref.function );
  refalrts::reinit_name( context[8], ref_UnexpectedToken.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[41] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[34] );
  refalrts::link_brackets( context[11], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[19];
  res = refalrts::splice_evar( res, context[41], context[43] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[38], context[40] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Blockm_AfterSentence("Block-AfterSentence", 893557537U, 3673923261U, func_Blockm_AfterSentence);


static refalrts::FnResult func_CheckEmptyBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & CheckEmptyBlock/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 e.idxTTV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTV#0 as range 2
  do {
    // ( e.idx ) ( ) t.idx e.idx
    // </0 & CheckEmptyBlock/4 (/7 e.Errors#1/15 )/8 (/11 )/12 t.Pos#1/13 e.Tokens#1/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[2];
    context[20] = context[3];
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    // closed e.Errors#1 as range 15
    // closed e.Tokens#1 as range 19
    //DEBUG: t.Pos#1: 13
    //DEBUG: e.Errors#1: 15
    //DEBUG: e.Tokens#1: 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#1/15 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # Error/1 } Tile{ AsIs: t.Pos#1/13 } Tile{ HalfReuse: 'E'/4 }"mpty function block"/21 )/23 Tile{ AsIs: )/8 AsIs: (/11 AsIs: )/12 } Tile{ AsIs: e.Tokens#1/19 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[21], context[22], "mpty function block", 19 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[1], ident_Error );
    refalrts::reinit_char( context[4], 'E' );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & CheckEmptyBlock/4 (/7 e.Errors#1/15 )/8 (/11 e.Sentences#1/17 )/12 t.Pos#1/13 e.Tokens#1/19 >/1
  context[15] = context[5];
  context[16] = context[6];
  context[17] = context[9];
  context[18] = context[10];
  context[19] = context[2];
  context[20] = context[3];
  // closed e.Errors#1 as range 15
  // closed e.Sentences#1 as range 17
  // closed e.Tokens#1 as range 19
  //DEBUG: t.Pos#1: 13
  //DEBUG: e.Errors#1: 15
  //DEBUG: e.Sentences#1: 17
  //DEBUG: e.Tokens#1: 19

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CheckEmptyBlock/4 {REMOVED TILE} t.Pos#1/13 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#1/15 AsIs: )/8 AsIs: (/11 AsIs: e.Sentences#1/17 AsIs: )/12 } Tile{ AsIs: e.Tokens#1/19 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckEmptyBlock("CheckEmptyBlock", 893557537U, 3673923261U, func_CheckEmptyBlock);


static refalrts::FnResult func_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & Sentence/4 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Sentence-AfterPattern/6 Tile{ AsIs: </0 Reuse: & Pattern/4 AsIs: e.Tokens#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_Sentencem_AfterPattern.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Pattern.ref.function );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sentence("Sentence", 893557537U, 3673923261U, func_Sentence);


static refalrts::FnResult func_Sentencem_AfterPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: ( e.$ ) t.$ t.$ e.$
  //GLOBAL GEN: ( e.$ ) t.$ t.$ e.$
  // </0 & Sentence-AfterPattern/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 e.idxTVV#0/2 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVV#0 as range 2
  do {
    // ( e.idx ) t.idx ( # TkAssign t.idx ) e.idx
    // </0 & Sentence-AfterPattern/4 (/7 e.Errors#1/13 )/8 t.Pattern#1/9 (/11 # TkAssign/19 t.Pos#1/20 )/12 e.Tokens#1/15 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
      continue;
    context[19] = refalrts::ident_left(  ident_TkAssign, context[17], context[18] );
    if( ! context[19] )
      continue;
    // closed e.Errors#1 as range 13
    // closed e.Tokens#1 as range 15
    context[21] = refalrts::tvar_left( context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: t.Pattern#1: 9
    //DEBUG: e.Errors#1: 13
    //DEBUG: e.Tokens#1: 15
    //DEBUG: t.Pos#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.Pos#1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sentence-AfterResult/4 AsIs: (/7 AsIs: e.Errors#1/13 AsIs: )/8 AsIs: t.Pattern#1/9 HalfReuse: </11 HalfReuse: & Result/19 } Tile{ AsIs: e.Tokens#1/15 } Tile{ HalfReuse: >/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Sentencem_AfterResult.ref.function );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[19], ref_Result.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( context[19], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx ( # TkComma t.idx ) e.idx
    // </0 & Sentence-AfterPattern/4 (/7 e.Errors#1/13 )/8 t.Pattern#1/9 (/11 # TkComma/19 t.Pos#1/20 )/12 e.Tokens#1/15 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
      continue;
    context[19] = refalrts::ident_left(  ident_TkComma, context[17], context[18] );
    if( ! context[19] )
      continue;
    // closed e.Errors#1 as range 13
    // closed e.Tokens#1 as range 15
    context[21] = refalrts::tvar_left( context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: t.Pattern#1: 9
    //DEBUG: e.Errors#1: 13
    //DEBUG: e.Tokens#1: 15
    //DEBUG: t.Pos#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.Pos#1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sentence-AfterExtensionChain/4 AsIs: (/7 AsIs: e.Errors#1/13 AsIs: )/8 AsIs: t.Pattern#1/9 HalfReuse: </11 HalfReuse: & ExtensionChain/19 } Tile{ AsIs: e.Tokens#1/15 } Tile{ HalfReuse: >/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Sentencem_AfterExtensionChain.ref.function );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[19], ref_ExtensionChain.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::splice_to_freelist_open( context[19], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx ( # TkSemicolon t.idx ) e.idx
    // </0 & Sentence-AfterPattern/4 (/7 e.Errors#1/13 )/8 t.Pattern#1/9 (/11 # TkSemicolon/19 t.Pos#1/20 )/12 e.Tokens#1/15 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
      continue;
    context[19] = refalrts::ident_left(  ident_TkSemicolon, context[17], context[18] );
    if( ! context[19] )
      continue;
    // closed e.Errors#1 as range 13
    // closed e.Tokens#1 as range 15
    context[21] = refalrts::tvar_left( context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: t.Pattern#1: 9
    //DEBUG: e.Errors#1: 13
    //DEBUG: e.Tokens#1: 15
    //DEBUG: t.Pos#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sentence-AfterResult/4 AsIs: (/7 AsIs: e.Errors#1/13 HalfReuse: (/8 } # Error/22 t.Pos#1/20/23"Missed \'=\'"/25 )/27 )/28 Tile{ AsIs: t.Pattern#1/9 } </29 & Result/30 Tile{ AsIs: (/11 AsIs: # TkSemicolon/19 AsIs: t.Pos#1/20 AsIs: )/12 AsIs: e.Tokens#1/15 AsIs: >/1 } >/31 Tile{ ]] }
    if( ! refalrts::alloc_ident( context[22], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[20], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[25], context[26], "Missed \'=\'", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], ref_Result.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Sentencem_AfterResult.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[28] );
    refalrts::link_brackets( context[8], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[22], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx ( # TkColon t.idx ) e.idx
    // </0 & Sentence-AfterPattern/4 (/7 e.Errors#1/13 )/8 t.Pattern#1/9 (/11 # TkColon/19 t.Pos#1/20 )/12 e.Tokens#1/15 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
      continue;
    context[19] = refalrts::ident_left(  ident_TkColon, context[17], context[18] );
    if( ! context[19] )
      continue;
    // closed e.Errors#1 as range 13
    // closed e.Tokens#1 as range 15
    context[21] = refalrts::tvar_left( context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: t.Pattern#1: 9
    //DEBUG: e.Errors#1: 13
    //DEBUG: e.Tokens#1: 15
    //DEBUG: t.Pos#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sentence-AfterExtensionChain/4 AsIs: (/7 AsIs: e.Errors#1/13 HalfReuse: (/8 } # Error/22 t.Pos#1/20/23"Missed \',\'"/25 )/27 )/28 Tile{ AsIs: t.Pattern#1/9 } </29 & ExtensionChain/30 Tile{ AsIs: (/11 AsIs: # TkColon/19 AsIs: t.Pos#1/20 AsIs: )/12 AsIs: e.Tokens#1/15 AsIs: >/1 } >/31 Tile{ ]] }
    if( ! refalrts::alloc_ident( context[22], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[20], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[25], context[26], "Missed \',\'", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], ref_ExtensionChain.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Sentencem_AfterExtensionChain.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[28] );
    refalrts::link_brackets( context[8], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[22], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx t.idx e.idx
  // </0 & Sentence-AfterPattern/4 (/7 e.Errors#1/13 )/8 t.Pattern#1/9 t.Unexpected#1/11 e.Tokens#1/15 >/1
  context[13] = context[5];
  context[14] = context[6];
  context[15] = context[2];
  context[16] = context[3];
  // closed e.Errors#1 as range 13
  // closed e.Tokens#1 as range 15
  //DEBUG: t.Pattern#1: 9
  //DEBUG: t.Unexpected#1: 11
  //DEBUG: e.Errors#1: 13
  //DEBUG: e.Tokens#1: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#1/13 HalfReuse: </8 } Tile{ Reuse: & UnexpectedTokenInSentence/4 } Tile{ AsIs: t.Unexpected#1/11 } Tile{ AsIs: >/1 } )/17 Tile{ HalfReuse: (/0 } Tile{ AsIs: t.Pattern#1/9 } (/18 )/19 (/20 )/21 )/22 t.Unexpected#1/11/23 Tile{ AsIs: e.Tokens#1/15 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[23], context[24], context[11], context[12]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[8] );
  refalrts::update_name( context[4], ref_UnexpectedTokenInSentence.ref.function );
  refalrts::reinit_open_bracket( context[0] );
  refalrts::link_brackets( context[0], context[22] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[7], context[17] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[18], context[24] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sentencem_AfterPattern("Sentence-AfterPattern", 893557537U, 3673923261U, func_Sentencem_AfterPattern);


static refalrts::FnResult func_UnexpectedTokenInSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & UnexpectedTokenInSentence/4 t.Unexpected#1/5 >/1
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
  //DEBUG: t.Unexpected#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: 'v'/1 }"alid Refal expression, \'=\', \',\', \':\' or \';\'"/7 >/9 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[7], context[8], "alid Refal expression, \'=\', \',\', \':\' or \';\'", 43 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[1], 'v' );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnexpectedTokenInSentence("UnexpectedTokenInSentence", 893557537U, 3673923261U, func_UnexpectedTokenInSentence);


static refalrts::FnResult func_Sentencem_AfterResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Sentence-AfterResult/4 (/7 e.Errors#1/5 )/8 t.Pattern#1/9 (/13 e.ResultErrors#1/11 )/14 t.Result#1/15 e.Tokens#1/2 >/1
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
  // closed e.Errors#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.ResultErrors#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Errors#1: 5
  //DEBUG: t.Pattern#1: 9
  //DEBUG: e.ResultErrors#1: 11
  //DEBUG: t.Result#1: 15
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#1/5 } Tile{ AsIs: e.ResultErrors#1/11 } Tile{ AsIs: )/14 } Tile{ HalfReuse: (/8 AsIs: t.Pattern#1/9 } Tile{ AsIs: t.Result#1/15 } Tile{ AsIs: (/13 } Tile{ HalfReuse: )/4 HalfReuse: )/7 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::link_brackets( context[8], context[7] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::link_brackets( context[0], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sentencem_AfterResult("Sentence-AfterResult", 893557537U, 3673923261U, func_Sentencem_AfterResult);


static refalrts::FnResult func_Sentencem_AfterExtensionChain(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & Sentence-AfterExtensionChain/4 (/7 e.Errors#1/5 )/8 t.Pattern#1/9 (/13 e.ExtensionErrors#1/11 )/14 (/17 e.Conditions-And-SentenceTail#1/15 )/18 e.Tokens#1/2 >/1
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
  // closed e.Errors#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
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
  // closed e.ExtensionErrors#1 as range 11
  // closed e.Conditions-And-SentenceTail#1 as range 15
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Errors#1: 5
  //DEBUG: t.Pattern#1: 9
  //DEBUG: e.ExtensionErrors#1: 11
  //DEBUG: e.Conditions-And-SentenceTail#1: 15
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & Sentence-AfterExtensionChain/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} (/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#1/5 } Tile{ AsIs: e.ExtensionErrors#1/11 } Tile{ AsIs: )/14 AsIs: (/17 } Tile{ AsIs: t.Pattern#1/9 } Tile{ AsIs: e.Conditions-And-SentenceTail#1/15 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[0], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sentencem_AfterExtensionChain("Sentence-AfterExtensionChain", 893557537U, 3673923261U, func_Sentencem_AfterExtensionChain);


static refalrts::FnResult func_ExtensionChain(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & ExtensionChain/4 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ExtensionChain-AfterResult/6 Tile{ AsIs: </0 Reuse: & Result/4 AsIs: e.Tokens#1/2 AsIs: >/1 } >/7 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_ExtensionChainm_AfterResult.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[7] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Result.ref.function );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtensionChain("ExtensionChain", 893557537U, 3673923261U, func_ExtensionChain);


static refalrts::FnResult func_gen_ExtensionChainm_AfterResult_S2B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & ExtensionChain-AfterResult$2:1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( e.idx ) t.idx ( e.idx ) ( # TkColon t.idx )
    // </0 & ExtensionChain-AfterResult$2:1/4 (/9 e.Errors#1/7 )/10 t.Result#1/20 (/18 e.Tokens#1/16 )/19 (/13 # TkColon/15 t.Pos#2/22 )/14 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_right( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  ident_TkColon, context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Errors#1 as range 7
    // closed e.Tokens#1 as range 16
    context[21] = refalrts::tvar_left( context[20], context[5], context[6] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[11], context[12] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Errors#1: 7
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Result#1: 20
    //DEBUG: t.Pos#2: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/19 {REMOVED TILE} # TkColon/15 t.Pos#2/22 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterPattern/4 AsIs: (/9 AsIs: e.Errors#1/7 AsIs: )/10 AsIs: t.Result#1/20 HalfReuse: </18 } Tile{ HalfReuse: & Pattern/13 } Tile{ AsIs: e.Tokens#1/16 } Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterPattern.ref.function );
    refalrts::reinit_open_call( context[18] );
    refalrts::reinit_name( context[13], ref_Pattern.ref.function );
    refalrts::reinit_close_call( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    refalrts::splice_to_freelist_open( context[18], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx ( e.idx ) ( # TkOpenBlock t.idx )
    // </0 & ExtensionChain-AfterResult$2:1/4 (/9 e.Errors#1/7 )/10 t.Result#1/20 (/18 e.Tokens#1/16 )/19 (/13 # TkOpenBlock/15 t.Pos#2/22 )/14 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_right( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  ident_TkOpenBlock, context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Errors#1 as range 7
    // closed e.Tokens#1 as range 16
    context[21] = refalrts::tvar_left( context[20], context[5], context[6] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[11], context[12] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Errors#1: 7
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Result#1: 20
    //DEBUG: t.Pos#2: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterBlock/4 AsIs: (/9 AsIs: e.Errors#1/7 HalfReuse: (/10 } # Error/24 t.Pos#2/22/25"Missed \':\' before block"/27 )/29 )/30 Tile{ AsIs: t.Result#1/20 HalfReuse: </18 } Tile{ HalfReuse: & Block/19 AsIs: (/13 AsIs: # TkOpenBlock/15 AsIs: t.Pos#2/22 AsIs: )/14 } Tile{ AsIs: e.Tokens#1/16 } >/31 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[24], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], "Missed \':\' before block", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterBlock.ref.function );
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_open_call( context[18] );
    refalrts::reinit_name( context[19], ref_Block.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[30] );
    refalrts::link_brackets( context[10], context[29] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[19], context[14] );
    res = refalrts::splice_evar( res, context[20], context[18] );
    res = refalrts::splice_evar( res, context[24], context[30] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx ( e.idx ) ( # TkSemicolon t.idx )
    // </0 & ExtensionChain-AfterResult$2:1/4 (/9 e.Errors#1/7 )/10 t.Result#1/20 (/18 e.Tokens#1/16 )/19 (/13 # TkSemicolon/15 t.Pos#2/22 )/14 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_right( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = refalrts::ident_left(  ident_TkSemicolon, context[11], context[12] );
    if( ! context[15] )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Errors#1 as range 7
    // closed e.Tokens#1 as range 16
    context[21] = refalrts::tvar_left( context[20], context[5], context[6] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[11], context[12] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Errors#1: 7
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Result#1: 20
    //DEBUG: t.Pos#2: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: e.Errors#1/7 HalfReuse: (/10 } # Error/24 t.Pos#2/22/25"Mis"/27 Tile{ HalfReuse: 't'/0 HalfReuse: 'a'/4 } Tile{ HalfReuse: 'k'/1 }"en \',\' for \'=\'"/29 )/31 )/32 (/33 Tile{ AsIs: t.Result#1/20 HalfReuse: )/18 } (/34 Tile{ AsIs: )/19 AsIs: (/13 AsIs: # TkSemicolon/15 AsIs: t.Pos#2/22 AsIs: )/14 } Tile{ AsIs: e.Tokens#1/16 } Tile{ ]] }
    if( ! refalrts::alloc_ident( context[24], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], "Mis", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[29], context[30], "en \',\' for \'=\'", 14 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_char( context[0], 't' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[1], 'k' );
    refalrts::reinit_close_bracket( context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[34], context[19] );
    refalrts::link_brackets( context[33], context[18] );
    refalrts::link_brackets( context[9], context[32] );
    refalrts::link_brackets( context[10], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[19], context[14] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[20], context[18] );
    res = refalrts::splice_evar( res, context[29], context[33] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[24], context[28] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx ( e.idx ) ( s.idx t.idx )
    // </0 & ExtensionChain-AfterResult$2:1/4 (/9 e.Errors#1/7 )/10 t.Result#1/20 (/17 e.Tokens#1/15 )/18 (/13 s.Type#2/19 t.Pos#2/22 )/14 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_right( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_right( context[15], context[16], context[5], context[6] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Errors#1 as range 7
    // closed e.Tokens#1 as range 15
    if( ! refalrts::svar_left( context[19], context[11], context[12] ) )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[5], context[6] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[11], context[12] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Errors#1: 7
    //DEBUG: e.Tokens#1: 15
    //DEBUG: s.Type#2: 19
    //DEBUG: t.Result#1: 20
    //DEBUG: t.Pos#2: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterResult$2:1$4?1?0/4 AsIs: (/9 AsIs: e.Errors#1/7 AsIs: )/10 AsIs: t.Result#1/20 AsIs: (/17 AsIs: e.Tokens#1/15 AsIs: )/18 HalfReuse: s.Type2 #19/13 } Tile{ AsIs: t.Pos#2/22 } </24 & OneOf/25 Tile{ AsIs: s.Type#2/19 } # TkComma/26 # TkAssign/27 Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[26], ident_TkComma ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], ident_TkAssign ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_ExtensionChainm_AfterResult_S2B1S4C1C0.ref.function );
    refalrts::reinit_svar( context[13], context[19] );
    refalrts::reinit_close_call( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & ExtensionChain-AfterResult$2:1/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterResult$2:1$4?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_ExtensionChainm_AfterResult_S2B1S4C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtensionChainm_AfterResult_S2B1("ExtensionChain-AfterResult$2:1", 893557537U, 3673923261U, func_gen_ExtensionChainm_AfterResult_S2B1);


static refalrts::FnResult func_gen_ExtensionChainm_AfterResult_S2B1S4C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  //FAST GEN: ( e.$ ) t.$ ( e.$ ) s.$ t.$ e.$
  //GLOBAL GEN: ( e.$ ) t.$ ( e.$ ) s.$ t.$ e.$
  // </0 & ExtensionChain-AfterResult$2:1$4?1?0/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 s.idxTVT#0/15 t.idxTVTV#0/16 e.idxTVTVV#0/2 >/1
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.idxTVB#0 as range 11
  if( ! refalrts::svar_left( context[15], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVTVV#0 as range 2
  do {
    // ( e.idx ) t.idx ( e.idx ) s.idx t.idx # True
    // </0 & ExtensionChain-AfterResult$2:1$4?1?0/4 (/7 e.Errors#1/18 )/8 t.Result#1/9 (/13 e.Tokens#1/20 )/14 s.Type#2/15 t.Pos#2/16 # True/24 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[11];
    context[21] = context[12];
    context[22] = context[2];
    context[23] = context[3];
    context[24] = refalrts::ident_left(  ident_True, context[22], context[23] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.Errors#1 as range 18
    // closed e.Tokens#1 as range 20
    //DEBUG: t.Result#1: 9
    //DEBUG: t.Pos#2: 16
    //DEBUG: s.Type#2: 15
    //DEBUG: e.Errors#1: 18
    //DEBUG: e.Tokens#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/15 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterPattern/4 AsIs: (/7 AsIs: e.Errors#1/18 HalfReuse: (/8 } # Error/25 t.Pos#2/16/26"Missed \':\'"/28 )/30 Tile{ AsIs: )/14 } Tile{ AsIs: t.Result#1/9 HalfReuse: </13 } & Pattern/31 (/32 # TkComma/33 Tile{ AsIs: t.Pos#2/16 } )/34 Tile{ AsIs: e.Tokens#1/20 } Tile{ HalfReuse: >/24 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[25], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[16], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[28], context[29], "Missed \':\'", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], ref_Pattern.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], ident_TkComma ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterPattern.ref.function );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_open_call( context[13] );
    refalrts::reinit_close_call( context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[32], context[34] );
    refalrts::link_brackets( context[7], context[14] );
    refalrts::link_brackets( context[8], context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[25], context[30] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx ( e.idx ) s.idx t.idx e.idx
  // </0 & ExtensionChain-AfterResult$2:1$4?1?0/4 (/7 e.Errors#1/18 )/8 t.Result#1/9 (/13 e.Tokens#1/20 )/14 s.Type#2/15 t.Pos#2/16 e.Other#0/22 >/1
  context[18] = context[5];
  context[19] = context[6];
  context[20] = context[11];
  context[21] = context[12];
  context[22] = context[2];
  context[23] = context[3];
  // closed e.Errors#1 as range 18
  // closed e.Tokens#1 as range 20
  // closed e.Other#0 as range 22
  //DEBUG: t.Result#1: 9
  //DEBUG: t.Pos#2: 16
  //DEBUG: s.Type#2: 15
  //DEBUG: e.Errors#1: 18
  //DEBUG: e.Tokens#1: 20
  //DEBUG: e.Other#0: 22

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Other#0/22 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterResult$2:1$4?1?1/4 AsIs: (/7 AsIs: e.Errors#1/18 AsIs: )/8 AsIs: t.Result#1/9 AsIs: (/13 AsIs: e.Tokens#1/20 AsIs: )/14 } (/24 Tile{ AsIs: s.Type#2/15 AsIs: t.Pos#2/16 } )/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_ExtensionChainm_AfterResult_S2B1S4C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::splice_to_freelist_open( context[14], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtensionChainm_AfterResult_S2B1S4C1C0("ExtensionChain-AfterResult$2:1$4?1?0", 893557537U, 3673923261U, func_gen_ExtensionChainm_AfterResult_S2B1S4C1C0);


static refalrts::FnResult func_gen_ExtensionChainm_AfterResult_S2B1S4C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtensionChain-AfterResult$2:1$4?1?1/4 (/7 e.Errors#1/5 )/8 t.Result#1/9 (/13 e.Tokens#1/11 )/14 t.Unexpected#2/15 >/1
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
  // closed e.Errors#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Tokens#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Errors#1: 5
  //DEBUG: t.Result#1: 9
  //DEBUG: e.Tokens#1: 11
  //DEBUG: t.Unexpected#2: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Errors#1/5 HalfReuse: </8 } Tile{ HalfReuse: & UnexpectedTokenInSentence/14 AsIs: t.Unexpected#2/15 AsIs: >/1 } Tile{ HalfReuse: )/0 HalfReuse: (/4 } Tile{ AsIs: t.Result#1/9 AsIs: (/13 } )/17 )/18 t.Unexpected#2/15/19 Tile{ AsIs: e.Tokens#1/11 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[19], context[20], context[15], context[16]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[14], ref_UnexpectedTokenInSentence.ref.function );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::link_brackets( context[4], context[18] );
  refalrts::link_brackets( context[13], context[17] );
  refalrts::link_brackets( context[7], context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[14], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtensionChainm_AfterResult_S2B1S4C1C1("ExtensionChain-AfterResult$2:1$4?1?1", 893557537U, 3673923261U, func_gen_ExtensionChainm_AfterResult_S2B1S4C1C1);


static refalrts::FnResult func_ExtensionChainm_AfterResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: ( e.$ ) t.$ t.$ e.$
  //GLOBAL GEN: ( e.$ ) t.$ t.$ e.$
  // </0 & ExtensionChain-AfterResult/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 e.idxTVV#0/2 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVV#0 as range 2
  do {
    // ( e.idx ) t.idx ( # TkColon t.idx ) ( # TkOpenBlock t.idx ) e.idx
    // </0 & ExtensionChain-AfterResult/4 (/7 e.Errors#1/13 )/8 t.Result#1/9 (/11 # TkColon/19 t.ColonPos#1/25 )/12 (/22 # TkOpenBlock/24 t.BlockPos#1/27 )/23 e.Tokens#1/15 >/1
    context[13] = context[5];
    context[14] = context[6];
    context[15] = context[2];
    context[16] = context[3];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
      continue;
    context[19] = refalrts::ident_left(  ident_TkColon, context[17], context[18] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[15], context[16] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  ident_TkOpenBlock, context[20], context[21] );
    if( ! context[24] )
      continue;
    // closed e.Errors#1 as range 13
    // closed e.Tokens#1 as range 15
    context[26] = refalrts::tvar_left( context[25], context[17], context[18] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    context[28] = refalrts::tvar_left( context[27], context[20], context[21] );
    if( ! context[28] )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    //DEBUG: t.Result#1: 9
    //DEBUG: e.Errors#1: 13
    //DEBUG: e.Tokens#1: 15
    //DEBUG: t.ColonPos#1: 25
    //DEBUG: t.BlockPos#1: 27

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.ColonPos#1/25 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterBlock/4 AsIs: (/7 AsIs: e.Errors#1/13 AsIs: )/8 AsIs: t.Result#1/9 HalfReuse: </11 HalfReuse: & Block/19 } Tile{ AsIs: (/22 AsIs: # TkOpenBlock/24 AsIs: t.BlockPos#1/27 AsIs: )/23 AsIs: e.Tokens#1/15 AsIs: >/1 } Tile{ HalfReuse: >/12 } Tile{ ]] }
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterBlock.ref.function );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[19], ref_Block.ref.function );
    refalrts::reinit_close_call( context[12] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[22], context[1] );
    refalrts::splice_to_freelist_open( context[19], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx t.idx e.idx
  // </0 & ExtensionChain-AfterResult/4 (/7 e.Errors#1/13 )/8 t.Result#1/9 t.NextToken#1/11 e.Tokens#1/15 >/1
  context[13] = context[5];
  context[14] = context[6];
  context[15] = context[2];
  context[16] = context[3];
  // closed e.Errors#1 as range 13
  // closed e.Tokens#1 as range 15
  //DEBUG: t.Result#1: 9
  //DEBUG: t.NextToken#1: 11
  //DEBUG: e.Errors#1: 13
  //DEBUG: e.Tokens#1: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & ExtensionChain-AfterResult$2:1/4 AsIs: (/7 AsIs: e.Errors#1/13 AsIs: )/8 AsIs: t.Result#1/9 } (/18 Tile{ AsIs: e.Tokens#1/15 } )/19 {*}/20 Tile{ AsIs: t.NextToken#1/11 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[20], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_ExtensionChainm_AfterResult_S2B1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtensionChainm_AfterResult("ExtensionChain-AfterResult", 893557537U, 3673923261U, func_ExtensionChainm_AfterResult);


static refalrts::FnResult func_ExtensionChainm_AfterBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & ExtensionChain-AfterBlock/4 (/7 e.Errors#1/5 )/8 t.Result#1/9 (/13 e.BlockErrors#1/11 )/14 (/17 e.Sentences#1/15 )/18 e.Tokens#1/2 >/1
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
  // closed e.Errors#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
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
  // closed e.BlockErrors#1 as range 11
  // closed e.Sentences#1 as range 15
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Errors#1: 5
  //DEBUG: t.Result#1: 9
  //DEBUG: e.BlockErrors#1: 11
  //DEBUG: e.Sentences#1: 15
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#1/5 } Tile{ AsIs: e.BlockErrors#1/11 } Tile{ HalfReuse: )/1 } Tile{ HalfReuse: (/8 AsIs: t.Result#1/9 AsIs: (/13 } Tile{ HalfReuse: (/14 HalfReuse: # Sentences/17 AsIs: e.Sentences#1/15 AsIs: )/18 } Tile{ HalfReuse: )/4 HalfReuse: )/7 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_open_bracket( context[14] );
  refalrts::reinit_ident( context[17], ident_Sentences );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::link_brackets( context[8], context[7] );
  refalrts::link_brackets( context[13], context[4] );
  refalrts::link_brackets( context[14], context[18] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[4], context[7] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtensionChainm_AfterBlock("ExtensionChain-AfterBlock", 893557537U, 3673923261U, func_ExtensionChainm_AfterBlock);


static refalrts::FnResult func_gen_ExtensionChainm_AfterPattern_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ t.$ ( e.$ ) t.$ t.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ t.$ ( e.$ ) t.$ t.$
  // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 t.idxTTV#0/15 (/19 e.idxTTVVB#0/17 )/20 t.idxTTVVT#0/21 t.idxTTVVTV#0/23 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.idxTTVVB#0 as range 17
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( e.idx ) t.idx t.idx ( e.idx ) t.idx ( # TkComma t.idx )
    // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.Errors#1/25 )/8 (/11 e.PatternErrors#1/27 )/12 t.Result#1/13 t.Pattern#1/15 (/19 e.Tokens#1/29 )/20 t.NextToken#1/21 (/23 # TkComma/33 t.Pos#2/34 )/24 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[17];
    context[30] = context[18];
    context[31] = 0;
    context[32] = 0;
    if( ! refalrts::brackets_term( context[31], context[32], context[23] ) )
      continue;
    context[33] = refalrts::ident_left(  ident_TkComma, context[31], context[32] );
    if( ! context[33] )
      continue;
    // closed e.Errors#1 as range 25
    // closed e.PatternErrors#1 as range 27
    // closed e.Tokens#1 as range 29
    context[35] = refalrts::tvar_left( context[34], context[31], context[32] );
    if( ! context[35] )
      continue;
    if( ! refalrts::empty_seq( context[31], context[32] ) )
      continue;
    //DEBUG: t.Result#1: 13
    //DEBUG: t.Pattern#1: 15
    //DEBUG: t.NextToken#1: 21
    //DEBUG: e.Errors#1: 25
    //DEBUG: e.PatternErrors#1: 27
    //DEBUG: e.Tokens#1: 29
    //DEBUG: t.Pos#2: 34

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/20 t.NextToken#1/21 (/23 {REMOVED TILE} t.Pos#2/34 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterExtensionChain/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/25 } Tile{ AsIs: e.PatternErrors#1/27 } Tile{ AsIs: )/12 AsIs: t.Result#1/13 AsIs: t.Pattern#1/15 HalfReuse: </19 } Tile{ HalfReuse: & ExtensionChain/33 } Tile{ AsIs: e.Tokens#1/29 } Tile{ HalfReuse: >/24 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterExtensionChain.ref.function );
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[33], ref_ExtensionChain.ref.function );
    refalrts::reinit_close_call( context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) t.idx t.idx ( e.idx ) t.idx ( # TkAssign t.idx )
    // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.Errors#1/25 )/8 (/11 e.PatternErrors#1/27 )/12 t.Result#1/13 t.Pattern#1/15 (/19 e.Tokens#1/29 )/20 t.NextToken#1/21 (/23 # TkAssign/33 t.Pos#2/34 )/24 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[17];
    context[30] = context[18];
    context[31] = 0;
    context[32] = 0;
    if( ! refalrts::brackets_term( context[31], context[32], context[23] ) )
      continue;
    context[33] = refalrts::ident_left(  ident_TkAssign, context[31], context[32] );
    if( ! context[33] )
      continue;
    // closed e.Errors#1 as range 25
    // closed e.PatternErrors#1 as range 27
    // closed e.Tokens#1 as range 29
    context[35] = refalrts::tvar_left( context[34], context[31], context[32] );
    if( ! context[35] )
      continue;
    if( ! refalrts::empty_seq( context[31], context[32] ) )
      continue;
    //DEBUG: t.Result#1: 13
    //DEBUG: t.Pattern#1: 15
    //DEBUG: t.NextToken#1: 21
    //DEBUG: e.Errors#1: 25
    //DEBUG: e.PatternErrors#1: 27
    //DEBUG: e.Tokens#1: 29
    //DEBUG: t.Pos#2: 34

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/20 t.NextToken#1/21 (/23 {REMOVED TILE} t.Pos#2/34 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterPattern-AfterResult/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/25 } Tile{ AsIs: e.PatternErrors#1/27 } Tile{ AsIs: )/12 AsIs: t.Result#1/13 AsIs: t.Pattern#1/15 HalfReuse: </19 } Tile{ HalfReuse: & Result/33 } Tile{ AsIs: e.Tokens#1/29 } Tile{ HalfReuse: >/24 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterPatternm_AfterResult.ref.function );
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[33], ref_Result.ref.function );
    refalrts::reinit_close_call( context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) t.idx t.idx ( e.idx ) t.idx ( # TkColon t.idx )
    // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.Errors#1/25 )/8 (/11 e.PatternErrors#1/27 )/12 t.Result#1/13 t.Pattern#1/15 (/19 e.Tokens#1/29 )/20 t.NextToken#1/21 (/23 # TkColon/33 t.Pos#2/34 )/24 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[17];
    context[30] = context[18];
    context[31] = 0;
    context[32] = 0;
    if( ! refalrts::brackets_term( context[31], context[32], context[23] ) )
      continue;
    context[33] = refalrts::ident_left(  ident_TkColon, context[31], context[32] );
    if( ! context[33] )
      continue;
    // closed e.Errors#1 as range 25
    // closed e.PatternErrors#1 as range 27
    // closed e.Tokens#1 as range 29
    context[35] = refalrts::tvar_left( context[34], context[31], context[32] );
    if( ! context[35] )
      continue;
    if( ! refalrts::empty_seq( context[31], context[32] ) )
      continue;
    //DEBUG: t.Result#1: 13
    //DEBUG: t.Pattern#1: 15
    //DEBUG: t.NextToken#1: 21
    //DEBUG: e.Errors#1: 25
    //DEBUG: e.PatternErrors#1: 27
    //DEBUG: e.Tokens#1: 29
    //DEBUG: t.Pos#2: 34

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterExtensionChain/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/25 } Tile{ AsIs: e.PatternErrors#1/27 } Tile{ AsIs: (/23 Reuse: # Error/33 AsIs: t.Pos#2/34 HalfReuse: 'M'/24 HalfReuse: 'i'/1 } 's'/36 Tile{ HalfReuse: 's'/11 }"ed \',\'"/37 Tile{ AsIs: )/8 } Tile{ AsIs: )/12 AsIs: t.Result#1/13 AsIs: t.Pattern#1/15 HalfReuse: </19 } Tile{ HalfReuse: & ExtensionChain/20 AsIs: t.NextToken#1/21 } Tile{ AsIs: e.Tokens#1/29 } >/39 >/40 Tile{ ]] }
    if( ! refalrts::alloc_char( context[36], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[37], context[38], "ed \',\'", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterExtensionChain.ref.function );
    refalrts::update_ident( context[33], ident_Error );
    refalrts::reinit_char( context[24], 'M' );
    refalrts::reinit_char( context[1], 'i' );
    refalrts::reinit_char( context[11], 's' );
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[20], ref_ExtensionChain.ref.function );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[23], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[23], context[1] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) t.idx t.idx ( e.idx ) t.idx ( # TkSemicolon t.idx )
    // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.Errors#1/25 )/8 (/11 e.PatternErrors#1/27 )/12 t.Result#1/13 t.Pattern#1/15 (/19 e.Tokens#1/29 )/20 t.NextToken#1/21 (/23 # TkSemicolon/33 t.Pos#2/34 )/24 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[9];
    context[28] = context[10];
    context[29] = context[17];
    context[30] = context[18];
    context[31] = 0;
    context[32] = 0;
    if( ! refalrts::brackets_term( context[31], context[32], context[23] ) )
      continue;
    context[33] = refalrts::ident_left(  ident_TkSemicolon, context[31], context[32] );
    if( ! context[33] )
      continue;
    // closed e.Errors#1 as range 25
    // closed e.PatternErrors#1 as range 27
    // closed e.Tokens#1 as range 29
    context[35] = refalrts::tvar_left( context[34], context[31], context[32] );
    if( ! context[35] )
      continue;
    if( ! refalrts::empty_seq( context[31], context[32] ) )
      continue;
    //DEBUG: t.Result#1: 13
    //DEBUG: t.Pattern#1: 15
    //DEBUG: t.NextToken#1: 21
    //DEBUG: e.Errors#1: 25
    //DEBUG: e.PatternErrors#1: 27
    //DEBUG: e.Tokens#1: 29
    //DEBUG: t.Pos#2: 34

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterPattern-AfterResult/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/25 } Tile{ AsIs: e.PatternErrors#1/27 } Tile{ AsIs: (/23 Reuse: # Error/33 AsIs: t.Pos#2/34 HalfReuse: 'M'/24 HalfReuse: 'i'/1 } 's'/36 Tile{ HalfReuse: 's'/11 }"ed \'=\'"/37 Tile{ AsIs: )/8 } Tile{ AsIs: )/12 AsIs: t.Result#1/13 AsIs: t.Pattern#1/15 HalfReuse: </19 } Tile{ HalfReuse: & Result/20 AsIs: t.NextToken#1/21 } Tile{ AsIs: e.Tokens#1/29 } >/39 >/40 Tile{ ]] }
    if( ! refalrts::alloc_char( context[36], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[37], context[38], "ed \'=\'", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterPatternm_AfterResult.ref.function );
    refalrts::update_ident( context[33], ident_Error );
    refalrts::reinit_char( context[24], 'M' );
    refalrts::reinit_char( context[1], 'i' );
    refalrts::reinit_char( context[11], 's' );
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[20], ref_Result.ref.function );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[23], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[23], context[1] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) t.idx t.idx ( e.idx ) t.idx t.idx
  // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.Errors#1/25 )/8 (/11 e.PatternErrors#1/27 )/12 t.Result#1/13 t.Pattern#1/15 (/19 e.Tokens#1/29 )/20 t.NextToken#1/21 t.Unexpected#2/23 >/1
  context[25] = context[5];
  context[26] = context[6];
  context[27] = context[9];
  context[28] = context[10];
  context[29] = context[17];
  context[30] = context[18];
  // closed e.Errors#1 as range 25
  // closed e.PatternErrors#1 as range 27
  // closed e.Tokens#1 as range 29
  //DEBUG: t.Result#1: 13
  //DEBUG: t.Pattern#1: 15
  //DEBUG: t.NextToken#1: 21
  //DEBUG: t.Unexpected#2: 23
  //DEBUG: e.Errors#1: 25
  //DEBUG: e.PatternErrors#1: 27
  //DEBUG: e.Tokens#1: 29

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NextToken#1/21 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#1/25 } Tile{ AsIs: e.PatternErrors#1/27 } Tile{ AsIs: </0 Reuse: & UnexpectedTokenInSentence/4 } Tile{ AsIs: t.Unexpected#2/23 AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 } (/31 Tile{ HalfReuse: # Condition/12 AsIs: t.Result#1/13 } (/32 Tile{ AsIs: )/20 } Tile{ AsIs: t.Pattern#1/15 HalfReuse: )/19 } (/33 )/34 (/35 )/36 )/37 t.Unexpected#2/23/38 Tile{ AsIs: e.Tokens#1/29 } Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[38], context[39], context[23], context[24]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedTokenInSentence.ref.function );
  refalrts::reinit_ident( context[12], ident_Condition );
  refalrts::reinit_close_bracket( context[19] );
  refalrts::link_brackets( context[11], context[37] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[33], context[34] );
  refalrts::link_brackets( context[31], context[19] );
  refalrts::link_brackets( context[32], context[20] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[33], context[39] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[23], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtensionChainm_AfterPattern_B1("ExtensionChain-AfterPattern:1", 893557537U, 3673923261U, func_gen_ExtensionChainm_AfterPattern_B1);


static refalrts::FnResult func_ExtensionChainm_AfterPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & ExtensionChain-AfterPattern/4 (/7 e.Errors#1/5 )/8 t.Result#1/9 (/13 e.PatternErrors#1/11 )/14 t.Pattern#1/15 t.NextToken#1/17 e.Tokens#1/2 >/1
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
  // closed e.Errors#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.PatternErrors#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Errors#1: 5
  //DEBUG: t.Result#1: 9
  //DEBUG: e.PatternErrors#1: 11
  //DEBUG: t.Pattern#1: 15
  //DEBUG: t.NextToken#1: 17
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </19 Tile{ HalfReuse: [*]/0 Reuse: & ExtensionChain-AfterPattern:1/4 AsIs: (/7 AsIs: e.Errors#1/5 AsIs: )/8 } Tile{ AsIs: (/13 AsIs: e.PatternErrors#1/11 AsIs: )/14 } Tile{ AsIs: t.Result#1/9 } Tile{ AsIs: t.Pattern#1/15 } (/20 Tile{ AsIs: e.Tokens#1/2 } )/21 Tile{ AsIs: t.NextToken#1/17 } {*}/22 t.NextToken#1/17/23 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[22], context[0] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[23], context[24], context[17], context[18]))
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_ExtensionChainm_AfterPattern_B1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[19] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::use( res );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtensionChainm_AfterPattern("ExtensionChain-AfterPattern", 893557537U, 3673923261U, func_ExtensionChainm_AfterPattern);


static refalrts::FnResult func_ExtensionChainm_AfterExtensionChain(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtensionChain-AfterExtensionChain/4 (/7 e.Errors#1/5 )/8 t.Result#1/9 t.Pattern#1/11 (/15 e.ChainErrors#1/13 )/16 (/19 e.Conditions-And-SentenceTail#1/17 )/20 e.Tokens#1/2 >/1
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
  // closed e.Errors#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
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
  // closed e.ChainErrors#1 as range 13
  // closed e.Conditions-And-SentenceTail#1 as range 17
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Errors#1: 5
  //DEBUG: t.Result#1: 9
  //DEBUG: t.Pattern#1: 11
  //DEBUG: e.ChainErrors#1: 13
  //DEBUG: e.Conditions-And-SentenceTail#1: 17
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: e.Errors#1/5 } Tile{ AsIs: e.ChainErrors#1/13 } Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: (/7 } Tile{ HalfReuse: # Condition/8 AsIs: t.Result#1/9 } Tile{ HalfReuse: (/1 } Tile{ AsIs: )/16 } Tile{ AsIs: t.Pattern#1/11 } Tile{ HalfReuse: )/19 AsIs: e.Conditions-And-SentenceTail#1/17 AsIs: )/20 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[8], ident_Condition );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_close_bracket( context[19] );
  refalrts::link_brackets( context[4], context[20] );
  refalrts::link_brackets( context[7], context[19] );
  refalrts::link_brackets( context[1], context[16] );
  refalrts::link_brackets( context[15], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtensionChainm_AfterExtensionChain("ExtensionChain-AfterExtensionChain", 893557537U, 3673923261U, func_ExtensionChainm_AfterExtensionChain);


static refalrts::FnResult func_ExtensionChainm_AfterPatternm_AfterResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & ExtensionChain-AfterPattern-AfterResult/4 (/7 e.Errors#1/5 )/8 t.Result#1/9 t.Pattern#1/11 (/15 e.ResultErrors#1/13 )/16 t.FinalResult#1/17 e.Tokens#1/2 >/1
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
  // closed e.Errors#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.ResultErrors#1 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Errors#1: 5
  //DEBUG: t.Result#1: 9
  //DEBUG: t.Pattern#1: 11
  //DEBUG: e.ResultErrors#1: 13
  //DEBUG: t.FinalResult#1: 17
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/15 } Tile{ AsIs: e.Errors#1/5 } Tile{ AsIs: e.ResultErrors#1/13 } Tile{ HalfReuse: )/0 HalfReuse: (/4 AsIs: (/7 } Tile{ HalfReuse: # Condition/8 AsIs: t.Result#1/9 } (/19 )/20 Tile{ AsIs: t.Pattern#1/11 } Tile{ AsIs: )/16 AsIs: t.FinalResult#1/17 } (/21 Tile{ HalfReuse: )/1 } )/22 Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[8], ident_Condition );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[22] );
  refalrts::link_brackets( context[21], context[1] );
  refalrts::link_brackets( context[7], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtensionChainm_AfterPatternm_AfterResult("ExtensionChain-AfterPattern-AfterResult", 893557537U, 3673923261U, func_ExtensionChainm_AfterPatternm_AfterResult);


static refalrts::FnResult func_Pattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pattern/4 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Expression/0 HalfReuse: # Pattern/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Expression.ref.function );
  refalrts::reinit_ident( context[4], ident_Pattern );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Pattern("Pattern", 893557537U, 3673923261U, func_Pattern);


static refalrts::FnResult func_Result(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Result/4 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Expression/0 HalfReuse: # Result/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Expression.ref.function );
  refalrts::reinit_ident( context[4], ident_Result );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Result("Result", 893557537U, 3673923261U, func_Result);


static refalrts::FnResult func_Expression(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Expression/4 s.Kind#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Kind#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & Expression-CheckBrackets/7 s.Kind#1/5/8 Tile{ AsIs: </0 Reuse: & Expression-Aux/4 AsIs: s.Kind#1/5 AsIs: e.Tokens#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_Expressionm_CheckBrackets.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[8], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Expressionm_Aux.ref.function );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expression("Expression", 893557537U, 3673923261U, func_Expression);


static refalrts::FnResult func_Expressionm_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Expression-Aux/4 s.Kind#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Kind#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Kind#1/5 } (/6 )/7 (/8 )/9 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoExpression.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expressionm_Aux("Expression-Aux", 893557537U, 3673923261U, func_Expressionm_Aux);


static refalrts::FnResult func_gen_DoExpression_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: s.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$
  // </0 & DoExpression:1/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 (/16 e.idxVTTB#0/14 )/17 t.idxVTTT#0/18 >/1
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
  // closed e.idxVB#0 as range 6
  // closed e.idxVTB#0 as range 10
  // closed e.idxVTTB#0 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkName t.idx e.idx )
    // </0 & DoExpression:1/4 s.Kind#1/5 (/8 e.Errors#1/20 )/9 (/12 e.Collected#1/22 )/13 (/16 e.Tokens#1/24 )/17 (/18 # TkName/28 t.Pos#2/29 e.Name#2/26 )/19 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = 0;
    context[27] = 0;
    if( ! refalrts::brackets_term( context[26], context[27], context[18] ) )
      continue;
    context[28] = refalrts::ident_left(  ident_TkName, context[26], context[27] );
    if( ! context[28] )
      continue;
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 22
    // closed e.Tokens#1 as range 24
    context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    // closed e.Name#2 as range 26
    //DEBUG: s.Kind#1: 5
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 22
    //DEBUG: e.Tokens#1: 24
    //DEBUG: t.Pos#2: 29
    //DEBUG: e.Name#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkName/28 t.Pos#2/29 {REMOVED TILE} )/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/20 AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/22 HalfReuse: (/13 HalfReuse: # TkIdentifier/16 } Tile{ AsIs: e.Name#2/26 } Tile{ AsIs: )/17 HalfReuse: )/18 } Tile{ AsIs: e.Tokens#1/24 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[16], ident_TkIdentifier );
    refalrts::reinit_close_bracket( context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[18] );
    refalrts::link_brackets( context[13], context[17] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( context[16], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkCompound t.idx e.idx )
    // </0 & DoExpression:1/4 s.Kind#1/5 (/8 e.Errors#1/20 )/9 (/12 e.Collected#1/22 )/13 (/16 e.Tokens#1/24 )/17 (/18 # TkCompound/28 t.Pos#2/29 e.Symbols#2/26 )/19 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = 0;
    context[27] = 0;
    if( ! refalrts::brackets_term( context[26], context[27], context[18] ) )
      continue;
    context[28] = refalrts::ident_left(  ident_TkCompound, context[26], context[27] );
    if( ! context[28] )
      continue;
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 22
    // closed e.Tokens#1 as range 24
    context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    // closed e.Symbols#2 as range 26
    //DEBUG: s.Kind#1: 5
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 22
    //DEBUG: e.Tokens#1: 24
    //DEBUG: t.Pos#2: 29
    //DEBUG: e.Symbols#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkCompound/28 t.Pos#2/29 {REMOVED TILE} )/19 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/20 AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/22 HalfReuse: (/13 HalfReuse: # TkIdentifier/16 } Tile{ AsIs: e.Symbols#2/26 } Tile{ AsIs: )/17 HalfReuse: )/18 } Tile{ AsIs: e.Tokens#1/24 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[16], ident_TkIdentifier );
    refalrts::reinit_close_bracket( context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[18] );
    refalrts::link_brackets( context[13], context[17] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( context[16], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkMacroDigit t.idx s.idx )
    // </0 & DoExpression:1/4 s.Kind#1/5 (/8 e.Errors#1/20 )/9 (/12 e.Collected#1/22 )/13 (/16 e.Tokens#1/24 )/17 (/18 # TkMacroDigit/28 t.Pos#2/29 s.Number#2/31 )/19 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = 0;
    context[27] = 0;
    if( ! refalrts::brackets_term( context[26], context[27], context[18] ) )
      continue;
    context[28] = refalrts::ident_left(  ident_TkMacroDigit, context[26], context[27] );
    if( ! context[28] )
      continue;
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 22
    // closed e.Tokens#1 as range 24
    context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    if( ! refalrts::svar_left( context[31], context[26], context[27] ) )
      continue;
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    //DEBUG: s.Kind#1: 5
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 22
    //DEBUG: e.Tokens#1: 24
    //DEBUG: t.Pos#2: 29
    //DEBUG: s.Number#2: 31

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/17 {REMOVED TILE} # TkMacroDigit/28 t.Pos#2/29 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/20 AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/22 HalfReuse: (/13 HalfReuse: # TkNumber/16 } Tile{ AsIs: s.Number#2/31 AsIs: )/19 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/24 } Tile{ HalfReuse: >/18 } Tile{ ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[16], ident_TkNumber );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[18] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[13], context[19] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[31], context[1] );
    refalrts::splice_to_freelist_open( context[16], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkChar t.idx s.idx )
    // </0 & DoExpression:1/4 s.Kind#1/5 (/8 e.Errors#1/20 )/9 (/12 e.Collected#1/22 )/13 (/16 e.Tokens#1/24 )/17 (/18 # TkChar/28 t.Pos#2/29 s.Char#2/31 )/19 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = 0;
    context[27] = 0;
    if( ! refalrts::brackets_term( context[26], context[27], context[18] ) )
      continue;
    context[28] = refalrts::ident_left(  ident_TkChar, context[26], context[27] );
    if( ! context[28] )
      continue;
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 22
    // closed e.Tokens#1 as range 24
    context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    if( ! refalrts::svar_left( context[31], context[26], context[27] ) )
      continue;
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    //DEBUG: s.Kind#1: 5
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 22
    //DEBUG: e.Tokens#1: 24
    //DEBUG: t.Pos#2: 29
    //DEBUG: s.Char#2: 31

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/17 {REMOVED TILE} # TkChar/28 t.Pos#2/29 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/20 AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/22 HalfReuse: (/13 HalfReuse: # TkChar/16 } Tile{ AsIs: s.Char#2/31 AsIs: )/19 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/24 } Tile{ HalfReuse: >/18 } Tile{ ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[16], ident_TkChar );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[18] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[13], context[19] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[31], context[1] );
    refalrts::splice_to_freelist_open( context[16], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkVariable t.idx s.idx e.idx )
    // </0 & DoExpression:1/4 s.Kind#1/5 (/8 e.Errors#1/20 )/9 (/12 e.Collected#1/22 )/13 (/16 e.Tokens#1/24 )/17 (/18 # TkVariable/28 t.Pos#2/29 s.VarType#2/31 e.Index#2/26 )/19 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = 0;
    context[27] = 0;
    if( ! refalrts::brackets_term( context[26], context[27], context[18] ) )
      continue;
    context[28] = refalrts::ident_left(  ident_TkVariable, context[26], context[27] );
    if( ! context[28] )
      continue;
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 22
    // closed e.Tokens#1 as range 24
    context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    if( ! refalrts::svar_left( context[31], context[26], context[27] ) )
      continue;
    // closed e.Index#2 as range 26
    //DEBUG: s.Kind#1: 5
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 22
    //DEBUG: e.Tokens#1: 24
    //DEBUG: t.Pos#2: 29
    //DEBUG: s.VarType#2: 31
    //DEBUG: e.Index#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/17 {REMOVED TILE} # TkVariable/28 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/20 AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/22 HalfReuse: (/13 HalfReuse: # TkVariable/16 } Tile{ AsIs: t.Pos#2/29 AsIs: s.VarType#2/31 AsIs: e.Index#2/26 AsIs: )/19 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/24 } Tile{ HalfReuse: >/18 } Tile{ ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[16], ident_TkVariable );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[18] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[13], context[19] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[29], context[1] );
    refalrts::splice_to_freelist_open( context[16], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkOpenBracket t.idx )
    // </0 & DoExpression:1/4 s.Kind#1/5 (/8 e.Errors#1/20 )/9 (/12 e.Collected#1/22 )/13 (/16 e.Tokens#1/24 )/17 (/18 # TkOpenBracket/28 t.Pos#2/29 )/19 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = 0;
    context[27] = 0;
    if( ! refalrts::brackets_term( context[26], context[27], context[18] ) )
      continue;
    context[28] = refalrts::ident_left(  ident_TkOpenBracket, context[26], context[27] );
    if( ! context[28] )
      continue;
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 22
    // closed e.Tokens#1 as range 24
    context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    //DEBUG: s.Kind#1: 5
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 22
    //DEBUG: e.Tokens#1: 24
    //DEBUG: t.Pos#2: 29

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkOpenBracket/28 t.Pos#2/29 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression-AfterBracket/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/20 AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/22 AsIs: )/13 HalfReuse: </16 } Tile{ HalfReuse: & Expression-Aux/17 HalfReuse: s.Kind1 #5/18 } Tile{ AsIs: e.Tokens#1/24 } Tile{ HalfReuse: >/19 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpressionm_AfterBracket.ref.function );
    refalrts::reinit_open_call( context[16] );
    refalrts::reinit_name( context[17], ref_Expressionm_Aux.ref.function );
    refalrts::reinit_svar( context[18], context[5] );
    refalrts::reinit_close_call( context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( context[16], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkOpenCall t.idx e.idx )
    // </0 & DoExpression:1/4 s.Kind#1/5 (/8 e.Errors#1/20 )/9 (/12 e.Collected#1/22 )/13 (/16 e.Tokens#1/24 )/17 (/18 # TkOpenCall/28 t.Pos#2/29 e.FuncName#2/26 )/19 >/1
    context[20] = context[6];
    context[21] = context[7];
    context[22] = context[10];
    context[23] = context[11];
    context[24] = context[14];
    context[25] = context[15];
    context[26] = 0;
    context[27] = 0;
    if( ! refalrts::brackets_term( context[26], context[27], context[18] ) )
      continue;
    context[28] = refalrts::ident_left(  ident_TkOpenCall, context[26], context[27] );
    if( ! context[28] )
      continue;
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 22
    // closed e.Tokens#1 as range 24
    context[30] = refalrts::tvar_left( context[29], context[26], context[27] );
    if( ! context[30] )
      continue;
    // closed e.FuncName#2 as range 26
    //DEBUG: s.Kind#1: 5
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 22
    //DEBUG: e.Tokens#1: 24
    //DEBUG: t.Pos#2: 29
    //DEBUG: e.FuncName#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression-AfterCall/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/20 AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/22 AsIs: )/13 } Tile{ AsIs: t.Pos#2/29 } Tile{ AsIs: (/16 } Tile{ AsIs: e.FuncName#2/26 } Tile{ AsIs: )/17 HalfReuse: </18 HalfReuse: & Expression-Aux/28 } s.Kind#1/5/31 Tile{ AsIs: e.Tokens#1/24 } Tile{ HalfReuse: >/19 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[31], context[5]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpressionm_AfterCall.ref.function );
    refalrts::reinit_open_call( context[18] );
    refalrts::reinit_name( context[28], ref_Expressionm_Aux.ref.function );
    refalrts::reinit_close_call( context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[17], context[28] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx ) ( e.idx ) t.idx
  // </0 & DoExpression:1/4 s.Kind#1/5 (/8 e.Errors#1/20 )/9 (/12 e.Collected#1/22 )/13 (/16 e.Tokens#1/24 )/17 t.OtherToken#2/18 >/1
  context[20] = context[6];
  context[21] = context[7];
  context[22] = context[10];
  context[23] = context[11];
  context[24] = context[14];
  context[25] = context[15];
  // closed e.Errors#1 as range 20
  // closed e.Collected#1 as range 22
  // closed e.Tokens#1 as range 24
  //DEBUG: t.OtherToken#2: 18
  //DEBUG: s.Kind#1: 5
  //DEBUG: e.Errors#1: 20
  //DEBUG: e.Collected#1: 22
  //DEBUG: e.Tokens#1: 24

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoExpression:1/4 s.Kind#1/5 {REMOVED TILE} (/16 {REMOVED TILE} )/17 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Errors#1/20 AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/22 AsIs: )/13 } Tile{ AsIs: t.OtherToken#2/18 } Tile{ AsIs: e.Tokens#1/24 } Tile{ ]] }
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[8], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_B1("DoExpression:1", 893557537U, 3673923261U, func_gen_DoExpression_B1);


static refalrts::FnResult func_DoExpression(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & DoExpression/4 s.Kind#1/5 (/8 e.Errors#1/6 )/9 (/12 e.Collected#1/10 )/13 t.NextToken#1/14 e.Tokens#1/2 >/1
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
  // closed e.Errors#1 as range 6
  // closed e.Collected#1 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Kind#1: 5
  //DEBUG: e.Errors#1: 6
  //DEBUG: e.Collected#1: 10
  //DEBUG: t.NextToken#1: 14
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </16 Tile{ HalfReuse: [*]/0 Reuse: & DoExpression:1/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/10 AsIs: )/13 } (/17 Tile{ AsIs: e.Tokens#1/2 } )/18 {*}/19 Tile{ AsIs: t.NextToken#1/14 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[19], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoExpression_B1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpression("DoExpression", 893557537U, 3673923261U, func_DoExpression);


static refalrts::FnResult func_DoExpressionm_AfterBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  //FAST GEN: s.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) ( s.$ t.$ e.$ ) e.$
  // </0 & DoExpression-AfterBracket/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 (/16 e.idxVTTB#0/14 )/17 (/20 e.idxVTTTB#0/18 )/21 (/24 s.idxVTTTTB#0/26 t.idxVTTTTBV#0/27 e.idxVTTTTBVV#0/22 )/25 e.idxVTTTTT#0/2 >/1
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
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.idxVB#0 as range 6
  // closed e.idxVTB#0 as range 10
  // closed e.idxVTTB#0 as range 14
  // closed e.idxVTTTB#0 as range 18
  // closed e.idxVTTTTT#0 as range 2
  if( ! refalrts::svar_left( context[26], context[22], context[23] ) )
    return refalrts::cRecognitionImpossible;
  context[28] = refalrts::tvar_left( context[27], context[22], context[23] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTTTTBVV#0 as range 22
  do {
    // s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( # TkCloseBracket t.idx ) e.idx
    // </0 & DoExpression-AfterBracket/4 s.Kind#1/5 (/8 e.Errors#1/29 )/9 (/12 e.Collected#1/31 )/13 (/16 e.SubexprErrors#1/33 )/17 (/20 e.BracketTerms#1/35 )/21 (/24 # TkCloseBracket/26 t.Pos#1/27 )/25 e.Tokens#1/39 >/1
    context[29] = context[6];
    context[30] = context[7];
    context[31] = context[10];
    context[32] = context[11];
    context[33] = context[14];
    context[34] = context[15];
    context[35] = context[18];
    context[36] = context[19];
    context[37] = context[22];
    context[38] = context[23];
    context[39] = context[2];
    context[40] = context[3];
    if( ! refalrts::ident_term(  ident_TkCloseBracket, context[26] ) )
      continue;
    if( ! refalrts::empty_seq( context[37], context[38] ) )
      continue;
    // closed e.Errors#1 as range 29
    // closed e.Collected#1 as range 31
    // closed e.SubexprErrors#1 as range 33
    // closed e.BracketTerms#1 as range 35
    // closed e.Tokens#1 as range 39
    //DEBUG: t.Pos#1: 27
    //DEBUG: s.Kind#1: 5
    //DEBUG: e.Errors#1: 29
    //DEBUG: e.Collected#1: 31
    //DEBUG: e.SubexprErrors#1: 33
    //DEBUG: e.BracketTerms#1: 35
    //DEBUG: e.Tokens#1: 39

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/17 (/20 {REMOVED TILE} {REMOVED TILE} (/24 # TkCloseBracket/26 t.Pos#1/27 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Kind#1/5 AsIs: (/8 } Tile{ AsIs: e.Errors#1/29 } Tile{ AsIs: e.SubexprErrors#1/33 } Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/31 HalfReuse: (/13 HalfReuse: # Brackets/16 } Tile{ AsIs: e.BracketTerms#1/35 } Tile{ AsIs: )/21 } Tile{ AsIs: )/25 AsIs: e.Tokens#1/39 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[16], ident_Brackets );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[25] );
    refalrts::link_brackets( context[13], context[21] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[25];
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[9], context[16] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( s.idx t.idx e.idx ) e.idx
  // </0 & DoExpression-AfterBracket/4 s.Kind#1/5 (/8 e.Errors#1/29 )/9 (/12 e.Collected#1/31 )/13 (/16 e.SubexprErrors#1/33 )/17 (/20 e.BracketTerms#1/35 )/21 (/24 s.Type#1/26 t.Pos#1/27 e.Value#1/37 )/25 e.Tokens#1/39 >/1
  context[29] = context[6];
  context[30] = context[7];
  context[31] = context[10];
  context[32] = context[11];
  context[33] = context[14];
  context[34] = context[15];
  context[35] = context[18];
  context[36] = context[19];
  context[37] = context[22];
  context[38] = context[23];
  context[39] = context[2];
  context[40] = context[3];
  // closed e.Errors#1 as range 29
  // closed e.Collected#1 as range 31
  // closed e.SubexprErrors#1 as range 33
  // closed e.BracketTerms#1 as range 35
  // closed e.Value#1 as range 37
  // closed e.Tokens#1 as range 39
  //DEBUG: t.Pos#1: 27
  //DEBUG: s.Kind#1: 5
  //DEBUG: s.Type#1: 26
  //DEBUG: e.Errors#1: 29
  //DEBUG: e.Collected#1: 31
  //DEBUG: e.SubexprErrors#1: 33
  //DEBUG: e.BracketTerms#1: 35
  //DEBUG: e.Value#1: 37
  //DEBUG: e.Tokens#1: 39

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Kind#1/5 AsIs: (/8 } Tile{ AsIs: e.Errors#1/29 } Tile{ AsIs: e.SubexprErrors#1/33 } Tile{ AsIs: (/20 } # Error/41 t.Pos#1/27/42"Missed \')\'"/44 Tile{ AsIs: )/17 } Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/31 HalfReuse: (/13 HalfReuse: # Brackets/16 } Tile{ AsIs: e.BracketTerms#1/35 } )/46 Tile{ AsIs: )/21 AsIs: (/24 AsIs: s.Type#1/26 AsIs: t.Pos#1/27 AsIs: e.Value#1/37 AsIs: )/25 AsIs: e.Tokens#1/39 AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[41], ident_Error ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[42], context[43], context[27], context[28]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[44], context[45], "Missed \')\'", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[46] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoExpression.ref.function );
  refalrts::reinit_open_bracket( context[13] );
  refalrts::reinit_ident( context[16], ident_Brackets );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[12], context[21] );
  refalrts::link_brackets( context[13], context[46] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[20], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[21];
  res = refalrts::splice_evar( res, context[46], context[46] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[9], context[16] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[41], context[45] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpressionm_AfterBracket("DoExpression-AfterBracket", 893557537U, 3673923261U, func_DoExpressionm_AfterBracket);


static refalrts::FnResult func_DoExpressionm_AfterCall(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 59 elems
  refalrts::Iter context[59];
  refalrts::zeros( context, 59 );
  //FAST GEN: s.$ ( e.$ ) ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( s.$ t.$ e.$ ) e.$
  // </0 & DoExpression-AfterCall/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 t.idxVTT#0/14 (/18 e.idxVTTVB#0/16 )/19 (/22 e.idxVTTVTB#0/20 )/23 (/26 e.idxVTTVTTB#0/24 )/27 (/30 s.idxVTTVTTTB#0/32 t.idxVTTVTTTBV#0/33 e.idxVTTVTTTBVV#0/28 )/31 e.idxVTTVTTTT#0/2 >/1
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
  // closed e.idxVB#0 as range 6
  // closed e.idxVTB#0 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
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
  context[28] = 0;
  context[29] = 0;
  context[30] = refalrts::brackets_left( context[28], context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[30], context[31]);
  // closed e.idxVTTVB#0 as range 16
  // closed e.idxVTTVTB#0 as range 20
  // closed e.idxVTTVTTB#0 as range 24
  // closed e.idxVTTVTTTT#0 as range 2
  if( ! refalrts::svar_left( context[32], context[28], context[29] ) )
    return refalrts::cRecognitionImpossible;
  context[34] = refalrts::tvar_left( context[33], context[28], context[29] );
  if( ! context[34] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTTVTTTBVV#0 as range 28
  do {
    // # Result ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkCloseCall t.idx ) e.idx
    // </0 & DoExpression-AfterCall/4 # Result/5 (/8 e.Errors#1/35 )/9 (/12 e.Collected#1/37 )/13 t.CallPos#1/14 (/18 e.FuncName#1/39 )/19 (/22 e.SubexprErrors#1/41 )/23 (/26 e.BracketTerms#1/43 )/27 (/30 # TkCloseCall/32 t.Pos#1/33 )/31 e.Tokens#1/47 >/1
    context[35] = context[6];
    context[36] = context[7];
    context[37] = context[10];
    context[38] = context[11];
    context[39] = context[16];
    context[40] = context[17];
    context[41] = context[20];
    context[42] = context[21];
    context[43] = context[24];
    context[44] = context[25];
    context[45] = context[28];
    context[46] = context[29];
    context[47] = context[2];
    context[48] = context[3];
    if( ! refalrts::ident_term(  ident_Result, context[5] ) )
      continue;
    if( ! refalrts::ident_term(  ident_TkCloseCall, context[32] ) )
      continue;
    if( ! refalrts::empty_seq( context[45], context[46] ) )
      continue;
    // closed e.Errors#1 as range 35
    // closed e.Collected#1 as range 37
    // closed e.FuncName#1 as range 39
    // closed e.SubexprErrors#1 as range 41
    // closed e.BracketTerms#1 as range 43
    // closed e.Tokens#1 as range 47
    //DEBUG: t.CallPos#1: 14
    //DEBUG: t.Pos#1: 33
    //DEBUG: e.Errors#1: 35
    //DEBUG: e.Collected#1: 37
    //DEBUG: e.FuncName#1: 39
    //DEBUG: e.SubexprErrors#1: 41
    //DEBUG: e.BracketTerms#1: 43
    //DEBUG: e.Tokens#1: 47

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/19 (/22 {REMOVED TILE} )/23 {REMOVED TILE} {REMOVED TILE} t.Pos#1/33 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: # Result/5 AsIs: (/8 } Tile{ AsIs: e.Errors#1/35 } Tile{ AsIs: e.SubexprErrors#1/41 } Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/37 HalfReuse: (/13 } Tile{ HalfReuse: # CallBrackets/18 } Tile{ AsIs: (/30 Reuse: # TkName/32 } Tile{ AsIs: t.CallPos#1/14 } Tile{ AsIs: e.FuncName#1/39 } Tile{ HalfReuse: )/26 AsIs: e.BracketTerms#1/43 AsIs: )/27 } Tile{ AsIs: )/31 AsIs: e.Tokens#1/47 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[18], ident_CallBrackets );
    refalrts::update_ident( context[32], ident_TkName );
    refalrts::reinit_close_bracket( context[26] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[31] );
    refalrts::link_brackets( context[13], context[27] );
    refalrts::link_brackets( context[30], context[26] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[31];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Pattern ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkCloseCall t.idx ) e.idx
    // </0 & DoExpression-AfterCall/4 # Pattern/5 (/8 e.Errors#1/35 )/9 (/12 e.Collected#1/37 )/13 t.CallPos#1/14 (/18 e.FuncName#1/39 )/19 (/22 e.SubexprErrors#1/41 )/23 (/26 e.BracketTerms#1/43 )/27 (/30 # TkCloseCall/32 t.Pos#1/33 )/31 e.Tokens#1/47 >/1
    context[35] = context[6];
    context[36] = context[7];
    context[37] = context[10];
    context[38] = context[11];
    context[39] = context[16];
    context[40] = context[17];
    context[41] = context[20];
    context[42] = context[21];
    context[43] = context[24];
    context[44] = context[25];
    context[45] = context[28];
    context[46] = context[29];
    context[47] = context[2];
    context[48] = context[3];
    if( ! refalrts::ident_term(  ident_Pattern, context[5] ) )
      continue;
    if( ! refalrts::ident_term(  ident_TkCloseCall, context[32] ) )
      continue;
    if( ! refalrts::empty_seq( context[45], context[46] ) )
      continue;
    // closed e.Errors#1 as range 35
    // closed e.Collected#1 as range 37
    // closed e.FuncName#1 as range 39
    // closed e.SubexprErrors#1 as range 41
    // closed e.BracketTerms#1 as range 43
    // closed e.Tokens#1 as range 47
    //DEBUG: t.CallPos#1: 14
    //DEBUG: t.Pos#1: 33
    //DEBUG: e.Errors#1: 35
    //DEBUG: e.Collected#1: 37
    //DEBUG: e.FuncName#1: 39
    //DEBUG: e.SubexprErrors#1: 41
    //DEBUG: e.BracketTerms#1: 43
    //DEBUG: e.Tokens#1: 47

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.FuncName#1/39 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#1/33 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: # Pattern/5 AsIs: (/8 } Tile{ AsIs: e.Errors#1/35 } Tile{ AsIs: e.SubexprErrors#1/41 } Tile{ AsIs: (/30 Reuse: # Error/32 } Tile{ AsIs: t.CallPos#1/14 HalfReuse: 'u'/18 }"ne"/49 Tile{ HalfReuse: 'x'/19 HalfReuse: 'p'/22 }"ected \'>\' in pattern expression, maybe missed \'=\'"/51 Tile{ AsIs: )/23 } Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/37 HalfReuse: (/13 } Tile{ HalfReuse: # Brackets/26 AsIs: e.BracketTerms#1/43 AsIs: )/27 } Tile{ AsIs: )/31 AsIs: e.Tokens#1/47 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[49], context[50], "ne", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[51], context[52], "ected \'>\' in pattern expression, maybe missed \'=\'", 49 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::update_ident( context[32], ident_Error );
    refalrts::reinit_char( context[18], 'u' );
    refalrts::reinit_char( context[19], 'x' );
    refalrts::reinit_char( context[22], 'p' );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[26], ident_Brackets );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[31] );
    refalrts::link_brackets( context[13], context[27] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[30], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[31];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[51], context[52] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    res = refalrts::splice_evar( res, context[49], context[50] );
    res = refalrts::splice_evar( res, context[14], context[18] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Result ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( s.idx t.idx e.idx ) e.idx
    // </0 & DoExpression-AfterCall/4 # Result/5 (/8 e.Errors#1/35 )/9 (/12 e.Collected#1/37 )/13 t.CallPos#1/14 (/18 e.FuncName#1/39 )/19 (/22 e.SubexprErrors#1/41 )/23 (/26 e.BracketTerms#1/43 )/27 (/30 s.Type#1/32 t.Pos#1/33 e.Value#1/45 )/31 e.Tokens#1/47 >/1
    context[35] = context[6];
    context[36] = context[7];
    context[37] = context[10];
    context[38] = context[11];
    context[39] = context[16];
    context[40] = context[17];
    context[41] = context[20];
    context[42] = context[21];
    context[43] = context[24];
    context[44] = context[25];
    context[45] = context[28];
    context[46] = context[29];
    context[47] = context[2];
    context[48] = context[3];
    if( ! refalrts::ident_term(  ident_Result, context[5] ) )
      continue;
    // closed e.Errors#1 as range 35
    // closed e.Collected#1 as range 37
    // closed e.FuncName#1 as range 39
    // closed e.SubexprErrors#1 as range 41
    // closed e.BracketTerms#1 as range 43
    // closed e.Value#1 as range 45
    // closed e.Tokens#1 as range 47
    //DEBUG: t.CallPos#1: 14
    //DEBUG: t.Pos#1: 33
    //DEBUG: s.Type#1: 32
    //DEBUG: e.Errors#1: 35
    //DEBUG: e.Collected#1: 37
    //DEBUG: e.FuncName#1: 39
    //DEBUG: e.SubexprErrors#1: 41
    //DEBUG: e.BracketTerms#1: 43
    //DEBUG: e.Value#1: 45
    //DEBUG: e.Tokens#1: 47

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: # Result/5 AsIs: (/8 } Tile{ AsIs: e.Errors#1/35 } Tile{ AsIs: e.SubexprErrors#1/41 } Tile{ AsIs: (/22 } # Error/49 t.Pos#1/33/50"Miss"/52 Tile{ HalfReuse: 'e'/18 }"d \'>\'"/54 Tile{ AsIs: )/19 } Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/37 HalfReuse: (/13 } Tile{ HalfReuse: # CallBrackets/23 AsIs: (/26 } # TkName/56 Tile{ AsIs: t.CallPos#1/14 } Tile{ AsIs: e.FuncName#1/39 } )/57 Tile{ AsIs: e.BracketTerms#1/43 } )/58 Tile{ AsIs: )/27 AsIs: (/30 AsIs: s.Type#1/32 AsIs: t.Pos#1/33 AsIs: e.Value#1/45 AsIs: )/31 AsIs: e.Tokens#1/47 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[49], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[50], context[51], context[33], context[34]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[52], context[53], "Miss", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[54], context[55], "d \'>\'", 5 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[56], ident_TkName ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[57] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[58] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_char( context[18], 'e' );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_ident( context[23], ident_CallBrackets );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::link_brackets( context[12], context[27] );
    refalrts::link_brackets( context[13], context[58] );
    refalrts::link_brackets( context[26], context[57] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[22], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[27];
    res = refalrts::splice_evar( res, context[58], context[58] );
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[57], context[57] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[56], context[56] );
    res = refalrts::splice_evar( res, context[23], context[26] );
    res = refalrts::splice_evar( res, context[9], context[13] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[54], context[55] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[49], context[53] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Pattern ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( s.idx t.idx e.idx ) e.idx
  // </0 & DoExpression-AfterCall/4 # Pattern/5 (/8 e.Errors#1/35 )/9 (/12 e.Collected#1/37 )/13 t.CallPos#1/14 (/18 e.FuncName#1/39 )/19 (/22 e.SubexprErrors#1/41 )/23 (/26 e.BracketTerms#1/43 )/27 (/30 s.Type#1/32 t.Pos#1/33 e.Value#1/45 )/31 e.Tokens#1/47 >/1
  context[35] = context[6];
  context[36] = context[7];
  context[37] = context[10];
  context[38] = context[11];
  context[39] = context[16];
  context[40] = context[17];
  context[41] = context[20];
  context[42] = context[21];
  context[43] = context[24];
  context[44] = context[25];
  context[45] = context[28];
  context[46] = context[29];
  context[47] = context[2];
  context[48] = context[3];
  if( ! refalrts::ident_term(  ident_Pattern, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 35
  // closed e.Collected#1 as range 37
  // closed e.FuncName#1 as range 39
  // closed e.SubexprErrors#1 as range 41
  // closed e.BracketTerms#1 as range 43
  // closed e.Value#1 as range 45
  // closed e.Tokens#1 as range 47
  //DEBUG: t.CallPos#1: 14
  //DEBUG: t.Pos#1: 33
  //DEBUG: s.Type#1: 32
  //DEBUG: e.Errors#1: 35
  //DEBUG: e.Collected#1: 37
  //DEBUG: e.FuncName#1: 39
  //DEBUG: e.SubexprErrors#1: 41
  //DEBUG: e.BracketTerms#1: 43
  //DEBUG: e.Value#1: 45
  //DEBUG: e.Tokens#1: 47

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.FuncName#1/39 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: # Pattern/5 AsIs: (/8 } Tile{ AsIs: e.Errors#1/35 } Tile{ AsIs: e.SubexprErrors#1/41 } Tile{ AsIs: (/22 } # Error/49 Tile{ AsIs: t.CallPos#1/14 HalfReuse: 'u'/18 }"nexpected \'>\' in pattern expression, maybe missed \'=\'"/50 Tile{ AsIs: )/23 AsIs: (/26 } # Error/52 t.Pos#1/33/53"Missed \')\'"/55 Tile{ AsIs: )/19 } Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/37 HalfReuse: (/13 } # Brackets/57 Tile{ AsIs: e.BracketTerms#1/43 } )/58 Tile{ AsIs: )/27 AsIs: (/30 AsIs: s.Type#1/32 AsIs: t.Pos#1/33 AsIs: e.Value#1/45 AsIs: )/31 AsIs: e.Tokens#1/47 AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[49], ident_Error ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[50], context[51], "nexpected \'>\' in pattern expression, maybe missed \'=\'", 53 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[52], ident_Error ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[53], context[54], context[33], context[34]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[55], context[56], "Missed \')\'", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[57], ident_Brackets ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[58] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoExpression.ref.function );
  refalrts::reinit_char( context[18], 'u' );
  refalrts::reinit_open_bracket( context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[30], context[31] );
  refalrts::link_brackets( context[12], context[27] );
  refalrts::link_brackets( context[13], context[58] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[26], context[19] );
  refalrts::link_brackets( context[22], context[23] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[27];
  res = refalrts::splice_evar( res, context[58], context[58] );
  res = refalrts::splice_evar( res, context[43], context[44] );
  res = refalrts::splice_evar( res, context[57], context[57] );
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[52], context[56] );
  res = refalrts::splice_evar( res, context[23], context[26] );
  res = refalrts::splice_evar( res, context[50], context[51] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[49], context[49] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[41], context[42] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpressionm_AfterCall("DoExpression-AfterCall", 893557537U, 3673923261U, func_DoExpressionm_AfterCall);


static refalrts::FnResult func_Expressionm_CheckBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Expression-CheckBrackets/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // s.idx ( e.idx ) ( e.idx ) ( s.idx t.idx ) e.idx
    // </0 & Expression-CheckBrackets/4 s.Kind#1/7 (/10 e.Errors#1/8 )/11 (/14 e.Expression#1/12 )/15 (/18 s.Type#1/20 t.Pos#1/21 )/19 e.Tokens#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[5], context[6] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Errors#1 as range 8
    // closed e.Expression#1 as range 12
    // closed e.Tokens#1 as range 5
    if( ! refalrts::svar_left( context[20], context[16], context[17] ) )
      continue;
    context[22] = refalrts::tvar_left( context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: s.Kind#1: 7
    //DEBUG: e.Errors#1: 8
    //DEBUG: e.Expression#1: 12
    //DEBUG: e.Tokens#1: 5
    //DEBUG: s.Type#1: 20
    //DEBUG: t.Pos#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets$1?1?0/4 AsIs: s.Kind#1/7 AsIs: (/10 AsIs: e.Errors#1/8 AsIs: )/11 AsIs: (/14 AsIs: e.Expression#1/12 AsIs: )/15 HalfReuse: s.Type1 #20/18 } Tile{ AsIs: t.Pos#1/21 HalfReuse: (/19 AsIs: e.Tokens#1/5 HalfReuse: )/1 } </23 & OneOf/24 Tile{ AsIs: s.Type#1/20 } # TkCloseBracket/25 # TkCloseCall/26 >/27 >/28 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], ident_TkCloseBracket ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[26], ident_TkCloseCall ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_Expressionm_CheckBrackets_S1C1C0.ref.function );
    refalrts::reinit_svar( context[18], context[20] );
    refalrts::reinit_open_bracket( context[19] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[28] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[21], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & Expression-CheckBrackets/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets$1?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_Expressionm_CheckBrackets_S1C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expressionm_CheckBrackets("Expression-CheckBrackets", 893557537U, 3673923261U, func_Expressionm_CheckBrackets);


static refalrts::FnResult func_gen_Expressionm_CheckBrackets_S1C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  //FAST GEN: s.$ ( e.$ ) ( e.$ ) s.$ t.$ ( e.$ ) e.$
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) s.$ t.$ ( e.$ ) e.$
  // </0 & Expression-CheckBrackets$1?1?0/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 s.idxVTT#0/14 t.idxVTTV#0/15 (/19 e.idxVTTVVB#0/17 )/20 e.idxVTTVVT#0/2 >/1
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
  // closed e.idxVB#0 as range 6
  // closed e.idxVTB#0 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.idxVTTVVB#0 as range 17
  // closed e.idxVTTVVT#0 as range 2
  do {
    // s.idx ( e.idx ) ( e.idx ) s.idx t.idx ( e.idx ) # True
    // </0 & Expression-CheckBrackets$1?1?0/4 s.Kind#1/5 (/8 e.Errors#1/21 )/9 (/12 e.Expression#1/23 )/13 s.Type#1/14 t.Pos#1/15 (/19 e.Tokens#1/25 )/20 # True/29 >/1
    context[21] = context[6];
    context[22] = context[7];
    context[23] = context[10];
    context[24] = context[11];
    context[25] = context[17];
    context[26] = context[18];
    context[27] = context[2];
    context[28] = context[3];
    context[29] = refalrts::ident_left(  ident_True, context[27], context[28] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    // closed e.Errors#1 as range 21
    // closed e.Expression#1 as range 23
    // closed e.Tokens#1 as range 25
    //DEBUG: t.Pos#1: 15
    //DEBUG: s.Kind#1: 5
    //DEBUG: s.Type#1: 14
    //DEBUG: e.Errors#1: 21
    //DEBUG: e.Expression#1: 23
    //DEBUG: e.Tokens#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets-AfterSubexpr/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/21 HalfReuse: (/9 HalfReuse: # Error/12 } Tile{ AsIs: t.Pos#1/15 HalfReuse: 'u'/19 }"nbalanced "/30 </32 Tile{ HalfReuse: & TokName/13 AsIs: s.Type#1/14 } >/33 )/34 Tile{ AsIs: )/20 } (/35 Tile{ AsIs: e.Expression#1/23 } )/36 </37 & Expression-Aux/38 s.Kind#1/5/39 Tile{ AsIs: e.Tokens#1/25 } Tile{ HalfReuse: >/29 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[30], context[31], "nbalanced ", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[38], ref_Expressionm_Aux.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[39], context[5]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Expressionm_CheckBracketsm_AfterSubexpr.ref.function );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_ident( context[12], ident_Error );
    refalrts::reinit_char( context[19], 'u' );
    refalrts::reinit_name( context[13], ref_TokName.ref.function );
    refalrts::reinit_close_call( context[29] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[37] );
    refalrts::link_brackets( context[35], context[36] );
    refalrts::link_brackets( context[8], context[20] );
    refalrts::link_brackets( context[9], context[34] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[29];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[36], context[39] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx ) s.idx t.idx ( e.idx ) e.idx
  // </0 & Expression-CheckBrackets$1?1?0/4 s.Kind#1/5 (/8 e.Errors#1/21 )/9 (/12 e.Expression#1/23 )/13 s.Type#1/14 t.Pos#1/15 (/19 e.Tokens#1/25 )/20 e.Other#0/27 >/1
  context[21] = context[6];
  context[22] = context[7];
  context[23] = context[10];
  context[24] = context[11];
  context[25] = context[17];
  context[26] = context[18];
  context[27] = context[2];
  context[28] = context[3];
  // closed e.Errors#1 as range 21
  // closed e.Expression#1 as range 23
  // closed e.Tokens#1 as range 25
  // closed e.Other#0 as range 27
  //DEBUG: t.Pos#1: 15
  //DEBUG: s.Kind#1: 5
  //DEBUG: s.Type#1: 14
  //DEBUG: e.Errors#1: 21
  //DEBUG: e.Expression#1: 23
  //DEBUG: e.Tokens#1: 25
  //DEBUG: e.Other#0: 27

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Other#0/27 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets$1?1?1/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/21 AsIs: )/9 AsIs: (/12 AsIs: e.Expression#1/23 AsIs: )/13 } Tile{ HalfReuse: (/1 } Tile{ AsIs: s.Type#1/14 AsIs: t.Pos#1/15 HalfReuse: )/19 AsIs: e.Tokens#1/25 HalfReuse: >/20 } Tile{ ]] }
  refalrts::update_name( context[4], ref_gen_Expressionm_CheckBrackets_S1C1C1.ref.function );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_close_bracket( context[19] );
  refalrts::reinit_close_call( context[20] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[1], context[19] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[20] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::splice_to_freelist_open( context[13], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1C1C0("Expression-CheckBrackets$1?1?0", 893557537U, 3673923261U, func_gen_Expressionm_CheckBrackets_S1C1C0);


static refalrts::FnResult func_gen_Expressionm_CheckBrackets_S1C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Expression-CheckBrackets$1?1?1/4 s.Kind#1/5 (/8 e.Errors#1/6 )/9 t.Expression#1/10 e.Tokens#1/2 >/1
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
  // closed e.Errors#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Kind#1: 5
  //DEBUG: e.Errors#1: 6
  //DEBUG: t.Expression#1: 10
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Expression-CheckBrackets$1?1?1/4 s.Kind#1/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Errors#1/6 AsIs: )/9 AsIs: t.Expression#1/10 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1C1C1("Expression-CheckBrackets$1?1?1", 893557537U, 3673923261U, func_gen_Expressionm_CheckBrackets_S1C1C1);


static refalrts::FnResult func_Expressionm_CheckBracketsm_AfterSubexpr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Expression-CheckBrackets-AfterSubexpr/4 s.Kind#1/5 (/8 e.Errors#1/6 )/9 (/12 e.Expression#1/10 )/13 (/16 e.SubexprErrors#1/14 )/17 (/20 e.Subexpression#1/18 )/21 e.Tokens#1/2 >/1
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
  // closed e.Errors#1 as range 6
  // closed e.Expression#1 as range 10
  // closed e.SubexprErrors#1 as range 14
  // closed e.Subexpression#1 as range 18
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Kind#1: 5
  //DEBUG: e.Errors#1: 6
  //DEBUG: e.Expression#1: 10
  //DEBUG: e.SubexprErrors#1: 14
  //DEBUG: e.Subexpression#1: 18
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/9 (/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/17 (/20 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets/4 AsIs: s.Kind#1/5 AsIs: (/8 } Tile{ AsIs: e.Errors#1/6 } Tile{ AsIs: e.SubexprErrors#1/14 } Tile{ AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Expression#1/10 } Tile{ AsIs: e.Subexpression#1/18 } Tile{ AsIs: )/21 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Expressionm_CheckBrackets.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[16], context[21] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[21];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expressionm_CheckBracketsm_AfterSubexpr("Expression-CheckBrackets-AfterSubexpr", 893557537U, 3673923261U, func_Expressionm_CheckBracketsm_AfterSubexpr);


static refalrts::FnResult func_UnexpectedToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  //FAST GEN: ( s.$ t.$ e.$ ) e.$
  //GLOBAL GEN: ( s.$ t.$ e.$ ) e.$
  // </0 & UnexpectedToken/4 (/7 s.idxB#0/9 t.idxBV#0/10 e.idxBVV#0/5 )/8 e.idxT#0/2 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBVV#0 as range 5
  do {
    // ( # TkError t.idx e.idx ) e.idx
    // </0 & UnexpectedToken/4 (/7 # TkError/9 t.Pos#1/10 e.Message#1/12 )/8 e.Expected#1/14 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = context[2];
    context[15] = context[3];
    if( ! refalrts::ident_term(  ident_TkError, context[9] ) )
      continue;
    // closed e.Message#1 as range 12
    // closed e.Expected#1 as range 14
    //DEBUG: t.Pos#1: 10
    //DEBUG: e.Message#1: 12
    //DEBUG: e.Expected#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & UnexpectedToken/4 {REMOVED TILE} e.Expected#1/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # Error/9 AsIs: t.Pos#1/10 AsIs: e.Message#1/12 AsIs: )/8 } Tile{ ]] }
    refalrts::update_ident( context[9], ident_Error );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx t.idx e.idx ) e.idx
  // </0 & UnexpectedToken/4 (/7 s.Type#1/9 t.Pos#1/10 e.Value#1/12 )/8 e.Expected#1/14 >/1
  context[12] = context[5];
  context[13] = context[6];
  context[14] = context[2];
  context[15] = context[3];
  // closed e.Value#1 as range 12
  // closed e.Expected#1 as range 14
  //DEBUG: t.Pos#1: 10
  //DEBUG: s.Type#1: 9
  //DEBUG: e.Value#1: 12
  //DEBUG: e.Expected#1: 14

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Type#1/9 {REMOVED TILE} e.Value#1/12 {REMOVED TILE}
  //RESULT: Tile{ [[ } (/16 # Error/17 Tile{ AsIs: t.Pos#1/10 }"unexpected "/18 Tile{ AsIs: </0 Reuse: & TokName/4 HalfReuse: s.Type1 #9/7 } >/20", expected"/21 Tile{ HalfReuse: ' '/8 AsIs: e.Expected#1/14 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[17], ident_Error ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], "unexpected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[21], context[22], ", expected", 10 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_TokName.ref.function );
  refalrts::reinit_svar( context[7], context[9] );
  refalrts::reinit_char( context[8], ' ' );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[16], context[1] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnexpectedToken("UnexpectedToken", 893557537U, 3673923261U, func_UnexpectedToken);


static refalrts::FnResult func_TokName(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & TokName/4 s.idx#0/5 >/1
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
    // # TkName
    // </0 & TokName/4 # TkName/5 >/1
    if( ! refalrts::ident_term(  ident_TkName, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'i'/0 HalfReuse: 'd'/4 HalfReuse: 'e'/5 HalfReuse: 'n'/1 }"tifier"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "tifier", 6 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 'd' );
    refalrts::reinit_char( context[5], 'e' );
    refalrts::reinit_char( context[1], 'n' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkCompound
    // </0 & TokName/4 # TkCompound/5 >/1
    if( ! refalrts::ident_term(  ident_TkCompound, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'o'/4 HalfReuse: 'm'/5 HalfReuse: 'p'/1 }"ound symbol"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "ound symbol", 11 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'c' );
    refalrts::reinit_char( context[4], 'o' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], 'p' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkMacroDigit
    // </0 & TokName/4 # TkMacroDigit/5 >/1
    if( ! refalrts::ident_term(  ident_TkMacroDigit, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'u'/4 HalfReuse: 'm'/5 HalfReuse: 'b'/1 }"er"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "er", 2 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'n' );
    refalrts::reinit_char( context[4], 'u' );
    refalrts::reinit_char( context[5], 'm' );
    refalrts::reinit_char( context[1], 'b' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkChar
    // </0 & TokName/4 # TkChar/5 >/1
    if( ! refalrts::ident_term(  ident_TkChar, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'c'/0 HalfReuse: 'h'/4 HalfReuse: 'a'/5 HalfReuse: 'r'/1 }"acter"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "acter", 5 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'c' );
    refalrts::reinit_char( context[4], 'h' );
    refalrts::reinit_char( context[5], 'a' );
    refalrts::reinit_char( context[1], 'r' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkVariable
    // </0 & TokName/4 # TkVariable/5 >/1
    if( ! refalrts::ident_term(  ident_TkVariable, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: 'v'/0 HalfReuse: 'a'/4 HalfReuse: 'r'/5 HalfReuse: 'i'/1 }"able"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "able", 4 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], 'v' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[5], 'r' );
    refalrts::reinit_char( context[1], 'i' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkOpenBracket
    // </0 & TokName/4 # TkOpenBracket/5 >/1
    if( ! refalrts::ident_term(  ident_TkOpenBracket, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '('/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], '(' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkCloseBracket
    // </0 & TokName/4 # TkCloseBracket/5 >/1
    if( ! refalrts::ident_term(  ident_TkCloseBracket, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: ')'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], ')' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkOpenBlock
    // </0 & TokName/4 # TkOpenBlock/5 >/1
    if( ! refalrts::ident_term(  ident_TkOpenBlock, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '{'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], '{' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkCloseBlock
    // </0 & TokName/4 # TkCloseBlock/5 >/1
    if( ! refalrts::ident_term(  ident_TkCloseBlock, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '}'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], '}' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkOpenCall
    // </0 & TokName/4 # TkOpenCall/5 >/1
    if( ! refalrts::ident_term(  ident_TkOpenCall, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '<'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], '<' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkCloseCall
    // </0 & TokName/4 # TkCloseCall/5 >/1
    if( ! refalrts::ident_term(  ident_TkCloseCall, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '>'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], '>' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkComma
    // </0 & TokName/4 # TkComma/5 >/1
    if( ! refalrts::ident_term(  ident_TkComma, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: ','/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], ',' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkColon
    // </0 & TokName/4 # TkColon/5 >/1
    if( ! refalrts::ident_term(  ident_TkColon, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: ':'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], ':' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkAssign
    // </0 & TokName/4 # TkAssign/5 >/1
    if( ! refalrts::ident_term(  ident_TkAssign, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '='/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], '=' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkSemicolon
    // </0 & TokName/4 # TkSemicolon/5 >/1
    if( ! refalrts::ident_term(  ident_TkSemicolon, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: ';'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], ';' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkExtern
    // </0 & TokName/4 # TkExtern/5 >/1
    if( ! refalrts::ident_term(  ident_TkExtern, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'X'/5 HalfReuse: 'T'/1 }"ERN"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "ERN", 3 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '$' );
    refalrts::reinit_char( context[4], 'E' );
    refalrts::reinit_char( context[5], 'X' );
    refalrts::reinit_char( context[1], 'T' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkEntry
    // </0 & TokName/4 # TkEntry/5 >/1
    if( ! refalrts::ident_term(  ident_TkEntry, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/5 HalfReuse: 'T'/1 }"RY"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "RY", 2 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '$' );
    refalrts::reinit_char( context[4], 'E' );
    refalrts::reinit_char( context[5], 'N' );
    refalrts::reinit_char( context[1], 'T' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # TkEOF
  // </0 & TokName/4 # TkEOF/5 >/1
  if( ! refalrts::ident_term(  ident_TkEOF, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'e'/0 HalfReuse: 'n'/4 HalfReuse: 'd'/5 HalfReuse: ' '/1 }"of file"/6 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "of file", 7 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'e' );
  refalrts::reinit_char( context[4], 'n' );
  refalrts::reinit_char( context[5], 'd' );
  refalrts::reinit_char( context[1], ' ' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TokName("TokName", 893557537U, 3673923261U, func_TokName);


//End of file
