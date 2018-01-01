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
static const refalrts::RefalIdentifier ident_Classic = refalrts::ident_from_static("Classic");
static const refalrts::RefalIdentifier ident_Closure = refalrts::ident_from_static("Closure");
static const refalrts::RefalIdentifier ident_Condition = refalrts::ident_from_static("Condition");
static const refalrts::RefalIdentifier ident_Declaration = refalrts::ident_from_static("Declaration");
static const refalrts::RefalIdentifier ident_Error = refalrts::ident_from_static("Error");
static const refalrts::RefalIdentifier ident_Extended = refalrts::ident_from_static("Extended");
static const refalrts::RefalIdentifier ident_False = refalrts::ident_from_static("False");
static const refalrts::RefalIdentifier ident_Function = refalrts::ident_from_static("Function");
static const refalrts::RefalIdentifier ident_GNm_Entry = refalrts::ident_from_static("GN-Entry");
static const refalrts::RefalIdentifier ident_GNm_Local = refalrts::ident_from_static("GN-Local");
static const refalrts::RefalIdentifier ident_Pattern = refalrts::ident_from_static("Pattern");
static const refalrts::RefalIdentifier ident_Result = refalrts::ident_from_static("Result");
static const refalrts::RefalIdentifier ident_Sentences = refalrts::ident_from_static("Sentences");
static const refalrts::RefalIdentifier ident_TkAmpersand = refalrts::ident_from_static("TkAmpersand");
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
static const refalrts::RefalIdentifier ident_TkRefal5Mode = refalrts::ident_from_static("TkRefal5Mode");
static const refalrts::RefalIdentifier ident_TkSemicolon = refalrts::ident_from_static("TkSemicolon");
static const refalrts::RefalIdentifier ident_TkVariable = refalrts::ident_from_static("TkVariable");
static const refalrts::RefalIdentifier ident_True = refalrts::ident_from_static("True");
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_Block("Block", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Blockm_AfterSentence("Block-AfterSentence", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Blockm_AfterSentence_S1B1("Block-AfterSentence$1:1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_CheckEmptyBlock("CheckEmptyBlock", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_ClassicError("ClassicError", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
static refalrts::ExternalReference ref_DoExpression("DoExpression", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_DoExpression_B1("DoExpression:1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_DoExpression_B1S10B1("DoExpression:1$10:1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_DoExpression_B1S11C1C0("DoExpression:1$11?1?0", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_DoExpression_B1S11C1C1("DoExpression:1$11?1?1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_DoExpressionm_AfterAmpersand("DoExpression-AfterAmpersand", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_DoExpressionm_AfterBlock("DoExpression-AfterBlock", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_DoExpressionm_AfterBracket("DoExpression-AfterBracket", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_DoExpressionm_AfterCall("DoExpression-AfterCall", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_DoFilterErrors("DoFilterErrors", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Evm_met("Ev-met", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Expression("Expression", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Expressionm_Aux("Expression-Aux", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Expressionm_CheckBrackets("Expression-CheckBrackets", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Expressionm_CheckBrackets_S1C1C0("Expression-CheckBrackets$1?1?0", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Expressionm_CheckBrackets_S1C1C1("Expression-CheckBrackets$1?1?1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Expressionm_CheckBracketsm_AfterSubexpr("Expression-CheckBrackets-AfterSubexpr", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_ExtensionChain("ExtensionChain", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_ExtensionChainm_AfterBlock("ExtensionChain-AfterBlock", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_ExtensionChainm_AfterExtensionChain("ExtensionChain-AfterExtensionChain", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_ExtensionChainm_AfterPattern("ExtensionChain-AfterPattern", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_ExtensionChainm_AfterPattern_B1("ExtensionChain-AfterPattern:1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_ExtensionChainm_AfterPatternm_AfterResult("ExtensionChain-AfterPattern-AfterResult", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_ExtensionChainm_AfterResult("ExtensionChain-AfterResult", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_ExtensionChainm_AfterResult_S4B1("ExtensionChain-AfterResult$4:1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_ExtensionChainm_AfterResult_S4B1S4C1C0("ExtensionChain-AfterResult$4:1$4?1?0", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_ExtensionChainm_AfterResult_S4B1S4C1C1("ExtensionChain-AfterResult$4:1$4?1?1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Extern("Extern", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_FilterErrors("FilterErrors", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Function("Function", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Functionm_AfterBlock("Function-AfterBlock", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
static refalrts::ExternalReference ref_Mu("Mu", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Mu_A1("Mu=1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Mul("Mul", 0U, 0U);
static refalrts::ExternalReference ref_NameList("NameList", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_NameList_S3C1C0("NameList$3?1?0", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_NameListm_DoNames("NameList-DoNames", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S8C1C0("NameList-DoNames$8?1?0", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S8C1C1("NameList-DoNames$8?1?1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S8C2C0("NameList-DoNames$8?2?0", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S8C2C1("NameList-DoNames$8?2?1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_OneOf("OneOf", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Pattern("Pattern", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Program("Program", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Program_S1C1C0("Program$1?1?0", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Program_S1C1C1("Program$1?1?1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Program_S1C2C0("Program$1?2?0", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Program_S1C2C1("Program$1?2?1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Program_S4C1C0("Program$4?1?0", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Programm_AfterUnit("Program-AfterUnit", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_R5m_Parse("R5-Parse", 0U, 0U);
static refalrts::ExternalReference ref_Residue("Residue", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Residue_A1("Residue=1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Result("Result", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Sentence("Sentence", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Sentencem_AfterExtensionChain("Sentence-AfterExtensionChain", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Sentencem_AfterPattern("Sentence-AfterPattern", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Sentencem_AfterResult("Sentence-AfterResult", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Sub("Sub", 0U, 0U);
static refalrts::ExternalReference ref_TokName("TokName", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Type("Type", 0U, 0U);
static refalrts::ExternalReference ref_UnexpectedToken("UnexpectedToken", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_UnexpectedTokenInSentence("UnexpectedTokenInSentence", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Unit("Unit", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Unit_B1("Unit:1", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_Unit_B1S3C1C0("Unit:1$3?1?0", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_Up("Up", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_u_u_FindMuPtr("__FindMuPtr", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Mum_Aux("__Mu-Aux", 1557407522U, 1427032781U);
static refalrts::ExternalReference ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 1557407522U, 1427032781U);
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

static refalrts::NativeReference nat_ref_gen_Mu_A1("Mu=1", 1557407522U, 1427032781U, func_gen_Mu_A1);


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

static refalrts::NativeReference nat_ref_Mu("Mu", 1557407522U, 1427032781U, func_Mu);


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
    if( ! refalrts::alloc_number( context[9], 1427032781UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref.function );
    refalrts::reinit_number( context[5], 1557407522UL );
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
  refalrts::reinit_number( context[5], 1557407522UL );
  refalrts::reinit_number( context[7], 1427032781UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 1557407522U, 1427032781U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 1557407522U, 1427032781U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_gen_Residue_A1("Residue=1", 1557407522U, 1427032781U, func_gen_Residue_A1);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 1557407522U, 1427032781U, func_Residue);


static refalrts::FnResult func_R5m_Parse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & R5-Parse/4 s.Mode#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & FilterErrors/7 Tile{ AsIs: </0 Reuse: & Program/4 AsIs: s.Mode#1/5 AsIs: e.Tokens#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_FilterErrors.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Program.ref.function );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
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

static refalrts::NativeReference nat_ref_FilterErrors("FilterErrors", 1557407522U, 1427032781U, func_FilterErrors);


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

static refalrts::NativeReference nat_ref_DoFilterErrors("DoFilterErrors", 1557407522U, 1427032781U, func_DoFilterErrors);


static refalrts::FnResult func_Program(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
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
    // s.idx t.idx e.idx
    // </0 & Program/4 s.Mode#1/7 t.NextToken#1/8 e.Tokens#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    context[9] = refalrts::tvar_left( context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    // closed e.Tokens#1 as range 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: t.NextToken#1: 8
    //DEBUG: e.Tokens#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$1?1?0/4 AsIs: s.Mode#1/7 AsIs: t.NextToken#1/8 } (/10 Tile{ AsIs: e.Tokens#1/5 } )/11 t.NextToken#1/8/12 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[12], context[13], context[8], context[9]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_Program_S1C1C0.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[13] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
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

static refalrts::NativeReference nat_ref_Program("Program", 1557407522U, 1427032781U, func_Program);


static refalrts::FnResult func_gen_Program_S1C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
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
    // s.idx t.idx ( e.idx ) ( s.idx t.idx e.idx )
    // </0 & Program$1?1?0/4 s.Mode#1/15 t.NextToken#1/17 (/13 e.Tokens#1/11 )/14 (/9 s.Type#2/16 t.Pos#2/19 e.Value#2/7 )/10 >/1
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
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[7], context[8] ) )
      continue;
    context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[20] = refalrts::tvar_left( context[19], context[7], context[8] );
    if( ! context[20] )
      continue;
    // closed e.Value#2 as range 7
    //DEBUG: e.Tokens#1: 11
    //DEBUG: s.Mode#1: 15
    //DEBUG: s.Type#2: 16
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19
    //DEBUG: e.Value#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$1?2?0/4 AsIs: s.Mode#1/15 AsIs: t.NextToken#1/17 AsIs: (/13 AsIs: e.Tokens#1/11 AsIs: )/14 HalfReuse: s.Type2 #16/9 } Tile{ AsIs: t.Pos#2/19 } (/21 Tile{ AsIs: e.Value#2/7 } )/22 </23 & OneOf/24 Tile{ AsIs: s.Type#2/16 } # TkExtern/25 # TkEntry/26 # TkName/27 # TkSemicolon/28 Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], ident_TkExtern ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[26], ident_TkEntry ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], ident_TkName ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], ident_TkSemicolon ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_Program_S1C2C0.ref.function );
    refalrts::reinit_svar( context[9], context[16] );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[25], context[28] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[19], context[20] );
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

static refalrts::NativeReference nat_ref_gen_Program_S1C1C0("Program$1?1?0", 1557407522U, 1427032781U, func_gen_Program_S1C1C0);


static refalrts::FnResult func_gen_Program_S1C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ t.$ e.$
  // </0 & Program$1?1?1/4 s.idx#0/5 t.idxV#0/6 e.idxVV#0/2 >/1
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
  // closed e.idxVV#0 as range 2
  do {
    // s.idx ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & Program$1?1?1/4 s.Mode#1/5 (/6 # TkRefal5Mode/12 t.Pos#1/13 s.NewMode#1/15 )/7 e.Tokens#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[6] ) )
      continue;
    context[12] = refalrts::ident_left(  ident_TkRefal5Mode, context[10], context[11] );
    if( ! context[12] )
      continue;
    // closed e.Tokens#1 as range 8
    context[14] = refalrts::tvar_left( context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Tokens#1: 8
    //DEBUG: t.Pos#1: 13
    //DEBUG: s.NewMode#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 (/6 # TkRefal5Mode/12 t.Pos#1/13 s.NewMode#1/15 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program/4 } Tile{ HalfReuse: s.NewMode1 #15/7 AsIs: e.Tokens#1/8 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Program.ref.function );
    refalrts::reinit_svar( context[7], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # TkEOF t.idx )
    // </0 & Program$1?1?1/4 s.Mode#1/5 (/6 # TkEOF/12 t.Pos#1/13 )/7 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[6] ) )
      continue;
    context[12] = refalrts::ident_left(  ident_TkEOF, context[10], context[11] );
    if( ! context[12] )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Mode#1: 5
    //DEBUG: t.Pos#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Program$1?1?1/4 s.Mode#1/5 (/6 # TkEOF/12 t.Pos#1/13 )/7 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx t.idx e.idx
  // </0 & Program$1?1?1/4 s.Mode#1/5 t.Unexpected#1/6 e.Tokens#1/8 >/1
  context[8] = context[2];
  context[9] = context[3];
  // closed e.Tokens#1 as range 8
  //DEBUG: t.Unexpected#1: 6
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Tokens#1: 8

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$4?1?0/4 AsIs: s.Mode#1/5 AsIs: t.Unexpected#1/6 } (/10 Tile{ AsIs: e.Tokens#1/8 } )/11 t.Unexpected#1/6/12 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[6], context[7]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_Program_S4C1C0.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Program_S1C1C1("Program$1?1?1", 1557407522U, 1427032781U, func_gen_Program_S1C1C1);


static refalrts::FnResult func_gen_Program_S1C2C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  //FAST GEN: s.$ t.$ ( e.$ ) s.$ t.$ ( e.$ ) e.$
  //GLOBAL GEN: s.$ t.$ ( e.$ ) s.$ t.$ ( e.$ ) e.$
  // </0 & Program$1?2?0/4 s.idx#0/5 t.idxV#0/6 (/10 e.idxVVB#0/8 )/11 s.idxVVT#0/12 t.idxVVTV#0/13 (/17 e.idxVVTVVB#0/15 )/18 e.idxVVTVVT#0/2 >/1
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
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.idxVVB#0 as range 8
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxVVTVVB#0 as range 15
  // closed e.idxVVTVVT#0 as range 2
  do {
    // s.idx t.idx ( e.idx ) s.idx t.idx ( e.idx ) # True
    // </0 & Program$1?2?0/4 s.Mode#1/5 t.NextToken#1/6 (/10 e.Tokens#1/19 )/11 s.Type#2/12 t.Pos#2/13 (/17 e.Value#2/21 )/18 # True/25 >/1
    context[19] = context[8];
    context[20] = context[9];
    context[21] = context[15];
    context[22] = context[16];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = refalrts::ident_left(  ident_True, context[23], context[24] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Tokens#1 as range 19
    // closed e.Value#2 as range 21
    //DEBUG: t.NextToken#1: 6
    //DEBUG: t.Pos#2: 13
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Type#2: 12
    //DEBUG: e.Tokens#1: 19
    //DEBUG: e.Value#2: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/10 {REMOVED TILE} {REMOVED TILE} s.Type#2/12 t.Pos#2/13 {REMOVED TILE} e.Value#2/21 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program-AfterUnit/4 AsIs: s.Mode#1/5 } Tile{ HalfReuse: </11 } Tile{ HalfReuse: & Unit/17 } Tile{ HalfReuse: s.Mode1 #5/18 } Tile{ AsIs: t.NextToken#1/6 } Tile{ AsIs: e.Tokens#1/19 } Tile{ HalfReuse: >/25 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Programm_AfterUnit.ref.function );
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[17], ref_Unit.ref.function );
    refalrts::reinit_svar( context[18], context[5] );
    refalrts::reinit_close_call( context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[25];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx t.idx ( e.idx ) s.idx t.idx ( e.idx ) e.idx
  // </0 & Program$1?2?0/4 s.Mode#1/5 t.NextToken#1/6 (/10 e.Tokens#1/19 )/11 s.Type#2/12 t.Pos#2/13 (/17 e.Value#2/21 )/18 e.Other#0/23 >/1
  context[19] = context[8];
  context[20] = context[9];
  context[21] = context[15];
  context[22] = context[16];
  context[23] = context[2];
  context[24] = context[3];
  // closed e.Tokens#1 as range 19
  // closed e.Value#2 as range 21
  // closed e.Other#0 as range 23
  //DEBUG: t.NextToken#1: 6
  //DEBUG: t.Pos#2: 13
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Type#2: 12
  //DEBUG: e.Tokens#1: 19
  //DEBUG: e.Value#2: 21
  //DEBUG: e.Other#0: 23

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Other#0/23 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$1?2?1/4 AsIs: s.Mode#1/5 AsIs: t.NextToken#1/6 AsIs: (/10 AsIs: e.Tokens#1/19 AsIs: )/11 } Tile{ AsIs: (/17 } Tile{ AsIs: s.Type#2/12 AsIs: t.Pos#2/13 } Tile{ AsIs: e.Value#2/21 } Tile{ AsIs: )/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_Program_S1C2C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Program_S1C2C0("Program$1?2?0", 1557407522U, 1427032781U, func_gen_Program_S1C2C0);


static refalrts::FnResult func_gen_Program_S1C2C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Program$1?2?1/4 s.Mode#1/5 t.NextToken#1/6 (/10 e.Tokens#1/8 )/11 e.Other#0/2 >/1
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
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.Tokens#1 as range 8
  // closed e.Other#0 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: t.NextToken#1: 6
  //DEBUG: e.Tokens#1: 8
  //DEBUG: e.Other#0: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/10 {REMOVED TILE} )/11 e.Other#0/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$1?1?1/4 AsIs: s.Mode#1/5 AsIs: t.NextToken#1/6 } Tile{ AsIs: e.Tokens#1/8 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_Program_S1C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Program_S1C2C1("Program$1?2?1", 1557407522U, 1427032781U, func_gen_Program_S1C2C1);


static refalrts::FnResult func_gen_Program_S4C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & Program$4?1?0/4 s.Mode#1/13 t.Unexpected#1/15 (/11 e.Tokens#1/9 )/12 (/7 s.Type#2/14 t.Pos#2/17 e.Value#2/5 )/8 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.Value#2 as range 5
  //DEBUG: e.Tokens#1: 9
  //DEBUG: s.Mode#1: 13
  //DEBUG: s.Type#2: 14
  //DEBUG: t.Unexpected#1: 15
  //DEBUG: t.Pos#2: 17
  //DEBUG: e.Value#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/14 t.Pos#2/17 e.Value#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/15 HalfReuse: '$'/11 } Tile{ HalfReuse: 'E'/8 } 'X'/19 Tile{ HalfReuse: 'T'/12 HalfReuse: 'E'/7 }"RN, $ENTRY, function name or special comment"/20 >/22 </23 & Program/24 Tile{ AsIs: s.Mode#1/13 } Tile{ AsIs: e.Tokens#1/9 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_char( context[19], 'X' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "RN, $ENTRY, function name or special comment", 44 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], ref_Program.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[11], '$' );
  refalrts::reinit_char( context[8], 'E' );
  refalrts::reinit_char( context[12], 'T' );
  refalrts::reinit_char( context[7], 'E' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[12], context[7] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[15], context[11] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Program_S4C1C0("Program$4?1?0", 1557407522U, 1427032781U, func_gen_Program_S4C1C0);


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

static refalrts::NativeReference nat_ref_OneOf("OneOf", 1557407522U, 1427032781U, func_OneOf);


static refalrts::FnResult func_Programm_AfterUnit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Program-AfterUnit/4 s.Mode#1/5 (/8 e.ErrorsUnits#1/6 )/9 e.Tokens#1/2 >/1
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
  // closed e.ErrorsUnits#1 as range 6
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.ErrorsUnits#1: 6
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/5 (/8 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.ErrorsUnits#1/6 } Tile{ AsIs: </0 Reuse: & Program/4 } Tile{ HalfReuse: s.Mode1 #5/9 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Program.ref.function );
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Programm_AfterUnit("Program-AfterUnit", 1557407522U, 1427032781U, func_Programm_AfterUnit);


static refalrts::FnResult func_gen_Unit_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: ( e.$ ) s.$ t.$ ( e.$ )
  //GLOBAL GEN: ( e.$ ) s.$ t.$ ( s.$ t.$ e.$ )
  // </0 & Unit:1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/13 t.idxTV#0/15 (/11 s.idxTVVB#0/14 t.idxTVVBV#0/17 e.idxTVVBVV#0/9 )/12 >/1
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
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[9], context[10] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVVBVV#0 as range 9
  do {
    // ( e.idx ) s.idx t.idx ( # TkExtern t.idx )
    // </0 & Unit:1/4 (/7 e.Tokens#1/19 )/8 s.Mode#1/13 t.NextToken#1/15 (/11 # TkExtern/14 t.Pos#2/17 )/12 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[9];
    context[22] = context[10];
    if( ! refalrts::ident_term(  ident_TkExtern, context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.Tokens#1 as range 19
    //DEBUG: t.NextToken#1: 15
    //DEBUG: t.Pos#2: 17
    //DEBUG: s.Mode#1: 13
    //DEBUG: e.Tokens#1: 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 s.Mode#1/13 t.NextToken#1/15 (/11 # TkExtern/14 t.Pos#2/17 )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList/4 } Tile{ AsIs: e.Tokens#1/19 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_NameList.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx t.idx ( # TkSemicolon t.idx )
    // </0 & Unit:1/4 (/7 e.Tokens#1/19 )/8 s.Mode#1/13 t.NextToken#1/15 (/11 # TkSemicolon/14 t.Pos#2/17 )/12 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[9];
    context[22] = context[10];
    if( ! refalrts::ident_term(  ident_TkSemicolon, context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.Tokens#1 as range 19
    //DEBUG: t.NextToken#1: 15
    //DEBUG: t.Pos#2: 17
    //DEBUG: s.Mode#1: 13
    //DEBUG: e.Tokens#1: 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} )/8 s.Mode#1/13 t.NextToken#1/15 (/11 # TkSemicolon/14 t.Pos#2/17 )/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 } Tile{ AsIs: e.Tokens#1/19 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[4] );
    refalrts::link_brackets( context[0], context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx t.idx ( s.idx t.idx e.idx )
  // </0 & Unit:1/4 (/7 e.Tokens#1/19 )/8 s.Mode#1/13 t.NextToken#1/15 (/11 s.Type#2/14 t.Pos#2/17 e.Value#2/21 )/12 >/1
  context[19] = context[5];
  context[20] = context[6];
  context[21] = context[9];
  context[22] = context[10];
  // closed e.Tokens#1 as range 19
  // closed e.Value#2 as range 21
  //DEBUG: t.NextToken#1: 15
  //DEBUG: t.Pos#2: 17
  //DEBUG: s.Mode#1: 13
  //DEBUG: s.Type#2: 14
  //DEBUG: e.Tokens#1: 19
  //DEBUG: e.Value#2: 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Unit:1$3?1?0/4 AsIs: (/7 AsIs: e.Tokens#1/19 AsIs: )/8 AsIs: s.Mode#1/13 AsIs: t.NextToken#1/15 HalfReuse: s.Type2 #14/11 } Tile{ AsIs: t.Pos#2/17 } (/23 Tile{ AsIs: e.Value#2/21 } )/24 </25 & OneOf/26 Tile{ AsIs: s.Type#2/14 } # TkEntry/27 # TkName/28 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], ref_OneOf.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[27], ident_TkEntry ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[28], ident_TkName ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_Unit_B1S3C1C0.ref.function );
  refalrts::reinit_svar( context[11], context[14] );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[25] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[12];
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1("Unit:1", 1557407522U, 1427032781U, func_gen_Unit_B1);


static refalrts::FnResult func_gen_Unit_B1S3C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Unit:1$3?1?0/4 (/8 e.Tokens#1/6 )/9 s.Mode#1/14 t.NextToken#1/15 s.Type#2/17 t.Pos#2/18 (/12 e.Value#2/10 )/13 # True/5 >/1
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
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Tokens#1: 6
  //DEBUG: e.Value#2: 10
  //DEBUG: s.Mode#1: 14
  //DEBUG: t.NextToken#1: 15
  //DEBUG: s.Type#2: 17
  //DEBUG: t.Pos#2: 18

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/9 s.Mode#1/14 {REMOVED TILE} s.Type#2/17 t.Pos#2/18 (/12 e.Value#2/10 )/13 # True/5 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function/4 HalfReuse: s.Mode1 #14/8 } Tile{ AsIs: t.NextToken#1/15 } Tile{ AsIs: e.Tokens#1/6 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Function.ref.function );
  refalrts::reinit_svar( context[8], context[14] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1S3C1C0("Unit:1$3?1?0", 1557407522U, 1427032781U, func_gen_Unit_B1S3C1C0);


static refalrts::FnResult func_Unit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Unit/4 s.Mode#1/5 t.NextToken#1/6 e.Tokens#1/2 >/1
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
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: t.NextToken#1: 6
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Unit:1/8 (/9 Tile{ AsIs: e.Tokens#1/2 } )/10 Tile{ AsIs: s.Mode#1/5 AsIs: t.NextToken#1/6 } {*}/11 t.NextToken#1/6/12 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[8], ref_gen_Unit_B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[11], context[4] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[6], context[7]))
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[11], context[13] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  refalrts::wrap_closure( context[11] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Unit("Unit", 1557407522U, 1427032781U, func_Unit);


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

  do {
    // ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & NameList/4 (/5 # TkRefal5Mode/11 t.Pos#1/12 s.Mode#1/14 )/6 e.Tokens#1/7 >/1
    context[7] = context[2];
    context[8] = context[3];
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[5] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_TkRefal5Mode, context[9], context[10] );
    if( ! context[11] )
      continue;
    // closed e.Tokens#1 as range 7
    context[13] = refalrts::tvar_left( context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::svar_left( context[14], context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: e.Tokens#1: 7
    //DEBUG: t.Pos#1: 12
    //DEBUG: s.Mode#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & NameList/4 (/5 # TkRefal5Mode/11 t.Pos#1/12 s.Mode#1/14 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: & NameList/6 AsIs: e.Tokens#1/7 AsIs: >/1 ]] }
    refalrts::reinit_name( context[6], ref_NameList.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( context[0], res );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList$3?1?0/4 AsIs: t.NextToken#1/5 } (/9 Tile{ AsIs: e.Tokens#1/7 } )/10 t.NextToken#1/5/11 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[11], context[12], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_NameList_S3C1C0.ref.function );
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

static refalrts::NativeReference nat_ref_NameList("NameList", 1557407522U, 1427032781U, func_NameList);


static refalrts::FnResult func_gen_NameList_S3C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & NameList$3?1?0/4 t.NextToken#1/14 (/11 e.Tokens#1/9 )/12 (/7 s.Type#2/13 t.Pos#2/16 e.Value#2/5 )/8 >/1
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

static refalrts::NativeReference nat_ref_gen_NameList_S3C1C0("NameList$3?1?0", 1557407522U, 1427032781U, func_gen_NameList_S3C1C0);


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

static refalrts::NativeReference nat_ref_Extern("Extern", 1557407522U, 1427032781U, func_Extern);


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
    // ( e.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & NameList-DoNames/4 (/9 e.ExternsAndErrors#1/7 )/10 (/13 # TkRefal5Mode/15 t.Pos#1/16 s.Mode#1/18 )/14 e.Tokens#1/5 >/1
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
    context[15] = refalrts::ident_left(  ident_TkRefal5Mode, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.ExternsAndErrors#1 as range 7
    // closed e.Tokens#1 as range 5
    context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    if( ! refalrts::svar_left( context[18], context[11], context[12] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.ExternsAndErrors#1: 7
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.Pos#1: 16
    //DEBUG: s.Mode#1: 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/13 # TkRefal5Mode/15 t.Pos#1/16 s.Mode#1/18 )/14 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: (/9 AsIs: e.ExternsAndErrors#1/7 AsIs: )/10 } Tile{ AsIs: e.Tokens#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # TkComma t.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & NameList-DoNames/4 (/9 e.ExternsAndErrors#1/7 )/10 (/13 # TkComma/15 t.CommaPos#1/21 )/14 (/18 # TkRefal5Mode/20 t.ModePos#1/23 s.Mode#1/25 )/19 e.Tokens#1/5 >/1
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
    context[20] = refalrts::ident_left(  ident_TkRefal5Mode, context[16], context[17] );
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
    if( ! refalrts::svar_left( context[25], context[16], context[17] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    //DEBUG: e.ExternsAndErrors#1: 7
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.CommaPos#1: 21
    //DEBUG: t.ModePos#1: 23
    //DEBUG: s.Mode#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/18 # TkRefal5Mode/20 t.ModePos#1/23 s.Mode#1/25 )/19 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: (/9 AsIs: e.ExternsAndErrors#1/7 AsIs: )/10 AsIs: (/13 AsIs: # TkComma/15 AsIs: t.CommaPos#1/21 AsIs: )/14 } Tile{ AsIs: e.Tokens#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$8?1?0/4 AsIs: (/9 AsIs: e.ExternsAndErrors#1/7 AsIs: )/10 AsIs: t.NextToken#1/11 } (/13 Tile{ AsIs: e.Tokens#1/5 } )/14 t.NextToken#1/11/15 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[11], context[12]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S8C1C0.ref.function );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$8?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S8C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameListm_DoNames("NameList-DoNames", 1557407522U, 1427032781U, func_NameListm_DoNames);


static refalrts::FnResult func_gen_NameListm_DoNames_S8C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & NameList-DoNames$8?1?0/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( e.idx ) t.idx ( e.idx ) ( s.idx t.idx e.idx )
    // </0 & NameList-DoNames$8?1?0/4 (/9 e.ExternsAndErrors#1/7 )/10 t.NextToken#1/20 (/17 e.Tokens#1/15 )/18 (/13 s.Type#2/19 t.Pos#2/22 e.Value#2/11 )/14 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$8?2?0/4 AsIs: (/9 AsIs: e.ExternsAndErrors#1/7 AsIs: )/10 AsIs: t.NextToken#1/20 AsIs: (/17 AsIs: e.Tokens#1/15 AsIs: )/18 HalfReuse: s.Type2 #19/13 } Tile{ AsIs: t.Pos#2/22 } (/24 Tile{ AsIs: e.Value#2/11 } )/25 </26 & OneOf/27 Tile{ AsIs: s.Type#2/19 } # TkExtern/28 # TkEntry/29 # TkEOF/30 Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
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
    refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S8C2C0.ref.function );
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
  // </0 & NameList-DoNames$8?1?0/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$8?2?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S8C2C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S8C1C0("NameList-DoNames$8?1?0", 1557407522U, 1427032781U, func_gen_NameListm_DoNames_S8C1C0);


static refalrts::FnResult func_gen_NameListm_DoNames_S8C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & NameList-DoNames$8?1?1/4 (/7 e.ExternsAndErrors#1/5 )/8 t.NextToken#1/9 e.Tokens#1/2 >/1
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

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S8C1C1("NameList-DoNames$8?1?1", 1557407522U, 1427032781U, func_gen_NameListm_DoNames_S8C1C1);


static refalrts::FnResult func_gen_NameListm_DoNames_S8C2C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  //FAST GEN: ( e.$ ) t.$ ( e.$ ) s.$ t.$ ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) t.$ ( e.$ ) s.$ t.$ ( e.$ ) e.$
  // </0 & NameList-DoNames$8?2?0/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 (/13 e.idxTVB#0/11 )/14 s.idxTVT#0/15 t.idxTVTV#0/16 (/20 e.idxTVTVVB#0/18 )/21 e.idxTVTVVT#0/2 >/1
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
    // </0 & NameList-DoNames$8?2?0/4 (/7 e.ExternsAndErrors#1/22 )/8 t.NextToken#1/9 (/13 e.Tokens#1/24 )/14 s.Type#2/15 t.Pos#2/16 (/20 e.Value#2/26 )/21 # True/30 >/1
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
  // </0 & NameList-DoNames$8?2?0/4 (/7 e.ExternsAndErrors#1/22 )/8 t.NextToken#1/9 (/13 e.Tokens#1/24 )/14 s.Type#2/15 t.Pos#2/16 (/20 e.Value#2/26 )/21 e.Other#0/28 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$8?2?1/4 AsIs: (/7 AsIs: e.ExternsAndErrors#1/22 AsIs: )/8 AsIs: t.NextToken#1/9 AsIs: (/13 AsIs: e.Tokens#1/24 AsIs: )/14 } Tile{ AsIs: (/20 } Tile{ AsIs: s.Type#2/15 AsIs: t.Pos#2/16 } Tile{ AsIs: e.Value#2/26 } Tile{ AsIs: )/21 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S8C2C1.ref.function );
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

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S8C2C0("NameList-DoNames$8?2?0", 1557407522U, 1427032781U, func_gen_NameListm_DoNames_S8C2C0);


static refalrts::FnResult func_gen_NameListm_DoNames_S8C2C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & NameList-DoNames$8?2?1/4 (/7 e.ExternsAndErrors#1/5 )/8 t.NextToken#1/9 (/13 e.Tokens#1/11 )/14 e.Other#0/2 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$8?1?1/4 AsIs: (/7 AsIs: e.ExternsAndErrors#1/5 AsIs: )/8 AsIs: t.NextToken#1/9 } Tile{ AsIs: e.Tokens#1/11 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S8C1C1.ref.function );
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

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S8C2C1("NameList-DoNames$8?2?1", 1557407522U, 1427032781U, func_gen_NameListm_DoNames_S8C2C1);


static refalrts::FnResult func_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  //FAST GEN: s.$ ( e.$ ) e.$
  //GLOBAL GEN: s.$ ( s.$ t.$ e.$ ) e.$
  // </0 & Function/4 s.idx#0/5 (/8 s.idxVB#0/10 t.idxVBV#0/11 e.idxVBVV#0/6 )/9 e.idxVT#0/2 >/1
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
  // closed e.idxVT#0 as range 2
  if( ! refalrts::svar_left( context[10], context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[6], context[7] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBVV#0 as range 6
  do {
    // s.idx ( # TkEntry t.idx ) ( # TkName t.idx e.idx ) e.idx
    // </0 & Function/4 s.Mode#1/5 (/8 # TkEntry/10 t.EntryPos#1/11 )/9 (/19 # TkName/21 t.NamePos#1/22 e.Name#1/17 )/20 e.Tokens#1/15 >/1
    context[13] = context[6];
    context[14] = context[7];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::ident_term(  ident_TkEntry, context[10] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  ident_TkName, context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Tokens#1 as range 15
    context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    // closed e.Name#1 as range 17
    //DEBUG: t.EntryPos#1: 11
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Tokens#1: 15
    //DEBUG: t.NamePos#1: 22
    //DEBUG: e.Name#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NamePos#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function-AfterBlock/4 } Tile{ AsIs: t.EntryPos#1/11 } Tile{ AsIs: (/8 } Tile{ AsIs: e.Name#1/17 } Tile{ AsIs: )/9 HalfReuse: # GN-Entry/19 HalfReuse: </21 } Tile{ HalfReuse: & Block/10 } Tile{ HalfReuse: s.Mode1 #5/20 AsIs: e.Tokens#1/15 AsIs: >/1 } >/24 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Functionm_AfterBlock.ref.function );
    refalrts::reinit_ident( context[19], ident_GNm_Entry );
    refalrts::reinit_open_call( context[21] );
    refalrts::reinit_name( context[10], ref_Block.ref.function );
    refalrts::reinit_svar( context[20], context[5] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[9], context[21] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # TkName t.idx e.idx ) e.idx
    // </0 & Function/4 s.Mode#1/5 (/8 # TkName/10 t.Pos#1/11 e.Name#1/13 )/9 e.Tokens#1/15 >/1
    context[13] = context[6];
    context[14] = context[7];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::ident_term(  ident_TkName, context[10] ) )
      continue;
    // closed e.Name#1 as range 13
    // closed e.Tokens#1 as range 15
    //DEBUG: t.Pos#1: 11
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Name#1: 13
    //DEBUG: e.Tokens#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function-AfterBlock/4 } Tile{ AsIs: t.Pos#1/11 } Tile{ AsIs: (/8 } Tile{ AsIs: e.Name#1/13 } )/17 Tile{ Reuse: # GN-Local/10 } </18 & Block/19 Tile{ HalfReuse: s.Mode1 #5/9 AsIs: e.Tokens#1/15 AsIs: >/1 } >/20 Tile{ ]] }
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], ref_Block.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Functionm_AfterBlock.ref.function );
    refalrts::update_ident( context[10], ident_GNm_Local );
    refalrts::reinit_svar( context[9], context[5] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # TkEntry t.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & Function/4 s.Mode#1/5 (/8 # TkEntry/10 t.EntryPos#1/11 )/9 (/19 # TkRefal5Mode/21 t.ModePos#1/22 s.NewMode#1/24 )/20 e.Tokens#1/15 >/1
    context[13] = context[6];
    context[14] = context[7];
    context[15] = context[2];
    context[16] = context[3];
    if( ! refalrts::ident_term(  ident_TkEntry, context[10] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[15], context[16] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  ident_TkRefal5Mode, context[17], context[18] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    // closed e.Tokens#1 as range 15
    context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    if( ! refalrts::svar_left( context[24], context[17], context[18] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: t.EntryPos#1: 11
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Tokens#1: 15
    //DEBUG: t.ModePos#1: 22
    //DEBUG: s.NewMode#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} )/9 (/19 # TkRefal5Mode/21 t.ModePos#1/22 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Function/4 } Tile{ AsIs: s.NewMode#1/24 } Tile{ AsIs: (/8 AsIs: # TkEntry/10 AsIs: t.EntryPos#1/11 } Tile{ AsIs: )/20 AsIs: e.Tokens#1/15 AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( # TkEntry t.idx ) e.idx
  // </0 & Function/4 s.Mode#1/5 (/8 # TkEntry/10 t.Pos#1/11 )/9 e.Tokens#1/15 >/1
  context[13] = context[6];
  context[14] = context[7];
  context[15] = context[2];
  context[16] = context[3];
  if( ! refalrts::ident_term(  ident_TkEntry, context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 15
  //DEBUG: t.Pos#1: 11
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Tokens#1: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: (/8 Reuse: # Error/10 AsIs: t.Pos#1/11 HalfReuse: '$'/9 } Tile{ HalfReuse: 'E'/4 } 'N'/17 Tile{ HalfReuse: 'T'/1 }"RY without function name, skipped"/18 )/20 )/21 Tile{ AsIs: e.Tokens#1/15 } Tile{ ]] }
  if( ! refalrts::alloc_char( context[17], 'N' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], "RY without function name, skipped", 33 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::update_ident( context[10], ident_Error );
  refalrts::reinit_char( context[9], '$' );
  refalrts::reinit_char( context[4], 'E' );
  refalrts::reinit_char( context[1], 'T' );
  refalrts::link_brackets( context[0], context[21] );
  refalrts::link_brackets( context[8], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Function("Function", 1557407522U, 1427032781U, func_Function);


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

static refalrts::NativeReference nat_ref_Functionm_AfterBlock("Function-AfterBlock", 1557407522U, 1427032781U, func_Functionm_AfterBlock);


static refalrts::FnResult func_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: s.$ t.$ e.$
  //GLOBAL GEN: s.$ t.$ e.$
  // </0 & Block/4 s.idx#0/5 t.idxV#0/6 e.idxVV#0/2 >/1
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
  // closed e.idxVV#0 as range 2
  do {
    // s.idx ( # TkOpenBlock t.idx ) e.idx
    // </0 & Block/4 s.Mode#1/5 (/6 # TkOpenBlock/12 t.Pos#1/13 )/7 e.Tokens#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[6] ) )
      continue;
    context[12] = refalrts::ident_left(  ident_TkOpenBlock, context[10], context[11] );
    if( ! context[12] )
      continue;
    // closed e.Tokens#1 as range 8
    context[14] = refalrts::tvar_left( context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Tokens#1: 8
    //DEBUG: t.Pos#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.Pos#1/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence/4 AsIs: s.Mode#1/5 AsIs: (/6 HalfReuse: )/12 } (/15 )/16 </17 & Sentence/18 Tile{ HalfReuse: s.Mode1 #5/7 AsIs: e.Tokens#1/8 AsIs: >/1 } >/19 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ref_Sentence.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Blockm_AfterSentence.ref.function );
    refalrts::reinit_close_bracket( context[12] );
    refalrts::reinit_svar( context[7], context[5] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[6], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[15], context[18] );
    refalrts::splice_to_freelist_open( context[12], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & Block/4 s.Mode#1/5 (/6 # TkRefal5Mode/12 t.Pos#1/13 s.NewMode#1/15 )/7 e.Tokens#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[6] ) )
      continue;
    context[12] = refalrts::ident_left(  ident_TkRefal5Mode, context[10], context[11] );
    if( ! context[12] )
      continue;
    // closed e.Tokens#1 as range 8
    context[14] = refalrts::tvar_left( context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    if( ! refalrts::svar_left( context[15], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Tokens#1: 8
    //DEBUG: t.Pos#1: 13
    //DEBUG: s.NewMode#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 (/6 # TkRefal5Mode/12 t.Pos#1/13 s.NewMode#1/15 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Block/4 } Tile{ HalfReuse: s.NewMode1 #15/7 AsIs: e.Tokens#1/8 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[7], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx t.idx e.idx
  // </0 & Block/4 s.Mode#1/5 t.Unexpected#1/6 e.Tokens#1/8 >/1
  context[8] = context[2];
  context[9] = context[3];
  // closed e.Tokens#1 as range 8
  //DEBUG: t.Unexpected#1: 6
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Tokens#1: 8

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } & UnexpectedToken/10 Tile{ AsIs: t.Unexpected#1/6 }"\'{\'"/11 Tile{ AsIs: >/1 } )/13 (/14 )/15 t.Unexpected#1/6/16 Tile{ AsIs: e.Tokens#1/8 } Tile{ ]] }
  if( ! refalrts::alloc_name( context[10], ref_UnexpectedToken.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[11], context[12], "\'{\'", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[16], context[17], context[6], context[7]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[0], context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Block("Block", 1557407522U, 1427032781U, func_Block);


static refalrts::FnResult func_gen_Blockm_AfterSentence_S1B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 51 elems
  refalrts::Iter context[51];
  refalrts::zeros( context, 51 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ s.$ t.$ t.$ t.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) t.$ ( e.$ ) t.$ s.$ t.$ t.$ t.$
  // </0 & Block-AfterSentence$1:1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 t.idxTTT#0/17 (/21 e.idxTTTVB#0/19 )/22 t.idxTTTVT#0/23 s.idxTTTVTV#0/25 t.idxTTTVTVV#0/26 t.idxTTTVTVVV#0/28 t.idxTTTVTVVVV#0/30 >/1
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
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[27] = refalrts::tvar_left( context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  context[29] = refalrts::tvar_left( context[28], context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  context[31] = refalrts::tvar_left( context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx s.idx t.idx ( # TkSemicolon t.idx ) ( # TkRefal5Mode t.idx s.idx )
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Errors#1/32 )/8 (/11 e.Sentences#1/34 )/12 (/15 e.SentenceErrors#1/36 )/16 t.NextSentence#1/17 (/21 e.Tokens#1/38 )/22 t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 (/28 # TkSemicolon/44 t.SemicolonPos#2/46 )/29 (/30 # TkRefal5Mode/45 t.ModePos#2/48 s.NewMode#2/50 )/31 >/1
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[9];
    context[35] = context[10];
    context[36] = context[13];
    context[37] = context[14];
    context[38] = context[19];
    context[39] = context[20];
    context[40] = 0;
    context[41] = 0;
    if( ! refalrts::brackets_term( context[40], context[41], context[28] ) )
      continue;
    context[42] = 0;
    context[43] = 0;
    if( ! refalrts::brackets_term( context[42], context[43], context[30] ) )
      continue;
    context[44] = refalrts::ident_left(  ident_TkSemicolon, context[40], context[41] );
    if( ! context[44] )
      continue;
    context[45] = refalrts::ident_left(  ident_TkRefal5Mode, context[42], context[43] );
    if( ! context[45] )
      continue;
    // closed e.Errors#1 as range 32
    // closed e.Sentences#1 as range 34
    // closed e.SentenceErrors#1 as range 36
    // closed e.Tokens#1 as range 38
    context[47] = refalrts::tvar_left( context[46], context[40], context[41] );
    if( ! context[47] )
      continue;
    if( ! refalrts::empty_seq( context[40], context[41] ) )
      continue;
    context[49] = refalrts::tvar_left( context[48], context[42], context[43] );
    if( ! context[49] )
      continue;
    if( ! refalrts::svar_left( context[50], context[42], context[43] ) )
      continue;
    if( ! refalrts::empty_seq( context[42], context[43] ) )
      continue;
    //DEBUG: t.NextSentence#1: 17
    //DEBUG: t.Token2#1: 23
    //DEBUG: t.Token1#1: 26
    //DEBUG: s.Mode#1: 25
    //DEBUG: e.Errors#1: 32
    //DEBUG: e.Sentences#1: 34
    //DEBUG: e.SentenceErrors#1: 36
    //DEBUG: e.Tokens#1: 38
    //DEBUG: t.SemicolonPos#2: 46
    //DEBUG: t.ModePos#2: 48
    //DEBUG: s.NewMode#2: 50

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/22 t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 {REMOVED TILE} {REMOVED TILE} (/30 # TkRefal5Mode/45 t.ModePos#2/48 s.NewMode#2/50 )/31 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </28 } Tile{ HalfReuse: & Block-AfterSentence/0 HalfReuse: s.NewMode2 #50/4 AsIs: (/7 AsIs: e.Errors#1/32 AsIs: )/8 AsIs: (/11 AsIs: e.Sentences#1/34 AsIs: )/12 AsIs: (/15 AsIs: e.SentenceErrors#1/36 AsIs: )/16 AsIs: t.NextSentence#1/17 AsIs: (/21 } Tile{ AsIs: # TkSemicolon/44 AsIs: t.SemicolonPos#2/46 AsIs: )/29 } Tile{ AsIs: e.Tokens#1/38 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[28] );
    refalrts::reinit_name( context[0], ref_Blockm_AfterSentence.ref.function );
    refalrts::reinit_svar( context[4], context[50] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[21], context[29] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[44], context[29] );
    res = refalrts::splice_evar( res, context[0], context[21] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx s.idx t.idx ( # TkRefal5Mode t.idx s.idx ) t.idx
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Errors#1/32 )/8 (/11 e.Sentences#1/34 )/12 (/15 e.SentenceErrors#1/36 )/16 t.NextSentence#1/17 (/21 e.Tokens#1/38 )/22 t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 (/28 # TkRefal5Mode/42 t.Pos#2/43 s.NewMode#2/45 )/29 t.Token2_#2/30 >/1
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[9];
    context[35] = context[10];
    context[36] = context[13];
    context[37] = context[14];
    context[38] = context[19];
    context[39] = context[20];
    context[40] = 0;
    context[41] = 0;
    if( ! refalrts::brackets_term( context[40], context[41], context[28] ) )
      continue;
    context[42] = refalrts::ident_left(  ident_TkRefal5Mode, context[40], context[41] );
    if( ! context[42] )
      continue;
    // closed e.Errors#1 as range 32
    // closed e.Sentences#1 as range 34
    // closed e.SentenceErrors#1 as range 36
    // closed e.Tokens#1 as range 38
    context[44] = refalrts::tvar_left( context[43], context[40], context[41] );
    if( ! context[44] )
      continue;
    if( ! refalrts::svar_left( context[45], context[40], context[41] ) )
      continue;
    if( ! refalrts::empty_seq( context[40], context[41] ) )
      continue;
    //DEBUG: t.NextSentence#1: 17
    //DEBUG: t.Token2#1: 23
    //DEBUG: t.Token1#1: 26
    //DEBUG: t.Token2_#2: 30
    //DEBUG: s.Mode#1: 25
    //DEBUG: e.Errors#1: 32
    //DEBUG: e.Sentences#1: 34
    //DEBUG: e.SentenceErrors#1: 36
    //DEBUG: e.Tokens#1: 38
    //DEBUG: t.Pos#2: 43
    //DEBUG: s.NewMode#2: 45

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/22 t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 (/28 # TkRefal5Mode/42 t.Pos#2/43 s.NewMode#2/45 )/29 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </21 } Tile{ HalfReuse: & Block-AfterSentence/0 HalfReuse: s.NewMode2 #45/4 AsIs: (/7 AsIs: e.Errors#1/32 AsIs: )/8 AsIs: (/11 AsIs: e.Sentences#1/34 AsIs: )/12 AsIs: (/15 AsIs: e.SentenceErrors#1/36 AsIs: )/16 AsIs: t.NextSentence#1/17 } Tile{ AsIs: t.Token2_#2/30 } Tile{ AsIs: e.Tokens#1/38 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[21] );
    refalrts::reinit_name( context[0], ref_Blockm_AfterSentence.ref.function );
    refalrts::reinit_svar( context[4], context[45] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[0], context[18] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx s.idx t.idx ( # TkSemicolon t.idx ) ( # TkCloseBlock t.idx )
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Errors#1/32 )/8 (/11 e.Sentences#1/34 )/12 (/15 e.SentenceErrors#1/36 )/16 t.NextSentence#1/17 (/21 e.Tokens#1/38 )/22 t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 (/28 # TkSemicolon/44 t.Pos1#2/46 )/29 (/30 # TkCloseBlock/45 t.Pos2#2/48 )/31 >/1
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[9];
    context[35] = context[10];
    context[36] = context[13];
    context[37] = context[14];
    context[38] = context[19];
    context[39] = context[20];
    context[40] = 0;
    context[41] = 0;
    if( ! refalrts::brackets_term( context[40], context[41], context[28] ) )
      continue;
    context[42] = 0;
    context[43] = 0;
    if( ! refalrts::brackets_term( context[42], context[43], context[30] ) )
      continue;
    context[44] = refalrts::ident_left(  ident_TkSemicolon, context[40], context[41] );
    if( ! context[44] )
      continue;
    context[45] = refalrts::ident_left(  ident_TkCloseBlock, context[42], context[43] );
    if( ! context[45] )
      continue;
    // closed e.Errors#1 as range 32
    // closed e.Sentences#1 as range 34
    // closed e.SentenceErrors#1 as range 36
    // closed e.Tokens#1 as range 38
    context[47] = refalrts::tvar_left( context[46], context[40], context[41] );
    if( ! context[47] )
      continue;
    if( ! refalrts::empty_seq( context[40], context[41] ) )
      continue;
    context[49] = refalrts::tvar_left( context[48], context[42], context[43] );
    if( ! context[49] )
      continue;
    if( ! refalrts::empty_seq( context[42], context[43] ) )
      continue;
    //DEBUG: t.NextSentence#1: 17
    //DEBUG: t.Token2#1: 23
    //DEBUG: t.Token1#1: 26
    //DEBUG: s.Mode#1: 25
    //DEBUG: e.Errors#1: 32
    //DEBUG: e.Sentences#1: 34
    //DEBUG: e.SentenceErrors#1: 36
    //DEBUG: e.Tokens#1: 38
    //DEBUG: t.Pos1#2: 46
    //DEBUG: t.Pos2#2: 48

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} )/22 t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 (/28 # TkSemicolon/44 {REMOVED TILE} )/29 (/30 # TkCloseBlock/45 t.Pos2#2/48 )/31 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckEmptyBlock/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/32 } Tile{ AsIs: e.SentenceErrors#1/36 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Sentences#1/34 } Tile{ AsIs: t.NextSentence#1/17 HalfReuse: )/21 } Tile{ AsIs: t.Pos1#2/46 } Tile{ AsIs: e.Tokens#1/38 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_CheckEmptyBlock.ref.function );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[21] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[46], context[47] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx s.idx t.idx ( # TkCloseBlock t.idx ) t.idx
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Errors#1/32 )/8 (/11 e.Sentences#1/34 )/12 (/15 e.SentenceErrors#1/36 )/16 t.NextSentence#1/17 (/21 e.Tokens#1/38 )/22 t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 (/28 # TkCloseBlock/42 t.Pos#2/43 )/29 t.Token2#1/30 >/1
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[9];
    context[35] = context[10];
    context[36] = context[13];
    context[37] = context[14];
    context[38] = context[19];
    context[39] = context[20];
    context[40] = 0;
    context[41] = 0;
    if( ! refalrts::brackets_term( context[40], context[41], context[28] ) )
      continue;
    if( ! refalrts::repeated_stvar_term( context[30], context[23] ) )
      continue;
    context[42] = refalrts::ident_left(  ident_TkCloseBlock, context[40], context[41] );
    if( ! context[42] )
      continue;
    // closed e.Errors#1 as range 32
    // closed e.Sentences#1 as range 34
    // closed e.SentenceErrors#1 as range 36
    // closed e.Tokens#1 as range 38
    context[44] = refalrts::tvar_left( context[43], context[40], context[41] );
    if( ! context[44] )
      continue;
    if( ! refalrts::empty_seq( context[40], context[41] ) )
      continue;
    //DEBUG: t.NextSentence#1: 17
    //DEBUG: t.Token2#1: 23
    //DEBUG: t.Token1#1: 26
    //DEBUG: s.Mode#1: 25
    //DEBUG: e.Errors#1: 32
    //DEBUG: e.Sentences#1: 34
    //DEBUG: e.SentenceErrors#1: 36
    //DEBUG: e.Tokens#1: 38
    //DEBUG: t.Pos#2: 43

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} (/21 {REMOVED TILE} )/22 {REMOVED TILE} s.Mode#1/25 t.Token1#1/26 (/28 {REMOVED TILE} )/29 t.Token2#1/30 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckEmptyBlock/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/32 } Tile{ AsIs: e.SentenceErrors#1/36 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Sentences#1/34 } Tile{ AsIs: t.NextSentence#1/17 } Tile{ HalfReuse: )/42 AsIs: t.Pos#2/43 } Tile{ AsIs: t.Token2#1/23 } Tile{ AsIs: e.Tokens#1/38 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_CheckEmptyBlock.ref.function );
    refalrts::reinit_close_bracket( context[42] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[42] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[42], context[44] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx s.idx t.idx ( # TkSemicolon t.idx ) t.idx
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Errors#1/32 )/8 (/11 e.Sentences#1/34 )/12 (/15 e.SentenceErrors#1/36 )/16 t.NextSentence#1/17 (/21 e.Tokens#1/38 )/22 t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 (/28 # TkSemicolon/42 t.Pos#2/43 )/29 t.Token2#1/30 >/1
    context[32] = context[5];
    context[33] = context[6];
    context[34] = context[9];
    context[35] = context[10];
    context[36] = context[13];
    context[37] = context[14];
    context[38] = context[19];
    context[39] = context[20];
    context[40] = 0;
    context[41] = 0;
    if( ! refalrts::brackets_term( context[40], context[41], context[28] ) )
      continue;
    if( ! refalrts::repeated_stvar_term( context[30], context[23] ) )
      continue;
    context[42] = refalrts::ident_left(  ident_TkSemicolon, context[40], context[41] );
    if( ! context[42] )
      continue;
    // closed e.Errors#1 as range 32
    // closed e.Sentences#1 as range 34
    // closed e.SentenceErrors#1 as range 36
    // closed e.Tokens#1 as range 38
    context[44] = refalrts::tvar_left( context[43], context[40], context[41] );
    if( ! context[44] )
      continue;
    if( ! refalrts::empty_seq( context[40], context[41] ) )
      continue;
    //DEBUG: t.NextSentence#1: 17
    //DEBUG: t.Token2#1: 23
    //DEBUG: t.Token1#1: 26
    //DEBUG: s.Mode#1: 25
    //DEBUG: e.Errors#1: 32
    //DEBUG: e.Sentences#1: 34
    //DEBUG: e.SentenceErrors#1: 36
    //DEBUG: e.Tokens#1: 38
    //DEBUG: t.Pos#2: 43

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 {REMOVED TILE} t.Pos#2/43 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence/4 HalfReuse: s.Mode1 #25/7 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Errors#1/32 } Tile{ AsIs: e.SentenceErrors#1/36 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Sentences#1/34 } Tile{ AsIs: t.NextSentence#1/17 HalfReuse: )/21 } Tile{ HalfReuse: </28 HalfReuse: & Sentence/42 } Tile{ HalfReuse: s.Mode1 #25/29 AsIs: t.Token2#1/30 } Tile{ AsIs: e.Tokens#1/38 } Tile{ HalfReuse: >/22 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Blockm_AfterSentence.ref.function );
    refalrts::reinit_svar( context[7], context[25] );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::reinit_open_call( context[28] );
    refalrts::reinit_name( context[42], ref_Sentence.ref.function );
    refalrts::reinit_svar( context[29], context[25] );
    refalrts::reinit_close_call( context[22] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[15], context[21] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[28], context[42] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( e.idx ) t.idx s.idx t.idx t.idx t.idx
  // </0 & Block-AfterSentence$1:1/4 (/7 e.Errors#1/32 )/8 (/11 e.Sentences#1/34 )/12 (/15 e.SentenceErrors#1/36 )/16 t.NextSentence#1/17 (/21 e.Tokens#1/38 )/22 t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 t.Token1#1/28 t.Token2#1/30 >/1
  context[32] = context[5];
  context[33] = context[6];
  context[34] = context[9];
  context[35] = context[10];
  context[36] = context[13];
  context[37] = context[14];
  context[38] = context[19];
  context[39] = context[20];
  if( ! refalrts::repeated_stvar_term( context[30], context[23] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::repeated_stvar_term( context[28], context[26] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 32
  // closed e.Sentences#1 as range 34
  // closed e.SentenceErrors#1 as range 36
  // closed e.Tokens#1 as range 38
  //DEBUG: t.NextSentence#1: 17
  //DEBUG: t.Token2#1: 23
  //DEBUG: t.Token1#1: 26
  //DEBUG: s.Mode#1: 25
  //DEBUG: e.Errors#1: 32
  //DEBUG: e.Sentences#1: 34
  //DEBUG: e.SentenceErrors#1: 36
  //DEBUG: e.Tokens#1: 38

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/25 t.Token1#1/26 {REMOVED TILE} t.Token2#1/30 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence/4 HalfReuse: s.Mode1 #25/7 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Errors#1/32 } Tile{ AsIs: e.SentenceErrors#1/36 } Tile{ HalfReuse: </8 } & UnexpectedToken/40 Tile{ AsIs: t.Token1#1/28 }"\';"/41 Tile{ HalfReuse: '\''/16 }" or \'}\', skipped"/43 >/45 Tile{ AsIs: )/12 AsIs: (/15 } Tile{ AsIs: e.Sentences#1/34 } Tile{ AsIs: t.NextSentence#1/17 HalfReuse: )/21 } </46 & Sentence/47 Tile{ HalfReuse: s.Mode1 #25/22 AsIs: t.Token2#1/23 } Tile{ AsIs: e.Tokens#1/38 } >/48 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[40], ref_UnexpectedToken.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[41], context[42], "\';", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[43], context[44], " or \'}\', skipped", 16 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[46] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[47], ref_Sentence.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[48] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Blockm_AfterSentence.ref.function );
  refalrts::reinit_svar( context[7], context[25] );
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_char( context[16], '\'' );
  refalrts::reinit_close_bracket( context[21] );
  refalrts::reinit_svar( context[22], context[25] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[48] );
  refalrts::push_stack( context[46] );
  refalrts::link_brackets( context[15], context[21] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[45] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[48], context[48] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[46], context[47] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[43], context[45] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[41], context[42] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::splice_to_freelist_open( context[7], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Blockm_AfterSentence_S1B1("Block-AfterSentence$1:1", 1557407522U, 1427032781U, func_gen_Blockm_AfterSentence_S1B1);


static refalrts::FnResult func_Blockm_AfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ ( e.$ ) ( e.$ ) t.$ t.$ e.$
  // </0 & Block-AfterSentence/4 t.idx#0/5 (/9 e.idxVB#0/7 )/10 (/13 e.idxVTB#0/11 )/14 t.idxVTT#0/15 t.idxVTTV#0/17 e.idxVTTVV#0/2 >/1
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
  // closed e.idxVB#0 as range 7
  // closed e.idxVTB#0 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTTVV#0 as range 2
  do {
    // s.idx ( e.idx ) ( e.idx ) ( e.idx ) t.idx t.idx t.idx e.idx
    // </0 & Block-AfterSentence/4 s.Mode#1/5 (/9 e.Errors#1/19 )/10 (/13 e.Sentences#1/21 )/14 (/15 e.SentenceErrors#1/25 )/16 t.NextSentence#1/17 t.Token1#1/27 t.Token2#1/29 e.Tokens#1/23 >/1
    context[19] = context[7];
    context[20] = context[8];
    context[21] = context[11];
    context[22] = context[12];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = 0;
    context[26] = 0;
    if( ! refalrts::brackets_term( context[25], context[26], context[15] ) )
      continue;
    if( ! refalrts::svar_term( context[5], context[5] ) )
      continue;
    // closed e.Errors#1 as range 19
    // closed e.Sentences#1 as range 21
    // closed e.SentenceErrors#1 as range 25
    context[28] = refalrts::tvar_left( context[27], context[23], context[24] );
    if( ! context[28] )
      continue;
    context[30] = refalrts::tvar_left( context[29], context[23], context[24] );
    if( ! context[30] )
      continue;
    // closed e.Tokens#1 as range 23
    //DEBUG: t.NextSentence#1: 17
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 19
    //DEBUG: e.Sentences#1: 21
    //DEBUG: e.SentenceErrors#1: 25
    //DEBUG: t.Token1#1: 27
    //DEBUG: t.Token2#1: 29
    //DEBUG: e.Tokens#1: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Block-AfterSentence$1:1/31 Tile{ AsIs: (/9 AsIs: e.Errors#1/19 AsIs: )/10 AsIs: (/13 AsIs: e.Sentences#1/21 AsIs: )/14 AsIs: (/15 AsIs: e.SentenceErrors#1/25 AsIs: )/16 AsIs: t.NextSentence#1/17 } (/32 Tile{ AsIs: e.Tokens#1/23 } )/33 t.Token2#1/29/34 Tile{ AsIs: s.Mode#1/5 } t.Token1#1/27/36 {*}/38 Tile{ AsIs: t.Token1#1/27 AsIs: t.Token2#1/29 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[31], ref_gen_Blockm_AfterSentence_S1B1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[34], context[35], context[29], context[30]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[36], context[37], context[27], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[38], context[4] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[4] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[27], context[30] );
    res = refalrts::splice_evar( res, context[36], context[38] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[9], context[18] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    refalrts::use( res );
    refalrts::wrap_closure( context[38] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( # TkEOF t.idx )
  // </0 & Block-AfterSentence/4 (/5 e.Errors#1/25 )/6 (/9 e.Sentences#1/19 )/10 (/13 e.SentenceErrors#1/21 )/14 t.NextSentence#1/15 (/17 # TkEOF/29 t.Pos#1/30 )/18 >/1
  context[19] = context[7];
  context[20] = context[8];
  context[21] = context[11];
  context[22] = context[12];
  context[23] = context[2];
  context[24] = context[3];
  context[25] = 0;
  context[26] = 0;
  if( ! refalrts::brackets_term( context[25], context[26], context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[27] = 0;
  context[28] = 0;
  if( ! refalrts::brackets_term( context[27], context[28], context[17] ) )
    return refalrts::cRecognitionImpossible;
  context[29] = refalrts::ident_left(  ident_TkEOF, context[27], context[28] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[23], context[24] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 25
  // closed e.Sentences#1 as range 19
  // closed e.SentenceErrors#1 as range 21
  context[31] = refalrts::tvar_left( context[30], context[27], context[28] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[27], context[28] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.NextSentence#1: 15
  //DEBUG: e.Errors#1: 25
  //DEBUG: e.Sentences#1: 19
  //DEBUG: e.SentenceErrors#1: 21
  //DEBUG: t.Pos#1: 30

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckEmptyBlock/4 AsIs: (/5 } Tile{ AsIs: e.Errors#1/25 } Tile{ AsIs: e.SentenceErrors#1/21 } </32 Tile{ HalfReuse: & UnexpectedToken/6 AsIs: (/9 } # TkEOF/33 t.Pos#1/30/34 Tile{ AsIs: )/14 }"\';\' or \'}\'"/36 >/38 Tile{ AsIs: )/10 AsIs: (/13 } Tile{ AsIs: e.Sentences#1/19 } Tile{ AsIs: t.NextSentence#1/15 } )/39 t.Pos#1/30/40 Tile{ AsIs: (/17 AsIs: # TkEOF/29 AsIs: t.Pos#1/30 AsIs: )/18 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[33], ident_TkEOF ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[34], context[35], context[30], context[31]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[36], context[37], "\';\' or \'}\'", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[40], context[41], context[30], context[31]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_CheckEmptyBlock.ref.function );
  refalrts::reinit_name( context[6], ref_UnexpectedToken.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[39] );
  refalrts::link_brackets( context[5], context[10] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[32] );
  refalrts::link_brackets( context[9], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[17];
  res = refalrts::splice_evar( res, context[39], context[41] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[36], context[38] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[33], context[35] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Blockm_AfterSentence("Block-AfterSentence", 1557407522U, 1427032781U, func_Blockm_AfterSentence);


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

static refalrts::NativeReference nat_ref_CheckEmptyBlock("CheckEmptyBlock", 1557407522U, 1427032781U, func_CheckEmptyBlock);


static refalrts::FnResult func_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & Sentence/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // s.idx ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & Sentence/4 s.Mode#1/5 (/10 # TkRefal5Mode/12 t.Pos#1/13 s.NewMode#1/15 )/11 e.Tokens#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    context[8] = 0;
    context[9] = 0;
    context[10] = refalrts::brackets_left( context[8], context[9], context[6], context[7] );
    if( ! context[10] )
      continue;
    refalrts::bracket_pointers(context[10], context[11]);
    context[12] = refalrts::ident_left(  ident_TkRefal5Mode, context[8], context[9] );
    if( ! context[12] )
      continue;
    // closed e.Tokens#1 as range 6
    context[14] = refalrts::tvar_left( context[13], context[8], context[9] );
    if( ! context[14] )
      continue;
    if( ! refalrts::svar_left( context[15], context[8], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Tokens#1: 6
    //DEBUG: t.Pos#1: 13
    //DEBUG: s.NewMode#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 (/10 # TkRefal5Mode/12 t.Pos#1/13 s.NewMode#1/15 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Sentence/4 } Tile{ HalfReuse: s.NewMode1 #15/11 AsIs: e.Tokens#1/6 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx e.idx
  // </0 & Sentence/4 s.Mode#1/5 e.Tokens#1/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  // closed e.Tokens#1 as range 6
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Tokens#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & Sentence-AfterPattern/9 s.Mode#1/5/10 Tile{ AsIs: </0 Reuse: & Pattern/4 AsIs: s.Mode#1/5 AsIs: e.Tokens#1/6 AsIs: >/1 } >/11 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_Sentencem_AfterPattern.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Pattern.ref.function );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[8], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sentence("Sentence", 1557407522U, 1427032781U, func_Sentence);


static refalrts::FnResult func_Sentencem_AfterPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  //FAST GEN: s.$ ( e.$ ) t.$ t.$ e.$
  //GLOBAL GEN: s.$ ( e.$ ) t.$ t.$ e.$
  // </0 & Sentence-AfterPattern/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 t.idxVTV#0/12 e.idxVTVV#0/2 >/1
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
  // closed e.idxVB#0 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTVV#0 as range 2
  do {
    // s.idx ( e.idx ) t.idx ( # TkAssign t.idx ) e.idx
    // </0 & Sentence-AfterPattern/4 s.Mode#1/5 (/8 e.Errors#1/14 )/9 t.Pattern#1/10 (/12 # TkAssign/20 t.Pos#1/21 )/13 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkAssign, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.Errors#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.Pattern#1: 10
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Pos#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} t.Pos#1/21 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sentence-AfterResult/4 } Tile{ AsIs: (/8 AsIs: e.Errors#1/14 AsIs: )/9 AsIs: t.Pattern#1/10 HalfReuse: </12 HalfReuse: & Result/20 } Tile{ HalfReuse: s.Mode1 #5/13 AsIs: e.Tokens#1/16 AsIs: >/1 } >/23 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Sentencem_AfterResult.ref.function );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[20], ref_Result.ref.function );
    refalrts::reinit_svar( context[13], context[5] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[8], context[20] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx ( # TkComma t.idx ) e.idx
    // </0 & Sentence-AfterPattern/4 s.Mode#1/5 (/8 e.Errors#1/14 )/9 t.Pattern#1/10 (/12 # TkComma/20 t.Pos#1/21 )/13 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkComma, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.Errors#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.Pattern#1: 10
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Pos#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} t.Pos#1/21 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sentence-AfterExtensionChain/4 } Tile{ AsIs: (/8 AsIs: e.Errors#1/14 AsIs: )/9 AsIs: t.Pattern#1/10 HalfReuse: </12 HalfReuse: & ExtensionChain/20 } Tile{ HalfReuse: s.Mode1 #5/13 AsIs: e.Tokens#1/16 AsIs: >/1 } >/23 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Sentencem_AfterExtensionChain.ref.function );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[20], ref_ExtensionChain.ref.function );
    refalrts::reinit_svar( context[13], context[5] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[8], context[20] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx ( # TkSemicolon t.idx ) e.idx
    // </0 & Sentence-AfterPattern/4 s.Mode#1/5 (/8 e.Errors#1/14 )/9 t.Pattern#1/10 (/12 # TkSemicolon/20 t.Pos#1/21 )/13 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkSemicolon, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.Errors#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.Pattern#1: 10
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Pos#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sentence-AfterResult/4 } Tile{ AsIs: (/8 AsIs: e.Errors#1/14 HalfReuse: (/9 } # Error/23 t.Pos#1/21/24"Missed \'=\'"/26 )/28 )/29 Tile{ AsIs: t.Pattern#1/10 } </30 & Result/31 Tile{ AsIs: s.Mode#1/5 } Tile{ AsIs: (/12 AsIs: # TkSemicolon/20 AsIs: t.Pos#1/21 AsIs: )/13 AsIs: e.Tokens#1/16 AsIs: >/1 } >/32 Tile{ ]] }
    if( ! refalrts::alloc_ident( context[23], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[24], context[25], context[21], context[22]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[26], context[27], "Missed \'=\'", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], ref_Result.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Sentencem_AfterResult.ref.function );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[29] );
    refalrts::link_brackets( context[9], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[23], context[29] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx ( # TkColon t.idx ) e.idx
    // </0 & Sentence-AfterPattern/4 s.Mode#1/5 (/8 e.Errors#1/14 )/9 t.Pattern#1/10 (/12 # TkColon/20 t.Pos#1/21 )/13 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkColon, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.Errors#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.Pattern#1: 10
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Pos#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Sentence-AfterExtensionChain/4 } Tile{ AsIs: (/8 AsIs: e.Errors#1/14 HalfReuse: (/9 } # Error/23 t.Pos#1/21/24"Missed \',\'"/26 )/28 )/29 Tile{ AsIs: t.Pattern#1/10 } </30 & ExtensionChain/31 Tile{ AsIs: s.Mode#1/5 } Tile{ AsIs: (/12 AsIs: # TkColon/20 AsIs: t.Pos#1/21 AsIs: )/13 AsIs: e.Tokens#1/16 AsIs: >/1 } >/32 Tile{ ]] }
    if( ! refalrts::alloc_ident( context[23], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[24], context[25], context[21], context[22]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[26], context[27], "Missed \',\'", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], ref_ExtensionChain.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Sentencem_AfterExtensionChain.ref.function );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[29] );
    refalrts::link_brackets( context[9], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[23], context[29] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) t.idx t.idx e.idx
  // </0 & Sentence-AfterPattern/4 s.Mode#1/5 (/8 e.Errors#1/14 )/9 t.Pattern#1/10 t.Unexpected#1/12 e.Tokens#1/16 >/1
  context[14] = context[6];
  context[15] = context[7];
  context[16] = context[2];
  context[17] = context[3];
  // closed e.Errors#1 as range 14
  // closed e.Tokens#1 as range 16
  //DEBUG: t.Pattern#1: 10
  //DEBUG: t.Unexpected#1: 12
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 14
  //DEBUG: e.Tokens#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Errors#1/14 HalfReuse: </9 } Tile{ Reuse: & UnexpectedTokenInSentence/4 } Tile{ AsIs: t.Unexpected#1/12 } Tile{ AsIs: >/1 } )/18 Tile{ HalfReuse: (/0 } Tile{ AsIs: t.Pattern#1/10 } (/19 )/20 (/21 )/22 )/23 t.Unexpected#1/12/24 Tile{ AsIs: e.Tokens#1/16 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[24], context[25], context[12], context[13]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[9] );
  refalrts::update_name( context[4], ref_UnexpectedTokenInSentence.ref.function );
  refalrts::reinit_open_bracket( context[0] );
  refalrts::link_brackets( context[0], context[23] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[8], context[18] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[19], context[25] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[4], context[4] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sentencem_AfterPattern("Sentence-AfterPattern", 1557407522U, 1427032781U, func_Sentencem_AfterPattern);


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

static refalrts::NativeReference nat_ref_UnexpectedTokenInSentence("UnexpectedTokenInSentence", 1557407522U, 1427032781U, func_UnexpectedTokenInSentence);


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

static refalrts::NativeReference nat_ref_Sentencem_AfterResult("Sentence-AfterResult", 1557407522U, 1427032781U, func_Sentencem_AfterResult);


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

static refalrts::NativeReference nat_ref_Sentencem_AfterExtensionChain("Sentence-AfterExtensionChain", 1557407522U, 1427032781U, func_Sentencem_AfterExtensionChain);


static refalrts::FnResult func_ExtensionChain(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & ExtensionChain/4 s.Mode#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </6 & ExtensionChain-AfterResult/7 s.Mode#1/5/8 Tile{ AsIs: </0 Reuse: & Result/4 AsIs: s.Mode#1/5 AsIs: e.Tokens#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_ExtensionChainm_AfterResult.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[8], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Result.ref.function );
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

static refalrts::NativeReference nat_ref_ExtensionChain("ExtensionChain", 1557407522U, 1427032781U, func_ExtensionChain);


static refalrts::FnResult func_gen_ExtensionChainm_AfterResult_S4B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & ExtensionChain-AfterResult$4:1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // s.idx ( e.idx ) t.idx ( e.idx ) ( # TkColon t.idx )
    // </0 & ExtensionChain-AfterResult$4:1/4 s.Mode#1/16 (/19 e.Errors#1/17 )/20 t.Result#1/21 (/14 e.Tokens#1/12 )/15 (/9 # TkColon/11 t.Pos#2/23 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkColon, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[16], context[5], context[6] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Errors#1 as range 17
    context[22] = refalrts::tvar_left( context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[24] = refalrts::tvar_left( context[23], context[7], context[8] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 16
    //DEBUG: e.Errors#1: 17
    //DEBUG: t.Result#1: 21
    //DEBUG: t.Pos#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkColon/11 t.Pos#2/23 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterPattern/4 AsIs: s.Mode#1/16 AsIs: (/19 AsIs: e.Errors#1/17 AsIs: )/20 AsIs: t.Result#1/21 HalfReuse: </14 } Tile{ HalfReuse: & Pattern/15 HalfReuse: s.Mode1 #16/9 } Tile{ AsIs: e.Tokens#1/12 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterPattern.ref.function );
    refalrts::reinit_open_call( context[14] );
    refalrts::reinit_name( context[15], ref_Pattern.ref.function );
    refalrts::reinit_svar( context[9], context[16] );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[15], context[9] );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx ( e.idx ) ( # TkOpenBlock t.idx )
    // </0 & ExtensionChain-AfterResult$4:1/4 s.Mode#1/16 (/19 e.Errors#1/17 )/20 t.Result#1/21 (/14 e.Tokens#1/12 )/15 (/9 # TkOpenBlock/11 t.Pos#2/23 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkOpenBlock, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[16], context[5], context[6] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Errors#1 as range 17
    context[22] = refalrts::tvar_left( context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[24] = refalrts::tvar_left( context[23], context[7], context[8] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 16
    //DEBUG: e.Errors#1: 17
    //DEBUG: t.Result#1: 21
    //DEBUG: t.Pos#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterBlock/4 } Tile{ AsIs: (/19 AsIs: e.Errors#1/17 HalfReuse: (/20 } # Error/25 t.Pos#2/23/26"Missed \':\' before block"/28 )/30 )/31 Tile{ AsIs: t.Result#1/21 HalfReuse: </14 } & Block/32 Tile{ HalfReuse: s.Mode1 #16/15 AsIs: (/9 AsIs: # TkOpenBlock/11 AsIs: t.Pos#2/23 AsIs: )/10 } Tile{ AsIs: e.Tokens#1/12 } >/33 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[25], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[23], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[28], context[29], "Missed \':\' before block", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], ref_Block.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterBlock.ref.function );
    refalrts::reinit_open_bracket( context[20] );
    refalrts::reinit_open_call( context[14] );
    refalrts::reinit_svar( context[15], context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[19], context[31] );
    refalrts::link_brackets( context[20], context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[15], context[10] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[21], context[14] );
    res = refalrts::splice_evar( res, context[25], context[31] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx ( e.idx ) ( # TkSemicolon t.idx )
    // </0 & ExtensionChain-AfterResult$4:1/4 s.Mode#1/16 (/19 e.Errors#1/17 )/20 t.Result#1/21 (/14 e.Tokens#1/12 )/15 (/9 # TkSemicolon/11 t.Pos#2/23 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkSemicolon, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[16], context[5], context[6] ) )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Errors#1 as range 17
    context[22] = refalrts::tvar_left( context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[24] = refalrts::tvar_left( context[23], context[7], context[8] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 16
    //DEBUG: e.Errors#1: 17
    //DEBUG: t.Result#1: 21
    //DEBUG: t.Pos#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/16 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: e.Errors#1/17 HalfReuse: (/20 } # Error/25 t.Pos#2/23/26"Mis"/28 Tile{ HalfReuse: 't'/0 HalfReuse: 'a'/4 } Tile{ HalfReuse: 'k'/1 }"en \',\' for \'=\'"/30 )/32 )/33 (/34 Tile{ AsIs: t.Result#1/21 AsIs: (/14 } )/35 Tile{ AsIs: )/15 AsIs: (/9 AsIs: # TkSemicolon/11 AsIs: t.Pos#2/23 AsIs: )/10 } Tile{ AsIs: e.Tokens#1/12 } Tile{ ]] }
    if( ! refalrts::alloc_ident( context[25], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[23], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[28], context[29], "Mis", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[30], context[31], "en \',\' for \'=\'", 14 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[20] );
    refalrts::reinit_char( context[0], 't' );
    refalrts::reinit_char( context[4], 'a' );
    refalrts::reinit_char( context[1], 'k' );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[34], context[15] );
    refalrts::link_brackets( context[14], context[35] );
    refalrts::link_brackets( context[19], context[33] );
    refalrts::link_brackets( context[20], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[15], context[10] );
    res = refalrts::splice_evar( res, context[35], context[35] );
    res = refalrts::splice_evar( res, context[21], context[14] );
    res = refalrts::splice_evar( res, context[30], context[34] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[25], context[29] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx ( e.idx ) ( s.idx t.idx )
    // </0 & ExtensionChain-AfterResult$4:1/4 s.Mode#1/15 (/18 e.Errors#1/16 )/19 t.Result#1/21 (/13 e.Tokens#1/11 )/14 (/9 s.Type#2/20 t.Pos#2/23 )/10 >/1
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
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.Errors#1 as range 16
    if( ! refalrts::svar_left( context[20], context[7], context[8] ) )
      continue;
    context[22] = refalrts::tvar_left( context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[24] = refalrts::tvar_left( context[23], context[7], context[8] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Tokens#1: 11
    //DEBUG: s.Mode#1: 15
    //DEBUG: e.Errors#1: 16
    //DEBUG: s.Type#2: 20
    //DEBUG: t.Result#1: 21
    //DEBUG: t.Pos#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterResult$4:1$4?1?0/4 AsIs: s.Mode#1/15 AsIs: (/18 AsIs: e.Errors#1/16 AsIs: )/19 AsIs: t.Result#1/21 AsIs: (/13 AsIs: e.Tokens#1/11 AsIs: )/14 HalfReuse: s.Type2 #20/9 } Tile{ AsIs: t.Pos#2/23 } </25 & OneOf/26 Tile{ AsIs: s.Type#2/20 } # TkComma/27 # TkAssign/28 Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], ident_TkComma ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], ident_TkAssign ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_ExtensionChainm_AfterResult_S4B1S4C1C0.ref.function );
    refalrts::reinit_svar( context[9], context[20] );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & ExtensionChain-AfterResult$4:1/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterResult$4:1$4?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_ExtensionChainm_AfterResult_S4B1S4C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtensionChainm_AfterResult_S4B1("ExtensionChain-AfterResult$4:1", 1557407522U, 1427032781U, func_gen_ExtensionChainm_AfterResult_S4B1);


static refalrts::FnResult func_gen_ExtensionChainm_AfterResult_S4B1S4C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  //FAST GEN: s.$ ( e.$ ) t.$ ( e.$ ) s.$ t.$ e.$
  //GLOBAL GEN: s.$ ( e.$ ) t.$ ( e.$ ) s.$ t.$ e.$
  // </0 & ExtensionChain-AfterResult$4:1$4?1?0/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 (/14 e.idxVTVB#0/12 )/15 s.idxVTVT#0/16 t.idxVTVTV#0/17 e.idxVTVTVV#0/2 >/1
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
  // closed e.idxVB#0 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.idxVTVB#0 as range 12
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTVTVV#0 as range 2
  do {
    // s.idx ( e.idx ) t.idx ( e.idx ) s.idx t.idx # True
    // </0 & ExtensionChain-AfterResult$4:1$4?1?0/4 s.Mode#1/5 (/8 e.Errors#1/19 )/9 t.Result#1/10 (/14 e.Tokens#1/21 )/15 s.Type#2/16 t.Pos#2/17 # True/25 >/1
    context[19] = context[6];
    context[20] = context[7];
    context[21] = context[12];
    context[22] = context[13];
    context[23] = context[2];
    context[24] = context[3];
    context[25] = refalrts::ident_left(  ident_True, context[23], context[24] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Errors#1 as range 19
    // closed e.Tokens#1 as range 21
    //DEBUG: t.Result#1: 10
    //DEBUG: t.Pos#2: 17
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Type#2: 16
    //DEBUG: e.Errors#1: 19
    //DEBUG: e.Tokens#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterPattern/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Errors#1/19 HalfReuse: (/9 } # Error/26 t.Pos#2/17/27"Missed \':\'"/29 )/31 Tile{ AsIs: )/15 } Tile{ AsIs: t.Result#1/10 HalfReuse: </14 } & Pattern/32 s.Mode#1/5/33 (/34 # TkComma/35 Tile{ AsIs: t.Pos#2/17 } )/36 Tile{ AsIs: e.Tokens#1/21 } Tile{ HalfReuse: >/25 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[26], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[27], context[28], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[29], context[30], "Missed \':\'", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], ref_Pattern.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], ident_TkComma ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterPattern.ref.function );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_open_call( context[14] );
    refalrts::reinit_close_call( context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[34], context[36] );
    refalrts::link_brackets( context[8], context[15] );
    refalrts::link_brackets( context[9], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[25];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[32], context[35] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[26], context[31] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) t.idx ( e.idx ) s.idx t.idx e.idx
  // </0 & ExtensionChain-AfterResult$4:1$4?1?0/4 s.Mode#1/5 (/8 e.Errors#1/19 )/9 t.Result#1/10 (/14 e.Tokens#1/21 )/15 s.Type#2/16 t.Pos#2/17 e.Other#0/23 >/1
  context[19] = context[6];
  context[20] = context[7];
  context[21] = context[12];
  context[22] = context[13];
  context[23] = context[2];
  context[24] = context[3];
  // closed e.Errors#1 as range 19
  // closed e.Tokens#1 as range 21
  // closed e.Other#0 as range 23
  //DEBUG: t.Result#1: 10
  //DEBUG: t.Pos#2: 17
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Type#2: 16
  //DEBUG: e.Errors#1: 19
  //DEBUG: e.Tokens#1: 21
  //DEBUG: e.Other#0: 23

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Other#0/23 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterResult$4:1$4?1?1/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Errors#1/19 AsIs: )/9 AsIs: t.Result#1/10 AsIs: (/14 AsIs: e.Tokens#1/21 AsIs: )/15 } (/25 Tile{ AsIs: s.Type#2/16 AsIs: t.Pos#2/17 } )/26 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_ExtensionChainm_AfterResult_S4B1S4C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::splice_to_freelist_open( context[15], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtensionChainm_AfterResult_S4B1S4C1C0("ExtensionChain-AfterResult$4:1$4?1?0", 1557407522U, 1427032781U, func_gen_ExtensionChainm_AfterResult_S4B1S4C1C0);


static refalrts::FnResult func_gen_ExtensionChainm_AfterResult_S4B1S4C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & ExtensionChain-AfterResult$4:1$4?1?1/4 s.Mode#1/5 (/8 e.Errors#1/6 )/9 t.Result#1/10 (/14 e.Tokens#1/12 )/15 t.Unexpected#2/16 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Tokens#1 as range 12
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 6
  //DEBUG: t.Result#1: 10
  //DEBUG: e.Tokens#1: 12
  //DEBUG: t.Unexpected#2: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Errors#1/6 HalfReuse: </9 } Tile{ HalfReuse: & UnexpectedTokenInSentence/15 AsIs: t.Unexpected#2/16 AsIs: >/1 } Tile{ HalfReuse: )/0 HalfReuse: (/4 } Tile{ AsIs: t.Result#1/10 AsIs: (/14 } )/18 )/19 t.Unexpected#2/16/20 Tile{ AsIs: e.Tokens#1/12 } Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[20], context[21], context[16], context[17]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[9] );
  refalrts::reinit_name( context[15], ref_UnexpectedTokenInSentence.ref.function );
  refalrts::reinit_close_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::link_brackets( context[4], context[19] );
  refalrts::link_brackets( context[14], context[18] );
  refalrts::link_brackets( context[8], context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[15], context[1] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtensionChainm_AfterResult_S4B1S4C1C1("ExtensionChain-AfterResult$4:1$4?1?1", 1557407522U, 1427032781U, func_gen_ExtensionChainm_AfterResult_S4B1S4C1C1);


static refalrts::FnResult func_ExtensionChainm_AfterResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: s.$ ( e.$ ) t.$ t.$ e.$
  //GLOBAL GEN: s.$ ( e.$ ) t.$ t.$ e.$
  // </0 & ExtensionChain-AfterResult/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 t.idxVTV#0/12 e.idxVTVV#0/2 >/1
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
  // closed e.idxVB#0 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTVV#0 as range 2
  do {
    // s.idx ( e.idx ) t.idx ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & ExtensionChain-AfterResult/4 s.Mode#1/5 (/8 e.Errors#1/14 )/9 t.Result#1/10 (/12 # TkRefal5Mode/20 t.Pos#1/21 s.NewMode#1/23 )/13 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkRefal5Mode, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.Errors#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.Result#1: 10
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Pos#1: 21
    //DEBUG: s.NewMode#1: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/12 # TkRefal5Mode/20 t.Pos#1/21 {REMOVED TILE} )/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtensionChain-AfterResult/4 } Tile{ AsIs: s.NewMode#1/23 } Tile{ AsIs: (/8 AsIs: e.Errors#1/14 AsIs: )/9 AsIs: t.Result#1/10 } Tile{ AsIs: e.Tokens#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx ( # TkColon t.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & ExtensionChain-AfterResult/4 s.Mode#1/5 (/8 e.Errors#1/14 )/9 t.Result#1/10 (/12 # TkColon/20 t.ColonPos#1/26 )/13 (/23 # TkRefal5Mode/25 t.ModePos#1/28 s.NewMode#1/30 )/24 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkColon, context[18], context[19] );
    if( ! context[20] )
      continue;
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[16], context[17] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  ident_TkRefal5Mode, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Errors#1 as range 14
    // closed e.Tokens#1 as range 16
    context[27] = refalrts::tvar_left( context[26], context[18], context[19] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    context[29] = refalrts::tvar_left( context[28], context[21], context[22] );
    if( ! context[29] )
      continue;
    if( ! refalrts::svar_left( context[30], context[21], context[22] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: t.Result#1: 10
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.ColonPos#1: 26
    //DEBUG: t.ModePos#1: 28
    //DEBUG: s.NewMode#1: 30

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/23 # TkRefal5Mode/25 t.ModePos#1/28 {REMOVED TILE} )/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtensionChain-AfterResult/4 } Tile{ AsIs: s.NewMode#1/30 } Tile{ AsIs: (/8 AsIs: e.Errors#1/14 AsIs: )/9 AsIs: t.Result#1/10 AsIs: (/12 AsIs: # TkColon/20 AsIs: t.ColonPos#1/26 AsIs: )/13 } Tile{ AsIs: e.Tokens#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx ( # TkColon t.idx ) ( # TkOpenBlock t.idx ) e.idx
    // </0 & ExtensionChain-AfterResult/4 s.Mode#1/5 (/8 e.Errors#1/14 )/9 t.Result#1/10 (/12 # TkColon/20 t.ColonPos#1/26 )/13 (/23 # TkOpenBlock/25 t.BlockPos#1/28 )/24 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkColon, context[18], context[19] );
    if( ! context[20] )
      continue;
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[16], context[17] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  ident_TkOpenBlock, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Errors#1 as range 14
    // closed e.Tokens#1 as range 16
    context[27] = refalrts::tvar_left( context[26], context[18], context[19] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    context[29] = refalrts::tvar_left( context[28], context[21], context[22] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: t.Result#1: 10
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.ColonPos#1: 26
    //DEBUG: t.BlockPos#1: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} t.ColonPos#1/26 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterBlock/4 } Tile{ AsIs: (/8 AsIs: e.Errors#1/14 AsIs: )/9 AsIs: t.Result#1/10 HalfReuse: </12 HalfReuse: & Block/20 } Tile{ HalfReuse: s.Mode1 #5/13 AsIs: (/23 AsIs: # TkOpenBlock/25 AsIs: t.BlockPos#1/28 AsIs: )/24 AsIs: e.Tokens#1/16 AsIs: >/1 } >/30 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterBlock.ref.function );
    refalrts::reinit_open_call( context[12] );
    refalrts::reinit_name( context[20], ref_Block.ref.function );
    refalrts::reinit_svar( context[13], context[5] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[12] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    res = refalrts::splice_evar( res, context[8], context[20] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) t.idx t.idx e.idx
  // </0 & ExtensionChain-AfterResult/4 s.Mode#1/5 (/8 e.Errors#1/14 )/9 t.Result#1/10 t.NextToken#1/12 e.Tokens#1/16 >/1
  context[14] = context[6];
  context[15] = context[7];
  context[16] = context[2];
  context[17] = context[3];
  // closed e.Errors#1 as range 14
  // closed e.Tokens#1 as range 16
  //DEBUG: t.Result#1: 10
  //DEBUG: t.NextToken#1: 12
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 14
  //DEBUG: e.Tokens#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: [*]/0 Reuse: & ExtensionChain-AfterResult$4:1/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Errors#1/14 AsIs: )/9 AsIs: t.Result#1/10 } (/19 Tile{ AsIs: e.Tokens#1/16 } )/20 {*}/21 Tile{ AsIs: t.NextToken#1/12 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[21], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_ExtensionChainm_AfterResult_S4B1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[21] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtensionChainm_AfterResult("ExtensionChain-AfterResult", 1557407522U, 1427032781U, func_ExtensionChainm_AfterResult);


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

static refalrts::NativeReference nat_ref_ExtensionChainm_AfterBlock("ExtensionChain-AfterBlock", 1557407522U, 1427032781U, func_ExtensionChainm_AfterBlock);


static refalrts::FnResult func_gen_ExtensionChainm_AfterPattern_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ t.$ s.$ ( e.$ ) t.$ t.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ t.$ s.$ ( e.$ ) t.$ t.$
  // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 t.idxTTV#0/15 s.idxTTVV#0/17 (/20 e.idxTTVVVB#0/18 )/21 t.idxTTVVVT#0/22 t.idxTTVVVTV#0/24 >/1
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
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  // closed e.idxTTVVVB#0 as range 18
  context[23] = refalrts::tvar_left( context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[25] = refalrts::tvar_left( context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( e.idx ) t.idx t.idx s.idx ( e.idx ) t.idx ( # TkComma t.idx )
    // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.Errors#1/26 )/8 (/11 e.PatternErrors#1/28 )/12 t.Result#1/13 t.Pattern#1/15 s.Mode#1/17 (/20 e.Tokens#1/30 )/21 t.NextToken#1/22 (/24 # TkComma/34 t.Pos#2/35 )/25 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[18];
    context[31] = context[19];
    context[32] = 0;
    context[33] = 0;
    if( ! refalrts::brackets_term( context[32], context[33], context[24] ) )
      continue;
    context[34] = refalrts::ident_left(  ident_TkComma, context[32], context[33] );
    if( ! context[34] )
      continue;
    // closed e.Errors#1 as range 26
    // closed e.PatternErrors#1 as range 28
    // closed e.Tokens#1 as range 30
    context[36] = refalrts::tvar_left( context[35], context[32], context[33] );
    if( ! context[36] )
      continue;
    if( ! refalrts::empty_seq( context[32], context[33] ) )
      continue;
    //DEBUG: t.Result#1: 13
    //DEBUG: t.Pattern#1: 15
    //DEBUG: t.NextToken#1: 22
    //DEBUG: s.Mode#1: 17
    //DEBUG: e.Errors#1: 26
    //DEBUG: e.PatternErrors#1: 28
    //DEBUG: e.Tokens#1: 30
    //DEBUG: t.Pos#2: 35

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/20 {REMOVED TILE} )/21 t.NextToken#1/22 {REMOVED TILE} t.Pos#2/35 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterExtensionChain/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/26 } Tile{ AsIs: e.PatternErrors#1/28 } Tile{ AsIs: )/12 AsIs: t.Result#1/13 AsIs: t.Pattern#1/15 } Tile{ HalfReuse: </24 HalfReuse: & ExtensionChain/34 } Tile{ AsIs: s.Mode#1/17 } Tile{ AsIs: e.Tokens#1/30 } Tile{ HalfReuse: >/25 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterExtensionChain.ref.function );
    refalrts::reinit_open_call( context[24] );
    refalrts::reinit_name( context[34], ref_ExtensionChain.ref.function );
    refalrts::reinit_close_call( context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[25];
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[24], context[34] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) t.idx t.idx s.idx ( e.idx ) t.idx ( # TkAssign t.idx )
    // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.Errors#1/26 )/8 (/11 e.PatternErrors#1/28 )/12 t.Result#1/13 t.Pattern#1/15 s.Mode#1/17 (/20 e.Tokens#1/30 )/21 t.NextToken#1/22 (/24 # TkAssign/34 t.Pos#2/35 )/25 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[18];
    context[31] = context[19];
    context[32] = 0;
    context[33] = 0;
    if( ! refalrts::brackets_term( context[32], context[33], context[24] ) )
      continue;
    context[34] = refalrts::ident_left(  ident_TkAssign, context[32], context[33] );
    if( ! context[34] )
      continue;
    // closed e.Errors#1 as range 26
    // closed e.PatternErrors#1 as range 28
    // closed e.Tokens#1 as range 30
    context[36] = refalrts::tvar_left( context[35], context[32], context[33] );
    if( ! context[36] )
      continue;
    if( ! refalrts::empty_seq( context[32], context[33] ) )
      continue;
    //DEBUG: t.Result#1: 13
    //DEBUG: t.Pattern#1: 15
    //DEBUG: t.NextToken#1: 22
    //DEBUG: s.Mode#1: 17
    //DEBUG: e.Errors#1: 26
    //DEBUG: e.PatternErrors#1: 28
    //DEBUG: e.Tokens#1: 30
    //DEBUG: t.Pos#2: 35

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/20 {REMOVED TILE} )/21 t.NextToken#1/22 {REMOVED TILE} t.Pos#2/35 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterPattern-AfterResult/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/26 } Tile{ AsIs: e.PatternErrors#1/28 } Tile{ AsIs: )/12 AsIs: t.Result#1/13 AsIs: t.Pattern#1/15 } Tile{ HalfReuse: </24 HalfReuse: & Result/34 } Tile{ AsIs: s.Mode#1/17 } Tile{ AsIs: e.Tokens#1/30 } Tile{ HalfReuse: >/25 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterPatternm_AfterResult.ref.function );
    refalrts::reinit_open_call( context[24] );
    refalrts::reinit_name( context[34], ref_Result.ref.function );
    refalrts::reinit_close_call( context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[25];
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[24], context[34] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) t.idx t.idx s.idx ( e.idx ) t.idx ( # TkColon t.idx )
    // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.Errors#1/26 )/8 (/11 e.PatternErrors#1/28 )/12 t.Result#1/13 t.Pattern#1/15 s.Mode#1/17 (/20 e.Tokens#1/30 )/21 t.NextToken#1/22 (/24 # TkColon/34 t.Pos#2/35 )/25 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[18];
    context[31] = context[19];
    context[32] = 0;
    context[33] = 0;
    if( ! refalrts::brackets_term( context[32], context[33], context[24] ) )
      continue;
    context[34] = refalrts::ident_left(  ident_TkColon, context[32], context[33] );
    if( ! context[34] )
      continue;
    // closed e.Errors#1 as range 26
    // closed e.PatternErrors#1 as range 28
    // closed e.Tokens#1 as range 30
    context[36] = refalrts::tvar_left( context[35], context[32], context[33] );
    if( ! context[36] )
      continue;
    if( ! refalrts::empty_seq( context[32], context[33] ) )
      continue;
    //DEBUG: t.Result#1: 13
    //DEBUG: t.Pattern#1: 15
    //DEBUG: t.NextToken#1: 22
    //DEBUG: s.Mode#1: 17
    //DEBUG: e.Errors#1: 26
    //DEBUG: e.PatternErrors#1: 28
    //DEBUG: e.Tokens#1: 30
    //DEBUG: t.Pos#2: 35

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterExtensionChain/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/26 } Tile{ AsIs: e.PatternErrors#1/28 } Tile{ AsIs: (/24 Reuse: # Error/34 AsIs: t.Pos#2/35 HalfReuse: 'M'/25 HalfReuse: 'i'/1 } Tile{ HalfReuse: 's'/11 }"sed "/37 Tile{ HalfReuse: '\''/20 }",\'"/39 Tile{ AsIs: )/8 } Tile{ AsIs: )/12 AsIs: t.Result#1/13 AsIs: t.Pattern#1/15 } </41 & ExtensionChain/42 Tile{ HalfReuse: s.Mode1 #17/21 AsIs: t.NextToken#1/22 } Tile{ AsIs: e.Tokens#1/30 } >/43 >/44 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[37], context[38], "sed ", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[39], context[40], ",\'", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[42], ref_ExtensionChain.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[44] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterExtensionChain.ref.function );
    refalrts::update_ident( context[34], ident_Error );
    refalrts::reinit_char( context[25], 'M' );
    refalrts::reinit_char( context[1], 'i' );
    refalrts::reinit_char( context[11], 's' );
    refalrts::reinit_char( context[20], '\'' );
    refalrts::reinit_svar( context[21], context[17] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[41] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[24], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[24], context[1] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) t.idx t.idx s.idx ( e.idx ) t.idx ( # TkSemicolon t.idx )
    // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.Errors#1/26 )/8 (/11 e.PatternErrors#1/28 )/12 t.Result#1/13 t.Pattern#1/15 s.Mode#1/17 (/20 e.Tokens#1/30 )/21 t.NextToken#1/22 (/24 # TkSemicolon/34 t.Pos#2/35 )/25 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[18];
    context[31] = context[19];
    context[32] = 0;
    context[33] = 0;
    if( ! refalrts::brackets_term( context[32], context[33], context[24] ) )
      continue;
    context[34] = refalrts::ident_left(  ident_TkSemicolon, context[32], context[33] );
    if( ! context[34] )
      continue;
    // closed e.Errors#1 as range 26
    // closed e.PatternErrors#1 as range 28
    // closed e.Tokens#1 as range 30
    context[36] = refalrts::tvar_left( context[35], context[32], context[33] );
    if( ! context[36] )
      continue;
    if( ! refalrts::empty_seq( context[32], context[33] ) )
      continue;
    //DEBUG: t.Result#1: 13
    //DEBUG: t.Pattern#1: 15
    //DEBUG: t.NextToken#1: 22
    //DEBUG: s.Mode#1: 17
    //DEBUG: e.Errors#1: 26
    //DEBUG: e.PatternErrors#1: 28
    //DEBUG: e.Tokens#1: 30
    //DEBUG: t.Pos#2: 35

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtensionChain-AfterPattern-AfterResult/4 AsIs: (/7 } Tile{ AsIs: e.Errors#1/26 } Tile{ AsIs: e.PatternErrors#1/28 } Tile{ AsIs: (/24 Reuse: # Error/34 AsIs: t.Pos#2/35 HalfReuse: 'M'/25 HalfReuse: 'i'/1 } Tile{ HalfReuse: 's'/11 }"sed "/37 Tile{ HalfReuse: '\''/20 }"=\'"/39 Tile{ AsIs: )/8 } Tile{ AsIs: )/12 AsIs: t.Result#1/13 AsIs: t.Pattern#1/15 } </41 & Result/42 Tile{ HalfReuse: s.Mode1 #17/21 AsIs: t.NextToken#1/22 } Tile{ AsIs: e.Tokens#1/30 } >/43 >/44 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[37], context[38], "sed ", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[39], context[40], "=\'", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[41] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[42], ref_Result.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[44] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExtensionChainm_AfterPatternm_AfterResult.ref.function );
    refalrts::update_ident( context[34], ident_Error );
    refalrts::reinit_char( context[25], 'M' );
    refalrts::reinit_char( context[1], 'i' );
    refalrts::reinit_char( context[11], 's' );
    refalrts::reinit_char( context[20], '\'' );
    refalrts::reinit_svar( context[21], context[17] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[41] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[24], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[43], context[44] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[12], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[24], context[1] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) t.idx t.idx s.idx ( e.idx ) t.idx t.idx
  // </0 & ExtensionChain-AfterPattern:1/4 (/7 e.Errors#1/26 )/8 (/11 e.PatternErrors#1/28 )/12 t.Result#1/13 t.Pattern#1/15 s.Mode#1/17 (/20 e.Tokens#1/30 )/21 t.NextToken#1/22 t.Unexpected#2/24 >/1
  context[26] = context[5];
  context[27] = context[6];
  context[28] = context[9];
  context[29] = context[10];
  context[30] = context[18];
  context[31] = context[19];
  // closed e.Errors#1 as range 26
  // closed e.PatternErrors#1 as range 28
  // closed e.Tokens#1 as range 30
  //DEBUG: t.Result#1: 13
  //DEBUG: t.Pattern#1: 15
  //DEBUG: t.NextToken#1: 22
  //DEBUG: t.Unexpected#2: 24
  //DEBUG: s.Mode#1: 17
  //DEBUG: e.Errors#1: 26
  //DEBUG: e.PatternErrors#1: 28
  //DEBUG: e.Tokens#1: 30

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NextToken#1/22 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: e.Errors#1/26 } Tile{ AsIs: e.PatternErrors#1/28 } Tile{ AsIs: </0 Reuse: & UnexpectedTokenInSentence/4 } Tile{ AsIs: t.Unexpected#2/24 AsIs: >/1 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: (/20 } Tile{ HalfReuse: # Condition/12 AsIs: t.Result#1/13 } (/32 Tile{ AsIs: )/21 } Tile{ AsIs: t.Pattern#1/15 } )/33 (/34 )/35 (/36 )/37 )/38 t.Unexpected#2/24/39 Tile{ AsIs: e.Tokens#1/30 } Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[39], context[40], context[24], context[25]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedTokenInSentence.ref.function );
  refalrts::reinit_ident( context[12], ident_Condition );
  refalrts::link_brackets( context[11], context[38] );
  refalrts::link_brackets( context[36], context[37] );
  refalrts::link_brackets( context[34], context[35] );
  refalrts::link_brackets( context[20], context[33] );
  refalrts::link_brackets( context[32], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[33], context[40] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[24], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtensionChainm_AfterPattern_B1("ExtensionChain-AfterPattern:1", 1557407522U, 1427032781U, func_gen_ExtensionChainm_AfterPattern_B1);


static refalrts::FnResult func_ExtensionChainm_AfterPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ExtensionChain-AfterPattern/4 s.Mode#1/5 (/8 e.Errors#1/6 )/9 t.Result#1/10 (/14 e.PatternErrors#1/12 )/15 t.Pattern#1/16 t.NextToken#1/18 e.Tokens#1/2 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.PatternErrors#1 as range 12
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 6
  //DEBUG: t.Result#1: 10
  //DEBUG: e.PatternErrors#1: 12
  //DEBUG: t.Pattern#1: 16
  //DEBUG: t.NextToken#1: 18
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & ExtensionChain-AfterPattern:1/20 Tile{ AsIs: (/8 AsIs: e.Errors#1/6 AsIs: )/9 } Tile{ AsIs: (/14 AsIs: e.PatternErrors#1/12 AsIs: )/15 } Tile{ AsIs: t.Result#1/10 } Tile{ AsIs: t.Pattern#1/16 } Tile{ AsIs: s.Mode#1/5 } (/21 Tile{ AsIs: e.Tokens#1/2 } )/22 Tile{ AsIs: t.NextToken#1/18 } {*}/23 t.NextToken#1/18/24 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[20], ref_gen_ExtensionChainm_AfterPattern_B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[23], context[4] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[24], context[25], context[18], context[19]))
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  refalrts::wrap_closure( context[23] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtensionChainm_AfterPattern("ExtensionChain-AfterPattern", 1557407522U, 1427032781U, func_ExtensionChainm_AfterPattern);


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

static refalrts::NativeReference nat_ref_ExtensionChainm_AfterExtensionChain("ExtensionChain-AfterExtensionChain", 1557407522U, 1427032781U, func_ExtensionChainm_AfterExtensionChain);


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

static refalrts::NativeReference nat_ref_ExtensionChainm_AfterPatternm_AfterResult("ExtensionChain-AfterPattern-AfterResult", 1557407522U, 1427032781U, func_ExtensionChainm_AfterPatternm_AfterResult);


static refalrts::FnResult func_Pattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Pattern/4 s.Mode#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression/4 AsIs: s.Mode#1/5 } # Pattern/6 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[6], ident_Pattern ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Expression.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Pattern("Pattern", 1557407522U, 1427032781U, func_Pattern);


static refalrts::FnResult func_Result(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & Result/4 s.Mode#1/5 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression/4 AsIs: s.Mode#1/5 } # Result/6 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[6], ident_Result ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Expression.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Result("Result", 1557407522U, 1427032781U, func_Result);


static refalrts::FnResult func_Expression(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Expression/4 s.Mode#1/5 s.Kind#1/6 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </7 & Expression-CheckBrackets/8 s.Mode#1/5/9 s.Kind#1/6/10 Tile{ AsIs: </0 Reuse: & Expression-Aux/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: e.Tokens#1/2 AsIs: >/1 } >/11 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Expressionm_CheckBrackets.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[9], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Expressionm_Aux.ref.function );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expression("Expression", 1557407522U, 1427032781U, func_Expression);


static refalrts::FnResult func_Expressionm_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & Expression-Aux/4 s.Mode#1/5 s.Kind#1/6 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } (/7 )/8 (/9 )/10 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoExpression.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expressionm_Aux("Expression-Aux", 1557407522U, 1427032781U, func_Expressionm_Aux);


static refalrts::FnResult func_gen_DoExpression_B1S10B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: s.$ s.$ ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
  // </0 & DoExpression:1$10:1/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 t.idxVVT#0/11 (/15 e.idxVVTVB#0/13 )/16 (/19 e.idxVVTVTB#0/17 )/20 s.idxVVTVTT#0/21 >/1
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
  // closed e.idxVVTVB#0 as range 13
  // closed e.idxVVTVTB#0 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx s.idx ( e.idx ) t.idx ( e.idx ) ( e.idx ) # Classic
    // </0 & DoExpression:1$10:1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/22 )/10 t.Pos#2/11 (/15 e.Collected#1/24 )/16 (/19 e.Tokens#1/26 )/20 # Classic/21 >/1
    context[22] = context[7];
    context[23] = context[8];
    context[24] = context[13];
    context[25] = context[14];
    context[26] = context[17];
    context[27] = context[18];
    if( ! refalrts::ident_term(  ident_Classic, context[21] ) )
      continue;
    // closed e.Errors#1 as range 22
    // closed e.Collected#1 as range 24
    // closed e.Tokens#1 as range 26
    //DEBUG: t.Pos#2: 11
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Errors#1: 22
    //DEBUG: e.Collected#1: 24
    //DEBUG: e.Tokens#1: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Errors#1/22 HalfReuse: (/10 } # Error/28 Tile{ AsIs: t.Pos#2/11 } '\''/29 Tile{ HalfReuse: '&'/19 }"\' is not where-with sign"/30 Tile{ AsIs: )/20 HalfReuse: )/21 } Tile{ AsIs: (/15 AsIs: e.Collected#1/24 AsIs: )/16 } Tile{ AsIs: e.Tokens#1/26 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[28], ident_Error ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], '\'' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[30], context[31], "\' is not where-with sign", 24 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_char( context[19], '&' );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[9], context[21] );
    refalrts::link_brackets( context[10], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx ( e.idx ) t.idx ( e.idx ) ( e.idx ) # Extended
  // </0 & DoExpression:1$10:1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/22 )/10 t.Pos#2/11 (/15 e.Collected#1/24 )/16 (/19 e.Tokens#1/26 )/20 # Extended/21 >/1
  context[22] = context[7];
  context[23] = context[8];
  context[24] = context[13];
  context[25] = context[14];
  context[26] = context[17];
  context[27] = context[18];
  if( ! refalrts::ident_term(  ident_Extended, context[21] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 22
  // closed e.Collected#1 as range 24
  // closed e.Tokens#1 as range 26
  //DEBUG: t.Pos#2: 11
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Errors#1: 22
  //DEBUG: e.Collected#1: 24
  //DEBUG: e.Tokens#1: 26

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} )/20 # Extended/21 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression-AfterAmpersand/4 } Tile{ AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Errors#1/22 AsIs: )/10 } Tile{ AsIs: (/15 AsIs: e.Collected#1/24 AsIs: )/16 } Tile{ AsIs: t.Pos#2/11 } Tile{ AsIs: e.Tokens#1/26 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_DoExpressionm_AfterAmpersand.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_B1S10B1("DoExpression:1$10:1", 1557407522U, 1427032781U, func_gen_DoExpression_B1S10B1);


static refalrts::FnResult func_gen_DoExpression_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & DoExpression:1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkName t.idx e.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkName/11 t.Pos#2/26 e.Name#2/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkName, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 16
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[24], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[7], context[8] );
    if( ! context[27] )
      continue;
    // closed e.Name#2 as range 7
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Kind#1: 25
    //DEBUG: t.Pos#2: 26
    //DEBUG: e.Name#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkName/11 t.Pos#2/26 {REMOVED TILE} )/10 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 AsIs: (/18 AsIs: e.Collected#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/14 } Tile{ AsIs: e.Name#2/7 } Tile{ AsIs: )/15 HalfReuse: )/9 } Tile{ AsIs: e.Tokens#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[19] );
    refalrts::reinit_ident( context[14], ident_TkIdentifier );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[18], context[9] );
    refalrts::link_brackets( context[19], context[15] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[15], context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkCompound t.idx e.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkCompound/11 t.Pos#2/26 e.Symbols#2/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkCompound, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 16
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[24], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[7], context[8] );
    if( ! context[27] )
      continue;
    // closed e.Symbols#2 as range 7
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Kind#1: 25
    //DEBUG: t.Pos#2: 26
    //DEBUG: e.Symbols#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkCompound/11 t.Pos#2/26 {REMOVED TILE} )/10 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 AsIs: (/18 AsIs: e.Collected#1/16 HalfReuse: (/19 HalfReuse: # TkIdentifier/14 } Tile{ AsIs: e.Symbols#2/7 } Tile{ AsIs: )/15 HalfReuse: )/9 } Tile{ AsIs: e.Tokens#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[19] );
    refalrts::reinit_ident( context[14], ident_TkIdentifier );
    refalrts::reinit_close_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[18], context[9] );
    refalrts::link_brackets( context[19], context[15] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[15], context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkMacroDigit t.idx s.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkMacroDigit/11 t.Pos#2/26 s.Number#2/28 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkMacroDigit, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 16
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[24], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[7], context[8] );
    if( ! context[27] )
      continue;
    if( ! refalrts::svar_left( context[28], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Kind#1: 25
    //DEBUG: t.Pos#2: 26
    //DEBUG: s.Number#2: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/15 {REMOVED TILE} # TkMacroDigit/11 t.Pos#2/26 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 AsIs: (/18 AsIs: e.Collected#1/16 HalfReuse: (/19 HalfReuse: # TkNumber/14 } Tile{ AsIs: s.Number#2/28 AsIs: )/10 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/12 } Tile{ HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[19] );
    refalrts::reinit_ident( context[14], ident_TkNumber );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[18], context[1] );
    refalrts::link_brackets( context[19], context[10] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[28], context[1] );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkChar t.idx s.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkChar/11 t.Pos#2/26 s.Char#2/28 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkChar, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 16
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[24], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[7], context[8] );
    if( ! context[27] )
      continue;
    if( ! refalrts::svar_left( context[28], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Kind#1: 25
    //DEBUG: t.Pos#2: 26
    //DEBUG: s.Char#2: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/15 {REMOVED TILE} # TkChar/11 t.Pos#2/26 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 AsIs: (/18 AsIs: e.Collected#1/16 HalfReuse: (/19 HalfReuse: # TkChar/14 } Tile{ AsIs: s.Char#2/28 AsIs: )/10 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/12 } Tile{ HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[19] );
    refalrts::reinit_ident( context[14], ident_TkChar );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[18], context[1] );
    refalrts::link_brackets( context[19], context[10] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[28], context[1] );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkVariable t.idx s.idx e.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkVariable/11 t.Pos#2/26 s.VarType#2/28 e.Index#2/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkVariable, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 16
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[24], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[7], context[8] );
    if( ! context[27] )
      continue;
    if( ! refalrts::svar_left( context[28], context[7], context[8] ) )
      continue;
    // closed e.Index#2 as range 7
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Kind#1: 25
    //DEBUG: t.Pos#2: 26
    //DEBUG: s.VarType#2: 28
    //DEBUG: e.Index#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/15 {REMOVED TILE} # TkVariable/11 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 AsIs: (/18 AsIs: e.Collected#1/16 HalfReuse: (/19 HalfReuse: # TkVariable/14 } Tile{ AsIs: t.Pos#2/26 AsIs: s.VarType#2/28 AsIs: e.Index#2/7 AsIs: )/10 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/12 } Tile{ HalfReuse: >/9 } Tile{ ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[19] );
    refalrts::reinit_ident( context[14], ident_TkVariable );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[18], context[1] );
    refalrts::link_brackets( context[19], context[10] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[26], context[1] );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkOpenBracket t.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkOpenBracket/11 t.Pos#2/26 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkOpenBracket, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 16
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[24], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[7], context[8] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Kind#1: 25
    //DEBUG: t.Pos#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#2/26 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression-AfterBracket/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 AsIs: (/18 AsIs: e.Collected#1/16 AsIs: )/19 HalfReuse: </14 } Tile{ HalfReuse: & Expression-Aux/15 HalfReuse: s.Mode1 #24/9 HalfReuse: s.Kind1 #25/11 } Tile{ AsIs: e.Tokens#1/12 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpressionm_AfterBracket.ref.function );
    refalrts::reinit_open_call( context[14] );
    refalrts::reinit_name( context[15], ref_Expressionm_Aux.ref.function );
    refalrts::reinit_svar( context[9], context[24] );
    refalrts::reinit_svar( context[11], context[25] );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[15], context[11] );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkOpenCall t.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkOpenCall/11 t.Pos#2/26 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkOpenCall, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 16
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[24], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[7], context[8] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Kind#1: 25
    //DEBUG: t.Pos#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression-AfterCall/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 HalfReuse: </23 HalfReuse: & ClassicError/18 } s.Mode#1/24/28 t.Pos#2/26/29"Identifier expected after \'<\'"/31 >/33 Tile{ AsIs: )/15 AsIs: (/9 } Tile{ AsIs: e.Collected#1/16 } Tile{ HalfReuse: )/11 AsIs: t.Pos#2/26 } (/34 Tile{ AsIs: )/19 HalfReuse: </14 } & Expression-Aux/35 s.Mode#1/24/36 s.Kind#1/25/37 Tile{ AsIs: e.Tokens#1/12 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[28], context[24]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[29], context[30], context[26], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[31], context[32], "Identifier expected after \'<\'", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ref_Expressionm_Aux.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[24]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[37], context[25]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpressionm_AfterCall.ref.function );
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_name( context[18], ref_ClassicError.ref.function );
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_open_call( context[14] );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[34], context[19] );
    refalrts::link_brackets( context[9], context[11] );
    refalrts::link_brackets( context[22], context[15] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[19], context[14] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[11], context[27] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[15], context[9] );
    res = refalrts::splice_evar( res, context[28], context[33] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkOpenCall t.idx e.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkOpenCall/11 t.Pos#2/26 e.FuncName#2/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkOpenCall, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 16
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[24], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[7], context[8] );
    if( ! context[27] )
      continue;
    // closed e.FuncName#2 as range 7
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Kind#1: 25
    //DEBUG: t.Pos#2: 26
    //DEBUG: e.FuncName#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression-AfterCall/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 AsIs: (/18 AsIs: e.Collected#1/16 AsIs: )/19 } t.Pos#2/26/28 Tile{ HalfReuse: (/15 AsIs: (/9 Reuse: # TkName/11 AsIs: t.Pos#2/26 AsIs: e.FuncName#2/7 AsIs: )/10 HalfReuse: )/1 } </30 Tile{ HalfReuse: & Expression-Aux/14 } s.Mode#1/24/31 s.Kind#1/25/32 Tile{ AsIs: e.Tokens#1/12 } >/33 >/34 Tile{ ]] }
    if (! refalrts::copy_evar(context[28], context[29], context[26], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[24]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[25]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpressionm_AfterCall.ref.function );
    refalrts::reinit_open_bracket( context[15] );
    refalrts::update_ident( context[11], ident_TkName );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_name( context[14], ref_Expressionm_Aux.ref.function );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[15], context[1] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkRefal5Mode t.idx s.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkRefal5Mode/11 t.Pos#2/26 s.NewMode#2/28 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkRefal5Mode, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 16
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[24], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[7], context[8] );
    if( ! context[27] )
      continue;
    if( ! refalrts::svar_left( context[28], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Kind#1: 25
    //DEBUG: t.Pos#2: 26
    //DEBUG: s.NewMode#2: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/24 {REMOVED TILE} (/14 {REMOVED TILE} )/15 (/9 # TkRefal5Mode/11 t.Pos#2/26 {REMOVED TILE} )/10 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 } Tile{ AsIs: s.NewMode#2/28 } Tile{ AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 AsIs: (/18 AsIs: e.Collected#1/16 AsIs: )/19 } Tile{ AsIs: e.Tokens#1/12 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[25], context[19] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkAmpersand t.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkAmpersand/11 t.Pos#2/26 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkAmpersand, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 16
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[24], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[7], context[8] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Kind#1: 25
    //DEBUG: t.Pos#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 } Tile{ HalfReuse: [*]/0 Reuse: & DoExpression:1$10:1/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 } Tile{ AsIs: t.Pos#2/26 } Tile{ AsIs: (/18 AsIs: e.Collected#1/16 AsIs: )/19 AsIs: (/14 AsIs: e.Tokens#1/12 AsIs: )/15 HalfReuse: {*}/9 HalfReuse: s.Mode1 #24/11 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_DoExpression_B1S10B1.ref.function );
    refalrts::reinit_unwrapped_closure( context[9], context[0] );
    refalrts::reinit_svar( context[11], context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[11] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[0], context[23] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    refalrts::wrap_closure( context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkOpenBlock t.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkOpenBlock/11 t.Pos#2/26 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkOpenBlock, context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_right( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[5], context[6] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 20
    // closed e.Collected#1 as range 16
    // closed e.Tokens#1 as range 12
    if( ! refalrts::svar_left( context[24], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[25], context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[27] = refalrts::tvar_left( context[26], context[7], context[8] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Errors#1: 20
    //DEBUG: e.Collected#1: 16
    //DEBUG: e.Tokens#1: 12
    //DEBUG: s.Mode#1: 24
    //DEBUG: s.Kind#1: 25
    //DEBUG: t.Pos#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/9 # TkOpenBlock/11 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression:1$11?1?0/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 AsIs: (/18 AsIs: e.Collected#1/16 AsIs: )/19 AsIs: (/14 AsIs: e.Tokens#1/12 AsIs: )/15 } Tile{ AsIs: t.Pos#2/26 HalfReuse: s.Kind1 #25/10 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_gen_DoExpression_B1S11C1C0.ref.function );
    refalrts::reinit_svar( context[10], context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & DoExpression:1/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression:1$11?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_DoExpression_B1S11C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_B1("DoExpression:1", 1557407522U, 1427032781U, func_gen_DoExpression_B1);


static refalrts::FnResult func_gen_DoExpression_B1S11C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  //FAST GEN: s.$ s.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & DoExpression:1$11?1?0/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 (/13 e.idxVVTB#0/11 )/14 (/17 e.idxVVTTB#0/15 )/18 t.idxVVTTT#0/19 e.idxVVTTTV#0/2 >/1
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
  // closed e.idxVVB#0 as range 7
  // closed e.idxVVTB#0 as range 11
  // closed e.idxVVTTB#0 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVTTTV#0 as range 2
  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) t.idx # Result
    // </0 & DoExpression:1$11?1?0/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/21 )/10 (/13 e.Collected#1/23 )/14 (/17 e.Tokens#1/25 )/18 t.Pos#2/19 # Result/29 >/1
    context[21] = context[7];
    context[22] = context[8];
    context[23] = context[11];
    context[24] = context[12];
    context[25] = context[15];
    context[26] = context[16];
    context[27] = context[2];
    context[28] = context[3];
    context[29] = refalrts::ident_left(  ident_Result, context[27], context[28] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    // closed e.Errors#1 as range 21
    // closed e.Collected#1 as range 23
    // closed e.Tokens#1 as range 25
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Errors#1: 21
    //DEBUG: e.Collected#1: 23
    //DEBUG: e.Tokens#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression-AfterBlock/4 AsIs: s.Mode#1/5 } Tile{ AsIs: (/9 } Tile{ AsIs: e.Errors#1/21 } </30 & ClassicError/31 s.Mode#1/5/32 t.Pos#2/19/33"Do you forged \':\' before block?"/35 >/37 Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/23 AsIs: )/14 HalfReuse: </17 } & Block/38 s.Mode#1/5/39 (/40 Tile{ HalfReuse: # TkOpenBlock/18 AsIs: t.Pos#2/19 } )/41 Tile{ AsIs: e.Tokens#1/25 } Tile{ HalfReuse: >/29 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], ref_ClassicError.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[5]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[33], context[34], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[35], context[36], "Do you forged \':\' before block?", 31 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[38], ref_Block.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[39], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[41] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpressionm_AfterBlock.ref.function );
    refalrts::reinit_open_call( context[17] );
    refalrts::reinit_ident( context[18], ident_TkOpenBlock );
    refalrts::reinit_close_call( context[29] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[40], context[41] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[29];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[41], context[41] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[38], context[40] );
    res = refalrts::splice_evar( res, context[10], context[17] );
    res = refalrts::splice_evar( res, context[30], context[37] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & DoExpression:1$11?1?0/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/21 )/10 (/13 e.Collected#1/23 )/14 (/17 e.Tokens#1/25 )/18 t.Pos#2/19 e.Other#0/27 >/1
  context[21] = context[7];
  context[22] = context[8];
  context[23] = context[11];
  context[24] = context[12];
  context[25] = context[15];
  context[26] = context[16];
  context[27] = context[2];
  context[28] = context[3];
  // closed e.Errors#1 as range 21
  // closed e.Collected#1 as range 23
  // closed e.Tokens#1 as range 25
  // closed e.Other#0 as range 27
  //DEBUG: t.Pos#2: 19
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Errors#1: 21
  //DEBUG: e.Collected#1: 23
  //DEBUG: e.Tokens#1: 25
  //DEBUG: e.Other#0: 27

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Other#0/27 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression:1$11?1?1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Errors#1/21 AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/23 AsIs: )/14 AsIs: (/17 AsIs: e.Tokens#1/25 AsIs: )/18 } (/29 # TkOpenBlock/30 Tile{ AsIs: t.Pos#2/19 } )/31 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[30], ident_TkOpenBlock ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_DoExpression_B1S11C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[29], context[31] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  refalrts::splice_to_freelist_open( context[18], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_B1S11C1C0("DoExpression:1$11?1?0", 1557407522U, 1427032781U, func_gen_DoExpression_B1S11C1C0);


static refalrts::FnResult func_gen_DoExpression_B1S11C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoExpression:1$11?1?1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/7 )/10 (/13 e.Collected#1/11 )/14 (/17 e.Tokens#1/15 )/18 t.OtherToken#2/19 >/1
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
  // closed e.Errors#1 as range 7
  // closed e.Collected#1 as range 11
  // closed e.Tokens#1 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Errors#1: 7
  //DEBUG: e.Collected#1: 11
  //DEBUG: e.Tokens#1: 15
  //DEBUG: t.OtherToken#2: 19

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoExpression:1$11?1?1/4 s.Mode#1/5 s.Kind#1/6 {REMOVED TILE} (/17 {REMOVED TILE} )/18 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: e.Errors#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/11 AsIs: )/14 } Tile{ AsIs: t.OtherToken#2/19 } Tile{ AsIs: e.Tokens#1/15 } Tile{ ]] }
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_B1S11C1C1("DoExpression:1$11?1?1", 1557407522U, 1427032781U, func_gen_DoExpression_B1S11C1C1);


static refalrts::FnResult func_DoExpression(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & DoExpression/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/7 )/10 (/13 e.Collected#1/11 )/14 t.NextToken#1/15 e.Tokens#1/2 >/1
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Errors#1 as range 7
  // closed e.Collected#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Errors#1: 7
  //DEBUG: e.Collected#1: 11
  //DEBUG: t.NextToken#1: 15
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & DoExpression:1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Errors#1/7 AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/11 AsIs: )/14 } (/18 Tile{ AsIs: e.Tokens#1/2 } )/19 {*}/20 Tile{ AsIs: t.NextToken#1/15 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[20], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoExpression_B1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[17] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[14] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[20] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpression("DoExpression", 1557407522U, 1427032781U, func_DoExpression);


static refalrts::FnResult func_DoExpressionm_AfterBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 48 elems
  refalrts::Iter context[48];
  refalrts::zeros( context, 48 );
  //FAST GEN: s.$ s.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) ( s.$ t.$ e.$ ) e.$
  // </0 & DoExpression-AfterBracket/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 (/13 e.idxVVTB#0/11 )/14 (/17 e.idxVVTTB#0/15 )/18 (/21 e.idxVVTTTB#0/19 )/22 (/25 s.idxVVTTTTB#0/27 t.idxVVTTTTBV#0/28 e.idxVVTTTTBVV#0/23 )/26 e.idxVVTTTTT#0/2 >/1
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
  // closed e.idxVVB#0 as range 7
  // closed e.idxVVTB#0 as range 11
  // closed e.idxVVTTB#0 as range 15
  // closed e.idxVVTTTB#0 as range 19
  // closed e.idxVVTTTTT#0 as range 2
  if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
    return refalrts::cRecognitionImpossible;
  context[29] = refalrts::tvar_left( context[28], context[23], context[24] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVTTTTBVV#0 as range 23
  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( # TkCloseBracket t.idx ) e.idx
    // </0 & DoExpression-AfterBracket/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/30 )/10 (/13 e.Collected#1/32 )/14 (/17 e.SubexprErrors#1/34 )/18 (/21 e.BracketTerms#1/36 )/22 (/25 # TkCloseBracket/27 t.Pos#1/28 )/26 e.Tokens#1/40 >/1
    context[30] = context[7];
    context[31] = context[8];
    context[32] = context[11];
    context[33] = context[12];
    context[34] = context[15];
    context[35] = context[16];
    context[36] = context[19];
    context[37] = context[20];
    context[38] = context[23];
    context[39] = context[24];
    context[40] = context[2];
    context[41] = context[3];
    if( ! refalrts::ident_term(  ident_TkCloseBracket, context[27] ) )
      continue;
    if( ! refalrts::empty_seq( context[38], context[39] ) )
      continue;
    // closed e.Errors#1 as range 30
    // closed e.Collected#1 as range 32
    // closed e.SubexprErrors#1 as range 34
    // closed e.BracketTerms#1 as range 36
    // closed e.Tokens#1 as range 40
    //DEBUG: t.Pos#1: 28
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Errors#1: 30
    //DEBUG: e.Collected#1: 32
    //DEBUG: e.SubexprErrors#1: 34
    //DEBUG: e.BracketTerms#1: 36
    //DEBUG: e.Tokens#1: 40

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/18 (/21 {REMOVED TILE} {REMOVED TILE} (/25 # TkCloseBracket/27 t.Pos#1/28 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 } Tile{ AsIs: e.Errors#1/30 } Tile{ AsIs: e.SubexprErrors#1/34 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/32 HalfReuse: (/14 HalfReuse: # Brackets/17 } Tile{ AsIs: e.BracketTerms#1/36 } Tile{ AsIs: )/22 } Tile{ AsIs: )/26 AsIs: e.Tokens#1/40 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_ident( context[17], ident_Brackets );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[26] );
    refalrts::link_brackets( context[14], context[22] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[10], context[17] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) ( s.idx t.idx e.idx ) e.idx
  // </0 & DoExpression-AfterBracket/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/30 )/10 (/13 e.Collected#1/32 )/14 (/17 e.SubexprErrors#1/34 )/18 (/21 e.BracketTerms#1/36 )/22 (/25 s.Type#1/27 t.Pos#1/28 e.Value#1/38 )/26 e.Tokens#1/40 >/1
  context[30] = context[7];
  context[31] = context[8];
  context[32] = context[11];
  context[33] = context[12];
  context[34] = context[15];
  context[35] = context[16];
  context[36] = context[19];
  context[37] = context[20];
  context[38] = context[23];
  context[39] = context[24];
  context[40] = context[2];
  context[41] = context[3];
  // closed e.Errors#1 as range 30
  // closed e.Collected#1 as range 32
  // closed e.SubexprErrors#1 as range 34
  // closed e.BracketTerms#1 as range 36
  // closed e.Value#1 as range 38
  // closed e.Tokens#1 as range 40
  //DEBUG: t.Pos#1: 28
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: s.Type#1: 27
  //DEBUG: e.Errors#1: 30
  //DEBUG: e.Collected#1: 32
  //DEBUG: e.SubexprErrors#1: 34
  //DEBUG: e.BracketTerms#1: 36
  //DEBUG: e.Value#1: 38
  //DEBUG: e.Tokens#1: 40

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 } Tile{ AsIs: e.Errors#1/30 } Tile{ AsIs: e.SubexprErrors#1/34 } Tile{ AsIs: (/21 } # Error/42 t.Pos#1/28/43"Missed \')\'"/45 Tile{ AsIs: )/18 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/32 HalfReuse: (/14 HalfReuse: # Brackets/17 } Tile{ AsIs: e.BracketTerms#1/36 } )/47 Tile{ AsIs: )/22 AsIs: (/25 AsIs: s.Type#1/27 AsIs: t.Pos#1/28 AsIs: e.Value#1/38 AsIs: )/26 AsIs: e.Tokens#1/40 AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[42], ident_Error ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[43], context[44], context[28], context[29]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[45], context[46], "Missed \')\'", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[47] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoExpression.ref.function );
  refalrts::reinit_open_bracket( context[14] );
  refalrts::reinit_ident( context[17], ident_Brackets );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[13], context[22] );
  refalrts::link_brackets( context[14], context[47] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[21], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[22];
  res = refalrts::splice_evar( res, context[47], context[47] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[10], context[17] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[42], context[46] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpressionm_AfterBracket("DoExpression-AfterBracket", 1557407522U, 1427032781U, func_DoExpressionm_AfterBracket);


static refalrts::FnResult func_DoExpressionm_AfterCall(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 60 elems
  refalrts::Iter context[60];
  refalrts::zeros( context, 60 );
  //FAST GEN: s.$ s.$ ( e.$ ) ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( s.$ t.$ e.$ ) e.$
  // </0 & DoExpression-AfterCall/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 (/13 e.idxVVTB#0/11 )/14 t.idxVVTT#0/15 (/19 e.idxVVTTVB#0/17 )/20 (/23 e.idxVVTTVTB#0/21 )/24 (/27 e.idxVVTTVTTB#0/25 )/28 (/31 s.idxVVTTVTTTB#0/33 t.idxVVTTVTTTBV#0/34 e.idxVVTTVTTTBVV#0/29 )/32 e.idxVVTTVTTTT#0/2 >/1
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.idxVVB#0 as range 7
  // closed e.idxVVTB#0 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
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
  context[29] = 0;
  context[30] = 0;
  context[31] = refalrts::brackets_left( context[29], context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  // closed e.idxVVTTVB#0 as range 17
  // closed e.idxVVTTVTB#0 as range 21
  // closed e.idxVVTTVTTB#0 as range 25
  // closed e.idxVVTTVTTTT#0 as range 2
  if( ! refalrts::svar_left( context[33], context[29], context[30] ) )
    return refalrts::cRecognitionImpossible;
  context[35] = refalrts::tvar_left( context[34], context[29], context[30] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVTTVTTTBVV#0 as range 29
  do {
    // s.idx # Result ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkCloseCall t.idx ) e.idx
    // </0 & DoExpression-AfterCall/4 s.Mode#1/5 # Result/6 (/9 e.Errors#1/36 )/10 (/13 e.Collected#1/38 )/14 t.CallPos#1/15 (/19 e.OptionalFuncName#1/40 )/20 (/23 e.SubexprErrors#1/42 )/24 (/27 e.BracketTerms#1/44 )/28 (/31 # TkCloseCall/33 t.Pos#1/34 )/32 e.Tokens#1/48 >/1
    context[36] = context[7];
    context[37] = context[8];
    context[38] = context[11];
    context[39] = context[12];
    context[40] = context[17];
    context[41] = context[18];
    context[42] = context[21];
    context[43] = context[22];
    context[44] = context[25];
    context[45] = context[26];
    context[46] = context[29];
    context[47] = context[30];
    context[48] = context[2];
    context[49] = context[3];
    if( ! refalrts::ident_term(  ident_Result, context[6] ) )
      continue;
    if( ! refalrts::ident_term(  ident_TkCloseCall, context[33] ) )
      continue;
    if( ! refalrts::empty_seq( context[46], context[47] ) )
      continue;
    // closed e.Errors#1 as range 36
    // closed e.Collected#1 as range 38
    // closed e.OptionalFuncName#1 as range 40
    // closed e.SubexprErrors#1 as range 42
    // closed e.BracketTerms#1 as range 44
    // closed e.Tokens#1 as range 48
    //DEBUG: t.CallPos#1: 15
    //DEBUG: t.Pos#1: 34
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 36
    //DEBUG: e.Collected#1: 38
    //DEBUG: e.OptionalFuncName#1: 40
    //DEBUG: e.SubexprErrors#1: 42
    //DEBUG: e.BracketTerms#1: 44
    //DEBUG: e.Tokens#1: 48

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.CallPos#1/15 (/19 {REMOVED TILE} )/20 (/23 {REMOVED TILE} )/24 (/27 {REMOVED TILE} {REMOVED TILE} (/31 {REMOVED TILE} t.Pos#1/34 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: # Result/6 AsIs: (/9 } Tile{ AsIs: e.Errors#1/36 } Tile{ AsIs: e.SubexprErrors#1/42 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/38 HalfReuse: (/14 } Tile{ Reuse: # CallBrackets/33 } Tile{ AsIs: e.OptionalFuncName#1/40 } Tile{ AsIs: e.BracketTerms#1/44 } Tile{ AsIs: )/28 } Tile{ AsIs: )/32 AsIs: e.Tokens#1/48 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_bracket( context[14] );
    refalrts::update_ident( context[33], ident_CallBrackets );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[32] );
    refalrts::link_brackets( context[14], context[28] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[32];
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx # Pattern ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkCloseCall t.idx ) e.idx
    // </0 & DoExpression-AfterCall/4 s.Mode#1/5 # Pattern/6 (/9 e.Errors#1/36 )/10 (/13 e.Collected#1/38 )/14 t.CallPos#1/15 (/19 e.OptionalFuncName#1/40 )/20 (/23 e.SubexprErrors#1/42 )/24 (/27 e.BracketTerms#1/44 )/28 (/31 # TkCloseCall/33 t.Pos#1/34 )/32 e.Tokens#1/48 >/1
    context[36] = context[7];
    context[37] = context[8];
    context[38] = context[11];
    context[39] = context[12];
    context[40] = context[17];
    context[41] = context[18];
    context[42] = context[21];
    context[43] = context[22];
    context[44] = context[25];
    context[45] = context[26];
    context[46] = context[29];
    context[47] = context[30];
    context[48] = context[2];
    context[49] = context[3];
    if( ! refalrts::ident_term(  ident_Pattern, context[6] ) )
      continue;
    if( ! refalrts::ident_term(  ident_TkCloseCall, context[33] ) )
      continue;
    if( ! refalrts::empty_seq( context[46], context[47] ) )
      continue;
    // closed e.Errors#1 as range 36
    // closed e.Collected#1 as range 38
    // closed e.OptionalFuncName#1 as range 40
    // closed e.SubexprErrors#1 as range 42
    // closed e.BracketTerms#1 as range 44
    // closed e.Tokens#1 as range 48
    //DEBUG: t.CallPos#1: 15
    //DEBUG: t.Pos#1: 34
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 36
    //DEBUG: e.Collected#1: 38
    //DEBUG: e.OptionalFuncName#1: 40
    //DEBUG: e.SubexprErrors#1: 42
    //DEBUG: e.BracketTerms#1: 44
    //DEBUG: e.Tokens#1: 48

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#1/34 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: # Pattern/6 AsIs: (/9 } Tile{ AsIs: e.Errors#1/36 } Tile{ AsIs: e.SubexprErrors#1/42 } Tile{ AsIs: (/31 Reuse: # Error/33 } Tile{ AsIs: t.CallPos#1/15 HalfReuse: 'u'/19 }"ne"/50 Tile{ HalfReuse: 'x'/20 HalfReuse: 'p'/23 } 'e'/52 Tile{ HalfReuse: 'c'/27 }"ted \'<\' in pattern expression, maybe missed \'=\'"/53 Tile{ AsIs: )/28 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/38 HalfReuse: (/14 } # Brackets/55 Tile{ AsIs: e.OptionalFuncName#1/40 } Tile{ AsIs: e.BracketTerms#1/44 } Tile{ AsIs: )/24 } Tile{ AsIs: )/32 AsIs: e.Tokens#1/48 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[50], context[51], "ne", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[52], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[53], context[54], "ted \'<\' in pattern expression, maybe missed \'=\'", 47 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[55], ident_Brackets ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::update_ident( context[33], ident_Error );
    refalrts::reinit_char( context[19], 'u' );
    refalrts::reinit_char( context[20], 'x' );
    refalrts::reinit_char( context[23], 'p' );
    refalrts::reinit_char( context[27], 'c' );
    refalrts::reinit_open_bracket( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[32] );
    refalrts::link_brackets( context[14], context[24] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[31], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[32];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[55], context[55] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[53], context[54] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[52], context[52] );
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx # Result ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( s.idx t.idx e.idx ) e.idx
    // </0 & DoExpression-AfterCall/4 s.Mode#1/5 # Result/6 (/9 e.Errors#1/36 )/10 (/13 e.Collected#1/38 )/14 t.CallPos#1/15 (/19 e.OptionalFuncName#1/40 )/20 (/23 e.SubexprErrors#1/42 )/24 (/27 e.BracketTerms#1/44 )/28 (/31 s.Type#1/33 t.Pos#1/34 e.Value#1/46 )/32 e.Tokens#1/48 >/1
    context[36] = context[7];
    context[37] = context[8];
    context[38] = context[11];
    context[39] = context[12];
    context[40] = context[17];
    context[41] = context[18];
    context[42] = context[21];
    context[43] = context[22];
    context[44] = context[25];
    context[45] = context[26];
    context[46] = context[29];
    context[47] = context[30];
    context[48] = context[2];
    context[49] = context[3];
    if( ! refalrts::ident_term(  ident_Result, context[6] ) )
      continue;
    // closed e.Errors#1 as range 36
    // closed e.Collected#1 as range 38
    // closed e.OptionalFuncName#1 as range 40
    // closed e.SubexprErrors#1 as range 42
    // closed e.BracketTerms#1 as range 44
    // closed e.Value#1 as range 46
    // closed e.Tokens#1 as range 48
    //DEBUG: t.CallPos#1: 15
    //DEBUG: t.Pos#1: 34
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Type#1: 33
    //DEBUG: e.Errors#1: 36
    //DEBUG: e.Collected#1: 38
    //DEBUG: e.OptionalFuncName#1: 40
    //DEBUG: e.SubexprErrors#1: 42
    //DEBUG: e.BracketTerms#1: 44
    //DEBUG: e.Value#1: 46
    //DEBUG: e.Tokens#1: 48

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.CallPos#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: # Result/6 AsIs: (/9 } Tile{ AsIs: e.Errors#1/36 } Tile{ AsIs: e.SubexprErrors#1/42 } Tile{ AsIs: (/23 } Tile{ HalfReuse: # Error/19 } t.Pos#1/34/50 Tile{ HalfReuse: 'M'/27 }"issed \'>\'"/52 Tile{ AsIs: )/20 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/38 HalfReuse: (/14 } # CallBrackets/54 Tile{ AsIs: e.OptionalFuncName#1/40 } Tile{ AsIs: e.BracketTerms#1/44 } Tile{ AsIs: )/24 } Tile{ AsIs: )/28 AsIs: (/31 AsIs: s.Type#1/33 AsIs: t.Pos#1/34 AsIs: e.Value#1/46 AsIs: )/32 AsIs: e.Tokens#1/48 AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[50], context[51], context[34], context[35]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[52], context[53], "issed \'>\'", 9 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[54], ident_CallBrackets ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_ident( context[19], ident_Error );
    refalrts::reinit_char( context[27], 'M' );
    refalrts::reinit_open_bracket( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[31], context[32] );
    refalrts::link_brackets( context[13], context[28] );
    refalrts::link_brackets( context[14], context[24] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::link_brackets( context[23], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[28];
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[54], context[54] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[52], context[53] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[50], context[51] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx # Pattern ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( s.idx t.idx e.idx ) e.idx
  // </0 & DoExpression-AfterCall/4 s.Mode#1/5 # Pattern/6 (/9 e.Errors#1/36 )/10 (/13 e.Collected#1/38 )/14 t.CallPos#1/15 (/19 e.OptionalFuncName#1/40 )/20 (/23 e.SubexprErrors#1/42 )/24 (/27 e.BracketTerms#1/44 )/28 (/31 s.Type#1/33 t.Pos#1/34 e.Value#1/46 )/32 e.Tokens#1/48 >/1
  context[36] = context[7];
  context[37] = context[8];
  context[38] = context[11];
  context[39] = context[12];
  context[40] = context[17];
  context[41] = context[18];
  context[42] = context[21];
  context[43] = context[22];
  context[44] = context[25];
  context[45] = context[26];
  context[46] = context[29];
  context[47] = context[30];
  context[48] = context[2];
  context[49] = context[3];
  if( ! refalrts::ident_term(  ident_Pattern, context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 36
  // closed e.Collected#1 as range 38
  // closed e.OptionalFuncName#1 as range 40
  // closed e.SubexprErrors#1 as range 42
  // closed e.BracketTerms#1 as range 44
  // closed e.Value#1 as range 46
  // closed e.Tokens#1 as range 48
  //DEBUG: t.CallPos#1: 15
  //DEBUG: t.Pos#1: 34
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Type#1: 33
  //DEBUG: e.Errors#1: 36
  //DEBUG: e.Collected#1: 38
  //DEBUG: e.OptionalFuncName#1: 40
  //DEBUG: e.SubexprErrors#1: 42
  //DEBUG: e.BracketTerms#1: 44
  //DEBUG: e.Value#1: 46
  //DEBUG: e.Tokens#1: 48

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: # Pattern/6 AsIs: (/9 } Tile{ AsIs: e.Errors#1/36 } Tile{ AsIs: e.SubexprErrors#1/42 } Tile{ AsIs: (/23 } # Error/50 Tile{ AsIs: t.CallPos#1/15 HalfReuse: 'u'/19 }"nexpected \'<\' in pattern expression, maybe missed \'=\'"/51 Tile{ AsIs: )/24 AsIs: (/27 } # Error/53 t.Pos#1/34/54"Missed \')\'"/56 Tile{ AsIs: )/20 } Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/38 HalfReuse: (/14 } # Brackets/58 Tile{ AsIs: e.OptionalFuncName#1/40 } Tile{ AsIs: e.BracketTerms#1/44 } )/59 Tile{ AsIs: )/28 AsIs: (/31 AsIs: s.Type#1/33 AsIs: t.Pos#1/34 AsIs: e.Value#1/46 AsIs: )/32 AsIs: e.Tokens#1/48 AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[50], ident_Error ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[51], context[52], "nexpected \'<\' in pattern expression, maybe missed \'=\'", 53 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[53], ident_Error ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[54], context[55], context[34], context[35]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[56], context[57], "Missed \')\'", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[58], ident_Brackets ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[59] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoExpression.ref.function );
  refalrts::reinit_char( context[19], 'u' );
  refalrts::reinit_open_bracket( context[14] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[13], context[28] );
  refalrts::link_brackets( context[14], context[59] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::link_brackets( context[27], context[20] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[28];
  res = refalrts::splice_evar( res, context[59], context[59] );
  res = refalrts::splice_evar( res, context[44], context[45] );
  res = refalrts::splice_evar( res, context[40], context[41] );
  res = refalrts::splice_evar( res, context[58], context[58] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[53], context[57] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[51], context[52] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[50], context[50] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[42], context[43] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpressionm_AfterCall("DoExpression-AfterCall", 1557407522U, 1427032781U, func_DoExpressionm_AfterCall);


static refalrts::FnResult func_DoExpressionm_AfterAmpersand(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  //FAST GEN: s.$ ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & DoExpression-AfterAmpersand/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 t.idxVTT#0/14 e.idxVTTV#0/2 >/1
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
  // closed e.idxVTTV#0 as range 2
  do {
    // s.idx ( e.idx ) ( e.idx ) t.idx ( # TkName t.idx e.idx ) e.idx
    // </0 & DoExpression-AfterAmpersand/4 s.Kind#1/5 (/8 e.Errors#1/16 )/9 (/12 e.Collected#1/18 )/13 t.AmpersandPos#1/14 (/24 # TkName/26 t.Pos#1/27 e.Name#1/22 )/25 e.Tokens#1/20 >/1
    context[16] = context[6];
    context[17] = context[7];
    context[18] = context[10];
    context[19] = context[11];
    context[20] = context[2];
    context[21] = context[3];
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_left( context[22], context[23], context[20], context[21] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[26] = refalrts::ident_left(  ident_TkName, context[22], context[23] );
    if( ! context[26] )
      continue;
    // closed e.Errors#1 as range 16
    // closed e.Collected#1 as range 18
    // closed e.Tokens#1 as range 20
    context[28] = refalrts::tvar_left( context[27], context[22], context[23] );
    if( ! context[28] )
      continue;
    // closed e.Name#1 as range 22
    //DEBUG: t.AmpersandPos#1: 14
    //DEBUG: s.Kind#1: 5
    //DEBUG: e.Errors#1: 16
    //DEBUG: e.Collected#1: 18
    //DEBUG: e.Tokens#1: 20
    //DEBUG: t.Pos#1: 27
    //DEBUG: e.Name#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.AmpersandPos#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </24 } Tile{ HalfReuse: & DoExpression/0 HalfReuse: # Extended/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/16 AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/18 HalfReuse: (/13 } Tile{ AsIs: # TkName/26 AsIs: t.Pos#1/27 } Tile{ AsIs: e.Name#1/22 } )/29 Tile{ AsIs: )/25 AsIs: e.Tokens#1/20 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[24] );
    refalrts::reinit_name( context[0], ref_DoExpression.ref.function );
    refalrts::reinit_ident( context[4], ident_Extended );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[12], context[25] );
    refalrts::link_brackets( context[13], context[29] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[25];
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & DoExpression-AfterAmpersand/4 s.Kind#1/5 (/8 e.Errors#1/16 )/9 (/12 e.Collected#1/18 )/13 t.AmpersandPos#1/14 e.Tokens#1/20 >/1
  context[16] = context[6];
  context[17] = context[7];
  context[18] = context[10];
  context[19] = context[11];
  context[20] = context[2];
  context[21] = context[3];
  // closed e.Errors#1 as range 16
  // closed e.Collected#1 as range 18
  // closed e.Tokens#1 as range 20
  //DEBUG: t.AmpersandPos#1: 14
  //DEBUG: s.Kind#1: 5
  //DEBUG: e.Errors#1: 16
  //DEBUG: e.Collected#1: 18
  //DEBUG: e.Tokens#1: 20

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </22 Tile{ HalfReuse: & DoExpression/0 HalfReuse: # Extended/4 AsIs: s.Kind#1/5 AsIs: (/8 AsIs: e.Errors#1/16 HalfReuse: (/9 HalfReuse: # Error/12 } Tile{ AsIs: t.AmpersandPos#1/14 }"Expected function name after \'&\'"/23 Tile{ AsIs: )/13 } )/25 (/26 Tile{ AsIs: e.Collected#1/18 } )/27 Tile{ AsIs: e.Tokens#1/20 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[23], context[24], "Expected function name after \'&\'", 32 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_DoExpression.ref.function );
  refalrts::reinit_ident( context[4], ident_Extended );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_ident( context[12], ident_Error );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[22] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[8], context[25] );
  refalrts::link_brackets( context[9], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpressionm_AfterAmpersand("DoExpression-AfterAmpersand", 1557407522U, 1427032781U, func_DoExpressionm_AfterAmpersand);


static refalrts::FnResult func_DoExpressionm_AfterBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & DoExpression-AfterBlock/4 s.Mode#1/5 (/8 e.Errors#1/6 )/9 (/12 e.Collected#1/10 )/13 (/16 e.BlockErrors#1/14 )/17 (/20 e.Sentences#1/18 )/21 e.Tokens#1/2 >/1
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
  // closed e.Collected#1 as range 10
  // closed e.BlockErrors#1 as range 14
  // closed e.Sentences#1 as range 18
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 6
  //DEBUG: e.Collected#1: 10
  //DEBUG: e.BlockErrors#1: 14
  //DEBUG: e.Sentences#1: 18
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 HalfReuse: # Result/8 } Tile{ AsIs: (/20 } Tile{ AsIs: e.Errors#1/6 } Tile{ AsIs: e.BlockErrors#1/14 } Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/10 HalfReuse: (/13 HalfReuse: # Closure/16 } # Sentences/22 Tile{ AsIs: e.Sentences#1/18 } Tile{ AsIs: )/17 } Tile{ AsIs: )/21 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[22], ident_Sentences ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoExpression.ref.function );
  refalrts::reinit_ident( context[8], ident_Result );
  refalrts::reinit_open_bracket( context[13] );
  refalrts::reinit_ident( context[16], ident_Closure );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[12], context[21] );
  refalrts::link_brackets( context[13], context[17] );
  refalrts::link_brackets( context[20], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[21];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[9], context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpressionm_AfterBlock("DoExpression-AfterBlock", 1557407522U, 1427032781U, func_DoExpressionm_AfterBlock);


static refalrts::FnResult func_Expressionm_CheckBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
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
    // s.idx s.idx ( e.idx ) ( e.idx ) ( s.idx t.idx ) e.idx
    // </0 & Expression-CheckBrackets/4 s.Mode#1/7 s.Kind#1/8 (/11 e.Errors#1/9 )/12 (/15 e.Expression#1/13 )/16 (/19 s.Type#1/21 t.Pos#1/22 )/20 e.Tokens#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.Errors#1 as range 9
    // closed e.Expression#1 as range 13
    // closed e.Tokens#1 as range 5
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: s.Mode#1: 7
    //DEBUG: s.Kind#1: 8
    //DEBUG: e.Errors#1: 9
    //DEBUG: e.Expression#1: 13
    //DEBUG: e.Tokens#1: 5
    //DEBUG: s.Type#1: 21
    //DEBUG: t.Pos#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets$1?1?0/4 AsIs: s.Mode#1/7 AsIs: s.Kind#1/8 AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Expression#1/13 AsIs: )/16 HalfReuse: s.Type1 #21/19 } Tile{ AsIs: t.Pos#1/22 HalfReuse: (/20 AsIs: e.Tokens#1/5 HalfReuse: )/1 } </24 & OneOf/25 Tile{ AsIs: s.Type#1/21 } # TkCloseBracket/26 # TkCloseCall/27 >/28 >/29 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[26], ident_TkCloseBracket ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], ident_TkCloseCall ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_Expressionm_CheckBrackets_S1C1C0.ref.function );
    refalrts::reinit_svar( context[19], context[21] );
    refalrts::reinit_open_bracket( context[20] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[20], context[1] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[26], context[29] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[22], context[1] );
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

static refalrts::NativeReference nat_ref_Expressionm_CheckBrackets("Expression-CheckBrackets", 1557407522U, 1427032781U, func_Expressionm_CheckBrackets);


static refalrts::FnResult func_gen_Expressionm_CheckBrackets_S1C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  //FAST GEN: s.$ s.$ ( e.$ ) ( e.$ ) s.$ t.$ ( e.$ ) e.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) ( e.$ ) s.$ t.$ ( e.$ ) e.$
  // </0 & Expression-CheckBrackets$1?1?0/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 (/13 e.idxVVTB#0/11 )/14 s.idxVVTT#0/15 t.idxVVTTV#0/16 (/20 e.idxVVTTVVB#0/18 )/21 e.idxVVTTVVT#0/2 >/1
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
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.idxVVB#0 as range 7
  // closed e.idxVVTB#0 as range 11
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
  // closed e.idxVVTTVVB#0 as range 18
  // closed e.idxVVTTVVT#0 as range 2
  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) s.idx t.idx ( e.idx ) # True
    // </0 & Expression-CheckBrackets$1?1?0/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/22 )/10 (/13 e.Expression#1/24 )/14 s.Type#1/15 t.Pos#1/16 (/20 e.Tokens#1/26 )/21 # True/30 >/1
    context[22] = context[7];
    context[23] = context[8];
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
    // closed e.Errors#1 as range 22
    // closed e.Expression#1 as range 24
    // closed e.Tokens#1 as range 26
    //DEBUG: t.Pos#1: 16
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: s.Type#1: 15
    //DEBUG: e.Errors#1: 22
    //DEBUG: e.Expression#1: 24
    //DEBUG: e.Tokens#1: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets-AfterSubexpr/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Errors#1/22 HalfReuse: (/10 HalfReuse: # Error/13 } Tile{ AsIs: t.Pos#1/16 HalfReuse: 'u'/20 }"nbalanced "/31 </33 Tile{ HalfReuse: & TokName/14 AsIs: s.Type#1/15 } >/34 )/35 Tile{ AsIs: )/21 } (/36 Tile{ AsIs: e.Expression#1/24 } )/37 </38 & Expression-Aux/39 s.Mode#1/5/40 s.Kind#1/6/41 Tile{ AsIs: e.Tokens#1/26 } Tile{ HalfReuse: >/30 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[31], context[32], "nbalanced ", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[39], ref_Expressionm_Aux.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[40], context[5]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[41], context[6]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Expressionm_CheckBracketsm_AfterSubexpr.ref.function );
    refalrts::reinit_open_bracket( context[10] );
    refalrts::reinit_ident( context[13], ident_Error );
    refalrts::reinit_char( context[20], 'u' );
    refalrts::reinit_name( context[14], ref_TokName.ref.function );
    refalrts::reinit_close_call( context[30] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[38] );
    refalrts::link_brackets( context[36], context[37] );
    refalrts::link_brackets( context[9], context[21] );
    refalrts::link_brackets( context[10], context[35] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[30];
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[37], context[41] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[16], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx ( e.idx ) ( e.idx ) s.idx t.idx ( e.idx ) e.idx
  // </0 & Expression-CheckBrackets$1?1?0/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/22 )/10 (/13 e.Expression#1/24 )/14 s.Type#1/15 t.Pos#1/16 (/20 e.Tokens#1/26 )/21 e.Other#0/28 >/1
  context[22] = context[7];
  context[23] = context[8];
  context[24] = context[11];
  context[25] = context[12];
  context[26] = context[18];
  context[27] = context[19];
  context[28] = context[2];
  context[29] = context[3];
  // closed e.Errors#1 as range 22
  // closed e.Expression#1 as range 24
  // closed e.Tokens#1 as range 26
  // closed e.Other#0 as range 28
  //DEBUG: t.Pos#1: 16
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: s.Type#1: 15
  //DEBUG: e.Errors#1: 22
  //DEBUG: e.Expression#1: 24
  //DEBUG: e.Tokens#1: 26
  //DEBUG: e.Other#0: 28

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Other#0/28 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets$1?1?1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Errors#1/22 AsIs: )/10 AsIs: (/13 AsIs: e.Expression#1/24 AsIs: )/14 } Tile{ HalfReuse: (/1 } Tile{ AsIs: s.Type#1/15 AsIs: t.Pos#1/16 HalfReuse: )/20 AsIs: e.Tokens#1/26 HalfReuse: >/21 } Tile{ ]] }
  refalrts::update_name( context[4], ref_gen_Expressionm_CheckBrackets_S1C1C1.ref.function );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_close_bracket( context[20] );
  refalrts::reinit_close_call( context[21] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[1], context[20] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[21] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  refalrts::splice_to_freelist_open( context[14], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1C1C0("Expression-CheckBrackets$1?1?0", 1557407522U, 1427032781U, func_gen_Expressionm_CheckBrackets_S1C1C0);


static refalrts::FnResult func_gen_Expressionm_CheckBrackets_S1C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & Expression-CheckBrackets$1?1?1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/7 )/10 t.Expression#1/11 e.Tokens#1/2 >/1
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
  // closed e.Errors#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Errors#1: 7
  //DEBUG: t.Expression#1: 11
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Expression-CheckBrackets$1?1?1/4 s.Mode#1/5 s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: e.Errors#1/7 AsIs: )/10 AsIs: t.Expression#1/11 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1C1C1("Expression-CheckBrackets$1?1?1", 1557407522U, 1427032781U, func_gen_Expressionm_CheckBrackets_S1C1C1);


static refalrts::FnResult func_Expressionm_CheckBracketsm_AfterSubexpr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Expression-CheckBrackets-AfterSubexpr/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/7 )/10 (/13 e.Expression#1/11 )/14 (/17 e.SubexprErrors#1/15 )/18 (/21 e.Subexpression#1/19 )/22 e.Tokens#1/2 >/1
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
  // closed e.Errors#1 as range 7
  // closed e.Expression#1 as range 11
  // closed e.SubexprErrors#1 as range 15
  // closed e.Subexpression#1 as range 19
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Errors#1: 7
  //DEBUG: e.Expression#1: 11
  //DEBUG: e.SubexprErrors#1: 15
  //DEBUG: e.Subexpression#1: 19
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 (/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/18 (/21 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 } Tile{ AsIs: e.Errors#1/7 } Tile{ AsIs: e.SubexprErrors#1/15 } Tile{ AsIs: )/14 AsIs: (/17 } Tile{ AsIs: e.Expression#1/11 } Tile{ AsIs: e.Subexpression#1/19 } Tile{ AsIs: )/22 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Expressionm_CheckBrackets.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[17], context[22] );
  refalrts::link_brackets( context[9], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[22];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( context[9], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expressionm_CheckBracketsm_AfterSubexpr("Expression-CheckBrackets-AfterSubexpr", 1557407522U, 1427032781U, func_Expressionm_CheckBracketsm_AfterSubexpr);


static refalrts::FnResult func_ClassicError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: s.$ t.$ e.$
  //GLOBAL GEN: s.$ t.$ e.$
  // </0 & ClassicError/4 s.idx#0/5 t.idxV#0/6 e.idxVV#0/2 >/1
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
  // closed e.idxVV#0 as range 2
  do {
    // # Classic t.idx e.idx
    // </0 & ClassicError/4 # Classic/5 t.Pos#1/6 e.Message#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    if( ! refalrts::ident_term(  ident_Classic, context[5] ) )
      continue;
    // closed e.Message#1 as range 8
    //DEBUG: t.Pos#1: 6
    //DEBUG: e.Message#1: 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # Error/5 AsIs: t.Pos#1/6 AsIs: e.Message#1/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::update_ident( context[5], ident_Error );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Extended t.idx e.idx
  // </0 & ClassicError/4 # Extended/5 t.Pos#1/6 e.Message#1/8 >/1
  context[8] = context[2];
  context[9] = context[3];
  if( ! refalrts::ident_term(  ident_Extended, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 8
  //DEBUG: t.Pos#1: 6
  //DEBUG: e.Message#1: 8

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ClassicError/4 # Extended/5 t.Pos#1/6 e.Message#1/8 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ClassicError("ClassicError", 1557407522U, 1427032781U, func_ClassicError);


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

static refalrts::NativeReference nat_ref_UnexpectedToken("UnexpectedToken", 1557407522U, 1427032781U, func_UnexpectedToken);


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

  do {
    // # TkEOF
    // </0 & TokName/4 # TkEOF/5 >/1
    if( ! refalrts::ident_term(  ident_TkEOF, context[5] ) )
      continue;

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
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkRefal5Mode
    // </0 & TokName/4 # TkRefal5Mode/5 >/1
    if( ! refalrts::ident_term(  ident_TkRefal5Mode, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '*'/0 HalfReuse: '$'/4 HalfReuse: 'C'/5 HalfReuse: 'L'/1 }"ASSIC or *$EXTENDED"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "ASSIC or *$EXTENDED", 19 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '*' );
    refalrts::reinit_char( context[4], '$' );
    refalrts::reinit_char( context[5], 'C' );
    refalrts::reinit_char( context[1], 'L' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # TkAmpersand
  // </0 & TokName/4 # TkAmpersand/5 >/1
  if( ! refalrts::ident_term(  ident_TkAmpersand, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '&'/5 HalfReuse: '\''/1 ]] }
  refalrts::reinit_char( context[4], '\'' );
  refalrts::reinit_char( context[5], '&' );
  refalrts::reinit_char( context[1], '\'' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TokName("TokName", 1557407522U, 1427032781U, func_TokName);


//End of file
