// This file automatically generated from 'R5-Parser.ref'
// Don't edit! Edit 'R5-Parser.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_708904305_1045449332
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
static refalrts::ExternalReference ref_AssignmentError("AssignmentError", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Block("Block", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Block_S2A1("Block$2=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Block_S2A1B1("Block$2=1:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Blockm_AfterSentence("Block-AfterSentence", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Blockm_AfterSentence_S1B1("Block-AfterSentence$1:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Blockm_AfterSentence_S1B1S6A1("Block-AfterSentence$1:1$6=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_CheckExceedBlocks("CheckExceedBlocks", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_CheckMistakenAssign("CheckMistakenAssign", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_CheckSentenceEnd("CheckSentenceEnd", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_CheckSentenceEnd_S1A1("CheckSentenceEnd$1=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_CheckSentenceEnd_S1A2("CheckSentenceEnd$1=2", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_ClassicError("ClassicError", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Div("Div", 0U, 0U);
static refalrts::ExternalReference ref_DoCheckExceedBlocks("DoCheckExceedBlocks", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_DoProgram("DoProgram", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoProgram_S1A3("DoProgram$1=3", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoProgram_S1C1("DoProgram$1?1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoProgram_S1C2("DoProgram$1?2", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_DoTokenChain("DoTokenChain", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1("DoTokenChain:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S6A1("DoTokenChain:1$6=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S6A2("DoTokenChain:1$6=2", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S6A2B1("DoTokenChain:1$6=2:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S7A1("DoTokenChain:1$7=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S9A1("DoTokenChain:1$9=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S9A2("DoTokenChain:1$9=2", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S9A3("DoTokenChain:1$9=3", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S9A3B1("DoTokenChain:1$9=3:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S11A1("DoTokenChain:1$11=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S11A1B1("DoTokenChain:1$11=1:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S11A1B1S2A1("DoTokenChain:1$11=1:1$2=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S11A1B1S2A1B1("DoTokenChain:1$11=1:1$2=1:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S12A2("DoTokenChain:1$12=2", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S12A3("DoTokenChain:1$12=3", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChain_B1S12C1("DoTokenChain:1$12?1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_DoTokenChainm_AddRedefinition("DoTokenChain-AddRedefinition", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_DoTokenChainm_AfterCall("DoTokenChain-AfterCall", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChainm_AfterCall_S4A1("DoTokenChain-AfterCall$4=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_DoTokenChainm_AfterCall_S4A2("DoTokenChain-AfterCall$4=2", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_ELm_AddErrorAt("EL-AddErrorAt", 0U, 0U);
static refalrts::ExternalReference ref_Evm_met("Ev-met", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Expression("Expression", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Expressionm_CheckBrackets("Expression-CheckBrackets", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Expressionm_CheckBrackets_S1A2("Expression-CheckBrackets$1=2", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Expressionm_CheckBrackets_S1A3("Expression-CheckBrackets$1=3", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Expressionm_CheckBrackets_S1C1("Expression-CheckBrackets$1?1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Function("Function", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Functionm_AfterBlock("Function-AfterBlock", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Include("Include", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Include_B1("Include:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Include_A1("Include=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Mod("Mod", 0U, 0U);
static refalrts::ExternalReference ref_Mu("Mu", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Mu_C1("Mu?1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Mul("Mul", 0U, 0U);
static refalrts::ExternalReference ref_NameList("NameList", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_NameList_S3C1("NameList$3?1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_NameListm_DoNames("NameList-DoNames", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S8C1("NameList-DoNames$8?1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_NameListm_DoNames_S8C2("NameList-DoNames$8?2", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_NameListTags("NameListTags", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_OneOf("OneOf", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Pattern("Pattern", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Program("Program", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_R5m_Parse("R5-Parse", 0U, 0U);
static refalrts::ExternalReference ref_Residue("Residue", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Residue_C1("Residue?1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Result("Result", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Resultm_Blocks("Result-Blocks", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Resultm_Blocks_S3A1("Result-Blocks$3=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Sentence("Sentence", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_SentencePart("SentencePart", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_SentencePartm_AfterPattern("SentencePart-AfterPattern", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_SentencePartm_AfterPattern_B1("SentencePart-AfterPattern:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_SentencePartm_AfterPattern_B1S1A2("SentencePart-AfterPattern:1$1=2", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_SentencePartm_AfterPattern_B1S1C1("SentencePart-AfterPattern:1$1?1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_SentencePartm_AfterPattern_B1S2C1("SentencePart-AfterPattern:1$2?1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_SentenceTail("SentenceTail", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_SentenceTail_S1A1("SentenceTail$1=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_SentenceTail_S1A2("SentenceTail$1=2", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_SentenceTail_S1A3("SentenceTail$1=3", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_SentenceTail_S2A1("SentenceTail$2=1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Sub("Sub", 0U, 0U);
static refalrts::ExternalReference ref_TkEEnum("TkEEnum", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_TkESwap("TkESwap", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_TkEnum("TkEnum", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_TkExtern("TkExtern", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_TkSwap("TkSwap", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_TokName("TokName", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_TokenChain("TokenChain", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Type("Type", 0U, 0U);
static refalrts::ExternalReference ref_UnexpectedToken("UnexpectedToken", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Unit("Unit", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Unit_B1("Unit:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Unit_B1S2B1("Unit:1$2:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Unit_B1S2C1("Unit:1$2?1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_Unit_B1S6C1("Unit:1$6?1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_UnitStartToken("UnitStartToken", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_Up("Up", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_u_u_FindMuPtr("__FindMuPtr", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Mum_Aux("__Mu-Aux", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 708904305U, 1045449332U);
static refalrts::ExternalReference ref_u_u_Stepm_End("__Step-End", 0U, 0U);
static refalrts::ExternalReference ref_u_u_Stepm_Start("__Step-Start", 0U, 0U);

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
  //2: e.Arg#1
  //5: t.Function#1
  //15: t.Function#1

  refalrts::reset_allocator();
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_Mu_C1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_u_u_Stepm_Start.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_u_u_Mum_Aux.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function();
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_u_u_Stepm_End.ref.function );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  refalrts::splice_to_freelist(context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Mu("Mu", 708904305U, 1045449332U, func_Mu);


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
    if( ! refalrts::alloc_number( context[9], 1045449332UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_u_u_FindMuPtr.ref.function );
    refalrts::reinit_number( context[5], 708904305UL );
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
  refalrts::reinit_number( context[5], 708904305UL );
  refalrts::reinit_number( context[7], 1045449332UL );
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

static refalrts::NativeReference nat_ref_gen_u_u_Mum_Aux_S13B1("__Mu-Aux$13:1", 708904305U, 1045449332U, func_gen_u_u_Mum_Aux_S13B1);


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

static refalrts::NativeReference nat_ref_u_u_Mum_Aux("__Mu-Aux", 708904305U, 1045449332U, func_u_u_Mum_Aux);


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
  //2: e.Arg#1
  //5: t.Function#1
  //15: t.Function#1

  refalrts::reset_allocator();
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  if( ! refalrts::alloc_open_call( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_gen_Residue_C1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_u_u_Stepm_Start.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_u_u_Mum_Aux.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[15], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[7] );
  res = refalrts::splice_elem( res, context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  res = refalrts::splice_elem( res, context[16] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[13] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[10] );
  res = refalrts::splice_elem( res, context[12] );
  res = refalrts::splice_elem( res, context[11] );
  res = refalrts::splice_elem( res, context[10] );
  res = refalrts::splice_elem( res, context[9] );
  res = refalrts::splice_elem( res, context[7] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function();
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

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.Function#1/5 {REMOVED TILE} {REMOVED TILE} >/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & __Step-End/4 } Tile{ HalfReuse: >/7 HalfReuse: </11 AsIs: s.Function-Ptr#2/12 } Tile{ AsIs: e.Arg#1/2 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_u_u_Stepm_End.ref.function );
    refalrts::reinit_close_call( context[7] );
    refalrts::reinit_open_call( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  refalrts::splice_to_freelist(context[7], context[8]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_Residue("Residue", 708904305U, 1045449332U, func_Residue);


static refalrts::FnResult func_R5m_Parse(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & R5-Parse/4 t.ErrorList#1/5 s.Mode#1/7 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Program/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Program.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_R5m_Parse("R5-Parse", 0U, 0U, func_R5m_Parse);


static refalrts::FnResult func_Program(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & Program/4 t.ErrorList#1/5 s.Mode#1/7 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoProgram/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } (/8 )/9 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoProgram.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Program("Program", 708904305U, 1045449332U, func_Program);


static refalrts::FnResult func_gen_DoProgram_S1A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & DoProgram$1=3/4 s.Mode#1/5 (/8 e.Units#1/6 )/9 t.ErrorList#4/10 (/14 e.NewUnits#4/12 )/15 e.Tokens#4/2 >/1
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
  // closed e.Units#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.NewUnits#4 as range 12
  // closed e.Tokens#4 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Units#1: 6
  //DEBUG: t.ErrorList#4: 10
  //DEBUG: e.NewUnits#4: 12
  //DEBUG: e.Tokens#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/9 {REMOVED TILE} (/14 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoProgram/4 } Tile{ AsIs: t.ErrorList#4/10 } Tile{ AsIs: s.Mode#1/5 AsIs: (/8 } Tile{ AsIs: e.Units#1/6 } Tile{ AsIs: e.NewUnits#4/12 } Tile{ AsIs: )/15 AsIs: e.Tokens#4/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_DoProgram.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoProgram_S1A3("DoProgram$1=3", 708904305U, 1045449332U, func_gen_DoProgram_S1A3);


static refalrts::FnResult func_DoProgram(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ s.$ ( e.$ ) t.$ e.$
  // </0 & DoProgram/4 t.idx#0/5 s.idxV#0/7 (/10 e.idxVVB#0/8 )/11 t.idxVVT#0/12 e.idxVVTV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.idxVVB#0 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVTV#0 as range 2
  do {
    // t.idx s.idx ( e.idx ) t.idx e.idx
    // </0 & DoProgram/4 t.ErrorList#1/5 s.Mode#1/7 (/10 e.Units#1/14 )/11 t.NextToken#1/12 e.Tokens#1/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    // closed e.Units#1 as range 14
    // closed e.Tokens#1 as range 16
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.NextToken#1: 12
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Units#1: 14
    //DEBUG: e.Tokens#1: 16
    //5: t.ErrorList#1
    //7: s.Mode#1
    //12: t.NextToken#1
    //14: e.Units#1
    //16: e.Tokens#1
    //21: t.NextToken#1

    refalrts::reset_allocator();
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], ref_gen_DoProgram_S1C1.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[21], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function();
    do {
      // </18 & DoProgram$1?1/22 (/25 s.Type#2/27 t.Pos#2/28 e.Value#2/23 )/26 >/19
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[20], context[21] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
        continue;
      context[29] = refalrts::tvar_left( context[28], context[23], context[24] );
      if( ! context[29] )
        continue;
      // closed e.Value#2 as range 23
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: s.Mode#1: 7
      //DEBUG: e.Units#1: 14
      //DEBUG: e.Tokens#1: 16
      //DEBUG: s.Type#2: 27
      //DEBUG: t.Pos#2: 28
      //DEBUG: e.Value#2: 23
      //5: t.ErrorList#1
      //7: s.Mode#1
      //12: t.NextToken#1
      //14: e.Units#1
      //16: e.Tokens#1
      //23: e.Value#2
      //27: s.Type#2
      //28: t.Pos#2
      //35: s.Type#2

      refalrts::reset_allocator();
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      if( ! refalrts::alloc_open_call( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[32], ref_gen_DoProgram_S1C2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], ref_OneOf.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[36] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[37], ref_UnitStartToken.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[38] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[31] );
      refalrts::push_stack( context[30] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[33] );
      res = refalrts::splice_elem( res, context[39] );
      refalrts::push_stack( context[38] );
      refalrts::push_stack( context[36] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_stvar( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function();
      do {
        // </30 & DoProgram$1?2/34 # True/35 >/31
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::call_left( context[32], context[33], context[30], context[31] );
        context[35] = refalrts::ident_left(  ident_True, context[32], context[33] );
        if( ! context[35] )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.NextToken#1: 12
        //DEBUG: s.Mode#1: 7
        //DEBUG: e.Units#1: 14
        //DEBUG: e.Tokens#1: 16
        //DEBUG: s.Type#2: 27
        //DEBUG: t.Pos#2: 28
        //DEBUG: e.Value#2: 23

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/27 t.Pos#2/28 e.Value#2/23 {REMOVED TILE} >/19 </30 & DoProgram$1?2/34 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: </18 HalfReuse: [*]/22 HalfReuse: & DoProgram$1=3/25 } Tile{ AsIs: s.Mode#1/7 AsIs: (/10 AsIs: e.Units#1/14 AsIs: )/11 } Tile{ HalfReuse: {*}/26 } Tile{ AsIs: </0 Reuse: & Unit/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.Mode1 #7/35 } Tile{ AsIs: t.NextToken#1/12 } Tile{ AsIs: e.Tokens#1/16 } Tile{ AsIs: >/31 AsIs: >/1 ]] }
        refalrts::reinit_closure_head( context[22] );
        refalrts::reinit_name( context[25], ref_gen_DoProgram_S1A3.ref.function );
        refalrts::reinit_unwrapped_closure( context[26], context[22] );
        refalrts::update_name( context[4], ref_Unit.ref.function );
        refalrts::reinit_svar( context[35], context[7] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[18] );
        refalrts::push_stack( context[31] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[10], context[11] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[31];
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[12], context[13] );
        res = refalrts::splice_evar( res, context[35], context[35] );
        res = refalrts::splice_evar( res, context[0], context[6] );
        res = refalrts::splice_evar( res, context[26], context[26] );
        res = refalrts::splice_evar( res, context[7], context[11] );
        res = refalrts::splice_evar( res, context[18], context[25] );
        refalrts::splice_to_freelist_open( trash_prev, res );
        refalrts::wrap_closure( context[26] );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      refalrts::splice_to_freelist(context[30], context[31]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence();

    refalrts::splice_to_freelist(context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( e.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & DoProgram/4 t.ErrorList#1/5 s.Mode#1/7 (/10 e.Units#1/14 )/11 (/12 # TkRefal5Mode/20 t.Pos#1/21 s.NewMode#1/23 )/13 e.Tokens#1/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkRefal5Mode, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.Units#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Units#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Pos#1: 21
    //DEBUG: s.NewMode#1: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/7 (/10 {REMOVED TILE} {REMOVED TILE} # TkRefal5Mode/20 t.Pos#1/21 s.NewMode#1/23 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoProgram/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.NewMode1 #23/11 AsIs: (/12 } Tile{ AsIs: e.Units#1/14 } Tile{ AsIs: )/13 AsIs: e.Tokens#1/16 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[11], context[23] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( e.idx ) ( # TkEOF t.idx )
    // </0 & DoProgram/4 t.ErrorList#1/5 s.Mode#1/7 (/10 e.Units#1/14 )/11 (/12 # TkEOF/20 t.Pos#1/21 )/13 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkEOF, context[18], context[19] );
    if( ! context[20] )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Units#1 as range 14
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Units#1: 14
    //DEBUG: t.Pos#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoProgram/4 {REMOVED TILE} s.Mode#1/7 (/10 {REMOVED TILE} )/11 (/12 # TkEOF/20 t.Pos#1/21 )/13 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: e.Units#1/14 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx s.idx ( e.idx ) t.idx e.idx
  // </0 & DoProgram/4 t.ErrorList#1/5 s.Mode#1/7 (/10 e.Units#1/14 )/11 t.Unexpected#1/12 e.Tokens#1/16 >/1
  context[14] = context[8];
  context[15] = context[9];
  context[16] = context[2];
  context[17] = context[3];
  // closed e.Units#1 as range 14
  // closed e.Tokens#1 as range 16
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Unexpected#1: 12
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Units#1: 14
  //DEBUG: e.Tokens#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoProgram/4 } </18 & UnexpectedToken/19 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/12 }"$EXTERN, $ENTRY, function name or special comment"/20 >/22 Tile{ AsIs: s.Mode#1/7 AsIs: (/10 AsIs: e.Units#1/14 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/16 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_UnexpectedToken.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "$EXTERN, $ENTRY, function name or special comment", 49 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoProgram("DoProgram", 708904305U, 1045449332U, func_DoProgram);


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

static refalrts::NativeReference nat_ref_UnitStartToken("UnitStartToken", 708904305U, 1045449332U, func_UnitStartToken);


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

static refalrts::NativeReference nat_ref_NameListTags("NameListTags", 708904305U, 1045449332U, func_NameListTags);


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

static refalrts::NativeReference nat_ref_OneOf("OneOf", 708904305U, 1045449332U, func_OneOf);


static refalrts::FnResult func_gen_Unit_B1S2B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Unit:1$2:1/4 s.Mode#1/5 t.Pos#2/6 s.Tag#2/8 t.ErrorList#4/9 (/13 e.Units#4/11 )/14 e.Tokens#4/2 >/1
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
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  // closed e.Units#4 as range 11
  // closed e.Tokens#4 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: t.Pos#2: 6
  //DEBUG: s.Tag#2: 8
  //DEBUG: t.ErrorList#4: 9
  //DEBUG: e.Units#4: 11
  //DEBUG: e.Tokens#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 } Tile{ AsIs: t.ErrorList#4/9 } Tile{ AsIs: s.Mode#1/5 AsIs: t.Pos#2/6 } </15 & TokName/16 Tile{ AsIs: s.Tag#2/8 } Tile{ AsIs: >/1 }" is a extension"/17 >/19 Tile{ AsIs: (/13 AsIs: e.Units#4/11 AsIs: )/14 } Tile{ AsIs: e.Tokens#4/2 } Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_TokName.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[17], context[18], " is a extension", 15 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ClassicError.ref.function );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1S2B1("Unit:1$2:1", 708904305U, 1045449332U, func_gen_Unit_B1S2B1);


static refalrts::FnResult func_gen_Unit_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  //FAST GEN: t.$ ( e.$ ) s.$ t.$ ( e.$ )
  //GLOBAL GEN: t.$ ( e.$ ) s.$ t.$ ( s.$ t.$ e.$ )
  // </0 & Unit:1/4 t.idx#0/10 (/14 e.idxVB#0/12 )/15 s.idxVT#0/16 t.idxVTV#0/17 (/7 s.idxVTVVB#0/9 t.idxVTVVBV#0/19 e.idxVTVVBVV#0/5 )/8 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.idxVB#0 as range 12
  if( ! refalrts::svar_left( context[16], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::tvar_left( context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTVVBVV#0 as range 5
  do {
    // t.idx ( e.idx ) s.idx t.idx ( # TkExtern t.idx )
    // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/21 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkExtern/9 t.Pos#2/19 )/8 >/1
    context[21] = context[12];
    context[22] = context[13];
    context[23] = context[5];
    context[24] = context[6];
    if( ! refalrts::ident_term(  ident_TkExtern, context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Tokens#1 as range 21
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 16
    //DEBUG: e.Tokens#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/16 t.NextToken#1/17 (/7 # TkExtern/9 t.Pos#2/19 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList/4 AsIs: t.ErrorList#1/10 HalfReuse: # TkExtern/14 AsIs: e.Tokens#1/21 HalfReuse: >/15 } Tile{ ]] }
    refalrts::update_name( context[4], ref_NameList.ref.function );
    refalrts::reinit_ident( context[14], ident_TkExtern );
    refalrts::reinit_close_call( context[15] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( e.idx ) s.idx t.idx ( s.idx t.idx )
    // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/21 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 s.Tag#2/9 t.Pos#2/19 )/8 >/1
    context[21] = context[12];
    context[22] = context[13];
    context[23] = context[5];
    context[24] = context[6];
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Tokens#1 as range 21
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 16
    //DEBUG: s.Tag#2: 9
    //DEBUG: e.Tokens#1: 21
    //9: s.Tag#2
    //10: t.ErrorList#1
    //16: s.Mode#1
    //17: t.NextToken#1
    //19: t.Pos#2
    //21: e.Tokens#1
    //30: s.Tag#2

    refalrts::reset_allocator();
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], ref_gen_Unit_B1S2C1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[30], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], ref_NameListTags.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[26] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[28] );
    res = refalrts::splice_elem( res, context[34] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[31] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_stvar( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_elem( res, context[27] );
    res = refalrts::splice_elem( res, context[25] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function();
    do {
      // </25 & Unit:1$2?1/29 # True/30 >/26
      context[27] = 0;
      context[28] = 0;
      context[29] = refalrts::call_left( context[27], context[28], context[25], context[26] );
      context[30] = refalrts::ident_left(  ident_True, context[27], context[28] );
      if( ! context[30] )
        continue;
      if( ! refalrts::empty_seq( context[27], context[28] ) )
        continue;
      //DEBUG: t.ErrorList#1: 10
      //DEBUG: t.NextToken#1: 17
      //DEBUG: t.Pos#2: 19
      //DEBUG: s.Mode#1: 16
      //DEBUG: s.Tag#2: 9
      //DEBUG: e.Tokens#1: 21

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/16 t.NextToken#1/17 {REMOVED TILE} s.Tag#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: </25 HalfReuse: [*]/29 HalfReuse: & Unit:1$2:1/30 HalfReuse: s.Mode1 #16/26 } Tile{ AsIs: t.Pos#2/19 HalfReuse: s.Tag2 #9/8 } Tile{ HalfReuse: {*}/7 } Tile{ AsIs: </0 Reuse: & NameList/4 AsIs: t.ErrorList#1/10 HalfReuse: s.Tag2 #9/14 AsIs: e.Tokens#1/21 HalfReuse: >/15 } Tile{ AsIs: >/1 ]] }
      refalrts::reinit_closure_head( context[29] );
      refalrts::reinit_name( context[30], ref_gen_Unit_B1S2B1.ref.function );
      refalrts::reinit_svar( context[26], context[16] );
      refalrts::reinit_svar( context[8], context[9] );
      refalrts::reinit_unwrapped_closure( context[7], context[29] );
      refalrts::update_name( context[4], ref_NameList.ref.function );
      refalrts::reinit_svar( context[14], context[9] );
      refalrts::reinit_close_call( context[15] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[25] );
      refalrts::push_stack( context[15] );
      refalrts::push_stack( context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[0], context[15] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[19], context[8] );
      res = refalrts::splice_evar( res, context[25], context[26] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      refalrts::wrap_closure( context[7] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    refalrts::splice_to_freelist(context[25], context[26]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( e.idx ) s.idx t.idx ( # TkInclude t.idx )
    // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/21 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkInclude/9 t.Pos#2/19 )/8 >/1
    context[21] = context[12];
    context[22] = context[13];
    context[23] = context[5];
    context[24] = context[6];
    if( ! refalrts::ident_term(  ident_TkInclude, context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Tokens#1 as range 21
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 16
    //DEBUG: e.Tokens#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkInclude/9 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Include/4 AsIs: t.ErrorList#1/10 HalfReuse: s.Mode1 #16/14 } Tile{ AsIs: t.Pos#2/19 } Tile{ AsIs: e.Tokens#1/21 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Include.ref.function );
    refalrts::reinit_svar( context[14], context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( e.idx ) s.idx t.idx ( # TkNativeCode t.idx e.idx )
    // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/21 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkNativeCode/9 t.Pos#2/19 e.Lines#2/23 )/8 >/1
    context[21] = context[12];
    context[22] = context[13];
    context[23] = context[5];
    context[24] = context[6];
    if( ! refalrts::ident_term(  ident_TkNativeCode, context[9] ) )
      continue;
    // closed e.Tokens#1 as range 21
    // closed e.Lines#2 as range 23
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 16
    //DEBUG: e.Tokens#1: 21
    //DEBUG: e.Lines#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Unit:1/4 {REMOVED TILE} {REMOVED TILE} )/15 s.Mode#1/16 t.NextToken#1/17 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/10 AsIs: (/14 } Tile{ AsIs: (/7 Reuse: # NativeBlock/9 AsIs: t.Pos#2/19 AsIs: e.Lines#2/23 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/21 } Tile{ ]] }
    refalrts::update_ident( context[9], ident_NativeBlock );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[14], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[7], context[1] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( e.idx ) s.idx t.idx ( # TkSemicolon t.idx )
    // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/21 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkSemicolon/9 t.Pos#2/19 )/8 >/1
    context[21] = context[12];
    context[22] = context[13];
    context[23] = context[5];
    context[24] = context[6];
    if( ! refalrts::ident_term(  ident_TkSemicolon, context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    // closed e.Tokens#1 as range 21
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 16
    //DEBUG: e.Tokens#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Unit:1/4 {REMOVED TILE} {REMOVED TILE} )/15 s.Mode#1/16 t.NextToken#1/17 (/7 # TkSemicolon/9 t.Pos#2/19 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/10 AsIs: (/14 } Tile{ AsIs: )/8 } Tile{ AsIs: e.Tokens#1/21 } Tile{ ]] }
    refalrts::link_brackets( context[14], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( e.idx ) s.idx t.idx ( s.idx t.idx e.idx )
  // </0 & Unit:1/4 t.ErrorList#1/10 (/14 e.Tokens#1/21 )/15 s.Mode#1/16 t.NextToken#1/17 (/7 s.Type#2/9 t.Pos#2/19 e.Value#2/23 )/8 >/1
  context[21] = context[12];
  context[22] = context[13];
  context[23] = context[5];
  context[24] = context[6];
  // closed e.Tokens#1 as range 21
  // closed e.Value#2 as range 23
  //DEBUG: t.ErrorList#1: 10
  //DEBUG: t.NextToken#1: 17
  //DEBUG: t.Pos#2: 19
  //DEBUG: s.Mode#1: 16
  //DEBUG: s.Type#2: 9
  //DEBUG: e.Tokens#1: 21
  //DEBUG: e.Value#2: 23
  //9: s.Type#2
  //10: t.ErrorList#1
  //16: s.Mode#1
  //17: t.NextToken#1
  //19: t.Pos#2
  //21: e.Tokens#1
  //23: e.Value#2
  //30: s.Type#2

  refalrts::reset_allocator();
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], ref_gen_Unit_B1S6C1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], ref_OneOf.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[30], context[9]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[31], ident_TkEntry ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[32], ident_TkName ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[25] );
  res = refalrts::splice_elem( res, context[26] );
  refalrts::push_stack( context[33] );
  refalrts::push_stack( context[28] );
  res = refalrts::splice_elem( res, context[33] );
  res = refalrts::splice_elem( res, context[32] );
  res = refalrts::splice_elem( res, context[31] );
  res = refalrts::splice_stvar( res, context[30] );
  res = refalrts::splice_elem( res, context[29] );
  res = refalrts::splice_elem( res, context[28] );
  res = refalrts::splice_elem( res, context[27] );
  res = refalrts::splice_elem( res, context[25] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function();
  do {
    // </25 & Unit:1$6?1/29 # True/30 >/26
    context[27] = 0;
    context[28] = 0;
    context[29] = refalrts::call_left( context[27], context[28], context[25], context[26] );
    context[30] = refalrts::ident_left(  ident_True, context[27], context[28] );
    if( ! context[30] )
      continue;
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextToken#1: 17
    //DEBUG: t.Pos#2: 19
    //DEBUG: s.Mode#1: 16
    //DEBUG: s.Type#2: 9
    //DEBUG: e.Tokens#1: 21
    //DEBUG: e.Value#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/15 s.Mode#1/16 {REMOVED TILE} (/7 s.Type#2/9 t.Pos#2/19 e.Value#2/23 )/8 </25 & Unit:1$6?1/29 # True/30 >/26 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Function/4 AsIs: t.ErrorList#1/10 HalfReuse: s.Mode1 #16/14 } Tile{ AsIs: t.NextToken#1/17 } Tile{ AsIs: e.Tokens#1/21 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Function.ref.function );
    refalrts::reinit_svar( context[14], context[16] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( context[14], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  refalrts::splice_to_freelist(context[25], context[26]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_gen_Unit_B1("Unit:1", 708904305U, 1045449332U, func_gen_Unit_B1);


static refalrts::FnResult func_Unit(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & Unit/4 t.ErrorList#1/5 s.Mode#1/7 t.NextToken#1/8 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: t.NextToken#1: 8
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Unit:1/10 Tile{ AsIs: t.ErrorList#1/5 } (/11 Tile{ AsIs: e.Tokens#1/2 } )/12 Tile{ AsIs: s.Mode#1/7 AsIs: t.NextToken#1/8 } {*}/13 t.NextToken#1/8/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[10], ref_gen_Unit_B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[13], context[4] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[14], context[15], context[8], context[9]))
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[15] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Unit("Unit", 708904305U, 1045449332U, func_Unit);


static refalrts::FnResult func_NameList(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: t.$ s.$ t.$ e.$
  //GLOBAL GEN: t.$ s.$ t.$ e.$
  // </0 & NameList/4 t.idx#0/5 s.idxV#0/7 t.idxVV#0/8 e.idxVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVV#0 as range 2
  do {
    // t.idx s.idx ( # TkName t.idx e.idx ) e.idx
    // </0 & NameList/4 t.ErrorList#1/5 s.Tag#1/7 (/8 # TkName/14 t.Pos#1/15 e.Name#1/12 )/9 e.Tokens#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
      continue;
    context[14] = refalrts::ident_left(  ident_TkName, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.Tokens#1 as range 10
    context[16] = refalrts::tvar_left( context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.Name#1 as range 12
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Tokens#1: 10
    //DEBUG: t.Pos#1: 15
    //DEBUG: e.Name#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/8 HalfReuse: </14 } & Mu/17 s.Tag#1/7/18 Tile{ AsIs: t.Pos#1/15 } Tile{ AsIs: e.Name#1/12 } >/19 Tile{ AsIs: )/9 AsIs: e.Tokens#1/10 AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[17], ref_Mu.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[18], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_NameListm_DoNames.ref.function );
    refalrts::reinit_open_call( context[14] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & NameList/4 t.ErrorList#1/5 s.Tag#1/7 (/8 # TkRefal5Mode/14 t.Pos#1/15 s.Mode#1/17 )/9 e.Tokens#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
      continue;
    context[14] = refalrts::ident_left(  ident_TkRefal5Mode, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.Tokens#1 as range 10
    context[16] = refalrts::tvar_left( context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    if( ! refalrts::svar_left( context[17], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Tokens#1: 10
    //DEBUG: t.Pos#1: 15
    //DEBUG: s.Mode#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/8 # TkRefal5Mode/14 t.Pos#1/15 s.Mode#1/17 )/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 } Tile{ AsIs: e.Tokens#1/10 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx s.idx t.idx e.idx
  // </0 & NameList/4 t.ErrorList#1/5 s.Tag#1/7 t.NextToken#1/8 e.Tokens#1/10 >/1
  context[10] = context[2];
  context[11] = context[3];
  // closed e.Tokens#1 as range 10
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.NextToken#1: 8
  //DEBUG: s.Tag#1: 7
  //DEBUG: e.Tokens#1: 10
  //5: t.ErrorList#1
  //7: s.Tag#1
  //8: t.NextToken#1
  //10: e.Tokens#1
  //15: t.NextToken#1

  refalrts::reset_allocator();
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[14], ref_gen_NameList_S3C1.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[15], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[12] );
  res = refalrts::splice_elem( res, context[13] );
  res = refalrts::splice_stvar( res, context[15] );
  res = refalrts::splice_elem( res, context[14] );
  res = refalrts::splice_elem( res, context[12] );
  refalrts::use( res );
  refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
  if (rec_res != refalrts::cSuccess)
    return rec_res;
  refalrts::this_is_generated_function();
  do {
    // </12 & NameList$3?1/16 (/19 s.Type#2/21 t.Pos#2/22 e.Value#2/17 )/20 >/13
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::call_left( context[14], context[15], context[12], context[13] );
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[14], context[15] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[21], context[17], context[18] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[17], context[18] );
    if( ! context[23] )
      continue;
    // closed e.Value#2 as range 17
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.NextToken#1: 8
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Tokens#1: 10
    //DEBUG: s.Type#2: 21
    //DEBUG: t.Pos#2: 22
    //DEBUG: e.Value#2: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Tag#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/21 {REMOVED TILE} e.Value#2/17 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#2/22 }"expected function name after "/24 Tile{ AsIs: </12 Reuse: & TokName/16 HalfReuse: s.Tag1 #7/19 } >/26" keywo"/27 Tile{ HalfReuse: 'r'/20 HalfReuse: 'd'/13 AsIs: >/1 } (/29 )/30 Tile{ AsIs: t.NextToken#1/8 } Tile{ AsIs: e.Tokens#1/10 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[24], context[25], "expected function name after ", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[27], context[28], " keywo", 6 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
    refalrts::update_name( context[16], ref_TokName.ref.function );
    refalrts::reinit_svar( context[19], context[7] );
    refalrts::reinit_char( context[20], 'r' );
    refalrts::reinit_char( context[13], 'd' );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    res = refalrts::splice_evar( res, context[12], context[19] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  refalrts::splice_to_freelist(context[12], context[13]);
  return refalrts::cRecognitionImpossible;
}

static refalrts::NativeReference nat_ref_NameList("NameList", 708904305U, 1045449332U, func_NameList);


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

static refalrts::NativeReference nat_ref_TkExtern("TkExtern", 708904305U, 1045449332U, func_TkExtern);


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

static refalrts::NativeReference nat_ref_TkEnum("TkEnum", 708904305U, 1045449332U, func_TkEnum);


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

static refalrts::NativeReference nat_ref_TkEEnum("TkEEnum", 708904305U, 1045449332U, func_TkEEnum);


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

static refalrts::NativeReference nat_ref_TkSwap("TkSwap", 708904305U, 1045449332U, func_TkSwap);


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

static refalrts::NativeReference nat_ref_TkESwap("TkESwap", 708904305U, 1045449332U, func_TkESwap);


static refalrts::FnResult func_NameListm_DoNames(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  //FAST GEN: t.$ s.$ ( e.$ ) t.$ e.$
  //GLOBAL GEN: t.$ s.$ ( e.$ ) t.$ e.$
  // </0 & NameList-DoNames/4 t.idx#0/5 s.idxV#0/7 (/10 e.idxVVB#0/8 )/11 t.idxVVT#0/12 e.idxVVTV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.idxVVB#0 as range 8
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVTV#0 as range 2
  do {
    // t.idx s.idx ( e.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/14 )/11 (/12 # TkRefal5Mode/20 t.Pos#1/21 s.Mode#1/23 )/13 e.Tokens#1/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkRefal5Mode, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.Units#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::svar_left( context[23], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Units#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Pos#1: 21
    //DEBUG: s.Mode#1: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/12 # TkRefal5Mode/20 t.Pos#1/21 s.Mode#1/23 )/13 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.Units#1/14 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( context[11], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( e.idx ) ( # TkComma t.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/14 )/11 (/12 # TkComma/20 t.CommaPos#1/26 )/13 (/23 # TkRefal5Mode/25 t.ModePos#1/28 s.Mode#1/30 )/24 e.Tokens#1/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkComma, context[18], context[19] );
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
    // closed e.Units#1 as range 14
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
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Units#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.CommaPos#1: 26
    //DEBUG: t.ModePos#1: 28
    //DEBUG: s.Mode#1: 30

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/23 # TkRefal5Mode/25 t.ModePos#1/28 s.Mode#1/30 )/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.Units#1/14 AsIs: )/11 AsIs: (/12 AsIs: # TkComma/20 AsIs: t.CommaPos#1/26 AsIs: )/13 } Tile{ AsIs: e.Tokens#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    refalrts::splice_to_freelist_open( context[13], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( e.idx ) ( # TkComma t.idx ) ( # TkName t.idx e.idx ) e.idx
    // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/14 )/11 (/12 # TkComma/20 t.CommaPos#1/26 )/13 (/23 # TkName/25 t.NamePos#1/28 e.Name#1/21 )/24 e.Tokens#1/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkComma, context[18], context[19] );
    if( ! context[20] )
      continue;
    context[21] = 0;
    context[22] = 0;
    context[23] = refalrts::brackets_left( context[21], context[22], context[16], context[17] );
    if( ! context[23] )
      continue;
    refalrts::bracket_pointers(context[23], context[24]);
    context[25] = refalrts::ident_left(  ident_TkName, context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.Units#1 as range 14
    // closed e.Tokens#1 as range 16
    context[27] = refalrts::tvar_left( context[26], context[18], context[19] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    context[29] = refalrts::tvar_left( context[28], context[21], context[22] );
    if( ! context[29] )
      continue;
    // closed e.Name#1 as range 21
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Units#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.CommaPos#1: 26
    //DEBUG: t.NamePos#1: 28
    //DEBUG: e.Name#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.CommaPos#1/26 )/13 (/23 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 AsIs: t.ErrorList#1/5 AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.Units#1/14 HalfReuse: </11 HalfReuse: & Mu/12 HalfReuse: s.Tag1 #7/20 } Tile{ AsIs: t.NamePos#1/28 } Tile{ AsIs: e.Name#1/21 } Tile{ HalfReuse: >/25 } Tile{ AsIs: )/24 AsIs: e.Tokens#1/16 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[11] );
    refalrts::reinit_name( context[12], ref_Mu.ref.function );
    refalrts::reinit_svar( context[20], context[7] );
    refalrts::reinit_close_call( context[25] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[24] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::splice_to_freelist_open( context[20], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( e.idx ) ( # TkSemicolon t.idx ) e.idx
    // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/14 )/11 (/12 # TkSemicolon/20 t.Pos#1/21 )/13 e.Tokens#1/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkSemicolon, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.Units#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Units#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Pos#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & NameList-DoNames/4 {REMOVED TILE} s.Tag#1/7 {REMOVED TILE} (/12 # TkSemicolon/20 t.Pos#1/21 )/13 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: (/10 AsIs: e.Units#1/14 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/16 } Tile{ ]] }
    refalrts::link_brackets( context[10], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( e.idx ) ( # TkComma t.idx ) e.idx
    // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/14 )/11 (/12 # TkComma/20 t.Pos#1/21 )/13 e.Tokens#1/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkComma, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.Units#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Units#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Pos#1: 21

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 } </23 & EL-AddErrorAt/24 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/21 } Tile{ HalfReuse: 'e'/11 HalfReuse: 'x'/12 HalfReuse: 'p'/20 }"ected name after comma"/25 >/27 Tile{ AsIs: s.Tag#1/7 AsIs: (/10 } Tile{ AsIs: e.Units#1/14 } Tile{ AsIs: )/13 AsIs: e.Tokens#1/16 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ref_ELm_AddErrorAt.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[25], context[26], "ected name after comma", 22 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[11], 'e' );
    refalrts::reinit_char( context[12], 'x' );
    refalrts::reinit_char( context[20], 'p' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[13] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[11], context[20] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( e.idx ) ( # TkName t.idx e.idx ) ( # TkOpenBlock t.idx ) e.idx
    // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/14 )/11 (/12 # TkName/20 t.NamePos#1/26 e.Name#1/18 )/13 (/23 # TkOpenBlock/25 t.BracketPos#1/28 )/24 e.Tokens#1/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkName, context[18], context[19] );
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
    // closed e.Units#1 as range 14
    // closed e.Tokens#1 as range 16
    context[27] = refalrts::tvar_left( context[26], context[18], context[19] );
    if( ! context[27] )
      continue;
    // closed e.Name#1 as range 18
    context[29] = refalrts::tvar_left( context[28], context[21], context[22] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Units#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.NamePos#1: 26
    //DEBUG: e.Name#1: 18
    //DEBUG: t.BracketPos#1: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } t.NamePos#1/26/30"missed semicolon after previous "/32 </34 & TokName/35 Tile{ AsIs: s.Tag#1/7 } >/36" declaration"/37 Tile{ AsIs: >/1 } Tile{ AsIs: (/10 AsIs: e.Units#1/14 AsIs: )/11 AsIs: (/12 AsIs: # TkName/20 AsIs: t.NamePos#1/26 AsIs: e.Name#1/18 AsIs: )/13 AsIs: (/23 AsIs: # TkOpenBlock/25 AsIs: t.BracketPos#1/28 AsIs: )/24 } Tile{ AsIs: e.Tokens#1/16 } Tile{ ]] }
    if (! refalrts::copy_evar(context[30], context[31], context[26], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[32], context[33], "missed semicolon after previous ", 32 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[35], ref_TokName.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[37], context[38], " declaration", 12 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[24] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[36], context[38] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[30], context[35] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( e.idx ) ( # TkName t.idx e.idx ) e.idx
    // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/14 )/11 (/12 # TkName/20 t.Pos#1/21 e.Name#1/18 )/13 e.Tokens#1/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    if( ! refalrts::brackets_term( context[18], context[19], context[12] ) )
      continue;
    context[20] = refalrts::ident_left(  ident_TkName, context[18], context[19] );
    if( ! context[20] )
      continue;
    // closed e.Units#1 as range 14
    // closed e.Tokens#1 as range 16
    context[22] = refalrts::tvar_left( context[21], context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Name#1 as range 18
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Units#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.Pos#1: 21
    //DEBUG: e.Name#1: 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Name#1/18 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 } </23 & EL-AddErrorAt/24 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/21 } Tile{ HalfReuse: 'm'/11 HalfReuse: 'i'/12 HalfReuse: 's'/20 }"sed comma after external name"/25 >/27 Tile{ AsIs: s.Tag#1/7 AsIs: (/10 } Tile{ AsIs: e.Units#1/14 } Tile{ AsIs: )/13 AsIs: e.Tokens#1/16 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ref_ELm_AddErrorAt.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[25], context[26], "sed comma after external name", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[11], 'm' );
    refalrts::reinit_char( context[12], 'i' );
    refalrts::reinit_char( context[20], 's' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[13] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[10] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[11], context[20] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( e.idx ) t.idx e.idx
    // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/14 )/11 t.NextToken#1/12 e.Tokens#1/16 >/1
    context[14] = context[8];
    context[15] = context[9];
    context[16] = context[2];
    context[17] = context[3];
    // closed e.Units#1 as range 14
    // closed e.Tokens#1 as range 16
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.NextToken#1: 12
    //DEBUG: s.Tag#1: 7
    //DEBUG: e.Units#1: 14
    //DEBUG: e.Tokens#1: 16
    //5: t.ErrorList#1
    //7: s.Tag#1
    //12: t.NextToken#1
    //14: e.Units#1
    //16: e.Tokens#1
    //21: t.NextToken#1

    refalrts::reset_allocator();
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], ref_gen_NameListm_DoNames_S8C1.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[21], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[18] );
    res = refalrts::splice_elem( res, context[19] );
    res = refalrts::splice_stvar( res, context[21] );
    res = refalrts::splice_elem( res, context[20] );
    res = refalrts::splice_elem( res, context[18] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function();
    do {
      // </18 & NameList-DoNames$8?1/22 (/25 s.Type#2/27 t.Pos#2/28 e.Value#2/23 )/26 >/19
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::call_left( context[20], context[21], context[18], context[19] );
      context[23] = 0;
      context[24] = 0;
      context[25] = refalrts::brackets_left( context[23], context[24], context[20], context[21] );
      if( ! context[25] )
        continue;
      refalrts::bracket_pointers(context[25], context[26]);
      if( ! refalrts::empty_seq( context[20], context[21] ) )
        continue;
      if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
        continue;
      context[29] = refalrts::tvar_left( context[28], context[23], context[24] );
      if( ! context[29] )
        continue;
      // closed e.Value#2 as range 23
      //DEBUG: t.ErrorList#1: 5
      //DEBUG: t.NextToken#1: 12
      //DEBUG: s.Tag#1: 7
      //DEBUG: e.Units#1: 14
      //DEBUG: e.Tokens#1: 16
      //DEBUG: s.Type#2: 27
      //DEBUG: t.Pos#2: 28
      //DEBUG: e.Value#2: 23
      //5: t.ErrorList#1
      //7: s.Tag#1
      //12: t.NextToken#1
      //14: e.Units#1
      //16: e.Tokens#1
      //23: e.Value#2
      //27: s.Type#2
      //28: t.Pos#2
      //35: s.Type#2

      refalrts::reset_allocator();
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      if( ! refalrts::alloc_open_call( context[30] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[32], ref_gen_NameListm_DoNames_S8C2.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[33] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[34], ref_OneOf.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[36], ident_TkExtern ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], ident_TkEntry ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[38], ident_TkEOF ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[39] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[31] ) )
        return refalrts::cNoMemory;
      refalrts::push_stack( context[31] );
      refalrts::push_stack( context[30] );
      res = refalrts::splice_elem( res, context[31] );
      refalrts::push_stack( context[39] );
      refalrts::push_stack( context[33] );
      res = refalrts::splice_elem( res, context[39] );
      res = refalrts::splice_elem( res, context[38] );
      res = refalrts::splice_elem( res, context[37] );
      res = refalrts::splice_elem( res, context[36] );
      res = refalrts::splice_stvar( res, context[35] );
      res = refalrts::splice_elem( res, context[34] );
      res = refalrts::splice_elem( res, context[33] );
      res = refalrts::splice_elem( res, context[32] );
      res = refalrts::splice_elem( res, context[30] );
      refalrts::use( res );
      refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
      if (rec_res != refalrts::cSuccess)
        return rec_res;
      refalrts::this_is_generated_function();
      do {
        // </30 & NameList-DoNames$8?2/34 # True/35 >/31
        context[32] = 0;
        context[33] = 0;
        context[34] = refalrts::call_left( context[32], context[33], context[30], context[31] );
        context[35] = refalrts::ident_left(  ident_True, context[32], context[33] );
        if( ! context[35] )
          continue;
        if( ! refalrts::empty_seq( context[32], context[33] ) )
          continue;
        //DEBUG: t.ErrorList#1: 5
        //DEBUG: t.NextToken#1: 12
        //DEBUG: s.Tag#1: 7
        //DEBUG: e.Units#1: 14
        //DEBUG: e.Tokens#1: 16
        //DEBUG: s.Type#2: 27
        //DEBUG: t.Pos#2: 28
        //DEBUG: e.Value#2: 23

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} s.Tag#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#2/27 {REMOVED TILE} e.Value#2/23 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#2/28 } Tile{ HalfReuse: 'm'/18 HalfReuse: 'i'/22 HalfReuse: 's'/25 }"sed sem"/36 Tile{ HalfReuse: 'i'/26 HalfReuse: 'c'/19 HalfReuse: 'o'/30 HalfReuse: 'l'/34 HalfReuse: 'o'/35 HalfReuse: 'n'/31 AsIs: >/1 } Tile{ AsIs: (/10 AsIs: e.Units#1/14 AsIs: )/11 AsIs: t.NextToken#1/12 } Tile{ AsIs: e.Tokens#1/16 } Tile{ ]] }
        if( ! refalrts::alloc_chars( context[36], context[37], "sed sem", 7 ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
        refalrts::reinit_char( context[18], 'm' );
        refalrts::reinit_char( context[22], 'i' );
        refalrts::reinit_char( context[25], 's' );
        refalrts::reinit_char( context[26], 'i' );
        refalrts::reinit_char( context[19], 'c' );
        refalrts::reinit_char( context[30], 'o' );
        refalrts::reinit_char( context[34], 'l' );
        refalrts::reinit_char( context[35], 'o' );
        refalrts::reinit_char( context[31], 'n' );
        refalrts::link_brackets( context[10], context[11] );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = arg_end->next;
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[10], context[13] );
        res = refalrts::splice_evar( res, context[26], context[1] );
        res = refalrts::splice_evar( res, context[36], context[37] );
        res = refalrts::splice_evar( res, context[18], context[25] );
        res = refalrts::splice_evar( res, context[28], context[29] );
        refalrts::splice_to_freelist_open( context[6], res );
        return refalrts::cSuccess;
      } while ( 0 );
      refalrts::stop_sentence();

      refalrts::splice_to_freelist(context[30], context[31]);
      continue;
    } while ( 0 );
    refalrts::stop_sentence();

    refalrts::splice_to_freelist(context[18], context[19]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx s.idx ( e.idx ) t.idx e.idx
  // </0 & NameList-DoNames/4 t.ErrorList#1/5 s.Tag#1/7 (/10 e.Units#1/14 )/11 t.NextToken#1/12 e.Tokens#1/16 >/1
  context[14] = context[8];
  context[15] = context[9];
  context[16] = context[2];
  context[17] = context[3];
  // closed e.Units#1 as range 14
  // closed e.Tokens#1 as range 16
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.NextToken#1: 12
  //DEBUG: s.Tag#1: 7
  //DEBUG: e.Units#1: 14
  //DEBUG: e.Tokens#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 AsIs: & NameList-DoNames/4 } </18 & UnexpectedToken/19 Tile{ AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.NextToken#1/12 }"comma or semicolon"/20 >/22 Tile{ AsIs: s.Tag#1/7 AsIs: (/10 AsIs: e.Units#1/14 AsIs: )/11 } Tile{ AsIs: e.Tokens#1/16 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_UnexpectedToken.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "comma or semicolon", 18 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameListm_DoNames("NameList-DoNames", 708904305U, 1045449332U, func_NameListm_DoNames);


static refalrts::FnResult func_gen_Include_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: t.$ ( e.$ ) t.$ t.$
  //GLOBAL GEN: t.$ ( e.$ ) t.$ t.$
  // </0 & Include:1/4 t.idx#0/5 (/9 e.idxVB#0/7 )/10 t.idxVT#0/11 t.idxVTV#0/13 >/1
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
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // t.idx ( e.idx ) ( # TkCompound t.idx e.idx ) ( # TkSemicolon t.idx )
    // </0 & Include:1/4 t.ErrorList#2/5 (/9 e.Tokens#1/15 )/10 (/11 # TkCompound/21 t.FilePos#3/23 e.FileName#3/17 )/12 (/13 # TkSemicolon/22 t.SemicolonPos#3/25 )/14 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
      continue;
    context[19] = 0;
    context[20] = 0;
    if( ! refalrts::brackets_term( context[19], context[20], context[13] ) )
      continue;
    context[21] = refalrts::ident_left(  ident_TkCompound, context[17], context[18] );
    if( ! context[21] )
      continue;
    context[22] = refalrts::ident_left(  ident_TkSemicolon, context[19], context[20] );
    if( ! context[22] )
      continue;
    // closed e.Tokens#1 as range 15
    context[24] = refalrts::tvar_left( context[23], context[17], context[18] );
    if( ! context[24] )
      continue;
    // closed e.FileName#3 as range 17
    context[26] = refalrts::tvar_left( context[25], context[19], context[20] );
    if( ! context[26] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    //DEBUG: t.ErrorList#2: 5
    //DEBUG: e.Tokens#1: 15
    //DEBUG: t.FilePos#3: 23
    //DEBUG: e.FileName#3: 17
    //DEBUG: t.SemicolonPos#3: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Include:1/4 {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} # TkSemicolon/22 t.SemicolonPos#3/25 )/14 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#2/5 } Tile{ HalfReuse: (/10 AsIs: (/11 Reuse: # Include/21 AsIs: t.FilePos#3/23 AsIs: e.FileName#3/17 AsIs: )/12 HalfReuse: )/13 } Tile{ AsIs: e.Tokens#1/15 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[10] );
    refalrts::update_ident( context[21], ident_Include );
    refalrts::reinit_close_bracket( context[13] );
    refalrts::link_brackets( context[10], context[13] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[10], context[13] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx ( e.idx ) ( # TkCompound t.idx e.idx ) t.idx
    // </0 & Include:1/4 t.ErrorList#2/5 (/9 e.Tokens#1/15 )/10 (/11 # TkCompound/19 t.FilePos#3/20 e.FileName#3/17 )/12 t.Unexpected#3/13 >/1
    context[15] = context[7];
    context[16] = context[8];
    context[17] = 0;
    context[18] = 0;
    if( ! refalrts::brackets_term( context[17], context[18], context[11] ) )
      continue;
    context[19] = refalrts::ident_left(  ident_TkCompound, context[17], context[18] );
    if( ! context[19] )
      continue;
    // closed e.Tokens#1 as range 15
    context[21] = refalrts::tvar_left( context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    // closed e.FileName#3 as range 17
    //DEBUG: t.ErrorList#2: 5
    //DEBUG: t.Unexpected#3: 13
    //DEBUG: e.Tokens#1: 15
    //DEBUG: t.FilePos#3: 20
    //DEBUG: e.FileName#3: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#2/5 } Tile{ AsIs: t.Unexpected#3/13 HalfReuse: '\''/1 }";\'"/22 Tile{ HalfReuse: >/9 } Tile{ HalfReuse: (/10 AsIs: (/11 Reuse: # Include/19 AsIs: t.FilePos#3/20 AsIs: e.FileName#3/17 AsIs: )/12 } )/24 t.Unexpected#3/13/25 Tile{ AsIs: e.Tokens#1/15 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[22], context[23], ";\'", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[13], context[14]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
    refalrts::reinit_char( context[1], '\'' );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_open_bracket( context[10] );
    refalrts::update_ident( context[19], ident_Include );
    refalrts::link_brackets( context[10], context[24] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[10], context[12] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[13], context[1] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( e.idx ) t.idx t.idx
  // </0 & Include:1/4 t.ErrorList#2/5 (/9 e.Tokens#1/15 )/10 t.Unexpected1#3/11 t.Unexpected2#3/13 >/1
  context[15] = context[7];
  context[16] = context[8];
  // closed e.Tokens#1 as range 15
  //DEBUG: t.ErrorList#2: 5
  //DEBUG: t.Unexpected1#3: 11
  //DEBUG: t.Unexpected2#3: 13
  //DEBUG: e.Tokens#1: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#2/5 } t.Unexpected1#3/11/17"compound symbol"/19 Tile{ AsIs: >/1 } Tile{ AsIs: (/9 } Tile{ AsIs: )/10 AsIs: t.Unexpected1#3/11 AsIs: t.Unexpected2#3/13 } Tile{ AsIs: e.Tokens#1/15 } Tile{ ]] }
  if (! refalrts::copy_evar(context[17], context[18], context[11], context[12]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[19], context[20], "compound symbol", 15 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Include_B1("Include:1", 708904305U, 1045449332U, func_gen_Include_B1);


static refalrts::FnResult func_gen_Include_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Include=1/4 (/7 e.Tokens#1/5 )/8 t.Token1#1/9 t.Token2#1/11 t.ErrorList#2/13 >/1
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
  // closed e.Tokens#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Tokens#1: 5
  //DEBUG: t.Token1#1: 9
  //DEBUG: t.Token2#1: 11
  //DEBUG: t.ErrorList#2: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Include:1/15 Tile{ AsIs: t.ErrorList#2/13 } Tile{ AsIs: (/7 AsIs: e.Tokens#1/5 AsIs: )/8 } {*}/16 Tile{ AsIs: t.Token1#1/9 AsIs: t.Token2#1/11 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[15], ref_gen_Include_B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[16], context[4] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[12] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[16] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Include_A1("Include=1", 708904305U, 1045449332U, func_gen_Include_A1);


static refalrts::FnResult func_Include(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Include/4 t.ErrorList#1/5 s.Mode#1/7 t.Pos#1/8 t.Token1#1/10 t.Token2#1/12 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: t.Pos#1: 8
  //DEBUG: t.Token1#1: 10
  //DEBUG: t.Token2#1: 12
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </14 [*]/15 & Include=1/16 (/17 Tile{ AsIs: e.Tokens#1/2 } )/18 Tile{ AsIs: t.Token1#1/10 AsIs: t.Token2#1/12 } {*}/19 Tile{ AsIs: </0 Reuse: & ClassicError/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: t.Pos#1/8 }"$INCLUDE is extension"/20 >/22 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_gen_Include_A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[19], context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "$INCLUDE is extension", 21 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[22] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ClassicError.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Include("Include", 708904305U, 1045449332U, func_Include);


static refalrts::FnResult func_Function(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: t.$ s.$ ( e.$ ) e.$
  //GLOBAL GEN: t.$ s.$ ( s.$ t.$ e.$ ) e.$
  // </0 & Function/4 t.idx#0/5 s.idxV#0/7 (/10 s.idxVVB#0/12 t.idxVVBV#0/13 e.idxVVBVV#0/8 )/11 e.idxVVT#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[8] = 0;
  context[9] = 0;
  context[10] = refalrts::brackets_left( context[8], context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[10], context[11]);
  // closed e.idxVVT#0 as range 2
  if( ! refalrts::svar_left( context[12], context[8], context[9] ) )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[8], context[9] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVBVV#0 as range 8
  do {
    // t.idx s.idx ( # TkEntry t.idx ) ( # TkName t.idx e.idx ) e.idx
    // </0 & Function/4 t.ErrorList#1/5 s.Mode#1/7 (/10 # TkEntry/12 t.EntryPos#1/13 )/11 (/21 # TkName/23 t.NamePos#1/24 e.Name#1/19 )/22 e.Tokens#1/17 >/1
    context[15] = context[8];
    context[16] = context[9];
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::ident_term(  ident_TkEntry, context[12] ) )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  ident_TkName, context[19], context[20] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Tokens#1 as range 17
    context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
    if( ! context[25] )
      continue;
    // closed e.Name#1 as range 19
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.EntryPos#1: 13
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 17
    //DEBUG: t.NamePos#1: 24
    //DEBUG: e.Name#1: 19

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NamePos#1/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Function-AfterBlock/12 AsIs: t.EntryPos#1/13 HalfReuse: (/11 } Tile{ AsIs: e.Name#1/19 } Tile{ HalfReuse: )/21 Reuse: # GN-Entry/23 } Tile{ AsIs: </0 Reuse: & Block/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: e.Tokens#1/17 } Tile{ HalfReuse: >/22 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[12], ref_Functionm_AfterBlock.ref.function );
    refalrts::reinit_open_bracket( context[11] );
    refalrts::reinit_close_bracket( context[21] );
    refalrts::update_ident( context[23], ident_GNm_Entry );
    refalrts::update_name( context[4], ref_Block.ref.function );
    refalrts::reinit_close_call( context[22] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( # TkName t.idx e.idx ) e.idx
    // </0 & Function/4 t.ErrorList#1/5 s.Mode#1/7 (/10 # TkName/12 t.Pos#1/13 e.Name#1/15 )/11 e.Tokens#1/17 >/1
    context[15] = context[8];
    context[16] = context[9];
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::ident_term(  ident_TkName, context[12] ) )
      continue;
    // closed e.Name#1 as range 15
    // closed e.Tokens#1 as range 17
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 13
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Name#1: 15
    //DEBUG: e.Tokens#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Function-AfterBlock/12 AsIs: t.Pos#1/13 } (/19 Tile{ AsIs: e.Name#1/15 } Tile{ AsIs: )/11 } # GN-Local/20 Tile{ AsIs: </0 Reuse: & Block/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: e.Tokens#1/17 } >/21 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[20], ident_GNm_Local ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[12], ref_Functionm_AfterBlock.ref.function );
    refalrts::update_name( context[4], ref_Block.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[11] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[10], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( # TkEntry t.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & Function/4 t.ErrorList#1/5 s.Mode#1/7 (/10 # TkEntry/12 t.EntryPos#1/13 )/11 (/21 # TkRefal5Mode/23 t.ModePos#1/24 s.NewMode#1/26 )/22 e.Tokens#1/17 >/1
    context[15] = context[8];
    context[16] = context[9];
    context[17] = context[2];
    context[18] = context[3];
    if( ! refalrts::ident_term(  ident_TkEntry, context[12] ) )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left(  ident_TkRefal5Mode, context[19], context[20] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    // closed e.Tokens#1 as range 17
    context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
    if( ! context[25] )
      continue;
    if( ! refalrts::svar_left( context[26], context[19], context[20] ) )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.EntryPos#1: 13
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 17
    //DEBUG: t.ModePos#1: 24
    //DEBUG: s.NewMode#1: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} )/11 (/21 # TkRefal5Mode/23 t.ModePos#1/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Function/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: s.NewMode#1/26 } Tile{ AsIs: (/10 AsIs: # TkEntry/12 AsIs: t.EntryPos#1/13 } Tile{ AsIs: )/22 AsIs: e.Tokens#1/17 AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[10], context[14] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx s.idx ( # TkEntry t.idx ) e.idx
  // </0 & Function/4 t.ErrorList#1/5 s.Mode#1/7 (/10 # TkEntry/12 t.Pos#1/13 )/11 e.Tokens#1/17 >/1
  context[15] = context[8];
  context[16] = context[9];
  context[17] = context[2];
  context[18] = context[3];
  if( ! refalrts::ident_term(  ident_TkEntry, context[12] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[15], context[16] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 17
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 13
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/13 HalfReuse: '$'/11 }"ENTRY without function name, skipped"/19 Tile{ AsIs: >/1 } Tile{ AsIs: (/10 HalfReuse: )/12 } Tile{ AsIs: e.Tokens#1/17 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[19], context[20], "ENTRY without function name, skipped", 36 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
  refalrts::reinit_char( context[11], '$' );
  refalrts::reinit_close_bracket( context[12] );
  refalrts::link_brackets( context[10], context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[13], context[11] );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Function("Function", 708904305U, 1045449332U, func_Function);


static refalrts::FnResult func_Functionm_AfterBlock(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & Function-AfterBlock/4 t.Pos#1/5 (/9 e.Name#1/7 )/10 s.Scope#1/11 t.ErrorList#1/12 (/16 e.Body#1/14 )/17 e.Tokens#1/2 >/1
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
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  // closed e.Body#1 as range 14
  // closed e.Tokens#1 as range 2
  //DEBUG: t.Pos#1: 5
  //DEBUG: e.Name#1: 7
  //DEBUG: s.Scope#1: 11
  //DEBUG: t.ErrorList#1: 12
  //DEBUG: e.Body#1: 14
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/12 AsIs: (/16 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: t.Pos#1/5 } Tile{ AsIs: s.Scope#1/11 } Tile{ AsIs: (/9 AsIs: e.Name#1/7 AsIs: )/10 } Tile{ AsIs: e.Body#1/14 } Tile{ HalfReuse: )/1 } Tile{ AsIs: )/17 } Tile{ AsIs: e.Tokens#1/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Function );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[6] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Functionm_AfterBlock("Function-AfterBlock", 708904305U, 1045449332U, func_Functionm_AfterBlock);


static refalrts::FnResult func_gen_Block_S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  // </0 & Block$2=1/4 s.Mode#1/5 t.NativePos#1/6 (/10 e.Code#1/8 )/11 (/14 e.Tokens#1/12 )/15 t.ErrorList#2/16 e.NextToken#2/2 >/1
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
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Code#1 as range 8
  // closed e.Tokens#1 as range 12
  context[17] = refalrts::tvar_left( context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  // closed e.NextToken#2 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: t.NativePos#1: 6
  //DEBUG: e.Code#1: 8
  //DEBUG: e.Tokens#1: 12
  //DEBUG: t.ErrorList#2: 16
  //DEBUG: e.NextToken#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 } Tile{ AsIs: t.ErrorList#2/16 } Tile{ AsIs: s.Mode#1/5 AsIs: t.NativePos#1/6 HalfReuse: 'N'/10 } Tile{ HalfReuse: 'a'/1 }"tive code insertion is an extension"/18 Tile{ HalfReuse: >/11 AsIs: (/14 } # NativeBody/20 t.NativePos#1/6/21 Tile{ AsIs: e.Code#1/8 } Tile{ AsIs: )/15 } Tile{ AsIs: e.NextToken#2/2 } Tile{ AsIs: e.Tokens#1/12 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[18], context[19], "tive code insertion is an extension", 35 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[20], ident_NativeBody ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[6], context[7]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ClassicError.ref.function );
  refalrts::reinit_char( context[10], 'N' );
  refalrts::reinit_char( context[1], 'a' );
  refalrts::reinit_close_call( context[11] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[11], context[14] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Block_S2A1("Block$2=1", 708904305U, 1045449332U, func_gen_Block_S2A1);


static refalrts::FnResult func_gen_Block_S2A1B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: t.$ t.$
  //GLOBAL GEN: t.$ t.$
  // </0 & Block$2=1:1/4 t.idx#0/5 t.idxV#0/7 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // t.idx ( # TkCloseBlock t.idx )
    // </0 & Block$2=1:1/4 t.ErrorList#1/5 (/7 # TkCloseBlock/11 t.Pos#2/12 )/8 >/1
    context[9] = 0;
    context[10] = 0;
    if( ! refalrts::brackets_term( context[9], context[10], context[7] ) )
      continue;
    context[11] = refalrts::ident_left(  ident_TkCloseBlock, context[9], context[10] );
    if( ! context[11] )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[9], context[10] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Block$2=1:1/4 {REMOVED TILE} (/7 # TkCloseBlock/11 t.Pos#2/12 )/8 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx
  // </0 & Block$2=1:1/4 t.ErrorList#1/5 t.Unexpected#2/7 >/1
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Unexpected#2: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#1/5 AsIs: t.Unexpected#2/7 HalfReuse: '\''/1 }"}\'"/9 >/11 t.Unexpected#2/7/12 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[9], context[10], "}\'", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[11] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[7], context[8]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[1], '\'' );
  refalrts::push_stack( context[11] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Block_S2A1B1("Block$2=1:1", 708904305U, 1045449332U, func_gen_Block_S2A1B1);


static refalrts::FnResult func_Block(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  //FAST GEN: t.$ s.$ t.$ e.$
  //GLOBAL GEN: t.$ s.$ t.$ e.$
  // </0 & Block/4 t.idx#0/5 s.idxV#0/7 t.idxVV#0/8 e.idxVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVV#0 as range 2
  do {
    // t.idx s.idx ( # TkOpenBlock t.idx ) ( # TkCloseBlock t.idx ) e.idx
    // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkOpenBlock/14 t.OpenPos#1/20 )/9 (/17 # TkCloseBlock/19 t.ClosePos#1/22 )/18 e.Tokens#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
      continue;
    context[14] = refalrts::ident_left(  ident_TkOpenBlock, context[12], context[13] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[10], context[11] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left(  ident_TkCloseBlock, context[15], context[16] );
    if( ! context[19] )
      continue;
    // closed e.Tokens#1 as range 10
    context[21] = refalrts::tvar_left( context[20], context[12], context[13] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[15], context[16] );
    if( ! context[23] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 10
    //DEBUG: t.OpenPos#1: 20
    //DEBUG: t.ClosePos#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.ClosePos#1/22 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: t.OpenPos#1/20 HalfReuse: 'E'/9 HalfReuse: 'm'/17 HalfReuse: 'p'/19 }"ty function block"/24 Tile{ AsIs: >/1 } Tile{ AsIs: (/8 Reuse: # Sentences/14 } Tile{ AsIs: )/18 } Tile{ AsIs: e.Tokens#1/10 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[24], context[25], "ty function block", 17 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ClassicError.ref.function );
    refalrts::reinit_char( context[9], 'E' );
    refalrts::reinit_char( context[17], 'm' );
    refalrts::reinit_char( context[19], 'p' );
    refalrts::update_ident( context[14], ident_Sentences );
    refalrts::link_brackets( context[8], context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[8], context[14] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[20], context[19] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( # TkOpenBlock t.idx ) ( # TkNativeCode t.idx e.idx ) t.idx e.idx
    // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkOpenBlock/14 t.OpenPos#1/20 )/9 (/17 # TkNativeCode/19 t.NativePos#1/22 e.Code#1/15 )/18 t.CloseBlock#1/24 e.Tokens#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
      continue;
    context[14] = refalrts::ident_left(  ident_TkOpenBlock, context[12], context[13] );
    if( ! context[14] )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[10], context[11] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    context[19] = refalrts::ident_left(  ident_TkNativeCode, context[15], context[16] );
    if( ! context[19] )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[12], context[13] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    context[23] = refalrts::tvar_left( context[22], context[15], context[16] );
    if( ! context[23] )
      continue;
    // closed e.Code#1 as range 15
    context[25] = refalrts::tvar_left( context[24], context[10], context[11] );
    if( ! context[25] )
      continue;
    // closed e.Tokens#1 as range 10
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: t.OpenPos#1: 20
    //DEBUG: t.NativePos#1: 22
    //DEBUG: e.Code#1: 15
    //DEBUG: t.CloseBlock#1: 24
    //DEBUG: e.Tokens#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} {REMOVED TILE} t.OpenPos#1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Block$2=1/26 Tile{ HalfReuse: s.Mode1 #7/19 AsIs: t.NativePos#1/22 } Tile{ AsIs: (/8 } Tile{ AsIs: e.Code#1/15 } Tile{ AsIs: )/9 AsIs: (/17 } Tile{ AsIs: e.Tokens#1/10 } Tile{ HalfReuse: )/14 } {*}/27 </28 [*]/29 & Block$2=1:1/30 Tile{ AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: {*}/18 AsIs: t.CloseBlock#1/24 } >/31 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[26], ref_gen_Block_S2A1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[27], context[4] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_closure_head( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], ref_gen_Block_S2A1B1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[4] );
    refalrts::reinit_svar( context[19], context[7] );
    refalrts::reinit_close_bracket( context[14] );
    refalrts::reinit_unwrapped_closure( context[18], context[29] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[28] );
    refalrts::link_brackets( context[17], context[14] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[18], context[25] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[27], context[30] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[9], context[17] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    refalrts::splice_to_freelist_open( context[4], res );
    refalrts::wrap_closure( context[27] );
    refalrts::wrap_closure( context[18] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( # TkOpenBlock t.idx ) e.idx
    // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkOpenBlock/14 t.Pos#1/15 )/9 e.Tokens#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
      continue;
    context[14] = refalrts::ident_left(  ident_TkOpenBlock, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.Tokens#1 as range 10
    context[16] = refalrts::tvar_left( context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 10
    //DEBUG: t.Pos#1: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#1/15 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </9 } & Block-AfterSentence/17 s.Mode#1/7/18 Tile{ AsIs: (/8 HalfReuse: )/14 } Tile{ AsIs: </0 Reuse: & Sentence/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: e.Tokens#1/10 } >/19 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[17], ref_Blockm_AfterSentence.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[18], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_close_bracket( context[14] );
    refalrts::update_name( context[4], ref_Sentence.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[0], context[7] );
    res = refalrts::splice_evar( res, context[8], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[9], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 (/8 # TkRefal5Mode/14 t.Pos#1/15 s.NewMode#1/17 )/9 e.Tokens#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    context[12] = 0;
    context[13] = 0;
    if( ! refalrts::brackets_term( context[12], context[13], context[8] ) )
      continue;
    context[14] = refalrts::ident_left(  ident_TkRefal5Mode, context[12], context[13] );
    if( ! context[14] )
      continue;
    // closed e.Tokens#1 as range 10
    context[16] = refalrts::tvar_left( context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    if( ! refalrts::svar_left( context[17], context[12], context[13] ) )
      continue;
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 10
    //DEBUG: t.Pos#1: 15
    //DEBUG: s.NewMode#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/7 (/8 # TkRefal5Mode/14 t.Pos#1/15 s.NewMode#1/17 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Block/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.NewMode1 #17/9 AsIs: e.Tokens#1/10 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[9], context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx s.idx t.idx e.idx
  // </0 & Block/4 t.ErrorList#1/5 s.Mode#1/7 t.Unexpected#1/8 e.Tokens#1/10 >/1
  context[10] = context[2];
  context[11] = context[3];
  // closed e.Tokens#1 as range 10
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Unexpected#1: 8
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Unexpected#1/8 }"\'{\'"/12 Tile{ AsIs: >/1 } (/14 # Sentences/15 )/16 t.Unexpected#1/8/17 Tile{ AsIs: e.Tokens#1/10 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[12], context[13], "\'{\'", 3 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[15], ident_Sentences ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[17], context[18], context[8], context[9]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::link_brackets( context[14], context[16] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Block("Block", 708904305U, 1045449332U, func_Block);


static refalrts::FnResult func_gen_Blockm_AfterSentence_S1B1S6A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Block-AfterSentence$1:1$6=1/4 s.Mode#1/5 (/8 e.Sentences#1/6 )/9 t.NextSentence#1/10 t.Token2#1/12 (/16 e.Tokens#1/14 )/17 t.ErrorList#3/18 >/1
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
  // closed e.Sentences#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
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
  // closed e.Tokens#1 as range 14
  context[19] = refalrts::tvar_left( context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Sentences#1: 6
  //DEBUG: t.NextSentence#1: 10
  //DEBUG: t.Token2#1: 12
  //DEBUG: e.Tokens#1: 14
  //DEBUG: t.ErrorList#3: 18

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence/4 AsIs: s.Mode#1/5 AsIs: (/8 } Tile{ AsIs: e.Sentences#1/6 } Tile{ AsIs: t.NextSentence#1/10 } Tile{ AsIs: )/9 } </20 Tile{ HalfReuse: & Sentence/17 AsIs: t.ErrorList#3/18 } Tile{ HalfReuse: s.Mode1 #5/16 } Tile{ AsIs: t.Token2#1/12 } Tile{ AsIs: e.Tokens#1/14 } >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Blockm_AfterSentence.ref.function );
  refalrts::reinit_name( context[17], ref_Sentence.ref.function );
  refalrts::reinit_svar( context[16], context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Blockm_AfterSentence_S1B1S6A1("Block-AfterSentence$1:1$6=1", 708904305U, 1045449332U, func_gen_Blockm_AfterSentence_S1B1S6A1);


static refalrts::FnResult func_gen_Blockm_AfterSentence_S1B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  //FAST GEN: ( e.$ ) t.$ t.$ ( e.$ ) t.$ s.$ t.$ t.$ t.$
  //GLOBAL GEN: ( e.$ ) t.$ t.$ ( e.$ ) t.$ s.$ t.$ t.$ t.$
  // </0 & Block-AfterSentence$1:1/4 (/7 e.idxB#0/5 )/8 t.idxT#0/9 t.idxTV#0/11 (/15 e.idxTVVB#0/13 )/16 t.idxTVVT#0/17 s.idxTVVTV#0/19 t.idxTVVTVV#0/20 t.idxTVVTVVV#0/22 t.idxTVVTVVVV#0/24 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.idxTVVB#0 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[19], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[21] = refalrts::tvar_left( context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::tvar_left( context[22], context[2], context[3] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[25] = refalrts::tvar_left( context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) t.idx t.idx ( e.idx ) t.idx s.idx t.idx ( # TkSemicolon t.idx ) ( # TkRefal5Mode t.idx s.idx )
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/26 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/28 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/34 t.SemicolonPos#2/36 )/23 (/24 # TkRefal5Mode/35 t.ModePos#2/38 s.NewMode#2/40 )/25 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[13];
    context[29] = context[14];
    context[30] = 0;
    context[31] = 0;
    if( ! refalrts::brackets_term( context[30], context[31], context[22] ) )
      continue;
    context[32] = 0;
    context[33] = 0;
    if( ! refalrts::brackets_term( context[32], context[33], context[24] ) )
      continue;
    context[34] = refalrts::ident_left(  ident_TkSemicolon, context[30], context[31] );
    if( ! context[34] )
      continue;
    context[35] = refalrts::ident_left(  ident_TkRefal5Mode, context[32], context[33] );
    if( ! context[35] )
      continue;
    // closed e.Sentences#1 as range 26
    // closed e.Tokens#1 as range 28
    context[37] = refalrts::tvar_left( context[36], context[30], context[31] );
    if( ! context[37] )
      continue;
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    context[39] = refalrts::tvar_left( context[38], context[32], context[33] );
    if( ! context[39] )
      continue;
    if( ! refalrts::svar_left( context[40], context[32], context[33] ) )
      continue;
    if( ! refalrts::empty_seq( context[32], context[33] ) )
      continue;
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: t.NextSentence#1: 11
    //DEBUG: t.Token2#1: 17
    //DEBUG: t.Token1#1: 20
    //DEBUG: s.Mode#1: 19
    //DEBUG: e.Sentences#1: 26
    //DEBUG: e.Tokens#1: 28
    //DEBUG: t.SemicolonPos#2: 36
    //DEBUG: t.ModePos#2: 38
    //DEBUG: s.NewMode#2: 40

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 {REMOVED TILE} {REMOVED TILE} (/24 # TkRefal5Mode/35 t.ModePos#2/38 s.NewMode#2/40 )/25 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </22 } Tile{ HalfReuse: & Block-AfterSentence/0 HalfReuse: s.NewMode2 #40/4 AsIs: (/7 AsIs: e.Sentences#1/26 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.NextSentence#1/11 AsIs: (/15 } Tile{ AsIs: # TkSemicolon/34 AsIs: t.SemicolonPos#2/36 AsIs: )/23 } Tile{ AsIs: e.Tokens#1/28 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[22] );
    refalrts::reinit_name( context[0], ref_Blockm_AfterSentence.ref.function );
    refalrts::reinit_svar( context[4], context[40] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[22] );
    refalrts::link_brackets( context[15], context[23] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[34], context[23] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx t.idx ( e.idx ) t.idx s.idx t.idx ( # TkRefal5Mode t.idx s.idx ) t.idx
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/26 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/28 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkRefal5Mode/32 t.Pos#2/33 s.NewMode#2/35 )/23 t.Token2#2/24 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[13];
    context[29] = context[14];
    context[30] = 0;
    context[31] = 0;
    if( ! refalrts::brackets_term( context[30], context[31], context[22] ) )
      continue;
    context[32] = refalrts::ident_left(  ident_TkRefal5Mode, context[30], context[31] );
    if( ! context[32] )
      continue;
    // closed e.Sentences#1 as range 26
    // closed e.Tokens#1 as range 28
    context[34] = refalrts::tvar_left( context[33], context[30], context[31] );
    if( ! context[34] )
      continue;
    if( ! refalrts::svar_left( context[35], context[30], context[31] ) )
      continue;
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: t.NextSentence#1: 11
    //DEBUG: t.Token2#1: 17
    //DEBUG: t.Token1#1: 20
    //DEBUG: t.Token2#2: 24
    //DEBUG: s.Mode#1: 19
    //DEBUG: e.Sentences#1: 26
    //DEBUG: e.Tokens#1: 28
    //DEBUG: t.Pos#2: 33
    //DEBUG: s.NewMode#2: 35

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} {REMOVED TILE} t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkRefal5Mode/32 t.Pos#2/33 s.NewMode#2/35 )/23 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & Block-AfterSentence/0 HalfReuse: s.NewMode2 #35/4 AsIs: (/7 AsIs: e.Sentences#1/26 AsIs: )/8 AsIs: t.ErrorList#1/9 AsIs: t.NextSentence#1/11 } Tile{ AsIs: t.Token2#2/24 } Tile{ AsIs: e.Tokens#1/28 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[16] );
    refalrts::reinit_name( context[0], ref_Blockm_AfterSentence.ref.function );
    refalrts::reinit_svar( context[4], context[35] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx t.idx ( e.idx ) t.idx s.idx t.idx ( # TkSemicolon t.idx ) ( # TkCloseBlock t.idx )
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/26 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/28 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/34 t.Pos1#2/36 )/23 (/24 # TkCloseBlock/35 t.Pos2#2/38 )/25 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[13];
    context[29] = context[14];
    context[30] = 0;
    context[31] = 0;
    if( ! refalrts::brackets_term( context[30], context[31], context[22] ) )
      continue;
    context[32] = 0;
    context[33] = 0;
    if( ! refalrts::brackets_term( context[32], context[33], context[24] ) )
      continue;
    context[34] = refalrts::ident_left(  ident_TkSemicolon, context[30], context[31] );
    if( ! context[34] )
      continue;
    context[35] = refalrts::ident_left(  ident_TkCloseBlock, context[32], context[33] );
    if( ! context[35] )
      continue;
    // closed e.Sentences#1 as range 26
    // closed e.Tokens#1 as range 28
    context[37] = refalrts::tvar_left( context[36], context[30], context[31] );
    if( ! context[37] )
      continue;
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    context[39] = refalrts::tvar_left( context[38], context[32], context[33] );
    if( ! context[39] )
      continue;
    if( ! refalrts::empty_seq( context[32], context[33] ) )
      continue;
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: t.NextSentence#1: 11
    //DEBUG: t.Token2#1: 17
    //DEBUG: t.Token1#1: 20
    //DEBUG: s.Mode#1: 19
    //DEBUG: e.Sentences#1: 26
    //DEBUG: e.Tokens#1: 28
    //DEBUG: t.Pos1#2: 36
    //DEBUG: t.Pos2#2: 38

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Block-AfterSentence$1:1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/34 t.Pos1#2/36 )/23 {REMOVED TILE} t.Pos2#2/38 )/25 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: (/24 Reuse: # Sentences/35 } Tile{ AsIs: e.Sentences#1/26 } Tile{ AsIs: t.NextSentence#1/11 HalfReuse: )/15 } Tile{ AsIs: e.Tokens#1/28 } Tile{ ]] }
    refalrts::update_ident( context[35], ident_Sentences );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::link_brackets( context[24], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[24], context[35] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx t.idx ( e.idx ) t.idx s.idx t.idx ( # TkCloseBlock t.idx ) t.idx
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/26 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/28 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkCloseBlock/32 t.Pos#2/33 )/23 t.Token2#1/24 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[13];
    context[29] = context[14];
    context[30] = 0;
    context[31] = 0;
    if( ! refalrts::brackets_term( context[30], context[31], context[22] ) )
      continue;
    if( ! refalrts::repeated_stvar_term( context[24], context[17] ) )
      continue;
    context[32] = refalrts::ident_left(  ident_TkCloseBlock, context[30], context[31] );
    if( ! context[32] )
      continue;
    // closed e.Sentences#1 as range 26
    // closed e.Tokens#1 as range 28
    context[34] = refalrts::tvar_left( context[33], context[30], context[31] );
    if( ! context[34] )
      continue;
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: t.NextSentence#1: 11
    //DEBUG: t.Token2#1: 17
    //DEBUG: t.Token1#1: 20
    //DEBUG: s.Mode#1: 19
    //DEBUG: e.Sentences#1: 26
    //DEBUG: e.Tokens#1: 28
    //DEBUG: t.Pos#2: 33

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Block-AfterSentence$1:1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} (/15 {REMOVED TILE} )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 {REMOVED TILE} t.Pos#2/33 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: (/22 Reuse: # Sentences/32 } Tile{ AsIs: e.Sentences#1/26 } Tile{ AsIs: t.NextSentence#1/11 } Tile{ AsIs: )/23 AsIs: t.Token2#1/24 } Tile{ AsIs: e.Tokens#1/28 } Tile{ ]] }
    refalrts::update_ident( context[32], ident_Sentences );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[22], context[32] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) t.idx t.idx ( e.idx ) t.idx s.idx t.idx ( # TkSemicolon t.idx ) t.idx
    // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/26 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/28 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 (/22 # TkSemicolon/32 t.Pos#2/33 )/23 t.Token2#1/24 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[13];
    context[29] = context[14];
    context[30] = 0;
    context[31] = 0;
    if( ! refalrts::brackets_term( context[30], context[31], context[22] ) )
      continue;
    if( ! refalrts::repeated_stvar_term( context[24], context[17] ) )
      continue;
    context[32] = refalrts::ident_left(  ident_TkSemicolon, context[30], context[31] );
    if( ! context[32] )
      continue;
    // closed e.Sentences#1 as range 26
    // closed e.Tokens#1 as range 28
    context[34] = refalrts::tvar_left( context[33], context[30], context[31] );
    if( ! context[34] )
      continue;
    if( ! refalrts::empty_seq( context[30], context[31] ) )
      continue;
    //DEBUG: t.ErrorList#1: 9
    //DEBUG: t.NextSentence#1: 11
    //DEBUG: t.Token2#1: 17
    //DEBUG: t.Token1#1: 20
    //DEBUG: s.Mode#1: 19
    //DEBUG: e.Sentences#1: 26
    //DEBUG: e.Tokens#1: 28
    //DEBUG: t.Pos#2: 33

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 {REMOVED TILE} {REMOVED TILE} t.Pos#2/33 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Block-AfterSentence/4 HalfReuse: s.Mode1 #19/7 } Tile{ AsIs: (/22 } Tile{ AsIs: e.Sentences#1/26 } Tile{ AsIs: t.NextSentence#1/11 HalfReuse: )/15 } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & Sentence/8 AsIs: t.ErrorList#1/9 } Tile{ HalfReuse: s.Mode1 #19/23 AsIs: t.Token2#1/24 } Tile{ AsIs: e.Tokens#1/28 } Tile{ HalfReuse: >/32 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Blockm_AfterSentence.ref.function );
    refalrts::reinit_svar( context[7], context[19] );
    refalrts::reinit_close_bracket( context[15] );
    refalrts::reinit_open_call( context[16] );
    refalrts::reinit_name( context[8], ref_Sentence.ref.function );
    refalrts::reinit_svar( context[23], context[19] );
    refalrts::reinit_close_call( context[32] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[22], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[23], context[25] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) t.idx t.idx ( e.idx ) t.idx s.idx t.idx t.idx t.idx
  // </0 & Block-AfterSentence$1:1/4 (/7 e.Sentences#1/26 )/8 t.ErrorList#1/9 t.NextSentence#1/11 (/15 e.Tokens#1/28 )/16 t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 t.Token1#1/22 t.Token2#1/24 >/1
  context[26] = context[5];
  context[27] = context[6];
  context[28] = context[13];
  context[29] = context[14];
  if( ! refalrts::repeated_stvar_term( context[24], context[17] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::repeated_stvar_term( context[22], context[20] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#1 as range 26
  // closed e.Tokens#1 as range 28
  //DEBUG: t.ErrorList#1: 9
  //DEBUG: t.NextSentence#1: 11
  //DEBUG: t.Token2#1: 17
  //DEBUG: t.Token1#1: 20
  //DEBUG: s.Mode#1: 19
  //DEBUG: e.Sentences#1: 26
  //DEBUG: e.Tokens#1: 28

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Token2#1/17 s.Mode#1/19 t.Token1#1/20 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </30 [*]/31 Tile{ HalfReuse: & Block-AfterSentence$1:1$6=1/0 HalfReuse: s.Mode1 #19/4 AsIs: (/7 AsIs: e.Sentences#1/26 AsIs: )/8 } Tile{ AsIs: t.NextSentence#1/11 } Tile{ AsIs: t.Token2#1/24 } Tile{ AsIs: (/15 AsIs: e.Tokens#1/28 AsIs: )/16 } {*}/32 </33 & UnexpectedToken/34 Tile{ AsIs: t.ErrorList#1/9 } Tile{ AsIs: t.Token1#1/22 }"\';\' or \'}\', skipped"/35 >/37 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[32], context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], ref_UnexpectedToken.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[35], context[36], "\';\' or \'}\', skipped", 19 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[37] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_gen_Blockm_AfterSentence_S1B1S6A1.ref.function );
  refalrts::reinit_svar( context[4], context[19] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[37] );
  refalrts::push_stack( context[33] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[24], context[25] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  refalrts::wrap_closure( context[32] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Blockm_AfterSentence_S1B1("Block-AfterSentence$1:1", 708904305U, 1045449332U, func_gen_Blockm_AfterSentence_S1B1);


static refalrts::FnResult func_Blockm_AfterSentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ ( e.$ ) t.$ t.$ t.$ e.$
  // </0 & Block-AfterSentence/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 t.idxVTV#0/12 t.idxVTVV#0/14 e.idxVTVVV#0/2 >/1
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
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTVVV#0 as range 2
  do {
    // s.idx ( e.idx ) t.idx t.idx t.idx t.idx e.idx
    // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Sentences#1/16 )/9 t.ErrorList#1/10 t.NextSentence#1/12 t.Token1#1/14 t.Token2#1/20 e.Tokens#1/18 >/1
    context[16] = context[6];
    context[17] = context[7];
    context[18] = context[2];
    context[19] = context[3];
    // closed e.Sentences#1 as range 16
    context[21] = refalrts::tvar_left( context[20], context[18], context[19] );
    if( ! context[21] )
      continue;
    // closed e.Tokens#1 as range 18
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.NextSentence#1: 12
    //DEBUG: t.Token1#1: 14
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Sentences#1: 16
    //DEBUG: t.Token2#1: 20
    //DEBUG: e.Tokens#1: 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & Block-AfterSentence$1:1/22 Tile{ AsIs: (/8 AsIs: e.Sentences#1/16 AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.NextSentence#1/12 } (/23 Tile{ AsIs: e.Tokens#1/18 } )/24 t.Token2#1/20/25 Tile{ AsIs: s.Mode#1/5 } t.Token1#1/14/27 {*}/29 Tile{ AsIs: t.Token1#1/14 AsIs: t.Token2#1/20 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[22], ref_gen_Blockm_AfterSentence_S1B1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[20], context[21]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[27], context[28], context[14], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[29], context[4] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[4] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[21] );
    res = refalrts::splice_evar( res, context[27], context[29] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[22], context[22] );
    refalrts::use( res );
    refalrts::wrap_closure( context[29] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) t.idx t.idx ( # TkEOF t.idx )
  // </0 & Block-AfterSentence/4 s.Mode#1/5 (/8 e.Sentences#1/16 )/9 t.ErrorList#1/10 t.NextSentence#1/12 (/14 # TkEOF/22 t.Pos#1/23 )/15 >/1
  context[16] = context[6];
  context[17] = context[7];
  context[18] = context[2];
  context[19] = context[3];
  context[20] = 0;
  context[21] = 0;
  if( ! refalrts::brackets_term( context[20], context[21], context[14] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = refalrts::ident_left(  ident_TkEOF, context[20], context[21] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[18], context[19] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#1 as range 16
  context[24] = refalrts::tvar_left( context[23], context[20], context[21] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[20], context[21] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.ErrorList#1: 10
  //DEBUG: t.NextSentence#1: 12
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Sentences#1: 16
  //DEBUG: t.Pos#1: 23

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.ErrorList#1/10 } Tile{ AsIs: (/14 AsIs: # TkEOF/22 AsIs: t.Pos#1/23 AsIs: )/15 HalfReuse: '\''/1 }";\' or \'}\'"/25 >/27 Tile{ AsIs: (/8 } # Sentences/28 Tile{ AsIs: e.Sentences#1/16 } Tile{ AsIs: t.NextSentence#1/12 } Tile{ AsIs: )/9 } (/29 # TkEOF/30 t.Pos#1/23/31 )/33 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[25], context[26], ";\' or \'}\'", 9 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[28], ident_Sentences ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[30], ident_TkEOF ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[31], context[32], context[23], context[24]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[1], '\'' );
  refalrts::link_brackets( context[29], context[33] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[29], context[33] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[25], context[27] );
  res = refalrts::splice_evar( res, context[14], context[1] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Blockm_AfterSentence("Block-AfterSentence", 708904305U, 1045449332U, func_Blockm_AfterSentence);


static refalrts::FnResult func_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: t.$ s.$ e.$
  //GLOBAL GEN: t.$ s.$ e.$
  // </0 & Sentence/4 t.idx#0/5 s.idxV#0/7 e.idxVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVV#0 as range 2
  do {
    // t.idx s.idx ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & Sentence/4 t.ErrorList#1/5 s.Mode#1/7 (/12 # TkRefal5Mode/14 t.Pos#1/15 s.NewMode#1/17 )/13 e.Tokens#1/8 >/1
    context[8] = context[2];
    context[9] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[8], context[9] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  ident_TkRefal5Mode, context[10], context[11] );
    if( ! context[14] )
      continue;
    // closed e.Tokens#1 as range 8
    context[16] = refalrts::tvar_left( context[15], context[10], context[11] );
    if( ! context[16] )
      continue;
    if( ! refalrts::svar_left( context[17], context[10], context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: s.Mode#1: 7
    //DEBUG: e.Tokens#1: 8
    //DEBUG: t.Pos#1: 15
    //DEBUG: s.NewMode#1: 17

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/7 (/12 # TkRefal5Mode/14 t.Pos#1/15 s.NewMode#1/17 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Sentence/4 AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: s.NewMode1 #17/13 AsIs: e.Tokens#1/8 AsIs: >/1 ]] }
    refalrts::reinit_svar( context[13], context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx s.idx e.idx
  // </0 & Sentence/4 t.ErrorList#1/5 s.Mode#1/7 e.Tokens#1/8 >/1
  context[8] = context[2];
  context[9] = context[3];
  // closed e.Tokens#1 as range 8
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 8

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & SentenceTail/11 s.Mode#1/7/12 Tile{ AsIs: </0 Reuse: & SentencePart/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: e.Tokens#1/8 AsIs: >/1 } >/13 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_SentenceTail.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[12], context[7]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_SentencePart.ref.function );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Sentence("Sentence", 708904305U, 1045449332U, func_Sentence);


static refalrts::FnResult func_gen_SentenceTail_S1A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & SentenceTail$1=3/4 t.FirstPattern#1/5 s.PartType#1/7 t.FirstResult#1/8 (/12 e.FirstBlocks#3/10 )/13 t.NextPattern#2/14 (/18 e.ConditionsAndAssignments#2/16 )/19 t.LastResult#2/20 (/24 e.LastBlocks#2/22 )/25 (/28 e.Tokens#2/26 )/29 t.ErrorList#4/30 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
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
  // closed e.FirstBlocks#3 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.ConditionsAndAssignments#2 as range 16
  context[21] = refalrts::tvar_left( context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.LastBlocks#2 as range 22
  // closed e.Tokens#2 as range 26
  context[31] = refalrts::tvar_left( context[30], context[2], context[3] );
  if( ! context[31] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.FirstPattern#1: 5
  //DEBUG: s.PartType#1: 7
  //DEBUG: t.FirstResult#1: 8
  //DEBUG: e.FirstBlocks#3: 10
  //DEBUG: t.NextPattern#2: 14
  //DEBUG: e.ConditionsAndAssignments#2: 16
  //DEBUG: t.LastResult#2: 20
  //DEBUG: e.LastBlocks#2: 22
  //DEBUG: e.Tokens#2: 26
  //DEBUG: t.ErrorList#4: 30

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SentenceTail$1=3/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/29 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#4/30 HalfReuse: (/1 } Tile{ AsIs: t.FirstPattern#1/5 } Tile{ HalfReuse: (/19 } Tile{ AsIs: s.PartType#1/7 AsIs: t.FirstResult#1/8 AsIs: (/12 AsIs: e.FirstBlocks#3/10 AsIs: )/13 AsIs: t.NextPattern#2/14 HalfReuse: )/18 } Tile{ AsIs: e.ConditionsAndAssignments#2/16 } Tile{ AsIs: t.LastResult#2/20 AsIs: (/24 AsIs: e.LastBlocks#2/22 AsIs: )/25 HalfReuse: )/28 } Tile{ AsIs: e.Tokens#2/26 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[1] );
  refalrts::reinit_open_bracket( context[19] );
  refalrts::reinit_close_bracket( context[18] );
  refalrts::reinit_close_bracket( context[28] );
  refalrts::link_brackets( context[1], context[28] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[19], context[18] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[20], context[28] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[7], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[30], context[1] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A3("SentenceTail$1=3", 708904305U, 1045449332U, func_gen_SentenceTail_S1A3);


static refalrts::FnResult func_gen_SentenceTail_S1A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & SentenceTail$1=2/4 t.FirstPattern#1/5 s.PartType#1/7 t.FirstResult#1/8 t.NextPattern#2/10 (/14 e.ConditionsAndAssignments#2/12 )/15 t.LastResult#2/16 (/20 e.LastBlocks#2/18 )/21 (/24 e.Tokens#2/22 )/25 s.Mode#1/26 t.Pos#1/27 t.ErrorList#3/29 e.FirstBlocks#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
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
  // closed e.ConditionsAndAssignments#2 as range 12
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
  // closed e.LastBlocks#2 as range 18
  // closed e.Tokens#2 as range 22
  if( ! refalrts::svar_left( context[26], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[28] = refalrts::tvar_left( context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  context[30] = refalrts::tvar_left( context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  // closed e.FirstBlocks#3 as range 2
  //DEBUG: t.FirstPattern#1: 5
  //DEBUG: s.PartType#1: 7
  //DEBUG: t.FirstResult#1: 8
  //DEBUG: t.NextPattern#2: 10
  //DEBUG: e.ConditionsAndAssignments#2: 12
  //DEBUG: t.LastResult#2: 16
  //DEBUG: e.LastBlocks#2: 18
  //DEBUG: e.Tokens#2: 22
  //DEBUG: s.Mode#1: 26
  //DEBUG: t.Pos#1: 27
  //DEBUG: t.ErrorList#3: 29
  //DEBUG: e.FirstBlocks#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & SentenceTail$1=3/4 AsIs: t.FirstPattern#1/5 AsIs: s.PartType#1/7 AsIs: t.FirstResult#1/8 } (/32 Tile{ AsIs: e.FirstBlocks#3/2 } )/33 Tile{ AsIs: t.NextPattern#2/10 AsIs: (/14 AsIs: e.ConditionsAndAssignments#2/12 AsIs: )/15 AsIs: t.LastResult#2/16 AsIs: (/20 AsIs: e.LastBlocks#2/18 AsIs: )/21 AsIs: (/24 AsIs: e.Tokens#2/22 AsIs: )/25 } {*}/34 </35 & AssignmentError/36 Tile{ AsIs: t.ErrorList#3/29 } Tile{ AsIs: s.Mode#1/26 } s.PartType#1/7/37 Tile{ AsIs: t.Pos#1/27 } >/38 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[34], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[36], ref_AssignmentError.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[37], context[7]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_SentenceTail_S1A3.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[35] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[34], context[36] );
  res = refalrts::splice_evar( res, context[10], context[25] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  refalrts::wrap_closure( context[34] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A2("SentenceTail$1=2", 708904305U, 1045449332U, func_gen_SentenceTail_S1A2);


static refalrts::FnResult func_gen_SentenceTail_S1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & SentenceTail$1=1/4 t.FirstPattern#1/5 s.PartType#1/7 t.FirstResult#1/8 s.Mode#1/10 t.Pos#1/11 (/15 e.FirstBlocks#1/13 )/16 t.ErrorList#2/17 (/21 t.NextPattern#2/27 e.ConditionsAndAssignments#2/19 t.LastResult#2/29 (/25 e.LastBlocks#2/23 )/26 )/22 e.Tokens#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
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
  // closed e.FirstBlocks#1 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_right( context[23], context[24], context[19], context[20] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.LastBlocks#2 as range 23
  // closed e.Tokens#2 as range 2
  context[28] = refalrts::tvar_left( context[27], context[19], context[20] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  context[30] = refalrts::tvar_right( context[29], context[19], context[20] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  // closed e.ConditionsAndAssignments#2 as range 19
  //DEBUG: t.FirstPattern#1: 5
  //DEBUG: s.PartType#1: 7
  //DEBUG: t.FirstResult#1: 8
  //DEBUG: s.Mode#1: 10
  //DEBUG: t.Pos#1: 11
  //DEBUG: e.FirstBlocks#1: 13
  //DEBUG: t.ErrorList#2: 17
  //DEBUG: e.LastBlocks#2: 23
  //DEBUG: e.Tokens#2: 2
  //DEBUG: t.NextPattern#2: 27
  //DEBUG: t.LastResult#2: 29
  //DEBUG: e.ConditionsAndAssignments#2: 19

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & SentenceTail$1=2/4 AsIs: t.FirstPattern#1/5 AsIs: s.PartType#1/7 AsIs: t.FirstResult#1/8 } Tile{ AsIs: t.NextPattern#2/27 } (/32 Tile{ AsIs: e.ConditionsAndAssignments#2/19 } )/33 Tile{ AsIs: t.LastResult#2/29 AsIs: (/25 AsIs: e.LastBlocks#2/23 AsIs: )/26 HalfReuse: (/22 AsIs: e.Tokens#2/2 HalfReuse: )/1 } Tile{ AsIs: s.Mode#1/10 AsIs: t.Pos#1/11 HalfReuse: {*}/15 } </34 Tile{ HalfReuse: & CheckExceedBlocks/16 AsIs: t.ErrorList#2/17 HalfReuse: s.Mode1 #10/21 } Tile{ AsIs: e.FirstBlocks#1/13 } >/35 >/36 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[36] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_SentenceTail_S1A2.ref.function );
  refalrts::reinit_open_bracket( context[22] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::reinit_unwrapped_closure( context[15], context[0] );
  refalrts::reinit_name( context[16], ref_CheckExceedBlocks.ref.function );
  refalrts::reinit_svar( context[21], context[10] );
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[35] );
  refalrts::push_stack( context[34] );
  refalrts::link_brackets( context[22], context[1] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[21] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[29], context[1] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S1A1("SentenceTail$1=1", 708904305U, 1045449332U, func_gen_SentenceTail_S1A1);


static refalrts::FnResult func_gen_SentenceTail_S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & SentenceTail$2=1/4 t.Pattern#1/5 t.Result#1/7 (/11 e.Tokens#1/9 )/12 t.ErrorList#2/13 e.Blocks#2/2 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Tokens#1 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.Blocks#2 as range 2
  //DEBUG: t.Pattern#1: 5
  //DEBUG: t.Result#1: 7
  //DEBUG: e.Tokens#1: 9
  //DEBUG: t.ErrorList#2: 13
  //DEBUG: e.Blocks#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#2/13 } Tile{ HalfReuse: (/4 AsIs: t.Pattern#1/5 AsIs: t.Result#1/7 AsIs: (/11 } Tile{ AsIs: e.Blocks#2/2 } Tile{ AsIs: )/12 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/9 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[4], context[11] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentenceTail_S2A1("SentenceTail$2=1", 708904305U, 1045449332U, func_gen_SentenceTail_S2A1);


static refalrts::FnResult func_SentenceTail(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  //FAST GEN: s.$ t.$ t.$ s.$ t.$ t.$ ( e.$ ) e.$
  //GLOBAL GEN: s.$ t.$ t.$ s.$ t.$ t.$ ( e.$ ) e.$
  // </0 & SentenceTail/4 s.idx#0/5 t.idxV#0/6 t.idxVV#0/8 s.idxVVV#0/10 t.idxVVVV#0/11 t.idxVVVVV#0/13 (/17 e.idxVVVVVVB#0/15 )/18 e.idxVVVVVVT#0/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
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
  // closed e.idxVVVVVVB#0 as range 15
  // closed e.idxVVVVVVT#0 as range 2
  do {
    // s.idx t.idx t.idx s.idx t.idx t.idx ( e.idx ) ( # TkColon t.idx ) e.idx
    // </0 & SentenceTail/4 s.Mode#1/5 t.ErrorList#1/6 t.FirstPattern#1/8 s.PartType#1/10 t.Pos#1/11 t.FirstResult#1/13 (/17 e.FirstBlocks#1/19 )/18 (/25 # TkColon/27 t.ColonPos#1/28 )/26 e.Tokens#1/21 >/1
    context[19] = context[15];
    context[20] = context[16];
    context[21] = context[2];
    context[22] = context[3];
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[21], context[22] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  ident_TkColon, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.FirstBlocks#1 as range 19
    // closed e.Tokens#1 as range 21
    context[29] = refalrts::tvar_left( context[28], context[23], context[24] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 6
    //DEBUG: t.FirstPattern#1: 8
    //DEBUG: t.Pos#1: 11
    //DEBUG: t.FirstResult#1: 13
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.PartType#1: 10
    //DEBUG: e.FirstBlocks#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.ColonPos#1: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.ColonPos#1/28 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & SentenceTail$1=1/30 Tile{ AsIs: t.FirstPattern#1/8 AsIs: s.PartType#1/10 } Tile{ AsIs: t.FirstResult#1/13 } Tile{ AsIs: s.Mode#1/5 } Tile{ AsIs: t.Pos#1/11 } Tile{ AsIs: (/17 AsIs: e.FirstBlocks#1/19 AsIs: )/18 HalfReuse: {*}/25 HalfReuse: </27 } & SentenceTail/31 s.Mode#1/5/32 </33 & SentencePart/34 Tile{ AsIs: t.ErrorList#1/6 } Tile{ HalfReuse: s.Mode1 #5/26 AsIs: e.Tokens#1/21 AsIs: >/1 } >/35 >/36 Tile{ ]] }
    if( ! refalrts::alloc_name( context[30], ref_gen_SentenceTail_S1A1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], ref_SentenceTail.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], ref_SentencePart.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[4] );
    refalrts::reinit_unwrapped_closure( context[25], context[4] );
    refalrts::reinit_open_call( context[27] );
    refalrts::reinit_svar( context[26], context[5] );
    refalrts::push_stack( context[36] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[33] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[26], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[31], context[34] );
    res = refalrts::splice_evar( res, context[17], context[27] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[8], context[10] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    refalrts::splice_to_freelist_open( context[4], res );
    refalrts::wrap_closure( context[25] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx t.idx t.idx s.idx t.idx t.idx ( e.idx ) e.idx
  // </0 & SentenceTail/4 s.Mode#1/5 t.ErrorList#1/6 t.Pattern#1/8 s.PartType#1/10 t.Pos#1/11 t.Result#1/13 (/17 e.Blocks#1/19 )/18 e.Tokens#1/21 >/1
  context[19] = context[15];
  context[20] = context[16];
  context[21] = context[2];
  context[22] = context[3];
  // closed e.Blocks#1 as range 19
  // closed e.Tokens#1 as range 21
  //DEBUG: t.ErrorList#1: 6
  //DEBUG: t.Pattern#1: 8
  //DEBUG: t.Pos#1: 11
  //DEBUG: t.Result#1: 13
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.PartType#1: 10
  //DEBUG: e.Blocks#1: 19
  //DEBUG: e.Tokens#1: 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & SentenceTail$2=1/23 Tile{ AsIs: t.Pattern#1/8 } Tile{ AsIs: t.Result#1/13 AsIs: (/17 } Tile{ AsIs: e.Tokens#1/21 } Tile{ AsIs: )/18 } {*}/24 </25 & CheckSentenceEnd/26 Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: s.Mode#1/5 } Tile{ AsIs: s.PartType#1/10 AsIs: t.Pos#1/11 } Tile{ AsIs: e.Blocks#1/19 } >/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[23], ref_gen_SentenceTail_S2A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[24], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], ref_CheckSentenceEnd.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[25] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[10], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentenceTail("SentenceTail", 708904305U, 1045449332U, func_SentenceTail);


static refalrts::FnResult func_CheckExceedBlocks(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & CheckExceedBlocks/4 t.ErrorList#1/5 s.Mode#1/7 e.ExceedBlocks#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ExceedBlocks#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.ExceedBlocks#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoCheckExceedBlocks/4 } Tile{ AsIs: s.Mode#1/7 } Tile{ AsIs: t.ErrorList#1/5 } (/8 )/9 Tile{ AsIs: e.ExceedBlocks#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoCheckExceedBlocks.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckExceedBlocks("CheckExceedBlocks", 708904305U, 1045449332U, func_CheckExceedBlocks);


static refalrts::FnResult func_DoCheckExceedBlocks(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ t.$ ( e.$ ) e.$
  // </0 & DoCheckExceedBlocks/4 s.idx#0/5 t.idxV#0/6 (/10 e.idxVVB#0/8 )/11 e.idxVVT#0/2 >/1
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
  // closed e.idxVVT#0 as range 2
  do {
    // s.idx t.idx ( e.idx ) ( t.idx e.idx ) e.idx
    // </0 & DoCheckExceedBlocks/4 s.Mode#1/5 t.ErrorList#1/6 (/10 e.ScannedBlocks#1/12 )/11 (/18 t.Pos#1/20 e.Body#1/16 )/19 e.RestBlocks#1/14 >/1
    context[12] = context[8];
    context[13] = context[9];
    context[14] = context[2];
    context[15] = context[3];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[14], context[15] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    // closed e.ScannedBlocks#1 as range 12
    // closed e.RestBlocks#1 as range 14
    context[21] = refalrts::tvar_left( context[20], context[16], context[17] );
    if( ! context[21] )
      continue;
    // closed e.Body#1 as range 16
    //DEBUG: t.ErrorList#1: 6
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.ScannedBlocks#1: 12
    //DEBUG: e.RestBlocks#1: 14
    //DEBUG: t.Pos#1: 20
    //DEBUG: e.Body#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & DoCheckExceedBlocks/4 AsIs: s.Mode#1/5 } </22 & ClassicError/23 Tile{ AsIs: t.ErrorList#1/6 } Tile{ HalfReuse: s.Mode1 #5/18 AsIs: t.Pos#1/20 }"Exceed block in this position"/24 >/26 Tile{ AsIs: (/10 AsIs: e.ScannedBlocks#1/12 HalfReuse: (/11 } Tile{ AsIs: e.Body#1/16 } )/27 Tile{ AsIs: )/19 AsIs: e.RestBlocks#1/14 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], ref_ClassicError.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[24], context[25], "Exceed block in this position", 29 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[18], context[5] );
    refalrts::reinit_open_bracket( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[10], context[19] );
    refalrts::link_brackets( context[11], context[27] );
    refalrts::push_stack( context[26] );
    refalrts::push_stack( context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[18], context[21] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx t.idx ( e.idx )
  // </0 & DoCheckExceedBlocks/4 s.Mode#1/5 t.ErrorList#1/6 (/10 e.ScannedBlocks#1/12 )/11 >/1
  context[12] = context[8];
  context[13] = context[9];
  context[14] = context[2];
  context[15] = context[3];
  if( ! refalrts::empty_seq( context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScannedBlocks#1 as range 12
  //DEBUG: t.ErrorList#1: 6
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.ScannedBlocks#1: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoCheckExceedBlocks/4 s.Mode#1/5 {REMOVED TILE} (/10 {REMOVED TILE} )/11 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: e.ScannedBlocks#1/12 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoCheckExceedBlocks("DoCheckExceedBlocks", 708904305U, 1045449332U, func_DoCheckExceedBlocks);


static refalrts::FnResult func_AssignmentError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: t.$ s.$ s.$ t.$
  //GLOBAL GEN: t.$ s.$ s.$ t.$
  // </0 & AssignmentError/4 t.idx#0/5 s.idxV#0/7 s.idxVV#0/8 t.idxVVV#0/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // t.idx # Classic # Assign t.idx
    // </0 & AssignmentError/4 t.ErrorList#1/5 # Classic/7 # Assign/8 t.Pos#1/9 >/1
    if( ! refalrts::ident_term(  ident_Classic, context[7] ) )
      continue;
    if( ! refalrts::ident_term(  ident_Assign, context[8] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/9 } 'A'/11 Tile{ HalfReuse: 's'/7 HalfReuse: 's'/8 }"ignment not supported in classic mode"/12 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[11], 'A' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "ignment not supported in classic mode", 37 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
    refalrts::reinit_char( context[7], 's' );
    refalrts::reinit_char( context[8], 's' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx s.idx s.idx t.idx
  // </0 & AssignmentError/4 t.ErrorList#1/5 s.Mode#1/7 s.Type#1/8 t.Pos#1/9 >/1
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 9
  //DEBUG: s.Mode#1: 7
  //DEBUG: s.Type#1: 8

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AssignmentError/4 {REMOVED TILE} s.Mode#1/7 s.Type#1/8 t.Pos#1/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AssignmentError("AssignmentError", 708904305U, 1045449332U, func_AssignmentError);


static refalrts::FnResult func_gen_CheckSentenceEnd_S1A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & CheckSentenceEnd$1=2/4 (/7 e.Body#1/5 )/8 t.ErrorList#3/9 e.ExceedBlocks#3/2 >/1
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
  // closed e.Body#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.ExceedBlocks#3 as range 2
  //DEBUG: e.Body#1: 5
  //DEBUG: t.ErrorList#3: 9
  //DEBUG: e.ExceedBlocks#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CheckSentenceEnd$1=2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#3/9 } Tile{ AsIs: (/7 AsIs: e.Body#1/5 AsIs: )/8 } Tile{ AsIs: e.ExceedBlocks#3/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentenceEnd_S1A2("CheckSentenceEnd$1=2", 708904305U, 1045449332U, func_gen_CheckSentenceEnd_S1A2);


static refalrts::FnResult func_gen_CheckSentenceEnd_S1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & CheckSentenceEnd$1=1/4 (/7 e.Body#1/5 )/8 s.Mode#1/9 (/12 e.ExceedBlocks#1/10 )/13 t.ErrorList#2/14 >/1
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
  // closed e.Body#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.ExceedBlocks#1 as range 10
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Body#1: 5
  //DEBUG: s.Mode#1: 9
  //DEBUG: e.ExceedBlocks#1: 10
  //DEBUG: t.ErrorList#2: 14

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Mode#1/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </16 Tile{ HalfReuse: [*]/0 Reuse: & CheckSentenceEnd$1=2/4 AsIs: (/7 AsIs: e.Body#1/5 AsIs: )/8 } {*}/17 </18 & CheckExceedBlocks/19 Tile{ AsIs: t.ErrorList#2/14 } Tile{ HalfReuse: s.Mode1 #9/12 AsIs: e.ExceedBlocks#1/10 HalfReuse: >/13 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[17], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_CheckExceedBlocks.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_CheckSentenceEnd_S1A2.ref.function );
  refalrts::reinit_svar( context[12], context[9] );
  refalrts::reinit_close_call( context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[19] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  refalrts::wrap_closure( context[17] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CheckSentenceEnd_S1A1("CheckSentenceEnd$1=1", 708904305U, 1045449332U, func_gen_CheckSentenceEnd_S1A1);


static refalrts::FnResult func_CheckSentenceEnd(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 27 elems
  refalrts::Iter context[27];
  refalrts::zeros( context, 27 );
  //FAST GEN: e.$
  //GLOBAL GEN: t.$ s.$ s.$ t.$ e.$
  // </0 & CheckSentenceEnd/4 t.idx#0/5 s.idxV#0/7 s.idxVV#0/8 t.idxVVV#0/9 e.idxVVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVV#0 as range 2
  do {
    // t.idx s.idx s.idx t.idx ( t.idx e.idx ) e.idx
    // </0 & CheckSentenceEnd/4 t.ErrorList#1/5 s.Mode#1/7 s.PartType#1/8 t.Pos#1/9 (/15 t.BodyPos#1/17 e.Body#1/13 )/16 e.ExceedBlocks#1/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.ExceedBlocks#1 as range 11
    context[18] = refalrts::tvar_left( context[17], context[13], context[14] );
    if( ! context[18] )
      continue;
    // closed e.Body#1 as range 13
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 9
    //DEBUG: s.Mode#1: 7
    //DEBUG: s.PartType#1: 8
    //DEBUG: e.ExceedBlocks#1: 11
    //DEBUG: t.BodyPos#1: 17
    //DEBUG: e.Body#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.BodyPos#1/17 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </19 [*]/20 & CheckSentenceEnd$1=1/21 (/22 Tile{ AsIs: e.Body#1/13 } Tile{ AsIs: )/16 } s.Mode#1/7/23 (/24 Tile{ AsIs: e.ExceedBlocks#1/11 } )/25 {*}/26 Tile{ AsIs: </0 Reuse: & CheckMistakenAssign/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: s.PartType#1/8 AsIs: t.Pos#1/9 HalfReuse: >/15 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_closure_head( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], ref_gen_CheckSentenceEnd_S1A1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[23], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[26], context[20] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_CheckMistakenAssign.ref.function );
    refalrts::reinit_close_call( context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[24], context[25] );
    refalrts::link_brackets( context[22], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    refalrts::wrap_closure( context[26] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx s.idx # Condition t.idx
    // </0 & CheckSentenceEnd/4 t.ErrorList#1/5 s.Mode#1/7 # Condition/8 t.Pos#1/9 >/1
    context[11] = context[2];
    context[12] = context[3];
    if( ! refalrts::ident_term(  ident_Condition, context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[11], context[12] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 9
    //DEBUG: s.Mode#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/9 } 'M'/13 Tile{ HalfReuse: 'i'/8 }"staken \',\' for \'=\'"/14 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[13], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[14], context[15], "staken \',\' for \'=\'", 18 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
    refalrts::reinit_char( context[8], 'i' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx s.idx # Assign t.idx
  // </0 & CheckSentenceEnd/4 t.ErrorList#1/5 s.Mode#1/7 # Assign/8 t.Pos#1/9 >/1
  context[11] = context[2];
  context[12] = context[3];
  if( ! refalrts::ident_term(  ident_Assign, context[8] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[11], context[12] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 9
  //DEBUG: s.Mode#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CheckSentenceEnd/4 {REMOVED TILE} s.Mode#1/7 # Assign/8 t.Pos#1/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckSentenceEnd("CheckSentenceEnd", 708904305U, 1045449332U, func_CheckSentenceEnd);


static refalrts::FnResult func_CheckMistakenAssign(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: t.$ s.$ s.$ t.$
  //GLOBAL GEN: t.$ s.$ s.$ t.$
  // </0 & CheckMistakenAssign/4 t.idx#0/5 s.idxV#0/7 s.idxVV#0/8 t.idxVVV#0/9 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // t.idx s.idx # Assign t.idx
    // </0 & CheckMistakenAssign/4 t.ErrorList#1/5 s.Mode#1/7 # Assign/8 t.Pos#1/9 >/1
    if( ! refalrts::ident_term(  ident_Assign, context[8] ) )
      continue;
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 9
    //DEBUG: s.Mode#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ClassicError/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } Tile{ AsIs: t.Pos#1/9 } 'M'/11 Tile{ HalfReuse: 'i'/8 }"staken \'=\' for \',\' in classic mode"/12 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_char( context[11], 'M' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[12], context[13], "staken \'=\' for \',\' in classic mode", 34 ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ClassicError.ref.function );
    refalrts::reinit_char( context[8], 'i' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx s.idx # Condition t.idx
  // </0 & CheckMistakenAssign/4 t.ErrorList#1/5 s.Mode#1/7 # Condition/8 t.Pos#1/9 >/1
  if( ! refalrts::ident_term(  ident_Condition, context[8] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 9
  //DEBUG: s.Mode#1: 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CheckMistakenAssign/4 {REMOVED TILE} s.Mode#1/7 # Condition/8 t.Pos#1/9 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckMistakenAssign("CheckMistakenAssign", 708904305U, 1045449332U, func_CheckMistakenAssign);


static refalrts::FnResult func_SentencePart(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & SentencePart/4 t.ErrorList#1/5 s.Mode#1/7 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & SentencePart-AfterPattern/9 s.Mode#1/7/10 Tile{ AsIs: </0 Reuse: & Pattern/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: e.Tokens#1/2 AsIs: >/1 } >/11 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_SentencePartm_AfterPattern.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[7]))
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

static refalrts::NativeReference nat_ref_SentencePart("SentencePart", 708904305U, 1045449332U, func_SentencePart);


static refalrts::FnResult func_gen_SentencePartm_AfterPattern_B1S1A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & SentencePart-AfterPattern:1$1=2/4 t.Pattern#1/5 s.PartType#3/7 t.Pos#2/8 t.ErrorList#4/10 t.Result#4/12 (/16 e.Blocks#4/14 )/17 e.Tokens#4/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
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
  // closed e.Blocks#4 as range 14
  // closed e.Tokens#4 as range 2
  //DEBUG: t.Pattern#1: 5
  //DEBUG: s.PartType#3: 7
  //DEBUG: t.Pos#2: 8
  //DEBUG: t.ErrorList#4: 10
  //DEBUG: t.Result#4: 12
  //DEBUG: e.Blocks#4: 14
  //DEBUG: e.Tokens#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SentencePart-AfterPattern:1$1=2/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#4/10 } Tile{ AsIs: t.Pattern#1/5 AsIs: s.PartType#3/7 AsIs: t.Pos#2/8 } Tile{ AsIs: t.Result#4/12 AsIs: (/16 AsIs: e.Blocks#4/14 AsIs: )/17 } Tile{ AsIs: e.Tokens#4/2 } Tile{ ]] }
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[17] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentencePartm_AfterPattern_B1S1A2("SentencePart-AfterPattern:1$1=2", 708904305U, 1045449332U, func_gen_SentencePartm_AfterPattern_B1S1A2);


static refalrts::FnResult func_gen_SentencePartm_AfterPattern_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  //FAST GEN: t.$ t.$ s.$ ( e.$ ) t.$ ( e.$ )
  //GLOBAL GEN: t.$ t.$ s.$ ( e.$ ) t.$ ( s.$ t.$ e.$ )
  // </0 & SentencePart-AfterPattern:1/4 t.idx#0/10 t.idxV#0/12 s.idxVV#0/14 (/17 e.idxVVVB#0/15 )/18 t.idxVVVT#0/19 (/7 s.idxVVVTVB#0/9 t.idxVVVTVBV#0/21 e.idxVVVTVBVV#0/5 )/8 >/1
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
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.idxVVVB#0 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = refalrts::tvar_left( context[21], context[5], context[6] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVVTVBVV#0 as range 5
  do {
    // t.idx t.idx s.idx ( e.idx ) t.idx ( s.idx t.idx )
    // </0 & SentencePart-AfterPattern:1/4 t.Pattern#1/10 t.ErrorList#1/12 s.Mode#1/14 (/17 e.Tokens#1/23 )/18 t.NextToken#1/19 (/7 s.PartToken#2/9 t.Pos#2/21 )/8 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[5];
    context[26] = context[6];
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    // closed e.Tokens#1 as range 23
    //DEBUG: t.Pattern#1: 10
    //DEBUG: t.ErrorList#1: 12
    //DEBUG: t.NextToken#1: 19
    //DEBUG: t.Pos#2: 21
    //DEBUG: s.Mode#1: 14
    //DEBUG: s.PartToken#2: 9
    //DEBUG: e.Tokens#1: 23
    //9: s.PartToken#2
    //10: t.Pattern#1
    //12: t.ErrorList#1
    //14: s.Mode#1
    //19: t.NextToken#1
    //21: t.Pos#2
    //23: e.Tokens#1

    refalrts::reset_allocator();
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ref_gen_SentencePartm_AfterPattern_B1S1C1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[31], ident_TkComma ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], ident_Condition ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], ident_TkAssign ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[36], ident_Assign ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[27] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::link_brackets( context[34], context[37] );
    res = refalrts::splice_elem( res, context[37] );
    res = refalrts::splice_elem( res, context[36] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_elem( res, context[34] );
    refalrts::link_brackets( context[30], context[33] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_elem( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function();
    do {
      // </27 & SentencePart-AfterPattern:1$1?1/31 e.Types-B#3/32 (/38 s.PartToken#2/40 s.PartType#3/41 )/39 e.Types-E#3/34 >/28
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
      context[32] = 0;
      context[33] = 0;
      refalrts::start_e_loop();
      do {
        context[34] = context[29];
        context[35] = context[30];
        context[36] = 0;
        context[37] = 0;
        context[38] = refalrts::brackets_left( context[36], context[37], context[34], context[35] );
        if( ! context[38] )
          continue;
        refalrts::bracket_pointers(context[38], context[39]);
        if( ! refalrts::repeated_stvar_left( context[40], context[9], context[36], context[37] ) )
          continue;
        // closed e.Types-E#3 as range 34
        if( ! refalrts::svar_left( context[41], context[36], context[37] ) )
          continue;
        if( ! refalrts::empty_seq( context[36], context[37] ) )
          continue;
        //DEBUG: t.Pattern#1: 10
        //DEBUG: t.ErrorList#1: 12
        //DEBUG: t.NextToken#1: 19
        //DEBUG: t.Pos#2: 21
        //DEBUG: s.Mode#1: 14
        //DEBUG: s.PartToken#2: 9
        //DEBUG: e.Tokens#1: 23
        //DEBUG: e.Types-B#3: 32
        //DEBUG: e.Types-E#3: 34
        //DEBUG: s.PartType#3: 41

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} (/17 {REMOVED TILE} )/18 t.NextToken#1/19 {REMOVED TILE} s.PartToken#2/9 {REMOVED TILE} e.Types-B#3/32 (/38 s.PartToken#2/40 {REMOVED TILE} )/39 e.Types-E#3/34 {REMOVED TILE}
        //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & SentencePart-AfterPattern:1$1=2/7 } Tile{ AsIs: t.Pattern#1/10 } Tile{ AsIs: s.PartType#3/41 } Tile{ AsIs: t.Pos#2/21 HalfReuse: {*}/8 AsIs: </27 Reuse: & Result/31 } Tile{ AsIs: t.ErrorList#1/12 AsIs: s.Mode#1/14 } Tile{ AsIs: e.Tokens#1/23 } Tile{ AsIs: >/28 AsIs: >/1 ]] }
        refalrts::reinit_closure_head( context[4] );
        refalrts::reinit_name( context[7], ref_gen_SentencePartm_AfterPattern_B1S1A2.ref.function );
        refalrts::reinit_unwrapped_closure( context[8], context[4] );
        refalrts::update_name( context[31], ref_Result.ref.function );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::push_stack( context[28] );
        refalrts::push_stack( context[27] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[28];
        res = refalrts::splice_evar( res, context[23], context[24] );
        res = refalrts::splice_evar( res, context[12], context[14] );
        res = refalrts::splice_evar( res, context[21], context[31] );
        res = refalrts::splice_evar( res, context[41], context[41] );
        res = refalrts::splice_evar( res, context[10], context[11] );
        res = refalrts::splice_evar( res, context[7], context[7] );
        refalrts::splice_to_freelist_open( context[4], res );
        refalrts::wrap_closure( context[8] );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[32], context[33], context[29], context[30] ) );
    } while ( 0 );
    refalrts::stop_sentence();

    refalrts::splice_to_freelist(context[27], context[28]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx t.idx s.idx ( e.idx ) t.idx ( s.idx t.idx )
    // </0 & SentencePart-AfterPattern:1/4 t.Pattern#1/10 t.ErrorList#1/12 s.Mode#1/14 (/17 e.Tokens#1/23 )/18 t.NextToken#1/19 (/7 s.EndOfPart#2/9 t.Pos#2/21 )/8 >/1
    context[23] = context[15];
    context[24] = context[16];
    context[25] = context[5];
    context[26] = context[6];
    if( ! refalrts::empty_seq( context[25], context[26] ) )
      continue;
    // closed e.Tokens#1 as range 23
    //DEBUG: t.Pattern#1: 10
    //DEBUG: t.ErrorList#1: 12
    //DEBUG: t.NextToken#1: 19
    //DEBUG: t.Pos#2: 21
    //DEBUG: s.Mode#1: 14
    //DEBUG: s.EndOfPart#2: 9
    //DEBUG: e.Tokens#1: 23
    //9: s.EndOfPart#2
    //10: t.Pattern#1
    //12: t.ErrorList#1
    //14: s.Mode#1
    //19: t.NextToken#1
    //21: t.Pos#2
    //23: e.Tokens#1
    //32: s.EndOfPart#2

    refalrts::reset_allocator();
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ref_gen_SentencePartm_AfterPattern_B1S2C1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], ident_TkColon ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], ident_TkSemicolon ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[27] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[30] );
    res = refalrts::splice_elem( res, context[35] );
    res = refalrts::splice_elem( res, context[34] );
    res = refalrts::splice_elem( res, context[33] );
    res = refalrts::splice_stvar( res, context[32] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[27] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function();
    do {
      // </27 & SentencePart-AfterPattern:1$2?1/31 # True/32 >/28
      context[29] = 0;
      context[30] = 0;
      context[31] = refalrts::call_left( context[29], context[30], context[27], context[28] );
      context[32] = refalrts::ident_left(  ident_True, context[29], context[30] );
      if( ! context[32] )
        continue;
      if( ! refalrts::empty_seq( context[29], context[30] ) )
        continue;
      //DEBUG: t.Pattern#1: 10
      //DEBUG: t.ErrorList#1: 12
      //DEBUG: t.NextToken#1: 19
      //DEBUG: t.Pos#2: 21
      //DEBUG: s.Mode#1: 14
      //DEBUG: s.EndOfPart#2: 9
      //DEBUG: e.Tokens#1: 23

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.NextToken#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: </27 Reuse: & SentencePart-AfterPattern/31 HalfReuse: s.Mode1 #14/32 HalfReuse: </28 HalfReuse: & EL-AddErrorAt/1 } Tile{ AsIs: t.ErrorList#1/12 } t.Pos#2/21/33"Missed \',\' or \'="/35 Tile{ HalfReuse: '\''/0 HalfReuse: >/4 AsIs: t.Pattern#1/10 } Tile{ AsIs: (/17 } # TkComma/37 t.Pos#2/21/38 Tile{ AsIs: )/18 } Tile{ AsIs: (/7 AsIs: s.EndOfPart#2/9 AsIs: t.Pos#2/21 AsIs: )/8 } Tile{ AsIs: e.Tokens#1/23 } >/40 Tile{ ]] }
      if (! refalrts::copy_evar(context[33], context[34], context[21], context[22]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[35], context[36], "Missed \',\' or \'=", 16 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_ident( context[37], ident_TkComma ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[38], context[39], context[21], context[22]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[40] ) )
        return refalrts::cNoMemory;
      refalrts::update_name( context[31], ref_SentencePartm_AfterPattern.ref.function );
      refalrts::reinit_svar( context[32], context[14] );
      refalrts::reinit_open_call( context[28] );
      refalrts::reinit_name( context[1], ref_ELm_AddErrorAt.ref.function );
      refalrts::reinit_char( context[0], '\'' );
      refalrts::reinit_close_call( context[4] );
      refalrts::push_stack( context[40] );
      refalrts::push_stack( context[27] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::link_brackets( context[17], context[18] );
      refalrts::push_stack( context[4] );
      refalrts::push_stack( context[28] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[40], context[40] );
      res = refalrts::splice_evar( res, context[23], context[24] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[18], context[18] );
      res = refalrts::splice_evar( res, context[37], context[39] );
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[0], context[11] );
      res = refalrts::splice_evar( res, context[33], context[36] );
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[27], context[1] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    refalrts::splice_to_freelist(context[27], context[28]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx s.idx ( e.idx ) t.idx ( s.idx t.idx e.idx )
  // </0 & SentencePart-AfterPattern:1/4 t.Pattern#1/10 t.ErrorList#1/12 s.Mode#1/14 (/17 e.Tokens#1/23 )/18 t.NextToken#1/19 (/7 s.Unexpected#2/9 t.Pos#2/21 e.Info#2/25 )/8 >/1
  context[23] = context[15];
  context[24] = context[16];
  context[25] = context[5];
  context[26] = context[6];
  // closed e.Tokens#1 as range 23
  // closed e.Info#2 as range 25
  //DEBUG: t.Pattern#1: 10
  //DEBUG: t.ErrorList#1: 12
  //DEBUG: t.NextToken#1: 19
  //DEBUG: t.Pos#2: 21
  //DEBUG: s.Mode#1: 14
  //DEBUG: s.Unexpected#2: 9
  //DEBUG: e.Tokens#1: 23
  //DEBUG: e.Info#2: 25

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Mode#1/14 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.ErrorList#1/12 } Tile{ AsIs: (/7 AsIs: s.Unexpected#2/9 AsIs: t.Pos#2/21 AsIs: e.Info#2/25 AsIs: )/8 HalfReuse: 'v'/1 }"alid Refal expression, \'=\', \',\', \':\' or \';\'"/27 >/29 Tile{ AsIs: t.Pattern#1/10 } # Assign/30 t.Pos#2/21/31 Tile{ AsIs: (/17 } )/33 (/34 Tile{ AsIs: )/18 AsIs: t.NextToken#1/19 } Tile{ AsIs: e.Tokens#1/23 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[27], context[28], "alid Refal expression, \'=\', \',\', \':\' or \';\'", 43 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[30], ident_Assign ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[31], context[32], context[21], context[22]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_UnexpectedToken.ref.function );
  refalrts::reinit_char( context[1], 'v' );
  refalrts::link_brackets( context[34], context[18] );
  refalrts::link_brackets( context[17], context[33] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[30], context[32] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_SentencePartm_AfterPattern_B1("SentencePart-AfterPattern:1", 708904305U, 1045449332U, func_gen_SentencePartm_AfterPattern_B1);


static refalrts::FnResult func_SentencePartm_AfterPattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & SentencePart-AfterPattern/4 s.Mode#1/5 t.ErrorList#1/6 t.Pattern#1/8 t.NextToken#1/10 e.Tokens#1/2 >/1
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
  //DEBUG: t.ErrorList#1: 6
  //DEBUG: t.Pattern#1: 8
  //DEBUG: t.NextToken#1: 10
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & SentencePart-AfterPattern:1/12 Tile{ AsIs: t.Pattern#1/8 } Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: s.Mode#1/5 } (/13 Tile{ AsIs: e.Tokens#1/2 } )/14 Tile{ AsIs: t.NextToken#1/10 } {*}/15 t.NextToken#1/10/16 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[12], ref_gen_SentencePartm_AfterPattern_B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[15], context[4] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[16], context[17], context[10], context[11]))
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SentencePartm_AfterPattern("SentencePart-AfterPattern", 708904305U, 1045449332U, func_SentencePartm_AfterPattern);


static refalrts::FnResult func_Pattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Pattern/4 t.ErrorList#1/5 s.Mode#1/7 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } # Pattern/8 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_ident( context[8], ident_Pattern ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Expression.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Pattern("Pattern", 708904305U, 1045449332U, func_Pattern);


static refalrts::FnResult func_Result(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  // </0 & Result/4 t.ErrorList#1/5 s.Mode#1/7 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </8 & Result-Blocks/9 s.Mode#1/7/10 (/11 )/12 Tile{ AsIs: </0 Reuse: & Expression/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 } # Result/13 Tile{ AsIs: e.Tokens#1/2 } >/14 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_Resultm_Blocks.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[10], context[7]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[13], ident_Result ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[14] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Expression.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[14] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[7] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Result("Result", 708904305U, 1045449332U, func_Result);


static refalrts::FnResult func_gen_Resultm_Blocks_S3A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & Result-Blocks$3=1/4 s.Mode#1/5 (/8 e.Blocks#1/6 )/9 t.ColonPos#1/10 t.Result#1/12 t.ErrorList#2/14 (/18 e.Body#2/16 )/19 e.Tokens#2/2 >/1
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
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::tvar_left( context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = 0;
  context[17] = 0;
  context[18] = refalrts::brackets_left( context[16], context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[18], context[19]);
  // closed e.Body#2 as range 16
  // closed e.Tokens#2 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Blocks#1: 6
  //DEBUG: t.ColonPos#1: 10
  //DEBUG: t.Result#1: 12
  //DEBUG: t.ErrorList#2: 14
  //DEBUG: e.Body#2: 16
  //DEBUG: e.Tokens#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Result-Blocks/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Blocks#1/6 HalfReuse: (/9 AsIs: t.ColonPos#1/10 } Tile{ AsIs: e.Body#2/16 } Tile{ AsIs: )/19 } Tile{ HalfReuse: )/18 } Tile{ AsIs: t.ErrorList#2/14 } Tile{ AsIs: t.Result#1/12 } Tile{ AsIs: e.Tokens#2/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Resultm_Blocks.ref.function );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_close_bracket( context[18] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[18] );
  refalrts::link_brackets( context[9], context[19] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Resultm_Blocks_S3A1("Result-Blocks$3=1", 708904305U, 1045449332U, func_gen_Resultm_Blocks_S3A1);


static refalrts::FnResult func_Resultm_Blocks(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  //FAST GEN: s.$ ( e.$ ) t.$ t.$ e.$
  //GLOBAL GEN: s.$ ( e.$ ) t.$ t.$ e.$
  // </0 & Result-Blocks/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 t.idxVTV#0/12 e.idxVTVV#0/2 >/1
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
    // s.idx ( e.idx ) t.idx t.idx ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/14 )/9 t.ErrorList#1/10 t.Result#1/12 (/20 # TkRefal5Mode/22 t.ModePos#1/23 s.NewMode#1/25 )/21 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  ident_TkRefal5Mode, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Blocks#1 as range 14
    // closed e.Tokens#1 as range 16
    context[24] = refalrts::tvar_left( context[23], context[18], context[19] );
    if( ! context[24] )
      continue;
    if( ! refalrts::svar_left( context[25], context[18], context[19] ) )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.Result#1: 12
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Blocks#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.ModePos#1: 23
    //DEBUG: s.NewMode#1: 25

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/20 # TkRefal5Mode/22 t.ModePos#1/23 {REMOVED TILE} )/21 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 } Tile{ AsIs: s.NewMode#1/25 } Tile{ AsIs: (/8 AsIs: e.Blocks#1/14 AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.Result#1/12 } Tile{ AsIs: e.Tokens#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx t.idx ( # TkColon t.idx ) ( # TkRefal5Mode t.idx s.idx ) e.idx
    // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/14 )/9 t.ErrorList#1/10 t.Result#1/12 (/20 # TkColon/22 t.ColonPos#1/28 )/21 (/25 # TkRefal5Mode/27 t.ModePos#1/30 s.NewMode#1/32 )/26 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  ident_TkColon, context[18], context[19] );
    if( ! context[22] )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[16], context[17] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  ident_TkRefal5Mode, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Blocks#1 as range 14
    // closed e.Tokens#1 as range 16
    context[29] = refalrts::tvar_left( context[28], context[18], context[19] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    context[31] = refalrts::tvar_left( context[30], context[23], context[24] );
    if( ! context[31] )
      continue;
    if( ! refalrts::svar_left( context[32], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.Result#1: 12
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Blocks#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.ColonPos#1: 28
    //DEBUG: t.ModePos#1: 30
    //DEBUG: s.NewMode#1: 32

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/25 # TkRefal5Mode/27 t.ModePos#1/30 {REMOVED TILE} )/26 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 } Tile{ AsIs: s.NewMode#1/32 } Tile{ AsIs: (/8 AsIs: e.Blocks#1/14 AsIs: )/9 AsIs: t.ErrorList#1/10 AsIs: t.Result#1/12 AsIs: (/20 AsIs: # TkColon/22 AsIs: t.ColonPos#1/28 AsIs: )/21 } Tile{ AsIs: e.Tokens#1/16 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[21] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx t.idx ( # TkColon t.idx ) ( # TkOpenBlock t.idx ) e.idx
    // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/14 )/9 t.ErrorList#1/10 t.Result#1/12 (/20 # TkColon/22 t.ColonPos#1/28 )/21 (/25 # TkOpenBlock/27 t.BlockPos#1/30 )/26 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  ident_TkColon, context[18], context[19] );
    if( ! context[22] )
      continue;
    context[23] = 0;
    context[24] = 0;
    context[25] = refalrts::brackets_left( context[23], context[24], context[16], context[17] );
    if( ! context[25] )
      continue;
    refalrts::bracket_pointers(context[25], context[26]);
    context[27] = refalrts::ident_left(  ident_TkOpenBlock, context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Blocks#1 as range 14
    // closed e.Tokens#1 as range 16
    context[29] = refalrts::tvar_left( context[28], context[18], context[19] );
    if( ! context[29] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    context[31] = refalrts::tvar_left( context[30], context[23], context[24] );
    if( ! context[31] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.Result#1: 12
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Blocks#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.ColonPos#1: 28
    //DEBUG: t.BlockPos#1: 30

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </32 Tile{ HalfReuse: [*]/0 Reuse: & Result-Blocks$3=1/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Blocks#1/14 AsIs: )/9 } Tile{ AsIs: t.ColonPos#1/28 } Tile{ AsIs: t.Result#1/12 HalfReuse: {*}/20 HalfReuse: </22 } & Block/33 Tile{ AsIs: t.ErrorList#1/10 } Tile{ HalfReuse: s.Mode1 #5/21 AsIs: (/25 AsIs: # TkOpenBlock/27 AsIs: t.BlockPos#1/30 AsIs: )/26 AsIs: e.Tokens#1/16 AsIs: >/1 } >/34 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], ref_Block.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_Resultm_Blocks_S3A1.ref.function );
    refalrts::reinit_unwrapped_closure( context[20], context[0] );
    refalrts::reinit_open_call( context[22] );
    refalrts::reinit_svar( context[21], context[5] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[22] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[21], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[12], context[22] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    refalrts::use( res );
    refalrts::wrap_closure( context[20] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) t.idx t.idx ( # TkOpenBlock t.idx ) e.idx
    // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/14 )/9 t.ErrorList#1/10 t.Result#1/12 (/20 # TkOpenBlock/22 t.BlockPos#1/23 )/21 e.Tokens#1/16 >/1
    context[14] = context[6];
    context[15] = context[7];
    context[16] = context[2];
    context[17] = context[3];
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[16], context[17] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = refalrts::ident_left(  ident_TkOpenBlock, context[18], context[19] );
    if( ! context[22] )
      continue;
    // closed e.Blocks#1 as range 14
    // closed e.Tokens#1 as range 16
    context[24] = refalrts::tvar_left( context[23], context[18], context[19] );
    if( ! context[24] )
      continue;
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    //DEBUG: t.ErrorList#1: 10
    //DEBUG: t.Result#1: 12
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Blocks#1: 14
    //DEBUG: e.Tokens#1: 16
    //DEBUG: t.BlockPos#1: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & Result-Blocks/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Blocks#1/14 AsIs: )/9 } </25 & EL-AddErrorAt/26 Tile{ AsIs: t.ErrorList#1/10 } t.BlockPos#1/23/27"Missed \':\'"/29 >/31 Tile{ AsIs: t.Result#1/12 } (/32 # TkColon/33 t.BlockPos#1/23/34 )/36 Tile{ AsIs: (/20 AsIs: # TkOpenBlock/22 AsIs: t.BlockPos#1/23 AsIs: )/21 AsIs: e.Tokens#1/16 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ref_ELm_AddErrorAt.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[27], context[28], context[23], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[29], context[30], "Missed \':\'", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[33], ident_TkColon ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[34], context[35], context[23], context[24]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[32], context[36] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[20];
    res = refalrts::splice_evar( res, context[32], context[36] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[27], context[31] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) t.idx t.idx e.idx
  // </0 & Result-Blocks/4 s.Mode#1/5 (/8 e.Blocks#1/14 )/9 t.ErrorList#1/10 t.Result#1/12 e.Tokens#1/16 >/1
  context[14] = context[6];
  context[15] = context[7];
  context[16] = context[2];
  context[17] = context[3];
  // closed e.Blocks#1 as range 14
  // closed e.Tokens#1 as range 16
  //DEBUG: t.ErrorList#1: 10
  //DEBUG: t.Result#1: 12
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Blocks#1: 14
  //DEBUG: e.Tokens#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Result-Blocks/4 s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/10 AsIs: t.Result#1/12 } Tile{ AsIs: (/8 AsIs: e.Blocks#1/14 AsIs: )/9 } Tile{ AsIs: e.Tokens#1/16 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Resultm_Blocks("Result-Blocks", 708904305U, 1045449332U, func_Resultm_Blocks);


static refalrts::FnResult func_Expression(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Expression/4 t.ErrorList#1/5 s.Mode#1/7 s.Kind#1/8 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: s.Kind#1: 8
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Expression-CheckBrackets/10 s.Mode#1/7/11 s.Kind#1/8/12 Tile{ AsIs: </0 Reuse: & TokenChain/4 AsIs: t.ErrorList#1/5 AsIs: s.Mode#1/7 AsIs: s.Kind#1/8 AsIs: e.Tokens#1/2 AsIs: >/1 } >/13 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_Expressionm_CheckBrackets.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[11], context[7]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[12], context[8]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_TokenChain.ref.function );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expression("Expression", 708904305U, 1045449332U, func_Expression);


static refalrts::FnResult func_TokenChain(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & TokenChain/4 t.ErrorList#1/5 s.Mode#1/7 s.Kind#1/8 e.Tokens#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: s.Mode#1: 7
  //DEBUG: s.Kind#1: 8
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 } Tile{ AsIs: s.Mode#1/7 AsIs: s.Kind#1/8 } Tile{ AsIs: t.ErrorList#1/5 } (/9 )/10 Tile{ AsIs: e.Tokens#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_TokenChain("TokenChain", 708904305U, 1045449332U, func_TokenChain);


static refalrts::FnResult func_gen_DoTokenChain_B1S6A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & DoTokenChain:1$6=2/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/7 )/10 (/13 e.BracketTerms#3/11 )/14 t.ErrorList#4/15 e.Tokens#4/2 >/1
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
  // closed e.Collected#1 as range 7
  // closed e.BracketTerms#3 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#4 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 7
  //DEBUG: e.BracketTerms#3: 11
  //DEBUG: t.ErrorList#4: 15
  //DEBUG: e.Tokens#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: t.ErrorList#4/15 } Tile{ AsIs: (/9 AsIs: e.Collected#1/7 HalfReuse: (/10 HalfReuse: # Brackets/13 AsIs: e.BracketTerms#3/11 AsIs: )/14 } )/17 Tile{ AsIs: e.Tokens#4/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
  refalrts::reinit_open_bracket( context[10] );
  refalrts::reinit_ident( context[13], ident_Brackets );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[9], context[17] );
  refalrts::link_brackets( context[10], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S6A2("DoTokenChain:1$6=2", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S6A2);


static refalrts::FnResult func_gen_DoTokenChain_B1S6A2B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: t.$ ( e.$ ) e.$
  //GLOBAL GEN: t.$ ( s.$ t.$ e.$ ) e.$
  // </0 & DoTokenChain:1$6=2:1/4 t.idx#0/5 (/9 s.idxVB#0/11 t.idxVBV#0/12 e.idxVBVV#0/7 )/10 e.idxVT#0/2 >/1
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
  // closed e.idxVT#0 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBVV#0 as range 7
  do {
    // t.idx ( # TkCloseBracket t.idx ) e.idx
    // </0 & DoTokenChain:1$6=2:1/4 t.ErrorList#3/5 (/9 # TkCloseBracket/11 t.ClosePos#4/12 )/10 e.Tokens#4/16 >/1
    context[14] = context[7];
    context[15] = context[8];
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::ident_term(  ident_TkCloseBracket, context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.Tokens#4 as range 16
    //DEBUG: t.ErrorList#3: 5
    //DEBUG: t.ClosePos#4: 12
    //DEBUG: e.Tokens#4: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoTokenChain:1$6=2:1/4 {REMOVED TILE} (/9 # TkCloseBracket/11 t.ClosePos#4/12 )/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#3/5 } Tile{ AsIs: e.Tokens#4/16 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( s.idx t.idx e.idx ) e.idx
  // </0 & DoTokenChain:1$6=2:1/4 t.ErrorList#3/5 (/9 s.Type#4/11 t.Pos#4/12 e.Value#4/14 )/10 e.Tokens#4/16 >/1
  context[14] = context[7];
  context[15] = context[8];
  context[16] = context[2];
  context[17] = context[3];
  // closed e.Value#4 as range 14
  // closed e.Tokens#4 as range 16
  //DEBUG: t.ErrorList#3: 5
  //DEBUG: t.Pos#4: 12
  //DEBUG: s.Type#4: 11
  //DEBUG: e.Value#4: 14
  //DEBUG: e.Tokens#4: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#3/5 } t.Pos#4/12/18"Missed \')\'"/20 Tile{ AsIs: >/1 } Tile{ AsIs: (/9 AsIs: s.Type#4/11 AsIs: t.Pos#4/12 AsIs: e.Value#4/14 AsIs: )/10 } Tile{ AsIs: e.Tokens#4/16 } Tile{ ]] }
  if (! refalrts::copy_evar(context[18], context[19], context[12], context[13]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "Missed \')\'", 10 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S6A2B1("DoTokenChain:1$6=2:1", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S6A2B1);


static refalrts::FnResult func_gen_DoTokenChain_B1S6A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DoTokenChain:1$6=1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/7 )/10 t.ErrorList#3/11 (/15 e.BracketTerms#3/13 )/16 e.Tokens#3/2 >/1
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
  // closed e.Collected#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.BracketTerms#3 as range 13
  // closed e.Tokens#3 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 7
  //DEBUG: t.ErrorList#3: 11
  //DEBUG: e.BracketTerms#3: 13
  //DEBUG: e.Tokens#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$6=2/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 } Tile{ AsIs: (/15 AsIs: e.BracketTerms#3/13 AsIs: )/16 } {*}/18 </19 [*]/20 & DoTokenChain:1$6=2:1/21 Tile{ AsIs: t.ErrorList#3/11 } {*}/22 Tile{ AsIs: e.Tokens#3/2 } >/23 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[18], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_gen_DoTokenChain_B1S6A2B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[22], context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoTokenChain_B1S6A2.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[19] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[0], context[10] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  refalrts::wrap_closure( context[22] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S6A1("DoTokenChain:1$6=1", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S6A1);


static refalrts::FnResult func_gen_DoTokenChain_B1S7A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DoTokenChain:1$7=1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/7 )/10 t.Pos#2/11 (/15 e.Tokens#1/13 )/16 t.ErrorList#3/17 >/1
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
  // closed e.Collected#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Tokens#1 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 7
  //DEBUG: t.Pos#2: 11
  //DEBUG: e.Tokens#1: 13
  //DEBUG: t.ErrorList#3: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain-AfterCall/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 AsIs: t.Pos#2/11 AsIs: (/15 } )/19 </20 Tile{ HalfReuse: & TokenChain/16 AsIs: t.ErrorList#3/17 } s.Mode#1/5/21 s.Kind#1/6/22 Tile{ AsIs: e.Tokens#1/13 } >/23 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[21], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[22], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoTokenChainm_AfterCall.ref.function );
  refalrts::reinit_name( context[16], ref_TokenChain.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[15], context[19] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[16], context[18] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S7A1("DoTokenChain:1$7=1", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S7A1);


static refalrts::FnResult func_gen_DoTokenChain_B1S9A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  // </0 & DoTokenChain:1$9=3/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/7 )/10 t.OpenPos#2/11 (/15 e.FuncName#2/13 )/16 (/19 e.BracketTerms#4/17 )/20 t.ErrorList#5/21 e.Tokens#5/2 >/1
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
  // closed e.Collected#1 as range 7
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
  // closed e.FuncName#2 as range 13
  // closed e.BracketTerms#4 as range 17
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#5 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 7
  //DEBUG: t.OpenPos#2: 11
  //DEBUG: e.FuncName#2: 13
  //DEBUG: e.BracketTerms#4: 17
  //DEBUG: t.ErrorList#5: 21
  //DEBUG: e.Tokens#5: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: t.ErrorList#5/21 } Tile{ AsIs: (/19 } Tile{ AsIs: e.Collected#1/7 } Tile{ AsIs: (/9 } Tile{ HalfReuse: # ADT-Brackets/10 AsIs: t.OpenPos#2/11 AsIs: (/15 AsIs: e.FuncName#2/13 AsIs: )/16 } Tile{ AsIs: e.BracketTerms#4/17 } Tile{ AsIs: )/20 } )/23 Tile{ AsIs: e.Tokens#5/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
  refalrts::reinit_ident( context[10], ident_ADTm_Brackets );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[19], context[23] );
  refalrts::link_brackets( context[9], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[10], context[16] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A3("DoTokenChain:1$9=3", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S9A3);


static refalrts::FnResult func_gen_DoTokenChain_B1S9A3B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: t.$ ( e.$ ) e.$
  //GLOBAL GEN: t.$ ( s.$ t.$ e.$ ) e.$
  // </0 & DoTokenChain:1$9=3:1/4 t.idx#0/5 (/9 s.idxVB#0/11 t.idxVBV#0/12 e.idxVBVV#0/7 )/10 e.idxVT#0/2 >/1
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
  // closed e.idxVT#0 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBVV#0 as range 7
  do {
    // t.idx ( # TkCloseADT t.idx ) e.idx
    // </0 & DoTokenChain:1$9=3:1/4 t.ErrorList#4/5 (/9 # TkCloseADT/11 t.ClosePos#5/12 )/10 e.Tokens#5/16 >/1
    context[14] = context[7];
    context[15] = context[8];
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::ident_term(  ident_TkCloseADT, context[11] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.Tokens#5 as range 16
    //DEBUG: t.ErrorList#4: 5
    //DEBUG: t.ClosePos#5: 12
    //DEBUG: e.Tokens#5: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoTokenChain:1$9=3:1/4 {REMOVED TILE} (/9 # TkCloseADT/11 t.ClosePos#5/12 )/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#4/5 } Tile{ AsIs: e.Tokens#5/16 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( s.idx t.idx e.idx ) e.idx
  // </0 & DoTokenChain:1$9=3:1/4 t.ErrorList#4/5 (/9 s.Type#5/11 t.Pos#5/12 e.Value#5/14 )/10 e.Tokens#5/16 >/1
  context[14] = context[7];
  context[15] = context[8];
  context[16] = context[2];
  context[17] = context[3];
  // closed e.Value#5 as range 14
  // closed e.Tokens#5 as range 16
  //DEBUG: t.ErrorList#4: 5
  //DEBUG: t.Pos#5: 12
  //DEBUG: s.Type#5: 11
  //DEBUG: e.Value#5: 14
  //DEBUG: e.Tokens#5: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#4/5 } t.Pos#5/12/18"Missed \']\'"/20 Tile{ AsIs: >/1 } Tile{ AsIs: (/9 AsIs: s.Type#5/11 AsIs: t.Pos#5/12 AsIs: e.Value#5/14 AsIs: )/10 } Tile{ AsIs: e.Tokens#5/16 } Tile{ ]] }
  if (! refalrts::copy_evar(context[18], context[19], context[12], context[13]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[20], context[21], "Missed \']\'", 10 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A3B1("DoTokenChain:1$9=3:1", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S9A3B1);


static refalrts::FnResult func_gen_DoTokenChain_B1S9A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & DoTokenChain:1$9=2/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/7 )/10 t.OpenPos#2/11 (/15 e.FuncName#2/13 )/16 t.ErrorList#4/17 (/21 e.BracketTerms#4/19 )/22 e.Tokens#4/2 >/1
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
  // closed e.Collected#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.FuncName#2 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.BracketTerms#4 as range 19
  // closed e.Tokens#4 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 7
  //DEBUG: t.OpenPos#2: 11
  //DEBUG: e.FuncName#2: 13
  //DEBUG: t.ErrorList#4: 17
  //DEBUG: e.BracketTerms#4: 19
  //DEBUG: e.Tokens#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$9=3/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 AsIs: t.OpenPos#2/11 AsIs: (/15 AsIs: e.FuncName#2/13 AsIs: )/16 } Tile{ AsIs: (/21 AsIs: e.BracketTerms#4/19 AsIs: )/22 } {*}/24 </25 [*]/26 & DoTokenChain:1$9=3:1/27 Tile{ AsIs: t.ErrorList#4/17 } {*}/28 Tile{ AsIs: e.Tokens#4/2 } >/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[24], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], ref_gen_DoTokenChain_B1S9A3B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[28], context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoTokenChain_B1S9A3.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[25] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A2("DoTokenChain:1$9=2", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S9A2);


static refalrts::FnResult func_gen_DoTokenChain_B1S9A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & DoTokenChain:1$9=1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/7 )/10 t.OpenPos#2/11 (/15 e.FuncName#2/13 )/16 (/19 e.Tokens#1/17 )/20 t.ErrorList#3/21 >/1
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
  // closed e.Collected#1 as range 7
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
  // closed e.FuncName#2 as range 13
  // closed e.Tokens#1 as range 17
  context[22] = refalrts::tvar_left( context[21], context[2], context[3] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 7
  //DEBUG: t.OpenPos#2: 11
  //DEBUG: e.FuncName#2: 13
  //DEBUG: e.Tokens#1: 17
  //DEBUG: t.ErrorList#3: 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </23 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$9=2/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Collected#1/7 AsIs: )/10 AsIs: t.OpenPos#2/11 AsIs: (/15 AsIs: e.FuncName#2/13 AsIs: )/16 HalfReuse: {*}/19 } </24 Tile{ HalfReuse: & TokenChain/20 AsIs: t.ErrorList#3/21 } s.Mode#1/5/25 s.Kind#1/6/26 Tile{ AsIs: e.Tokens#1/17 } >/27 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[25], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[26], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoTokenChain_B1S9A2.ref.function );
  refalrts::reinit_unwrapped_closure( context[19], context[0] );
  refalrts::reinit_name( context[20], ref_TokenChain.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[23] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[20], context[22] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[0], context[19] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  refalrts::use( res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S9A1("DoTokenChain:1$9=1", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S9A1);


static refalrts::FnResult func_gen_DoTokenChain_B1S11A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DoTokenChain:1$11=1/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Collected#1/7 )/10 t.ErrorList#3/11 (/15 e.Term#3/13 )/16 e.Tokens#3/2 >/1
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
  // closed e.Collected#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Term#3 as range 13
  // closed e.Tokens#3 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 7
  //DEBUG: t.ErrorList#3: 11
  //DEBUG: e.Term#3: 13
  //DEBUG: e.Tokens#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: t.ErrorList#3/11 AsIs: (/15 } Tile{ AsIs: e.Collected#1/7 } Tile{ AsIs: e.Term#3/13 } Tile{ AsIs: )/16 AsIs: e.Tokens#3/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1("DoTokenChain:1$11=1", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S11A1);


static refalrts::FnResult func_gen_DoTokenChain_B1S11A1B1S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & DoTokenChain:1$11=1:1$2=1/4 t.ErrorList#1/5 t.Pos#2/7 (/11 e.Tokens#3/9 )/12 e.ErrorMessage#4/2 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Tokens#3 as range 9
  // closed e.ErrorMessage#4 as range 2
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#2: 7
  //DEBUG: e.Tokens#3: 9
  //DEBUG: e.ErrorMessage#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 AsIs: t.Pos#2/7 } Tile{ AsIs: e.ErrorMessage#4/2 } Tile{ AsIs: >/1 } Tile{ AsIs: (/11 } Tile{ AsIs: )/12 } Tile{ AsIs: e.Tokens#3/9 } Tile{ ]] }
  refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1B1S2A1("DoTokenChain:1$11=1:1$2=1", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S11A1B1S2A1);


static refalrts::FnResult func_gen_DoTokenChain_B1S11A1B1S2A1B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & DoTokenChain:1$11=1:1$2=1:1/4 s.idx#0/5 >/1
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
    // # Classic
    // </0 & DoTokenChain:1$11=1:1$2=1:1/4 # Classic/5 >/1
    if( ! refalrts::ident_term(  ident_Classic, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: '\''/0 HalfReuse: '&'/4 HalfReuse: '\''/5 HalfReuse: ' '/1 }"is not where-with sign"/6 Tile{ ]] }
    if( ! refalrts::alloc_chars( context[6], context[7], "is not where-with sign", 22 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_char( context[0], '\'' );
    refalrts::reinit_char( context[4], '&' );
    refalrts::reinit_char( context[5], '\'' );
    refalrts::reinit_char( context[1], ' ' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Extended
  // </0 & DoTokenChain:1$11=1:1$2=1:1/4 # Extended/5 >/1
  if( ! refalrts::ident_term(  ident_Extended, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: 'E'/0 HalfReuse: 'x'/4 HalfReuse: 'p'/5 HalfReuse: 'e'/1 }"cted function name after \'&\'"/6 Tile{ ]] }
  if( ! refalrts::alloc_chars( context[6], context[7], "cted function name after \'&\'", 28 ) )
    return refalrts::cNoMemory;
  refalrts::reinit_char( context[0], 'E' );
  refalrts::reinit_char( context[4], 'x' );
  refalrts::reinit_char( context[5], 'p' );
  refalrts::reinit_char( context[1], 'e' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1B1S2A1B1("DoTokenChain:1$11=1:1$2=1:1", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S11A1B1S2A1B1);


static refalrts::FnResult func_gen_DoTokenChain_B1S11A1B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: t.$ t.$ s.$ e.$
  //GLOBAL GEN: t.$ t.$ s.$ e.$
  // </0 & DoTokenChain:1$11=1:1/4 t.idx#0/5 t.idxV#0/7 s.idxVV#0/9 e.idxVVV#0/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVV#0 as range 2
  do {
    // t.idx t.idx # Extended ( # TkName t.idx e.idx ) e.idx
    // </0 & DoTokenChain:1$11=1:1/4 t.ErrorList#1/5 t.Pos#2/7 # Extended/9 (/14 # TkName/16 t.Pos#3/17 e.Name#3/12 )/15 e.Tokens#3/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::ident_term(  ident_Extended, context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[10], context[11] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    context[16] = refalrts::ident_left(  ident_TkName, context[12], context[13] );
    if( ! context[16] )
      continue;
    // closed e.Tokens#3 as range 10
    context[18] = refalrts::tvar_left( context[17], context[12], context[13] );
    if( ! context[18] )
      continue;
    // closed e.Name#3 as range 12
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#2: 7
    //DEBUG: e.Tokens#3: 10
    //DEBUG: t.Pos#3: 17
    //DEBUG: e.Name#3: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoTokenChain:1$11=1:1/4 {REMOVED TILE} t.Pos#2/7 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ HalfReuse: (/9 AsIs: (/14 AsIs: # TkName/16 AsIs: t.Pos#3/17 AsIs: e.Name#3/12 AsIs: )/15 } Tile{ HalfReuse: )/1 } Tile{ AsIs: e.Tokens#3/10 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[9], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx t.idx s.idx e.idx
  // </0 & DoTokenChain:1$11=1:1/4 t.ErrorList#1/5 t.Pos#2/7 s.Mode#3/9 e.Tokens#3/10 >/1
  context[10] = context[2];
  context[11] = context[3];
  // closed e.Tokens#3 as range 10
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#2: 7
  //DEBUG: s.Mode#3: 9
  //DEBUG: e.Tokens#3: 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </12 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$11=1:1$2=1/4 AsIs: t.ErrorList#1/5 AsIs: t.Pos#2/7 } (/13 Tile{ AsIs: e.Tokens#3/10 } )/14 {*}/15 </16 & DoTokenChain:1$11=1:1$2=1:1/17 Tile{ AsIs: s.Mode#3/9 } >/18 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[15], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_gen_DoTokenChain_B1S11A1B1S2A1B1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoTokenChain_B1S11A1B1S2A1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S11A1B1("DoTokenChain:1$11=1:1", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S11A1B1);


static refalrts::FnResult func_gen_DoTokenChain_B1S12A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & DoTokenChain:1$12=3/4 s.Mode#1/5 (/8 e.Collected#1/6 )/9 t.ErrorList#5/10 (/14 e.Body#5/12 )/15 e.Tokens#5/2 >/1
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
  // closed e.Collected#1 as range 6
  context[11] = refalrts::tvar_left( context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = 0;
  context[13] = 0;
  context[14] = refalrts::brackets_left( context[12], context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[14], context[15]);
  // closed e.Body#5 as range 12
  // closed e.Tokens#5 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Collected#1: 6
  //DEBUG: t.ErrorList#5: 10
  //DEBUG: e.Body#5: 12
  //DEBUG: e.Tokens#5: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 HalfReuse: # Result/8 } Tile{ AsIs: t.ErrorList#5/10 AsIs: (/14 } Tile{ AsIs: e.Collected#1/6 } (/16 # Closure/17 Tile{ AsIs: e.Body#5/12 } Tile{ AsIs: )/9 } Tile{ AsIs: )/15 AsIs: e.Tokens#5/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[17], ident_Closure ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
  refalrts::reinit_ident( context[8], ident_Result );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[14], context[15] );
  refalrts::link_brackets( context[16], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[15];
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[10], context[14] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S12A3("DoTokenChain:1$12=3", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S12A3);


static refalrts::FnResult func_gen_DoTokenChain_B1S12A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 25 elems
  refalrts::Iter context[25];
  refalrts::zeros( context, 25 );
  // </0 & DoTokenChain:1$12=2/4 s.Mode#1/5 (/8 e.Collected#1/6 )/9 t.Pos#2/10 (/14 e.Tokens#1/12 )/15 t.ErrorList#4/16 >/1
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
  // closed e.Collected#1 as range 6
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
  //DEBUG: e.Collected#1: 6
  //DEBUG: t.Pos#2: 10
  //DEBUG: e.Tokens#1: 12
  //DEBUG: t.ErrorList#4: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </18 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$12=3/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Collected#1/6 AsIs: )/9 } {*}/19 </20 & Block/21 Tile{ AsIs: t.ErrorList#4/16 } s.Mode#1/5/22 (/23 # TkOpenBlock/24 Tile{ AsIs: t.Pos#2/10 HalfReuse: )/14 AsIs: e.Tokens#1/12 HalfReuse: >/15 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[19], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[21], ref_Block.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[22], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[24], ident_TkOpenBlock ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoTokenChain_B1S12A3.ref.function );
  refalrts::reinit_close_bracket( context[14] );
  refalrts::reinit_close_call( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[23], context[14] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[15] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  refalrts::use( res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1S12A2("DoTokenChain:1$12=2", 708904305U, 1045449332U, func_gen_DoTokenChain_B1S12A2);


static refalrts::FnResult func_gen_DoTokenChain_B1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  //FAST GEN: s.$ s.$ t.$ ( e.$ ) ( e.$ ) t.$
  //GLOBAL GEN: s.$ s.$ t.$ ( e.$ ) ( e.$ ) t.$
  // </0 & DoTokenChain:1/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 (/11 e.idxVVVB#0/9 )/12 (/15 e.idxVVVTB#0/13 )/16 t.idxVVVTT#0/17 >/1
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
  // closed e.idxVVVB#0 as range 9
  // closed e.idxVVVTB#0 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkName t.idx e.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkName/25 t.Pos#2/26 e.Name#2/23 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkName, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Name#2 as range 23
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26
    //DEBUG: e.Name#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkName/25 t.Pos#2/26 {REMOVED TILE} )/18 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/19 HalfReuse: (/12 HalfReuse: # TkIdentifier/15 } Tile{ AsIs: e.Name#2/23 } Tile{ AsIs: )/16 HalfReuse: )/17 } Tile{ AsIs: e.Tokens#1/21 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], ident_TkIdentifier );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[17] );
    refalrts::link_brackets( context[12], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkCompound t.idx e.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkCompound/25 t.Pos#2/26 e.Symbols#2/23 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkCompound, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Symbols#2 as range 23
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26
    //DEBUG: e.Symbols#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TkCompound/25 t.Pos#2/26 {REMOVED TILE} )/18 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/19 HalfReuse: (/12 HalfReuse: # TkIdentifier/15 } Tile{ AsIs: e.Symbols#2/23 } Tile{ AsIs: )/16 HalfReuse: )/17 } Tile{ AsIs: e.Tokens#1/21 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], ident_TkIdentifier );
    refalrts::reinit_close_bracket( context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[17] );
    refalrts::link_brackets( context[12], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkMacroDigit t.idx s.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkMacroDigit/25 t.Pos#2/26 s.Number#2/28 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkMacroDigit, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26
    //DEBUG: s.Number#2: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} # TkMacroDigit/25 t.Pos#2/26 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/19 HalfReuse: (/12 HalfReuse: # TkNumber/15 } Tile{ AsIs: s.Number#2/28 AsIs: )/18 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/21 } Tile{ HalfReuse: >/17 } Tile{ ]] }
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], ident_TkNumber );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[17] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[12], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[28], context[1] );
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkChar t.idx s.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkChar/25 t.Pos#2/26 s.Char#2/28 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkChar, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26
    //DEBUG: s.Char#2: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} # TkChar/25 t.Pos#2/26 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/19 HalfReuse: (/12 HalfReuse: # TkChar/15 } Tile{ AsIs: s.Char#2/28 AsIs: )/18 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/21 } Tile{ HalfReuse: >/17 } Tile{ ]] }
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], ident_TkChar );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[17] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[12], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[28], context[1] );
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkVariable t.idx s.idx e.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkVariable/25 t.Pos#2/26 s.VarType#2/28 e.Index#2/23 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkVariable, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    // closed e.Index#2 as range 23
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26
    //DEBUG: s.VarType#2: 28
    //DEBUG: e.Index#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} )/16 {REMOVED TILE} # TkVariable/25 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/19 HalfReuse: (/12 HalfReuse: # TkVariable/15 } Tile{ AsIs: t.Pos#2/26 AsIs: s.VarType#2/28 AsIs: e.Index#2/23 AsIs: )/18 HalfReuse: )/1 } Tile{ AsIs: e.Tokens#1/21 } Tile{ HalfReuse: >/17 } Tile{ ]] }
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], ident_TkVariable );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_call( context[17] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[12], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[26], context[1] );
    refalrts::splice_to_freelist_open( context[15], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkOpenBracket t.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkOpenBracket/25 t.Pos#2/26 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkOpenBracket, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#2/26 {REMOVED TILE}
    //RESULT: Tile{ [[ } </28 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$6=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/19 AsIs: )/12 HalfReuse: {*}/15 } </29 Tile{ HalfReuse: & TokenChain/16 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ HalfReuse: s.Mode1 #5/17 HalfReuse: s.Kind1 #6/25 } Tile{ AsIs: e.Tokens#1/21 } Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_DoTokenChain_B1S6A1.ref.function );
    refalrts::reinit_unwrapped_closure( context[15], context[0] );
    refalrts::reinit_name( context[16], ref_TokenChain.ref.function );
    refalrts::reinit_svar( context[17], context[5] );
    refalrts::reinit_svar( context[25], context[6] );
    refalrts::reinit_close_call( context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[29] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[17], context[25] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    refalrts::wrap_closure( context[15] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkOpenCall t.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkOpenCall/25 t.Pos#2/26 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkOpenCall, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </28 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$7=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/19 AsIs: )/12 } Tile{ AsIs: t.Pos#2/26 } Tile{ AsIs: (/15 AsIs: e.Tokens#1/21 AsIs: )/16 HalfReuse: {*}/17 HalfReuse: </25 } & ClassicError/29 Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/30 t.Pos#2/26/31"Identifier expected after \'<\'"/33 Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ref_ClassicError.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[30], context[5]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[31], context[32], context[26], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[33], context[34], "Identifier expected after \'<\'", 29 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_DoTokenChain_B1S7A1.ref.function );
    refalrts::reinit_unwrapped_closure( context[17], context[0] );
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_close_call( context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[30], context[34] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[15], context[25] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    refalrts::use( res );
    refalrts::wrap_closure( context[17] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkOpenCall t.idx e.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkOpenCall/25 t.Pos#2/26 e.FuncName#2/23 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkOpenCall, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.FuncName#2 as range 23
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26
    //DEBUG: e.FuncName#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain-AfterCall/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/19 AsIs: )/12 } t.Pos#2/26/28 Tile{ HalfReuse: (/16 AsIs: (/17 Reuse: # TkName/25 AsIs: t.Pos#2/26 AsIs: e.FuncName#2/23 AsIs: )/18 HalfReuse: )/1 } </30 & TokenChain/31 Tile{ AsIs: t.ErrorList#1/7 } Tile{ HalfReuse: s.Mode1 #5/15 } s.Kind#1/6/32 Tile{ AsIs: e.Tokens#1/21 } >/33 >/34 Tile{ ]] }
    if (! refalrts::copy_evar(context[28], context[29], context[26], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], ref_TokenChain.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[32], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoTokenChainm_AfterCall.ref.function );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::update_ident( context[25], ident_TkName );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_svar( context[15], context[5] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkOpenADT t.idx e.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkOpenADT/25 t.OpenPos#2/26 e.FuncName#2/23 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkOpenADT, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.FuncName#2 as range 23
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.OpenPos#2: 26
    //DEBUG: e.FuncName#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </28 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$9=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } (/29 Tile{ AsIs: e.Collected#1/19 } )/30 t.OpenPos#2/26/31 (/33 Tile{ AsIs: e.FuncName#2/23 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.Tokens#1/21 AsIs: )/16 HalfReuse: {*}/17 HalfReuse: </25 } & ClassicError/34 Tile{ AsIs: t.ErrorList#1/7 HalfReuse: s.Mode1 #5/11 } Tile{ AsIs: t.OpenPos#2/26 }"Abstract data types is an extension"/35 Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[31], context[32], context[26], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[34], ref_ClassicError.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[35], context[36], "Abstract data types is an extension", 35 ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_DoTokenChain_B1S9A1.ref.function );
    refalrts::reinit_unwrapped_closure( context[17], context[0] );
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_close_call( context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[25] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[33], context[12] );
    refalrts::link_brackets( context[29], context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[7], context[11] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[12], context[25] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[30], context[33] );
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    refalrts::use( res );
    refalrts::wrap_closure( context[17] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkRefal5Mode t.idx s.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkRefal5Mode/25 t.Pos#2/26 s.NewMode#2/28 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkRefal5Mode, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::svar_left( context[28], context[23], context[24] ) )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26
    //DEBUG: s.NewMode#2: 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} (/15 {REMOVED TILE} )/16 (/17 # TkRefal5Mode/25 t.Pos#2/26 {REMOVED TILE} )/18 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 } Tile{ AsIs: s.NewMode#2/28 } Tile{ AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/19 AsIs: )/12 } Tile{ AsIs: e.Tokens#1/21 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[6], context[12] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkAmpersand t.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkAmpersand/25 t.Pos#2/26 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkAmpersand, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </28 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1$11=1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/11 AsIs: e.Collected#1/19 AsIs: )/12 HalfReuse: {*}/15 } Tile{ HalfReuse: </16 HalfReuse: [*]/17 HalfReuse: & DoTokenChain:1$11=1:1/25 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: t.Pos#2/26 } {*}/29 s.Mode#1/5/30 Tile{ AsIs: e.Tokens#1/21 } Tile{ HalfReuse: >/18 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[29], context[17] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[30], context[5]))
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_DoTokenChain_B1S11A1.ref.function );
    refalrts::reinit_unwrapped_closure( context[15], context[0] );
    refalrts::reinit_open_call( context[16] );
    refalrts::reinit_closure_head( context[17] );
    refalrts::reinit_name( context[25], ref_gen_DoTokenChain_B1S11A1B1.ref.function );
    refalrts::reinit_close_call( context[18] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[18];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[16], context[25] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[0], context[6] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    refalrts::use( res );
    refalrts::wrap_closure( context[15] );
    refalrts::wrap_closure( context[29] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkOpenBlock t.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkOpenBlock/25 t.Pos#2/26 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkOpenBlock, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26
    //5: s.Mode#1
    //6: s.Kind#1
    //7: t.ErrorList#1
    //19: e.Collected#1
    //21: e.Tokens#1
    //26: t.Pos#2
    //31: s.Kind#1

    refalrts::reset_allocator();
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[30], ref_gen_DoTokenChain_B1S12C1.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[31], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[28] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_stvar( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[28] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function();
    do {
      // </28 & DoTokenChain:1$12?1/32 # Result/33 >/29
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::call_left( context[30], context[31], context[28], context[29] );
      context[33] = refalrts::ident_left(  ident_Result, context[30], context[31] );
      if( ! context[33] )
        continue;
      if( ! refalrts::empty_seq( context[30], context[31] ) )
        continue;
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Collected#1: 19
      //DEBUG: e.Tokens#1: 21
      //DEBUG: t.Pos#2: 26

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & DoTokenChain:1$12=2/34 s.Mode#1/5/35 Tile{ AsIs: (/11 AsIs: e.Collected#1/19 AsIs: )/12 } Tile{ AsIs: t.Pos#2/26 } Tile{ AsIs: (/15 AsIs: e.Tokens#1/21 AsIs: )/16 HalfReuse: {*}/17 HalfReuse: </25 } & ClassicError/36 Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: s.Mode#1/5 } t.Pos#2/26/37"Do you forged \':\' before bl"/39 Tile{ HalfReuse: 'o'/18 HalfReuse: 'c'/28 HalfReuse: 'k'/32 HalfReuse: '?'/33 AsIs: >/29 AsIs: >/1 ]] }
      if( ! refalrts::alloc_name( context[34], ref_gen_DoTokenChain_B1S12A2.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_stvar(context[35], context[5]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[36], ref_ClassicError.ref.function ) )
        return refalrts::cNoMemory;
      if (! refalrts::copy_evar(context[37], context[38], context[26], context[27]))
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[39], context[40], "Do you forged \':\' before bl", 27 ) )
        return refalrts::cNoMemory;
      refalrts::reinit_closure_head( context[4] );
      refalrts::reinit_unwrapped_closure( context[17], context[4] );
      refalrts::reinit_open_call( context[25] );
      refalrts::reinit_char( context[18], 'o' );
      refalrts::reinit_char( context[28], 'c' );
      refalrts::reinit_char( context[32], 'k' );
      refalrts::reinit_char( context[33], '?' );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[0] );
      refalrts::push_stack( context[29] );
      refalrts::push_stack( context[25] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[18];
      res = refalrts::splice_evar( res, context[37], context[40] );
      res = refalrts::splice_evar( res, context[5], context[5] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[36], context[36] );
      res = refalrts::splice_evar( res, context[15], context[25] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[34], context[35] );
      refalrts::splice_to_freelist_open( context[4], res );
      refalrts::wrap_closure( context[17] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    refalrts::splice_to_freelist(context[28], context[29]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkRedefinition t.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkRedefinition/25 t.Pos#2/26 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkRedefinition, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ HalfReuse: </15 } & DoTokenChain-AddRedefinition/28 s.Kind#1/6/29 </30 & ClassicError/31 Tile{ AsIs: t.ErrorList#1/7 } Tile{ HalfReuse: s.Mode1 #5/25 AsIs: t.Pos#2/26 HalfReuse: 'V'/18 } Tile{ HalfReuse: 'a'/16 HalfReuse: 'r'/17 }"iable redefinition is available in extended mode"/32 >/34 Tile{ AsIs: (/11 AsIs: e.Collected#1/19 AsIs: )/12 } t.Pos#2/26/35 >/37 Tile{ AsIs: e.Tokens#1/21 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[28], ref_DoTokenChainm_AddRedefinition.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[29], context[6]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], ref_ClassicError.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[32], context[33], "iable redefinition is available in extended mode", 48 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[34] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[35], context[36], context[26], context[27]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::reinit_open_call( context[15] );
    refalrts::reinit_svar( context[25], context[5] );
    refalrts::reinit_char( context[18], 'V' );
    refalrts::reinit_char( context[16], 'a' );
    refalrts::reinit_char( context[17], 'r' );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[37] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[34] );
    refalrts::push_stack( context[30] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[32], context[34] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[25], context[18] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[28], context[31] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkScopeId t.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkScopeId/25 t.Pos#2/26 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkScopeId, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    if( ! refalrts::empty_seq( context[23], context[24] ) )
      continue;
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } </28 & ClassicError/29 Tile{ AsIs: t.ErrorList#1/7 } s.Mode#1/5/30 Tile{ AsIs: t.Pos#2/26 HalfReuse: '$'/18 }"SCOPEID is not supported in classic REFAL-5"/31 >/33 Tile{ AsIs: (/11 AsIs: e.Collected#1/19 HalfReuse: (/12 HalfReuse: # TkNumber/15 } # Cookie1/34 Tile{ AsIs: )/16 AsIs: (/17 Reuse: # TkNumber/25 } # Cookie2/35 )/36 )/37 Tile{ AsIs: e.Tokens#1/21 } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[29], ref_ClassicError.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[30], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[31], context[32], "SCOPEID is not supported in classic REFAL-5", 43 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[33] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[34], ident_Cookie1 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[35], ident_Cookie2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[36] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::reinit_char( context[18], '$' );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[15], ident_TkNumber );
    refalrts::update_ident( context[25], ident_TkNumber );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[37] );
    refalrts::link_brackets( context[17], context[36] );
    refalrts::link_brackets( context[12], context[16] );
    refalrts::push_stack( context[33] );
    refalrts::push_stack( context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[35], context[37] );
    res = refalrts::splice_evar( res, context[16], context[25] );
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[31], context[33] );
    res = refalrts::splice_evar( res, context[26], context[18] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx s.idx t.idx ( e.idx ) ( e.idx ) ( # TkError t.idx e.idx )
    // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 (/17 # TkError/25 t.Pos#2/26 e.Message#2/23 )/18 >/1
    context[19] = context[9];
    context[20] = context[10];
    context[21] = context[13];
    context[22] = context[14];
    context[23] = 0;
    context[24] = 0;
    if( ! refalrts::brackets_term( context[23], context[24], context[17] ) )
      continue;
    context[25] = refalrts::ident_left(  ident_TkError, context[23], context[24] );
    if( ! context[25] )
      continue;
    // closed e.Collected#1 as range 19
    // closed e.Tokens#1 as range 21
    context[27] = refalrts::tvar_left( context[26], context[23], context[24] );
    if( ! context[27] )
      continue;
    // closed e.Message#2 as range 23
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Collected#1: 19
    //DEBUG: e.Tokens#1: 21
    //DEBUG: t.Pos#2: 26
    //DEBUG: e.Message#2: 23

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ HalfReuse: </16 } Tile{ HalfReuse: & UnexpectedToken/15 } Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: (/17 AsIs: # TkError/25 AsIs: t.Pos#2/26 AsIs: e.Message#2/23 AsIs: )/18 AsIs: >/1 } Tile{ AsIs: (/11 AsIs: e.Collected#1/19 AsIs: )/12 } Tile{ AsIs: e.Tokens#1/21 } >/28 Tile{ ]] }
    if( ! refalrts::alloc_close_call( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::reinit_open_call( context[16] );
    refalrts::reinit_name( context[15], ref_UnexpectedToken.ref.function );
    refalrts::push_stack( context[28] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[17], context[1] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx t.idx ( e.idx ) ( e.idx ) t.idx
  // </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/19 )/12 (/15 e.Tokens#1/21 )/16 t.OtherToken#2/17 >/1
  context[19] = context[9];
  context[20] = context[10];
  context[21] = context[13];
  context[22] = context[14];
  // closed e.Collected#1 as range 19
  // closed e.Tokens#1 as range 21
  //DEBUG: t.ErrorList#1: 7
  //DEBUG: t.OtherToken#2: 17
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Collected#1: 19
  //DEBUG: e.Tokens#1: 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & DoTokenChain:1/4 s.Mode#1/5 s.Kind#1/6 {REMOVED TILE} (/15 {REMOVED TILE} )/16 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/19 AsIs: )/12 } Tile{ AsIs: t.OtherToken#2/17 } Tile{ AsIs: e.Tokens#1/21 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChain_B1("DoTokenChain:1", 708904305U, 1045449332U, func_gen_DoTokenChain_B1);


static refalrts::FnResult func_DoTokenChain(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & DoTokenChain/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/11 e.Collected#1/9 )/12 t.NextToken#1/13 e.Tokens#1/2 >/1
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
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.Collected#1 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tokens#1 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: t.ErrorList#1: 7
  //DEBUG: e.Collected#1: 9
  //DEBUG: t.NextToken#1: 13
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </15 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain:1/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: t.ErrorList#1/7 AsIs: (/11 AsIs: e.Collected#1/9 AsIs: )/12 } (/16 Tile{ AsIs: e.Tokens#1/2 } )/17 {*}/18 Tile{ AsIs: t.NextToken#1/13 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[18], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoTokenChain_B1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoTokenChain("DoTokenChain", 708904305U, 1045449332U, func_DoTokenChain);


static refalrts::FnResult func_gen_DoTokenChainm_AfterCall_S4A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & DoTokenChain-AfterCall$4=2/4 s.Mode#1/5 (/8 e.Collected#1/6 )/9 (/12 e.OptionalFuncName#1/10 )/13 (/16 e.BracketTerms#1/14 )/17 s.Type#1/18 t.Pos#1/19 (/23 e.Value#1/21 )/24 (/27 e.Tokens#1/25 )/28 t.ErrorList#3/29 >/1
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
  // closed e.Collected#1 as range 6
  // closed e.OptionalFuncName#1 as range 10
  // closed e.BracketTerms#1 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Value#1 as range 21
  // closed e.Tokens#1 as range 25
  context[30] = refalrts::tvar_left( context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Collected#1: 6
  //DEBUG: e.OptionalFuncName#1: 10
  //DEBUG: e.BracketTerms#1: 14
  //DEBUG: s.Type#1: 18
  //DEBUG: t.Pos#1: 19
  //DEBUG: e.Value#1: 21
  //DEBUG: e.Tokens#1: 25
  //DEBUG: t.ErrorList#3: 29

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} )/9 (/12 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 HalfReuse: # Pattern/8 } Tile{ AsIs: t.ErrorList#3/29 } Tile{ AsIs: (/16 } Tile{ AsIs: e.Collected#1/6 } Tile{ AsIs: (/23 } Tile{ HalfReuse: # Brackets/13 } Tile{ AsIs: e.OptionalFuncName#1/10 } Tile{ AsIs: e.BracketTerms#1/14 } Tile{ AsIs: )/24 HalfReuse: )/27 } Tile{ HalfReuse: (/17 AsIs: s.Type#1/18 AsIs: t.Pos#1/19 } Tile{ AsIs: e.Value#1/21 } Tile{ AsIs: )/28 } Tile{ AsIs: e.Tokens#1/25 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
  refalrts::reinit_ident( context[8], ident_Pattern );
  refalrts::reinit_ident( context[13], ident_Brackets );
  refalrts::reinit_close_bracket( context[27] );
  refalrts::reinit_open_bracket( context[17] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[17], context[28] );
  refalrts::link_brackets( context[16], context[27] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  refalrts::splice_to_freelist_open( context[8], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChainm_AfterCall_S4A2("DoTokenChain-AfterCall$4=2", 708904305U, 1045449332U, func_gen_DoTokenChainm_AfterCall_S4A2);


static refalrts::FnResult func_gen_DoTokenChainm_AfterCall_S4A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & DoTokenChain-AfterCall$4=1/4 s.Mode#1/5 (/8 e.Collected#1/6 )/9 (/12 e.OptionalFuncName#1/10 )/13 (/16 e.BracketTerms#1/14 )/17 s.Type#1/18 t.Pos#1/19 (/23 e.Value#1/21 )/24 (/27 e.Tokens#1/25 )/28 t.ErrorList#2/29 >/1
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
  // closed e.Collected#1 as range 6
  // closed e.OptionalFuncName#1 as range 10
  // closed e.BracketTerms#1 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Value#1 as range 21
  // closed e.Tokens#1 as range 25
  context[30] = refalrts::tvar_left( context[29], context[2], context[3] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5
  //DEBUG: e.Collected#1: 6
  //DEBUG: e.OptionalFuncName#1: 10
  //DEBUG: e.BracketTerms#1: 14
  //DEBUG: s.Type#1: 18
  //DEBUG: t.Pos#1: 19
  //DEBUG: e.Value#1: 21
  //DEBUG: e.Tokens#1: 25
  //DEBUG: t.ErrorList#2: 29

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & DoTokenChain-AfterCall$4=2/4 AsIs: s.Mode#1/5 AsIs: (/8 AsIs: e.Collected#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.OptionalFuncName#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.BracketTerms#1/14 AsIs: )/17 AsIs: s.Type#1/18 AsIs: t.Pos#1/19 AsIs: (/23 AsIs: e.Value#1/21 AsIs: )/24 AsIs: (/27 AsIs: e.Tokens#1/25 AsIs: )/28 } {*}/32 </33 & EL-AddErrorAt/34 Tile{ AsIs: t.ErrorList#2/29 } t.Pos#1/19/35"Missed \'>\'"/37 >/39 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[32], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[34], ref_ELm_AddErrorAt.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[35], context[36], context[19], context[20]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[37], context[38], "Missed \'>\'", 10 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[39] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_DoTokenChainm_AfterCall_S4A2.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[33] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[35], context[39] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[32], context[34] );
  res = refalrts::splice_evar( res, context[0], context[28] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  refalrts::wrap_closure( context[32] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_DoTokenChainm_AfterCall_S4A1("DoTokenChain-AfterCall$4=1", 708904305U, 1045449332U, func_gen_DoTokenChainm_AfterCall_S4A1);


static refalrts::FnResult func_DoTokenChainm_AfterCall(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  //FAST GEN: s.$ s.$ ( e.$ ) t.$ ( e.$ ) t.$ ( e.$ ) ( e.$ ) e.$
  //GLOBAL GEN: s.$ s.$ ( e.$ ) t.$ ( e.$ ) t.$ ( e.$ ) ( s.$ t.$ e.$ ) e.$
  // </0 & DoTokenChain-AfterCall/4 s.idx#0/5 s.idxV#0/6 (/9 e.idxVVB#0/7 )/10 t.idxVVT#0/11 (/15 e.idxVVTVB#0/13 )/16 t.idxVVTVT#0/17 (/21 e.idxVVTVTVB#0/19 )/22 (/25 s.idxVVTVTVTB#0/27 t.idxVVTVTVTBV#0/28 e.idxVVTVTVTBVV#0/23 )/26 e.idxVVTVTVTT#0/2 >/1
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
  // closed e.idxVVTVB#0 as range 13
  context[18] = refalrts::tvar_left( context[17], context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
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
  // closed e.idxVVTVTVB#0 as range 19
  // closed e.idxVVTVTVTT#0 as range 2
  if( ! refalrts::svar_left( context[27], context[23], context[24] ) )
    return refalrts::cRecognitionImpossible;
  context[29] = refalrts::tvar_left( context[28], context[23], context[24] );
  if( ! context[29] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVTVTVTBVV#0 as range 23
  do {
    // s.idx # Result ( e.idx ) t.idx ( e.idx ) t.idx ( e.idx ) ( # TkCloseCall t.idx ) e.idx
    // </0 & DoTokenChain-AfterCall/4 s.Mode#1/5 # Result/6 (/9 e.Collected#1/30 )/10 t.CallPos#1/11 (/15 e.OptionalFuncName#1/32 )/16 t.ErrorList#1/17 (/21 e.BracketTerms#1/34 )/22 (/25 # TkCloseCall/27 t.Pos#1/28 )/26 e.Tokens#1/38 >/1
    context[30] = context[7];
    context[31] = context[8];
    context[32] = context[13];
    context[33] = context[14];
    context[34] = context[19];
    context[35] = context[20];
    context[36] = context[23];
    context[37] = context[24];
    context[38] = context[2];
    context[39] = context[3];
    if( ! refalrts::ident_term(  ident_Result, context[6] ) )
      continue;
    if( ! refalrts::ident_term(  ident_TkCloseCall, context[27] ) )
      continue;
    if( ! refalrts::empty_seq( context[36], context[37] ) )
      continue;
    // closed e.Collected#1 as range 30
    // closed e.OptionalFuncName#1 as range 32
    // closed e.BracketTerms#1 as range 34
    // closed e.Tokens#1 as range 38
    //DEBUG: t.CallPos#1: 11
    //DEBUG: t.ErrorList#1: 17
    //DEBUG: t.Pos#1: 28
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Collected#1: 30
    //DEBUG: e.OptionalFuncName#1: 32
    //DEBUG: e.BracketTerms#1: 34
    //DEBUG: e.Tokens#1: 38

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} t.CallPos#1/11 (/15 {REMOVED TILE} )/16 {REMOVED TILE} (/21 {REMOVED TILE} {REMOVED TILE} (/25 {REMOVED TILE} t.Pos#1/28 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: # Result/6 } Tile{ AsIs: t.ErrorList#1/17 } Tile{ AsIs: (/9 AsIs: e.Collected#1/30 HalfReuse: (/10 } Tile{ Reuse: # CallBrackets/27 } Tile{ AsIs: e.OptionalFuncName#1/32 } Tile{ AsIs: e.BracketTerms#1/34 } Tile{ AsIs: )/22 } Tile{ AsIs: )/26 AsIs: e.Tokens#1/38 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::reinit_open_bracket( context[10] );
    refalrts::update_ident( context[27], ident_CallBrackets );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[9], context[26] );
    refalrts::link_brackets( context[10], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[27], context[27] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx # Pattern ( e.idx ) t.idx ( e.idx ) t.idx ( e.idx ) ( # TkCloseCall t.idx ) e.idx
    // </0 & DoTokenChain-AfterCall/4 s.Mode#1/5 # Pattern/6 (/9 e.Collected#1/30 )/10 t.CallPos#1/11 (/15 e.OptionalFuncName#1/32 )/16 t.ErrorList#1/17 (/21 e.BracketTerms#1/34 )/22 (/25 # TkCloseCall/27 t.Pos#1/28 )/26 e.Tokens#1/38 >/1
    context[30] = context[7];
    context[31] = context[8];
    context[32] = context[13];
    context[33] = context[14];
    context[34] = context[19];
    context[35] = context[20];
    context[36] = context[23];
    context[37] = context[24];
    context[38] = context[2];
    context[39] = context[3];
    if( ! refalrts::ident_term(  ident_Pattern, context[6] ) )
      continue;
    if( ! refalrts::ident_term(  ident_TkCloseCall, context[27] ) )
      continue;
    if( ! refalrts::empty_seq( context[36], context[37] ) )
      continue;
    // closed e.Collected#1 as range 30
    // closed e.OptionalFuncName#1 as range 32
    // closed e.BracketTerms#1 as range 34
    // closed e.Tokens#1 as range 38
    //DEBUG: t.CallPos#1: 11
    //DEBUG: t.ErrorList#1: 17
    //DEBUG: t.Pos#1: 28
    //DEBUG: s.Mode#1: 5
    //DEBUG: e.Collected#1: 30
    //DEBUG: e.OptionalFuncName#1: 32
    //DEBUG: e.BracketTerms#1: 34
    //DEBUG: e.Tokens#1: 38

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Pos#1/28 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: # Pattern/6 HalfReuse: </9 } Tile{ HalfReuse: & EL-AddErrorAt/16 AsIs: t.ErrorList#1/17 } Tile{ AsIs: t.CallPos#1/11 HalfReuse: 'u'/15 }"ne"/40 Tile{ HalfReuse: 'x'/10 }"pected \'<\' in pattern expression, maybe missed \'=\'"/42 >/44 Tile{ AsIs: (/21 } Tile{ AsIs: e.Collected#1/30 } Tile{ AsIs: (/25 Reuse: # Brackets/27 } Tile{ AsIs: e.OptionalFuncName#1/32 } Tile{ AsIs: e.BracketTerms#1/34 } Tile{ AsIs: )/22 } Tile{ AsIs: )/26 AsIs: e.Tokens#1/38 AsIs: >/1 ]] }
    if( ! refalrts::alloc_chars( context[40], context[41], "ne", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[42], context[43], "pected \'<\' in pattern expression, maybe missed \'=\'", 50 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[44] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[16], ref_ELm_AddErrorAt.ref.function );
    refalrts::reinit_char( context[15], 'u' );
    refalrts::reinit_char( context[10], 'x' );
    refalrts::update_ident( context[27], ident_Brackets );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[21], context[26] );
    refalrts::link_brackets( context[25], context[22] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[26];
    res = refalrts::splice_evar( res, context[22], context[22] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[42], context[44] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx # Result ( e.idx ) t.idx ( e.idx ) t.idx ( e.idx ) ( s.idx t.idx e.idx ) e.idx
    // </0 & DoTokenChain-AfterCall/4 s.Mode#1/5 # Result/6 (/9 e.Collected#1/30 )/10 t.CallPos#1/11 (/15 e.OptionalFuncName#1/32 )/16 t.ErrorList#1/17 (/21 e.BracketTerms#1/34 )/22 (/25 s.Type#1/27 t.Pos#1/28 e.Value#1/36 )/26 e.Tokens#1/38 >/1
    context[30] = context[7];
    context[31] = context[8];
    context[32] = context[13];
    context[33] = context[14];
    context[34] = context[19];
    context[35] = context[20];
    context[36] = context[23];
    context[37] = context[24];
    context[38] = context[2];
    context[39] = context[3];
    if( ! refalrts::ident_term(  ident_Result, context[6] ) )
      continue;
    // closed e.Collected#1 as range 30
    // closed e.OptionalFuncName#1 as range 32
    // closed e.BracketTerms#1 as range 34
    // closed e.Value#1 as range 36
    // closed e.Tokens#1 as range 38
    //DEBUG: t.CallPos#1: 11
    //DEBUG: t.ErrorList#1: 17
    //DEBUG: t.Pos#1: 28
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Type#1: 27
    //DEBUG: e.Collected#1: 30
    //DEBUG: e.OptionalFuncName#1: 32
    //DEBUG: e.BracketTerms#1: 34
    //DEBUG: e.Value#1: 36
    //DEBUG: e.Tokens#1: 38

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.CallPos#1/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & DoTokenChain/4 AsIs: s.Mode#1/5 AsIs: # Result/6 HalfReuse: </9 } Tile{ HalfReuse: & EL-AddErrorAt/16 AsIs: t.ErrorList#1/17 } t.Pos#1/28/40"Missed \'>\'"/42 >/44 Tile{ AsIs: (/21 } Tile{ AsIs: e.Collected#1/30 } Tile{ AsIs: (/15 } # CallBrackets/45 Tile{ AsIs: e.OptionalFuncName#1/32 } Tile{ AsIs: e.BracketTerms#1/34 } Tile{ AsIs: )/10 } Tile{ AsIs: )/22 AsIs: (/25 AsIs: s.Type#1/27 AsIs: t.Pos#1/28 AsIs: e.Value#1/36 AsIs: )/26 AsIs: e.Tokens#1/38 AsIs: >/1 ]] }
    if (! refalrts::copy_evar(context[40], context[41], context[28], context[29]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[42], context[43], "Missed \'>\'", 10 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[44] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[45], ident_CallBrackets ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_DoTokenChain.ref.function );
    refalrts::reinit_open_call( context[9] );
    refalrts::reinit_name( context[16], ref_ELm_AddErrorAt.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::link_brackets( context[15], context[10] );
    refalrts::push_stack( context[44] );
    refalrts::push_stack( context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[22];
    res = refalrts::splice_evar( res, context[10], context[10] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[45], context[45] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[40], context[44] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    refalrts::splice_to_freelist_open( context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx # Pattern ( e.idx ) t.idx ( e.idx ) t.idx ( e.idx ) ( s.idx t.idx e.idx ) e.idx
  // </0 & DoTokenChain-AfterCall/4 s.Mode#1/5 # Pattern/6 (/9 e.Collected#1/30 )/10 t.CallPos#1/11 (/15 e.OptionalFuncName#1/32 )/16 t.ErrorList#1/17 (/21 e.BracketTerms#1/34 )/22 (/25 s.Type#1/27 t.Pos#1/28 e.Value#1/36 )/26 e.Tokens#1/38 >/1
  context[30] = context[7];
  context[31] = context[8];
  context[32] = context[13];
  context[33] = context[14];
  context[34] = context[19];
  context[35] = context[20];
  context[36] = context[23];
  context[37] = context[24];
  context[38] = context[2];
  context[39] = context[3];
  if( ! refalrts::ident_term(  ident_Pattern, context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Collected#1 as range 30
  // closed e.OptionalFuncName#1 as range 32
  // closed e.BracketTerms#1 as range 34
  // closed e.Value#1 as range 36
  // closed e.Tokens#1 as range 38
  //DEBUG: t.CallPos#1: 11
  //DEBUG: t.ErrorList#1: 17
  //DEBUG: t.Pos#1: 28
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Type#1: 27
  //DEBUG: e.Collected#1: 30
  //DEBUG: e.OptionalFuncName#1: 32
  //DEBUG: e.BracketTerms#1: 34
  //DEBUG: e.Value#1: 36
  //DEBUG: e.Tokens#1: 38

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Mode#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#1/27 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } & DoTokenChain-AfterCall$4=1/40 Tile{ HalfReuse: s.Mode1 #5/6 AsIs: (/9 AsIs: e.Collected#1/30 AsIs: )/10 } Tile{ AsIs: (/15 AsIs: e.OptionalFuncName#1/32 AsIs: )/16 } Tile{ AsIs: (/21 AsIs: e.BracketTerms#1/34 AsIs: )/22 HalfReuse: s.Type1 #27/25 } Tile{ AsIs: t.Pos#1/28 } (/41 Tile{ AsIs: e.Value#1/36 } Tile{ AsIs: )/26 } (/42 Tile{ AsIs: e.Tokens#1/38 } )/43 {*}/44 </45 & EL-AddErrorAt/46 Tile{ AsIs: t.ErrorList#1/17 } Tile{ AsIs: t.CallPos#1/11 }"unexpected \'<\' in pattern expression, maybe missed \'=\'"/47 >/49 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_name( context[40], ref_gen_DoTokenChainm_AfterCall_S4A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[44], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[45] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[46], ref_ELm_AddErrorAt.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[47], context[48], "unexpected \'<\' in pattern expression, maybe missed \'=\'", 54 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[49] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_svar( context[6], context[5] );
  refalrts::reinit_svar( context[25], context[27] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[49] );
  refalrts::push_stack( context[45] );
  refalrts::link_brackets( context[42], context[43] );
  refalrts::link_brackets( context[41], context[26] );
  refalrts::link_brackets( context[21], context[22] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[47], context[49] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[43], context[46] );
  res = refalrts::splice_evar( res, context[38], context[39] );
  res = refalrts::splice_evar( res, context[42], context[42] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[36], context[37] );
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[6], context[10] );
  res = refalrts::splice_evar( res, context[40], context[40] );
  refalrts::splice_to_freelist_open( context[4], res );
  refalrts::wrap_closure( context[44] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoTokenChainm_AfterCall("DoTokenChain-AfterCall", 708904305U, 1045449332U, func_DoTokenChainm_AfterCall);


static refalrts::FnResult func_DoTokenChainm_AddRedefinition(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: s.$ t.$ ( e.$ ) t.$
  //GLOBAL GEN: s.$ t.$ ( e.$ ) t.$
  // </0 & DoTokenChain-AddRedefinition/4 s.idx#0/5 t.idxV#0/6 (/10 e.idxVVB#0/8 )/11 t.idxVVT#0/12 >/1
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
  context[13] = refalrts::tvar_left( context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // # Pattern t.idx ( e.idx ( # TkVariable t.idx s.idx e.idx ) ) t.idx
    // </0 & DoTokenChain-AddRedefinition/4 # Pattern/5 t.ErrorList#1/6 (/10 e.Collected#1/14 (/18 # TkVariable/20 t.VarPos#1/21 s.VarType#1/23 e.Index#1/16 )/19 )/11 t.Pos#1/12 >/1
    context[14] = context[8];
    context[15] = context[9];
    if( ! refalrts::ident_term(  ident_Pattern, context[5] ) )
      continue;
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_right( context[16], context[17], context[14], context[15] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = refalrts::ident_left(  ident_TkVariable, context[16], context[17] );
    if( ! context[20] )
      continue;
    // closed e.Collected#1 as range 14
    context[22] = refalrts::tvar_left( context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    if( ! refalrts::svar_left( context[23], context[16], context[17] ) )
      continue;
    // closed e.Index#1 as range 16
    //DEBUG: t.ErrorList#1: 6
    //DEBUG: t.Pos#1: 12
    //DEBUG: e.Collected#1: 14
    //DEBUG: t.VarPos#1: 21
    //DEBUG: s.VarType#1: 23
    //DEBUG: e.Index#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & DoTokenChain-AddRedefinition/4 # Pattern/5 {REMOVED TILE} t.Pos#1/12 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/6 AsIs: (/10 AsIs: e.Collected#1/14 AsIs: (/18 Reuse: # TkNewVariable/20 AsIs: t.VarPos#1/21 AsIs: s.VarType#1/23 AsIs: e.Index#1/16 AsIs: )/19 AsIs: )/11 } Tile{ ]] }
    refalrts::update_ident( context[20], ident_TkNewVariable );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::link_brackets( context[18], context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[11] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // # Pattern t.idx ( e.idx ) t.idx
    // </0 & DoTokenChain-AddRedefinition/4 # Pattern/5 t.ErrorList#1/6 (/10 e.Collected#1/14 )/11 t.Pos#1/12 >/1
    context[14] = context[8];
    context[15] = context[9];
    if( ! refalrts::ident_term(  ident_Pattern, context[5] ) )
      continue;
    // closed e.Collected#1 as range 14
    //DEBUG: t.ErrorList#1: 6
    //DEBUG: t.Pos#1: 12
    //DEBUG: e.Collected#1: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 } Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: t.Pos#1/12 HalfReuse: 'R'/1 }"ed"/16 Tile{ HalfReuse: 'e'/5 }"finition sign expects variable before"/18 >/20 Tile{ AsIs: (/10 AsIs: e.Collected#1/14 AsIs: )/11 } Tile{ ]] }
    if( ! refalrts::alloc_chars( context[16], context[17], "ed", 2 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[18], context[19], "finition sign expects variable before", 37 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
    refalrts::reinit_char( context[1], 'R' );
    refalrts::reinit_char( context[5], 'e' );
    refalrts::link_brackets( context[10], context[11] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[18], context[20] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Result t.idx ( e.idx ) t.idx
  // </0 & DoTokenChain-AddRedefinition/4 # Result/5 t.ErrorList#1/6 (/10 e.Collected#1/14 )/11 t.Pos#1/12 >/1
  context[14] = context[8];
  context[15] = context[9];
  if( ! refalrts::ident_term(  ident_Result, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Collected#1 as range 14
  //DEBUG: t.ErrorList#1: 6
  //DEBUG: t.Pos#1: 12
  //DEBUG: e.Collected#1: 14

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 } Tile{ AsIs: t.ErrorList#1/6 } Tile{ AsIs: t.Pos#1/12 HalfReuse: 'I'/1 }"ll"/16 Tile{ HalfReuse: 'e'/5 }"gal redefinition sign in result expression"/18 >/20 Tile{ AsIs: (/10 AsIs: e.Collected#1/14 AsIs: )/11 } Tile{ ]] }
  if( ! refalrts::alloc_chars( context[16], context[17], "ll", 2 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[18], context[19], "gal redefinition sign in result expression", 42 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
  refalrts::reinit_char( context[1], 'I' );
  refalrts::reinit_char( context[5], 'e' );
  refalrts::link_brackets( context[10], context[11] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[16], context[17] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DoTokenChainm_AddRedefinition("DoTokenChain-AddRedefinition", 708904305U, 1045449332U, func_DoTokenChainm_AddRedefinition);


static refalrts::FnResult func_gen_Expressionm_CheckBrackets_S1A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & Expression-CheckBrackets$1=3/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Expression#1/7 )/10 t.ErrorList#4/11 (/15 e.Subexpression#4/13 )/16 e.Tokens#4/2 >/1
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
  // closed e.Expression#1 as range 7
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.Subexpression#4 as range 13
  // closed e.Tokens#4 as range 2
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Expression#1: 7
  //DEBUG: t.ErrorList#4: 11
  //DEBUG: e.Subexpression#4: 13
  //DEBUG: e.Tokens#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/9 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Expression-CheckBrackets/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: t.ErrorList#4/11 AsIs: (/15 } Tile{ AsIs: e.Expression#1/7 } Tile{ AsIs: e.Subexpression#4/13 } Tile{ AsIs: )/16 AsIs: e.Tokens#4/2 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Expressionm_CheckBrackets.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1A3("Expression-CheckBrackets$1=3", 708904305U, 1045449332U, func_gen_Expressionm_CheckBrackets_S1A3);


static refalrts::FnResult func_gen_Expressionm_CheckBrackets_S1A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & Expression-CheckBrackets$1=2/4 s.Mode#1/5 s.Kind#1/6 (/9 e.Expression#1/7 )/10 (/13 e.Tokens#1/11 )/14 t.ErrorList#3/15 >/1
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
  // closed e.Expression#1 as range 7
  // closed e.Tokens#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Expression#1: 7
  //DEBUG: e.Tokens#1: 11
  //DEBUG: t.ErrorList#3: 15

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & Expression-CheckBrackets$1=3/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 AsIs: (/9 AsIs: e.Expression#1/7 AsIs: )/10 HalfReuse: {*}/13 } </18 Tile{ HalfReuse: & TokenChain/14 AsIs: t.ErrorList#3/15 } s.Mode#1/5/19 s.Kind#1/6/20 Tile{ AsIs: e.Tokens#1/11 } >/21 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[19], context[5]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[20], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_Expressionm_CheckBrackets_S1A3.ref.function );
  refalrts::reinit_unwrapped_closure( context[13], context[0] );
  refalrts::reinit_name( context[14], ref_TokenChain.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[21], context[21] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[14], context[16] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Expressionm_CheckBrackets_S1A2("Expression-CheckBrackets$1=2", 708904305U, 1045449332U, func_gen_Expressionm_CheckBrackets_S1A2);


static refalrts::FnResult func_Expressionm_CheckBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 36 elems
  refalrts::Iter context[36];
  refalrts::zeros( context, 36 );
  //FAST GEN: s.$ s.$ t.$ t.$ e.$
  //GLOBAL GEN: s.$ s.$ t.$ t.$ e.$
  // </0 & Expression-CheckBrackets/4 s.idx#0/5 s.idxV#0/6 t.idxVV#0/7 t.idxVVV#0/9 e.idxVVVV#0/2 >/1
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
  // closed e.idxVVVV#0 as range 2
  do {
    // s.idx s.idx t.idx ( e.idx ) ( s.idx t.idx ) e.idx
    // </0 & Expression-CheckBrackets/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 (/9 e.Expression#1/13 )/10 (/17 s.Type#1/19 t.Pos#1/20 )/18 e.Tokens#1/11 >/1
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    if( ! refalrts::brackets_term( context[13], context[14], context[9] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[11], context[12] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Expression#1 as range 13
    // closed e.Tokens#1 as range 11
    if( ! refalrts::svar_left( context[19], context[15], context[16] ) )
      continue;
    context[21] = refalrts::tvar_left( context[20], context[15], context[16] );
    if( ! context[21] )
      continue;
    if( ! refalrts::empty_seq( context[15], context[16] ) )
      continue;
    //DEBUG: t.ErrorList#1: 7
    //DEBUG: s.Mode#1: 5
    //DEBUG: s.Kind#1: 6
    //DEBUG: e.Expression#1: 13
    //DEBUG: e.Tokens#1: 11
    //DEBUG: s.Type#1: 19
    //DEBUG: t.Pos#1: 20
    //5: s.Mode#1
    //6: s.Kind#1
    //7: t.ErrorList#1
    //11: e.Tokens#1
    //13: e.Expression#1
    //19: s.Type#1
    //20: t.Pos#1
    //27: s.Type#1

    refalrts::reset_allocator();
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[24], ref_gen_Expressionm_CheckBrackets_S1C1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[26], ref_OneOf.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[27], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], ident_TkCloseBracket ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[29], ident_TkCloseCall ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[30], ident_TkCloseADT ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[22] );
    res = refalrts::splice_elem( res, context[23] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[25] );
    res = refalrts::splice_elem( res, context[31] );
    res = refalrts::splice_elem( res, context[30] );
    res = refalrts::splice_elem( res, context[29] );
    res = refalrts::splice_elem( res, context[28] );
    res = refalrts::splice_stvar( res, context[27] );
    res = refalrts::splice_elem( res, context[26] );
    res = refalrts::splice_elem( res, context[25] );
    res = refalrts::splice_elem( res, context[24] );
    res = refalrts::splice_elem( res, context[22] );
    refalrts::use( res );
    refalrts::FnResult rec_res = refalrts::recursive_call_main_loop();
    if (rec_res != refalrts::cSuccess)
      return rec_res;
    refalrts::this_is_generated_function();
    do {
      // </22 & Expression-CheckBrackets$1?1/26 # True/27 >/23
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::call_left( context[24], context[25], context[22], context[23] );
      context[27] = refalrts::ident_left(  ident_True, context[24], context[25] );
      if( ! context[27] )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      //DEBUG: t.ErrorList#1: 7
      //DEBUG: s.Mode#1: 5
      //DEBUG: s.Kind#1: 6
      //DEBUG: e.Expression#1: 13
      //DEBUG: e.Tokens#1: 11
      //DEBUG: s.Type#1: 19
      //DEBUG: t.Pos#1: 20

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Type#1/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ } </28 Tile{ HalfReuse: [*]/0 Reuse: & Expression-CheckBrackets$1=2/4 AsIs: s.Mode#1/5 AsIs: s.Kind#1/6 } Tile{ AsIs: (/9 AsIs: e.Expression#1/13 AsIs: )/10 AsIs: (/17 } Tile{ AsIs: e.Tokens#1/11 } )/29 {*}/30 </31 & EL-AddErrorAt/32 Tile{ AsIs: t.ErrorList#1/7 } Tile{ AsIs: t.Pos#1/20 HalfReuse: 'u'/18 }"nbalanced "/33 Tile{ AsIs: </22 Reuse: & TokName/26 HalfReuse: s.Type1 #19/27 AsIs: >/23 AsIs: >/1 } >/35 Tile{ ]] }
      if( ! refalrts::alloc_open_call( context[28] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_bracket( context[29] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_unwrapped_closure( context[30], context[0] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_open_call( context[31] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_name( context[32], ref_ELm_AddErrorAt.ref.function ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_chars( context[33], context[34], "nbalanced ", 10 ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[35] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_closure_head( context[0] );
      refalrts::update_name( context[4], ref_gen_Expressionm_CheckBrackets_S1A2.ref.function );
      refalrts::reinit_char( context[18], 'u' );
      refalrts::update_name( context[26], ref_TokName.ref.function );
      refalrts::reinit_svar( context[27], context[19] );
      refalrts::push_stack( context[35] );
      refalrts::push_stack( context[28] );
      refalrts::push_stack( context[1] );
      refalrts::push_stack( context[31] );
      refalrts::push_stack( context[23] );
      refalrts::push_stack( context[22] );
      refalrts::link_brackets( context[17], context[29] );
      refalrts::link_brackets( context[9], context[10] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[35], context[35] );
      res = refalrts::splice_evar( res, context[22], context[1] );
      res = refalrts::splice_evar( res, context[33], context[34] );
      res = refalrts::splice_evar( res, context[20], context[18] );
      res = refalrts::splice_evar( res, context[7], context[8] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[9], context[17] );
      res = refalrts::splice_evar( res, context[0], context[6] );
      res = refalrts::splice_evar( res, context[28], context[28] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      refalrts::wrap_closure( context[30] );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence();

    refalrts::splice_to_freelist(context[22], context[23]);
    continue;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx s.idx t.idx t.idx e.idx
  // </0 & Expression-CheckBrackets/4 s.Mode#1/5 s.Kind#1/6 t.ErrorList#1/7 t.Expression#1/9 e.Tokens#1/11 >/1
  context[11] = context[2];
  context[12] = context[3];
  // closed e.Tokens#1 as range 11
  //DEBUG: t.ErrorList#1: 7
  //DEBUG: t.Expression#1: 9
  //DEBUG: s.Mode#1: 5
  //DEBUG: s.Kind#1: 6
  //DEBUG: e.Tokens#1: 11

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Expression-CheckBrackets/4 s.Mode#1/5 s.Kind#1/6 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/7 AsIs: t.Expression#1/9 } Tile{ AsIs: e.Tokens#1/11 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[7], context[10] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Expressionm_CheckBrackets("Expression-CheckBrackets", 708904305U, 1045449332U, func_Expressionm_CheckBrackets);


static refalrts::FnResult func_ClassicError(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: t.$ s.$ t.$ e.$
  //GLOBAL GEN: t.$ s.$ t.$ e.$
  // </0 & ClassicError/4 t.idx#0/5 s.idxV#0/7 t.idxVV#0/8 e.idxVVV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[7], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVVV#0 as range 2
  do {
    // t.idx # Classic t.idx e.idx
    // </0 & ClassicError/4 t.ErrorList#1/5 # Classic/7 t.Pos#1/8 e.Message#1/10 >/1
    context[10] = context[2];
    context[11] = context[3];
    if( ! refalrts::ident_term(  ident_Classic, context[7] ) )
      continue;
    // closed e.Message#1 as range 10
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 8
    //DEBUG: e.Message#1: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # Classic/7 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/8 AsIs: e.Message#1/10 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx # Extended t.idx e.idx
  // </0 & ClassicError/4 t.ErrorList#1/5 # Extended/7 t.Pos#1/8 e.Message#1/10 >/1
  context[10] = context[2];
  context[11] = context[3];
  if( ! refalrts::ident_term(  ident_Extended, context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Message#1 as range 10
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 8
  //DEBUG: e.Message#1: 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ClassicError/4 {REMOVED TILE} # Extended/7 t.Pos#1/8 e.Message#1/10 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.ErrorList#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ClassicError("ClassicError", 708904305U, 1045449332U, func_ClassicError);


static refalrts::FnResult func_UnexpectedToken(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: t.$ ( s.$ t.$ e.$ ) e.$
  //GLOBAL GEN: t.$ ( s.$ t.$ e.$ ) e.$
  // </0 & UnexpectedToken/4 t.idx#0/5 (/9 s.idxVB#0/11 t.idxVBV#0/12 e.idxVBVV#0/7 )/10 e.idxVT#0/2 >/1
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
  // closed e.idxVT#0 as range 2
  if( ! refalrts::svar_left( context[11], context[7], context[8] ) )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBVV#0 as range 7
  do {
    // t.idx ( # TkError t.idx e.idx ) e.idx
    // </0 & UnexpectedToken/4 t.ErrorList#1/5 (/9 # TkError/11 t.Pos#1/12 e.Message#1/14 )/10 e.Expected#1/16 >/1
    context[14] = context[7];
    context[15] = context[8];
    context[16] = context[2];
    context[17] = context[3];
    if( ! refalrts::ident_term(  ident_TkError, context[11] ) )
      continue;
    // closed e.Message#1 as range 14
    // closed e.Expected#1 as range 16
    //DEBUG: t.ErrorList#1: 5
    //DEBUG: t.Pos#1: 12
    //DEBUG: e.Message#1: 14
    //DEBUG: e.Expected#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/9 # TkError/11 {REMOVED TILE} e.Expected#1/16 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/12 AsIs: e.Message#1/14 HalfReuse: >/10 } Tile{ ]] }
    refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
    refalrts::reinit_close_call( context[10] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[10] );
    refalrts::splice_to_freelist_open( context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx ( s.idx t.idx e.idx ) e.idx
  // </0 & UnexpectedToken/4 t.ErrorList#1/5 (/9 s.Type#1/11 t.Pos#1/12 e.Value#1/14 )/10 e.Expected#1/16 >/1
  context[14] = context[7];
  context[15] = context[8];
  context[16] = context[2];
  context[17] = context[3];
  // closed e.Value#1 as range 14
  // closed e.Expected#1 as range 16
  //DEBUG: t.ErrorList#1: 5
  //DEBUG: t.Pos#1: 12
  //DEBUG: s.Type#1: 11
  //DEBUG: e.Value#1: 14
  //DEBUG: e.Expected#1: 16

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.Value#1/14 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EL-AddErrorAt/4 AsIs: t.ErrorList#1/5 } Tile{ AsIs: t.Pos#1/12 }"unexpected "/18 </20 Tile{ HalfReuse: & TokName/9 AsIs: s.Type#1/11 } >/21", expected"/22 Tile{ HalfReuse: ' '/10 AsIs: e.Expected#1/16 AsIs: >/1 ]] }
  if( ! refalrts::alloc_chars( context[18], context[19], "unexpected ", 11 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[22], context[23], ", expected", 10 ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ELm_AddErrorAt.ref.function );
  refalrts::reinit_name( context[9], ref_TokName.ref.function );
  refalrts::reinit_char( context[10], ' ' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[21] );
  refalrts::push_stack( context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[10];
  res = refalrts::splice_evar( res, context[21], context[23] );
  res = refalrts::splice_evar( res, context[9], context[11] );
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnexpectedToken("UnexpectedToken", 708904305U, 1045449332U, func_UnexpectedToken);


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

static refalrts::NativeReference nat_ref_TokName("TokName", 708904305U, 1045449332U, func_TokName);


//End of file
