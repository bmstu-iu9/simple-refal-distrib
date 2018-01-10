// This file automatically generated from 'R5-Parser.ref'
// Don't edit! Edit 'R5-Parser.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_4078471296_2260943187
static const refalrts::RefalIdentifier ident_k37_ = refalrts::ident_from_static("%");
static const refalrts::RefalIdentifier ident_k42_ = refalrts::ident_from_static("*");
static const refalrts::RefalIdentifier ident_k43_ = refalrts::ident_from_static("+");
static const refalrts::RefalIdentifier ident_m_ = refalrts::ident_from_static("-");
static const refalrts::RefalIdentifier ident_k47_ = refalrts::ident_from_static("/");
static const refalrts::RefalIdentifier ident_k63_ = refalrts::ident_from_static("?");
static const refalrts::RefalIdentifier ident_ADTm_Brackets = refalrts::ident_from_static("ADT-Brackets");
static const refalrts::RefalIdentifier ident_Assign = refalrts::ident_from_static("Assign");
static const refalrts::RefalIdentifier ident_Brackets = refalrts::ident_from_static("Brackets");
static const refalrts::RefalIdentifier ident_CallBrackets = refalrts::ident_from_static("CallBrackets");
static const refalrts::RefalIdentifier ident_Classic = refalrts::ident_from_static("Classic");
static const refalrts::RefalIdentifier ident_Closure = refalrts::ident_from_static("Closure");
static const refalrts::RefalIdentifier ident_Condition = refalrts::ident_from_static("Condition");
static const refalrts::RefalIdentifier ident_Cookie1 = refalrts::ident_from_static("Cookie1");
static const refalrts::RefalIdentifier ident_Cookie2 = refalrts::ident_from_static("Cookie2");
static const refalrts::RefalIdentifier ident_Declaration = refalrts::ident_from_static("Declaration");
static const refalrts::RefalIdentifier ident_Enum = refalrts::ident_from_static("Enum");
static const refalrts::RefalIdentifier ident_Error = refalrts::ident_from_static("Error");
static const refalrts::RefalIdentifier ident_Extended = refalrts::ident_from_static("Extended");
static const refalrts::RefalIdentifier ident_False = refalrts::ident_from_static("False");
static const refalrts::RefalIdentifier ident_Function = refalrts::ident_from_static("Function");
static const refalrts::RefalIdentifier ident_GNm_Entry = refalrts::ident_from_static("GN-Entry");
static const refalrts::RefalIdentifier ident_GNm_Local = refalrts::ident_from_static("GN-Local");
static const refalrts::RefalIdentifier ident_Include = refalrts::ident_from_static("Include");
static const refalrts::RefalIdentifier ident_NativeBlock = refalrts::ident_from_static("NativeBlock");
static const refalrts::RefalIdentifier ident_NativeBody = refalrts::ident_from_static("NativeBody");
static const refalrts::RefalIdentifier ident_Pattern = refalrts::ident_from_static("Pattern");
static const refalrts::RefalIdentifier ident_Result = refalrts::ident_from_static("Result");
static const refalrts::RefalIdentifier ident_Sentences = refalrts::ident_from_static("Sentences");
static const refalrts::RefalIdentifier ident_Swap = refalrts::ident_from_static("Swap");
static const refalrts::RefalIdentifier ident_TkAmpersand = refalrts::ident_from_static("TkAmpersand");
static const refalrts::RefalIdentifier ident_TkAssign = refalrts::ident_from_static("TkAssign");
static const refalrts::RefalIdentifier ident_TkChar = refalrts::ident_from_static("TkChar");
static const refalrts::RefalIdentifier ident_TkCloseADT = refalrts::ident_from_static("TkCloseADT");
static const refalrts::RefalIdentifier ident_TkCloseBlock = refalrts::ident_from_static("TkCloseBlock");
static const refalrts::RefalIdentifier ident_TkCloseBracket = refalrts::ident_from_static("TkCloseBracket");
static const refalrts::RefalIdentifier ident_TkCloseCall = refalrts::ident_from_static("TkCloseCall");
static const refalrts::RefalIdentifier ident_TkColon = refalrts::ident_from_static("TkColon");
static const refalrts::RefalIdentifier ident_TkComma = refalrts::ident_from_static("TkComma");
static const refalrts::RefalIdentifier ident_TkCompound = refalrts::ident_from_static("TkCompound");
static const refalrts::RefalIdentifier ident_TkEEnum = refalrts::ident_from_static("TkEEnum");
static const refalrts::RefalIdentifier ident_TkEOF = refalrts::ident_from_static("TkEOF");
static const refalrts::RefalIdentifier ident_TkESwap = refalrts::ident_from_static("TkESwap");
static const refalrts::RefalIdentifier ident_TkEntry = refalrts::ident_from_static("TkEntry");
static const refalrts::RefalIdentifier ident_TkEnum = refalrts::ident_from_static("TkEnum");
static const refalrts::RefalIdentifier ident_TkError = refalrts::ident_from_static("TkError");
static const refalrts::RefalIdentifier ident_TkExtern = refalrts::ident_from_static("TkExtern");
static const refalrts::RefalIdentifier ident_TkIdentifier = refalrts::ident_from_static("TkIdentifier");
static const refalrts::RefalIdentifier ident_TkInclude = refalrts::ident_from_static("TkInclude");
static const refalrts::RefalIdentifier ident_TkMacroDigit = refalrts::ident_from_static("TkMacroDigit");
static const refalrts::RefalIdentifier ident_TkName = refalrts::ident_from_static("TkName");
static const refalrts::RefalIdentifier ident_TkNativeCode = refalrts::ident_from_static("TkNativeCode");
static const refalrts::RefalIdentifier ident_TkNewVariable = refalrts::ident_from_static("TkNewVariable");
static const refalrts::RefalIdentifier ident_TkNumber = refalrts::ident_from_static("TkNumber");
static const refalrts::RefalIdentifier ident_TkOpenADT = refalrts::ident_from_static("TkOpenADT");
static const refalrts::RefalIdentifier ident_TkOpenBlock = refalrts::ident_from_static("TkOpenBlock");
static const refalrts::RefalIdentifier ident_TkOpenBracket = refalrts::ident_from_static("TkOpenBracket");
static const refalrts::RefalIdentifier ident_TkOpenCall = refalrts::ident_from_static("TkOpenCall");
static const refalrts::RefalIdentifier ident_TkRedefinition = refalrts::ident_from_static("TkRedefinition");
static const refalrts::RefalIdentifier ident_TkRefal5Mode = refalrts::ident_from_static("TkRefal5Mode");
static const refalrts::RefalIdentifier ident_TkScopeId = refalrts::ident_from_static("TkScopeId");
static const refalrts::RefalIdentifier ident_TkSemicolon = refalrts::ident_from_static("TkSemicolon");
static const refalrts::RefalIdentifier ident_TkSwap = refalrts::ident_from_static("TkSwap");
static const refalrts::RefalIdentifier ident_TkVariable = refalrts::ident_from_static("TkVariable");
static const refalrts::RefalIdentifier ident_True = refalrts::ident_from_static("True");
static refalrts::ExternalReference ref_Add("Add", 0U, 0U);
static refalrts::ExternalReference ref_AssignmentError("AssignmentError", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Block("Block", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Block_S2C1C0("Block$2?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Block_S2C1C1("Block$2?1?1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Blockm_AfterSentence("Block-AfterSentence", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Blockm_AfterSentence_S1B1("Block-AfterSentence$1:1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_CheckExceedBlocks("CheckExceedBlocks", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_CheckMistakenAssign("CheckMistakenAssign", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_CheckSentenceEnd("CheckSentenceEnd", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_CheckSentenceEnd_S1C1C0("CheckSentenceEnd$1?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_CheckSentenceEnd_S1C1C1("CheckSentenceEnd$1?1?1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_CheckSentenceEnd_S1C2C0("CheckSentenceEnd$1?2?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_CheckSentenceEnd_S1C2C1("CheckSentenceEnd$1?2?1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_ClassicError("ClassicError", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
static refalrts::ExternalReference ref_DoCheckExceedBlocks("DoCheckExceedBlocks", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_DoExpression("DoExpression", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_DoExpression_B1("DoExpression:1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_DoExpression_B1S11B1("DoExpression:1$11:1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_DoExpression_B1S12C1C0("DoExpression:1$12?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_DoExpression_B1S12C1C1("DoExpression:1$12?1?1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_DoExpressionm_AddRedefinition("DoExpression-AddRedefinition", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_DoExpressionm_AfterADT("DoExpression-AfterADT", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_DoExpressionm_AfterAmpersand("DoExpression-AfterAmpersand", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_DoExpressionm_AfterBlock("DoExpression-AfterBlock", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_DoExpressionm_AfterBracket("DoExpression-AfterBracket", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_DoExpressionm_AfterCall("DoExpression-AfterCall", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_DoFilterErrors("DoFilterErrors", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Evm_met("Ev-met", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Expression("Expression", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Expressionm_Aux("Expression-Aux", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Expressionm_CheckBrackets("Expression-CheckBrackets", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Expressionm_CheckBrackets_S1C1C0("Expression-CheckBrackets$1?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Expressionm_CheckBrackets_S1C1C1("Expression-CheckBrackets$1?1?1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Expressionm_CheckBracketsm_AfterSubexpr("Expression-CheckBrackets-AfterSubexpr", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_FilterErrors("FilterErrors", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Function("Function", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Functionm_AfterBlock("Function-AfterBlock", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Include("Include", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Include_B1("Include:1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Include_C1C0("Include?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_IsCloseBlock("IsCloseBlock", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
static refalrts::ExternalReference ref_Mu("Mu", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Mu_A1("Mu=1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Mul("Mul", 0U, 0U);
static refalrts::ExternalReference ref_NameList("NameList", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_NameList_S3C1C0("NameList$3?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_NameListm_DoNames("NameList-DoNames", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S8C1C0("NameList-DoNames$8?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S8C1C1("NameList-DoNames$8?1?1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S8C2C0("NameList-DoNames$8?2?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S8C2C1("NameList-DoNames$8?2?1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_NameListTags("NameListTags", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_OneOf("OneOf", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Pattern("Pattern", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Program("Program", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Program_S1C1C0("Program$1?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Program_S1C1C1("Program$1?1?1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Program_S1C2C0("Program$1?2?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Program_S1C2C1("Program$1?2?1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Program_S4C1C0("Program$4?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Programm_AfterUnit("Program-AfterUnit", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_R5m_Parse("R5-Parse", 0U, 0U);
static refalrts::ExternalReference ref_Residue("Residue", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Residue_A1("Residue=1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Result("Result", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Resultm_Blocks("Result-Blocks", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Resultm_Blocks_S3B1("Result-Blocks$3:1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Sentence("Sentence", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_SentencePart("SentencePart", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_SentencePartm_AfterPattern("SentencePart-AfterPattern", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_SentencePartm_AfterPattern_B1("SentencePart-AfterPattern:1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_SentencePartm_AfterPattern_B1S3C1C0("SentencePart-AfterPattern:1$3?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_SentencePartm_AfterPattern_B1S3C1C1("SentencePart-AfterPattern:1$3?1?1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_SentencePartm_AfterResult("SentencePart-AfterResult", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_SentenceTail("SentenceTail", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_SentenceTail_B1("SentenceTail:1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_SentenceTail_B1S2C1C0("SentenceTail:1$2?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_SentenceTailm_AfterTail("SentenceTail-AfterTail", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_SentenceTailm_AfterTail_C1C0("SentenceTail-AfterTail?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Sub("Sub", 0U, 0U);
static refalrts::ExternalReference ref_TkEEnum("TkEEnum", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_TkESwap("TkESwap", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_TkEnum("TkEnum", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_TkExtern("TkExtern", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_TkSwap("TkSwap", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_TokName("TokName", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Type("Type", 0U, 0U);
static refalrts::ExternalReference ref_UnexpectedToken("UnexpectedToken", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_UnexpectedTokenInSentence("UnexpectedTokenInSentence", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Unit("Unit", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Unit_B1("Unit:1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Unit_B1S2B1("Unit:1$2:1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Unit_B1S2C1C0("Unit:1$2?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Unit_B1S2C1C1("Unit:1$2?1?1", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_Unit_B1S6C1C0("Unit:1$6?1?0", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_UnitStartToken("UnitStartToken", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_Up("Up", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_u_u_FindMuPtr("__FindMuPtr", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Mum_Aux("__Mu-Aux", 4078471296U, 2260943187U);
static refalrts::ExternalReference ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 4078471296U, 2260943187U);
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

static refalrts::NativeReference nat_ref_gen_Mu_A1("Mu=1", 4078471296U, 2260943187U, func_gen_Mu_A1);


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

static refalrts::NativeReference nat_ref_Mu("Mu", 4078471296U, 2260943187U, func_Mu);


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
    if( ! refalrts::alloc_number( context[9], 2260943187UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref.function );
    refalrts::reinit_number( context[5], 4078471296UL );
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
  refalrts::reinit_number( context[5], 4078471296UL );
  refalrts::reinit_number( context[7], 2260943187UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 4078471296U, 2260943187U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 4078471296U, 2260943187U, func_u_u_Mum_Aux);


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

static refalrts::NativeReference nat_ref_gen_Residue_A1("Residue=1", 4078471296U, 2260943187U, func_gen_Residue_A1);


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

static refalrts::NativeReference nat_ref_Residue("Residue", 4078471296U, 2260943187U, func_Residue);


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

static refalrts::NativeReference nat_ref_FilterErrors("FilterErrors", 4078471296U, 2260943187U, func_FilterErrors);


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

static refalrts::NativeReference nat_ref_DoFilterErrors("DoFilterErrors", 4078471296U, 2260943187U, func_DoFilterErrors);


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

static refalrts::NativeReference nat_ref_Program("Program", 4078471296U, 2260943187U, func_Program);


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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program$1?2?0/4 AsIs: s.Mode#1/15 AsIs: t.NextToken#1/17 AsIs: (/13 AsIs: e.Tokens#1/11 AsIs: )/14 HalfReuse: s.Type2 #16/9 } Tile{ AsIs: t.Pos#2/19 } (/21 Tile{ AsIs: e.Value#2/7 } )/22 </23 & OneOf/24 Tile{ AsIs: s.Type#2/16 } </25 & UnitStartToken/26 >/27 Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ref_UnitStartToken.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_Program_S1C2C0.ref.function );
    refalrts::reinit_svar( context[9], context[16] );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[25], context[27] );
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

static refalrts::NativeReference nat_ref_gen_Program_S1C1C0("Program$1?1?0", 4078471296U, 2260943187U, func_gen_Program_S1C1C0);


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

static refalrts::NativeReference nat_ref_gen_Program_S1C1C1("Program$1?1?1", 4078471296U, 2260943187U, func_gen_Program_S1C1C1);


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

static refalrts::NativeReference nat_ref_gen_Program_S1C2C0("Program$1?2?0", 4078471296U, 2260943187U, func_gen_Program_S1C2C0);


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

static refalrts::NativeReference nat_ref_gen_Program_S1C2C1("Program$1?2?1", 4078471296U, 2260943187U, func_gen_Program_S1C2C1);


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

static refalrts::NativeReference nat_ref_gen_Program_S4C1C0("Program$4?1?0", 4078471296U, 2260943187U, func_gen_Program_S4C1C0);


static refalrts::FnResult func_UnitStartToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & UnitStartToken/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameListTags/4 AsIs: >/1 } # TkEntry/5 # TkName/6 # TkSemicolon/7 # TkInclude/8 # TkNativeCode/9 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[5], ident_TkEntry ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], ident_TkName ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[7], ident_TkSemicolon ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[8], ident_TkInclude ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[9], ident_TkNativeCode ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_NameListTags.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnitStartToken("UnitStartToken", 4078471296U, 2260943187U, func_UnitStartToken);


static refalrts::FnResult func_NameListTags(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & NameListTags/4 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: # TkExtern/0 HalfReuse: # TkEnum/4 HalfReuse: # TkEEnum/1 } # TkSwap/5 # TkESwap/6 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[5], ident_TkSwap ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[6], ident_TkESwap ) )
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], ident_TkExtern );
  refalrts::reinit_ident( context[4], ident_TkEnum );
  refalrts::reinit_ident( context[1], ident_TkEEnum );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameListTags("NameListTags", 4078471296U, 2260943187U, func_NameListTags);


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

static refalrts::NativeReference nat_ref_OneOf("OneOf", 4078471296U, 2260943187U, func_OneOf);


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

static refalrts::NativeReference nat_ref_Programm_AfterUnit("Program-AfterUnit", 4078471296U, 2260943187U, func_Programm_AfterUnit);


static refalrts::FnResult func_gen_Unit_B1S2B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Unit:1$2:1/4 s.Mode#1/5 t.Pos#2/6 s.Tag#2/8 (/11 e.ErrorsAndUnits#4/9 )/12 e.Tokens1#4/2 >/1
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
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.ErrorsAndUnits#4 as range 9
  // closed e.Tokens1#4 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: t.Pos#2: 6
  //DEBUG: s.Tag#2: 8
  //DEBUG: e.ErrorsAndUnits#4: 9
  //DEBUG: e.Tokens1#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/13 Tile{ AsIs: </0 Reuse: & ClassicError/4 AsIs: s.Mode#1/5 AsIs: t.Pos#2/6 } </14 & TokName/15 Tile{ AsIs: s.Tag#2/8 } Tile{ AsIs: >/1 }" is a extension"/16 Tile{ HalfReuse: >/11 AsIs: e.ErrorsAndUnits#4/9 AsIs: )/12 } Tile{ AsIs: e.Tokens1#4/2 } Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_TokName.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], " is a extension", 15 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ClassicError.ref.function );
  refalrts::reinit_close_call( context[11] );
  refalrts::link_brackets( context[13], context[12] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1S2B1("Unit:1$2:1", 4078471296U, 2260943187U, func_gen_Unit_B1S2B1);


static refalrts::FnResult func_gen_Unit_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Unit:1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( e.idx ) s.idx t.idx ( # TkExtern t.idx )
    // </0 & Unit:1/4 (/9 e.Tokens#1/7 )/10 s.Mode#1/16 t.NextToken#1/17 (/13 # TkExtern/15 t.Pos#2/19 )/14 >/1
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
    context[15] = refalrts::ident_left(  ident_TkExtern, context[11], context[12] );
    if( ! context[15] )
      continue;
    // closed e.Tokens#1 as range 7
    if( ! refalrts::svar_left( context[16], context[5], context[6] ) )
      continue;
    context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[20] = refalrts::tvar_left( context[19], context[11], context[12] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Tokens#1: 7
    //DEBUG: s.Mode#1: 16
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/16 t.NextToken#1/17 (/13 # TkExtern/15 t.Pos#2/19 )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList/4 HalfReuse: # TkExtern/9 AsIs: e.Tokens#1/7 HalfReuse: >/10 } Tile{ ]] }
    refalrts::update_name( context[4], ref_NameList.ref.function );
    refalrts::reinit_ident( context[9], ident_TkExtern );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[10], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx t.idx ( s.idx t.idx )
    // </0 & Unit:1/4 (/9 e.Tokens#1/7 )/10 s.Mode#1/15 t.NextToken#1/17 (/13 s.Tag#2/16 t.Pos#2/19 )/14 >/1
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
    // closed e.Tokens#1 as range 7
    if( ! refalrts::svar_left( context[15], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
      continue;
    context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[20] = refalrts::tvar_left( context[19], context[11], context[12] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: e.Tokens#1: 7
    //DEBUG: s.Mode#1: 15
    //DEBUG: s.Tag#2: 16
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Unit:1$2?1?0/4 AsIs: (/9 AsIs: e.Tokens#1/7 AsIs: )/10 AsIs: s.Mode#1/15 AsIs: t.NextToken#1/17 HalfReuse: s.Tag2 #16/13 } Tile{ AsIs: t.Pos#2/19 } </21 & OneOf/22 Tile{ AsIs: s.Tag#2/16 } </23 & NameListTags/24 >/25 Tile{ HalfReuse: >/14 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ref_NameListTags.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_Unit_B1S2C1C0.ref.function );
    refalrts::reinit_svar( context[13], context[16] );
    refalrts::reinit_close_call( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[9], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[14];
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & Unit:1/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Unit:1$2?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_Unit_B1S2C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1("Unit:1", 4078471296U, 2260943187U, func_gen_Unit_B1);


static refalrts::FnResult func_gen_Unit_B1S2C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: ( e.$ ) s.$ t.$ s.$ t.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ t.$ s.$ t.$ e.$
  // </0 & Unit:1$2?1?0/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 t.idxTV#0/10 s.idxTVV#0/12 t.idxTVVV#0/13 e.idxTVVVV#0/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTVVVV#0 as range 2
  do {
    // ( e.idx ) s.idx t.idx s.idx t.idx # True
    // </0 & Unit:1$2?1?0/4 (/7 e.Tokens#1/15 )/8 s.Mode#1/9 t.NextToken#1/10 s.Tag#2/12 t.Pos#2/13 # True/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = refalrts::ident_left(  ident_True, context[17], context[18] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    // closed e.Tokens#1 as range 15
    //DEBUG: t.NextToken#1: 10
    //DEBUG: t.Pos#2: 13
    //DEBUG: s.Mode#1: 9
    //DEBUG: s.Tag#2: 12
    //DEBUG: e.Tokens#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NextToken#1/10 s.Tag#2/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </20 [*]/21 & Unit:1$2:1/22 Tile{ AsIs: s.Mode#1/9 } Tile{ AsIs: t.Pos#2/13 HalfReuse: s.Tag2 #12/19 } {*}/23 Tile{ AsIs: </0 Reuse: & NameList/4 HalfReuse: s.Tag2 #12/7 AsIs: e.Tokens#1/15 HalfReuse: >/8 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_closure_head( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ref_gen_Unit_B1S2B1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[23], context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[19], context[12] );
    refalrts::update_name( context[4], ref_NameList.ref.function );
    refalrts::reinit_svar( context[7], context[12] );
    refalrts::reinit_close_call( context[8] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[13], context[19] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[20], context[22] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    refalrts::wrap_closure( context[23] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx t.idx s.idx t.idx e.idx
  // </0 & Unit:1$2?1?0/4 (/7 e.Tokens#1/15 )/8 s.Mode#1/9 t.NextToken#1/10 s.Tag#2/12 t.Pos#2/13 e.Other#0/17 >/1
  context[15] = context[5];
  context[16] = context[6];
  context[17] = context[2];
  context[18] = context[3];
  // closed e.Tokens#1 as range 15
  // closed e.Other#0 as range 17
  //DEBUG: t.NextToken#1: 10
  //DEBUG: t.Pos#2: 13
  //DEBUG: s.Mode#1: 9
  //DEBUG: s.Tag#2: 12
  //DEBUG: e.Tokens#1: 15
  //DEBUG: e.Other#0: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Other#0/17 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Unit:1$2?1?1/4 AsIs: (/7 AsIs: e.Tokens#1/15 AsIs: )/8 AsIs: s.Mode#1/9 AsIs: t.NextToken#1/10 } (/19 Tile{ AsIs: s.Tag#2/12 AsIs: t.Pos#2/13 } )/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_Unit_B1S2C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  refalrts::splice_to_freelist_open( context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1S2C1C0("Unit:1$2?1?0", 4078471296U, 2260943187U, func_gen_Unit_B1S2C1C0);


static refalrts::FnResult func_gen_Unit_B1S2C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: ( e.$ ) s.$ t.$ ( e.$ )
  //GLOBAL GEN: ( e.$ ) s.$ t.$ ( s.$ t.$ e.$ )
  // </0 & Unit:1$2?1?1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/13 t.idxTV#0/15 (/11 s.idxTVVB#0/14 t.idxTVVBV#0/17 e.idxTVVBVV#0/9 )/12 >/1
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
    // ( e.idx ) s.idx t.idx ( # TkInclude t.idx )
    // </0 & Unit:1$2?1?1/4 (/7 e.Tokens#1/19 )/8 s.Mode#1/13 t.NextToken#1/15 (/11 # TkInclude/14 t.Pos#2/17 )/12 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[9];
    context[22] = context[10];
    if( ! refalrts::ident_term(  ident_TkInclude, context[14] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.Tokens#1 as range 19
    //DEBUG: t.NextToken#1: 15
    //DEBUG: t.Pos#2: 17
    //DEBUG: s.Mode#1: 13
    //DEBUG: e.Tokens#1: 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/8 s.Mode#1/13 t.NextToken#1/15 (/11 # TkInclude/14 {REMOVED TILE} )/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Include/4 HalfReuse: s.Mode1 #13/7 } Tile{ AsIs: t.Pos#2/17 } Tile{ AsIs: e.Tokens#1/19 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Include.ref.function );
    refalrts::reinit_svar( context[7], context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx t.idx ( # TkNativeCode t.idx e.idx )
    // </0 & Unit:1$2?1?1/4 (/7 e.Tokens#1/19 )/8 s.Mode#1/13 t.NextToken#1/15 (/11 # TkNativeCode/14 t.Pos#2/17 e.Lines#2/21 )/12 >/1
    context[19] = context[5];
    context[20] = context[6];
    context[21] = context[9];
    context[22] = context[10];
    if( ! refalrts::ident_term(  ident_TkNativeCode, context[14] ) )
      continue;
    // closed e.Tokens#1 as range 19
    // closed e.Lines#2 as range 21
    //DEBUG: t.NextToken#1: 15
    //DEBUG: t.Pos#2: 17
    //DEBUG: s.Mode#1: 13
    //DEBUG: e.Tokens#1: 19
    //DEBUG: e.Lines#2: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & Unit:1$2?1?1/4 (/7 {REMOVED TILE} )/8 s.Mode#1/13 t.NextToken#1/15 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: (/11 Reuse: # NativeBlock/14 AsIs: t.Pos#2/17 AsIs: e.Lines#2/21 AsIs: )/12 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/19 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[14], ident_NativeBlock );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx t.idx ( # TkSemicolon t.idx )
    // </0 & Unit:1$2?1?1/4 (/7 e.Tokens#1/19 )/8 s.Mode#1/13 t.NextToken#1/15 (/11 # TkSemicolon/14 t.Pos#2/17 )/12 >/1
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
  // </0 & Unit:1$2?1?1/4 (/7 e.Tokens#1/19 )/8 s.Mode#1/13 t.NextToken#1/15 (/11 s.Type#2/14 t.Pos#2/17 e.Value#2/21 )/12 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Unit:1$6?1?0/4 AsIs: (/7 AsIs: e.Tokens#1/19 AsIs: )/8 AsIs: s.Mode#1/13 AsIs: t.NextToken#1/15 HalfReuse: s.Type2 #14/11 } Tile{ AsIs: t.Pos#2/17 } (/23 Tile{ AsIs: e.Value#2/21 } )/24 </25 & OneOf/26 Tile{ AsIs: s.Type#2/14 } # TkEntry/27 # TkName/28 Tile{ HalfReuse: >/12 AsIs: >/1 ]] }
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
  refalrts::update_name( context[4], ref_gen_Unit_B1S6C1C0.ref.function );
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

static refalrts::NativeReference nat_ref_gen_Unit_B1S2C1C1("Unit:1$2?1?1", 4078471296U, 2260943187U, func_gen_Unit_B1S2C1C1);


static refalrts::FnResult func_gen_Unit_B1S6C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Unit:1$6?1?0/4 (/8 e.Tokens#1/6 )/9 s.Mode#1/14 t.NextToken#1/15 s.Type#2/17 t.Pos#2/18 (/12 e.Value#2/10 )/13 # True/5 >/1
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

static refalrts::NativeReference nat_ref_gen_Unit_B1S6C1C0("Unit:1$6?1?0", 4078471296U, 2260943187U, func_gen_Unit_B1S6C1C0);


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

static refalrts::NativeReference nat_ref_Unit("Unit", 4078471296U, 2260943187U, func_Unit);


static refalrts::FnResult func_NameList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: s.$ t.$ e.$
  //GLOBAL GEN: s.$ t.$ e.$
  // </0 & NameList/4 s.idx#0/5 t.idxV#0/6 e.idxVV#0/2 >/1
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
    // s.idx ( # TkName t.idx e.idx ) e.idx
    // </0 & NameList/4 s.Tag#1/5 (/6 # TkName/12 t.Pos#1/13 e.Name#1/10 )/7 e.Tokens#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    if( ! refalrts::brackets_term( context[10], context[11], context[6] ) )
      continue;
    context[12] = refalrts::ident_left(  ident_TkName, context[10], context[11] );
    if( ! context[12] )
      continue;
    // closed e.Tokens#1 as range 8
    context[14] = refalrts::tvar_left( context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.Name#1 as range 10
    //DEBUG: s.Tag#1: 5
    //DEBUG: e.Tokens#1: 8
    //DEBUG: t.Pos#1: 13
    //DEBUG: e.Name#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames/4 AsIs: s.Tag#1/5 AsIs: (/6 HalfReuse: </12 } & Mu/15 s.Tag#1/5/16 Tile{ AsIs: t.Pos#1/13 } Tile{ AsIs: e.Name#1/10 } >/17 Tile{ AsIs: )/7 AsIs: e.Tokens#1/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[15], ref_Mu.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[16], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_NameListm_DoNames.ref.function );
    refalrts::reinit_open_call( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[6], context[7] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & NameList/4 s.Tag#1/5 (/6 # TkRefal5Mode/12 t.Pos#1/13 s.Mode#1/15 )/7 e.Tokens#1/8 >/1
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
    //DEBUG: s.Tag#1: 5
    //DEBUG: e.Tokens#1: 8
    //DEBUG: t.Pos#1: 13
    //DEBUG: s.Mode#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/6 # TkRefal5Mode/12 t.Pos#1/13 s.Mode#1/15 )/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList/4 AsIs: s.Tag#1/5 } Tile{ AsIs: e.Tokens#1/8 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx t.idx e.idx
  // </0 & NameList/4 s.Tag#1/5 t.NextToken#1/6 e.Tokens#1/8 >/1
  context[8] = context[2];
  context[9] = context[3];
  // closed e.Tokens#1 as range 8
  //DEBUG: t.NextToken#1: 6
  //DEBUG: s.Tag#1: 5
  //DEBUG: e.Tokens#1: 8

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList$3?1?0/4 AsIs: s.Tag#1/5 AsIs: t.NextToken#1/6 } (/10 Tile{ AsIs: e.Tokens#1/8 } )/11 t.NextToken#1/6/12 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[6], context[7]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_NameList_S3C1C0.ref.function );
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

static refalrts::NativeReference nat_ref_NameList("NameList", 4078471296U, 2260943187U, func_NameList);


static refalrts::FnResult func_gen_NameList_S3C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & NameList$3?1?0/4 s.Tag#1/13 t.NextToken#1/15 (/11 e.Tokens#1/9 )/12 (/7 s.Type#2/14 t.Pos#2/17 e.Value#2/5 )/8 >/1
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
  //DEBUG: s.Tag#1: 13
  //DEBUG: s.Type#2: 14
  //DEBUG: t.NextToken#1: 15
  //DEBUG: t.Pos#2: 17
  //DEBUG: e.Value#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/14 {REMOVED TILE} e.Value#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/12 AsIs: (/7 } # Error/19 Tile{ AsIs: t.Pos#2/17 }"expe"/20 Tile{ HalfReuse: 'c'/11 }"ted function name after "/22 Tile{ AsIs: </0 Reuse: & TokName/4 AsIs: s.Tag#1/13 } >/24" keyword"/25 Tile{ AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: t.NextToken#1/15 } Tile{ AsIs: e.Tokens#1/9 } Tile{ ]] }
  if( ! refalrts::alloc_ident( context[19], ident_Error ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "expe", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[22], context[23], "ted function name after ", 24 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[25], context[26], " keyword", 8 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_char( context[11], 'c' );
  refalrts::update_name( context[4], ref_TokName.ref.function );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[12], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameList_S3C1C0("NameList$3?1?0", 4078471296U, 2260943187U, func_gen_NameList_S3C1C0);


static refalrts::FnResult func_TkExtern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & TkExtern/4 t.Pos#1/5 e.Name#1/2 >/1
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

static refalrts::NativeReference nat_ref_TkExtern("TkExtern", 4078471296U, 2260943187U, func_TkExtern);


static refalrts::FnResult func_TkEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & TkEnum/4 t.Pos#1/5 e.Name#1/2 >/1
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
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Enum/4 AsIs: t.Pos#1/5 } # GN-Local/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_ident( context[7], ident_GNm_Local ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Enum );
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

static refalrts::NativeReference nat_ref_TkEnum("TkEnum", 4078471296U, 2260943187U, func_TkEnum);


static refalrts::FnResult func_TkEEnum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & TkEEnum/4 t.Pos#1/5 e.Name#1/2 >/1
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
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Enum/4 AsIs: t.Pos#1/5 } # GN-Entry/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_ident( context[7], ident_GNm_Entry ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Enum );
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

static refalrts::NativeReference nat_ref_TkEEnum("TkEEnum", 4078471296U, 2260943187U, func_TkEEnum);


static refalrts::FnResult func_TkSwap(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & TkSwap/4 t.Pos#1/5 e.Name#1/2 >/1
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
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Swap/4 AsIs: t.Pos#1/5 } # GN-Local/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_ident( context[7], ident_GNm_Local ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Swap );
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

static refalrts::NativeReference nat_ref_TkSwap("TkSwap", 4078471296U, 2260943187U, func_TkSwap);


static refalrts::FnResult func_TkESwap(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & TkESwap/4 t.Pos#1/5 e.Name#1/2 >/1
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
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Swap/4 AsIs: t.Pos#1/5 } # GN-Entry/7 Tile{ AsIs: e.Name#1/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_ident( context[7], ident_GNm_Entry ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Swap );
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

static refalrts::NativeReference nat_ref_TkESwap("TkESwap", 4078471296U, 2260943187U, func_TkESwap);


static refalrts::FnResult func_NameListm_DoNames(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
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
    // s.idx ( e.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & NameList-DoNames/4 s.Tag#1/7 (/10 e.ExternsAndErrors#1/8 )/11 (/14 # TkRefal5Mode/16 t.Pos#1/17 s.Mode#1/19 )/15 e.Tokens#1/5 >/1
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
    context[16] = refalrts::ident_left(  ident_TkRefal5Mode, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.ExternsAndErrors#1 as range 8
    // closed e.Tokens#1 as range 5
    context[18] = refalrts::tvar_left( context[17], context[12], context[13] );
    if( ! context[18] )
      continue;
    if( ! refalrts::svar_left( context[19], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.ExternsAndErrors#1: 8
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.Pos#1: 17
    //DEBUG: s.Mode#1: 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/14 # TkRefal5Mode/16 t.Pos#1/17 s.Mode#1/19 )/15 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.ExternsAndErrors#1/8 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # TkComma t.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & NameList-DoNames/4 s.Tag#1/7 (/10 e.ExternsAndErrors#1/8 )/11 (/14 # TkComma/16 t.CommaPos#1/22 )/15 (/19 # TkRefal5Mode/21 t.ModePos#1/24 s.Mode#1/26 )/20 e.Tokens#1/5 >/1
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
    context[16] = refalrts::ident_left(  ident_TkComma, context[12], context[13] );
    if( ! context[16] )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  ident_TkRefal5Mode, context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.ExternsAndErrors#1 as range 8
    // closed e.Tokens#1 as range 5
    context[23] = refalrts::tvar_left( context[22], context[12], context[13] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[25] = refalrts::tvar_left( context[24], context[17], context[18] );
    if( ! context[25] )
      continue;
    if( ! refalrts::svar_left( context[26], context[17], context[18] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.ExternsAndErrors#1: 8
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.CommaPos#1: 22
    //DEBUG: t.ModePos#1: 24
    //DEBUG: s.Mode#1: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/19 # TkRefal5Mode/21 t.ModePos#1/24 s.Mode#1/26 )/20 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.ExternsAndErrors#1/8 AsIs: )/11 AsIs: (/14 AsIs: # TkComma/16 AsIs: t.CommaPos#1/22 AsIs: )/15 } Tile{ AsIs: e.Tokens#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # TkComma t.idx ) ( # TkName t.idx e.idx ) e.idx
    // </0 & NameList-DoNames/4 s.Tag#1/7 (/10 e.ExternsAndErrors#1/8 )/11 (/14 # TkComma/16 t.CommaPos#1/22 )/15 (/19 # TkName/21 t.NamePos#1/24 e.Name#1/17 )/20 e.Tokens#1/5 >/1
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
    context[16] = refalrts::ident_left(  ident_TkComma, context[12], context[13] );
    if( ! context[16] )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  ident_TkName, context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.ExternsAndErrors#1 as range 8
    // closed e.Tokens#1 as range 5
    context[23] = refalrts::tvar_left( context[22], context[12], context[13] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[25] = refalrts::tvar_left( context[24], context[17], context[18] );
    if( ! context[25] )
      continue;
    // closed e.Name#1 as range 17
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.ExternsAndErrors#1: 8
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.CommaPos#1: 22
    //DEBUG: t.NamePos#1: 24
    //DEBUG: e.Name#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.CommaPos#1/22 )/15 (/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.ExternsAndErrors#1/8 HalfReuse: </11 HalfReuse: & Mu/14 HalfReuse: s.Tag1 #7/16 } Tile{ AsIs: t.NamePos#1/24 } Tile{ AsIs: e.Name#1/17 } Tile{ HalfReuse: >/21 } Tile{ AsIs: )/20 AsIs: e.Tokens#1/5 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[14], ref_Mu.ref.function );
    refalrts::reinit_svar( context[16], context[7] );
    refalrts::reinit_close_call( context[21] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[20] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::splice_to_freelist_open( context[16], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # TkSemicolon t.idx ) e.idx
    // </0 & NameList-DoNames/4 s.Tag#1/7 (/10 e.ExternsAndErrors#1/8 )/11 (/14 # TkSemicolon/16 t.Pos#1/17 )/15 e.Tokens#1/5 >/1
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
    context[16] = refalrts::ident_left(  ident_TkSemicolon, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.ExternsAndErrors#1 as range 8
    // closed e.Tokens#1 as range 5
    context[18] = refalrts::tvar_left( context[17], context[12], context[13] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.ExternsAndErrors#1: 8
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.Pos#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NameList-DoNames/4 s.Tag#1/7 {REMOVED TILE} (/14 # TkSemicolon/16 t.Pos#1/17 )/15 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/10 AsIs: e.ExternsAndErrors#1/8 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/5 } Tile{ ]] }
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # TkComma t.idx ) e.idx
    // </0 & NameList-DoNames/4 s.Tag#1/7 (/10 e.ExternsAndErrors#1/8 )/11 (/14 # TkComma/16 t.Pos#1/17 )/15 e.Tokens#1/5 >/1
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
    context[16] = refalrts::ident_left(  ident_TkComma, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.ExternsAndErrors#1 as range 8
    // closed e.Tokens#1 as range 5
    context[18] = refalrts::tvar_left( context[17], context[12], context[13] );
    if( ! context[18] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.ExternsAndErrors#1: 8
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.Pos#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.ExternsAndErrors#1/8 HalfReuse: (/11 HalfReuse: # Error/14 } Tile{ AsIs: t.Pos#1/17 } 'e'/19 Tile{ HalfReuse: 'x'/16 }"pected name after comma"/20 )/22 Tile{ AsIs: )/15 AsIs: e.Tokens#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[19], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[20], context[21], "pected name after comma", 23 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_ident( context[14], ident_Error );
    refalrts::reinit_char( context[16], 'x' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[15] );
    refalrts::link_brackets( context[11], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # TkName t.idx e.idx ) ( # TkOpenBlock t.idx ) e.idx
    // </0 & NameList-DoNames/4 s.Tag#1/7 (/10 e.ExternsAndErrors#1/8 )/11 (/14 # TkName/16 t.NamePos#1/22 e.Name#1/12 )/15 (/19 # TkOpenBlock/21 t.BracketPos#1/24 )/20 e.Tokens#1/5 >/1
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
    context[16] = refalrts::ident_left(  ident_TkName, context[12], context[13] );
    if( ! context[16] )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[5], context[6] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    context[21] = refalrts::ident_left(  ident_TkOpenBlock, context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.ExternsAndErrors#1 as range 8
    // closed e.Tokens#1 as range 5
    context[23] = refalrts::tvar_left( context[22], context[12], context[13] );
    if( ! context[23] )
      continue;
    // closed e.Name#1 as range 12
    context[25] = refalrts::tvar_left( context[24], context[17], context[18] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.ExternsAndErrors#1: 8
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.NamePos#1: 22
    //DEBUG: e.Name#1: 12
    //DEBUG: t.BracketPos#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Tag#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.ExternsAndErrors#1/8 } Tile{ AsIs: (/10 } Tile{ HalfReuse: # Error/4 } t.NamePos#1/22/26"mis"/28 Tile{ HalfReuse: 's'/1 }"ed semicolon after previous $EXTERN declaration"/30 )/32 Tile{ AsIs: )/11 AsIs: (/14 AsIs: # TkName/16 AsIs: t.NamePos#1/22 AsIs: e.Name#1/12 AsIs: )/15 AsIs: (/19 AsIs: # TkOpenBlock/21 AsIs: t.BracketPos#1/24 AsIs: )/20 } Tile{ AsIs: e.Tokens#1/5 } Tile{ ]] }
    if (! refalrts::copy_evar(context[26], context[27], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[28], context[29], "mis", 3 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[30], context[31], "ed semicolon after previous $EXTERN declaration", 47 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Error );
    refalrts::reinit_char( context[1], 's' );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[0], context[11] );
    refalrts::link_brackets( context[10], context[32] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[11], context[20] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[26], context[29] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # TkName t.idx e.idx ) e.idx
    // </0 & NameList-DoNames/4 s.Tag#1/7 (/10 e.ExternsAndErrors#1/8 )/11 (/14 # TkName/16 t.Pos#1/17 e.Name#1/12 )/15 e.Tokens#1/5 >/1
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
    context[16] = refalrts::ident_left(  ident_TkName, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.ExternsAndErrors#1 as range 8
    // closed e.Tokens#1 as range 5
    context[18] = refalrts::tvar_left( context[17], context[12], context[13] );
    if( ! context[18] )
      continue;
    // closed e.Name#1 as range 12
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.ExternsAndErrors#1: 8
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.Pos#1: 17
    //DEBUG: e.Name#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#1/12 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.ExternsAndErrors#1/8 HalfReuse: (/11 HalfReuse: # Error/14 } Tile{ AsIs: t.Pos#1/17 } 'm'/19 Tile{ HalfReuse: 'i'/16 }"ssed comma after external name"/20 )/22 Tile{ AsIs: )/15 AsIs: e.Tokens#1/5 AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[19], 'm' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[20], context[21], "ssed comma after external name", 30 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_ident( context[14], ident_Error );
    refalrts::reinit_char( context[16], 'i' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[15] );
    refalrts::link_brackets( context[11], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[15];
    res = refalrts::splice_evar( res, context[20], context[22] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx e.idx
    // </0 & NameList-DoNames/4 s.Tag#1/7 (/10 e.ExternsAndErrors#1/8 )/11 t.NextToken#1/12 e.Tokens#1/5 >/1
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
    // closed e.ExternsAndErrors#1 as range 8
    context[13] = refalrts::tvar_left( context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    // closed e.Tokens#1 as range 5
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.ExternsAndErrors#1: 8
    //DEBUG: t.NextToken#1: 12
    //DEBUG: e.Tokens#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$8?1?0/4 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.ExternsAndErrors#1/8 AsIs: )/11 AsIs: t.NextToken#1/12 } (/14 Tile{ AsIs: e.Tokens#1/5 } )/15 t.NextToken#1/12/16 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[16], context[17], context[12], context[13]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S8C1C0.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[14], context[14] );
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

static refalrts::NativeReference nat_ref_NameListm_DoNames("NameList-DoNames", 4078471296U, 2260943187U, func_NameListm_DoNames);


static refalrts::FnResult func_gen_NameListm_DoNames_S8C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
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
    // s.idx ( e.idx ) t.idx ( e.idx ) ( s.idx t.idx e.idx )
    // </0 & NameList-DoNames$8?1?0/4 s.Tag#1/15 (/18 e.ExternsAndErrors#1/16 )/19 t.NextToken#1/21 (/13 e.Tokens#1/11 )/14 (/9 s.Type#2/20 t.Pos#2/23 e.Value#2/7 )/10 >/1
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
    // closed e.ExternsAndErrors#1 as range 16
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
    // closed e.Value#2 as range 7
    //DEBUG: e.Tokens#1: 11
    //DEBUG: s.Tag#1: 15
    //DEBUG: e.ExternsAndErrors#1: 16
    //DEBUG: s.Type#2: 20
    //DEBUG: t.NextToken#1: 21
    //DEBUG: t.Pos#2: 23
    //DEBUG: e.Value#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$8?2?0/4 AsIs: s.Tag#1/15 AsIs: (/18 AsIs: e.ExternsAndErrors#1/16 AsIs: )/19 AsIs: t.NextToken#1/21 AsIs: (/13 AsIs: e.Tokens#1/11 AsIs: )/14 HalfReuse: s.Type2 #20/9 } Tile{ AsIs: t.Pos#2/23 } (/25 Tile{ AsIs: e.Value#2/7 } )/26 </27 & OneOf/28 Tile{ AsIs: s.Type#2/20 } # TkExtern/29 # TkEntry/30 # TkEOF/31 Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], ident_TkExtern ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[30], ident_TkEntry ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[31], ident_TkEOF ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S8C2C0.ref.function );
    refalrts::reinit_svar( context[9], context[20] );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
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

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S8C1C0("NameList-DoNames$8?1?0", 4078471296U, 2260943187U, func_gen_NameListm_DoNames_S8C1C0);


static refalrts::FnResult func_gen_NameListm_DoNames_S8C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & NameList-DoNames$8?1?1/4 s.Tag#1/5 (/8 e.ExternsAndErrors#1/6 )/9 t.NextToken#1/10 e.Tokens#1/2 >/1
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
  // closed e.ExternsAndErrors#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Tag#1: 5
  //DEBUG: e.ExternsAndErrors#1: 6
  //DEBUG: t.NextToken#1: 10
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames/4 AsIs: s.Tag#1/5 AsIs: (/8 AsIs: e.ExternsAndErrors#1/6 HalfReuse: </9 } & UnexpectedToken/12 Tile{ AsIs: t.NextToken#1/10 }"comma or semicolon"/13 >/15 )/16 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[12], ref_UnexpectedToken.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[13], context[14], "comma or semicolon", 18 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_NameListm_DoNames.ref.function );
  refalrts::reinit_open_call( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[16] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S8C1C1("NameList-DoNames$8?1?1", 4078471296U, 2260943187U, func_gen_NameListm_DoNames_S8C1C1);


static refalrts::FnResult func_gen_NameListm_DoNames_S8C2C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  //FAST GEN: s.$ ( e.$ ) t.$ ( e.$ ) s.$ t.$ ( e.$ ) e.$
  //GLOBAL GEN: s.$ ( e.$ ) t.$ ( e.$ ) s.$ t.$ ( e.$ ) e.$
  // </0 & NameList-DoNames$8?2?0/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 (/14 e.idxVTVB#0/12 )/15 s.idxVTVT#0/16 t.idxVTVTV#0/17 (/21 e.idxVTVTVVB#0/19 )/22 e.idxVTVTVVT#0/2 >/1
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
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.idxVTVTVVB#0 as range 19
  // closed e.idxVTVTVVT#0 as range 2
  do {
    // s.idx ( e.idx ) t.idx ( e.idx ) s.idx t.idx ( e.idx ) # True
    // </0 & NameList-DoNames$8?2?0/4 s.Tag#1/5 (/8 e.ExternsAndErrors#1/23 )/9 t.NextToken#1/10 (/14 e.Tokens#1/25 )/15 s.Type#2/16 t.Pos#2/17 (/21 e.Value#2/27 )/22 # True/31 >/1
    context[23] = context[6];
    context[24] = context[7];
    context[25] = context[12];
    context[26] = context[13];
    context[27] = context[19];
    context[28] = context[20];
    context[29] = context[2];
    context[30] = context[3];
    context[31] = refalrts::ident_left(  ident_True, context[29], context[30] );
    if( ! context[31] )
      continue;
    if( ! refalrts::empty_seq( context[29], context[30] ) )
      continue;
    // closed e.ExternsAndErrors#1 as range 23
    // closed e.Tokens#1 as range 25
    // closed e.Value#2 as range 27
    //DEBUG: t.NextToken#1: 10
    //DEBUG: t.Pos#2: 17
    //DEBUG: s.Tag#1: 5
    //DEBUG: s.Type#2: 16
    //DEBUG: e.ExternsAndErrors#1: 23
    //DEBUG: e.Tokens#1: 25
    //DEBUG: e.Value#2: 27

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Tag#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/16 {REMOVED TILE} e.Value#2/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.ExternsAndErrors#1/23 HalfReuse: (/9 } Tile{ HalfReuse: # Error/14 } Tile{ AsIs: t.Pos#2/17 HalfReuse: 'm'/21 } Tile{ HalfReuse: 'i'/0 HalfReuse: 's'/4 } Tile{ HalfReuse: 's'/15 }"ed"/32 Tile{ HalfReuse: ' '/1 }"semicolon"/34 Tile{ AsIs: )/22 HalfReuse: )/31 } Tile{ AsIs: t.NextToken#1/10 } Tile{ AsIs: e.Tokens#1/25 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[32], context[33], "ed", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[34], context[35], "semicolon", 9 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_ident( context[14], ident_Error );
    refalrts::reinit_char( context[21], 'm' );
    refalrts::reinit_char( context[0], 'i' );
    refalrts::reinit_char( context[4], 's' );
    refalrts::reinit_char( context[15], 's' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::reinit_close_bracket( context[31] );
    refalrts::link_brackets( context[8], context[31] );
    refalrts::link_brackets( context[9], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[22], context[31] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) t.idx ( e.idx ) s.idx t.idx ( e.idx ) e.idx
  // </0 & NameList-DoNames$8?2?0/4 s.Tag#1/5 (/8 e.ExternsAndErrors#1/23 )/9 t.NextToken#1/10 (/14 e.Tokens#1/25 )/15 s.Type#2/16 t.Pos#2/17 (/21 e.Value#2/27 )/22 e.Other#0/29 >/1
  context[23] = context[6];
  context[24] = context[7];
  context[25] = context[12];
  context[26] = context[13];
  context[27] = context[19];
  context[28] = context[20];
  context[29] = context[2];
  context[30] = context[3];
  // closed e.ExternsAndErrors#1 as range 23
  // closed e.Tokens#1 as range 25
  // closed e.Value#2 as range 27
  // closed e.Other#0 as range 29
  //DEBUG: t.NextToken#1: 10
  //DEBUG: t.Pos#2: 17
  //DEBUG: s.Tag#1: 5
  //DEBUG: s.Type#2: 16
  //DEBUG: e.ExternsAndErrors#1: 23
  //DEBUG: e.Tokens#1: 25
  //DEBUG: e.Value#2: 27
  //DEBUG: e.Other#0: 29

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Other#0/29 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$8?2?1/4 AsIs: s.Tag#1/5 AsIs: (/8 AsIs: e.ExternsAndErrors#1/23 AsIs: )/9 AsIs: t.NextToken#1/10 AsIs: (/14 AsIs: e.Tokens#1/25 AsIs: )/15 } Tile{ AsIs: (/21 } Tile{ AsIs: s.Type#2/16 AsIs: t.Pos#2/17 } Tile{ AsIs: e.Value#2/27 } Tile{ AsIs: )/22 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S8C2C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::splice_to_freelist_open( context[15], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S8C2C0("NameList-DoNames$8?2?0", 4078471296U, 2260943187U, func_gen_NameListm_DoNames_S8C2C0);


static refalrts::FnResult func_gen_NameListm_DoNames_S8C2C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & NameList-DoNames$8?2?1/4 s.Tag#1/5 (/8 e.ExternsAndErrors#1/6 )/9 t.NextToken#1/10 (/14 e.Tokens#1/12 )/15 e.Other#0/2 >/1
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
  // closed e.ExternsAndErrors#1 as range 6
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
  // closed e.Other#0 as range 2
  //DEBUG: s.Tag#1: 5
  //DEBUG: e.ExternsAndErrors#1: 6
  //DEBUG: t.NextToken#1: 10
  //DEBUG: e.Tokens#1: 12
  //DEBUG: e.Other#0: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/14 {REMOVED TILE} )/15 e.Other#0/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames$8?1?1/4 AsIs: s.Tag#1/5 AsIs: (/8 AsIs: e.ExternsAndErrors#1/6 AsIs: )/9 AsIs: t.NextToken#1/10 } Tile{ AsIs: e.Tokens#1/12 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_NameListm_DoNames_S8C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameListm_DoNames_S8C2C1("NameList-DoNames$8?2?1", 4078471296U, 2260943187U, func_gen_NameListm_DoNames_S8C2C1);


static refalrts::FnResult func_gen_Include_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: ( e.$ ) ( e.$ ) t.$ t.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) t.$ t.$
  // </0 & Include:1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 t.idxTT#0/13 t.idxTTV#0/15 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) ( e.idx ) ( # TkCompound t.idx e.idx ) ( # TkSemicolon t.idx )
    // </0 & Include:1/4 (/7 e.MaybeError#2/17 )/8 (/11 e.Tokens#1/19 )/12 (/13 # TkCompound/25 t.FilePos#3/27 e.FileName#3/21 )/14 (/15 # TkSemicolon/26 t.SemicolonPos#3/29 )/16 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[13] ) )
      continue;
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[15] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkCompound, context[21], context[22] );
    if( ! context[25] )
      continue;
    context[26] = refalrts::ident_left(  ident_TkSemicolon, context[23], context[24] );
    if( ! context[26] )
      continue;
    // closed e.MaybeError#2 as range 17
    // closed e.Tokens#1 as range 19
    context[28] = refalrts::tvar_left( context[27], context[21], context[22] );
    if( ! context[28] )
      continue;
    // closed e.FileName#3 as range 21
    context[30] = refalrts::tvar_left( context[29], context[23], context[24] );
    if( ! context[30] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: e.MaybeError#2: 17
    //DEBUG: e.Tokens#1: 19
    //DEBUG: t.FilePos#3: 27
    //DEBUG: e.FileName#3: 21
    //DEBUG: t.SemicolonPos#3: 29

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & Include:1/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 {REMOVED TILE} # TkSemicolon/26 t.SemicolonPos#3/29 )/16 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.MaybeError#2/17 } Tile{ AsIs: (/13 Reuse: # Include/25 AsIs: t.FilePos#3/27 AsIs: e.FileName#3/21 AsIs: )/14 HalfReuse: )/15 } Tile{ AsIs: e.Tokens#1/19 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[25], ident_Include );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::link_brackets( context[0], context[15] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( # TkCompound t.idx e.idx ) t.idx
    // </0 & Include:1/4 (/7 e.MaybeError#2/17 )/8 (/11 e.Tokens#1/19 )/12 (/13 # TkCompound/23 t.FilePos#3/24 e.FileName#3/21 )/14 t.Unexpected#3/15 >/1
    context[17] = context[5];
    context[18] = context[6];
    context[19] = context[9];
    context[20] = context[10];
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[13] ) )
      continue;
    context[23] = refalrts::ident_left(  ident_TkCompound, context[21], context[22] );
    if( ! context[23] )
      continue;
    // closed e.MaybeError#2 as range 17
    // closed e.Tokens#1 as range 19
    context[25] = refalrts::tvar_left( context[24], context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.FileName#3 as range 21
    //DEBUG: t.Unexpected#3: 15
    //DEBUG: e.MaybeError#2: 17
    //DEBUG: e.Tokens#1: 19
    //DEBUG: t.FilePos#3: 24
    //DEBUG: e.FileName#3: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.MaybeError#2/17 HalfReuse: </8 HalfReuse: & UnexpectedToken/11 } Tile{ AsIs: t.Unexpected#3/15 HalfReuse: '\''/1 } Tile{ HalfReuse: ';'/0 HalfReuse: '\''/4 } Tile{ HalfReuse: >/12 AsIs: (/13 Reuse: # Include/23 AsIs: t.FilePos#3/24 AsIs: e.FileName#3/21 AsIs: )/14 } )/26 t.Unexpected#3/15/27 Tile{ AsIs: e.Tokens#1/19 } Tile{ ]] }
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[27], context[28], context[15], context[16]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_name( context[11], ref_UnexpectedToken.ref.function );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::reinit_char( context[0], ';' );
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_close_call( context[12] );
    refalrts::update_ident( context[23], ident_Include );
    refalrts::link_brackets( context[7], context[26] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::push_stack( context[12] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[12], context[14] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[15], context[1] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) t.idx t.idx
  // </0 & Include:1/4 (/7 e.MaybeError#2/17 )/8 (/11 e.Tokens#1/19 )/12 t.Unexpected1#3/13 t.Unexpected2#3/15 >/1
  context[17] = context[5];
  context[18] = context[6];
  context[19] = context[9];
  context[20] = context[10];
  // closed e.MaybeError#2 as range 17
  // closed e.Tokens#1 as range 19
  //DEBUG: t.Unexpected1#3: 13
  //DEBUG: t.Unexpected2#3: 15
  //DEBUG: e.MaybeError#2: 17
  //DEBUG: e.Tokens#1: 19

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.MaybeError#2/17 HalfReuse: </8 HalfReuse: & UnexpectedToken/11 } t.Unexpected1#3/13/21"com"/23 Tile{ HalfReuse: 'p'/0 HalfReuse: 'o'/4 }"und symbol"/25 Tile{ AsIs: >/1 } Tile{ AsIs: )/12 AsIs: t.Unexpected1#3/13 AsIs: t.Unexpected2#3/15 } Tile{ AsIs: e.Tokens#1/19 } Tile{ ]] }
  if (! refalrts::copy_evar(context[21], context[22], context[13], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[23], context[24], "com", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[25], context[26], "und symbol", 10 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[8] );
  refalrts::reinit_name( context[11], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[0], 'p' );
  refalrts::reinit_char( context[4], 'o' );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Include_B1("Include:1", 4078471296U, 2260943187U, func_gen_Include_B1);


static refalrts::FnResult func_Include(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Include/4 s.Mode#1/5 t.Pos#1/6 t.Token1#1/8 t.Token2#1/10 e.Tokens#1/2 >/1
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
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: t.Pos#1: 6
  //DEBUG: t.Token1#1: 8
  //DEBUG: t.Token2#1: 10
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Include?1?0/4 AsIs: s.Mode#1/5 AsIs: t.Pos#1/6 AsIs: t.Token1#1/8 AsIs: t.Token2#1/10 } (/12 Tile{ AsIs: e.Tokens#1/2 } )/13 </14 & ClassicError/15 s.Mode#1/5/16 t.Pos#1/6/17"$INCLUDE is extension"/19 >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_ClassicError.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[16], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[6], context[7]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[19], context[20], "$INCLUDE is extension", 21 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_Include_C1C0.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[21] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Include("Include", 4078471296U, 2260943187U, func_Include);


static refalrts::FnResult func_gen_Include_C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Include?1?0/4 s.Mode#1/5 t.Pos#1/6 t.Token1#1/8 t.Token2#1/10 (/14 e.Tokens#1/12 )/15 e.MaybeError#2/2 >/1
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
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
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
  // closed e.MaybeError#2 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: t.Pos#1: 6
  //DEBUG: t.Token1#1: 8
  //DEBUG: t.Token2#1: 10
  //DEBUG: e.Tokens#1: 12
  //DEBUG: e.MaybeError#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Mode#1/5 t.Pos#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Include:1/16 (/17 Tile{ AsIs: e.MaybeError#2/2 } )/18 Tile{ AsIs: (/14 AsIs: e.Tokens#1/12 AsIs: )/15 } {*}/19 Tile{ AsIs: t.Token1#1/8 AsIs: t.Token2#1/10 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[16], ref_gen_Include_B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[19], context[4] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::splice_to_freelist_open( context[4], res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Include_C1C0("Include?1?0", 4078471296U, 2260943187U, func_gen_Include_C1C0);


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

static refalrts::NativeReference nat_ref_Function("Function", 4078471296U, 2260943187U, func_Function);


static refalrts::FnResult func_Functionm_AfterBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Function-AfterBlock/4 t.Pos#1/5 (/9 e.Name#1/7 )/10 s.Scope#1/11 (/14 e.Errors#1/12 )/15 (/18 e.Body#1/16 )/19 e.Tokens#1/2 >/1
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
  // closed e.Body#1 as range 16
  // closed e.Tokens#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Name#1: 7
  //DEBUG: s.Scope#1: 11
  //DEBUG: e.Errors#1: 12
  //DEBUG: e.Body#1: 16
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Function-AfterBlock/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/14 AsIs: e.Errors#1/12 HalfReuse: (/15 HalfReuse: # Function/18 } Tile{ AsIs: t.Pos#1/5 } Tile{ AsIs: s.Scope#1/11 } Tile{ AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } Tile{ AsIs: e.Body#1/16 } Tile{ AsIs: )/19 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[15] );
  refalrts::reinit_ident( context[18], ident_Function );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[14], context[1] );
  refalrts::link_brackets( context[15], context[19] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Functionm_AfterBlock("Function-AfterBlock", 4078471296U, 2260943187U, func_Functionm_AfterBlock);


static refalrts::FnResult func_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Block/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // s.idx ( # TkOpenBlock t.idx ) ( # TkCloseBlock t.idx ) e.idx
    // </0 & Block/4 s.Mode#1/7 (/10 # TkOpenBlock/12 t.OpenPos#1/18 )/11 (/15 # TkCloseBlock/17 t.ClosePos#1/20 )/16 e.Tokens#1/5 >/1
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
    context[12] = refalrts::ident_left(  ident_TkOpenBlock, context[8], context[9] );
    if( ! context[12] )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  ident_TkCloseBlock, context[13], context[14] );
    if( ! context[17] )
      continue;
    // closed e.Tokens#1 as range 5
    context[19] = refalrts::tvar_left( context[18], context[8], context[9] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[13], context[14] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[13], context[14] ) )
      continue;
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 5
    //DEBUG: t.OpenPos#1: 18
    //DEBUG: t.ClosePos#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} t.ClosePos#1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 } Tile{ HalfReuse: & ClassicError/10 HalfReuse: s.Mode1 #7/12 AsIs: t.OpenPos#1/18 HalfReuse: 'E'/11 HalfReuse: 'm'/15 HalfReuse: 'p'/17 }"ty function block"/22 Tile{ AsIs: >/1 } Tile{ AsIs: )/16 } (/24 # Sentences/25 )/26 Tile{ AsIs: e.Tokens#1/5 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[22], context[23], "ty function block", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[25], ident_Sentences ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_call( context[4] );
    refalrts::reinit_name( context[10], ref_ClassicError.ref.function );
    refalrts::reinit_svar( context[12], context[7] );
    refalrts::reinit_char( context[11], 'E' );
    refalrts::reinit_char( context[15], 'm' );
    refalrts::reinit_char( context[17], 'p' );
    refalrts::link_brackets( context[24], context[26] );
    refalrts::link_brackets( context[0], context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[4] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[10], context[17] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # TkOpenBlock t.idx ) ( # TkNativeCode t.idx e.idx ) t.idx e.idx
    // </0 & Block/4 s.Mode#1/7 (/10 # TkOpenBlock/12 t.OpenPos#1/18 )/11 (/15 # TkNativeCode/17 t.NativePos#1/20 e.Code#1/13 )/16 t.CloseBlock#1/22 e.Tokens#1/5 >/1
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
    context[12] = refalrts::ident_left(  ident_TkOpenBlock, context[8], context[9] );
    if( ! context[12] )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    context[17] = refalrts::ident_left(  ident_TkNativeCode, context[13], context[14] );
    if( ! context[17] )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[8], context[9] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[8], context[9] ) )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[13], context[14] );
    if( ! context[21] )
      continue;
    // closed e.Code#1 as range 13
    context[23] = refalrts::tvar_left( context[22], context[5], context[6] );
    if( ! context[23] )
      continue;
    // closed e.Tokens#1 as range 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: t.OpenPos#1: 18
    //DEBUG: t.NativePos#1: 20
    //DEBUG: e.Code#1: 13
    //DEBUG: t.CloseBlock#1: 22
    //DEBUG: e.Tokens#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block$2?1?0/4 AsIs: s.Mode#1/7 } Tile{ AsIs: t.OpenPos#1/18 } Tile{ AsIs: t.NativePos#1/20 } Tile{ AsIs: (/10 } Tile{ AsIs: e.Code#1/13 } Tile{ AsIs: )/16 AsIs: t.CloseBlock#1/22 } Tile{ HalfReuse: (/12 } Tile{ AsIs: e.Tokens#1/5 } Tile{ AsIs: )/11 HalfReuse: </15 HalfReuse: & IsCloseBlock/17 } t.CloseBlock#1/22/24 >/26 Tile{ AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[24], context[25], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_Block_S2C1C0.ref.function );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_open_call( context[15] );
    refalrts::reinit_name( context[17], ref_IsCloseBlock.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[12], context[11] );
    refalrts::link_brackets( context[10], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[11], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[12], context[12] );
    res = refalrts::splice_evar( res, context[16], context[23] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & Block/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block$2?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_Block_S2C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Block("Block", 4078471296U, 2260943187U, func_Block);


static refalrts::FnResult func_gen_Block_S2C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
  //FAST GEN: s.$ t.$ t.$ ( e.$ ) t.$ ( e.$ ) e.$
  //GLOBAL GEN: s.$ t.$ t.$ ( e.$ ) t.$ ( e.$ ) e.$
  // </0 & Block$2?1?0/4 s.idx#0/5 t.idxV#0/6 t.idxVV#0/8 (/12 e.idxVVVB#0/10 )/13 t.idxVVVT#0/14 (/18 e.idxVVVTVB#0/16 )/19 e.idxVVVTVT#0/2 >/1
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
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.idxVVVB#0 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.idxVVVTVB#0 as range 16
  // closed e.idxVVVTVT#0 as range 2
  do {
    // s.idx t.idx t.idx ( e.idx ) t.idx ( e.idx ) ( e.idx ) e.idx
    // </0 & Block$2?1?0/4 s.Mode#1/5 t.OpenPos#1/6 t.NativePos#1/8 (/12 e.Code#1/20 )/13 t.CloseBlock#1/14 (/18 e.Tokens#1/22 )/19 (/28 e.Error#2/26 )/29 e.NextToken#2/24 >/1
    context[20] = context[10];
    context[21] = context[11];
    context[22] = context[16];
    context[23] = context[17];
    context[24] = context[2];
    context[25] = context[3];
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    // closed e.Code#1 as range 20
    // closed e.Tokens#1 as range 22
    // closed e.Error#2 as range 26
    // closed e.NextToken#2 as range 24
    //DEBUG: t.OpenPos#1: 6
    //DEBUG: t.NativePos#1: 8
    //DEBUG: t.CloseBlock#1: 14
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Code#1: 20
    //DEBUG: e.Tokens#1: 22
    //DEBUG: e.Error#2: 26
    //DEBUG: e.NextToken#2: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.OpenPos#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.CloseBlock#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/18 } Tile{ AsIs: </0 Reuse: & ClassicError/4 AsIs: s.Mode#1/5 } Tile{ AsIs: t.NativePos#1/8 HalfReuse: 'N'/12 }"ative c"/30 Tile{ HalfReuse: 'o'/1 }"de insertion is an extensio"/32 Tile{ HalfReuse: 'n'/19 HalfReuse: >/28 AsIs: e.Error#2/26 AsIs: )/29 } (/34 # NativeBody/35 t.NativePos#1/8/36 Tile{ AsIs: e.Code#1/20 } Tile{ AsIs: )/13 } Tile{ AsIs: e.NextToken#2/24 } Tile{ AsIs: e.Tokens#1/22 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[30], context[31], "ative c", 7 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[32], context[33], "de insertion is an extensio", 27 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], ident_NativeBody ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[36], context[37], context[8], context[9]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ClassicError.ref.function );
    refalrts::reinit_char( context[12], 'N' );
    refalrts::reinit_char( context[1], 'o' );
    refalrts::reinit_char( context[19], 'n' );
    refalrts::reinit_close_call( context[28] );
    refalrts::link_brackets( context[34], context[13] );
    refalrts::link_brackets( context[18], context[29] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[34], context[37] );
    res = refalrts::splice_evar( res, context[19], context[29] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx t.idx t.idx ( e.idx ) t.idx ( e.idx ) e.idx
  // </0 & Block$2?1?0/4 s.Mode#1/5 t.OpenPos#1/6 t.NativePos#1/8 (/12 e.Code#1/20 )/13 t.CloseBlock#1/14 (/18 e.Tokens#1/22 )/19 e.Other#0/24 >/1
  context[20] = context[10];
  context[21] = context[11];
  context[22] = context[16];
  context[23] = context[17];
  context[24] = context[2];
  context[25] = context[3];
  // closed e.Code#1 as range 20
  // closed e.Tokens#1 as range 22
  // closed e.Other#0 as range 24
  //DEBUG: t.OpenPos#1: 6
  //DEBUG: t.NativePos#1: 8
  //DEBUG: t.CloseBlock#1: 14
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Code#1: 20
  //DEBUG: e.Tokens#1: 22
  //DEBUG: e.Other#0: 24

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Other#0/24 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block$2?1?1/4 AsIs: s.Mode#1/5 } Tile{ AsIs: (/12 } # TkOpenBlock/26 Tile{ AsIs: t.OpenPos#1/6 } Tile{ AsIs: )/19 } Tile{ AsIs: (/18 } # TkNativeCode/27 Tile{ AsIs: t.NativePos#1/8 } Tile{ AsIs: e.Code#1/20 } Tile{ AsIs: )/13 AsIs: t.CloseBlock#1/14 } Tile{ AsIs: e.Tokens#1/22 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[26], ident_TkOpenBlock ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[27], ident_TkNativeCode ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_Block_S2C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[18], context[13] );
  refalrts::link_brackets( context[12], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::splice_to_freelist_open( context[5], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Block_S2C1C0("Block$2?1?0", 4078471296U, 2260943187U, func_gen_Block_S2C1C0);


static refalrts::FnResult func_gen_Block_S2C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: s.$ t.$ e.$
  //GLOBAL GEN: s.$ t.$ e.$
  // </0 & Block$2?1?1/4 s.idx#0/5 t.idxV#0/6 e.idxVV#0/2 >/1
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
    // </0 & Block$2?1?1/4 s.Mode#1/5 (/6 # TkOpenBlock/12 t.Pos#1/13 )/7 e.Tokens#1/8 >/1
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
    // </0 & Block$2?1?1/4 s.Mode#1/5 (/6 # TkRefal5Mode/12 t.Pos#1/13 s.NewMode#1/15 )/7 e.Tokens#1/8 >/1
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block/4 } Tile{ HalfReuse: s.NewMode1 #15/7 AsIs: e.Tokens#1/8 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Block.ref.function );
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
  // </0 & Block$2?1?1/4 s.Mode#1/5 t.Unexpected#1/6 e.Tokens#1/8 >/1
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

static refalrts::NativeReference nat_ref_gen_Block_S2C1C1("Block$2?1?1", 4078471296U, 2260943187U, func_gen_Block_S2C1C1);


static refalrts::FnResult func_IsCloseBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & IsCloseBlock/4 t.idx#0/5 >/1
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
    // ( # TkCloseBlock t.idx )
    // </0 & IsCloseBlock/4 (/5 # TkCloseBlock/9 t.Pos#1/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TkCloseBlock, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.Pos#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & IsCloseBlock/4 (/5 # TkCloseBlock/9 t.Pos#1/10 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[6], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & IsCloseBlock/4 t.Unexpected#1/5 >/1
  //DEBUG: t.Unexpected#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/7 Tile{ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: '\''/1 }"}\'"/8 >/10 )/11 t.Unexpected#1/5/12 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "}\'", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[1], '\'' );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_IsCloseBlock("IsCloseBlock", 4078471296U, 2260943187U, func_IsCloseBlock);


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
    //TRASH: {REMOVED TILE} & Block-AfterSentence$1:1/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} )/12 (/15 {REMOVED TILE} )/16 {REMOVED TILE} {REMOVED TILE} )/22 t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 (/28 # TkSemicolon/44 t.Pos1#2/46 {REMOVED TILE} t.Pos2#2/48 )/31 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#1/32 } Tile{ AsIs: e.SentenceErrors#1/36 } Tile{ AsIs: )/29 AsIs: (/30 Reuse: # Sentences/45 } Tile{ AsIs: e.Sentences#1/34 } Tile{ AsIs: t.NextSentence#1/17 HalfReuse: )/21 } Tile{ AsIs: e.Tokens#1/38 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[45], ident_Sentences );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::link_brackets( context[30], context[21] );
    refalrts::link_brackets( context[0], context[29] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[29], context[45] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::splice_to_freelist_open( context[0], res );
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
    //TRASH: {REMOVED TILE} & Block-AfterSentence$1:1/4 (/7 {REMOVED TILE} )/8 (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} (/21 {REMOVED TILE} )/22 t.Token2#1/23 s.Mode#1/25 t.Token1#1/26 (/28 {REMOVED TILE} t.Pos#2/43 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#1/32 } Tile{ AsIs: e.SentenceErrors#1/36 } Tile{ AsIs: )/12 AsIs: (/15 } Tile{ Reuse: # Sentences/42 } Tile{ AsIs: e.Sentences#1/34 } Tile{ AsIs: t.NextSentence#1/17 } Tile{ AsIs: )/29 AsIs: t.Token2#1/30 } Tile{ AsIs: e.Tokens#1/38 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::update_ident( context[42], ident_Sentences );
    refalrts::link_brackets( context[15], context[29] );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[42], context[42] );
    res = refalrts::splice_evar( res, context[12], context[15] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::splice_to_freelist_open( context[0], res );
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

static refalrts::NativeReference nat_ref_gen_Blockm_AfterSentence_S1B1("Block-AfterSentence$1:1", 4078471296U, 2260943187U, func_gen_Blockm_AfterSentence_S1B1);


static refalrts::FnResult func_Blockm_AfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$ t.$ e.$
  // </0 & Block-AfterSentence/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 (/16 e.idxVTTB#0/14 )/17 t.idxVTTT#0/18 t.idxVTTTV#0/20 e.idxVTTTVV#0/2 >/1
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
  context[21] = refalrts::tvar_left( context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTTTVV#0 as range 2
  do {
    // s.idx ( e.idx ) ( e.idx ) ( e.idx ) t.idx t.idx t.idx e.idx
    // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Errors#1/22 )/9 (/12 e.Sentences#1/24 )/13 (/16 e.SentenceErrors#1/26 )/17 t.NextSentence#1/18 t.Token1#1/20 t.Token2#1/30 e.Tokens#1/28 >/1
    context[22] = context[6];
    context[23] = context[7];
    context[24] = context[10];
    context[25] = context[11];
    context[26] = context[14];
    context[27] = context[15];
    context[28] = context[2];
    context[29] = context[3];
    // closed e.Errors#1 as range 22
    // closed e.Sentences#1 as range 24
    // closed e.SentenceErrors#1 as range 26
    context[31] = refalrts::tvar_left( context[30], context[28], context[29] );
    if( ! context[31] )
      continue;
    // closed e.Tokens#1 as range 28
    //DEBUG: t.NextSentence#1: 18
    //DEBUG: t.Token1#1: 20
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 22
    //DEBUG: e.Sentences#1: 24
    //DEBUG: e.SentenceErrors#1: 26
    //DEBUG: t.Token2#1: 30
    //DEBUG: e.Tokens#1: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Block-AfterSentence$1:1/32 Tile{ AsIs: (/8 AsIs: e.Errors#1/22 AsIs: )/9 AsIs: (/12 AsIs: e.Sentences#1/24 AsIs: )/13 AsIs: (/16 AsIs: e.SentenceErrors#1/26 AsIs: )/17 AsIs: t.NextSentence#1/18 } (/33 Tile{ AsIs: e.Tokens#1/28 } )/34 t.Token2#1/30/35 Tile{ AsIs: s.Mode#1/5 } t.Token1#1/20/37 {*}/39 Tile{ AsIs: t.Token1#1/20 AsIs: t.Token2#1/30 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[32], ref_gen_Blockm_AfterSentence_S1B1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[35], context[36], context[30], context[31]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[37], context[38], context[20], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[39], context[4] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[4] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[33], context[34] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[31] );
    res = refalrts::splice_evar( res, context[37], context[39] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[34], context[36] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[8], context[19] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    refalrts::use( res );
    refalrts::wrap_closure( context[39] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx ) ( e.idx ) t.idx ( # TkEOF t.idx )
  // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Errors#1/22 )/9 (/12 e.Sentences#1/24 )/13 (/16 e.SentenceErrors#1/26 )/17 t.NextSentence#1/18 (/20 # TkEOF/32 t.Pos#1/33 )/21 >/1
  context[22] = context[6];
  context[23] = context[7];
  context[24] = context[10];
  context[25] = context[11];
  context[26] = context[14];
  context[27] = context[15];
  context[28] = context[2];
  context[29] = context[3];
  context[30] = 0;
  context[31] = 0;
  if( ! refalrts::brackets_term( context[30], context[31], context[20] ) )
    return refalrts::cRecognitionImpossible;
  context[32] = refalrts::ident_left(  ident_TkEOF, context[30], context[31] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[28], context[29] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 22
  // closed e.Sentences#1 as range 24
  // closed e.SentenceErrors#1 as range 26
  context[34] = refalrts::tvar_left( context[33], context[30], context[31] );
  if( ! context[34] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[30], context[31] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.NextSentence#1: 18
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 22
  //DEBUG: e.Sentences#1: 24
  //DEBUG: e.SentenceErrors#1: 26
  //DEBUG: t.Pos#1: 33

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 } Tile{ AsIs: e.Errors#1/22 } Tile{ AsIs: e.SentenceErrors#1/26 } Tile{ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: (/20 AsIs: # TkEOF/32 AsIs: t.Pos#1/33 AsIs: )/21 HalfReuse: '\''/1 }";\' or \'}\'"/35 >/37 Tile{ AsIs: )/13 AsIs: (/16 } # Sentences/38 Tile{ AsIs: e.Sentences#1/24 } Tile{ AsIs: t.NextSentence#1/18 } Tile{ AsIs: )/9 AsIs: (/12 } # TkEOF/39 t.Pos#1/33/40 Tile{ AsIs: )/17 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[35], context[36], ";\' or \'}\'", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[38], ident_Sentences ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[39], ident_TkEOF ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[40], context[41], context[33], context[34]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[1], '\'' );
  refalrts::link_brackets( context[12], context[17] );
  refalrts::link_brackets( context[16], context[9] );
  refalrts::link_brackets( context[8], context[13] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[39], context[41] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[13], context[16] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[20], context[1] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Blockm_AfterSentence("Block-AfterSentence", 4078471296U, 2260943187U, func_Blockm_AfterSentence);


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
  //RESULT: Tile{ [[ } </8 & SentenceTail/9 s.Mode#1/5/10 Tile{ AsIs: </0 Reuse: & SentencePart/4 AsIs: s.Mode#1/5 AsIs: e.Tokens#1/6 AsIs: >/1 } >/11 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_SentenceTail.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_SentencePart.ref.function );
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

static refalrts::NativeReference nat_ref_Sentence("Sentence", 4078471296U, 2260943187U, func_Sentence);


static refalrts::FnResult func_gen_SentenceTail_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  //FAST GEN: s.$ ( e.$ ) t.$ s.$ t.$ t.$ ( e.$ ) ( e.$ ) t.$
  //GLOBAL GEN: s.$ ( e.$ ) t.$ s.$ t.$ t.$ ( e.$ ) ( e.$ ) t.$
  // </0 & SentenceTail:1/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 s.idxVTV#0/12 t.idxVTVV#0/13 t.idxVTVVV#0/15 (/19 e.idxVTVVVVB#0/17 )/20 (/23 e.idxVTVVVVTB#0/21 )/24 t.idxVTVVVVTT#0/25 >/1
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
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.idxVTVVVVB#0 as range 17
  // closed e.idxVTVVVVTB#0 as range 21
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx ( e.idx ) t.idx s.idx t.idx t.idx ( e.idx ) ( e.idx ) ( # TkColon t.idx )
    // </0 & SentenceTail:1/4 s.Mode#1/5 (/8 e.Errors#1/27 )/9 t.Pattern#1/10 s.PartType#1/12 t.Pos#1/13 t.Result#1/15 (/19 e.Blocks#1/29 )/20 (/23 e.Tokens#1/31 )/24 (/25 # TkColon/35 t.ColonPos#2/36 )/26 >/1
    context[27] = context[6];
    context[28] = context[7];
    context[29] = context[17];
    context[30] = context[18];
    context[31] = context[21];
    context[32] = context[22];
    context[33] = 0;
    context[34] = 0;
    if( ! refalrts::brackets_term( context[33], context[34], context[25] ) )
      continue;
    context[35] = refalrts::ident_left(  ident_TkColon, context[33], context[34] );
    if( ! context[35] )
      continue;
    // closed e.Errors#1 as range 27
    // closed e.Blocks#1 as range 29
    // closed e.Tokens#1 as range 31
    context[37] = refalrts::tvar_left( context[36], context[33], context[34] );
    if( ! context[37] )
      continue;
    if( ! refalrts::empty_seq( context[33], context[34] ) )
      continue;
    //DEBUG: t.Pattern#1: 10
    //DEBUG: t.Pos#1: 13
    //DEBUG: t.Result#1: 15
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.PartType#1: 12
    //DEBUG: e.Errors#1: 27
    //DEBUG: e.Blocks#1: 29
    //DEBUG: e.Tokens#1: 31
    //DEBUG: t.ColonPos#2: 36

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.ColonPos#2/36 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail-AfterTail/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Errors#1/27 AsIs: )/9 AsIs: t.Pattern#1/10 AsIs: s.PartType#1/12 AsIs: t.Pos#1/13 AsIs: t.Result#1/15 AsIs: (/19 AsIs: e.Blocks#1/29 AsIs: )/20 HalfReuse: </23 } & SentenceTail/38 Tile{ HalfReuse: s.Mode1 #5/24 HalfReuse: </25 HalfReuse: & SentencePart/35 } s.Mode#1/5/39 Tile{ AsIs: e.Tokens#1/31 } >/40 Tile{ HalfReuse: >/26 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[38], ref_SentenceTail.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[39], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SentenceTailm_AfterTail.ref.function );
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_svar( context[24], context[5] );
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_name( context[35], ref_SentencePart.ref.function );
    refalrts::reinit_close_call( context[26] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[39], context[39] );
    res = refalrts::splice_evar( res, context[24], context[35] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    refalrts::splice_to_freelist_open( context[23], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) t.idx s.idx t.idx t.idx ( e.idx ) ( e.idx ) t.idx
  // </0 & SentenceTail:1/4 s.Mode#1/5 (/8 e.Errors#1/27 )/9 t.Pattern#1/10 s.PartType#1/12 t.Pos#1/13 t.Result#1/15 (/19 e.Blocks#1/29 )/20 (/23 e.Tokens#1/31 )/24 t.Other#2/25 >/1
  context[27] = context[6];
  context[28] = context[7];
  context[29] = context[17];
  context[30] = context[18];
  context[31] = context[21];
  context[32] = context[22];
  // closed e.Errors#1 as range 27
  // closed e.Blocks#1 as range 29
  // closed e.Tokens#1 as range 31
  //DEBUG: t.Pattern#1: 10
  //DEBUG: t.Pos#1: 13
  //DEBUG: t.Result#1: 15
  //DEBUG: t.Other#2: 25
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.PartType#1: 12
  //DEBUG: e.Errors#1: 27
  //DEBUG: e.Blocks#1: 29
  //DEBUG: e.Tokens#1: 31

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail:1$2?1?0/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Errors#1/27 AsIs: )/9 AsIs: t.Pattern#1/10 AsIs: s.PartType#1/12 AsIs: t.Pos#1/13 AsIs: t.Result#1/15 AsIs: (/19 AsIs: e.Blocks#1/29 AsIs: )/20 AsIs: (/23 AsIs: e.Tokens#1/31 AsIs: )/24 AsIs: t.Other#2/25 HalfReuse: </1 } & CheckSentenceEnd/33 s.Mode#1/5/34 s.PartType#1/12/35 t.Pos#1/13/36 e.Blocks#1/29/38 >/40 >/41 Tile{ ]] }
  if( ! refalrts::alloc_name( context[33], ref_CheckSentenceEnd.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[34], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[35], context[12]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[36], context[37], context[13], context[14]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[38], context[39], context[29], context[30]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[41] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_SentenceTail_B1S2C1C0.ref.function );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[41] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[33], context[41] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_B1("SentenceTail:1", 4078471296U, 2260943187U, func_gen_SentenceTail_B1);


static refalrts::FnResult func_gen_SentenceTail_B1S2C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & SentenceTail:1$2?1?0/4 s.Mode#1/5 (/8 e.Errors#1/6 )/9 t.Pattern#1/10 s.PartType#1/12 t.Pos#1/13 t.Result#1/15 (/19 e.Blocks#1/17 )/20 (/23 e.Tokens#1/21 )/24 t.Other#2/25 (/29 e.EndErrors#3/27 )/30 e.Blocks1#3/2 >/1
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
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.Blocks#1 as range 17
  // closed e.Tokens#1 as range 21
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  context[27] = 0;
  context[28] = 0;
  context[29] = refalrts::brackets_left( context[27], context[28], context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[29], context[30]);
  // closed e.EndErrors#3 as range 27
  // closed e.Blocks1#3 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 6
  //DEBUG: t.Pattern#1: 10
  //DEBUG: s.PartType#1: 12
  //DEBUG: t.Pos#1: 13
  //DEBUG: t.Result#1: 15
  //DEBUG: e.Blocks#1: 17
  //DEBUG: e.Tokens#1: 21
  //DEBUG: t.Other#2: 25
  //DEBUG: e.EndErrors#3: 27
  //DEBUG: e.Blocks1#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & SentenceTail:1$2?1?0/4 s.Mode#1/5 (/8 {REMOVED TILE} )/9 {REMOVED TILE} s.PartType#1/12 t.Pos#1/13 {REMOVED TILE} e.Blocks#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#1/6 } Tile{ AsIs: e.EndErrors#3/27 } Tile{ AsIs: )/20 AsIs: (/23 } Tile{ AsIs: t.Pattern#1/10 } Tile{ AsIs: t.Result#1/15 AsIs: (/19 } Tile{ AsIs: e.Blocks1#3/2 } Tile{ AsIs: )/30 } Tile{ AsIs: )/24 AsIs: t.Other#2/25 } Tile{ AsIs: e.Tokens#1/21 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[30] );
  refalrts::link_brackets( context[0], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[20], context[23] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_B1S2C1C0("SentenceTail:1$2?1?0", 4078471296U, 2260943187U, func_gen_SentenceTail_B1S2C1C0);


static refalrts::FnResult func_SentenceTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  // </0 & SentenceTail/4 s.Mode#1/5 (/8 e.Errors#1/6 )/9 t.Pattern#1/10 s.PartType#1/12 t.Pos#1/13 t.Result#1/15 (/19 e.Blocks#1/17 )/20 t.NextToken#1/21 e.Tokens#1/2 >/1
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
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Blocks#1 as range 17
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 6
  //DEBUG: t.Pattern#1: 10
  //DEBUG: s.PartType#1: 12
  //DEBUG: t.Pos#1: 13
  //DEBUG: t.Result#1: 15
  //DEBUG: e.Blocks#1: 17
  //DEBUG: t.NextToken#1: 21
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: [*]/0 Reuse: & SentenceTail:1/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Errors#1/6 AsIs: )/9 AsIs: t.Pattern#1/10 AsIs: s.PartType#1/12 AsIs: t.Pos#1/13 AsIs: t.Result#1/15 AsIs: (/19 AsIs: e.Blocks#1/17 AsIs: )/20 } (/24 Tile{ AsIs: e.Tokens#1/2 } )/25 {*}/26 Tile{ AsIs: t.NextToken#1/21 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[26], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_SentenceTail_B1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[0], context[20] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[26] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentenceTail("SentenceTail", 4078471296U, 2260943187U, func_SentenceTail);


static refalrts::FnResult func_SentenceTailm_AfterTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & SentenceTail-AfterTail/4 s.Mode#1/5 (/8 e.Errors#1/6 )/9 t.FirstPattern#1/10 s.PartType#1/12 t.Pos#1/13 t.FirstResult#1/15 (/19 e.FirstBlocks#1/17 )/20 (/23 e.TailErrors#1/21 )/24 (/27 t.NextPattern#1/33 e.ConditionsAndAssignments#1/25 t.LastResult#1/35 (/31 e.LastBlocks#1/29 )/32 )/28 e.Tokens#1/2 >/1
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
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[31] = refalrts::brackets_right( context[29], context[30], context[25], context[26] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[31], context[32]);
  // closed e.FirstBlocks#1 as range 17
  // closed e.TailErrors#1 as range 21
  // closed e.LastBlocks#1 as range 29
  // closed e.Tokens#1 as range 2
  context[34] = refalrts::tvar_left( context[33], context[25], context[26] );
  if( ! context[34] )
    return refalrts::cRecognitionImpossible;
  context[36] = refalrts::tvar_right( context[35], context[25], context[26] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  // closed e.ConditionsAndAssignments#1 as range 25
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 6
  //DEBUG: t.FirstPattern#1: 10
  //DEBUG: s.PartType#1: 12
  //DEBUG: t.Pos#1: 13
  //DEBUG: t.FirstResult#1: 15
  //DEBUG: e.FirstBlocks#1: 17
  //DEBUG: e.TailErrors#1: 21
  //DEBUG: e.LastBlocks#1: 29
  //DEBUG: e.Tokens#1: 2
  //DEBUG: t.NextPattern#1: 33
  //DEBUG: t.LastResult#1: 35
  //DEBUG: e.ConditionsAndAssignments#1: 25

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentenceTail-AfterTail?1?0/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Errors#1/6 AsIs: )/9 AsIs: t.FirstPattern#1/10 AsIs: s.PartType#1/12 AsIs: t.Pos#1/13 AsIs: t.FirstResult#1/15 AsIs: (/19 AsIs: e.FirstBlocks#1/17 AsIs: )/20 AsIs: (/23 AsIs: e.TailErrors#1/21 AsIs: )/24 } Tile{ AsIs: t.NextPattern#1/33 } Tile{ AsIs: (/27 } Tile{ AsIs: e.ConditionsAndAssignments#1/25 } )/37 Tile{ AsIs: t.LastResult#1/35 AsIs: (/31 AsIs: e.LastBlocks#1/29 AsIs: )/32 HalfReuse: (/28 AsIs: e.Tokens#1/2 HalfReuse: )/1 } </38 & CheckExceedBlocks/39 s.Mode#1/5/40 e.FirstBlocks#1/17/41 >/43 >/44 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[39], ref_CheckExceedBlocks.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[40], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[41], context[42], context[17], context[18]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[44] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_SentenceTailm_AfterTail_C1C0.ref.function );
  refalrts::reinit_open_bracket( context[28] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::push_stack( context[44] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[43] );
  refalrts::push_stack( context[38] );
  refalrts::link_brackets( context[28], context[1] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[37] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[38], context[44] );
  res = refalrts::splice_evar( res, context[35], context[1] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentenceTailm_AfterTail("SentenceTail-AfterTail", 4078471296U, 2260943187U, func_SentenceTailm_AfterTail);


static refalrts::FnResult func_gen_SentenceTailm_AfterTail_C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  // </0 & SentenceTail-AfterTail?1?0/4 s.Mode#1/5 (/8 e.Errors#1/6 )/9 t.FirstPattern#1/10 s.PartType#1/12 t.Pos#1/13 t.FirstResult#1/15 (/19 e.FirstBlocks#1/17 )/20 (/23 e.TailErrors#1/21 )/24 t.NextPattern#1/25 (/29 e.ConditionsAndAssignments#1/27 )/30 t.LastResult#1/31 (/35 e.LastBlocks#1/33 )/36 (/39 e.Tokens#1/37 )/40 (/43 e.ExceedBlocksErrors#2/41 )/44 e.FirstBlocks1#2/2 >/1
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
  if( ! refalrts::svar_left( context[12], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.FirstBlocks#1 as range 17
  // closed e.TailErrors#1 as range 21
  context[26] = refalrts::tvar_left( context[25], context[2], context[3] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  context[27] = 0;
  context[28] = 0;
  context[29] = refalrts::brackets_left( context[27], context[28], context[2], context[3] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[29], context[30]);
  // closed e.ConditionsAndAssignments#1 as range 27
  context[32] = refalrts::tvar_left( context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  context[33] = 0;
  context[34] = 0;
  context[35] = refalrts::brackets_left( context[33], context[34], context[2], context[3] );
  if( ! context[35] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[35], context[36]);
  context[37] = 0;
  context[38] = 0;
  context[39] = refalrts::brackets_left( context[37], context[38], context[2], context[3] );
  if( ! context[39] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[39], context[40]);
  context[41] = 0;
  context[42] = 0;
  context[43] = refalrts::brackets_left( context[41], context[42], context[2], context[3] );
  if( ! context[43] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[43], context[44]);
  // closed e.LastBlocks#1 as range 33
  // closed e.Tokens#1 as range 37
  // closed e.ExceedBlocksErrors#2 as range 41
  // closed e.FirstBlocks1#2 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 6
  //DEBUG: t.FirstPattern#1: 10
  //DEBUG: s.PartType#1: 12
  //DEBUG: t.Pos#1: 13
  //DEBUG: t.FirstResult#1: 15
  //DEBUG: e.FirstBlocks#1: 17
  //DEBUG: e.TailErrors#1: 21
  //DEBUG: t.NextPattern#1: 25
  //DEBUG: e.ConditionsAndAssignments#1: 27
  //DEBUG: t.LastResult#1: 31
  //DEBUG: e.LastBlocks#1: 33
  //DEBUG: e.Tokens#1: 37
  //DEBUG: e.ExceedBlocksErrors#2: 41
  //DEBUG: e.FirstBlocks1#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.FirstBlocks#1/17 )/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/30 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/44 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 } Tile{ AsIs: e.Errors#1/6 } Tile{ AsIs: </0 Reuse: & AssignmentError/4 AsIs: s.Mode#1/5 HalfReuse: s.PartType1 #12/8 } Tile{ AsIs: t.Pos#1/13 } Tile{ AsIs: >/1 } Tile{ AsIs: e.ExceedBlocksErrors#2/41 } Tile{ AsIs: e.TailErrors#1/21 } Tile{ AsIs: )/40 AsIs: (/43 } Tile{ AsIs: t.FirstPattern#1/10 } Tile{ AsIs: (/23 } Tile{ AsIs: s.PartType#1/12 } Tile{ AsIs: t.FirstResult#1/15 AsIs: (/19 } Tile{ AsIs: e.FirstBlocks1#2/2 } Tile{ AsIs: )/24 AsIs: t.NextPattern#1/25 HalfReuse: )/29 } Tile{ AsIs: e.ConditionsAndAssignments#1/27 } Tile{ AsIs: t.LastResult#1/31 AsIs: (/35 AsIs: e.LastBlocks#1/33 AsIs: )/36 HalfReuse: )/39 } Tile{ AsIs: e.Tokens#1/37 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[9] );
  refalrts::update_name( context[4], ref_AssignmentError.ref.function );
  refalrts::reinit_svar( context[8], context[12] );
  refalrts::reinit_close_bracket( context[29] );
  refalrts::reinit_close_bracket( context[39] );
  refalrts::link_brackets( context[43], context[39] );
  refalrts::link_brackets( context[35], context[36] );
  refalrts::link_brackets( context[23], context[29] );
  refalrts::link_brackets( context[19], context[24] );
  refalrts::link_brackets( context[9], context[40] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[31], context[39] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[24], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[40], context[43] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[41], context[42] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTailm_AfterTail_C1C0("SentenceTail-AfterTail?1?0", 4078471296U, 2260943187U, func_gen_SentenceTailm_AfterTail_C1C0);


static refalrts::FnResult func_CheckExceedBlocks(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CheckExceedBlocks/4 s.Mode#1/5 e.ExceedBlocks#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ExceedBlocks#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.ExceedBlocks#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExceedBlocks/4 AsIs: s.Mode#1/5 } (/6 )/7 (/8 )/9 Tile{ AsIs: e.ExceedBlocks#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoCheckExceedBlocks.ref.function );
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

static refalrts::NativeReference nat_ref_CheckExceedBlocks("CheckExceedBlocks", 4078471296U, 2260943187U, func_CheckExceedBlocks);


static refalrts::FnResult func_DoCheckExceedBlocks(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) e.$
  // </0 & DoCheckExceedBlocks/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 e.idxVTT#0/2 >/1
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
  // closed e.idxVTT#0 as range 2
  do {
    // s.idx ( e.idx ) ( e.idx ) ( t.idx e.idx ) e.idx
    // </0 & DoCheckExceedBlocks/4 s.Mode#1/5 (/8 e.Errors#1/14 )/9 (/12 e.ScannedBlocks#1/16 )/13 (/22 t.Pos#1/24 e.Body#1/20 )/23 e.RestBlocks#1/18 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[2];
    context[19] = context[3];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    // closed e.Errors#1 as range 14
    // closed e.ScannedBlocks#1 as range 16
    // closed e.RestBlocks#1 as range 18
    context[25] = refalrts::tvar_left( context[24], context[20], context[21] );
    if( ! context[25] )
      continue;
    // closed e.Body#1 as range 20
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Errors#1: 14
    //DEBUG: e.ScannedBlocks#1: 16
    //DEBUG: e.RestBlocks#1: 18
    //DEBUG: t.Pos#1: 24
    //DEBUG: e.Body#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCheckExceedBlocks/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Errors#1/14 HalfReuse: </9 HalfReuse: & ClassicError/12 } s.Mode#1/5/26 Tile{ AsIs: t.Pos#1/24 }"Exceed block in this position"/27 >/29 Tile{ AsIs: )/13 AsIs: (/22 } Tile{ AsIs: e.ScannedBlocks#1/16 } (/30 Tile{ AsIs: e.Body#1/20 } )/31 Tile{ AsIs: )/23 AsIs: e.RestBlocks#1/18 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[26], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], "Exceed block in this position", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[12], ref_ClassicError.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::link_brackets( context[8], context[13] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[23];
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[13], context[22] );
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx )
  // </0 & DoCheckExceedBlocks/4 s.Mode#1/5 (/8 e.Errors#1/14 )/9 (/12 e.ScannedBlocks#1/16 )/13 >/1
  context[14] = context[6];
  context[15] = context[7];
  context[16] = context[10];
  context[17] = context[11];
  context[18] = context[2];
  context[19] = context[3];
  if( ! refalrts::empty_seq( context[18], context[19] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 14
  // closed e.ScannedBlocks#1 as range 16
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 14
  //DEBUG: e.ScannedBlocks#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoCheckExceedBlocks/4 s.Mode#1/5 {REMOVED TILE} (/12 {REMOVED TILE} )/13 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Errors#1/14 AsIs: )/9 } Tile{ AsIs: e.ScannedBlocks#1/16 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoCheckExceedBlocks("DoCheckExceedBlocks", 4078471296U, 2260943187U, func_DoCheckExceedBlocks);


static refalrts::FnResult func_AssignmentError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: s.$ s.$ t.$
  //GLOBAL GEN: s.$ s.$ t.$
  // </0 & AssignmentError/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 >/1
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
    // # Classic # Assign t.idx
    // </0 & AssignmentError/4 # Classic/5 # Assign/6 t.Pos#1/7 >/1
    if( ! refalrts::ident_term(  ident_Classic, context[5] ) )
      continue;
    if( ! refalrts::ident_term(  ident_Assign, context[6] ) )
      continue;
    //DEBUG: t.Pos#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/5 Reuse: # Error/6 AsIs: t.Pos#1/7 HalfReuse: 'A'/1 } 's'/9 Tile{ HalfReuse: 's'/0 HalfReuse: 'i'/4 }"gnment not supported in classic mode"/10 )/12 Tile{ ]] }
    if( ! refalrts::alloc_char( context[9], 's' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], "gnment not supported in classic mode", 36 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[5] );
    refalrts::update_ident( context[6], ident_Error );
    refalrts::reinit_char( context[1], 'A' );
    refalrts::reinit_char( context[0], 's' );
    refalrts::reinit_char( context[4], 'i' );
    refalrts::link_brackets( context[5], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[5], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx t.idx
  // </0 & AssignmentError/4 s.Mode#1/5 s.Type#1/6 t.Pos#1/7 >/1
  //DEBUG: t.Pos#1: 7
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Type#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AssignmentError/4 s.Mode#1/5 s.Type#1/6 t.Pos#1/7 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AssignmentError("AssignmentError", 4078471296U, 2260943187U, func_AssignmentError);


static refalrts::FnResult func_CheckSentenceEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & CheckSentenceEnd/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // s.idx s.idx t.idx ( t.idx e.idx ) e.idx
    // </0 & CheckSentenceEnd/4 s.Mode#1/7 s.PartType#1/8 t.Pos#1/9 (/13 t.BodyPos#1/15 e.Body#1/11 )/14 e.ExceedBlocks#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[5], context[6] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.ExceedBlocks#1 as range 5
    context[16] = refalrts::tvar_left( context[15], context[11], context[12] );
    if( ! context[16] )
      continue;
    // closed e.Body#1 as range 11
    //DEBUG: s.Mode#1: 7
    //DEBUG: s.PartType#1: 8
    //DEBUG: t.Pos#1: 9
    //DEBUG: e.ExceedBlocks#1: 5
    //DEBUG: t.BodyPos#1: 15
    //DEBUG: e.Body#1: 11

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentenceEnd$1?1?0/4 AsIs: s.Mode#1/7 AsIs: s.PartType#1/8 AsIs: t.Pos#1/9 } Tile{ AsIs: t.BodyPos#1/15 } Tile{ AsIs: (/13 } Tile{ AsIs: e.Body#1/11 } Tile{ AsIs: )/14 } (/17 Tile{ AsIs: e.ExceedBlocks#1/5 } )/18 </19 & CheckMistakenAssign/20 s.Mode#1/7/21 s.PartType#1/8/22 t.Pos#1/9/23 >/25 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], ref_CheckMistakenAssign.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[21], context[7]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[8]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[9], context[10]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_CheckSentenceEnd_S1C1C0.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[25] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & CheckSentenceEnd/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentenceEnd$1?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_CheckSentenceEnd_S1C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSentenceEnd("CheckSentenceEnd", 4078471296U, 2260943187U, func_CheckSentenceEnd);


static refalrts::FnResult func_gen_CheckSentenceEnd_S1C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & CheckSentenceEnd$1?1?0/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // s.idx s.idx t.idx t.idx ( e.idx ) ( e.idx ) e.idx
    // </0 & CheckSentenceEnd$1?1?0/4 s.Mode#1/7 s.PartType#1/8 t.Pos#1/9 t.BodyPos#1/11 (/15 e.Body#1/13 )/16 (/19 e.ExceedBlocks#1/17 )/20 e.MistakenAssignError#2/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    if( ! refalrts::svar_left( context[7], context[5], context[6] ) )
      continue;
    if( ! refalrts::svar_left( context[8], context[5], context[6] ) )
      continue;
    context[10] = refalrts::tvar_left( context[9], context[5], context[6] );
    if( ! context[10] )
      continue;
    context[12] = refalrts::tvar_left( context[11], context[5], context[6] );
    if( ! context[12] )
      continue;
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
    // closed e.Body#1 as range 13
    // closed e.ExceedBlocks#1 as range 17
    // closed e.MistakenAssignError#2 as range 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: s.PartType#1: 8
    //DEBUG: t.Pos#1: 9
    //DEBUG: t.BodyPos#1: 11
    //DEBUG: e.Body#1: 13
    //DEBUG: e.ExceedBlocks#1: 17
    //DEBUG: e.MistakenAssignError#2: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentenceEnd$1?2?0/4 AsIs: s.Mode#1/7 AsIs: s.PartType#1/8 AsIs: t.Pos#1/9 AsIs: t.BodyPos#1/11 AsIs: (/15 AsIs: e.Body#1/13 AsIs: )/16 AsIs: (/19 AsIs: e.ExceedBlocks#1/17 AsIs: )/20 } (/21 Tile{ AsIs: e.MistakenAssignError#2/5 } )/22 </23 & CheckExceedBlocks/24 s.Mode#1/7/25 e.ExceedBlocks#1/17/26 >/28 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ref_CheckExceedBlocks.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[25], context[7]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[26], context[27], context[17], context[18]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_CheckSentenceEnd_S1C2C0.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[28] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & CheckSentenceEnd$1?1?0/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentenceEnd$1?2?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_CheckSentenceEnd_S1C2C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentenceEnd_S1C1C0("CheckSentenceEnd$1?1?0", 4078471296U, 2260943187U, func_gen_CheckSentenceEnd_S1C1C0);


static refalrts::FnResult func_gen_CheckSentenceEnd_S1C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: s.$ s.$ t.$
  //GLOBAL GEN: s.$ s.$ t.$
  // </0 & CheckSentenceEnd$1?1?1/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 >/1
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
    // s.idx # Condition t.idx
    // </0 & CheckSentenceEnd$1?1?1/4 s.Mode#1/5 # Condition/6 t.Pos#1/7 >/1
    if( ! refalrts::ident_term(  ident_Condition, context[6] ) )
      continue;
    //DEBUG: t.Pos#1: 7
    //DEBUG: s.Mode#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ Reuse: # Error/6 AsIs: t.Pos#1/7 HalfReuse: 'M'/1 }"istaken \',\' for \'=\'"/9 )/11 )/12 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[9], context[10], "istaken \',\' for \'=\'", 19 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::update_ident( context[6], ident_Error );
    refalrts::reinit_char( context[1], 'M' );
    refalrts::link_brackets( context[0], context[12] );
    refalrts::link_brackets( context[4], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[12] );
    res = refalrts::splice_evar( res, context[6], context[1] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx # Assign t.idx
  // </0 & CheckSentenceEnd$1?1?1/4 s.Mode#1/5 # Assign/6 t.Pos#1/7 >/1
  if( ! refalrts::ident_term(  ident_Assign, context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Pos#1: 7
  //DEBUG: s.Mode#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Mode#1/5 # Assign/6 t.Pos#1/7 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentenceEnd_S1C1C1("CheckSentenceEnd$1?1?1", 4078471296U, 2260943187U, func_gen_CheckSentenceEnd_S1C1C1);


static refalrts::FnResult func_gen_CheckSentenceEnd_S1C2C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  //FAST GEN: s.$ s.$ t.$ t.$ ( e.$ ) ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: s.$ s.$ t.$ t.$ ( e.$ ) ( e.$ ) ( e.$ ) e.$
  // </0 & CheckSentenceEnd$1?2?0/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 t.idxVVV#0/9 (/13 e.idxVVVVB#0/11 )/14 (/17 e.idxVVVVTB#0/15 )/18 (/21 e.idxVVVVTTB#0/19 )/22 e.idxVVVVTTT#0/2 >/1
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
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.idxVVVVB#0 as range 11
  // closed e.idxVVVVTB#0 as range 15
  // closed e.idxVVVVTTB#0 as range 19
  // closed e.idxVVVVTTT#0 as range 2
  do {
    // s.idx s.idx t.idx t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) e.idx
    // </0 & CheckSentenceEnd$1?2?0/4 s.Mode#1/5 s.PartType#1/6 t.Pos#1/7 t.BodyPos#1/9 (/13 e.Body#1/23 )/14 (/17 e.ExceedBlocks#1/25 )/18 (/21 e.MistakenAssignError#2/27 )/22 (/33 e.ExceedBlocksErrors#3/31 )/34 e.ExceedBlocks1#3/29 >/1
    context[23] = context[11];
    context[24] = context[12];
    context[25] = context[15];
    context[26] = context[16];
    context[27] = context[19];
    context[28] = context[20];
    context[29] = context[2];
    context[30] = context[3];
    context[31] = 0;
    context[32] = 0;
    context[33] = refalrts::brackets_left( context[31], context[32], context[29], context[30] );
    if( ! context[33] )
      continue;
    refalrts::bracket_pointers(context[33], context[34]);
    // closed e.Body#1 as range 23
    // closed e.ExceedBlocks#1 as range 25
    // closed e.MistakenAssignError#2 as range 27
    // closed e.ExceedBlocksErrors#3 as range 31
    // closed e.ExceedBlocks1#3 as range 29
    //DEBUG: t.Pos#1: 7
    //DEBUG: t.BodyPos#1: 9
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.PartType#1: 6
    //DEBUG: e.Body#1: 23
    //DEBUG: e.ExceedBlocks#1: 25
    //DEBUG: e.MistakenAssignError#2: 27
    //DEBUG: e.ExceedBlocksErrors#3: 31
    //DEBUG: e.ExceedBlocks1#3: 29

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & CheckSentenceEnd$1?2?0/4 s.Mode#1/5 s.PartType#1/6 t.Pos#1/7 t.BodyPos#1/9 {REMOVED TILE} (/17 e.ExceedBlocks#1/25 )/18 (/21 {REMOVED TILE} )/22 (/33 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.MistakenAssignError#2/27 } Tile{ AsIs: e.ExceedBlocksErrors#3/31 } Tile{ AsIs: )/34 } Tile{ AsIs: (/13 AsIs: e.Body#1/23 AsIs: )/14 } Tile{ AsIs: e.ExceedBlocks1#3/29 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[0], context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx t.idx t.idx ( e.idx ) ( e.idx ) ( e.idx ) e.idx
  // </0 & CheckSentenceEnd$1?2?0/4 s.Mode#1/5 s.PartType#1/6 t.Pos#1/7 t.BodyPos#1/9 (/13 e.Body#1/23 )/14 (/17 e.ExceedBlocks#1/25 )/18 (/21 e.MistakenAssignError#2/27 )/22 e.Other#0/29 >/1
  context[23] = context[11];
  context[24] = context[12];
  context[25] = context[15];
  context[26] = context[16];
  context[27] = context[19];
  context[28] = context[20];
  context[29] = context[2];
  context[30] = context[3];
  // closed e.Body#1 as range 23
  // closed e.ExceedBlocks#1 as range 25
  // closed e.MistakenAssignError#2 as range 27
  // closed e.Other#0 as range 29
  //DEBUG: t.Pos#1: 7
  //DEBUG: t.BodyPos#1: 9
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.PartType#1: 6
  //DEBUG: e.Body#1: 23
  //DEBUG: e.ExceedBlocks#1: 25
  //DEBUG: e.MistakenAssignError#2: 27
  //DEBUG: e.Other#0: 29

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/21 {REMOVED TILE} )/22 e.Other#0/29 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentenceEnd$1?2?1/4 AsIs: s.Mode#1/5 AsIs: s.PartType#1/6 AsIs: t.Pos#1/7 AsIs: t.BodyPos#1/9 AsIs: (/13 AsIs: e.Body#1/23 AsIs: )/14 AsIs: (/17 AsIs: e.ExceedBlocks#1/25 AsIs: )/18 } Tile{ AsIs: e.MistakenAssignError#2/27 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_CheckSentenceEnd_S1C2C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[28] );
  refalrts::splice_to_freelist_open( context[18], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentenceEnd_S1C2C0("CheckSentenceEnd$1?2?0", 4078471296U, 2260943187U, func_gen_CheckSentenceEnd_S1C2C0);


static refalrts::FnResult func_gen_CheckSentenceEnd_S1C2C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & CheckSentenceEnd$1?2?1/4 s.Mode#1/5 s.PartType#1/6 t.Pos#1/7 t.BodyPos#1/9 (/13 e.Body#1/11 )/14 (/17 e.ExceedBlocks#1/15 )/18 e.Other#0/2 >/1
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
  // closed e.Body#1 as range 11
  // closed e.ExceedBlocks#1 as range 15
  // closed e.Other#0 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.PartType#1: 6
  //DEBUG: t.Pos#1: 7
  //DEBUG: t.BodyPos#1: 9
  //DEBUG: e.Body#1: 11
  //DEBUG: e.ExceedBlocks#1: 15
  //DEBUG: e.Other#0: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/13 {REMOVED TILE} )/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Other#0/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & CheckSentenceEnd$1?1?1/4 AsIs: s.Mode#1/5 AsIs: s.PartType#1/6 AsIs: t.Pos#1/7 } Tile{ AsIs: (/17 } Tile{ AsIs: t.BodyPos#1/9 } Tile{ AsIs: e.Body#1/11 } Tile{ AsIs: )/18 } Tile{ AsIs: e.ExceedBlocks#1/15 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_CheckSentenceEnd_S1C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentenceEnd_S1C2C1("CheckSentenceEnd$1?2?1", 4078471296U, 2260943187U, func_gen_CheckSentenceEnd_S1C2C1);


static refalrts::FnResult func_CheckMistakenAssign(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: s.$ s.$ t.$
  //GLOBAL GEN: s.$ s.$ t.$
  // </0 & CheckMistakenAssign/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 >/1
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
    // s.idx # Assign t.idx
    // </0 & CheckMistakenAssign/4 s.Mode#1/5 # Assign/6 t.Pos#1/7 >/1
    if( ! refalrts::ident_term(  ident_Assign, context[6] ) )
      continue;
    //DEBUG: t.Pos#1: 7
    //DEBUG: s.Mode#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 AsIs: s.Mode#1/5 } Tile{ AsIs: t.Pos#1/7 } 'M'/9 Tile{ HalfReuse: 'i'/6 }"staken \'=\' for \',\' in classic mode"/10 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[9], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[10], context[11], "staken \'=\' for \',\' in classic mode", 34 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ClassicError.ref.function );
    refalrts::reinit_char( context[6], 'i' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[6], context[6] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx # Condition t.idx
  // </0 & CheckMistakenAssign/4 s.Mode#1/5 # Condition/6 t.Pos#1/7 >/1
  if( ! refalrts::ident_term(  ident_Condition, context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.Pos#1: 7
  //DEBUG: s.Mode#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CheckMistakenAssign/4 s.Mode#1/5 # Condition/6 t.Pos#1/7 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckMistakenAssign("CheckMistakenAssign", 4078471296U, 2260943187U, func_CheckMistakenAssign);


static refalrts::FnResult func_SentencePart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & SentencePart/4 s.Mode#1/5 e.Tokens#1/2 >/1
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
  //RESULT: Tile{ [[ } </6 & SentencePart-AfterPattern/7 s.Mode#1/5/8 Tile{ AsIs: </0 Reuse: & Pattern/4 AsIs: s.Mode#1/5 AsIs: e.Tokens#1/2 AsIs: >/1 } >/9 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_SentencePartm_AfterPattern.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[8], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Pattern.ref.function );
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

static refalrts::NativeReference nat_ref_SentencePart("SentencePart", 4078471296U, 2260943187U, func_SentencePart);


static refalrts::FnResult func_gen_SentencePartm_AfterPattern_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & SentencePart-AfterPattern:1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // s.idx ( e.idx ) t.idx ( e.idx ) t.idx ( # TkComma t.idx )
    // </0 & SentencePart-AfterPattern:1/4 s.Mode#1/12 (/15 e.PatternErrors#1/13 )/16 t.Pattern#1/17 (/21 e.Tokens#1/19 )/22 t.NextToken#1/23 (/9 # TkComma/11 t.Pos#2/25 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkComma, context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.PatternErrors#1 as range 13
    context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[5], context[6] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Tokens#1 as range 19
    context[24] = refalrts::tvar_left( context[23], context[5], context[6] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[26] = refalrts::tvar_left( context[25], context[7], context[8] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: s.Mode#1: 12
    //DEBUG: e.PatternErrors#1: 13
    //DEBUG: t.Pattern#1: 17
    //DEBUG: e.Tokens#1: 19
    //DEBUG: t.NextToken#1: 23
    //DEBUG: t.Pos#2: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NextToken#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentencePart-AfterResult/4 AsIs: s.Mode#1/12 AsIs: (/15 AsIs: e.PatternErrors#1/13 AsIs: )/16 AsIs: t.Pattern#1/17 HalfReuse: # Condition/21 } Tile{ AsIs: t.Pos#2/25 } Tile{ HalfReuse: </9 HalfReuse: & Result/11 } Tile{ HalfReuse: s.Mode1 #12/22 } Tile{ AsIs: e.Tokens#1/19 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_SentencePartm_AfterResult.ref.function );
    refalrts::reinit_ident( context[21], ident_Condition );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[11], ref_Result.ref.function );
    refalrts::reinit_svar( context[22], context[12] );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( context[21], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx ( e.idx ) t.idx ( # TkAssign t.idx )
    // </0 & SentencePart-AfterPattern:1/4 s.Mode#1/12 (/15 e.PatternErrors#1/13 )/16 t.Pattern#1/17 (/21 e.Tokens#1/19 )/22 t.NextToken#1/23 (/9 # TkAssign/11 t.Pos#2/25 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkAssign, context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[5], context[6] ) )
      continue;
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.PatternErrors#1 as range 13
    context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[5], context[6] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Tokens#1 as range 19
    context[24] = refalrts::tvar_left( context[23], context[5], context[6] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[26] = refalrts::tvar_left( context[25], context[7], context[8] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: s.Mode#1: 12
    //DEBUG: e.PatternErrors#1: 13
    //DEBUG: t.Pattern#1: 17
    //DEBUG: e.Tokens#1: 19
    //DEBUG: t.NextToken#1: 23
    //DEBUG: t.Pos#2: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NextToken#1/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentencePart-AfterResult/4 AsIs: s.Mode#1/12 AsIs: (/15 AsIs: e.PatternErrors#1/13 AsIs: )/16 AsIs: t.Pattern#1/17 HalfReuse: # Assign/21 } Tile{ AsIs: t.Pos#2/25 } Tile{ HalfReuse: </9 HalfReuse: & Result/11 } Tile{ HalfReuse: s.Mode1 #12/22 } Tile{ AsIs: e.Tokens#1/19 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_SentencePartm_AfterResult.ref.function );
    refalrts::reinit_ident( context[21], ident_Assign );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[11], ref_Result.ref.function );
    refalrts::reinit_svar( context[22], context[12] );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( context[21], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx ( e.idx ) t.idx ( s.idx t.idx )
    // </0 & SentencePart-AfterPattern:1/4 s.Mode#1/11 (/14 e.PatternErrors#1/12 )/15 t.Pattern#1/17 (/21 e.Tokens#1/19 )/22 t.NextToken#1/23 (/9 s.EndOfPart#2/16 t.Pos#2/25 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    if( ! refalrts::svar_left( context[11], context[5], context[6] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.PatternErrors#1 as range 12
    if( ! refalrts::svar_left( context[16], context[7], context[8] ) )
      continue;
    context[18] = refalrts::tvar_left( context[17], context[5], context[6] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[5], context[6] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Tokens#1 as range 19
    context[24] = refalrts::tvar_left( context[23], context[5], context[6] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[26] = refalrts::tvar_left( context[25], context[7], context[8] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: s.Mode#1: 11
    //DEBUG: e.PatternErrors#1: 12
    //DEBUG: s.EndOfPart#2: 16
    //DEBUG: t.Pattern#1: 17
    //DEBUG: e.Tokens#1: 19
    //DEBUG: t.NextToken#1: 23
    //DEBUG: t.Pos#2: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentencePart-AfterPattern:1$3?1?0/4 AsIs: s.Mode#1/11 AsIs: (/14 AsIs: e.PatternErrors#1/12 AsIs: )/15 AsIs: t.Pattern#1/17 AsIs: (/21 AsIs: e.Tokens#1/19 AsIs: )/22 AsIs: t.NextToken#1/23 HalfReuse: s.EndOfPart2 #16/9 } Tile{ AsIs: t.Pos#2/25 } </27 & OneOf/28 Tile{ AsIs: s.EndOfPart#2/16 } # TkColon/29 # TkSemicolon/30 Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], ident_TkColon ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[30], ident_TkSemicolon ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_SentencePartm_AfterPattern_B1S3C1C0.ref.function );
    refalrts::reinit_svar( context[9], context[16] );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & SentencePart-AfterPattern:1/4 e.Other#0/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Other#0 as range 5
  //DEBUG: e.Other#0: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentencePart-AfterPattern:1$3?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_SentencePartm_AfterPattern_B1S3C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentencePartm_AfterPattern_B1("SentencePart-AfterPattern:1", 4078471296U, 2260943187U, func_gen_SentencePartm_AfterPattern_B1);


static refalrts::FnResult func_gen_SentencePartm_AfterPattern_B1S3C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  //FAST GEN: s.$ ( e.$ ) t.$ ( e.$ ) t.$ s.$ t.$ e.$
  //GLOBAL GEN: s.$ ( e.$ ) t.$ ( e.$ ) t.$ s.$ t.$ e.$
  // </0 & SentencePart-AfterPattern:1$3?1?0/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 (/14 e.idxVTVB#0/12 )/15 t.idxVTVT#0/16 s.idxVTVTV#0/18 t.idxVTVTVV#0/19 e.idxVTVTVVV#0/2 >/1
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
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTVTVVV#0 as range 2
  do {
    // s.idx ( e.idx ) t.idx ( e.idx ) t.idx s.idx t.idx # True
    // </0 & SentencePart-AfterPattern:1$3?1?0/4 s.Mode#1/5 (/8 e.PatternErrors#1/21 )/9 t.Pattern#1/10 (/14 e.Tokens#1/23 )/15 t.NextToken#1/16 s.EndOfPart#2/18 t.Pos#2/19 # True/27 >/1
    context[21] = context[6];
    context[22] = context[7];
    context[23] = context[12];
    context[24] = context[13];
    context[25] = context[2];
    context[26] = context[3];
    context[27] = refalrts::ident_left(  ident_True, context[25], context[26] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    // closed e.PatternErrors#1 as range 21
    // closed e.Tokens#1 as range 23
    //DEBUG: t.Pattern#1: 10
    //DEBUG: t.NextToken#1: 16
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.EndOfPart#2: 18
    //DEBUG: e.PatternErrors#1: 21
    //DEBUG: e.Tokens#1: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NextToken#1/16 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentencePart-AfterPattern/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.PatternErrors#1/21 HalfReuse: (/9 } # Error/28 t.Pos#2/19/29"Missed \',\' or \'=\'"/31 )/33 )/34 Tile{ AsIs: t.Pattern#1/10 AsIs: (/14 } # TkComma/35 t.Pos#2/19/36 Tile{ AsIs: )/15 } (/38 Tile{ AsIs: s.EndOfPart#2/18 AsIs: t.Pos#2/19 HalfReuse: )/27 } Tile{ AsIs: e.Tokens#1/23 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[28], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[29], context[30], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[31], context[32], "Missed \',\' or \'=\'", 17 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], ident_TkComma ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[36], context[37], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_SentencePartm_AfterPattern.ref.function );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[27] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[38], context[27] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::link_brackets( context[8], context[34] );
    refalrts::link_brackets( context[9], context[33] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[18], context[27] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[28], context[34] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) t.idx ( e.idx ) t.idx s.idx t.idx e.idx
  // </0 & SentencePart-AfterPattern:1$3?1?0/4 s.Mode#1/5 (/8 e.PatternErrors#1/21 )/9 t.Pattern#1/10 (/14 e.Tokens#1/23 )/15 t.NextToken#1/16 s.EndOfPart#2/18 t.Pos#2/19 e.Other#0/25 >/1
  context[21] = context[6];
  context[22] = context[7];
  context[23] = context[12];
  context[24] = context[13];
  context[25] = context[2];
  context[26] = context[3];
  // closed e.PatternErrors#1 as range 21
  // closed e.Tokens#1 as range 23
  // closed e.Other#0 as range 25
  //DEBUG: t.Pattern#1: 10
  //DEBUG: t.NextToken#1: 16
  //DEBUG: t.Pos#2: 19
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.EndOfPart#2: 18
  //DEBUG: e.PatternErrors#1: 21
  //DEBUG: e.Tokens#1: 23
  //DEBUG: e.Other#0: 25

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Other#0/25 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SentencePart-AfterPattern:1$3?1?1/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.PatternErrors#1/21 AsIs: )/9 AsIs: t.Pattern#1/10 AsIs: (/14 AsIs: e.Tokens#1/23 AsIs: )/15 AsIs: t.NextToken#1/16 } (/27 Tile{ AsIs: s.EndOfPart#2/18 AsIs: t.Pos#2/19 } )/28 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_SentencePartm_AfterPattern_B1S3C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::splice_to_freelist_open( context[17], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentencePartm_AfterPattern_B1S3C1C0("SentencePart-AfterPattern:1$3?1?0", 4078471296U, 2260943187U, func_gen_SentencePartm_AfterPattern_B1S3C1C0);


static refalrts::FnResult func_gen_SentencePartm_AfterPattern_B1S3C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & SentencePart-AfterPattern:1$3?1?1/4 s.Mode#1/9 (/12 e.PatternErrors#1/10 )/13 t.Pattern#1/15 (/19 e.Tokens#1/17 )/20 t.NextToken#1/21 (/7 s.Unexpected#2/14 t.Pos#2/23 e.Info#2/5 )/8 >/1
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
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.PatternErrors#1 as range 10
  if( ! refalrts::svar_left( context[14], context[5], context[6] ) )
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
  // closed e.Tokens#1 as range 17
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[24] = refalrts::tvar_left( context[23], context[5], context[6] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.PatternErrors#1: 10
  //DEBUG: s.Unexpected#2: 14
  //DEBUG: t.Pattern#1: 15
  //DEBUG: e.Tokens#1: 17
  //DEBUG: t.NextToken#1: 21
  //DEBUG: t.Pos#2: 23
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Unexpected#2/14 {REMOVED TILE} e.Info#2/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/12 AsIs: e.PatternErrors#1/10 HalfReuse: </13 } & UnexpectedTokenInSentence/25 t.NextToken#1/21/26 Tile{ HalfReuse: >/0 HalfReuse: )/4 } Tile{ AsIs: t.Pattern#1/15 HalfReuse: # Assign/19 } Tile{ AsIs: t.Pos#2/23 } Tile{ AsIs: (/7 } Tile{ AsIs: )/8 HalfReuse: (/1 } Tile{ AsIs: )/20 AsIs: t.NextToken#1/21 } Tile{ AsIs: e.Tokens#1/17 } Tile{ ]] }
  if( ! refalrts::alloc_name( context[25], ref_UnexpectedTokenInSentence.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[26], context[27], context[21], context[22]))
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[13] );
  refalrts::reinit_close_call( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_ident( context[19], ident_Assign );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[1], context[20] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[12], context[4] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[15], context[19] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[25], context[27] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentencePartm_AfterPattern_B1S3C1C1("SentencePart-AfterPattern:1$3?1?1", 4078471296U, 2260943187U, func_gen_SentencePartm_AfterPattern_B1S3C1C1);


static refalrts::FnResult func_SentencePartm_AfterPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & SentencePart-AfterPattern/4 s.Mode#1/5 (/8 e.PatternErrors#1/6 )/9 t.Pattern#1/10 t.NextToken#1/12 e.Tokens#1/2 >/1
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
  // closed e.PatternErrors#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.PatternErrors#1: 6
  //DEBUG: t.Pattern#1: 10
  //DEBUG: t.NextToken#1: 12
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 Tile{ HalfReuse: [*]/0 Reuse: & SentencePart-AfterPattern:1/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.PatternErrors#1/6 AsIs: )/9 AsIs: t.Pattern#1/10 } (/15 Tile{ AsIs: e.Tokens#1/2 } )/16 Tile{ AsIs: t.NextToken#1/12 } {*}/17 t.NextToken#1/12/18 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[17], context[0] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[18], context[19], context[12], context[13]))
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_SentencePartm_AfterPattern_B1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentencePartm_AfterPattern("SentencePart-AfterPattern", 4078471296U, 2260943187U, func_SentencePartm_AfterPattern);


static refalrts::FnResult func_SentencePartm_AfterResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & SentencePart-AfterResult/4 s.Mode#1/5 (/8 e.PatternErrors#1/6 )/9 t.Pattern#1/10 s.PartType#1/12 t.Pos#1/13 (/17 e.ResultErrors#1/15 )/18 t.Result#1/19 (/23 e.Blocks#1/21 )/24 e.Tokens#1/2 >/1
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
  // closed e.PatternErrors#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
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
  // closed e.ResultErrors#1 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.Blocks#1 as range 21
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.PatternErrors#1: 6
  //DEBUG: t.Pattern#1: 10
  //DEBUG: s.PartType#1: 12
  //DEBUG: t.Pos#1: 13
  //DEBUG: e.ResultErrors#1: 15
  //DEBUG: t.Result#1: 19
  //DEBUG: e.Blocks#1: 21
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & SentencePart-AfterResult/4 s.Mode#1/5 (/8 {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} )/18 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.PatternErrors#1/6 } Tile{ AsIs: e.ResultErrors#1/15 } Tile{ AsIs: )/9 AsIs: t.Pattern#1/10 AsIs: s.PartType#1/12 AsIs: t.Pos#1/13 } Tile{ AsIs: t.Result#1/19 AsIs: (/23 AsIs: e.Blocks#1/21 AsIs: )/24 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[19], context[24] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentencePartm_AfterResult("SentencePart-AfterResult", 4078471296U, 2260943187U, func_SentencePartm_AfterResult);


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

static refalrts::NativeReference nat_ref_UnexpectedTokenInSentence("UnexpectedTokenInSentence", 4078471296U, 2260943187U, func_UnexpectedTokenInSentence);


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

static refalrts::NativeReference nat_ref_Pattern("Pattern", 4078471296U, 2260943187U, func_Pattern);


static refalrts::FnResult func_Result(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Result-Blocks/4 AsIs: s.Mode#1/5 } (/6 )/7 </8 & Expression/9 s.Mode#1/5/10 # Result/11 Tile{ AsIs: e.Tokens#1/2 } >/12 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_Expression.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[11], ident_Result ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Resultm_Blocks.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[8] );
  refalrts::link_brackets( context[6], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Result("Result", 4078471296U, 2260943187U, func_Result);


static refalrts::FnResult func_gen_Resultm_Blocks_S3B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & Result-Blocks$3:1/4 s.Mode#1/5 (/8 e.Blocks#1/6 )/9 t.ColonPos#1/10 (/14 e.Errors#1/12 )/15 t.Result#1/16 (/20 e.BlockErrors#2/18 )/21 (/24 e.Body#2/22 )/25 e.Tokens1#2/2 >/1
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
  // closed e.Blocks#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Errors#1 as range 12
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
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
  // closed e.BlockErrors#2 as range 18
  // closed e.Body#2 as range 22
  // closed e.Tokens1#2 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Blocks#1: 6
  //DEBUG: t.ColonPos#1: 10
  //DEBUG: e.Errors#1: 12
  //DEBUG: t.Result#1: 16
  //DEBUG: e.BlockErrors#2: 18
  //DEBUG: e.Body#2: 22
  //DEBUG: e.Tokens1#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/14 {REMOVED TILE} {REMOVED TILE} (/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Result-Blocks/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Blocks#1/6 HalfReuse: (/9 AsIs: t.ColonPos#1/10 } Tile{ AsIs: e.Body#2/22 } Tile{ AsIs: )/25 } Tile{ AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.Errors#1/12 } Tile{ AsIs: e.BlockErrors#2/18 } Tile{ AsIs: )/15 AsIs: t.Result#1/16 } Tile{ AsIs: e.Tokens1#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Resultm_Blocks.ref.function );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[24], context[15] );
  refalrts::link_brackets( context[8], context[21] );
  refalrts::link_brackets( context[9], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::splice_to_freelist_open( context[11], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Resultm_Blocks_S3B1("Result-Blocks$3:1", 4078471296U, 2260943187U, func_gen_Resultm_Blocks_S3B1);


static refalrts::FnResult func_Resultm_Blocks(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  //FAST GEN: s.$ ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & Result-Blocks/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 t.idxVTT#0/14 e.idxVTTV#0/2 >/1
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
    // s.idx ( e.idx ) ( e.idx ) t.idx ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/16 )/9 (/12 e.Errors#1/18 )/13 t.Result#1/14 (/24 # TkRefal5Mode/26 t.ModePos#1/27 s.NewMode#1/29 )/25 e.Tokens#1/20 >/1
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
    context[26] = refalrts::ident_left(  ident_TkRefal5Mode, context[22], context[23] );
    if( ! context[26] )
      continue;
    // closed e.Blocks#1 as range 16
    // closed e.Errors#1 as range 18
    // closed e.Tokens#1 as range 20
    context[28] = refalrts::tvar_left( context[27], context[22], context[23] );
    if( ! context[28] )
      continue;
    if( ! refalrts::svar_left( context[29], context[22], context[23] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    //DEBUG: t.Result#1: 14
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Blocks#1: 16
    //DEBUG: e.Errors#1: 18
    //DEBUG: e.Tokens#1: 20
    //DEBUG: t.ModePos#1: 27
    //DEBUG: s.NewMode#1: 29

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/24 # TkRefal5Mode/26 t.ModePos#1/27 {REMOVED TILE} )/25 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 } Tile{ AsIs: s.NewMode#1/29 } Tile{ AsIs: (/8 AsIs: e.Blocks#1/16 AsIs: )/9 AsIs: (/12 AsIs: e.Errors#1/18 AsIs: )/13 AsIs: t.Result#1/14 } Tile{ AsIs: e.Tokens#1/20 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) t.idx ( # TkColon t.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/16 )/9 (/12 e.Errors#1/18 )/13 t.Result#1/14 (/24 # TkColon/26 t.ColonPos#1/32 )/25 (/29 # TkRefal5Mode/31 t.ModePos#1/34 s.NewMode#1/36 )/30 e.Tokens#1/20 >/1
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
    context[26] = refalrts::ident_left(  ident_TkColon, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[20], context[21] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = refalrts::ident_left(  ident_TkRefal5Mode, context[27], context[28] );
    if( ! context[31] )
      continue;
    // closed e.Blocks#1 as range 16
    // closed e.Errors#1 as range 18
    // closed e.Tokens#1 as range 20
    context[33] = refalrts::tvar_left( context[32], context[22], context[23] );
    if( ! context[33] )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    context[35] = refalrts::tvar_left( context[34], context[27], context[28] );
    if( ! context[35] )
      continue;
    if( ! refalrts::svar_left( context[36], context[27], context[28] ) )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    //DEBUG: t.Result#1: 14
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Blocks#1: 16
    //DEBUG: e.Errors#1: 18
    //DEBUG: e.Tokens#1: 20
    //DEBUG: t.ColonPos#1: 32
    //DEBUG: t.ModePos#1: 34
    //DEBUG: s.NewMode#1: 36

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/29 # TkRefal5Mode/31 t.ModePos#1/34 {REMOVED TILE} )/30 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 } Tile{ AsIs: s.NewMode#1/36 } Tile{ AsIs: (/8 AsIs: e.Blocks#1/16 AsIs: )/9 AsIs: (/12 AsIs: e.Errors#1/18 AsIs: )/13 AsIs: t.Result#1/14 AsIs: (/24 AsIs: # TkColon/26 AsIs: t.ColonPos#1/32 AsIs: )/25 } Tile{ AsIs: e.Tokens#1/20 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[8], context[25] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) t.idx ( # TkColon t.idx ) ( # TkOpenBlock t.idx ) e.idx
    // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/16 )/9 (/12 e.Errors#1/18 )/13 t.Result#1/14 (/24 # TkColon/26 t.ColonPos#1/32 )/25 (/29 # TkOpenBlock/31 t.BlockPos#1/34 )/30 e.Tokens#1/20 >/1
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
    context[26] = refalrts::ident_left(  ident_TkColon, context[22], context[23] );
    if( ! context[26] )
      continue;
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::brackets_left( context[27], context[28], context[20], context[21] );
    if( ! context[29] )
      continue;
    refalrts::bracket_pointers(context[29], context[30]);
    context[31] = refalrts::ident_left(  ident_TkOpenBlock, context[27], context[28] );
    if( ! context[31] )
      continue;
    // closed e.Blocks#1 as range 16
    // closed e.Errors#1 as range 18
    // closed e.Tokens#1 as range 20
    context[33] = refalrts::tvar_left( context[32], context[22], context[23] );
    if( ! context[33] )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    context[35] = refalrts::tvar_left( context[34], context[27], context[28] );
    if( ! context[35] )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    //DEBUG: t.Result#1: 14
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Blocks#1: 16
    //DEBUG: e.Errors#1: 18
    //DEBUG: e.Tokens#1: 20
    //DEBUG: t.ColonPos#1: 32
    //DEBUG: t.BlockPos#1: 34

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </36 Tile{ HalfReuse: [*]/0 Reuse: & Result-Blocks$3:1/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Blocks#1/16 AsIs: )/9 } Tile{ AsIs: t.ColonPos#1/32 } Tile{ AsIs: (/12 AsIs: e.Errors#1/18 AsIs: )/13 AsIs: t.Result#1/14 HalfReuse: {*}/24 HalfReuse: </26 } & Block/37 Tile{ HalfReuse: s.Mode1 #5/25 AsIs: (/29 AsIs: # TkOpenBlock/31 AsIs: t.BlockPos#1/34 AsIs: )/30 AsIs: e.Tokens#1/20 AsIs: >/1 } >/38 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[37], ref_Block.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_Resultm_Blocks_S3B1.ref.function );
    refalrts::reinit_unwrapped_closure( context[24], context[0] );
    refalrts::reinit_open_call( context[26] );
    refalrts::reinit_svar( context[25], context[5] );
    refalrts::push_stack( context[38] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[25], context[1] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[12], context[26] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    refalrts::use( res );
    refalrts::wrap_closure( context[24] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) t.idx ( # TkOpenBlock t.idx ) e.idx
    // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/16 )/9 (/12 e.Errors#1/18 )/13 t.Result#1/14 (/24 # TkOpenBlock/26 t.BlockPos#1/27 )/25 e.Tokens#1/20 >/1
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
    context[26] = refalrts::ident_left(  ident_TkOpenBlock, context[22], context[23] );
    if( ! context[26] )
      continue;
    // closed e.Blocks#1 as range 16
    // closed e.Errors#1 as range 18
    // closed e.Tokens#1 as range 20
    context[28] = refalrts::tvar_left( context[27], context[22], context[23] );
    if( ! context[28] )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    //DEBUG: t.Result#1: 14
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Blocks#1: 16
    //DEBUG: e.Errors#1: 18
    //DEBUG: e.Tokens#1: 20
    //DEBUG: t.BlockPos#1: 27

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Blocks#1/16 AsIs: )/9 AsIs: (/12 AsIs: e.Errors#1/18 HalfReuse: (/13 } # Error/29 t.BlockPos#1/27/30"Missed \':\'"/32 )/34 )/35 Tile{ AsIs: t.Result#1/14 } (/36 # TkColon/37 t.BlockPos#1/27/38 )/40 Tile{ AsIs: (/24 AsIs: # TkOpenBlock/26 AsIs: t.BlockPos#1/27 AsIs: )/25 AsIs: e.Tokens#1/20 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[29], ident_Error ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[30], context[31], context[27], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[32], context[33], "Missed \':\'", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[37], ident_TkColon ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[38], context[39], context[27], context[28]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[13] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[36], context[40] );
    refalrts::link_brackets( context[12], context[35] );
    refalrts::link_brackets( context[13], context[34] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[36], context[40] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[29], context[35] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx ) t.idx e.idx
  // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/16 )/9 (/12 e.Errors#1/18 )/13 t.Result#1/14 e.Tokens#1/20 >/1
  context[16] = context[6];
  context[17] = context[7];
  context[18] = context[10];
  context[19] = context[11];
  context[20] = context[2];
  context[21] = context[3];
  // closed e.Blocks#1 as range 16
  // closed e.Errors#1 as range 18
  // closed e.Tokens#1 as range 20
  //DEBUG: t.Result#1: 14
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Blocks#1: 16
  //DEBUG: e.Errors#1: 18
  //DEBUG: e.Tokens#1: 20

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Result-Blocks/4 s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/12 AsIs: e.Errors#1/18 AsIs: )/13 AsIs: t.Result#1/14 } Tile{ AsIs: (/8 AsIs: e.Blocks#1/16 AsIs: )/9 } Tile{ AsIs: e.Tokens#1/20 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Resultm_Blocks("Result-Blocks", 4078471296U, 2260943187U, func_Resultm_Blocks);


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

static refalrts::NativeReference nat_ref_Expression("Expression", 4078471296U, 2260943187U, func_Expression);


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

static refalrts::NativeReference nat_ref_Expressionm_Aux("Expression-Aux", 4078471296U, 2260943187U, func_Expressionm_Aux);


static refalrts::FnResult func_gen_DoExpression_B1S11B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: s.$ s.$ ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) t.$ ( e.$ ) ( e.$ ) s.$
  // </0 & DoExpression:1$11:1/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 t.idxVVT#0/11 (/15 e.idxVVTVB#0/13 )/16 (/19 e.idxVVTVTB#0/17 )/20 s.idxVVTVTT#0/21 >/1
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
    // </0 & DoExpression:1$11:1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/22 )/10 t.Pos#2/11 (/15 e.Collected#1/24 )/16 (/19 e.Tokens#1/26 )/20 # Classic/21 >/1
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
  // </0 & DoExpression:1$11:1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/22 )/10 t.Pos#2/11 (/15 e.Collected#1/24 )/16 (/19 e.Tokens#1/26 )/20 # Extended/21 >/1
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

static refalrts::NativeReference nat_ref_gen_DoExpression_B1S11B1("DoExpression:1$11:1", 4078471296U, 2260943187U, func_gen_DoExpression_B1S11B1);


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
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkOpenADT t.idx e.idx )
    // </0 & DoExpression:1/4 s.Mode#1/24 s.Kind#1/25 (/22 e.Errors#1/20 )/23 (/18 e.Collected#1/16 )/19 (/14 e.Tokens#1/12 )/15 (/9 # TkOpenADT/11 t.Pos#2/26 e.FuncName#2/7 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_right( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkOpenADT, context[7], context[8] );
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
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression-AfterADT/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 HalfReuse: </23 HalfReuse: & ClassicError/18 } s.Mode#1/24/28 Tile{ AsIs: t.Pos#2/26 }"Abstract data types is an extension"/29 >/31 Tile{ AsIs: )/19 AsIs: (/14 } Tile{ AsIs: e.Collected#1/16 } )/32 t.Pos#2/26/33 (/35 Tile{ AsIs: e.FuncName#2/7 } Tile{ AsIs: )/15 HalfReuse: </9 HalfReuse: & Expression-Aux/11 } s.Mode#1/24/36 s.Kind#1/25/37 Tile{ AsIs: e.Tokens#1/12 } Tile{ HalfReuse: >/10 AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[28], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[29], context[30], "Abstract data types is an extension", 35 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[33], context[34], context[26], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[35] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[36], context[24]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[37], context[25]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpressionm_AfterADT.ref.function );
    refalrts::reinit_open_call( context[23] );
    refalrts::reinit_name( context[18], ref_ClassicError.ref.function );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[11], ref_Expressionm_Aux.ref.function );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[9] );
    refalrts::link_brackets( context[35], context[15] );
    refalrts::link_brackets( context[14], context[32] );
    refalrts::link_brackets( context[22], context[19] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[15], context[11] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[32], context[35] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[19], context[14] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[28], context[28] );
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
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 } Tile{ HalfReuse: [*]/0 Reuse: & DoExpression:1$11:1/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 } Tile{ AsIs: t.Pos#2/26 } Tile{ AsIs: (/18 AsIs: e.Collected#1/16 AsIs: )/19 AsIs: (/14 AsIs: e.Tokens#1/12 AsIs: )/15 HalfReuse: {*}/9 HalfReuse: s.Mode1 #24/11 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_DoExpression_B1S11B1.ref.function );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression:1$12?1?0/4 AsIs: s.Mode#1/24 AsIs: s.Kind#1/25 AsIs: (/22 AsIs: e.Errors#1/20 AsIs: )/23 AsIs: (/18 AsIs: e.Collected#1/16 AsIs: )/19 AsIs: (/14 AsIs: e.Tokens#1/12 AsIs: )/15 } Tile{ AsIs: t.Pos#2/26 HalfReuse: s.Kind1 #25/10 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_gen_DoExpression_B1S12C1C0.ref.function );
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression:1$12?1?1/4 AsIs: e.Other#0/5 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_gen_DoExpression_B1S12C1C1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_B1("DoExpression:1", 4078471296U, 2260943187U, func_gen_DoExpression_B1);


static refalrts::FnResult func_gen_DoExpression_B1S12C1C0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  //FAST GEN: s.$ s.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$ e.$
  // </0 & DoExpression:1$12?1?0/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 (/13 e.idxVVTB#0/11 )/14 (/17 e.idxVVTTB#0/15 )/18 t.idxVVTTT#0/19 e.idxVVTTTV#0/2 >/1
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
    // </0 & DoExpression:1$12?1?0/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/21 )/10 (/13 e.Collected#1/23 )/14 (/17 e.Tokens#1/25 )/18 t.Pos#2/19 # Result/29 >/1
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
  // </0 & DoExpression:1$12?1?0/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/21 )/10 (/13 e.Collected#1/23 )/14 (/17 e.Tokens#1/25 )/18 t.Pos#2/19 e.Other#0/27 >/1
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
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression:1$12?1?1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Errors#1/21 AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/23 AsIs: )/14 AsIs: (/17 AsIs: e.Tokens#1/25 AsIs: )/18 } (/29 # TkOpenBlock/30 Tile{ AsIs: t.Pos#2/19 } )/31 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[30], ident_TkOpenBlock ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_DoExpression_B1S12C1C1.ref.function );
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

static refalrts::NativeReference nat_ref_gen_DoExpression_B1S12C1C0("DoExpression:1$12?1?0", 4078471296U, 2260943187U, func_gen_DoExpression_B1S12C1C0);


static refalrts::FnResult func_gen_DoExpression_B1S12C1C1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  //FAST GEN: s.$ s.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) ( e.$ ) ( e.$ ) t.$
  // </0 & DoExpression:1$12?1?1/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 (/13 e.idxVVTB#0/11 )/14 (/17 e.idxVVTTB#0/15 )/18 t.idxVVTTT#0/19 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkRedefinition t.idx )
    // </0 & DoExpression:1$12?1?1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/21 )/10 (/13 e.Collected#1/23 )/14 (/17 e.Tokens#1/25 )/18 (/19 # TkRedefinition/29 t.Pos#2/30 )/20 >/1
    context[21] = context[7];
    context[22] = context[8];
    context[23] = context[11];
    context[24] = context[12];
    context[25] = context[15];
    context[26] = context[16];
    context[27] = 0;
    context[28] = 0;
    if( ! refalrts::brackets_term( context[27], context[28], context[19] ) )
      continue;
    context[29] = refalrts::ident_left(  ident_TkRedefinition, context[27], context[28] );
    if( ! context[29] )
      continue;
    // closed e.Errors#1 as range 21
    // closed e.Collected#1 as range 23
    // closed e.Tokens#1 as range 25
    context[31] = refalrts::tvar_left( context[30], context[27], context[28] );
    if( ! context[31] )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Errors#1: 21
    //DEBUG: e.Collected#1: 23
    //DEBUG: e.Tokens#1: 25
    //DEBUG: t.Pos#2: 30

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 HalfReuse: </9 } & DoExpression-AddRedefinition/32 s.Kind#1/6/33 Tile{ AsIs: (/17 } Tile{ AsIs: e.Errors#1/21 } Tile{ HalfReuse: </18 HalfReuse: & ClassicError/19 HalfReuse: s.Mode1 #5/29 AsIs: t.Pos#2/30 HalfReuse: 'V'/20 HalfReuse: 'a'/1 }"riable redefinition is available in extended mode"/34 >/36 Tile{ AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/23 AsIs: )/14 } t.Pos#2/30/37 >/39 Tile{ AsIs: e.Tokens#1/25 } >/40 Tile{ ]] }
    if( ! refalrts::alloc_name( context[32], ref_DoExpressionm_AddRedefinition.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[33], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[34], context[35], "riable redefinition is available in extended mode", 49 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[37], context[38], context[30], context[31]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[40] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_open_call( context[18] );
    refalrts::reinit_name( context[19], ref_ClassicError.ref.function );
    refalrts::reinit_svar( context[29], context[5] );
    refalrts::reinit_char( context[20], 'V' );
    refalrts::reinit_char( context[1], 'a' );
    refalrts::push_stack( context[40] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[39] );
    refalrts::push_stack( context[9] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[17], context[10] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[40], context[40] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[37], context[39] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[34], context[36] );
    res = refalrts::splice_evar( res, context[18], context[1] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkScopeId t.idx )
    // </0 & DoExpression:1$12?1?1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/21 )/10 (/13 e.Collected#1/23 )/14 (/17 e.Tokens#1/25 )/18 (/19 # TkScopeId/29 t.Pos#2/30 )/20 >/1
    context[21] = context[7];
    context[22] = context[8];
    context[23] = context[11];
    context[24] = context[12];
    context[25] = context[15];
    context[26] = context[16];
    context[27] = 0;
    context[28] = 0;
    if( ! refalrts::brackets_term( context[27], context[28], context[19] ) )
      continue;
    context[29] = refalrts::ident_left(  ident_TkScopeId, context[27], context[28] );
    if( ! context[29] )
      continue;
    // closed e.Errors#1 as range 21
    // closed e.Collected#1 as range 23
    // closed e.Tokens#1 as range 25
    context[31] = refalrts::tvar_left( context[30], context[27], context[28] );
    if( ! context[31] )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Errors#1: 21
    //DEBUG: e.Collected#1: 23
    //DEBUG: e.Tokens#1: 25
    //DEBUG: t.Pos#2: 30

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Errors#1/21 HalfReuse: </10 HalfReuse: & ClassicError/13 } s.Mode#1/5/32 Tile{ AsIs: t.Pos#2/30 HalfReuse: '$'/20 }"SCOPEID is not supported in classic REFAL-5"/33 >/35 Tile{ AsIs: )/14 AsIs: (/17 } Tile{ AsIs: e.Collected#1/23 } (/36 # TkNumber/37 # Cookie1/38 Tile{ AsIs: )/18 AsIs: (/19 Reuse: # TkNumber/29 } # Cookie2/39 )/40 )/41 Tile{ AsIs: e.Tokens#1/25 } Tile{ AsIs: >/1 ]] }
    if (! refalrts::copy_stvar(context[32], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[33], context[34], "SCOPEID is not supported in classic REFAL-5", 43 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[37], ident_TkNumber ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[38], ident_Cookie1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[39], ident_Cookie2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[40] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[41] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[13], ref_ClassicError.ref.function );
    refalrts::reinit_char( context[20], '$' );
    refalrts::update_ident( context[29], ident_TkNumber );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[41] );
    refalrts::link_brackets( context[19], context[40] );
    refalrts::link_brackets( context[36], context[18] );
    refalrts::link_brackets( context[9], context[14] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[39], context[41] );
    res = refalrts::splice_evar( res, context[18], context[29] );
    res = refalrts::splice_evar( res, context[36], context[38] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    res = refalrts::splice_evar( res, context[33], context[35] );
    res = refalrts::splice_evar( res, context[30], context[20] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkError t.idx e.idx )
    // </0 & DoExpression:1$12?1?1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/21 )/10 (/13 e.Collected#1/23 )/14 (/17 e.Tokens#1/25 )/18 (/19 # TkError/29 t.Pos#2/30 e.Message#2/27 )/20 >/1
    context[21] = context[7];
    context[22] = context[8];
    context[23] = context[11];
    context[24] = context[12];
    context[25] = context[15];
    context[26] = context[16];
    context[27] = 0;
    context[28] = 0;
    if( ! refalrts::brackets_term( context[27], context[28], context[19] ) )
      continue;
    context[29] = refalrts::ident_left(  ident_TkError, context[27], context[28] );
    if( ! context[29] )
      continue;
    // closed e.Errors#1 as range 21
    // closed e.Collected#1 as range 23
    // closed e.Tokens#1 as range 25
    context[31] = refalrts::tvar_left( context[30], context[27], context[28] );
    if( ! context[31] )
      continue;
    // closed e.Message#2 as range 27
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Errors#1: 21
    //DEBUG: e.Collected#1: 23
    //DEBUG: e.Tokens#1: 25
    //DEBUG: t.Pos#2: 30
    //DEBUG: e.Message#2: 27

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Errors#1/21 HalfReuse: </10 HalfReuse: & UnexpectedToken/13 } Tile{ AsIs: (/19 AsIs: # TkError/29 AsIs: t.Pos#2/30 AsIs: e.Message#2/27 AsIs: )/20 AsIs: >/1 } Tile{ AsIs: )/14 AsIs: (/17 } Tile{ AsIs: e.Collected#1/23 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Tokens#1/25 } >/32 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[13], ref_UnexpectedToken.ref.function );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[9], context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[14], context[17] );
    res = refalrts::splice_evar( res, context[19], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx ( e.idx ) ( e.idx ) ( e.idx ) t.idx
  // </0 & DoExpression:1$12?1?1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/21 )/10 (/13 e.Collected#1/23 )/14 (/17 e.Tokens#1/25 )/18 t.OtherToken#2/19 >/1
  context[21] = context[7];
  context[22] = context[8];
  context[23] = context[11];
  context[24] = context[12];
  context[25] = context[15];
  context[26] = context[16];
  // closed e.Errors#1 as range 21
  // closed e.Collected#1 as range 23
  // closed e.Tokens#1 as range 25
  //DEBUG: t.OtherToken#2: 19
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Errors#1: 21
  //DEBUG: e.Collected#1: 23
  //DEBUG: e.Tokens#1: 25

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoExpression:1$12?1?1/4 s.Mode#1/5 s.Kind#1/6 {REMOVED TILE} (/17 {REMOVED TILE} )/18 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/9 AsIs: e.Errors#1/21 AsIs: )/10 AsIs: (/13 AsIs: e.Collected#1/23 AsIs: )/14 } Tile{ AsIs: t.OtherToken#2/19 } Tile{ AsIs: e.Tokens#1/25 } Tile{ ]] }
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoExpression_B1S12C1C1("DoExpression:1$12?1?1", 4078471296U, 2260943187U, func_gen_DoExpression_B1S12C1C1);


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

static refalrts::NativeReference nat_ref_DoExpression("DoExpression", 4078471296U, 2260943187U, func_DoExpression);


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

static refalrts::NativeReference nat_ref_DoExpressionm_AfterBracket("DoExpression-AfterBracket", 4078471296U, 2260943187U, func_DoExpressionm_AfterBracket);


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

static refalrts::NativeReference nat_ref_DoExpressionm_AfterCall("DoExpression-AfterCall", 4078471296U, 2260943187U, func_DoExpressionm_AfterCall);


static refalrts::FnResult func_DoExpressionm_AfterADT(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
  //FAST GEN: s.$ s.$ ( e.$ ) ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) ( e.$ ) t.$ ( e.$ ) ( e.$ ) ( e.$ ) ( s.$ t.$ e.$ ) e.$
  // </0 & DoExpression-AfterADT/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 (/13 e.idxVVTB#0/11 )/14 t.idxVVTT#0/15 (/19 e.idxVVTTVB#0/17 )/20 (/23 e.idxVVTTVTB#0/21 )/24 (/27 e.idxVVTTVTTB#0/25 )/28 (/31 s.idxVVTTVTTTB#0/33 t.idxVVTTVTTTBV#0/34 e.idxVVTTVTTTBVV#0/29 )/32 e.idxVVTTVTTTT#0/2 >/1
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
    // s.idx s.idx ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # TkCloseADT t.idx ) e.idx
    // </0 & DoExpression-AfterADT/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/36 )/10 (/13 e.Collected#1/38 )/14 t.OpenPos#1/15 (/19 e.FuncName#1/40 )/20 (/23 e.SubexprErrors#1/42 )/24 (/27 e.BracketTerms#1/44 )/28 (/31 # TkCloseADT/33 t.ClosePos#1/34 )/32 e.Tokens#1/48 >/1
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
    if( ! refalrts::ident_term(  ident_TkCloseADT, context[33] ) )
      continue;
    if( ! refalrts::empty_seq( context[46], context[47] ) )
      continue;
    // closed e.Errors#1 as range 36
    // closed e.Collected#1 as range 38
    // closed e.FuncName#1 as range 40
    // closed e.SubexprErrors#1 as range 42
    // closed e.BracketTerms#1 as range 44
    // closed e.Tokens#1 as range 48
    //DEBUG: t.OpenPos#1: 15
    //DEBUG: t.ClosePos#1: 34
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Errors#1: 36
    //DEBUG: e.Collected#1: 38
    //DEBUG: e.FuncName#1: 40
    //DEBUG: e.SubexprErrors#1: 42
    //DEBUG: e.BracketTerms#1: 44
    //DEBUG: e.Tokens#1: 48

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/10 (/13 {REMOVED TILE} {REMOVED TILE} (/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkCloseADT/33 t.ClosePos#1/34 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 } Tile{ AsIs: e.Errors#1/36 } Tile{ AsIs: e.SubexprErrors#1/42 } Tile{ AsIs: )/24 AsIs: (/27 } Tile{ AsIs: e.Collected#1/38 } Tile{ AsIs: (/31 } Tile{ HalfReuse: # ADT-Brackets/14 AsIs: t.OpenPos#1/15 AsIs: (/19 AsIs: e.FuncName#1/40 AsIs: )/20 } Tile{ AsIs: e.BracketTerms#1/44 } Tile{ AsIs: )/28 } Tile{ AsIs: )/32 AsIs: e.Tokens#1/48 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoExpression.ref.function );
    refalrts::reinit_ident( context[14], ident_ADTm_Brackets );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[27], context[32] );
    refalrts::link_brackets( context[31], context[28] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[9], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[32];
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[14], context[20] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[24], context[27] );
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx ( e.idx ) ( e.idx ) t.idx ( e.idx ) ( e.idx ) ( e.idx ) ( s.idx t.idx e.idx ) e.idx
  // </0 & DoExpression-AfterADT/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Errors#1/36 )/10 (/13 e.Collected#1/38 )/14 t.OpenPos#1/15 (/19 e.FuncName#1/40 )/20 (/23 e.SubexprErrors#1/42 )/24 (/27 e.BracketTerms#1/44 )/28 (/31 s.Type#1/33 t.Pos#1/34 e.Value#1/46 )/32 e.Tokens#1/48 >/1
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
  // closed e.Errors#1 as range 36
  // closed e.Collected#1 as range 38
  // closed e.FuncName#1 as range 40
  // closed e.SubexprErrors#1 as range 42
  // closed e.BracketTerms#1 as range 44
  // closed e.Value#1 as range 46
  // closed e.Tokens#1 as range 48
  //DEBUG: t.OpenPos#1: 15
  //DEBUG: t.Pos#1: 34
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: s.Type#1: 33
  //DEBUG: e.Errors#1: 36
  //DEBUG: e.Collected#1: 38
  //DEBUG: e.FuncName#1: 40
  //DEBUG: e.SubexprErrors#1: 42
  //DEBUG: e.BracketTerms#1: 44
  //DEBUG: e.Value#1: 46
  //DEBUG: e.Tokens#1: 48

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 } Tile{ AsIs: e.Errors#1/36 } Tile{ AsIs: e.SubexprErrors#1/42 } Tile{ AsIs: (/23 } # Error/50 t.Pos#1/34/51"Missed \']\'"/53 Tile{ AsIs: )/10 } Tile{ AsIs: )/24 AsIs: (/27 } Tile{ AsIs: e.Collected#1/38 } Tile{ AsIs: (/13 } Tile{ HalfReuse: # ADT-Brackets/14 AsIs: t.OpenPos#1/15 AsIs: (/19 AsIs: e.FuncName#1/40 AsIs: )/20 } Tile{ AsIs: e.BracketTerms#1/44 } )/55 Tile{ AsIs: )/28 AsIs: (/31 AsIs: s.Type#1/33 AsIs: t.Pos#1/34 AsIs: e.Value#1/46 AsIs: )/32 AsIs: e.Tokens#1/48 AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[50], ident_Error ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[51], context[52], context[34], context[35]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[53], context[54], "Missed \']\'", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[55] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoExpression.ref.function );
  refalrts::reinit_ident( context[14], ident_ADTm_Brackets );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[13], context[55] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[9], context[24] );
  refalrts::link_brackets( context[23], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[28];
  res = refalrts::splice_evar( res, context[55], context[55] );
  res = refalrts::splice_evar( res, context[44], context[45] );
  res = refalrts::splice_evar( res, context[14], context[20] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[50], context[54] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[42], context[43] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpressionm_AfterADT("DoExpression-AfterADT", 4078471296U, 2260943187U, func_DoExpressionm_AfterADT);


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

static refalrts::NativeReference nat_ref_DoExpressionm_AfterAmpersand("DoExpression-AfterAmpersand", 4078471296U, 2260943187U, func_DoExpressionm_AfterAmpersand);


static refalrts::FnResult func_DoExpressionm_AfterBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & DoExpression-AfterBlock/4 s.Mode#1/5 (/8 e.Errors#1/6 )/9 (/12 e.Collected#1/10 )/13 (/16 e.BlockErrors#1/14 )/17 (/20 e.Body#1/18 )/21 e.Tokens#1/2 >/1
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
  // closed e.Body#1 as range 18
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Errors#1: 6
  //DEBUG: e.Collected#1: 10
  //DEBUG: e.BlockErrors#1: 14
  //DEBUG: e.Body#1: 18
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoExpression/4 AsIs: s.Mode#1/5 HalfReuse: # Result/8 } Tile{ AsIs: (/20 } Tile{ AsIs: e.Errors#1/6 } Tile{ AsIs: e.BlockErrors#1/14 } Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/10 HalfReuse: (/13 HalfReuse: # Closure/16 } Tile{ AsIs: e.Body#1/18 } Tile{ AsIs: )/17 } Tile{ AsIs: )/21 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
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
  res = refalrts::splice_evar( res, context[9], context[16] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpressionm_AfterBlock("DoExpression-AfterBlock", 4078471296U, 2260943187U, func_DoExpressionm_AfterBlock);


static refalrts::FnResult func_DoExpressionm_AddRedefinition(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: s.$ ( e.$ ) ( e.$ ) t.$
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) t.$
  // </0 & DoExpression-AddRedefinition/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 t.idxVTT#0/14 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // # Pattern ( e.idx ) ( e.idx ( # TkVariable t.idx s.idx e.idx ) ) t.idx
    // </0 & DoExpression-AddRedefinition/4 # Pattern/5 (/8 e.Errors#1/16 )/9 (/12 e.Collected#1/18 (/22 # TkVariable/24 t.VarPos#1/25 s.VarType#1/27 e.Index#1/20 )/23 )/13 t.Pos#1/14 >/1
    context[16] = context[6];
    context[17] = context[7];
    context[18] = context[10];
    context[19] = context[11];
    if( ! refalrts::ident_term(  ident_Pattern, context[5] ) )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_right( context[20], context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  ident_TkVariable, context[20], context[21] );
    if( ! context[24] )
      continue;
    // closed e.Errors#1 as range 16
    // closed e.Collected#1 as range 18
    context[26] = refalrts::tvar_left( context[25], context[20], context[21] );
    if( ! context[26] )
      continue;
    if( ! refalrts::svar_left( context[27], context[20], context[21] ) )
      continue;
    // closed e.Index#1 as range 20
    //DEBUG: t.Pos#1: 14
    //DEBUG: e.Errors#1: 16
    //DEBUG: e.Collected#1: 18
    //DEBUG: t.VarPos#1: 25
    //DEBUG: s.VarType#1: 27
    //DEBUG: e.Index#1: 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoExpression-AddRedefinition/4 # Pattern/5 {REMOVED TILE} t.Pos#1/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.Errors#1/16 AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/18 AsIs: (/22 Reuse: # TkNewVariable/24 AsIs: t.VarPos#1/25 AsIs: s.VarType#1/27 AsIs: e.Index#1/20 AsIs: )/23 AsIs: )/13 } Tile{ ]] }
    refalrts::update_ident( context[24], ident_TkNewVariable );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[13] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Pattern ( e.idx ) ( e.idx ) t.idx
    // </0 & DoExpression-AddRedefinition/4 # Pattern/5 (/8 e.Errors#1/16 )/9 (/12 e.Collected#1/18 )/13 t.Pos#1/14 >/1
    context[16] = context[6];
    context[17] = context[7];
    context[18] = context[10];
    context[19] = context[11];
    if( ! refalrts::ident_term(  ident_Pattern, context[5] ) )
      continue;
    // closed e.Errors#1 as range 16
    // closed e.Collected#1 as range 18
    //DEBUG: t.Pos#1: 14
    //DEBUG: e.Errors#1: 16
    //DEBUG: e.Collected#1: 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#1/16 } Tile{ AsIs: (/8 } # Error/20 Tile{ AsIs: t.Pos#1/14 HalfReuse: 'R'/1 } 'e'/21 Tile{ HalfReuse: 'd'/4 HalfReuse: 'e'/5 }"finition sign expects variable before"/22 )/24 Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/18 AsIs: )/13 } Tile{ ]] }
    if( ! refalrts::alloc_ident( context[20], ident_Error ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], 'e' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[22], context[23], "finition sign expects variable before", 37 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_char( context[1], 'R' );
    refalrts::reinit_char( context[4], 'd' );
    refalrts::reinit_char( context[5], 'e' );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[0], context[9] );
    refalrts::link_brackets( context[8], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[9], context[13] );
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[4], context[5] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Result ( e.idx ) ( e.idx ) t.idx
  // </0 & DoExpression-AddRedefinition/4 # Result/5 (/8 e.Errors#1/16 )/9 (/12 e.Collected#1/18 )/13 t.Pos#1/14 >/1
  context[16] = context[6];
  context[17] = context[7];
  context[18] = context[10];
  context[19] = context[11];
  if( ! refalrts::ident_term(  ident_Result, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Errors#1 as range 16
  // closed e.Collected#1 as range 18
  //DEBUG: t.Pos#1: 14
  //DEBUG: e.Errors#1: 16
  //DEBUG: e.Collected#1: 18

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.Errors#1/16 } Tile{ AsIs: (/8 } # Error/20 Tile{ AsIs: t.Pos#1/14 HalfReuse: 'I'/1 } 'l'/21 Tile{ HalfReuse: 'l'/4 HalfReuse: 'e'/5 }"gal redefinition sign in result expression"/22 )/24 Tile{ AsIs: )/9 AsIs: (/12 AsIs: e.Collected#1/18 AsIs: )/13 } Tile{ ]] }
  if( ! refalrts::alloc_ident( context[20], ident_Error ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[21], 'l' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[22], context[23], "gal redefinition sign in result expression", 42 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_char( context[1], 'I' );
  refalrts::reinit_char( context[4], 'l' );
  refalrts::reinit_char( context[5], 'e' );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::link_brackets( context[8], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[13] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[4], context[5] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[14], context[1] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoExpressionm_AddRedefinition("DoExpression-AddRedefinition", 4078471296U, 2260943187U, func_DoExpressionm_AddRedefinition);


static refalrts::FnResult func_Expressionm_CheckBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
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
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets$1?1?0/4 AsIs: s.Mode#1/7 AsIs: s.Kind#1/8 AsIs: (/11 AsIs: e.Errors#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Expression#1/13 AsIs: )/16 HalfReuse: s.Type1 #21/19 } Tile{ AsIs: t.Pos#1/22 HalfReuse: (/20 AsIs: e.Tokens#1/5 HalfReuse: )/1 } </24 & OneOf/25 Tile{ AsIs: s.Type#1/21 } # TkCloseBracket/26 # TkCloseCall/27 # TkCloseADT/28 >/29 >/30 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[25], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[26], ident_TkCloseBracket ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], ident_TkCloseCall ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], ident_TkCloseADT ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_Expressionm_CheckBrackets_S1C1C0.ref.function );
    refalrts::reinit_svar( context[19], context[21] );
    refalrts::reinit_open_bracket( context[20] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[20], context[1] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[26], context[30] );
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

static refalrts::NativeReference nat_ref_Expressionm_CheckBrackets("Expression-CheckBrackets", 4078471296U, 2260943187U, func_Expressionm_CheckBrackets);


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

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1C1C0("Expression-CheckBrackets$1?1?0", 4078471296U, 2260943187U, func_gen_Expressionm_CheckBrackets_S1C1C0);


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

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1C1C1("Expression-CheckBrackets$1?1?1", 4078471296U, 2260943187U, func_gen_Expressionm_CheckBrackets_S1C1C1);


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

static refalrts::NativeReference nat_ref_Expressionm_CheckBracketsm_AfterSubexpr("Expression-CheckBrackets-AfterSubexpr", 4078471296U, 2260943187U, func_Expressionm_CheckBracketsm_AfterSubexpr);


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

static refalrts::NativeReference nat_ref_ClassicError("ClassicError", 4078471296U, 2260943187U, func_ClassicError);


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

static refalrts::NativeReference nat_ref_UnexpectedToken("UnexpectedToken", 4078471296U, 2260943187U, func_UnexpectedToken);


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
    // # TkOpenADT
    // </0 & TokName/4 # TkOpenADT/5 >/1
    if( ! refalrts::ident_term(  ident_TkOpenADT, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '['/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], '[' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkCloseADT
    // </0 & TokName/4 # TkCloseADT/5 >/1
    if( ! refalrts::ident_term(  ident_TkCloseADT, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: ']'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], ']' );
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
    // # TkEnum
    // </0 & TokName/4 # TkEnum/5 >/1
    if( ! refalrts::ident_term(  ident_TkEnum, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'N'/5 HalfReuse: 'U'/1 } 'M'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'M' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '$' );
    refalrts::reinit_char( context[4], 'E' );
    refalrts::reinit_char( context[5], 'N' );
    refalrts::reinit_char( context[1], 'U' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkEEnum
    // </0 & TokName/4 # TkEEnum/5 >/1
    if( ! refalrts::ident_term(  ident_TkEEnum, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'E'/5 HalfReuse: 'N'/1 }"UM"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "UM", 2 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '$' );
    refalrts::reinit_char( context[4], 'E' );
    refalrts::reinit_char( context[5], 'E' );
    refalrts::reinit_char( context[1], 'N' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkSwap
    // </0 & TokName/4 # TkSwap/5 >/1
    if( ! refalrts::ident_term(  ident_TkSwap, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'S'/4 HalfReuse: 'W'/5 HalfReuse: 'A'/1 } 'P'/6 Tile{ ]] }
    if( ! refalrts::alloc_char( context[6], 'P' ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '$' );
    refalrts::reinit_char( context[4], 'S' );
    refalrts::reinit_char( context[5], 'W' );
    refalrts::reinit_char( context[1], 'A' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[6] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkESwap
    // </0 & TokName/4 # TkESwap/5 >/1
    if( ! refalrts::ident_term(  ident_TkESwap, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'E'/4 HalfReuse: 'S'/5 HalfReuse: 'W'/1 }"AP"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "AP", 2 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '$' );
    refalrts::reinit_char( context[4], 'E' );
    refalrts::reinit_char( context[5], 'S' );
    refalrts::reinit_char( context[1], 'W' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkInclude
    // </0 & TokName/4 # TkInclude/5 >/1
    if( ! refalrts::ident_term(  ident_TkInclude, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'I'/4 HalfReuse: 'N'/5 HalfReuse: 'C'/1 }"LUDE"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "LUDE", 4 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '$' );
    refalrts::reinit_char( context[4], 'I' );
    refalrts::reinit_char( context[5], 'N' );
    refalrts::reinit_char( context[1], 'C' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkScopeId
    // </0 & TokName/4 # TkScopeId/5 >/1
    if( ! refalrts::ident_term(  ident_TkScopeId, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '$'/0 HalfReuse: 'S'/4 HalfReuse: 'C'/5 HalfReuse: 'O'/1 }"PEID"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "PEID", 4 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '$' );
    refalrts::reinit_char( context[4], 'S' );
    refalrts::reinit_char( context[5], 'C' );
    refalrts::reinit_char( context[1], 'O' );
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

  do {
    // # TkAmpersand
    // </0 & TokName/4 # TkAmpersand/5 >/1
    if( ! refalrts::ident_term(  ident_TkAmpersand, context[5] ) )
      continue;

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
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # TkRedefinition
    // </0 & TokName/4 # TkRedefinition/5 >/1
    if( ! refalrts::ident_term(  ident_TkRedefinition, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '\''/4 HalfReuse: '^'/5 HalfReuse: '\''/1 ]] }
    refalrts::reinit_char( context[4], '\'' );
    refalrts::reinit_char( context[5], '^' );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # TkNativeCode
  // </0 & TokName/4 # TkNativeCode/5 >/1
  if( ! refalrts::ident_term(  ident_TkNativeCode, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'n'/0 HalfReuse: 'a'/4 HalfReuse: 't'/5 HalfReuse: 'i'/1 }"ve code insertion"/6 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "ve code insertion", 17 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'n' );
  refalrts::reinit_char( context[4], 'a' );
  refalrts::reinit_char( context[5], 't' );
  refalrts::reinit_char( context[1], 'i' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TokName("TokName", 4078471296U, 2260943187U, func_TokName);


//End of file
