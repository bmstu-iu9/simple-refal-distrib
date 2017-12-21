// This file automatically generated from 'Desugaring.sref'
// Don't edit! Edit 'Desugaring.sref' and recompile it

#include "refalrts.h"

static const refalrts::RefalIdentifier ident_ADTm_Brackets = refalrts::ident_from_static("ADT-Brackets");
static const refalrts::RefalIdentifier ident_Assign = refalrts::ident_from_static("Assign");
static const refalrts::RefalIdentifier ident_Brackets = refalrts::ident_from_static("Brackets");
static const refalrts::RefalIdentifier ident_CallBrackets = refalrts::ident_from_static("CallBrackets");
static const refalrts::RefalIdentifier ident_Closure = refalrts::ident_from_static("Closure");
static const refalrts::RefalIdentifier ident_ClosureBrackets = refalrts::ident_from_static("ClosureBrackets");
static const refalrts::RefalIdentifier ident_Condition = refalrts::ident_from_static("Condition");
static const refalrts::RefalIdentifier ident_Declaration = refalrts::ident_from_static("Declaration");
static const refalrts::RefalIdentifier ident_Enum = refalrts::ident_from_static("Enum");
static const refalrts::RefalIdentifier ident_Function = refalrts::ident_from_static("Function");
static const refalrts::RefalIdentifier ident_GNm_Local = refalrts::ident_from_static("GN-Local");
static const refalrts::RefalIdentifier ident_Ident = refalrts::ident_from_static("Ident");
static const refalrts::RefalIdentifier ident_MarkupContext = refalrts::ident_from_static("MarkupContext");
static const refalrts::RefalIdentifier ident_NativeBlock = refalrts::ident_from_static("NativeBlock");
static const refalrts::RefalIdentifier ident_NativeBody = refalrts::ident_from_static("NativeBody");
static const refalrts::RefalIdentifier ident_NoMarkupContext = refalrts::ident_from_static("NoMarkupContext");
static const refalrts::RefalIdentifier ident_SUF = refalrts::ident_from_static("SUF");
static const refalrts::RefalIdentifier ident_Sentences = refalrts::ident_from_static("Sentences");
static const refalrts::RefalIdentifier ident_TkIdentifier = refalrts::ident_from_static("TkIdentifier");
static const refalrts::RefalIdentifier ident_TkName = refalrts::ident_from_static("TkName");
static const refalrts::RefalIdentifier ident_TkNewVariable = refalrts::ident_from_static("TkNewVariable");
static const refalrts::RefalIdentifier ident_TkVariable = refalrts::ident_from_static("TkVariable");
static const refalrts::RefalIdentifier ident_VAR = refalrts::ident_from_static("VAR");
static refalrts::ExternalReference ref_AssignOrCondition("AssignOrCondition", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_ChainTypeMarker("ChainTypeMarker", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_CheckBorrowed("CheckBorrowed", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_CreateContext("CreateContext", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_CreateContext_S1L1("CreateContext$1\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_CreateContext_S2L1("CreateContext$2\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_DelAccumulator("DelAccumulator", 0U, 0U);
static refalrts::ExternalReference ref_Desugar("Desugar", 0U, 0U);
static refalrts::ExternalReference ref_EnumerateVarsm_Assignments("EnumerateVars-Assignments", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Assignments_S2A1("EnumerateVars-Assignments$2=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Assignments_S2A2("EnumerateVars-Assignments$2=2", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Assignments_S2A3("EnumerateVars-Assignments$2=3", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Assignments_S2A4("EnumerateVars-Assignments$2=4", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Assignments_S2A5("EnumerateVars-Assignments$2=5", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_EnumerateVarsm_Blocks("EnumerateVars-Blocks", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Blocks_L1("EnumerateVars-Blocks\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_EnumerateVarsm_Body("EnumerateVars-Body", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Body_S1L1("EnumerateVars-Body$1\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Body_S1L1A1("EnumerateVars-Body$1\\1=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Body_S1L1A2("EnumerateVars-Body$1\\1=2", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Body_S1L1A3("EnumerateVars-Body$1\\1=3", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Body_S1L1A4("EnumerateVars-Body$1\\1=4", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_EnumerateVarsm_Expr("EnumerateVars-Expr", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Expr_L1("EnumerateVars-Expr\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Expr_L1S4L1("EnumerateVars-Expr\\1$4\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Expr_L1S5L1("EnumerateVars-Expr\\1$5\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Expr_L1S6L1("EnumerateVars-Expr\\1$6\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_EnumerateVarsm_Expr_L1S7L1("EnumerateVars-Expr\\1$7\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_ExtractAllVars("ExtractAllVars", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_ExtractNested("ExtractNested", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNested_A1("ExtractNested=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_ExtractNestedm_Conditions("ExtractNested-Conditions", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Conditions_S1A1("ExtractNested-Conditions$1=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Conditions_S1A2("ExtractNested-Conditions$1=2", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Conditions_S1A3("ExtractNested-Conditions$1=3", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Conditions_S1A4("ExtractNested-Conditions$1=4", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_ExtractNestedm_Pattern("ExtractNested-Pattern", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_ExtractNestedm_Result("ExtractNested-Result", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Result_A1("ExtractNested-Result=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_ExtractNestedm_Resultm_Term("ExtractNested-Result-Term", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Resultm_Term_S2A1("ExtractNested-Result-Term$2=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Resultm_Term_S3A1("ExtractNested-Result-Term$3=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Resultm_Term_S4A1("ExtractNested-Result-Term$4=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Resultm_Term_S5A1("ExtractNested-Result-Term$5=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Resultm_Term_S5A2("ExtractNested-Result-Term$5=2", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Resultm_Term_S5A2L1("ExtractNested-Result-Term$5=2\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1("ExtractNested-Result-Term$5=2\\1$2=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1("ExtractNested-Result-Term$5=2\\1$2\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_ExtractNestedm_Sentence("ExtractNested-Sentence", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Sentence_A1("ExtractNested-Sentence=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Sentence_A2("ExtractNested-Sentence=2", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedm_Sentence_A3("ExtractNested-Sentence=3", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_ExtractNestedRec("ExtractNestedRec", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_ExtractNestedRec_S1A1("ExtractNestedRec$1=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
static refalrts::ExternalReference ref_Inc("Inc", 0U, 0U);
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
static refalrts::ExternalReference ref_MapReduce("MapReduce", 0U, 0U);
static refalrts::ExternalReference ref_NameNestedAssigns("NameNestedAssigns", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedAssigns_L1("NameNestedAssigns\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedAssigns_L1A1("NameNestedAssigns\\1=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedAssigns_L1A2("NameNestedAssigns\\1=2", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_NameNestedBlocks("NameNestedBlocks", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedBlocks_A1("NameNestedBlocks=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedBlocks_A1L1("NameNestedBlocks=1\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedBlocks_A1L1A1("NameNestedBlocks=1\\1=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_NameNestedBody("NameNestedBody", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedBody_S2L1("NameNestedBody$2\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedBody_S2L1A1("NameNestedBody$2\\1=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_NameNestedResult("NameNestedResult", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_NameNestedResultRec("NameNestedResultRec", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedResultRec_L1("NameNestedResultRec\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedResultRec_L1S1L1("NameNestedResultRec\\1$1\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedResultRec_L1S2L1("NameNestedResultRec\\1$2\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_NameNestedResultRec_L1S3L1("NameNestedResultRec\\1$3\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_Passm_EnumerateVariables("Pass-EnumerateVariables", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_Passm_EnumerateVariables_L1("Pass-EnumerateVariables\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_Passm_FlatNestedFuncs("Pass-FlatNestedFuncs", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_Passm_FlatNestedFuncs_L1("Pass-FlatNestedFuncs\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_Passm_FlatNestedFuncs_L1S1A1("Pass-FlatNestedFuncs\\1$1=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_Passm_NameNestedFuncs("Pass-NameNestedFuncs", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_Passm_NameNestedFuncs_L1("Pass-NameNestedFuncs\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_Passm_RemoveBlocksAndAssigns("Pass-RemoveBlocksAndAssigns", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_Passm_RemoveBlocksAndAssigns_L1("Pass-RemoveBlocksAndAssigns\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_Passm_RemovePos("Pass-RemovePos", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_Passm_RemovePos_L1("Pass-RemovePos\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_Passm_RemoveRedudandElements("Pass-RemoveRedudandElements", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_Passm_RemoveRedudandElements_L1("Pass-RemoveRedudandElements\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_Passm_RemoveRedudandElements_L2("Pass-RemoveRedudandElements\\2", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_Passm_RemoveRedudandElements_L2L1("Pass-RemoveRedudandElements\\2\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_Passm_RemoveRedudandElements_L3("Pass-RemoveRedudandElements\\3", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_Passm_UnCondition("Pass-UnCondition", 0U, 0U);
static refalrts::ExternalReference ref_Reduce("Reduce", 0U, 0U);
static refalrts::ExternalReference ref_RemoveAssignsm_Conditions("RemoveAssigns-Conditions", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemoveAssignsm_Conditions_L1("RemoveAssigns-Conditions\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemoveAssignsm_Conditions_L1A1("RemoveAssigns-Conditions\\1=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_RemoveAssignsm_Result("RemoveAssigns-Result", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemoveAssignsm_Result_L1("RemoveAssigns-Result\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_RemoveAssignsm_Sentence("RemoveAssigns-Sentence", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemoveAssignsm_Sentence_S2A1("RemoveAssigns-Sentence$2=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemoveAssignsm_Sentence_S2A2("RemoveAssigns-Sentence$2=2", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemoveAssignsm_Sentence_S2A3("RemoveAssigns-Sentence$2=3", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_RemoveAssignsm_Sentences("RemoveAssigns-Sentences", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_RemoveAssignsm_WindBlocks("RemoveAssigns-WindBlocks", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemoveAssignsm_WindBlocks_L1("RemoveAssigns-WindBlocks\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_RemovePosm_Blocks("RemovePos-Blocks", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemovePosm_Blocks_L1("RemovePos-Blocks\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_RemovePosm_Body("RemovePos-Body", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemovePosm_Body_S1L1("RemovePos-Body$1\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemovePosm_Body_S1L1L1("RemovePos-Body$1\\1\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemovePosm_Body_S1L1L1A1("RemovePos-Body$1\\1\\1=1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_RemovePosm_Expr("RemovePos-Expr", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_gen_RemovePosm_Expr_L1("RemovePos-Expr\\1", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_SelectiveSaverm_Save("SelectiveSaver-Save", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_SelectiveSaverm_Skip("SelectiveSaver-Skip", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_Seq("Seq", 0U, 0U);
static refalrts::ExternalReference ref_Uniq("Uniq", 39970021U, 2151505377U);
static refalrts::ExternalReference ref_UpdateBorrowedVars("UpdateBorrowedVars", 39970021U, 2151505377U);

static refalrts::FnResult func_Desugar(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & Desugar/4 s.MarkupContext#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } Tile{ AsIs: e.AST#1/2 } </6 & Seq/7 & Pass-RemovePos/8 & Pass-EnumerateVariables/9 & Pass-NameNestedFuncs/10 & Pass-RemoveBlocksAndAssigns/11 (/12 & Pass-FlatNestedFuncs/13 Tile{ AsIs: s.MarkupContext#1/5 } )/14 (/15 & Pass-UnCondition/16 s.MarkupContext#1/5/17 )/18 & Pass-RemoveRedudandElements/19 >/20 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[8], ref_Passm_RemovePos.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_Passm_EnumerateVariables.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_Passm_NameNestedFuncs.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_Passm_RemoveBlocksAndAssigns.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ref_Passm_FlatNestedFuncs.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], ref_Passm_UnCondition.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[17], context[5]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_Passm_RemoveRedudandElements.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[6] );
  refalrts::link_brackets( context[15], context[18] );
  refalrts::link_brackets( context[12], context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[20] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[13] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Desugar("Desugar", 0U, 0U, func_Desugar);


static refalrts::FnResult func_gen_Passm_RemovePos_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: ( s.$ t.$ e.$ )
  //GLOBAL GEN: ( s.$ t.$ e.$ )
  // </0 & Pass-RemovePos\1/4 (/7 s.idxB#0/9 t.idxBV#0/10 e.idxBVV#0/5 )/8 >/1
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
    // ( # Function t.idx s.idx ( e.idx ) e.idx )
    // </0 & Pass-RemovePos\1/4 (/7 # Function/9 t.SrcPos#2/10 s.ScopeClass#2/14 (/17 e.Name#2/15 )/18 e.Body#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_Function, context[9] ) )
      continue;
    if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
      continue;
    context[15] = 0;
    context[16] = 0;
    context[17] = refalrts::brackets_left( context[15], context[16], context[12], context[13] );
    if( ! context[17] )
      continue;
    refalrts::bracket_pointers(context[17], context[18]);
    // closed e.Name#2 as range 15
    // closed e.Body#2 as range 12
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: s.ScopeClass#2: 14
    //DEBUG: e.Name#2: 15
    //DEBUG: e.Body#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Function/9 } Tile{ AsIs: s.ScopeClass#2/14 AsIs: (/17 AsIs: e.Name#2/15 AsIs: )/18 } Tile{ AsIs: </0 Reuse: & RemovePos-Body/4 } Tile{ AsIs: e.Body#2/12 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_RemovePosm_Body.ref.function );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[18] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Ident t.idx e.idx )
    // </0 & Pass-RemovePos\1/4 (/7 # Ident/9 t.SrcPos#2/10 e.Name#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_Ident, context[9] ) )
      continue;
    // closed e.Name#2 as range 12
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} )/8 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Ident/9 } Tile{ AsIs: e.Name#2/12 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # NativeBlock t.idx e.idx )
    // </0 & Pass-RemovePos\1/4 (/7 # NativeBlock/9 t.SrcPos#2/10 e.Code#2/12 )/8 >/1
    context[12] = context[5];
    context[13] = context[6];
    if( ! refalrts::ident_term(  ident_NativeBlock, context[9] ) )
      continue;
    // closed e.Code#2 as range 12
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Code#2: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # NativeBlock/9 AsIs: t.SrcPos#2/10 AsIs: e.Code#2/12 AsIs: )/8 } Tile{ ]] }
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx t.idx s.idx e.idx )
  // </0 & Pass-RemovePos\1/4 (/7 s.EnumSwapDeclaration#2/9 t.SrcPos#2/10 s.ScopeClass#2/14 e.Name#2/12 )/8 >/1
  context[12] = context[5];
  context[13] = context[6];
  if( ! refalrts::svar_left( context[14], context[12], context[13] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#2 as range 12
  //DEBUG: t.SrcPos#2: 10
  //DEBUG: s.EnumSwapDeclaration#2: 9
  //DEBUG: s.ScopeClass#2: 14
  //DEBUG: e.Name#2: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-RemovePos\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.EnumSwapDeclaration#2/9 } Tile{ AsIs: s.ScopeClass#2/14 AsIs: e.Name#2/12 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[8] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_RemovePos_L1("Pass-RemovePos\\1", 39970021U, 2151505377U, func_gen_Passm_RemovePos_L1);


static refalrts::FnResult func_Passm_RemovePos(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-RemovePos/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-RemovePos\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_Passm_RemovePos_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_RemovePos("Pass-RemovePos", 39970021U, 2151505377U, func_Passm_RemovePos);


static refalrts::FnResult func_gen_RemovePosm_Body_S1L1L1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & RemovePos-Body$1\1\1=1/4 s.ChainType#3/17 (/15 e.Result#3/13 )/16 (/11 e.Blocks#3/9 )/12 (/7 e.Pattern#3/5 )/8 >/1
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
  // closed e.Result#3 as range 13
  // closed e.Blocks#3 as range 9
  // closed e.Pattern#3 as range 5
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Result#3: 13
  //DEBUG: e.Blocks#3: 9
  //DEBUG: e.Pattern#3: 5
  //DEBUG: s.ChainType#3: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: s.ChainType#3/17 AsIs: (/15 } Tile{ AsIs: </0 } & RemovePos-Expr/18 Tile{ AsIs: e.Result#3/13 } >/19 )/20 (/21 Tile{ HalfReuse: </16 HalfReuse: & RemovePos-Blocks/11 AsIs: e.Blocks#3/9 HalfReuse: >/12 HalfReuse: )/7 } (/22 </23 & RemovePos-Expr/24 Tile{ AsIs: e.Pattern#3/5 } >/25 Tile{ AsIs: )/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_name( context[18], ref_RemovePosm_Expr.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], ref_RemovePosm_Expr.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_call( context[16] );
  refalrts::reinit_name( context[11], ref_RemovePosm_Blocks.ref.function );
  refalrts::reinit_close_call( context[12] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[22], context[8] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[21], context[7] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[15], context[20] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  res = refalrts::splice_evar( res, context[16], context[7] );
  res = refalrts::splice_evar( res, context[19], context[21] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[4], context[15] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Body_S1L1L1A1("RemovePos-Body$1\\1\\1=1", 39970021U, 2151505377U, func_gen_RemovePosm_Body_S1L1L1A1);


static refalrts::FnResult func_gen_RemovePosm_Body_S1L1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & RemovePos-Body$1\1\1/4 (/7 s.ChainType#3/21 (/19 e.Result#3/17 )/20 (/15 e.Blocks#3/13 )/16 (/11 e.Pattern#3/9 )/12 )/8 >/1
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
  context[11] = refalrts::brackets_right( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#3 as range 17
  // closed e.Blocks#3 as range 13
  // closed e.Pattern#3 as range 9
  if( ! refalrts::svar_left( context[21], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.Result#3: 17
  //DEBUG: e.Blocks#3: 13
  //DEBUG: e.Pattern#3: 9
  //DEBUG: s.ChainType#3: 21

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & RemovePos-Body$1\1\1=1/7 AsIs: s.ChainType#3/21 AsIs: (/19 AsIs: e.Result#3/17 AsIs: )/20 AsIs: (/15 AsIs: e.Blocks#3/13 AsIs: )/16 AsIs: (/11 AsIs: e.Pattern#3/9 AsIs: )/12 HalfReuse: {*}/8 HalfReuse: </1 } & AssignOrCondition/22 s.ChainType#3/21/23 >/24 >/25 Tile{ ]] }
  if( ! refalrts::alloc_name( context[22], ref_AssignOrCondition.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[23], context[21]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_RemovePosm_Body_S1L1L1A1.ref.function );
  refalrts::reinit_unwrapped_closure( context[8], context[4] );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[24] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[22], context[25] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Body_S1L1L1("RemovePos-Body$1\\1\\1", 39970021U, 2151505377U, func_gen_RemovePosm_Body_S1L1L1);


static refalrts::FnResult func_gen_RemovePosm_Body_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  // </0 & RemovePos-Body$1\1/4 (/7 (/11 e.Pattern#2/9 )/12 e.Assigns#2/5 (/19 e.Result#2/17 )/20 (/15 e.Blocks#2/13 )/16 )/8 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#2 as range 9
  // closed e.Assigns#2 as range 5
  // closed e.Result#2 as range 17
  // closed e.Blocks#2 as range 13
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Assigns#2: 5
  //DEBUG: e.Result#2: 17
  //DEBUG: e.Blocks#2: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: </7 HalfReuse: & RemovePos-Expr/11 AsIs: e.Pattern#2/9 HalfReuse: >/12 } )/21 </22 & Map/23 & RemovePos-Body$1\1\1/24 Tile{ AsIs: e.Assigns#2/5 } >/25 Tile{ AsIs: (/19 } </26 & RemovePos-Expr/27 Tile{ AsIs: e.Result#2/17 } >/28 )/29 (/30 Tile{ HalfReuse: </20 HalfReuse: & RemovePos-Blocks/15 AsIs: e.Blocks#2/13 HalfReuse: >/16 AsIs: )/8 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], ref_gen_RemovePosm_Body_S1L1L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], ref_RemovePosm_Expr.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_name( context[11], ref_RemovePosm_Expr.ref.function );
  refalrts::reinit_close_call( context[12] );
  refalrts::reinit_open_call( context[20] );
  refalrts::reinit_name( context[15], ref_RemovePosm_Blocks.ref.function );
  refalrts::reinit_close_call( context[16] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[30], context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[20] );
  refalrts::link_brackets( context[19], context[29] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[22] );
  refalrts::link_brackets( context[4], context[21] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[20];
  res = refalrts::splice_evar( res, context[28], context[30] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[19], context[19] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Body_S1L1("RemovePos-Body$1\\1", 39970021U, 2151505377U, func_gen_RemovePosm_Body_S1L1);


static refalrts::FnResult func_RemovePosm_Body(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & RemovePos-Body/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # Sentences e.idx
    // </0 & RemovePos-Body/4 # Sentences/5 e.Sentences#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Sentences, context[5] ) )
      continue;
    // closed e.Sentences#1 as range 6
    //DEBUG: e.Sentences#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/8 Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & RemovePos-Body$1\1/5 AsIs: e.Sentences#1/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[8], ident_Sentences ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Map.ref.function );
    refalrts::reinit_name( context[5], ref_gen_RemovePosm_Body_S1L1.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # NativeBody t.idx e.idx
  // </0 & RemovePos-Body/4 # NativeBody/5 t.SrcPos#1/8 e.Code#1/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_NativeBody, context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 6
  //DEBUG: t.SrcPos#1: 8
  //DEBUG: e.Code#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemovePos-Body/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/5 AsIs: t.SrcPos#1/8 } Tile{ AsIs: e.Code#1/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemovePosm_Body("RemovePos-Body", 39970021U, 2151505377U, func_RemovePosm_Body);


static refalrts::FnResult func_AssignOrCondition(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & AssignOrCondition/4 s.idx#0/5 >/1
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
    // # Assign
    // </0 & AssignOrCondition/4 # Assign/5 >/1
    if( ! refalrts::ident_term(  ident_Assign, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AssignOrCondition/4 # Assign/5 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Condition
  // </0 & AssignOrCondition/4 # Condition/5 >/1
  if( ! refalrts::ident_term(  ident_Condition, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AssignOrCondition/4 # Condition/5 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_AssignOrCondition("AssignOrCondition", 39970021U, 2151505377U, func_AssignOrCondition);


static refalrts::FnResult func_gen_RemovePosm_Blocks_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & RemovePos-Blocks\1/4 (/7 e.Body#2/5 )/8 >/1
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
  // closed e.Body#2 as range 5
  //DEBUG: e.Body#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & RemovePos-Body/7 AsIs: e.Body#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], ref_RemovePosm_Body.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[4] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Blocks_L1("RemovePos-Blocks\\1", 39970021U, 2151505377U, func_gen_RemovePosm_Blocks_L1);


static refalrts::FnResult func_RemovePosm_Blocks(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemovePos-Blocks/4 e.Blocks#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Blocks#1 as range 2
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & RemovePos-Blocks\1/4 AsIs: e.Blocks#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_RemovePosm_Blocks_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemovePosm_Blocks("RemovePos-Blocks", 39970021U, 2151505377U, func_RemovePosm_Blocks);


static refalrts::FnResult func_gen_RemovePosm_Expr_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & RemovePos-Expr\1/4 t.idx#0/5 >/1
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
    // ( # TkVariable t.idx s.idx e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # TkVariable/9 t.SrcPos#2/10 s.Mode#2/12 e.Index#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TkVariable, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Index#2 as range 7
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: s.Mode#2: 12
    //DEBUG: e.Index#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkVariable/9 } Tile{ AsIs: s.Mode#2/12 AsIs: e.Index#2/7 AsIs: )/6 } Tile{ ]] }
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
    // ( # TkNewVariable t.idx s.idx e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # TkNewVariable/9 t.SrcPos#2/10 s.Mode#2/12 e.Index#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TkNewVariable, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Index#2 as range 7
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: s.Mode#2: 12
    //DEBUG: e.Index#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkNewVariable/9 } Tile{ AsIs: s.Mode#2/12 AsIs: e.Index#2/7 AsIs: )/6 } Tile{ ]] }
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
    // ( # TkName t.idx e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # TkName/9 t.SrcPos#2/10 e.Name#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_TkName, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Name#2 as range 7
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # TkName/9 } Tile{ AsIs: e.Name#2/7 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Brackets e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # Brackets/9 e.InBrackets#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_Brackets, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#2 as range 7
    //DEBUG: e.InBrackets#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </5 HalfReuse: & RemovePos-Expr/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Brackets );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], ref_RemovePosm_Expr.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # ADT-Brackets t.idx ( e.idx ) e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # ADT-Brackets/9 t.SrcPos#2/10 (/14 e.Name#2/12 )/15 e.InBrackets#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_ADTm_Brackets, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[7], context[8] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#2 as range 12
    // closed e.InBrackets#2 as range 7
    //DEBUG: t.SrcPos#2: 10
    //DEBUG: e.Name#2: 12
    //DEBUG: e.InBrackets#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/10 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/9 } Tile{ AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } Tile{ AsIs: </0 Reuse: & RemovePos-Expr/4 } Tile{ AsIs: e.InBrackets#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_RemovePosm_Expr.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CallBrackets e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # CallBrackets/9 e.InBrackets#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CallBrackets, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#2 as range 7
    //DEBUG: e.InBrackets#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & RemovePos-Expr/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CallBrackets );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], ref_RemovePosm_Expr.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Closure e.idx )
    // </0 & RemovePos-Expr\1/4 (/5 # Closure/9 e.Sentences#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_Closure, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.Sentences#2 as range 7
    //DEBUG: e.Sentences#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Closure/4 HalfReuse: </5 HalfReuse: & RemovePos-Body/9 AsIs: e.Sentences#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Closure );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], ref_RemovePosm_Body.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & RemovePos-Expr\1/4 t.OtherTerm#2/5 >/1
  //DEBUG: t.OtherTerm#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemovePos-Expr\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemovePosm_Expr_L1("RemovePos-Expr\\1", 39970021U, 2151505377U, func_gen_RemovePosm_Expr_L1);


static refalrts::FnResult func_RemovePosm_Expr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemovePos-Expr/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & RemovePos-Expr\1/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_RemovePosm_Expr_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemovePosm_Expr("RemovePos-Expr", 39970021U, 2151505377U, func_RemovePosm_Expr);


static refalrts::FnResult func_gen_Passm_EnumerateVariables_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & Pass-EnumerateVariables\1/4 t.idx#0/5 >/1
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
    // ( # Function s.idx ( e.idx ) e.idx )
    // </0 & Pass-EnumerateVariables\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_Function, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Body/4 } 1/15 (/16 )/17 Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_number( context[15], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_EnumerateVarsm_Body.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[17] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & Pass-EnumerateVariables\1/4 t.OtherProgramElement#2/5 >/1
  //DEBUG: t.OtherProgramElement#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-EnumerateVariables\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_EnumerateVariables_L1("Pass-EnumerateVariables\\1", 39970021U, 2151505377U, func_gen_Passm_EnumerateVariables_L1);


static refalrts::FnResult func_Passm_EnumerateVariables(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-EnumerateVariables/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-EnumerateVariables\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_Passm_EnumerateVariables_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_EnumerateVariables("Pass-EnumerateVariables", 39970021U, 2151505377U, func_Passm_EnumerateVariables);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & EnumerateVars-Body$1\1=4/4 (/7 e.Pattern#3/5 )/8 (/11 e.Assigns#4/9 )/12 (/15 e.Result#5/13 )/16 e.Blocks#6/2 >/1
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
  // closed e.Pattern#3 as range 5
  // closed e.Assigns#4 as range 9
  // closed e.Result#5 as range 13
  // closed e.Blocks#6 as range 2
  //DEBUG: e.Pattern#3: 5
  //DEBUG: e.Assigns#4: 9
  //DEBUG: e.Result#5: 13
  //DEBUG: e.Blocks#6: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#3/5 AsIs: )/8 } Tile{ AsIs: e.Assigns#4/9 } Tile{ AsIs: (/15 AsIs: e.Result#5/13 AsIs: )/16 } Tile{ AsIs: (/11 } Tile{ AsIs: e.Blocks#6/2 } Tile{ AsIs: )/12 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A4("EnumerateVars-Body$1\\1=4", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Body_S1L1A4);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & EnumerateVars-Body$1\1=3/4 (/7 e.Pattern#3/5 )/8 (/11 e.Assigns#4/9 )/12 s.Depth#4/13 (/16 e.Blocks#2/14 )/17 (/20 e.ScopeVars#5/18 )/21 e.Result#5/2 >/1
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
  // closed e.Pattern#3 as range 5
  // closed e.Assigns#4 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Blocks#2 as range 14
  // closed e.ScopeVars#5 as range 18
  // closed e.Result#5 as range 2
  //DEBUG: e.Pattern#3: 5
  //DEBUG: e.Assigns#4: 9
  //DEBUG: s.Depth#4: 13
  //DEBUG: e.Blocks#2: 14
  //DEBUG: e.ScopeVars#5: 18
  //DEBUG: e.Result#5: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </22 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Body$1\1=4/4 AsIs: (/7 AsIs: e.Pattern#3/5 AsIs: )/8 AsIs: (/11 AsIs: e.Assigns#4/9 AsIs: )/12 } Tile{ AsIs: (/16 } Tile{ AsIs: e.Result#5/2 } )/23 {*}/24 </25 & EnumerateVars-Blocks/26 </27 & Inc/28 Tile{ AsIs: s.Depth#4/13 } Tile{ HalfReuse: >/17 AsIs: (/20 AsIs: e.ScopeVars#5/18 AsIs: )/21 } Tile{ AsIs: e.Blocks#2/14 } >/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[24], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[26], ref_EnumerateVarsm_Blocks.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[28], ref_Inc.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_EnumerateVarsm_Body_S1L1A4.ref.function );
  refalrts::reinit_close_call( context[17] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[27] );
  refalrts::link_brackets( context[16], context[23] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[23], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A3("EnumerateVars-Body$1\\1=3", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Body_S1L1A3);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & EnumerateVars-Body$1\1=2/4 (/7 e.Pattern#3/5 )/8 (/11 e.Blocks#2/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.ScopeVars#4/17 )/20 s.Depth#4/21 e.Assigns#4/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.Pattern#3 as range 5
  // closed e.Blocks#2 as range 9
  // closed e.Result#2 as range 13
  // closed e.ScopeVars#4 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Assigns#4 as range 2
  //DEBUG: e.Pattern#3: 5
  //DEBUG: e.Blocks#2: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.ScopeVars#4: 17
  //DEBUG: s.Depth#4: 21
  //DEBUG: e.Assigns#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.Depth#4/21 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </22 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Body$1\1=3/4 AsIs: (/7 AsIs: e.Pattern#3/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Assigns#4/2 } )/23 Tile{ HalfReuse: s.Depth4 #21/12 AsIs: (/15 } Tile{ AsIs: e.Blocks#2/9 } )/24 {*}/25 </26 & EnumerateVars-Expr/27 Tile{ HalfReuse: s.Depth4 #21/16 AsIs: (/19 AsIs: e.ScopeVars#4/17 AsIs: )/20 } Tile{ AsIs: e.Result#2/13 } >/28 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[25], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], ref_EnumerateVarsm_Expr.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_EnumerateVarsm_Body_S1L1A3.ref.function );
  refalrts::reinit_svar( context[12], context[21] );
  refalrts::reinit_svar( context[16], context[21] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[22] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[26] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[24] );
  refalrts::link_brackets( context[11], context[23] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[24], context[27] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  refalrts::wrap_closure( context[25] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A2("EnumerateVars-Body$1\\1=2", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Body_S1L1A2);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & EnumerateVars-Body$1\1=1/4 (/7 e.Blocks#2/5 )/8 (/11 e.Result#2/9 )/12 s.Depth#1/13 (/16 e.Assigns#2/14 )/17 (/20 e.ScopeVars#3/18 )/21 e.Pattern#3/2 >/1
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
  // closed e.Blocks#2 as range 5
  // closed e.Result#2 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Assigns#2 as range 14
  // closed e.ScopeVars#3 as range 18
  // closed e.Pattern#3 as range 2
  //DEBUG: e.Blocks#2: 5
  //DEBUG: e.Result#2: 9
  //DEBUG: s.Depth#1: 13
  //DEBUG: e.Assigns#2: 14
  //DEBUG: e.ScopeVars#3: 18
  //DEBUG: e.Pattern#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Depth#1/13 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 } [*]/22 & EnumerateVars-Body$1\1=2/23 (/24 Tile{ AsIs: e.Pattern#3/2 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.Blocks#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.Result#2/9 AsIs: )/12 } {*}/25 </26 & EnumerateVars-Assignments/27 Tile{ AsIs: (/16 } )/28 Tile{ HalfReuse: s.Depth1 #13/17 AsIs: (/20 AsIs: e.ScopeVars#3/18 AsIs: )/21 } Tile{ AsIs: e.Assigns#2/14 } >/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[23], ref_gen_EnumerateVarsm_Body_S1L1A2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[25], context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], ref_EnumerateVarsm_Assignments.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[4] );
  refalrts::reinit_svar( context[17], context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[26] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[28] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[24], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[21] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[25], context[27] );
  res = refalrts::splice_evar( res, context[4], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[22], context[24] );
  refalrts::splice_to_freelist_open( context[0], res );
  refalrts::wrap_closure( context[25] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1A1("EnumerateVars-Body$1\\1=1", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Body_S1L1A1);


static refalrts::FnResult func_gen_EnumerateVarsm_Body_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & EnumerateVars-Body$1\1/4 s.Depth#1/25 (/15 e.ScopeVars#1/13 )/16 (/7 (/11 e.Pattern#2/9 )/12 e.Assigns#2/5 (/23 e.Result#2/21 )/24 (/19 e.Blocks#2/17 )/20 )/8 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[5], context[6] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[5], context[6] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.ScopeVars#1 as range 13
  // closed e.Pattern#2 as range 9
  // closed e.Assigns#2 as range 5
  // closed e.Result#2 as range 21
  // closed e.Blocks#2 as range 17
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.ScopeVars#1: 13
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Assigns#2: 5
  //DEBUG: e.Result#2: 21
  //DEBUG: e.Blocks#2: 17
  //DEBUG: s.Depth#1: 25

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </7 HalfReuse: [*]/11 } Tile{ HalfReuse: & EnumerateVars-Body$1\1=1/24 AsIs: (/19 AsIs: e.Blocks#2/17 AsIs: )/20 HalfReuse: (/8 } Tile{ AsIs: e.Result#2/21 } )/26 s.Depth#1/25/27 Tile{ HalfReuse: (/12 AsIs: e.Assigns#2/5 HalfReuse: )/23 } {*}/28 Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/25 AsIs: (/15 AsIs: e.ScopeVars#1/13 AsIs: )/16 } Tile{ AsIs: e.Pattern#2/9 } >/29 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[27], context[25]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[28], context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_call( context[7] );
  refalrts::reinit_closure_head( context[11] );
  refalrts::reinit_name( context[24], ref_gen_EnumerateVarsm_Body_S1L1A1.ref.function );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[23] );
  refalrts::update_name( context[4], ref_EnumerateVarsm_Expr.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[7] );
  refalrts::push_stack( context[29] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[12], context[23] );
  refalrts::link_brackets( context[8], context[26] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[29], context[29] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[16] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[12], context[23] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[24], context[8] );
  res = refalrts::splice_evar( res, context[7], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Body_S1L1("EnumerateVars-Body$1\\1", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Body_S1L1);


static refalrts::FnResult func_EnumerateVarsm_Body(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: s.$ ( e.$ ) s.$ e.$
  //GLOBAL GEN: s.$ ( e.$ ) s.$ e.$
  // </0 & EnumerateVars-Body/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 s.idxVT#0/10 e.idxVTV#0/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTV#0 as range 2
  do {
    // s.idx ( e.idx ) # Sentences e.idx
    // </0 & EnumerateVars-Body/4 s.Depth#1/5 (/8 e.ScopeVars#1/11 )/9 # Sentences/10 e.Sentences#1/13 >/1
    context[11] = context[6];
    context[12] = context[7];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term(  ident_Sentences, context[10] ) )
      continue;
    // closed e.ScopeVars#1 as range 11
    // closed e.Sentences#1 as range 13
    //DEBUG: s.Depth#1: 5
    //DEBUG: e.ScopeVars#1: 11
    //DEBUG: e.Sentences#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/15 </16 & Map/17 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Body$1\1/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#1/11 AsIs: )/9 HalfReuse: {*}/10 AsIs: e.Sentences#1/13 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[15], ident_Sentences ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ref_Map.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_EnumerateVarsm_Body_S1L1.ref.function );
    refalrts::reinit_unwrapped_closure( context[10], context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[15], context[17] );
    refalrts::use( res );
    refalrts::wrap_closure( context[10] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) # NativeBody t.idx e.idx
  // </0 & EnumerateVars-Body/4 s.Depth#1/5 (/8 e.ScopeVars#1/11 )/9 # NativeBody/10 t.SrcPos#1/15 e.Code#1/13 >/1
  context[11] = context[6];
  context[12] = context[7];
  context[13] = context[2];
  context[14] = context[3];
  if( ! refalrts::ident_term(  ident_NativeBody, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 13
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.ScopeVars#1: 11
  //DEBUG: t.SrcPos#1: 15
  //DEBUG: e.Code#1: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & EnumerateVars-Body/4 s.Depth#1/5 (/8 e.ScopeVars#1/11 )/9 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/10 AsIs: t.SrcPos#1/15 } Tile{ AsIs: e.Code#1/13 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[10], context[16] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Body("EnumerateVars-Body", 39970021U, 2151505377U, func_EnumerateVarsm_Body);


static refalrts::FnResult func_gen_EnumerateVarsm_Blocks_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & EnumerateVars-Blocks\1/4 s.Depth#1/13 (/11 e.ScopeVars#1/9 )/12 (/7 e.Body#2/5 )/8 >/1
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
  // closed e.ScopeVars#1 as range 9
  // closed e.Body#2 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.ScopeVars#1: 9
  //DEBUG: e.Body#2: 5
  //DEBUG: s.Depth#1: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Body/4 AsIs: s.Depth#1/13 AsIs: (/11 AsIs: e.ScopeVars#1/9 AsIs: )/12 } Tile{ AsIs: e.Body#2/5 } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::update_name( context[4], ref_EnumerateVarsm_Body.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[7], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Blocks_L1("EnumerateVars-Blocks\\1", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Blocks_L1);


static refalrts::FnResult func_EnumerateVarsm_Blocks(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & EnumerateVars-Blocks/4 s.Depth#1/5 (/8 e.ScopeVars#1/6 )/9 e.Blocks#1/2 >/1
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
  // closed e.ScopeVars#1 as range 6
  // closed e.Blocks#1 as range 2
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.ScopeVars#1: 6
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </10 & Map/11 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Blocks\1/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#1/6 AsIs: )/9 } {*}/12 Tile{ AsIs: e.Blocks#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[12], context[0] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_EnumerateVarsm_Blocks_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[10] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Blocks("EnumerateVars-Blocks", 39970021U, 2151505377U, func_EnumerateVarsm_Blocks);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A5(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  // </0 & EnumerateVars-Assignments$2=5/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Result#3/10 )/13 (/16 e.Blocks#5/14 )/17 s.Depth#4/18 (/21 e.Assignments#1/19 )/22 (/25 e.ScopeVars#6/23 )/26 e.Pattern#6/2 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Result#3 as range 10
  // closed e.Blocks#5 as range 14
  if( ! refalrts::svar_left( context[18], context[2], context[3] ) )
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
  // closed e.Assignments#1 as range 19
  // closed e.ScopeVars#6 as range 23
  // closed e.Pattern#6 as range 2
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Result#3: 10
  //DEBUG: e.Blocks#5: 14
  //DEBUG: s.Depth#4: 18
  //DEBUG: e.Assignments#1: 19
  //DEBUG: e.ScopeVars#6: 23
  //DEBUG: e.Pattern#6: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.Depth#4/18 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & EnumerateVars-Assignments/4 AsIs: (/7 AsIs: e.RAssignments#1/5 HalfReuse: (/8 AsIs: s.ChainType#1/9 AsIs: (/12 AsIs: e.Result#3/10 AsIs: )/13 AsIs: (/16 AsIs: e.Blocks#5/14 AsIs: )/17 } Tile{ AsIs: (/21 } Tile{ AsIs: e.Pattern#6/2 } )/27 )/28 )/29 Tile{ HalfReuse: s.Depth4 #18/22 AsIs: (/25 AsIs: e.ScopeVars#6/23 AsIs: )/26 } Tile{ AsIs: e.Assignments#1/19 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[29] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_EnumerateVarsm_Assignments.ref.function );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_svar( context[22], context[18] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[7], context[29] );
  refalrts::link_brackets( context[8], context[28] );
  refalrts::link_brackets( context[21], context[27] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[22], context[26] );
  res = refalrts::splice_evar( res, context[27], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[21] );
  refalrts::splice_to_freelist_open( context[17], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A5("EnumerateVars-Assignments$2=5", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Assignments_S2A5);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & EnumerateVars-Assignments$2=4/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Result#3/10 )/13 s.Depth#4/14 (/17 e.Assignments#1/15 )/18 (/21 e.ScopeVars#3/19 )/22 (/25 e.Pattern#1/23 )/26 e.Blocks#5/2 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.Result#3 as range 10
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Assignments#1 as range 15
  // closed e.ScopeVars#3 as range 19
  // closed e.Pattern#1 as range 23
  // closed e.Blocks#5 as range 2
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Result#3: 10
  //DEBUG: s.Depth#4: 14
  //DEBUG: e.Assignments#1: 15
  //DEBUG: e.ScopeVars#3: 19
  //DEBUG: e.Pattern#1: 23
  //DEBUG: e.Blocks#5: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </27 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Assignments$2=5/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/9 AsIs: (/12 AsIs: e.Result#3/10 AsIs: )/13 } (/28 Tile{ AsIs: e.Blocks#5/2 } Tile{ AsIs: )/22 } Tile{ AsIs: s.Depth#4/14 AsIs: (/17 AsIs: e.Assignments#1/15 AsIs: )/18 HalfReuse: {*}/21 } </29 & EnumerateVars-Expr/30 s.Depth#4/14/31 (/32 Tile{ AsIs: e.ScopeVars#3/19 } Tile{ HalfReuse: )/25 AsIs: e.Pattern#1/23 HalfReuse: >/26 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], ref_EnumerateVarsm_Expr.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[31], context[14]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_EnumerateVarsm_Assignments_S2A5.ref.function );
  refalrts::reinit_unwrapped_closure( context[21], context[0] );
  refalrts::reinit_close_bracket( context[25] );
  refalrts::reinit_close_call( context[26] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[29] );
  refalrts::link_brackets( context[32], context[25] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[28], context[22] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[29], context[32] );
  res = refalrts::splice_evar( res, context[14], context[21] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  refalrts::wrap_closure( context[21] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A4("EnumerateVars-Assignments$2=4", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Assignments_S2A4);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & EnumerateVars-Assignments$2=3/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Result#3/10 )/13 (/16 e.Assignments#1/14 )/17 (/20 e.ScopeVars#3/18 )/21 (/24 e.Pattern#1/22 )/25 (/28 e.Blocks#1/26 )/29 s.Depth#4/30 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.Result#3 as range 10
  // closed e.Assignments#1 as range 14
  // closed e.ScopeVars#3 as range 18
  // closed e.Pattern#1 as range 22
  // closed e.Blocks#1 as range 26
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Result#3: 10
  //DEBUG: e.Assignments#1: 14
  //DEBUG: e.ScopeVars#3: 18
  //DEBUG: e.Pattern#1: 22
  //DEBUG: e.Blocks#1: 26
  //DEBUG: s.Depth#4: 30

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Assignments$2=4/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/9 AsIs: (/12 } Tile{ AsIs: e.Result#3/10 } )/32 Tile{ HalfReuse: s.Depth4 #30/13 AsIs: (/16 AsIs: e.Assignments#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.ScopeVars#3/18 AsIs: )/21 AsIs: (/24 AsIs: e.Pattern#1/22 AsIs: )/25 HalfReuse: {*}/28 } </33 Tile{ HalfReuse: & EnumerateVars-Blocks/29 AsIs: s.Depth#4/30 } (/34 e.ScopeVars#3/18/35 )/37 Tile{ AsIs: e.Blocks#1/26 } >/38 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[35], context[36], context[18], context[19]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_EnumerateVarsm_Assignments_S2A4.ref.function );
  refalrts::reinit_svar( context[13], context[30] );
  refalrts::reinit_unwrapped_closure( context[28], context[0] );
  refalrts::reinit_name( context[29], ref_EnumerateVarsm_Blocks.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[33] );
  refalrts::link_brackets( context[34], context[37] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[32] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[34], context[37] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[13], context[28] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A3("EnumerateVars-Assignments$2=3", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Assignments_S2A3);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 34 elems
  refalrts::Iter context[34];
  refalrts::zeros( context, 34 );
  // </0 & EnumerateVars-Assignments$2=2/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/9 (/12 e.Assignments#1/10 )/13 (/16 e.Pattern#1/14 )/17 (/20 e.Blocks#1/18 )/21 s.Depth#1/22 (/25 e.ScopeVars#3/23 )/26 e.Result#3/2 >/1
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
  // closed e.RAssignments#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  // closed e.Assignments#1 as range 10
  // closed e.Pattern#1 as range 14
  // closed e.Blocks#1 as range 18
  if( ! refalrts::svar_left( context[22], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[23] = 0;
  context[24] = 0;
  context[25] = refalrts::brackets_left( context[23], context[24], context[2], context[3] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[25], context[26]);
  // closed e.ScopeVars#3 as range 23
  // closed e.Result#3 as range 2
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: s.ChainType#1: 9
  //DEBUG: e.Assignments#1: 10
  //DEBUG: e.Pattern#1: 14
  //DEBUG: e.Blocks#1: 18
  //DEBUG: s.Depth#1: 22
  //DEBUG: e.ScopeVars#3: 23
  //DEBUG: e.Result#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </27 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Assignments$2=3/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/9 AsIs: (/12 } Tile{ AsIs: e.Result#3/2 } )/28 (/29 Tile{ AsIs: e.Assignments#1/10 } Tile{ AsIs: )/26 } (/30 Tile{ AsIs: e.ScopeVars#3/23 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.Pattern#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Blocks#1/18 AsIs: )/21 } {*}/31 </32 & Inc/33 Tile{ AsIs: s.Depth#1/22 HalfReuse: >/25 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[31], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], ref_Inc.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_EnumerateVarsm_Assignments_S2A3.ref.function );
  refalrts::reinit_close_call( context[25] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[25] );
  refalrts::push_stack( context[32] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[30], context[13] );
  refalrts::link_brackets( context[29], context[26] );
  refalrts::link_brackets( context[12], context[28] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[22], context[25] );
  res = refalrts::splice_evar( res, context[31], context[33] );
  res = refalrts::splice_evar( res, context[13], context[21] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  refalrts::use( res );
  refalrts::wrap_closure( context[31] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A2("EnumerateVars-Assignments$2=2", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Assignments_S2A2);


static refalrts::FnResult func_gen_EnumerateVarsm_Assignments_S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  // </0 & EnumerateVars-Assignments$2=1/4 (/7 e.RAssignments#1/5 )/8 s.ChainType#1/17 (/20 e.Assignments#1/18 )/21 (/24 e.Pattern#1/22 )/25 (/28 e.Blocks#1/26 )/29 s.Depth#1/30 (/15 e.ScopeVars#1/13 )/16 (/11 e.Result#1/9 )/12 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  // closed e.RAssignments#1 as range 5
  // closed e.ScopeVars#1 as range 13
  // closed e.Result#1 as range 9
  if( ! refalrts::svar_left( context[17], context[2], context[3] ) )
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
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.Assignments#1 as range 18
  // closed e.Pattern#1 as range 22
  // closed e.Blocks#1 as range 26
  if( ! refalrts::svar_left( context[30], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.RAssignments#1: 5
  //DEBUG: e.ScopeVars#1: 13
  //DEBUG: e.Result#1: 9
  //DEBUG: s.ChainType#1: 17
  //DEBUG: e.Assignments#1: 18
  //DEBUG: e.Pattern#1: 22
  //DEBUG: e.Blocks#1: 26
  //DEBUG: s.Depth#1: 30

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </31 Tile{ HalfReuse: [*]/0 Reuse: & EnumerateVars-Assignments$2=2/4 AsIs: (/7 AsIs: e.RAssignments#1/5 AsIs: )/8 AsIs: s.ChainType#1/17 AsIs: (/20 AsIs: e.Assignments#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.Pattern#1/22 AsIs: )/25 AsIs: (/28 AsIs: e.Blocks#1/26 AsIs: )/29 AsIs: s.Depth#1/30 HalfReuse: {*}/15 } </32 Tile{ HalfReuse: & EnumerateVars-Expr/16 } s.Depth#1/30/33 (/34 Tile{ AsIs: e.ScopeVars#1/13 } Tile{ HalfReuse: )/11 AsIs: e.Result#1/9 HalfReuse: >/12 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[33], context[30]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_EnumerateVarsm_Assignments_S2A2.ref.function );
  refalrts::reinit_unwrapped_closure( context[15], context[0] );
  refalrts::reinit_name( context[16], ref_EnumerateVarsm_Expr.ref.function );
  refalrts::reinit_close_bracket( context[11] );
  refalrts::reinit_close_call( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[32] );
  refalrts::link_brackets( context[34], context[11] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[11];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[33], context[34] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[32], context[32] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Assignments_S2A1("EnumerateVars-Assignments$2=1", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Assignments_S2A1);


static refalrts::FnResult func_EnumerateVarsm_Assignments(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) s.$ ( e.$ ) e.$
  // </0 & EnumerateVars-Assignments/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 (/12 e.idxTVB#0/10 )/13 e.idxTVT#0/2 >/1
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
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  // closed e.idxTVB#0 as range 10
  // closed e.idxTVT#0 as range 2
  do {
    // ( e.idx ) s.idx ( e.idx )
    // </0 & EnumerateVars-Assignments/4 (/7 e.RAssignments#1/14 )/8 s.Depth#1/9 (/12 e.ScopeVars#1/16 )/13 >/1
    context[14] = context[5];
    context[15] = context[6];
    context[16] = context[10];
    context[17] = context[11];
    context[18] = context[2];
    context[19] = context[3];
    if( ! refalrts::empty_seq( context[18], context[19] ) )
      continue;
    // closed e.RAssignments#1 as range 14
    // closed e.ScopeVars#1 as range 16
    //DEBUG: s.Depth#1: 9
    //DEBUG: e.RAssignments#1: 14
    //DEBUG: e.ScopeVars#1: 16

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & EnumerateVars-Assignments/4 (/7 {REMOVED TILE} )/8 s.Depth#1/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/12 AsIs: e.ScopeVars#1/16 AsIs: )/13 HalfReuse: s.Depth1 #9/1 } Tile{ AsIs: e.RAssignments#1/14 } Tile{ ]] }
    refalrts::reinit_svar( context[1], context[9] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx ( e.idx ) ( s.idx ( e.idx ) ( e.idx ) ( e.idx ) ) e.idx
  // </0 & EnumerateVars-Assignments/4 (/7 e.RAssignments#1/14 )/8 s.Depth#1/9 (/12 e.ScopeVars#1/16 )/13 (/22 s.ChainType#1/36 (/34 e.Result#1/32 )/35 (/30 e.Blocks#1/28 )/31 (/26 e.Pattern#1/24 )/27 )/23 e.Assignments#1/18 >/1
  context[14] = context[5];
  context[15] = context[6];
  context[16] = context[10];
  context[17] = context[11];
  context[18] = context[2];
  context[19] = context[3];
  context[20] = 0;
  context[21] = 0;
  context[22] = refalrts::brackets_left( context[20], context[21], context[18], context[19] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[22], context[23]);
  context[24] = 0;
  context[25] = 0;
  context[26] = refalrts::brackets_right( context[24], context[25], context[20], context[21] );
  if( ! context[26] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[26], context[27]);
  context[28] = 0;
  context[29] = 0;
  context[30] = refalrts::brackets_right( context[28], context[29], context[20], context[21] );
  if( ! context[30] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[30], context[31]);
  context[32] = 0;
  context[33] = 0;
  context[34] = refalrts::brackets_right( context[32], context[33], context[20], context[21] );
  if( ! context[34] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[34], context[35]);
  // closed e.RAssignments#1 as range 14
  // closed e.ScopeVars#1 as range 16
  // closed e.Result#1 as range 32
  // closed e.Blocks#1 as range 28
  // closed e.Pattern#1 as range 24
  // closed e.Assignments#1 as range 18
  if( ! refalrts::svar_left( context[36], context[20], context[21] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[20], context[21] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.Depth#1: 9
  //DEBUG: e.RAssignments#1: 14
  //DEBUG: e.ScopeVars#1: 16
  //DEBUG: e.Result#1: 32
  //DEBUG: e.Blocks#1: 28
  //DEBUG: e.Pattern#1: 24
  //DEBUG: e.Assignments#1: 18
  //DEBUG: s.ChainType#1: 36

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & EnumerateVars-Assignments$2=1/7 } (/37 Tile{ AsIs: e.RAssignments#1/14 } )/38 Tile{ AsIs: s.ChainType#1/36 AsIs: (/34 } Tile{ AsIs: e.Assignments#1/18 } Tile{ AsIs: )/31 AsIs: (/26 AsIs: e.Pattern#1/24 AsIs: )/27 HalfReuse: (/23 } Tile{ AsIs: e.Blocks#1/28 } Tile{ AsIs: )/8 AsIs: s.Depth#1/9 AsIs: (/12 AsIs: e.ScopeVars#1/16 AsIs: )/13 AsIs: (/22 } Tile{ AsIs: e.Result#1/32 } Tile{ AsIs: )/35 HalfReuse: {*}/30 } </39 & AssignOrCondition/40 s.ChainType#1/36/41 >/42 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[40], ref_AssignOrCondition.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[41], context[36]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[42] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_EnumerateVarsm_Assignments_S2A1.ref.function );
  refalrts::reinit_open_bracket( context[23] );
  refalrts::reinit_unwrapped_closure( context[30], context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[42] );
  refalrts::push_stack( context[39] );
  refalrts::link_brackets( context[22], context[35] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[23], context[8] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[34], context[31] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[39], context[42] );
  res = refalrts::splice_evar( res, context[35], context[30] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[8], context[22] );
  res = refalrts::splice_evar( res, context[28], context[29] );
  res = refalrts::splice_evar( res, context[31], context[23] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[36], context[34] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  refalrts::use( res );
  refalrts::wrap_closure( context[30] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Assignments("EnumerateVars-Assignments", 39970021U, 2151505377U, func_EnumerateVarsm_Assignments);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S4L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & EnumerateVars-Expr\1$4\1/4 (/7 e.ScopeVars#3/5 )/8 e.InBrackets#3/2 >/1
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
  // closed e.ScopeVars#3 as range 5
  // closed e.InBrackets#3 as range 2
  //DEBUG: e.ScopeVars#3: 5
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#3/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Brackets/4 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Brackets );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S4L1("EnumerateVars-Expr\\1$4\\1", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Expr_L1S4L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S5L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & EnumerateVars-Expr\1$5\1/4 (/7 e.Name#2/5 )/8 (/11 e.ScopeVars#3/9 )/12 e.InBrackets#3/2 >/1
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
  // closed e.Name#2 as range 5
  // closed e.ScopeVars#3 as range 9
  // closed e.InBrackets#3 as range 2
  //DEBUG: e.Name#2: 5
  //DEBUG: e.ScopeVars#3: 9
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.ScopeVars#3/9 AsIs: )/12 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_ADTm_Brackets );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S5L1("EnumerateVars-Expr\\1$5\\1", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Expr_L1S5L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S6L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & EnumerateVars-Expr\1$6\1/4 (/7 e.ScopeVars#3/5 )/8 e.InBrackets#3/2 >/1
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
  // closed e.ScopeVars#3 as range 5
  // closed e.InBrackets#3 as range 2
  //DEBUG: e.ScopeVars#3: 5
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#3/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # CallBrackets/4 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_CallBrackets );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S6L1("EnumerateVars-Expr\\1$6\\1", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Expr_L1S6L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1S7L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & EnumerateVars-Expr\1$7\1/4 (/7 e.ScopeVars#2/5 )/8 e.Sentences#3/2 >/1
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
  // closed e.ScopeVars#2 as range 5
  // closed e.Sentences#3 as range 2
  //DEBUG: e.ScopeVars#2: 5
  //DEBUG: e.Sentences#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.ScopeVars#2/5 AsIs: )/8 } Tile{ HalfReuse: (/0 HalfReuse: # Closure/4 } Tile{ AsIs: e.Sentences#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Closure );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1S7L1("EnumerateVars-Expr\\1$7\\1", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Expr_L1S7L1);


static refalrts::FnResult func_gen_EnumerateVarsm_Expr_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 30 elems
  refalrts::Iter context[30];
  refalrts::zeros( context, 30 );
  //FAST GEN: s.$ ( e.$ ) t.$
  //GLOBAL GEN: s.$ ( e.$ ) t.$
  // </0 & EnumerateVars-Expr\1/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 t.idxVT#0/10 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx ( e.idx ) ( # TkVariable s.idx e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars-B#2/18 (/24 s.Mode#2/26 e.Index#2/27 s.Depth#2/29 )/25 e.ScopeVars-E#2/20 )/9 (/10 # TkVariable/16 s.Mode#2/17 e.Index#2/14 )/11 >/1
    context[12] = context[6];
    context[13] = context[7];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_TkVariable, context[14], context[15] );
    if( ! context[16] )
      continue;
    if( ! refalrts::svar_left( context[17], context[14], context[15] ) )
      continue;
    // closed e.Index#2 as range 14
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[20] = context[12];
      context[21] = context[13];
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[20], context[21] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::repeated_stvar_left( context[26], context[17], context[22], context[23] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[27], context[28], context[14], context[15], context[22], context[23] ) )
        continue;
      // closed e.ScopeVars-E#2 as range 20
      if( ! refalrts::svar_left( context[29], context[22], context[23] ) )
        continue;
      if( ! refalrts::empty_seq( context[22], context[23] ) )
        continue;
      //DEBUG: s.Depth#1: 5
      //DEBUG: s.Mode#2: 17
      //DEBUG: e.Index#2: 14
      //DEBUG: e.ScopeVars-B#2: 18
      //DEBUG: e.ScopeVars-E#2: 20
      //DEBUG: s.Depth#2: 29

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.ScopeVars-B#2/18 AsIs: (/24 AsIs: s.Mode#2/26 AsIs: e.Index#2/27 AsIs: s.Depth#2/29 AsIs: )/25 AsIs: e.ScopeVars-E#2/20 AsIs: )/9 AsIs: (/10 AsIs: # TkVariable/16 AsIs: s.Mode#2/17 AsIs: e.Index#2/14 HalfReuse: s.Depth2 #29/11 HalfReuse: )/1 ]] }
      refalrts::reinit_svar( context[11], context[29] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[10], context[1] );
      refalrts::link_brackets( context[8], context[9] );
      refalrts::link_brackets( context[24], context[25] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[8];
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[18], context[19], context[12], context[13] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # TkVariable s.idx e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/12 )/9 (/10 # TkVariable/16 s.Mode#2/17 e.Index#2/14 )/11 >/1
    context[12] = context[6];
    context[13] = context[7];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_TkVariable, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.ScopeVars#2 as range 12
    if( ! refalrts::svar_left( context[17], context[14], context[15] ) )
      continue;
    // closed e.Index#2 as range 14
    //DEBUG: s.Depth#1: 5
    //DEBUG: e.ScopeVars#2: 12
    //DEBUG: s.Mode#2: 17
    //DEBUG: e.Index#2: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } s.Mode#2/17/18 e.Index#2/14/19 Tile{ AsIs: s.Depth#1/5 HalfReuse: )/8 AsIs: e.ScopeVars#2/12 AsIs: )/9 AsIs: (/10 AsIs: # TkVariable/16 AsIs: s.Mode#2/17 AsIs: e.Index#2/14 HalfReuse: s.Depth1 #5/11 HalfReuse: )/1 ]] }
    if (! refalrts::copy_stvar(context[18], context[17]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[14], context[15]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[8] );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::link_brackets( context[0], context[9] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # TkNewVariable s.idx e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/12 )/9 (/10 # TkNewVariable/16 s.Mode#2/17 e.Index#2/14 )/11 >/1
    context[12] = context[6];
    context[13] = context[7];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_TkNewVariable, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.ScopeVars#2 as range 12
    if( ! refalrts::svar_left( context[17], context[14], context[15] ) )
      continue;
    // closed e.Index#2 as range 14
    //DEBUG: s.Depth#1: 5
    //DEBUG: e.ScopeVars#2: 12
    //DEBUG: s.Mode#2: 17
    //DEBUG: e.Index#2: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } s.Mode#2/17/18 e.Index#2/14/19 Tile{ AsIs: s.Depth#1/5 HalfReuse: )/8 AsIs: e.ScopeVars#2/12 AsIs: )/9 AsIs: (/10 Reuse: # TkVariable/16 AsIs: s.Mode#2/17 AsIs: e.Index#2/14 HalfReuse: s.Depth1 #5/11 HalfReuse: )/1 ]] }
    if (! refalrts::copy_stvar(context[18], context[17]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[19], context[20], context[14], context[15]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[8] );
    refalrts::update_ident( context[16], ident_TkVariable );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::link_brackets( context[0], context[9] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[5];
    res = refalrts::splice_evar( res, context[19], context[20] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # Brackets e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/12 )/9 (/10 # Brackets/16 e.InBrackets#2/14 )/11 >/1
    context[12] = context[6];
    context[13] = context[7];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_Brackets, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.ScopeVars#2 as range 12
    // closed e.InBrackets#2 as range 14
    //DEBUG: s.Depth#1: 5
    //DEBUG: e.ScopeVars#2: 12
    //DEBUG: e.InBrackets#2: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/16 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/12 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/14 } >/17 Tile{ HalfReuse: & EnumerateVars-Expr\1$4\1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[16], ref_Fetch.ref.function );
    refalrts::update_name( context[4], ref_EnumerateVarsm_Expr.ref.function );
    refalrts::reinit_name( context[11], ref_gen_EnumerateVarsm_Expr_L1S4L1.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[10], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/12 )/9 (/10 # ADT-Brackets/16 (/19 e.Name#2/17 )/20 e.InBrackets#2/14 )/11 >/1
    context[12] = context[6];
    context[13] = context[7];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_ADTm_Brackets, context[14], context[15] );
    if( ! context[16] )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[14], context[15] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.ScopeVars#2 as range 12
    // closed e.Name#2 as range 17
    // closed e.InBrackets#2 as range 14
    //DEBUG: s.Depth#1: 5
    //DEBUG: e.ScopeVars#2: 12
    //DEBUG: e.Name#2: 17
    //DEBUG: e.InBrackets#2: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & Fetch/22 Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/12 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/14 } >/23 Tile{ HalfReuse: [*]/10 HalfReuse: & EnumerateVars-Expr\1$5\1/16 AsIs: (/19 AsIs: e.Name#2/17 AsIs: )/20 } Tile{ HalfReuse: {*}/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_EnumerateVarsm_Expr.ref.function );
    refalrts::reinit_closure_head( context[10] );
    refalrts::reinit_name( context[16], ref_gen_EnumerateVarsm_Expr_L1S5L1.ref.function );
    refalrts::reinit_unwrapped_closure( context[11], context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[10], context[20] );
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[21], context[22] );
    refalrts::use( res );
    refalrts::wrap_closure( context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # CallBrackets e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/12 )/9 (/10 # CallBrackets/16 e.InBrackets#2/14 )/11 >/1
    context[12] = context[6];
    context[13] = context[7];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_CallBrackets, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.ScopeVars#2 as range 12
    // closed e.InBrackets#2 as range 14
    //DEBUG: s.Depth#1: 5
    //DEBUG: e.ScopeVars#2: 12
    //DEBUG: e.InBrackets#2: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/16 } Tile{ AsIs: </0 Reuse: & EnumerateVars-Expr/4 AsIs: s.Depth#1/5 AsIs: (/8 AsIs: e.ScopeVars#2/12 AsIs: )/9 } Tile{ AsIs: e.InBrackets#2/14 } >/17 Tile{ HalfReuse: & EnumerateVars-Expr\1$6\1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[16], ref_Fetch.ref.function );
    refalrts::update_name( context[4], ref_EnumerateVarsm_Expr.ref.function );
    refalrts::reinit_name( context[11], ref_gen_EnumerateVarsm_Expr_L1S6L1.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[10], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( # Closure e.idx )
    // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/12 )/9 (/10 # Closure/16 e.Sentences#2/14 )/11 >/1
    context[12] = context[6];
    context[13] = context[7];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_Closure, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.ScopeVars#2 as range 12
    // closed e.Sentences#2 as range 14
    //DEBUG: s.Depth#1: 5
    //DEBUG: e.ScopeVars#2: 12
    //DEBUG: e.Sentences#2: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} s.Depth#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </17 & EnumerateVars-Body/18 </19 & Inc/20 Tile{ HalfReuse: s.Depth1 #5/11 AsIs: >/1 } (/21 e.ScopeVars#2/12/22 )/24 Tile{ AsIs: e.Sentences#2/14 } >/25 [*]/26 & EnumerateVars-Expr\1$7\1/27 Tile{ AsIs: (/8 AsIs: e.ScopeVars#2/12 AsIs: )/9 HalfReuse: {*}/10 HalfReuse: >/16 } Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ref_EnumerateVarsm_Body.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[22], context[23], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_closure_head( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], ref_gen_EnumerateVarsm_Expr_L1S7L1.ref.function ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Fetch.ref.function );
    refalrts::reinit_svar( context[11], context[5] );
    refalrts::reinit_unwrapped_closure( context[10], context[26] );
    refalrts::reinit_close_call( context[16] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[21], context[24] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[19] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[8], context[16] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_evar( res, context[11], context[1] );
    res = refalrts::splice_evar( res, context[17], context[20] );
    refalrts::splice_to_freelist_open( context[4], res );
    refalrts::wrap_closure( context[10] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) t.idx
  // </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 (/8 e.ScopeVars#2/12 )/9 t.OtherTerm#2/10 >/1
  context[12] = context[6];
  context[13] = context[7];
  // closed e.ScopeVars#2 as range 12
  //DEBUG: t.OtherTerm#2: 10
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.ScopeVars#2: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & EnumerateVars-Expr\1/4 s.Depth#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/8 AsIs: e.ScopeVars#2/12 AsIs: )/9 AsIs: t.OtherTerm#2/10 } Tile{ ]] }
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[11] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_EnumerateVarsm_Expr_L1("EnumerateVars-Expr\\1", 39970021U, 2151505377U, func_gen_EnumerateVarsm_Expr_L1);


static refalrts::FnResult func_EnumerateVarsm_Expr(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & EnumerateVars-Expr/4 s.Depth#1/5 (/8 e.OriginScopeVars#1/6 )/9 e.Expr#1/2 >/1
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
  // closed e.OriginScopeVars#1 as range 6
  // closed e.Expr#1 as range 2
  //DEBUG: s.Depth#1: 5
  //DEBUG: e.OriginScopeVars#1: 6
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } [*]/10 & EnumerateVars-Expr\1/11 Tile{ AsIs: s.Depth#1/5 } {*}/12 Tile{ AsIs: (/8 AsIs: e.OriginScopeVars#1/6 AsIs: )/9 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_gen_EnumerateVarsm_Expr_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[12], context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_MapReduce.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_EnumerateVarsm_Expr("EnumerateVars-Expr", 39970021U, 2151505377U, func_EnumerateVarsm_Expr);


static refalrts::FnResult func_gen_Passm_NameNestedFuncs_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & Pass-NameNestedFuncs\1/4 t.idx#0/5 >/1
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
    // ( # Function s.idx ( e.idx ) e.idx )
    // </0 & Pass-NameNestedFuncs\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_Function, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & NameNestedBody/4 } (/15 e.Name#2/11/16 # SUF/18 )/19 Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[15] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[16], context[17], context[11], context[12]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], ident_SUF ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_NameNestedBody.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[19] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[15], context[19] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & Pass-NameNestedFuncs\1/4 t.OtherProgramElement#2/5 >/1
  //DEBUG: t.OtherProgramElement#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-NameNestedFuncs\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_NameNestedFuncs_L1("Pass-NameNestedFuncs\\1", 39970021U, 2151505377U, func_gen_Passm_NameNestedFuncs_L1);


static refalrts::FnResult func_Passm_NameNestedFuncs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-NameNestedFuncs/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-NameNestedFuncs\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_Passm_NameNestedFuncs_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_NameNestedFuncs("Pass-NameNestedFuncs", 39970021U, 2151505377U, func_Passm_NameNestedFuncs);


static refalrts::FnResult func_gen_NameNestedBody_S2L1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & NameNestedBody$2\1=1/4 s.SentenceNumber#2/5 (/8 e.Pattern#2/6 )/9 (/12 e.Assigns#2/10 )/13 (/16 e.Result#2/14 )/17 (/20 e.Blocks#2/18 )/21 e.MainName#3/2 >/1
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
  // closed e.Pattern#2 as range 6
  // closed e.Assigns#2 as range 10
  // closed e.Result#2 as range 14
  // closed e.Blocks#2 as range 18
  // closed e.MainName#3 as range 2
  //DEBUG: s.SentenceNumber#2: 5
  //DEBUG: e.Pattern#2: 6
  //DEBUG: e.Assigns#2: 10
  //DEBUG: e.Result#2: 14
  //DEBUG: e.Blocks#2: 18
  //DEBUG: e.MainName#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.SentenceNumber#2/5 HalfReuse: >/8 } (/22 (/23 Tile{ AsIs: e.Pattern#2/6 } Tile{ AsIs: )/9 } </24 & NameNestedAssigns/25 (/26 e.MainName#3/2/27 Tile{ HalfReuse: )/12 AsIs: e.Assigns#2/10 HalfReuse: >/13 AsIs: (/16 } </29 & NameNestedResult/30 Tile{ HalfReuse: (/21 AsIs: e.MainName#3/2 HalfReuse: )/1 } Tile{ AsIs: e.Result#2/14 } >/31 Tile{ AsIs: )/17 AsIs: (/20 } </32 & NameNestedBlocks/33 (/34 e.MainName#3/2/35 )/37 Tile{ AsIs: e.Blocks#2/18 } >/38 )/39 )/40 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[25], ref_NameNestedAssigns.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[27], context[28], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[30], ref_NameNestedResult.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], ref_NameNestedBlocks.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[35], context[36], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Inc.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[12] );
  refalrts::reinit_close_call( context[13] );
  refalrts::reinit_open_bracket( context[21] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[22], context[40] );
  refalrts::link_brackets( context[20], context[39] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[32] );
  refalrts::link_brackets( context[34], context[37] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[29] );
  refalrts::link_brackets( context[21], context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[26], context[12] );
  refalrts::link_brackets( context[23], context[9] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[38], context[40] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[32], context[37] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[31], context[31] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[21], context[1] );
  res = refalrts::splice_evar( res, context[29], context[30] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[27], context[28] );
  res = refalrts::splice_evar( res, context[24], context[26] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBody_S2L1A1("NameNestedBody$2\\1=1", 39970021U, 2151505377U, func_gen_NameNestedBody_S2L1A1);


static refalrts::FnResult func_gen_NameNestedBody_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  // </0 & NameNestedBody$2\1/4 (/7 e.MainName#1/5 )/8 s.SentenceNumber#2/25 (/11 (/15 e.Pattern#2/13 )/16 e.Assigns#2/9 (/23 e.Result#2/21 )/24 (/19 e.Blocks#2/17 )/20 )/12 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[9], context[10] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.MainName#1 as range 5
  // closed e.Pattern#2 as range 13
  // closed e.Assigns#2 as range 9
  // closed e.Result#2 as range 21
  // closed e.Blocks#2 as range 17
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Pattern#2: 13
  //DEBUG: e.Assigns#2: 9
  //DEBUG: e.Result#2: 21
  //DEBUG: e.Blocks#2: 17
  //DEBUG: s.SentenceNumber#2: 25

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & NameNestedBody$2\1=1/7 } Tile{ HalfReuse: s.SentenceNumber2 #25/11 AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 } (/26 Tile{ AsIs: e.Assigns#2/9 } )/27 Tile{ AsIs: (/23 AsIs: e.Result#2/21 AsIs: )/24 AsIs: (/19 AsIs: e.Blocks#2/17 AsIs: )/20 HalfReuse: {*}/12 } Tile{ AsIs: e.MainName#1/5 } Tile{ HalfReuse: '$'/8 AsIs: s.SentenceNumber#2/25 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_NameNestedBody_S2L1A1.ref.function );
  refalrts::reinit_svar( context[11], context[25] );
  refalrts::reinit_unwrapped_closure( context[12], context[4] );
  refalrts::reinit_char( context[8], '$' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[26], context[27] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[25] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[23], context[12] );
  res = refalrts::splice_evar( res, context[27], context[27] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[12] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBody_S2L1("NameNestedBody$2\\1", 39970021U, 2151505377U, func_gen_NameNestedBody_S2L1);


static refalrts::FnResult func_NameNestedBody(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & NameNestedBody/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
  // closed e.idxTV#0 as range 2
  do {
    // ( e.idx ) # Sentences ( ( e.idx ) e.idx ( e.idx ) ( e.idx ) )
    // </0 & NameNestedBody/4 (/7 e.MainName#1/10 )/8 # Sentences/9 (/16 (/20 e.Pattern#1/18 )/21 e.Assigns#1/14 (/28 e.Result#1/26 )/29 (/24 e.Blocks#1/22 )/25 )/17 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term(  ident_Sentences, context[9] ) )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[12], context[13] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    context[22] = 0;
    context[23] = 0;
    context[24] = refalrts::brackets_right( context[22], context[23], context[14], context[15] );
    if( ! context[24] )
      continue;
    refalrts::bracket_pointers(context[24], context[25]);
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_right( context[26], context[27], context[14], context[15] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    if( ! refalrts::empty_seq( context[12], context[13] ) )
      continue;
    // closed e.MainName#1 as range 10
    // closed e.Pattern#1 as range 18
    // closed e.Assigns#1 as range 14
    // closed e.Result#1 as range 26
    // closed e.Blocks#1 as range 22
    //DEBUG: e.MainName#1: 10
    //DEBUG: e.Pattern#1: 18
    //DEBUG: e.Assigns#1: 14
    //DEBUG: e.Result#1: 26
    //DEBUG: e.Blocks#1: 22

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: # Sentences/9 AsIs: (/16 AsIs: (/20 AsIs: e.Pattern#1/18 AsIs: )/21 } Tile{ AsIs: </0 Reuse: & NameNestedAssigns/4 AsIs: (/7 AsIs: e.MainName#1/10 AsIs: )/8 } Tile{ AsIs: e.Assigns#1/14 } >/30 (/31 </32 & NameNestedResult/33 (/34 e.MainName#1/10/35 Tile{ HalfReuse: )/28 AsIs: e.Result#1/26 HalfReuse: >/29 } )/37 (/38 </39 & NameNestedBlocks/40 (/41 e.MainName#1/10/42 Tile{ HalfReuse: )/24 AsIs: e.Blocks#1/22 HalfReuse: >/25 AsIs: )/17 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_close_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[33], ref_NameNestedResult.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[35], context[36], context[10], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[38] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[39] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[40], ref_NameNestedBlocks.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[41] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[42], context[43], context[10], context[11]))
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_NameNestedAssigns.ref.function );
    refalrts::reinit_close_bracket( context[28] );
    refalrts::reinit_close_call( context[29] );
    refalrts::reinit_close_bracket( context[24] );
    refalrts::reinit_close_call( context[25] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[38], context[17] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[39] );
    refalrts::link_brackets( context[41], context[24] );
    refalrts::link_brackets( context[31], context[37] );
    refalrts::push_stack( context[29] );
    refalrts::push_stack( context[32] );
    refalrts::link_brackets( context[34], context[28] );
    refalrts::push_stack( context[30] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[24];
    res = refalrts::splice_evar( res, context[42], context[43] );
    res = refalrts::splice_evar( res, context[37], context[41] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[30], context[34] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[9], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) # Sentences e.idx
    // </0 & NameNestedBody/4 (/7 e.MainName#1/10 )/8 # Sentences/9 e.Sentences#1/12 >/1
    context[10] = context[5];
    context[11] = context[6];
    context[12] = context[2];
    context[13] = context[3];
    if( ! refalrts::ident_term(  ident_Sentences, context[9] ) )
      continue;
    // closed e.MainName#1 as range 10
    // closed e.Sentences#1 as range 12
    //DEBUG: e.MainName#1: 10
    //DEBUG: e.Sentences#1: 12

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/14 </15 & DelAccumulator/16 </17 & MapReduce/18 Tile{ HalfReuse: [*]/0 Reuse: & NameNestedBody$2\1/4 AsIs: (/7 AsIs: e.MainName#1/10 AsIs: )/8 HalfReuse: {*}/9 } 1/19 Tile{ AsIs: e.Sentences#1/12 } >/20 Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[14], ident_Sentences ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_DelAccumulator.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ref_MapReduce.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[19], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[0] );
    refalrts::update_name( context[4], ref_gen_NameNestedBody_S2L1.ref.function );
    refalrts::reinit_unwrapped_closure( context[9], context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[0], context[9] );
    res = refalrts::splice_evar( res, context[14], context[18] );
    refalrts::use( res );
    refalrts::wrap_closure( context[9] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) # NativeBody t.idx e.idx
  // </0 & NameNestedBody/4 (/7 e.MainName#1/10 )/8 # NativeBody/9 t.SrcPos#1/14 e.Code#1/12 >/1
  context[10] = context[5];
  context[11] = context[6];
  context[12] = context[2];
  context[13] = context[3];
  if( ! refalrts::ident_term(  ident_NativeBody, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.MainName#1 as range 10
  context[15] = refalrts::tvar_left( context[14], context[12], context[13] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 12
  //DEBUG: e.MainName#1: 10
  //DEBUG: t.SrcPos#1: 14
  //DEBUG: e.Code#1: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & NameNestedBody/4 (/7 e.MainName#1/10 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/9 AsIs: t.SrcPos#1/14 } Tile{ AsIs: e.Code#1/12 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[9], context[15] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedBody("NameNestedBody", 39970021U, 2151505377U, func_NameNestedBody);


static refalrts::FnResult func_gen_NameNestedBlocks_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & NameNestedBlocks=1/4 s.BlockNumber#2/5 e.Blocks#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Blocks#2 as range 2
  //DEBUG: s.BlockNumber#2: 5
  //DEBUG: e.Blocks#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & NameNestedBlocks=1/4 s.BlockNumber#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Blocks#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBlocks_A1("NameNestedBlocks=1", 39970021U, 2151505377U, func_gen_NameNestedBlocks_A1);


static refalrts::FnResult func_gen_NameNestedBlocks_A1L1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  // </0 & NameNestedBlocks=1\1=1/4 s.BlockNumber#2/5 (/8 e.Body#2/6 )/9 e.MainName#3/2 >/1
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
  // closed e.Body#2 as range 6
  // closed e.MainName#3 as range 2
  //DEBUG: s.BlockNumber#2: 5
  //DEBUG: e.Body#2: 6
  //DEBUG: e.MainName#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.BlockNumber#2/5 HalfReuse: >/8 } (/10 Tile{ HalfReuse: (/9 AsIs: e.MainName#3/2 HalfReuse: )/1 } </11 & NameNestedBody/12 (/13 e.MainName#3/2/14 )/16 Tile{ AsIs: e.Body#2/6 } >/17 )/18 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_NameNestedBody.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[13] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[14], context[15], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Inc.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[10], context[18] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[13], context[16] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[10], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBlocks_A1L1A1("NameNestedBlocks=1\\1=1", 39970021U, 2151505377U, func_gen_NameNestedBlocks_A1L1A1);


static refalrts::FnResult func_gen_NameNestedBlocks_A1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & NameNestedBlocks=1\1/4 (/7 e.MainName#1/5 )/8 s.BlockNumber#2/13 (/11 e.Body#2/9 )/12 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Body#2 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Body#2: 9
  //DEBUG: s.BlockNumber#2: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & NameNestedBlocks=1\1=1/8 AsIs: s.BlockNumber#2/13 AsIs: (/11 AsIs: e.Body#2/9 AsIs: )/12 HalfReuse: {*}/1 } Tile{ AsIs: e.MainName#1/5 } Tile{ HalfReuse: ':'/7 } s.BlockNumber#2/13/14 >/15 Tile{ ]] }
  if (! refalrts::copy_stvar(context[14], context[13]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[8], ref_gen_NameNestedBlocks_A1L1A1.ref.function );
  refalrts::reinit_unwrapped_closure( context[1], context[4] );
  refalrts::reinit_char( context[7], ':' );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[1] );
  refalrts::use( res );
  refalrts::wrap_closure( context[1] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedBlocks_A1L1("NameNestedBlocks=1\\1", 39970021U, 2151505377U, func_gen_NameNestedBlocks_A1L1);


static refalrts::FnResult func_NameNestedBlocks(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & NameNestedBlocks/4 (/7 e.MainName#1/5 )/8 e.Blocks#1/2 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Blocks#1 as range 2
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & NameNestedBlocks=1/10 </11 & MapReduce/12 Tile{ HalfReuse: [*]/0 Reuse: & NameNestedBlocks=1\1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } {*}/13 1/14 Tile{ AsIs: e.Blocks#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_gen_NameNestedBlocks_A1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[13], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[14], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_NameNestedBlocks_A1L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedBlocks("NameNestedBlocks", 39970021U, 2151505377U, func_NameNestedBlocks);


static refalrts::FnResult func_gen_NameNestedAssigns_L1A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 37 elems
  refalrts::Iter context[37];
  refalrts::zeros( context, 37 );
  // </0 & NameNestedAssigns\1=2/4 s.AssignId#2/5 s.ChainType#2/6 (/9 e.Result#2/7 )/10 (/13 e.Blocks#2/11 )/14 (/17 e.Pattern#2/15 )/18 e.MainName#4/2 >/1
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
  // closed e.Result#2 as range 7
  // closed e.Blocks#2 as range 11
  // closed e.Pattern#2 as range 15
  // closed e.MainName#4 as range 2
  //DEBUG: s.AssignId#2: 5
  //DEBUG: s.ChainType#2: 6
  //DEBUG: e.Result#2: 7
  //DEBUG: e.Blocks#2: 11
  //DEBUG: e.Pattern#2: 15
  //DEBUG: e.MainName#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Inc/4 AsIs: s.AssignId#2/5 } >/19 (/20 Tile{ AsIs: s.ChainType#2/6 AsIs: (/9 } e.MainName#4/2/21 Tile{ AsIs: )/10 AsIs: (/13 } </23 & NameNestedResult/24 (/25 Tile{ AsIs: e.MainName#4/2 } )/26 Tile{ AsIs: e.Result#2/7 } >/27 )/28 (/29 </30 & NameNestedBlocks/31 (/32 e.MainName#4/2/33 )/35 Tile{ AsIs: e.Blocks#2/11 } >/36 Tile{ AsIs: )/14 AsIs: (/17 AsIs: e.Pattern#2/15 AsIs: )/18 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[21], context[22], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[24], ref_NameNestedResult.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[29] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[31], ref_NameNestedBlocks.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[32] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[33], context[34], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[36] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Inc.ref.function );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[20], context[1] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[29], context[14] );
  refalrts::push_stack( context[36] );
  refalrts::push_stack( context[30] );
  refalrts::link_brackets( context[32], context[35] );
  refalrts::link_brackets( context[13], context[28] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[23] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[14], context[18] );
  res = refalrts::splice_evar( res, context[36], context[36] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[27], context[35] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[26], context[26] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[25] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[6], context[9] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedAssigns_L1A2("NameNestedAssigns\\1=2", 39970021U, 2151505377U, func_gen_NameNestedAssigns_L1A2);


static refalrts::FnResult func_gen_NameNestedAssigns_L1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & NameNestedAssigns\1=1/4 s.AssignId#2/5 s.ChainType#2/6 (/9 e.Result#2/7 )/10 (/13 e.Blocks#2/11 )/14 (/17 e.Pattern#2/15 )/18 (/21 e.MainName#1/19 )/22 s.Marker#3/23 >/1
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
  // closed e.Result#2 as range 7
  // closed e.Blocks#2 as range 11
  // closed e.Pattern#2 as range 15
  // closed e.MainName#1 as range 19
  if( ! refalrts::svar_left( context[23], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: s.AssignId#2: 5
  //DEBUG: s.ChainType#2: 6
  //DEBUG: e.Result#2: 7
  //DEBUG: e.Blocks#2: 11
  //DEBUG: e.Pattern#2: 15
  //DEBUG: e.MainName#1: 19
  //DEBUG: s.Marker#3: 23

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} s.Marker#3/23 {REMOVED TILE}
  //RESULT: Tile{ [[ } </24 Tile{ HalfReuse: [*]/0 Reuse: & NameNestedAssigns\1=2/4 AsIs: s.AssignId#2/5 AsIs: s.ChainType#2/6 AsIs: (/9 AsIs: e.Result#2/7 AsIs: )/10 AsIs: (/13 AsIs: e.Blocks#2/11 AsIs: )/14 AsIs: (/17 AsIs: e.Pattern#2/15 AsIs: )/18 HalfReuse: {*}/21 AsIs: e.MainName#1/19 HalfReuse: s.Marker3 #23/22 } s.AssignId#2/5/25 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[24] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[25], context[5]))
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_NameNestedAssigns_L1A2.ref.function );
  refalrts::reinit_unwrapped_closure( context[21], context[0] );
  refalrts::reinit_svar( context[22], context[23] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[24] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[13], context[14] );
  refalrts::link_brackets( context[9], context[10] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[0], context[22] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  refalrts::wrap_closure( context[21] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedAssigns_L1A1("NameNestedAssigns\\1=1", 39970021U, 2151505377U, func_gen_NameNestedAssigns_L1A1);


static refalrts::FnResult func_gen_NameNestedAssigns_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 32 elems
  refalrts::Iter context[32];
  refalrts::zeros( context, 32 );
  // </0 & NameNestedAssigns\1/4 (/7 e.MainName#1/5 )/8 s.AssignId#2/25 (/11 s.ChainType#2/26 (/23 e.Result#2/21 )/24 (/19 e.Blocks#2/17 )/20 (/15 e.Pattern#2/13 )/16 )/12 >/1
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
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[9], context[10] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.MainName#1 as range 5
  // closed e.Result#2 as range 21
  // closed e.Blocks#2 as range 17
  // closed e.Pattern#2 as range 13
  if( ! refalrts::svar_left( context[25], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[26], context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[9], context[10] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Result#2: 21
  //DEBUG: e.Blocks#2: 17
  //DEBUG: e.Pattern#2: 13
  //DEBUG: s.AssignId#2: 25
  //DEBUG: s.ChainType#2: 26

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.AssignId#2/25 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & NameNestedAssigns\1=1/7 } Tile{ HalfReuse: s.AssignId2 #25/11 AsIs: s.ChainType#2/26 AsIs: (/23 AsIs: e.Result#2/21 AsIs: )/24 AsIs: (/19 AsIs: e.Blocks#2/17 AsIs: )/20 AsIs: (/15 AsIs: e.Pattern#2/13 AsIs: )/16 HalfReuse: (/12 } Tile{ AsIs: e.MainName#1/5 } Tile{ AsIs: )/8 } {*}/27 </28 & ChainTypeMarker/29 s.ChainType#2/26/30 >/31 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_unwrapped_closure( context[27], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], ref_ChainTypeMarker.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[30], context[26]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[31] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_NameNestedAssigns_L1A1.ref.function );
  refalrts::reinit_svar( context[11], context[25] );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[31] );
  refalrts::push_stack( context[28] );
  refalrts::link_brackets( context[12], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[27], context[31] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( context[7], res );
  refalrts::wrap_closure( context[27] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedAssigns_L1("NameNestedAssigns\\1", 39970021U, 2151505377U, func_gen_NameNestedAssigns_L1);


static refalrts::FnResult func_NameNestedAssigns(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  // </0 & NameNestedAssigns/4 (/7 e.MainName#1/5 )/8 e.Assigns#1/2 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Assigns#1 as range 2
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Assigns#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & DelAccumulator/10 </11 & MapReduce/12 Tile{ HalfReuse: [*]/0 Reuse: & NameNestedAssigns\1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 } {*}/13 1/14 Tile{ AsIs: e.Assigns#1/2 } >/15 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_DelAccumulator.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[12], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[13], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[14], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_NameNestedAssigns_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::use( res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedAssigns("NameNestedAssigns", 39970021U, 2151505377U, func_NameNestedAssigns);


static refalrts::FnResult func_ChainTypeMarker(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  //FAST GEN: s.$
  //GLOBAL GEN: s.$
  // </0 & ChainTypeMarker/4 s.idx#0/5 >/1
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
    // # Assign
    // </0 & ChainTypeMarker/4 # Assign/5 >/1
    if( ! refalrts::ident_term(  ident_Assign, context[5] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & ChainTypeMarker/4 # Assign/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: '='/1 ]] }
    refalrts::reinit_char( context[1], '=' );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Condition
  // </0 & ChainTypeMarker/4 # Condition/5 >/1
  if( ! refalrts::ident_term(  ident_Condition, context[5] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ChainTypeMarker/4 # Condition/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: '?'/1 ]] }
  refalrts::reinit_char( context[1], '?' );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ChainTypeMarker("ChainTypeMarker", 39970021U, 2151505377U, func_ChainTypeMarker);


static refalrts::FnResult func_NameNestedResult(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & NameNestedResult/4 (/7 e.MainName#1/5 )/8 e.Result#1/2 >/1
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
  // closed e.MainName#1 as range 5
  // closed e.Result#1 as range 2
  //DEBUG: e.MainName#1: 5
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & DelAccumulator/10 </11 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: 1/4 AsIs: (/7 AsIs: e.MainName#1/5 AsIs: )/8 AsIs: e.Result#1/2 AsIs: >/1 } >/12 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_DelAccumulator.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_NameNestedResultRec.ref.function );
  refalrts::reinit_number( context[4], 1UL );
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

static refalrts::NativeReference nat_ref_NameNestedResult("NameNestedResult", 39970021U, 2151505377U, func_NameNestedResult);


static refalrts::FnResult func_gen_NameNestedResultRec_L1S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & NameNestedResultRec\1$1\1/4 s.NextNumber#3/5 e.InBrackets#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InBrackets#3 as range 2
  //DEBUG: s.NextNumber#3: 5
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.NextNumber#3/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextNumber3 #5/0 HalfReuse: (/4 } # Brackets/6 Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_ident( context[6], ident_Brackets ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedResultRec_L1S1L1("NameNestedResultRec\\1$1\\1", 39970021U, 2151505377U, func_gen_NameNestedResultRec_L1S1L1);


static refalrts::FnResult func_gen_NameNestedResultRec_L1S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & NameNestedResultRec\1$2\1/4 (/7 e.Name#2/5 )/8 s.NextNumber#3/9 e.InBrackets#3/2 >/1
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
  // closed e.Name#2 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InBrackets#3 as range 2
  //DEBUG: e.Name#2: 5
  //DEBUG: s.NextNumber#3: 9
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextNumber#3/9 } Tile{ HalfReuse: (/0 HalfReuse: # ADT-Brackets/4 AsIs: (/7 AsIs: e.Name#2/5 AsIs: )/8 } Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_ADTm_Brackets );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedResultRec_L1S2L1("NameNestedResultRec\\1$2\\1", 39970021U, 2151505377U, func_gen_NameNestedResultRec_L1S2L1);


static refalrts::FnResult func_gen_NameNestedResultRec_L1S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & NameNestedResultRec\1$3\1/4 s.NextNumber#3/5 e.InBrackets#3/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.InBrackets#3 as range 2
  //DEBUG: s.NextNumber#3: 5
  //DEBUG: e.InBrackets#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.NextNumber#3/5 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: s.NextNumber3 #5/0 HalfReuse: (/4 } # CallBrackets/6 Tile{ AsIs: e.InBrackets#3/2 } Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_ident( context[6], ident_CallBrackets ) )
    return refalrts::cNoMemory;
  refalrts::reinit_svar( context[0], context[5] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[6] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedResultRec_L1S3L1("NameNestedResultRec\\1$3\\1", 39970021U, 2151505377U, func_gen_NameNestedResultRec_L1S3L1);


static refalrts::FnResult func_gen_NameNestedResultRec_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 28 elems
  refalrts::Iter context[28];
  refalrts::zeros( context, 28 );
  //FAST GEN: ( e.$ ) s.$ t.$
  //GLOBAL GEN: ( e.$ ) s.$ t.$
  // </0 & NameNestedResultRec\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 t.idxTV#0/10 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // ( e.idx ) s.idx ( # Brackets e.idx )
    // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/12 )/8 s.NextNumber#2/9 (/10 # Brackets/16 e.InBrackets#2/14 )/11 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_Brackets, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.MainName#1 as range 12
    // closed e.InBrackets#2 as range 14
    //DEBUG: s.NextNumber#2: 9
    //DEBUG: e.MainName#1: 12
    //DEBUG: e.InBrackets#2: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextNumber#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/16 } </17 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: s.NextNumber2 #9/4 AsIs: (/7 AsIs: e.MainName#1/12 AsIs: )/8 } Tile{ AsIs: e.InBrackets#2/14 } >/18 Tile{ HalfReuse: & NameNestedResultRec\1$1\1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[16], ref_Fetch.ref.function );
    refalrts::reinit_name( context[0], ref_NameNestedResultRec.ref.function );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_name( context[11], ref_gen_NameNestedResultRec_L1S1L1.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[10], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/12 )/8 s.NextNumber#2/9 (/10 # ADT-Brackets/16 (/19 e.Name#2/17 )/20 e.InBrackets#2/14 )/11 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_ADTm_Brackets, context[14], context[15] );
    if( ! context[16] )
      continue;
    context[17] = 0;
    context[18] = 0;
    context[19] = refalrts::brackets_left( context[17], context[18], context[14], context[15] );
    if( ! context[19] )
      continue;
    refalrts::bracket_pointers(context[19], context[20]);
    // closed e.MainName#1 as range 12
    // closed e.Name#2 as range 17
    // closed e.InBrackets#2 as range 14
    //DEBUG: s.NextNumber#2: 9
    //DEBUG: e.MainName#1: 12
    //DEBUG: e.Name#2: 17
    //DEBUG: e.InBrackets#2: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextNumber#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </21 & Fetch/22 </23 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: s.NextNumber2 #9/4 AsIs: (/7 AsIs: e.MainName#1/12 AsIs: )/8 } Tile{ AsIs: e.InBrackets#2/14 } >/24 Tile{ HalfReuse: [*]/10 HalfReuse: & NameNestedResultRec\1$2\1/16 AsIs: (/19 AsIs: e.Name#2/17 AsIs: )/20 } Tile{ HalfReuse: {*}/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], ref_NameNestedResultRec.ref.function );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_closure_head( context[10] );
    refalrts::reinit_name( context[16], ref_gen_NameNestedResultRec_L1S2L1.ref.function );
    refalrts::reinit_unwrapped_closure( context[11], context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[23] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[10], context[20] );
    res = refalrts::splice_evar( res, context[24], context[24] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    refalrts::wrap_closure( context[11] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx ( # CallBrackets e.idx )
    // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/12 )/8 s.NextNumber#2/9 (/10 # CallBrackets/16 e.InBrackets#2/14 )/11 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_CallBrackets, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.MainName#1 as range 12
    // closed e.InBrackets#2 as range 14
    //DEBUG: s.NextNumber#2: 9
    //DEBUG: e.MainName#1: 12
    //DEBUG: e.InBrackets#2: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} s.NextNumber#2/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </10 HalfReuse: & Fetch/16 } </17 Tile{ HalfReuse: & NameNestedResultRec/0 HalfReuse: s.NextNumber2 #9/4 AsIs: (/7 AsIs: e.MainName#1/12 AsIs: )/8 } Tile{ AsIs: e.InBrackets#2/14 } >/18 Tile{ HalfReuse: & NameNestedResultRec\1$3\1/11 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[10] );
    refalrts::reinit_name( context[16], ref_Fetch.ref.function );
    refalrts::reinit_name( context[0], ref_NameNestedResultRec.ref.function );
    refalrts::reinit_svar( context[4], context[9] );
    refalrts::reinit_name( context[11], ref_gen_NameNestedResultRec_L1S3L1.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[18], context[18] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[10], context[16] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) s.idx ( # Closure e.idx )
    // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/12 )/8 s.NextNumber#2/9 (/10 # Closure/16 e.Sentences#2/14 )/11 >/1
    context[12] = context[5];
    context[13] = context[6];
    context[14] = 0;
    context[15] = 0;
    if( ! refalrts::brackets_term( context[14], context[15], context[10] ) )
      continue;
    context[16] = refalrts::ident_left(  ident_Closure, context[14], context[15] );
    if( ! context[16] )
      continue;
    // closed e.MainName#1 as range 12
    // closed e.Sentences#2 as range 14
    //DEBUG: s.NextNumber#2: 9
    //DEBUG: e.MainName#1: 12
    //DEBUG: e.Sentences#2: 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </17 & Inc/18 s.NextNumber#2/9/19 >/20 (/21 Tile{ AsIs: # Closure/16 } (/22 e.MainName#1/12/23 '\\'/25 s.NextNumber#2/9/26 )/27 Tile{ AsIs: </0 Reuse: & NameNestedBody/4 AsIs: (/7 AsIs: e.MainName#1/12 HalfReuse: '\\'/8 AsIs: s.NextNumber#2/9 HalfReuse: )/10 } Tile{ AsIs: e.Sentences#2/14 } Tile{ HalfReuse: >/11 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], ref_Inc.ref.function ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[19], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[23], context[24], context[12], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[25], '\\' ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[26], context[9]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_NameNestedBody.ref.function );
    refalrts::reinit_char( context[8], '\\' );
    refalrts::reinit_close_bracket( context[10] );
    refalrts::reinit_close_call( context[11] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[21], context[1] );
    refalrts::push_stack( context[11] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[10] );
    refalrts::link_brackets( context[22], context[27] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[11];
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[0], context[10] );
    res = refalrts::splice_evar( res, context[22], context[27] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    res = refalrts::splice_evar( res, context[17], context[21] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) s.idx t.idx
  // </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/12 )/8 s.NextNumber#2/9 t.OtherTerm#2/10 >/1
  context[12] = context[5];
  context[13] = context[6];
  // closed e.MainName#1 as range 12
  //DEBUG: t.OtherTerm#2: 10
  //DEBUG: s.NextNumber#2: 9
  //DEBUG: e.MainName#1: 12

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & NameNestedResultRec\1/4 (/7 e.MainName#1/12 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: s.NextNumber#2/9 AsIs: t.OtherTerm#2/10 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[9], context[11] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_NameNestedResultRec_L1("NameNestedResultRec\\1", 39970021U, 2151505377U, func_gen_NameNestedResultRec_L1);


static refalrts::FnResult func_NameNestedResultRec(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & NameNestedResultRec/4 s.StartNumber#1/5 (/8 e.MainName#1/6 )/9 e.Result#1/2 >/1
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
  // closed e.MainName#1 as range 6
  // closed e.Result#1 as range 2
  //DEBUG: s.StartNumber#1: 5
  //DEBUG: e.MainName#1: 6
  //DEBUG: e.Result#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.StartNumber#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & MapReduce/4 } [*]/10 & NameNestedResultRec\1/11 Tile{ AsIs: (/8 } Tile{ AsIs: e.MainName#1/6 } )/12 {*}/13 Tile{ HalfReuse: s.StartNumber1 #5/9 AsIs: e.Result#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_gen_NameNestedResultRec_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[13], context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_MapReduce.ref.function );
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[9];
  res = refalrts::splice_evar( res, context[12], context[13] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( context[4], res );
  refalrts::wrap_closure( context[13] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_NameNestedResultRec("NameNestedResultRec", 39970021U, 2151505377U, func_NameNestedResultRec);


static refalrts::FnResult func_gen_Passm_RemoveBlocksAndAssigns_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 15 elems
  refalrts::Iter context[15];
  refalrts::zeros( context, 15 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & Pass-RemoveBlocksAndAssigns\1/4 t.idx#0/5 >/1
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
    // ( # Function s.idx ( e.idx ) e.idx )
    // </0 & Pass-RemoveBlocksAndAssigns\1/4 (/5 # Function/9 s.ScopeClass#2/10 (/13 e.Name#2/11 )/14 e.Body#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_Function, context[7], context[8] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[7], context[8] ) )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_left( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    // closed e.Body#2 as range 7
    //DEBUG: s.ScopeClass#2: 10
    //DEBUG: e.Name#2: 11
    //DEBUG: e.Body#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Function/9 AsIs: s.ScopeClass#2/10 AsIs: (/13 AsIs: e.Name#2/11 AsIs: )/14 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Sentences/4 } Tile{ AsIs: e.Body#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_RemoveAssignsm_Sentences.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[14] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & Pass-RemoveBlocksAndAssigns\1/4 t.OtherProgramElement#2/5 >/1
  //DEBUG: t.OtherProgramElement#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveBlocksAndAssigns\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_RemoveBlocksAndAssigns_L1("Pass-RemoveBlocksAndAssigns\\1", 39970021U, 2151505377U, func_gen_Passm_RemoveBlocksAndAssigns_L1);


static refalrts::FnResult func_Passm_RemoveBlocksAndAssigns(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & Pass-RemoveBlocksAndAssigns/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & Pass-RemoveBlocksAndAssigns\1/4 AsIs: e.AST#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_Passm_RemoveBlocksAndAssigns_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_RemoveBlocksAndAssigns("Pass-RemoveBlocksAndAssigns", 39970021U, 2151505377U, func_Passm_RemoveBlocksAndAssigns);


static refalrts::FnResult func_RemoveAssignsm_Sentences(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & RemoveAssigns-Sentences/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # Sentences e.idx
    // </0 & RemoveAssigns-Sentences/4 # Sentences/5 e.Sentences#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Sentences, context[5] ) )
      continue;
    // closed e.Sentences#1 as range 6
    //DEBUG: e.Sentences#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } # Sentences/8 Tile{ AsIs: </0 Reuse: & Map/4 HalfReuse: & RemoveAssigns-Sentence/5 AsIs: e.Sentences#1/6 AsIs: >/1 ]] }
    if( ! refalrts::alloc_ident( context[8], ident_Sentences ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Map.ref.function );
    refalrts::reinit_name( context[5], ref_RemoveAssignsm_Sentence.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # NativeBody t.idx e.idx
  // </0 & RemoveAssigns-Sentences/4 # NativeBody/5 t.SrcPos#1/8 e.Code#1/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_NativeBody, context[5] ) )
    return refalrts::cRecognitionImpossible;
  context[9] = refalrts::tvar_left( context[8], context[6], context[7] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 6
  //DEBUG: t.SrcPos#1: 8
  //DEBUG: e.Code#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemoveAssigns-Sentences/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: # NativeBody/5 AsIs: t.SrcPos#1/8 } Tile{ AsIs: e.Code#1/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[5], context[9] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Sentences("RemoveAssigns-Sentences", 39970021U, 2151505377U, func_RemoveAssignsm_Sentences);


static refalrts::FnResult func_gen_RemoveAssignsm_Sentence_S2A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & RemoveAssigns-Sentence$2=3/4 (/7 e.Pattern#1/5 )/8 (/11 e.Conditions#2/9 )/12 e.Result#4/2 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Conditions#2 as range 9
  // closed e.Result#4 as range 2
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Conditions#2: 9
  //DEBUG: e.Result#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 } Tile{ AsIs: e.Conditions#2/9 } Tile{ HalfReuse: (/12 AsIs: e.Result#4/2 HalfReuse: )/1 } Tile{ HalfReuse: )/11 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::reinit_close_bracket( context[11] );
  refalrts::link_brackets( context[4], context[11] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Sentence_S2A3("RemoveAssigns-Sentence$2=3", 39970021U, 2151505377U, func_gen_RemoveAssignsm_Sentence_S2A3);


static refalrts::FnResult func_gen_RemoveAssignsm_Sentence_S2A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & RemoveAssigns-Sentence$2=2/4 (/7 e.Pattern#1/5 )/8 (/11 e.Conditions#2/9 )/12 (/15 e.Result#3/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern#1 as range 5
  // closed e.Conditions#2 as range 9
  // closed e.Result#3 as range 13
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Conditions#2: 9
  //DEBUG: e.Result#3: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & RemoveAssigns-Sentence$2=3/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Conditions#2/9 AsIs: )/12 HalfReuse: {*}/15 } </18 & RemoveAssigns-Result/19 Tile{ AsIs: e.Result#3/13 } Tile{ HalfReuse: >/16 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_RemoveAssignsm_Result.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_RemoveAssignsm_Sentence_S2A3.ref.function );
  refalrts::reinit_unwrapped_closure( context[15], context[0] );
  refalrts::reinit_close_call( context[16] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[16];
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[15] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Sentence_S2A2("RemoveAssigns-Sentence$2=2", 39970021U, 2151505377U, func_gen_RemoveAssignsm_Sentence_S2A2);


static refalrts::FnResult func_gen_RemoveAssignsm_Sentence_S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  // </0 & RemoveAssigns-Sentence$2=1/4 (/7 e.Pattern#1/5 )/8 (/11 e.Result#1/9 )/12 (/15 e.Blocks#1/13 )/16 e.Conditions#2/2 >/1
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
  // closed e.Pattern#1 as range 5
  // closed e.Result#1 as range 9
  // closed e.Blocks#1 as range 13
  // closed e.Conditions#2 as range 2
  //DEBUG: e.Pattern#1: 5
  //DEBUG: e.Result#1: 9
  //DEBUG: e.Blocks#1: 13
  //DEBUG: e.Conditions#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </17 Tile{ HalfReuse: [*]/0 Reuse: & RemoveAssigns-Sentence$2=2/4 AsIs: (/7 AsIs: e.Pattern#1/5 AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Conditions#2/2 } Tile{ AsIs: )/12 } {*}/18 </19 & RemoveAssigns-WindBlocks/20 (/21 Tile{ AsIs: e.Result#1/9 } Tile{ HalfReuse: )/15 AsIs: e.Blocks#1/13 HalfReuse: >/16 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[18], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ref_RemoveAssignsm_WindBlocks.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[21] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_RemoveAssignsm_Sentence_S2A2.ref.function );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::reinit_close_call( context[16] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[19] );
  refalrts::link_brackets( context[21], context[15] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Sentence_S2A1("RemoveAssigns-Sentence$2=1", 39970021U, 2151505377U, func_gen_RemoveAssignsm_Sentence_S2A1);


static refalrts::FnResult func_RemoveAssignsm_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 44 elems
  refalrts::Iter context[44];
  refalrts::zeros( context, 44 );
  //FAST GEN: ( ( e.$ ) e.$ )
  //GLOBAL GEN: ( ( e.$ ) e.$ )
  // </0 & RemoveAssigns-Sentence/4 (/7 (/11 e.idxBB#0/9 )/12 e.idxBT#0/5 )/8 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBB#0 as range 9
  // closed e.idxBT#0 as range 5
  do {
    // ( ( e.idx ) e.idx )
    // </0 & RemoveAssigns-Sentence/4 (/7 (/11 e.Pattern#1/13 )/12 e.Conditions#1/17 (/23 # Assign/25 (/28 e.AssignName#1/26 )/29 (/32 e.AssignResult#1/30 )/33 (/36 e.Blocks#1/34 )/37 (/40 e.AssignPattern#1/38 )/41 )/24 e.SentenceTail#1/19 )/8 >/1
    context[13] = context[9];
    context[14] = context[10];
    context[15] = context[5];
    context[16] = context[6];
    // closed e.Pattern#1 as range 13
    context[17] = 0;
    context[18] = 0;
    refalrts::start_e_loop();
    do {
      context[19] = context[15];
      context[20] = context[16];
      context[21] = 0;
      context[22] = 0;
      context[23] = refalrts::brackets_left( context[21], context[22], context[19], context[20] );
      if( ! context[23] )
        continue;
      refalrts::bracket_pointers(context[23], context[24]);
      context[25] = refalrts::ident_left(  ident_Assign, context[21], context[22] );
      if( ! context[25] )
        continue;
      context[26] = 0;
      context[27] = 0;
      context[28] = refalrts::brackets_left( context[26], context[27], context[21], context[22] );
      if( ! context[28] )
        continue;
      refalrts::bracket_pointers(context[28], context[29]);
      context[30] = 0;
      context[31] = 0;
      context[32] = refalrts::brackets_left( context[30], context[31], context[21], context[22] );
      if( ! context[32] )
        continue;
      refalrts::bracket_pointers(context[32], context[33]);
      context[34] = 0;
      context[35] = 0;
      context[36] = refalrts::brackets_left( context[34], context[35], context[21], context[22] );
      if( ! context[36] )
        continue;
      refalrts::bracket_pointers(context[36], context[37]);
      context[38] = 0;
      context[39] = 0;
      context[40] = refalrts::brackets_left( context[38], context[39], context[21], context[22] );
      if( ! context[40] )
        continue;
      refalrts::bracket_pointers(context[40], context[41]);
      if( ! refalrts::empty_seq( context[21], context[22] ) )
        continue;
      // closed e.AssignName#1 as range 26
      // closed e.AssignResult#1 as range 30
      // closed e.Blocks#1 as range 34
      // closed e.AssignPattern#1 as range 38
      // closed e.SentenceTail#1 as range 19
      //DEBUG: e.Pattern#1: 13
      //DEBUG: e.Conditions#1: 17
      //DEBUG: e.AssignName#1: 26
      //DEBUG: e.AssignResult#1: 30
      //DEBUG: e.Blocks#1: 34
      //DEBUG: e.AssignPattern#1: 38
      //DEBUG: e.SentenceTail#1: 19

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & RemoveAssigns-Sentence/4 AsIs: (/7 AsIs: (/11 AsIs: e.Pattern#1/13 AsIs: )/12 AsIs: e.Conditions#1/17 AsIs: (/23 } Tile{ AsIs: e.AssignResult#1/30 } Tile{ AsIs: )/33 AsIs: (/36 AsIs: e.Blocks#1/34 HalfReuse: (/37 AsIs: (/40 } Tile{ AsIs: e.AssignName#1/26 } Tile{ AsIs: )/41 } Tile{ Reuse: # Sentences/25 AsIs: (/28 } (/42 Tile{ AsIs: e.AssignPattern#1/38 } Tile{ AsIs: )/24 AsIs: e.SentenceTail#1/19 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/29 HalfReuse: )/32 } >/43 Tile{ ]] }
      if( ! refalrts::alloc_open_bracket( context[42] ) )
        return refalrts::cNoMemory;
      if( ! refalrts::alloc_close_call( context[43] ) )
        return refalrts::cNoMemory;
      refalrts::reinit_open_bracket( context[37] );
      refalrts::update_ident( context[25], ident_Sentences );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::reinit_close_bracket( context[32] );
      refalrts::push_stack( context[43] );
      refalrts::push_stack( context[0] );
      refalrts::link_brackets( context[7], context[32] );
      refalrts::link_brackets( context[36], context[29] );
      refalrts::link_brackets( context[37], context[1] );
      refalrts::link_brackets( context[28], context[8] );
      refalrts::link_brackets( context[42], context[24] );
      refalrts::link_brackets( context[40], context[41] );
      refalrts::link_brackets( context[23], context[33] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[43], context[43] );
      res = refalrts::splice_evar( res, context[29], context[32] );
      res = refalrts::splice_evar( res, context[24], context[1] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[42], context[42] );
      res = refalrts::splice_evar( res, context[25], context[28] );
      res = refalrts::splice_evar( res, context[41], context[41] );
      res = refalrts::splice_evar( res, context[26], context[27] );
      res = refalrts::splice_evar( res, context[33], context[40] );
      res = refalrts::splice_evar( res, context[30], context[31] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[17], context[18], context[15], context[16] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( ( e.idx ) e.idx ( e.idx ) ( e.idx ) )
  // </0 & RemoveAssigns-Sentence/4 (/7 (/11 e.Pattern#1/13 )/12 e.Conditions#1/15 (/23 e.Result#1/21 )/24 (/19 e.Blocks#1/17 )/20 )/8 >/1
  context[13] = context[9];
  context[14] = context[10];
  context[15] = context[5];
  context[16] = context[6];
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[15], context[16] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_right( context[21], context[22], context[15], context[16] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  // closed e.Pattern#1 as range 13
  // closed e.Conditions#1 as range 15
  // closed e.Result#1 as range 21
  // closed e.Blocks#1 as range 17
  //DEBUG: e.Pattern#1: 13
  //DEBUG: e.Conditions#1: 15
  //DEBUG: e.Result#1: 21
  //DEBUG: e.Blocks#1: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & RemoveAssigns-Sentence$2=1/7 AsIs: (/11 AsIs: e.Pattern#1/13 AsIs: )/12 } Tile{ AsIs: (/23 AsIs: e.Result#1/21 AsIs: )/24 AsIs: (/19 AsIs: e.Blocks#1/17 AsIs: )/20 HalfReuse: {*}/8 HalfReuse: </1 } & RemoveAssigns-Conditions/25 Tile{ AsIs: e.Conditions#1/15 } >/26 >/27 Tile{ ]] }
  if( ! refalrts::alloc_name( context[25], ref_RemoveAssignsm_Conditions.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[27] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_RemoveAssignsm_Sentence_S2A1.ref.function );
  refalrts::reinit_unwrapped_closure( context[8], context[4] );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[27] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[26] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[23], context[1] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Sentence("RemoveAssigns-Sentence", 39970021U, 2151505377U, func_RemoveAssignsm_Sentence);


static refalrts::FnResult func_gen_RemoveAssignsm_Conditions_L1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & RemoveAssigns-Conditions\1=1/4 (/7 e.ConditionName#2/5 )/8 (/11 e.Pattern#2/9 )/12 (/15 e.Result#3/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ConditionName#2 as range 5
  // closed e.Pattern#2 as range 9
  // closed e.Result#3 as range 13
  //DEBUG: e.ConditionName#2: 5
  //DEBUG: e.Pattern#2: 9
  //DEBUG: e.Result#3: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Condition/4 AsIs: (/7 AsIs: e.ConditionName#2/5 AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: </12 HalfReuse: & RemoveAssigns-Result/15 AsIs: e.Result#3/13 HalfReuse: >/16 HalfReuse: )/1 } (/17 Tile{ AsIs: e.Pattern#2/9 } )/18 )/19 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Condition );
  refalrts::reinit_open_call( context[12] );
  refalrts::reinit_name( context[15], ref_RemoveAssignsm_Result.ref.function );
  refalrts::reinit_close_call( context[16] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[19] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Conditions_L1A1("RemoveAssigns-Conditions\\1=1", 39970021U, 2151505377U, func_gen_RemoveAssignsm_Conditions_L1A1);


static refalrts::FnResult func_gen_RemoveAssignsm_Conditions_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & RemoveAssigns-Conditions\1/4 (/7 # Condition/9 (/12 e.ConditionName#2/10 )/13 (/16 e.Result#2/14 )/17 (/20 e.Blocks#2/18 )/21 (/24 e.Pattern#2/22 )/25 )/8 >/1
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
  context[9] = refalrts::ident_left(  ident_Condition, context[5], context[6] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  context[14] = 0;
  context[15] = 0;
  context[16] = refalrts::brackets_left( context[14], context[15], context[5], context[6] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[16], context[17]);
  context[18] = 0;
  context[19] = 0;
  context[20] = refalrts::brackets_left( context[18], context[19], context[5], context[6] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[5], context[6] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ConditionName#2 as range 10
  // closed e.Result#2 as range 14
  // closed e.Blocks#2 as range 18
  // closed e.Pattern#2 as range 22
  //DEBUG: e.ConditionName#2: 10
  //DEBUG: e.Result#2: 14
  //DEBUG: e.Blocks#2: 18
  //DEBUG: e.Pattern#2: 22

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: </4 HalfReuse: [*]/7 HalfReuse: & RemoveAssigns-Conditions\1=1/9 AsIs: (/12 AsIs: e.ConditionName#2/10 AsIs: )/13 AsIs: (/16 } Tile{ AsIs: e.Pattern#2/22 } Tile{ AsIs: )/21 HalfReuse: {*}/24 } Tile{ AsIs: </0 } Tile{ HalfReuse: & RemoveAssigns-WindBlocks/17 AsIs: (/20 } Tile{ AsIs: e.Result#2/14 } Tile{ AsIs: )/25 } Tile{ AsIs: e.Blocks#2/18 } Tile{ HalfReuse: >/8 AsIs: >/1 ]] }
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_closure_head( context[7] );
  refalrts::reinit_name( context[9], ref_gen_RemoveAssignsm_Conditions_L1A1.ref.function );
  refalrts::reinit_unwrapped_closure( context[24], context[7] );
  refalrts::reinit_name( context[17], ref_RemoveAssignsm_WindBlocks.ref.function );
  refalrts::reinit_close_call( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[4] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[20], context[25] );
  refalrts::link_brackets( context[16], context[21] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[0], context[0] );
  res = refalrts::splice_evar( res, context[21], context[24] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[4], context[16] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Conditions_L1("RemoveAssigns-Conditions\\1", 39970021U, 2151505377U, func_gen_RemoveAssignsm_Conditions_L1);


static refalrts::FnResult func_RemoveAssignsm_Conditions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemoveAssigns-Conditions/4 e.Conditions#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Conditions#1 as range 2
  //DEBUG: e.Conditions#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & RemoveAssigns-Conditions\1/4 AsIs: e.Conditions#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_RemoveAssignsm_Conditions_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Conditions("RemoveAssigns-Conditions", 39970021U, 2151505377U, func_RemoveAssignsm_Conditions);


static refalrts::FnResult func_gen_RemoveAssignsm_WindBlocks_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & RemoveAssigns-WindBlocks\1/4 (/7 e.Result#2/5 )/8 (/11 (/15 e.BlockName#2/13 )/16 e.Body#2/9 )/12 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Result#2 as range 5
  // closed e.BlockName#2 as range 13
  // closed e.Body#2 as range 9
  //DEBUG: e.Result#2: 5
  //DEBUG: e.BlockName#2: 13
  //DEBUG: e.Body#2: 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 HalfReuse: # CallBrackets/7 } Tile{ HalfReuse: (/8 HalfReuse: # Closure/11 AsIs: (/15 AsIs: e.BlockName#2/13 AsIs: )/16 AsIs: e.Body#2/9 AsIs: )/12 } Tile{ AsIs: e.Result#2/5 } )/17 Tile{ HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_CallBrackets );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::reinit_ident( context[11], ident_Closure );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[4], context[17] );
  refalrts::link_brackets( context[8], context[12] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_WindBlocks_L1("RemoveAssigns-WindBlocks\\1", 39970021U, 2151505377U, func_gen_RemoveAssignsm_WindBlocks_L1);


static refalrts::FnResult func_RemoveAssignsm_WindBlocks(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  // </0 & RemoveAssigns-WindBlocks/4 (/7 e.Result#1/5 )/8 e.Blocks#1/2 >/1
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
  // closed e.Result#1 as range 5
  // closed e.Blocks#1 as range 2
  //DEBUG: e.Result#1: 5
  //DEBUG: e.Blocks#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 Tile{ HalfReuse: & Reduce/0 Reuse: & RemoveAssigns-WindBlocks\1/4 AsIs: (/7 AsIs: e.Result#1/5 AsIs: )/8 AsIs: e.Blocks#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Reduce.ref.function );
  refalrts::update_name( context[4], ref_gen_RemoveAssignsm_WindBlocks_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_WindBlocks("RemoveAssigns-WindBlocks", 39970021U, 2151505377U, func_RemoveAssignsm_WindBlocks);


static refalrts::FnResult func_gen_RemoveAssignsm_Result_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & RemoveAssigns-Result\1/4 t.idx#0/5 >/1
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
    // ( # Brackets e.idx )
    // </0 & RemoveAssigns-Result\1/4 (/5 # Brackets/9 e.InBrackets#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_Brackets, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#2 as range 7
    //DEBUG: e.InBrackets#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Brackets/4 HalfReuse: </5 HalfReuse: & RemoveAssigns-Result/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Brackets );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], ref_RemoveAssignsm_Result.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & RemoveAssigns-Result\1/4 (/5 # ADT-Brackets/9 (/12 e.Name#2/10 )/13 e.InBrackets#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_ADTm_Brackets, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#2 as range 10
    // closed e.InBrackets#2 as range 7
    //DEBUG: e.Name#2: 10
    //DEBUG: e.InBrackets#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # ADT-Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Result/4 } Tile{ AsIs: e.InBrackets#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_RemoveAssignsm_Result.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # CallBrackets e.idx )
    // </0 & RemoveAssigns-Result\1/4 (/5 # CallBrackets/9 e.InBrackets#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_CallBrackets, context[7], context[8] );
    if( ! context[9] )
      continue;
    // closed e.InBrackets#2 as range 7
    //DEBUG: e.InBrackets#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # CallBrackets/4 HalfReuse: </5 HalfReuse: & RemoveAssigns-Result/9 AsIs: e.InBrackets#2/7 HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_CallBrackets );
    refalrts::reinit_open_call( context[5] );
    refalrts::reinit_name( context[9], ref_RemoveAssignsm_Result.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[5] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Closure ( e.idx ) e.idx )
    // </0 & RemoveAssigns-Result\1/4 (/5 # Closure/9 (/12 e.ClosureName#2/10 )/13 e.Sentences#2/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_Closure, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[7], context[8] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.ClosureName#2 as range 10
    // closed e.Sentences#2 as range 7
    //DEBUG: e.ClosureName#2: 10
    //DEBUG: e.Sentences#2: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 AsIs: # Closure/9 AsIs: (/12 AsIs: e.ClosureName#2/10 AsIs: )/13 } Tile{ AsIs: </0 Reuse: & RemoveAssigns-Sentences/4 } Tile{ AsIs: e.Sentences#2/7 } Tile{ HalfReuse: >/6 HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], ref_RemoveAssignsm_Sentences.ref.function );
    refalrts::reinit_close_call( context[6] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::push_stack( context[6] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[6];
    res = refalrts::splice_evar( res, context[7], context[8] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[5], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & RemoveAssigns-Result\1/4 t.OtherTerm#2/5 >/1
  //DEBUG: t.OtherTerm#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & RemoveAssigns-Result\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherTerm#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_RemoveAssignsm_Result_L1("RemoveAssigns-Result\\1", 39970021U, 2151505377U, func_gen_RemoveAssignsm_Result_L1);


static refalrts::FnResult func_RemoveAssignsm_Result(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
  // </0 & RemoveAssigns-Result/4 e.Expr#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Expr#1 as range 2
  //DEBUG: e.Expr#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & RemoveAssigns-Result\1/4 AsIs: e.Expr#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_Map.ref.function );
  refalrts::update_name( context[4], ref_gen_RemoveAssignsm_Result_L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_RemoveAssignsm_Result("RemoveAssigns-Result", 39970021U, 2151505377U, func_RemoveAssignsm_Result);


static refalrts::FnResult func_gen_Passm_FlatNestedFuncs_L1S1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Pass-FlatNestedFuncs\1$1=1/4 s.ScopeClass#2/5 (/8 e.Name#2/6 )/9 (/12 e.NestedFuncs#3/10 )/13 e.Body#3/2 >/1
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
  // closed e.Name#2 as range 6
  // closed e.NestedFuncs#3 as range 10
  // closed e.Body#3 as range 2
  //DEBUG: s.ScopeClass#2: 5
  //DEBUG: e.Name#2: 6
  //DEBUG: e.NestedFuncs#3: 10
  //DEBUG: e.Body#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} (/12 {REMOVED TILE} )/13 {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.NestedFuncs#3/10 } Tile{ HalfReuse: (/0 HalfReuse: # Function/4 AsIs: s.ScopeClass#2/5 AsIs: (/8 AsIs: e.Name#2/6 AsIs: )/9 } Tile{ AsIs: e.Body#3/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_Function );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[9] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_FlatNestedFuncs_L1S1A1("Pass-FlatNestedFuncs\\1$1=1", 39970021U, 2151505377U, func_gen_Passm_FlatNestedFuncs_L1S1A1);


static refalrts::FnResult func_gen_Passm_FlatNestedFuncs_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: s.$ t.$
  //GLOBAL GEN: s.$ t.$
  // </0 & Pass-FlatNestedFuncs\1/4 s.idx#0/5 t.idxV#0/6 >/1
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
    // s.idx ( # Function s.idx ( e.idx ) e.idx )
    // </0 & Pass-FlatNestedFuncs\1/4 s.MarkupContext#1/5 (/6 # Function/10 s.ScopeClass#2/11 (/14 e.Name#2/12 )/15 e.Body#2/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  ident_Function, context[8], context[9] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    context[12] = 0;
    context[13] = 0;
    context[14] = refalrts::brackets_left( context[12], context[13], context[8], context[9] );
    if( ! context[14] )
      continue;
    refalrts::bracket_pointers(context[14], context[15]);
    // closed e.Name#2 as range 12
    // closed e.Body#2 as range 8
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: s.ScopeClass#2: 11
    //DEBUG: e.Name#2: 12
    //DEBUG: e.Body#2: 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </16 Tile{ HalfReuse: [*]/6 HalfReuse: & Pass-FlatNestedFuncs\1$1=1/10 AsIs: s.ScopeClass#2/11 AsIs: (/14 AsIs: e.Name#2/12 AsIs: )/15 } {*}/17 Tile{ AsIs: </0 Reuse: & ExtractNested/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: e.Body#2/8 } Tile{ HalfReuse: >/7 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[17], context[6] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[6] );
    refalrts::reinit_name( context[10], ref_gen_Passm_FlatNestedFuncs_L1S1A1.ref.function );
    refalrts::update_name( context[4], ref_ExtractNested.ref.function );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[14], context[15] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[7];
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[6], context[15] );
    res = refalrts::splice_evar( res, context[16], context[16] );
    refalrts::use( res );
    refalrts::wrap_closure( context[17] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx t.idx
  // </0 & Pass-FlatNestedFuncs\1/4 s.MarkupContext#1/5 t.OtherProgramElement#2/6 >/1
  //DEBUG: t.OtherProgramElement#2: 6
  //DEBUG: s.MarkupContext#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-FlatNestedFuncs\1/4 s.MarkupContext#1/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherProgramElement#2/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_FlatNestedFuncs_L1("Pass-FlatNestedFuncs\\1", 39970021U, 2151505377U, func_gen_Passm_FlatNestedFuncs_L1);


static refalrts::FnResult func_Passm_FlatNestedFuncs(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Pass-FlatNestedFuncs/4 s.MarkupContext#1/5 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } [*]/6 & Pass-FlatNestedFuncs\1/7 Tile{ AsIs: s.MarkupContext#1/5 } {*}/8 Tile{ AsIs: e.AST#1/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_gen_Passm_FlatNestedFuncs_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[8], context[6] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Map.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_FlatNestedFuncs("Pass-FlatNestedFuncs", 39970021U, 2151505377U, func_Passm_FlatNestedFuncs);


static refalrts::FnResult func_gen_ExtractNested_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractNested=1/4 (/7 )/8 (/11 e.NestedFuncs#2/9 )/12 e.Sentences#2/2 >/1
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
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#2 as range 9
  // closed e.Sentences#2 as range 2
  //DEBUG: e.NestedFuncs#2: 9
  //DEBUG: e.Sentences#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractNested=1/4 (/7 )/8 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 } Tile{ AsIs: e.Sentences#2/2 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNested_A1("ExtractNested=1", 39970021U, 2151505377U, func_gen_ExtractNested_A1);


static refalrts::FnResult func_ExtractNested(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ExtractNested/4 s.MarkupContext#1/5 e.Sentences#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Sentences#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.Sentences#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested=1/4 } </6 & ExtractNestedRec/7 Tile{ AsIs: s.MarkupContext#1/5 } (/8 )/9 Tile{ AsIs: e.Sentences#1/2 } >/10 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_ExtractNestedRec.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_ExtractNested_A1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[6] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[10], context[10] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNested("ExtractNested", 39970021U, 2151505377U, func_ExtractNested);


static refalrts::FnResult func_gen_ExtractNestedRec_S1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNestedRec$1=1/4 (/7 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.Sentences#2/2 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.Sentences#2 as range 2
  //DEBUG: e.NestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.Sentences#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & ExtractNestedRec$1=1/4 {REMOVED TILE} {REMOVED TILE} )/16 )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#2/13 } Tile{ HalfReuse: )/7 AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 HalfReuse: # Sentences/15 } Tile{ AsIs: e.Sentences#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_ident( context[15], ident_Sentences );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[15] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedRec_S1A1("ExtractNestedRec$1=1", 39970021U, 2151505377U, func_gen_ExtractNestedRec_S1A1);


static refalrts::FnResult func_ExtractNestedRec(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
  //FAST GEN: s.$ ( e.$ ) s.$ e.$
  //GLOBAL GEN: s.$ ( e.$ ) s.$ e.$
  // </0 & ExtractNestedRec/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 s.idxVT#0/10 e.idxVTV#0/2 >/1
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
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTV#0 as range 2
  do {
    // s.idx ( e.idx ) # Sentences e.idx
    // </0 & ExtractNestedRec/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/11 )/9 # Sentences/10 e.Sentences#1/13 >/1
    context[11] = context[6];
    context[12] = context[7];
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term(  ident_Sentences, context[10] ) )
      continue;
    // closed e.ScopeVars#1 as range 11
    // closed e.Sentences#1 as range 13
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ScopeVars#1: 11
    //DEBUG: e.Sentences#1: 13

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNestedRec$1=1/4 } </15 & MapReduce/16 Tile{ AsIs: (/8 } & ExtractNested-Sentence/17 Tile{ AsIs: s.MarkupContext#1/5 } Tile{ AsIs: e.ScopeVars#1/11 } )/18 (/19 (/20 )/21 (/22 Tile{ AsIs: )/9 HalfReuse: )/10 AsIs: e.Sentences#1/13 AsIs: >/1 } >/23 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[15] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[16], ref_MapReduce.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[17], ref_ExtractNestedm_Sentence.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_gen_ExtractNestedRec_S1A1.ref.function );
    refalrts::reinit_close_bracket( context[10] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[15] );
    refalrts::link_brackets( context[19], context[10] );
    refalrts::link_brackets( context[22], context[9] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::link_brackets( context[8], context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[23], context[23] );
    res = refalrts::splice_evar( res, context[9], context[1] );
    res = refalrts::splice_evar( res, context[18], context[22] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) # NativeBody t.idx e.idx
  // </0 & ExtractNestedRec/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/11 )/9 # NativeBody/10 t.SrcPos#1/15 e.Code#1/13 >/1
  context[11] = context[6];
  context[12] = context[7];
  context[13] = context[2];
  context[14] = context[3];
  if( ! refalrts::ident_term(  ident_NativeBody, context[10] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 11
  context[16] = refalrts::tvar_left( context[15], context[13], context[14] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  // closed e.Code#1 as range 13
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.ScopeVars#1: 11
  //DEBUG: t.SrcPos#1: 15
  //DEBUG: e.Code#1: 13

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.MarkupContext#1/5 {REMOVED TILE} e.ScopeVars#1/11 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: )/4 } Tile{ AsIs: (/8 } Tile{ AsIs: )/9 AsIs: # NativeBody/10 AsIs: t.SrcPos#1/15 } Tile{ AsIs: e.Code#1/13 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_close_bracket( context[4] );
  refalrts::link_brackets( context[8], context[9] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedRec("ExtractNestedRec", 39970021U, 2151505377U, func_ExtractNestedRec);


static refalrts::FnResult func_gen_ExtractNestedm_Sentence_A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & ExtractNested-Sentence=3/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ConditionsNestedFuncs#3/9 )/12 (/15 e.Pattern#1/13 )/16 (/19 e.Conditions#3/17 )/20 (/23 e.ResultNestedFuncs#4/21 )/24 (/27 e.BorrowedVars#4/25 )/28 e.Result#4/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.ConditionsNestedFuncs#3 as range 9
  // closed e.Pattern#1 as range 13
  // closed e.Conditions#3 as range 17
  // closed e.ResultNestedFuncs#4 as range 21
  // closed e.BorrowedVars#4 as range 25
  // closed e.Result#4 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.ConditionsNestedFuncs#3: 9
  //DEBUG: e.Pattern#1: 13
  //DEBUG: e.Conditions#3: 17
  //DEBUG: e.ResultNestedFuncs#4: 21
  //DEBUG: e.BorrowedVars#4: 25
  //DEBUG: e.Result#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} (/19 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.ConditionsNestedFuncs#3/9 } Tile{ AsIs: e.ResultNestedFuncs#4/21 } Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.BorrowedVars#4/25 AsIs: )/28 } Tile{ AsIs: )/20 } Tile{ HalfReuse: (/12 AsIs: (/15 AsIs: e.Pattern#1/13 AsIs: )/16 } Tile{ AsIs: e.Conditions#3/17 } Tile{ AsIs: (/23 } Tile{ AsIs: e.Result#4/2 } Tile{ AsIs: )/8 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[23], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[0], context[20] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[4], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[24], context[28] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Sentence_A3("ExtractNested-Sentence=3", 39970021U, 2151505377U, func_gen_ExtractNestedm_Sentence_A3);


static refalrts::FnResult func_gen_ExtractNestedm_Sentence_A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & ExtractNested-Sentence=2/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.Pattern#1/9 )/12 s.MarkupContext#1/13 (/16 e.ScopeVars#1/14 )/17 (/20 e.Result#1/18 )/21 (/24 e.ConditionsNestedFuncs#3/22 )/25 (/28 e.BorrowedVars#3/26 )/29 (/32 e.LocalVars#3/30 )/33 e.Conditions#3/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.Pattern#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.ScopeVars#1 as range 14
  // closed e.Result#1 as range 18
  // closed e.ConditionsNestedFuncs#3 as range 22
  // closed e.BorrowedVars#3 as range 26
  // closed e.LocalVars#3 as range 30
  // closed e.Conditions#3 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: s.MarkupContext#1: 13
  //DEBUG: e.ScopeVars#1: 14
  //DEBUG: e.Result#1: 18
  //DEBUG: e.ConditionsNestedFuncs#3: 22
  //DEBUG: e.BorrowedVars#3: 26
  //DEBUG: e.LocalVars#3: 30
  //DEBUG: e.Conditions#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ExtractNested-Sentence=3/7 } (/34 Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: )/21 AsIs: (/24 AsIs: e.ConditionsNestedFuncs#3/22 AsIs: )/25 AsIs: (/28 } Tile{ AsIs: e.Pattern#1/9 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.Conditions#3/2 } )/35 {*}/36 </37 Tile{ HalfReuse: & ExtractNested-Result/12 AsIs: s.MarkupContext#1/13 AsIs: (/16 } Tile{ AsIs: e.BorrowedVars#3/26 } Tile{ AsIs: )/17 AsIs: (/20 } Tile{ AsIs: e.ScopeVars#1/14 } Tile{ AsIs: )/29 AsIs: (/32 AsIs: e.LocalVars#3/30 AsIs: )/33 } Tile{ AsIs: e.Result#1/18 } >/38 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[36], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_ExtractNestedm_Sentence_A3.ref.function );
  refalrts::reinit_name( context[12], ref_ExtractNestedm_Result.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[37] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[20], context[29] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[35] );
  refalrts::link_brackets( context[28], context[8] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[34], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[29], context[33] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[17], context[20] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[21], context[28] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  refalrts::use( res );
  refalrts::wrap_closure( context[36] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Sentence_A2("ExtractNested-Sentence=2", 39970021U, 2151505377U, func_gen_ExtractNestedm_Sentence_A2);


static refalrts::FnResult func_gen_ExtractNestedm_Sentence_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & ExtractNested-Sentence=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.Pattern#1/9 )/12 s.MarkupContext#1/13 (/16 e.ScopeVars#1/14 )/17 (/20 e.Result#1/18 )/21 (/24 e.Conditions#1/22 )/25 (/28 e.BorrowedVars#2/26 )/29 e.LocalVars#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.Pattern#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  // closed e.ScopeVars#1 as range 14
  // closed e.Result#1 as range 18
  // closed e.Conditions#1 as range 22
  // closed e.BorrowedVars#2 as range 26
  // closed e.LocalVars#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: s.MarkupContext#1: 13
  //DEBUG: e.ScopeVars#1: 14
  //DEBUG: e.Result#1: 18
  //DEBUG: e.Conditions#1: 22
  //DEBUG: e.BorrowedVars#2: 26
  //DEBUG: e.LocalVars#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </30 Tile{ HalfReuse: [*]/0 Reuse: & ExtractNested-Sentence=2/4 AsIs: (/7 AsIs: e.NestedFuncs#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: s.MarkupContext#1/13 AsIs: (/16 AsIs: e.ScopeVars#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Result#1/18 AsIs: )/21 HalfReuse: {*}/24 } </31 & ExtractNested-Conditions/32 Tile{ HalfReuse: s.MarkupContext1 #13/25 AsIs: (/28 AsIs: e.BorrowedVars#2/26 AsIs: )/29 } (/33 e.ScopeVars#1/14/34 )/36 (/37 Tile{ AsIs: e.LocalVars#2/2 } )/38 Tile{ AsIs: e.Conditions#1/22 } >/39 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], ref_ExtractNestedm_Conditions.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[34], context[35], context[14], context[15]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[39] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_ExtractNestedm_Sentence_A2.ref.function );
  refalrts::reinit_unwrapped_closure( context[24], context[0] );
  refalrts::reinit_svar( context[25], context[13] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[30] );
  refalrts::push_stack( context[39] );
  refalrts::push_stack( context[31] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[33], context[37] );
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[31], context[32] );
  res = refalrts::splice_evar( res, context[0], context[24] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  refalrts::use( res );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Sentence_A1("ExtractNested-Sentence=1", 39970021U, 2151505377U, func_gen_ExtractNestedm_Sentence_A1);


static refalrts::FnResult func_ExtractNestedm_Sentence(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & ExtractNested-Sentence/4 s.MarkupContext#1/29 e.ScopeVars#1/2 (/15 (/19 e.NestedFuncs#1/17 )/20 (/23 e.BorrowedVars#1/21 )/24 )/16 (/7 (/11 e.Pattern#1/9 )/12 e.Conditions#1/5 (/27 e.Result#1/25 )/28 )/8 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  context[21] = 0;
  context[22] = 0;
  context[23] = refalrts::brackets_left( context[21], context[22], context[13], context[14] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[23], context[24]);
  context[25] = 0;
  context[26] = 0;
  context[27] = refalrts::brackets_right( context[25], context[26], context[5], context[6] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[27], context[28]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#1 as range 17
  // closed e.BorrowedVars#1 as range 21
  // closed e.Pattern#1 as range 9
  // closed e.Conditions#1 as range 5
  // closed e.Result#1 as range 25
  if( ! refalrts::svar_left( context[29], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 2
  //DEBUG: e.NestedFuncs#1: 17
  //DEBUG: e.BorrowedVars#1: 21
  //DEBUG: e.Pattern#1: 9
  //DEBUG: e.Conditions#1: 5
  //DEBUG: e.Result#1: 25
  //DEBUG: s.MarkupContext#1: 29
  //DEBUG: e.ScopeVars#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.MarkupContext#1/29 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 } Tile{ HalfReuse: & ExtractNested-Sentence=1/15 AsIs: (/19 AsIs: e.NestedFuncs#1/17 AsIs: )/20 AsIs: (/23 } Tile{ AsIs: e.Pattern#1/9 } Tile{ AsIs: )/16 HalfReuse: s.MarkupContext1 #29/7 AsIs: (/11 } Tile{ AsIs: e.ScopeVars#1/2 } Tile{ AsIs: )/12 } Tile{ AsIs: (/27 AsIs: e.Result#1/25 AsIs: )/28 HalfReuse: (/8 } Tile{ AsIs: e.Conditions#1/5 } Tile{ AsIs: )/24 } {*}/30 </31 & ExtractNested-Pattern/32 (/33 e.ScopeVars#1/2/34 )/36 (/37 Tile{ AsIs: e.BorrowedVars#1/21 } )/38 e.Pattern#1/9/39 >/41 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_unwrapped_closure( context[30], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[31] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[32], ref_ExtractNestedm_Pattern.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[34], context[35], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[39], context[40], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[41] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[15], ref_gen_ExtractNestedm_Sentence_A1.ref.function );
  refalrts::reinit_svar( context[7], context[29] );
  refalrts::reinit_open_bracket( context[8] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[41] );
  refalrts::push_stack( context[31] );
  refalrts::link_brackets( context[37], context[38] );
  refalrts::link_brackets( context[33], context[36] );
  refalrts::link_brackets( context[8], context[24] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[23], context[16] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[41] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[30], context[37] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[27], context[8] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[16], context[11] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[15], context[23] );
  refalrts::splice_to_freelist_open( context[4], res );
  refalrts::wrap_closure( context[30] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Sentence("ExtractNested-Sentence", 39970021U, 2151505377U, func_ExtractNestedm_Sentence);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A4(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 33 elems
  refalrts::Iter context[33];
  refalrts::zeros( context, 33 );
  // </0 & ExtractNested-Conditions$1=4/4 (/7 e.ResultNestedFuncs#2/5 )/8 (/11 e.ConditionName#1/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.Pattern#1/17 )/20 (/23 e.ConditionsNestedFuncs#5/21 )/24 (/27 e.BorrowedVars#5/25 )/28 (/31 e.LocalVars#5/29 )/32 e.Conditions#5/2 >/1
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
  // closed e.ResultNestedFuncs#2 as range 5
  // closed e.ConditionName#1 as range 9
  // closed e.Result#2 as range 13
  // closed e.Pattern#1 as range 17
  // closed e.ConditionsNestedFuncs#5 as range 21
  // closed e.BorrowedVars#5 as range 25
  // closed e.LocalVars#5 as range 29
  // closed e.Conditions#5 as range 2
  //DEBUG: e.ResultNestedFuncs#2: 5
  //DEBUG: e.ConditionName#1: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: e.ConditionsNestedFuncs#5: 21
  //DEBUG: e.BorrowedVars#5: 25
  //DEBUG: e.LocalVars#5: 29
  //DEBUG: e.Conditions#5: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & ExtractNested-Conditions$1=4/4 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.ResultNestedFuncs#2/5 } Tile{ AsIs: e.ConditionsNestedFuncs#5/21 } Tile{ AsIs: )/24 AsIs: (/27 AsIs: e.BorrowedVars#5/25 AsIs: )/28 AsIs: (/31 AsIs: e.LocalVars#5/29 AsIs: )/32 } Tile{ AsIs: (/7 } Tile{ HalfReuse: # Condition/8 AsIs: (/11 AsIs: e.ConditionName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 HalfReuse: )/23 } Tile{ AsIs: e.Conditions#5/2 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[8], ident_Condition );
  refalrts::reinit_close_bracket( context[23] );
  refalrts::link_brackets( context[7], context[23] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[31], context[32] );
  refalrts::link_brackets( context[27], context[28] );
  refalrts::link_brackets( context[0], context[24] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[23] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[24], context[32] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A4("ExtractNested-Conditions$1=4", 39970021U, 2151505377U, func_gen_ExtractNestedm_Conditions_S1A4);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & ExtractNested-Conditions$1=3/4 (/7 e.ResultNestedFuncs#2/5 )/8 (/11 e.ConditionName#1/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.Pattern#1/17 )/20 s.MarkupContext#1/21 (/24 e.BorrowedVars#3/22 )/25 (/28 e.ScopeVars#1/26 )/29 (/32 e.Conditions#1/30 )/33 e.LocalVars#4/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.ResultNestedFuncs#2 as range 5
  // closed e.ConditionName#1 as range 9
  // closed e.Result#2 as range 13
  // closed e.Pattern#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
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
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.BorrowedVars#3 as range 22
  // closed e.ScopeVars#1 as range 26
  // closed e.Conditions#1 as range 30
  // closed e.LocalVars#4 as range 2
  //DEBUG: e.ResultNestedFuncs#2: 5
  //DEBUG: e.ConditionName#1: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.BorrowedVars#3: 22
  //DEBUG: e.ScopeVars#1: 26
  //DEBUG: e.Conditions#1: 30
  //DEBUG: e.LocalVars#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </34 Tile{ HalfReuse: [*]/0 Reuse: & ExtractNested-Conditions$1=4/4 AsIs: (/7 AsIs: e.ResultNestedFuncs#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.ConditionName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 } {*}/35 </36 & ExtractNested-Conditions/37 Tile{ AsIs: s.MarkupContext#1/21 AsIs: (/24 AsIs: e.BorrowedVars#3/22 AsIs: )/25 AsIs: (/28 AsIs: e.ScopeVars#1/26 AsIs: )/29 AsIs: (/32 } Tile{ AsIs: e.LocalVars#4/2 } Tile{ AsIs: )/33 } Tile{ AsIs: e.Conditions#1/30 } >/38 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[35], context[0] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[37], ref_ExtractNestedm_Conditions.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[38] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_ExtractNestedm_Conditions_S1A4.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[34] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[36] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[33], context[33] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[21], context[32] );
  res = refalrts::splice_evar( res, context[35], context[37] );
  res = refalrts::splice_evar( res, context[0], context[20] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  refalrts::use( res );
  refalrts::wrap_closure( context[35] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A3("ExtractNested-Conditions$1=3", 39970021U, 2151505377U, func_gen_ExtractNestedm_Conditions_S1A3);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 41 elems
  refalrts::Iter context[41];
  refalrts::zeros( context, 41 );
  // </0 & ExtractNested-Conditions$1=2/4 (/7 e.ResultNestedFuncs#2/5 )/8 (/11 e.ConditionName#1/9 )/12 (/15 e.Result#2/13 )/16 (/19 e.Pattern#1/17 )/20 s.MarkupContext#1/21 (/24 e.ScopeVars#1/22 )/25 (/28 e.Conditions#1/26 )/29 (/32 e.LocalVars#1/30 )/33 (/36 e.BorrowedVars#3/34 )/37 e.PatternLocalVars#3/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.ResultNestedFuncs#2 as range 5
  // closed e.ConditionName#1 as range 9
  // closed e.Result#2 as range 13
  // closed e.Pattern#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
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
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  context[34] = 0;
  context[35] = 0;
  context[36] = refalrts::brackets_left( context[34], context[35], context[2], context[3] );
  if( ! context[36] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[36], context[37]);
  // closed e.ScopeVars#1 as range 22
  // closed e.Conditions#1 as range 26
  // closed e.LocalVars#1 as range 30
  // closed e.BorrowedVars#3 as range 34
  // closed e.PatternLocalVars#3 as range 2
  //DEBUG: e.ResultNestedFuncs#2: 5
  //DEBUG: e.ConditionName#1: 9
  //DEBUG: e.Result#2: 13
  //DEBUG: e.Pattern#1: 17
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.ScopeVars#1: 22
  //DEBUG: e.Conditions#1: 26
  //DEBUG: e.LocalVars#1: 30
  //DEBUG: e.BorrowedVars#3: 34
  //DEBUG: e.PatternLocalVars#3: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </38 Tile{ HalfReuse: [*]/0 Reuse: & ExtractNested-Conditions$1=3/4 AsIs: (/7 AsIs: e.ResultNestedFuncs#2/5 AsIs: )/8 AsIs: (/11 AsIs: e.ConditionName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.Result#2/13 AsIs: )/16 AsIs: (/19 AsIs: e.Pattern#1/17 AsIs: )/20 AsIs: s.MarkupContext#1/21 AsIs: (/24 } Tile{ AsIs: e.BorrowedVars#3/34 } Tile{ AsIs: )/33 AsIs: (/36 } Tile{ AsIs: e.ScopeVars#1/22 } Tile{ AsIs: )/25 AsIs: (/28 AsIs: e.Conditions#1/26 AsIs: )/29 HalfReuse: {*}/32 } </39 Tile{ HalfReuse: & Uniq/37 } Tile{ AsIs: e.LocalVars#1/30 } Tile{ AsIs: e.PatternLocalVars#3/2 } >/40 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[0] );
  refalrts::update_name( context[4], ref_gen_ExtractNestedm_Conditions_S1A3.ref.function );
  refalrts::reinit_unwrapped_closure( context[32], context[0] );
  refalrts::reinit_name( context[37], ref_Uniq.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[38] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[39] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[36], context[25] );
  refalrts::link_brackets( context[24], context[33] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[40], context[40] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[37], context[37] );
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[25], context[32] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[33], context[36] );
  res = refalrts::splice_evar( res, context[34], context[35] );
  res = refalrts::splice_evar( res, context[0], context[24] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  refalrts::use( res );
  refalrts::wrap_closure( context[32] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A2("ExtractNested-Conditions$1=2", 39970021U, 2151505377U, func_gen_ExtractNestedm_Conditions_S1A2);


static refalrts::FnResult func_gen_ExtractNestedm_Conditions_S1A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & ExtractNested-Conditions$1=1/4 (/7 e.ConditionName#1/5 )/8 (/11 e.Pattern#1/9 )/12 s.MarkupContext#1/13 (/16 e.ScopeVars#1/14 )/17 (/20 e.Conditions#1/18 )/21 (/24 e.LocalVars#1/22 )/25 (/28 e.ResultNestedFuncs#2/26 )/29 (/32 e.BorrowedVars#2/30 )/33 e.Result#2/2 >/1
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
  // closed e.ConditionName#1 as range 5
  // closed e.Pattern#1 as range 9
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
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
  context[26] = 0;
  context[27] = 0;
  context[28] = refalrts::brackets_left( context[26], context[27], context[2], context[3] );
  if( ! context[28] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[28], context[29]);
  context[30] = 0;
  context[31] = 0;
  context[32] = refalrts::brackets_left( context[30], context[31], context[2], context[3] );
  if( ! context[32] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[32], context[33]);
  // closed e.ScopeVars#1 as range 14
  // closed e.Conditions#1 as range 18
  // closed e.LocalVars#1 as range 22
  // closed e.ResultNestedFuncs#2 as range 26
  // closed e.BorrowedVars#2 as range 30
  // closed e.Result#2 as range 2
  //DEBUG: e.ConditionName#1: 5
  //DEBUG: e.Pattern#1: 9
  //DEBUG: s.MarkupContext#1: 13
  //DEBUG: e.ScopeVars#1: 14
  //DEBUG: e.Conditions#1: 18
  //DEBUG: e.LocalVars#1: 22
  //DEBUG: e.ResultNestedFuncs#2: 26
  //DEBUG: e.BorrowedVars#2: 30
  //DEBUG: e.Result#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ExtractNested-Conditions$1=2/7 } (/34 Tile{ AsIs: e.ResultNestedFuncs#2/26 } )/35 (/36 Tile{ AsIs: e.ConditionName#1/5 } )/37 (/38 Tile{ AsIs: e.Result#2/2 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.Pattern#1/9 AsIs: )/12 AsIs: s.MarkupContext#1/13 AsIs: (/16 AsIs: e.ScopeVars#1/14 AsIs: )/17 AsIs: (/20 AsIs: e.Conditions#1/18 AsIs: )/21 AsIs: (/24 AsIs: e.LocalVars#1/22 AsIs: )/25 HalfReuse: {*}/28 } </39 & ExtractNested-Pattern/40 (/41 e.ScopeVars#1/14/42 Tile{ AsIs: )/29 AsIs: (/32 AsIs: e.BorrowedVars#2/30 AsIs: )/33 } e.Pattern#1/9/44 >/46 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[35] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[40], ref_ExtractNestedm_Pattern.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[41] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[42], context[43], context[14], context[15]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[44], context[45], context[9], context[10]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[46] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_ExtractNestedm_Conditions_S1A2.ref.function );
  refalrts::reinit_unwrapped_closure( context[28], context[4] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[46] );
  refalrts::push_stack( context[39] );
  refalrts::link_brackets( context[32], context[33] );
  refalrts::link_brackets( context[41], context[29] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[38], context[8] );
  refalrts::link_brackets( context[36], context[37] );
  refalrts::link_brackets( context[34], context[35] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[46], context[46] );
  res = refalrts::splice_evar( res, context[44], context[45] );
  res = refalrts::splice_evar( res, context[29], context[33] );
  res = refalrts::splice_evar( res, context[42], context[43] );
  res = refalrts::splice_evar( res, context[39], context[41] );
  res = refalrts::splice_evar( res, context[8], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[37], context[38] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[35], context[36] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[34], context[34] );
  refalrts::use( res );
  refalrts::wrap_closure( context[28] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Conditions_S1A1("ExtractNested-Conditions$1=1", 39970021U, 2151505377U, func_gen_ExtractNestedm_Conditions_S1A1);


static refalrts::FnResult func_ExtractNestedm_Conditions(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 54 elems
  refalrts::Iter context[54];
  refalrts::zeros( context, 54 );
  //FAST GEN: e.$
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) ( e.$ ) e.$
  // </0 & ExtractNested-Conditions/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 (/16 e.idxVTTB#0/14 )/17 e.idxVTTT#0/2 >/1
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
  // closed e.idxVTTT#0 as range 2
  do {
    // s.idx ( e.idx ) ( e.idx ) ( e.idx ) ( # Condition ( e.idx ) ( e.idx ) ( e.idx ) ) e.idx
    // </0 & ExtractNested-Conditions/4 s.MarkupContext#1/5 (/8 e.BorrowedVars#1/18 )/9 (/12 e.ScopeVars#1/20 )/13 (/16 e.LocalVars#1/22 )/17 (/28 # Condition/30 (/33 e.ConditionName#1/31 )/34 (/37 e.Result#1/35 )/38 (/41 e.Pattern#1/39 )/42 )/29 e.Conditions#1/24 >/1
    context[18] = context[6];
    context[19] = context[7];
    context[20] = context[10];
    context[21] = context[11];
    context[22] = context[14];
    context[23] = context[15];
    context[24] = context[2];
    context[25] = context[3];
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[24], context[25] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    context[30] = refalrts::ident_left(  ident_Condition, context[26], context[27] );
    if( ! context[30] )
      continue;
    context[31] = 0;
    context[32] = 0;
    context[33] = refalrts::brackets_left( context[31], context[32], context[26], context[27] );
    if( ! context[33] )
      continue;
    refalrts::bracket_pointers(context[33], context[34]);
    context[35] = 0;
    context[36] = 0;
    context[37] = refalrts::brackets_left( context[35], context[36], context[26], context[27] );
    if( ! context[37] )
      continue;
    refalrts::bracket_pointers(context[37], context[38]);
    context[39] = 0;
    context[40] = 0;
    context[41] = refalrts::brackets_left( context[39], context[40], context[26], context[27] );
    if( ! context[41] )
      continue;
    refalrts::bracket_pointers(context[41], context[42]);
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    // closed e.BorrowedVars#1 as range 18
    // closed e.ScopeVars#1 as range 20
    // closed e.LocalVars#1 as range 22
    // closed e.ConditionName#1 as range 31
    // closed e.Result#1 as range 35
    // closed e.Pattern#1 as range 39
    // closed e.Conditions#1 as range 24
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.BorrowedVars#1: 18
    //DEBUG: e.ScopeVars#1: 20
    //DEBUG: e.LocalVars#1: 22
    //DEBUG: e.ConditionName#1: 31
    //DEBUG: e.Result#1: 35
    //DEBUG: e.Pattern#1: 39
    //DEBUG: e.Conditions#1: 24

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </43 Tile{ HalfReuse: [*]/28 HalfReuse: & ExtractNested-Conditions$1=1/30 AsIs: (/33 AsIs: e.ConditionName#1/31 AsIs: )/34 AsIs: (/37 } Tile{ AsIs: e.Pattern#1/39 } )/44 Tile{ HalfReuse: s.MarkupContext1 #5/38 AsIs: (/41 } e.ScopeVars#1/20/45 Tile{ AsIs: )/42 HalfReuse: (/29 AsIs: e.Conditions#1/24 HalfReuse: )/1 } (/47 e.LocalVars#1/22/48 )/50 {*}/51 Tile{ AsIs: </0 Reuse: & ExtractNested-Result/4 AsIs: s.MarkupContext#1/5 AsIs: (/8 AsIs: e.BorrowedVars#1/18 AsIs: )/9 AsIs: (/12 AsIs: e.ScopeVars#1/20 AsIs: )/13 AsIs: (/16 AsIs: e.LocalVars#1/22 AsIs: )/17 } Tile{ AsIs: e.Result#1/35 } >/52 >/53 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[43] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[44] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[45], context[46], context[20], context[21]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[47] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[48], context[49], context[22], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[50] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_unwrapped_closure( context[51], context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[52] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[53] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[28] );
    refalrts::reinit_name( context[30], ref_gen_ExtractNestedm_Conditions_S1A1.ref.function );
    refalrts::reinit_svar( context[38], context[5] );
    refalrts::reinit_open_bracket( context[29] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::update_name( context[4], ref_ExtractNestedm_Result.ref.function );
    refalrts::push_stack( context[53] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[52] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[47], context[50] );
    refalrts::link_brackets( context[29], context[1] );
    refalrts::link_brackets( context[41], context[42] );
    refalrts::link_brackets( context[37], context[44] );
    refalrts::link_brackets( context[33], context[34] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[52], context[53] );
    res = refalrts::splice_evar( res, context[35], context[36] );
    res = refalrts::splice_evar( res, context[0], context[17] );
    res = refalrts::splice_evar( res, context[47], context[51] );
    res = refalrts::splice_evar( res, context[42], context[1] );
    res = refalrts::splice_evar( res, context[45], context[46] );
    res = refalrts::splice_evar( res, context[38], context[41] );
    res = refalrts::splice_evar( res, context[44], context[44] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[28], context[37] );
    res = refalrts::splice_evar( res, context[43], context[43] );
    refalrts::use( res );
    refalrts::wrap_closure( context[51] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx ) ( e.idx )
  // </0 & ExtractNested-Conditions/4 s.MarkupContext#1/5 (/8 e.BorrowedVars#1/18 )/9 (/12 e.ScopeVars#1/20 )/13 (/16 e.LocalVars#1/22 )/17 >/1
  context[18] = context[6];
  context[19] = context[7];
  context[20] = context[10];
  context[21] = context[11];
  context[22] = context[14];
  context[23] = context[15];
  context[24] = context[2];
  context[25] = context[3];
  if( ! refalrts::empty_seq( context[24], context[25] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.BorrowedVars#1 as range 18
  // closed e.ScopeVars#1 as range 20
  // closed e.LocalVars#1 as range 22
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.BorrowedVars#1: 18
  //DEBUG: e.ScopeVars#1: 20
  //DEBUG: e.LocalVars#1: 22

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & ExtractNested-Conditions/4 s.MarkupContext#1/5 (/8 {REMOVED TILE} {REMOVED TILE} e.ScopeVars#1/20 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.BorrowedVars#1/18 } Tile{ AsIs: )/13 AsIs: (/16 AsIs: e.LocalVars#1/22 AsIs: )/17 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[13], context[17] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[9], context[12] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Conditions("ExtractNested-Conditions", 39970021U, 2151505377U, func_ExtractNestedm_Conditions);


static refalrts::FnResult func_ExtractNestedm_Pattern(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ExtractNested-Pattern/4 (/7 e.ScopeVars#1/5 )/8 (/11 e.BorrowedVars#1/9 )/12 e.Pattern#1/2 >/1
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
  // closed e.ScopeVars#1 as range 5
  // closed e.BorrowedVars#1 as range 9
  // closed e.Pattern#1 as range 2
  //DEBUG: e.ScopeVars#1: 5
  //DEBUG: e.BorrowedVars#1: 9
  //DEBUG: e.Pattern#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </13 Tile{ HalfReuse: & MapReduce/0 HalfReuse: (/4 HalfReuse: & UpdateBorrowedVars/7 AsIs: e.ScopeVars#1/5 AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#1/9 AsIs: )/12 } </14 & Uniq/15 </16 & ExtractAllVars/17 Tile{ AsIs: e.Pattern#1/2 } >/18 >/19 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[13] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[15], ref_Uniq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[17], ref_ExtractAllVars.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[19] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], ref_MapReduce.ref.function );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_name( context[7], ref_UpdateBorrowedVars.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[19] );
  refalrts::push_stack( context[14] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[0], context[12] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Pattern("ExtractNested-Pattern", 39970021U, 2151505377U, func_ExtractNestedm_Pattern);


static refalrts::FnResult func_ExtractAllVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & ExtractAllVars/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // ( # TkVariable s.idx e.idx ) e.idx
    // </0 & ExtractAllVars/4 (/9 # TkVariable/11 s.Mode#1/12 e.Index#1/7 )/10 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_TkVariable, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Tail#1 as range 5
    if( ! refalrts::svar_left( context[12], context[7], context[8] ) )
      continue;
    // closed e.Index#1 as range 7
    //DEBUG: e.Tail#1: 5
    //DEBUG: s.Mode#1: 12
    //DEBUG: e.Index#1: 7

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} (/9 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/11 AsIs: s.Mode#1/12 AsIs: e.Index#1/7 AsIs: )/10 } Tile{ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[11] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[10] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[10] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # Brackets e.idx ) e.idx
    // </0 & ExtractAllVars/4 (/9 # Brackets/11 e.Inner#1/7 )/10 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_Brackets, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Inner#1 as range 7
    // closed e.Tail#1 as range 5
    //DEBUG: e.Inner#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/9 # Brackets/11 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Inner#1/7 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # ADT-Brackets e.idx ) e.idx
    // </0 & ExtractAllVars/4 (/9 # ADT-Brackets/11 e.Inner#1/7 )/10 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left(  ident_ADTm_Brackets, context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.Inner#1 as range 7
    // closed e.Tail#1 as range 5
    //DEBUG: e.Inner#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/9 # ADT-Brackets/11 {REMOVED TILE} )/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Inner#1/7 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[8] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // t.idx e.idx
    // </0 & ExtractAllVars/4 t.OtherTerm#1/7 e.Tail#1/5 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[8] = refalrts::tvar_left( context[7], context[5], context[6] );
    if( ! context[8] )
      continue;
    // closed e.Tail#1 as range 5
    //DEBUG: t.OtherTerm#1: 7
    //DEBUG: e.Tail#1: 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} t.OtherTerm#1/7 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractAllVars/4 } Tile{ AsIs: e.Tail#1/5 } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  //
  // </0 & ExtractAllVars/4 >/1
  context[5] = context[2];
  context[6] = context[3];
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractAllVars/4 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAllVars("ExtractAllVars", 39970021U, 2151505377U, func_ExtractAllVars);


static refalrts::FnResult func_Uniq(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Uniq/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx
    // </0 & Uniq/4 e.Uniqs#1/7 t.Repeated#1/11 e.NotScanned-M#1/13 t.Repeated#1/17 e.NotScanned-E#1/15 >/1
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
      context[13] = 0;
      context[14] = 0;
      refalrts::start_e_loop();
      do {
        context[15] = context[9];
        context[16] = context[10];
        context[18] = refalrts::repeated_stvar_left( context[17], context[11], context[15], context[16] );
        if( ! context[18] )
          continue;
        // closed e.NotScanned-E#1 as range 15
        //DEBUG: e.Uniqs#1: 7
        //DEBUG: t.Repeated#1: 11
        //DEBUG: e.NotScanned-M#1: 13
        //DEBUG: e.NotScanned-E#1: 15

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.Repeated#1/11 {REMOVED TILE} {REMOVED TILE}
        //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/7 } Tile{ AsIs: </0 AsIs: & Uniq/4 } Tile{ AsIs: e.NotScanned-M#1/13 } Tile{ AsIs: t.Repeated#1/17 AsIs: e.NotScanned-E#1/15 AsIs: >/1 ]] }
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[0] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[17];
        res = refalrts::splice_evar( res, context[13], context[14] );
        res = refalrts::splice_evar( res, context[0], context[4] );
        res = refalrts::splice_evar( res, context[7], context[8] );
        refalrts::splice_to_freelist_open( trash_prev, res );
        return refalrts::cSuccess;
      } while ( refalrts::open_evar_advance( context[13], context[14], context[9], context[10] ) );
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & Uniq/4 e.Uniqs#1/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.Uniqs#1 as range 5
  //DEBUG: e.Uniqs#1: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Uniq/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Uniqs#1/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Uniq("Uniq", 39970021U, 2151505377U, func_Uniq);


static refalrts::FnResult func_UpdateBorrowedVars(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
  //FAST GEN: e.$ ( e.$ ) ( s.$ e.$ )
  //GLOBAL GEN: e.$ ( e.$ ) ( s.$ e.$ )
  // </0 & UpdateBorrowedVars/4 e.idx#0/2 (/11 e.idxVB#0/9 )/12 (/7 s.idxVTB#0/13 e.idxVTBV#0/5 )/8 >/1
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
  // closed e.idx#0 as range 2
  // closed e.idxVB#0 as range 9
  if( ! refalrts::svar_left( context[13], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVTBV#0 as range 5
  do {
    // e.idx ( e.idx ) ( s.idx e.idx )
    // </0 & UpdateBorrowedVars/4 e.ScopeVars#1/14 (/11 e.BorrowedVars-B#1/20 (/26 s.Mode#1/28 e.Index#1/29 )/27 e.BorrowedVars-E#1/22 )/12 (/7 s.Mode#1/13 e.Index#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.ScopeVars#1 as range 14
    // closed e.Index#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop();
    do {
      context[22] = context[16];
      context[23] = context[17];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_stvar_left( context[28], context[13], context[24], context[25] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[29], context[30], context[18], context[19], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.BorrowedVars-E#1 as range 22
      //DEBUG: s.Mode#1: 13
      //DEBUG: e.ScopeVars#1: 14
      //DEBUG: e.Index#1: 18
      //DEBUG: e.BorrowedVars-B#1: 20
      //DEBUG: e.BorrowedVars-E#1: 22

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & UpdateBorrowedVars/4 e.ScopeVars#1/14 {REMOVED TILE} (/7 s.Mode#1/13 e.Index#1/18 )/8 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars-B#1/20 AsIs: (/26 AsIs: s.Mode#1/28 AsIs: e.Index#1/29 AsIs: )/27 AsIs: e.BorrowedVars-E#1/22 AsIs: )/12 } Tile{ ]] }
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[26], context[27] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[16], context[17] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx ( e.idx ) ( s.idx e.idx )
    // </0 & UpdateBorrowedVars/4 e.ScopeVars-B#1/20 (/26 s.Mode#1/28 e.Index#1/29 )/27 e.ScopeVars-E#1/22 (/11 e.BorrowedVars#1/16 )/12 (/7 s.Mode#1/13 e.Index#1/18 )/8 >/1
    context[14] = context[2];
    context[15] = context[3];
    context[16] = context[9];
    context[17] = context[10];
    context[18] = context[5];
    context[19] = context[6];
    // closed e.BorrowedVars#1 as range 16
    // closed e.Index#1 as range 18
    context[20] = 0;
    context[21] = 0;
    refalrts::start_e_loop();
    do {
      context[22] = context[14];
      context[23] = context[15];
      context[24] = 0;
      context[25] = 0;
      context[26] = refalrts::brackets_left( context[24], context[25], context[22], context[23] );
      if( ! context[26] )
        continue;
      refalrts::bracket_pointers(context[26], context[27]);
      if( ! refalrts::repeated_stvar_left( context[28], context[13], context[24], context[25] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[29], context[30], context[18], context[19], context[24], context[25] ) )
        continue;
      if( ! refalrts::empty_seq( context[24], context[25] ) )
        continue;
      // closed e.ScopeVars-E#1 as range 22
      //DEBUG: s.Mode#1: 13
      //DEBUG: e.BorrowedVars#1: 16
      //DEBUG: e.Index#1: 18
      //DEBUG: e.ScopeVars-B#1: 20
      //DEBUG: e.ScopeVars-E#1: 22

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} & UpdateBorrowedVars/4 e.ScopeVars-B#1/20 (/26 s.Mode#1/28 e.Index#1/29 )/27 e.ScopeVars-E#1/22 (/11 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#1/16 } Tile{ AsIs: (/7 AsIs: s.Mode#1/13 AsIs: e.Index#1/18 AsIs: )/8 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[7];
      res = refalrts::splice_evar( res, context[16], context[17] );
      refalrts::splice_to_freelist_open( context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[20], context[21], context[14], context[15] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx ( e.idx ) ( s.idx e.idx )
  // </0 & UpdateBorrowedVars/4 e.ScopeVars#1/14 (/11 e.BorrowedVars#1/16 )/12 (/7 s.Mode#1/13 e.Index#1/18 )/8 >/1
  context[14] = context[2];
  context[15] = context[3];
  context[16] = context[9];
  context[17] = context[10];
  context[18] = context[5];
  context[19] = context[6];
  // closed e.ScopeVars#1 as range 14
  // closed e.BorrowedVars#1 as range 16
  // closed e.Index#1 as range 18
  //DEBUG: s.Mode#1: 13
  //DEBUG: e.ScopeVars#1: 14
  //DEBUG: e.BorrowedVars#1: 16
  //DEBUG: e.Index#1: 18

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & UpdateBorrowedVars/4 e.ScopeVars#1/14 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars#1/16 AsIs: )/12 AsIs: (/7 AsIs: s.Mode#1/13 AsIs: e.Index#1/18 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UpdateBorrowedVars("UpdateBorrowedVars", 39970021U, 2151505377U, func_UpdateBorrowedVars);


static refalrts::FnResult func_gen_ExtractNestedm_Result_A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNested-Result=1/4 (/7 (/11 e.NestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 )/8 e.Result#2/2 >/1
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
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_left( context[13], context[14], context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.NestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.Result#2 as range 2
  //DEBUG: e.NestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.Result#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Result=1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.NestedFuncs#2/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: e.Result#2/2 } Tile{ ]] }
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[11], context[16] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Result_A1("ExtractNested-Result=1", 39970021U, 2151505377U, func_gen_ExtractNestedm_Result_A1);


static refalrts::FnResult func_ExtractNestedm_Result(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 29 elems
  refalrts::Iter context[29];
  refalrts::zeros( context, 29 );
  // </0 & ExtractNested-Result/4 s.MarkupContext#1/5 (/8 e.OriginBorrowedVars#1/6 )/9 (/12 e.ScopeVars#1/10 )/13 (/16 e.LocalVars#1/14 )/17 e.OriginResult#1/2 >/1
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
  // closed e.OriginBorrowedVars#1 as range 6
  // closed e.ScopeVars#1 as range 10
  // closed e.LocalVars#1 as range 14
  // closed e.OriginResult#1 as range 2
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.OriginBorrowedVars#1: 6
  //DEBUG: e.ScopeVars#1: 10
  //DEBUG: e.LocalVars#1: 14
  //DEBUG: e.OriginResult#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} s.MarkupContext#1/5 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractNested-Result=1/4 } </18 & MapReduce/19 Tile{ AsIs: (/8 } & ExtractNested-Result-Term/20 Tile{ HalfReuse: s.MarkupContext1 #5/9 AsIs: (/12 AsIs: e.ScopeVars#1/10 AsIs: )/13 AsIs: (/16 AsIs: e.LocalVars#1/14 AsIs: )/17 } )/21 (/22 (/23 )/24 (/25 Tile{ AsIs: e.OriginBorrowedVars#1/6 } )/26 )/27 Tile{ AsIs: e.OriginResult#1/2 } >/28 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_MapReduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[20], ref_ExtractNestedm_Resultm_Term.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[21] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[22] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[23] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[24] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[27] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[28] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_gen_ExtractNestedm_Result_A1.ref.function );
  refalrts::reinit_svar( context[9], context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[28] );
  refalrts::push_stack( context[18] );
  refalrts::link_brackets( context[22], context[27] );
  refalrts::link_brackets( context[25], context[26] );
  refalrts::link_brackets( context[23], context[24] );
  refalrts::link_brackets( context[8], context[21] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[28], context[28] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[21], context[25] );
  res = refalrts::splice_evar( res, context[9], context[17] );
  res = refalrts::splice_evar( res, context[20], context[20] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[18], context[19] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Result("ExtractNested-Result", 39970021U, 2151505377U, func_ExtractNestedm_Result);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNested-Result-Term$2=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.InBracketsNestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 e.InBrackets#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.InBracketsNestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.InBrackets#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.InBracketsNestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.InBracketsNestedFuncs#2/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # Brackets/7 } Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_Brackets );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S2A1("ExtractNested-Result-Term$2=1", 39970021U, 2151505377U, func_gen_ExtractNestedm_Resultm_Term_S2A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S3A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtractNested-Result-Term$3=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.Name#1/9 )/12 (/15 e.InBracketsNestedFuncs#2/13 )/16 (/19 e.BorrowedVars#2/17 )/20 e.InBrackets#2/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.NestedFuncs#1 as range 5
  // closed e.Name#1 as range 9
  // closed e.InBracketsNestedFuncs#2 as range 13
  // closed e.BorrowedVars#2 as range 17
  // closed e.InBrackets#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.Name#1: 9
  //DEBUG: e.InBracketsNestedFuncs#2: 13
  //DEBUG: e.BorrowedVars#2: 17
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.InBracketsNestedFuncs#2/13 } Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.BorrowedVars#2/17 AsIs: )/20 } Tile{ HalfReuse: )/7 } Tile{ AsIs: (/15 } Tile{ HalfReuse: # ADT-Brackets/8 AsIs: (/11 AsIs: e.Name#1/9 AsIs: )/12 } Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[7] );
  refalrts::reinit_ident( context[8], ident_ADTm_Brackets );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[15], context[1] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[0], context[7] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[4], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[12] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S3A1("ExtractNested-Result-Term$3=1", 39970021U, 2151505377U, func_gen_ExtractNestedm_Resultm_Term_S3A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S4A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & ExtractNested-Result-Term$4=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.InBracketsNestedFuncs#2/9 )/12 (/15 e.BorrowedVars#2/13 )/16 e.InBrackets#2/2 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.InBracketsNestedFuncs#2 as range 9
  // closed e.BorrowedVars#2 as range 13
  // closed e.InBrackets#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.InBracketsNestedFuncs#2: 9
  //DEBUG: e.BorrowedVars#2: 13
  //DEBUG: e.InBrackets#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.InBracketsNestedFuncs#2/9 } Tile{ AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#2/13 AsIs: )/16 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ HalfReuse: # CallBrackets/7 } Tile{ AsIs: e.InBrackets#2/2 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_CallBrackets );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[1] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[12], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S4A1("ExtractNested-Result-Term$4=1", 39970021U, 2151505377U, func_gen_ExtractNestedm_Resultm_Term_S4A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtractNested-Result-Term$5=2/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.NestedNestedFuncs#2/9 )/12 t.Function#3/13 (/17 e.BorrowedVars#3/15 )/18 t.ClosureTerm#3/19 >/1
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
  // closed e.NestedFuncs#1 as range 5
  // closed e.NestedNestedFuncs#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.BorrowedVars#3 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.NestedNestedFuncs#2: 9
  //DEBUG: t.Function#3: 13
  //DEBUG: e.BorrowedVars#3: 15
  //DEBUG: t.ClosureTerm#3: 19

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} (/7 {REMOVED TILE} {REMOVED TILE} (/11 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: e.NestedNestedFuncs#2/9 } Tile{ AsIs: t.Function#3/13 } Tile{ AsIs: )/12 } Tile{ AsIs: (/17 AsIs: e.BorrowedVars#3/15 AsIs: )/18 } Tile{ AsIs: )/8 } Tile{ AsIs: t.ClosureTerm#3/19 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::link_brackets( context[17], context[18] );
  refalrts::link_brackets( context[4], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2("ExtractNested-Result-Term$5=2", 39970021U, 2151505377U, func_gen_ExtractNestedm_Resultm_Term_S5A2);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 21 elems
  refalrts::Iter context[21];
  refalrts::zeros( context, 21 );
  // </0 & ExtractNested-Result-Term$5=2\1$2\1/4 (/7 e.Context#4/5 )/8 (/11 (/15 e.Pattern#5/13 )/16 e.Conditions#5/9 (/19 e.Result#5/17 )/20 )/12 >/1
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
  context[15] = refalrts::brackets_left( context[13], context[14], context[9], context[10] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_right( context[17], context[18], context[9], context[10] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Context#4 as range 5
  // closed e.Pattern#5 as range 13
  // closed e.Conditions#5 as range 9
  // closed e.Result#5 as range 17
  //DEBUG: e.Context#4: 5
  //DEBUG: e.Pattern#5: 13
  //DEBUG: e.Conditions#5: 9
  //DEBUG: e.Result#5: 17

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Result-Term$5=2\1$2\1/4 (/7 {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: (/15 } Tile{ AsIs: e.Context#4/5 } Tile{ AsIs: e.Pattern#5/13 } Tile{ AsIs: )/16 AsIs: e.Conditions#5/9 AsIs: (/19 AsIs: e.Result#5/17 AsIs: )/20 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[12] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[11], context[15] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1("ExtractNested-Result-Term$5=2\\1$2\\1", 39970021U, 2151505377U, func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 47 elems
  refalrts::Iter context[47];
  refalrts::zeros( context, 47 );
  // </0 & ExtractNested-Result-Term$5=2\1$2=1/4 (/7 e.ClosureName#1/5 )/8 (/11 e.Sentences#3/9 )/12 (/15 e.ScopeVars#1/13 )/16 (/19 e.BorrowedVars#1/17 )/20 (/23 e.NestedBorrowedVars#2/21 )/24 e.Context#4/2 >/1
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
  // closed e.ClosureName#1 as range 5
  // closed e.Sentences#3 as range 9
  // closed e.ScopeVars#1 as range 13
  // closed e.BorrowedVars#1 as range 17
  // closed e.NestedBorrowedVars#2 as range 21
  // closed e.Context#4 as range 2
  //DEBUG: e.ClosureName#1: 5
  //DEBUG: e.Sentences#3: 9
  //DEBUG: e.ScopeVars#1: 13
  //DEBUG: e.BorrowedVars#1: 17
  //DEBUG: e.NestedBorrowedVars#2: 21
  //DEBUG: e.Context#4: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } (/25 Tile{ HalfReuse: # Function/0 HalfReuse: # GN-Local/4 AsIs: (/7 AsIs: e.ClosureName#1/5 AsIs: )/8 HalfReuse: # Sentences/11 } </26 & Map/27 [*]/28 & ExtractNested-Result-Term$5=2\1$2\1/29 Tile{ AsIs: (/23 } e.Context#4/2/30 Tile{ AsIs: )/12 HalfReuse: {*}/15 } Tile{ AsIs: e.Sentences#3/9 } >/32 )/33 </34 & Reduce/35 (/36 & CheckBorrowed/37 (/38 Tile{ AsIs: e.ScopeVars#1/13 } )/39 Tile{ AsIs: )/16 AsIs: (/19 AsIs: e.BorrowedVars#1/17 AsIs: )/20 } Tile{ AsIs: e.NestedBorrowedVars#2/21 } >/40 (/41 # ClosureBrackets/42 (/43 # TkName/44 e.ClosureName#1/5/45 Tile{ AsIs: )/24 AsIs: e.Context#4/2 HalfReuse: )/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[25] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[26] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[27], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[28] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[29], ref_gen_ExtractNestedm_Resultm_Term_S5A2L1S2L1.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[30], context[31], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[33] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[34] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[35], ref_Reduce.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[36] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[37], ref_CheckBorrowed.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[42], ident_ClosureBrackets ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_ident( context[44], ident_TkName ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[45], context[46], context[5], context[6]))
    return refalrts::cNoMemory;
  refalrts::reinit_ident( context[0], ident_Function );
  refalrts::reinit_ident( context[4], ident_GNm_Local );
  refalrts::reinit_ident( context[11], ident_Sentences );
  refalrts::reinit_unwrapped_closure( context[15], context[28] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[41], context[1] );
  refalrts::link_brackets( context[43], context[24] );
  refalrts::push_stack( context[40] );
  refalrts::push_stack( context[34] );
  refalrts::link_brackets( context[19], context[20] );
  refalrts::link_brackets( context[36], context[16] );
  refalrts::link_brackets( context[38], context[39] );
  refalrts::link_brackets( context[25], context[33] );
  refalrts::push_stack( context[32] );
  refalrts::push_stack( context[26] );
  refalrts::link_brackets( context[23], context[12] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[24];
  res = refalrts::splice_evar( res, context[45], context[46] );
  res = refalrts::splice_evar( res, context[40], context[44] );
  res = refalrts::splice_evar( res, context[21], context[22] );
  res = refalrts::splice_evar( res, context[16], context[20] );
  res = refalrts::splice_evar( res, context[39], context[39] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  res = refalrts::splice_evar( res, context[32], context[38] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[12], context[15] );
  res = refalrts::splice_evar( res, context[30], context[31] );
  res = refalrts::splice_evar( res, context[23], context[23] );
  res = refalrts::splice_evar( res, context[26], context[29] );
  res = refalrts::splice_evar( res, context[0], context[11] );
  res = refalrts::splice_evar( res, context[25], context[25] );
  refalrts::use( res );
  refalrts::wrap_closure( context[15] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1("ExtractNested-Result-Term$5=2\\1$2=1", 39970021U, 2151505377U, func_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 45 elems
  refalrts::Iter context[45];
  refalrts::zeros( context, 45 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) s.$ ( e.$ ) e.$
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( e.$ ) ( e.$ ) s.$ ( e.$ ) e.$
  // </0 & ExtractNested-Result-Term$5=2\1/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 e.idxTTB#0/13 )/16 (/19 e.idxTTTB#0/17 )/20 s.idxTTTT#0/21 (/24 e.idxTTTTVB#0/22 )/25 e.idxTTTTVT#0/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  // closed e.idxTTB#0 as range 13
  // closed e.idxTTTB#0 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  // closed e.idxTTTTVB#0 as range 22
  // closed e.idxTTTTVT#0 as range 2
  do {
    // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) s.idx ( ) e.idx
    // </0 & ExtractNested-Result-Term$5=2\1/4 (/7 e.ClosureName#1/26 )/8 (/11 e.BorrowedVars#1/28 )/12 (/15 e.NestedBorrowedVars#2/30 )/16 (/19 e.ScopeVars#1/32 )/20 s.MarkupContext#1/21 (/24 )/25 e.Body#3/36 >/1
    context[26] = context[5];
    context[27] = context[6];
    context[28] = context[9];
    context[29] = context[10];
    context[30] = context[13];
    context[31] = context[14];
    context[32] = context[17];
    context[33] = context[18];
    context[34] = context[22];
    context[35] = context[23];
    context[36] = context[2];
    context[37] = context[3];
    if( ! refalrts::empty_seq( context[34], context[35] ) )
      continue;
    // closed e.ClosureName#1 as range 26
    // closed e.BorrowedVars#1 as range 28
    // closed e.NestedBorrowedVars#2 as range 30
    // closed e.ScopeVars#1 as range 32
    // closed e.Body#3 as range 36
    //DEBUG: s.MarkupContext#1: 21
    //DEBUG: e.ClosureName#1: 26
    //DEBUG: e.BorrowedVars#1: 28
    //DEBUG: e.NestedBorrowedVars#2: 30
    //DEBUG: e.ScopeVars#1: 32
    //DEBUG: e.Body#3: 36

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} e.NestedBorrowedVars#2/30 )/16 {REMOVED TILE} e.ScopeVars#1/32 {REMOVED TILE} s.MarkupContext#1/21 (/24 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Function/4 HalfReuse: # GN-Local/7 } Tile{ AsIs: (/19 } Tile{ AsIs: e.ClosureName#1/26 } Tile{ AsIs: )/20 } Tile{ AsIs: e.Body#3/36 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#1/28 AsIs: )/12 AsIs: (/15 } Tile{ HalfReuse: # TkName/25 } e.ClosureName#1/26/38 Tile{ HalfReuse: )/1 ]] }
    if (! refalrts::copy_evar(context[38], context[39], context[26], context[27]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Function );
    refalrts::reinit_ident( context[7], ident_GNm_Local );
    refalrts::reinit_ident( context[25], ident_TkName );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[15], context[1] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[8], context[15] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( e.idx ) ( e.idx ) s.idx ( e.idx ) # Sentences e.idx
  // </0 & ExtractNested-Result-Term$5=2\1/4 (/7 e.ClosureName#1/26 )/8 (/11 e.BorrowedVars#1/28 )/12 (/15 e.NestedBorrowedVars#2/30 )/16 (/19 e.ScopeVars#1/32 )/20 s.MarkupContext#1/21 (/24 e.NestedBorrowedVars#2/39 )/25 # Sentences/38 e.Sentences#3/36 >/1
  context[26] = context[5];
  context[27] = context[6];
  context[28] = context[9];
  context[29] = context[10];
  context[30] = context[13];
  context[31] = context[14];
  context[32] = context[17];
  context[33] = context[18];
  context[34] = context[22];
  context[35] = context[23];
  context[36] = context[2];
  context[37] = context[3];
  context[38] = refalrts::ident_left(  ident_Sentences, context[36], context[37] );
  if( ! context[38] )
    return refalrts::cRecognitionImpossible;
  // closed e.ClosureName#1 as range 26
  // closed e.BorrowedVars#1 as range 28
  // closed e.NestedBorrowedVars#2 as range 30
  if( ! refalrts::repeated_evar_left( context[39], context[40], context[30], context[31], context[34], context[35] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[34], context[35] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.ScopeVars#1 as range 32
  // closed e.Sentences#3 as range 36
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.ClosureName#1: 26
  //DEBUG: e.BorrowedVars#1: 28
  //DEBUG: e.NestedBorrowedVars#2: 30
  //DEBUG: e.ScopeVars#1: 32
  //DEBUG: e.Sentences#3: 36

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ExtractNested-Result-Term$5=2\1$2=1/7 } Tile{ AsIs: (/24 } Tile{ AsIs: e.ClosureName#1/26 } Tile{ AsIs: )/25 HalfReuse: (/38 AsIs: e.Sentences#3/36 HalfReuse: )/1 } (/41 Tile{ AsIs: e.ScopeVars#1/32 } Tile{ AsIs: )/8 AsIs: (/11 AsIs: e.BorrowedVars#1/28 AsIs: )/12 AsIs: (/15 AsIs: e.NestedBorrowedVars#2/30 AsIs: )/16 HalfReuse: {*}/19 } </42 Tile{ HalfReuse: & CreateContext/20 AsIs: s.MarkupContext#1/21 } Tile{ AsIs: e.NestedBorrowedVars#2/39 } >/43 >/44 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[41] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[42] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[43] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[44] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_ExtractNestedm_Resultm_Term_S5A2L1S2A1.ref.function );
  refalrts::reinit_open_bracket( context[38] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::reinit_unwrapped_closure( context[19], context[4] );
  refalrts::reinit_name( context[20], ref_CreateContext.ref.function );
  refalrts::push_stack( context[44] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[43] );
  refalrts::push_stack( context[42] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[41], context[8] );
  refalrts::link_brackets( context[38], context[1] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[43], context[44] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[20], context[21] );
  res = refalrts::splice_evar( res, context[42], context[42] );
  res = refalrts::splice_evar( res, context[8], context[19] );
  res = refalrts::splice_evar( res, context[32], context[33] );
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[25], context[1] );
  res = refalrts::splice_evar( res, context[26], context[27] );
  res = refalrts::splice_evar( res, context[24], context[24] );
  refalrts::use( res );
  refalrts::wrap_closure( context[19] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A2L1("ExtractNested-Result-Term$5=2\\1", 39970021U, 2151505377U, func_gen_ExtractNestedm_Resultm_Term_S5A2L1);


static refalrts::FnResult func_gen_ExtractNestedm_Resultm_Term_S5A1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 42 elems
  refalrts::Iter context[42];
  refalrts::zeros( context, 42 );
  // </0 & ExtractNested-Result-Term$5=1/4 (/7 e.NestedFuncs#1/5 )/8 (/11 e.ClosureName#1/9 )/12 (/15 e.BorrowedVars#1/13 )/16 (/19 e.ScopeVars#1/17 )/20 s.MarkupContext#1/21 (/24 e.NestedBorrowedVars#2/22 )/25 (/28 e.NestedNestedFuncs#2/26 )/29 e.Body#2/2 >/1
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
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  // closed e.NestedFuncs#1 as range 5
  // closed e.ClosureName#1 as range 9
  // closed e.BorrowedVars#1 as range 13
  // closed e.ScopeVars#1 as range 17
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
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
  // closed e.NestedBorrowedVars#2 as range 22
  // closed e.NestedNestedFuncs#2 as range 26
  // closed e.Body#2 as range 2
  //DEBUG: e.NestedFuncs#1: 5
  //DEBUG: e.ClosureName#1: 9
  //DEBUG: e.BorrowedVars#1: 13
  //DEBUG: e.ScopeVars#1: 17
  //DEBUG: s.MarkupContext#1: 21
  //DEBUG: e.NestedBorrowedVars#2: 22
  //DEBUG: e.NestedNestedFuncs#2: 26
  //DEBUG: e.Body#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 HalfReuse: [*]/4 HalfReuse: & ExtractNested-Result-Term$5=2/7 } (/30 Tile{ AsIs: e.NestedFuncs#1/5 } Tile{ AsIs: )/25 AsIs: (/28 AsIs: e.NestedNestedFuncs#2/26 AsIs: )/29 } {*}/31 </32 & Fetch/33 (/34 e.NestedBorrowedVars#2/22/35 )/37 Tile{ AsIs: e.Body#2/2 } [*]/38 Tile{ HalfReuse: & ExtractNested-Result-Term$5=2\1/8 AsIs: (/11 AsIs: e.ClosureName#1/9 AsIs: )/12 AsIs: (/15 AsIs: e.BorrowedVars#1/13 AsIs: )/16 AsIs: (/19 } Tile{ AsIs: e.NestedBorrowedVars#2/22 } )/39 (/40 Tile{ AsIs: e.ScopeVars#1/17 } Tile{ AsIs: )/20 AsIs: s.MarkupContext#1/21 HalfReuse: {*}/24 } >/41 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[30] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[31], context[4] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[32] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[33], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[34] ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[35], context[36], context[22], context[23]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[37] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_closure_head( context[38] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[39] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[40] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[41] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_closure_head( context[4] );
  refalrts::reinit_name( context[7], ref_gen_ExtractNestedm_Resultm_Term_S5A2.ref.function );
  refalrts::reinit_name( context[8], ref_gen_ExtractNestedm_Resultm_Term_S5A2L1.ref.function );
  refalrts::reinit_unwrapped_closure( context[24], context[38] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[41] );
  refalrts::push_stack( context[32] );
  refalrts::link_brackets( context[40], context[20] );
  refalrts::link_brackets( context[19], context[39] );
  refalrts::link_brackets( context[15], context[16] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::link_brackets( context[34], context[37] );
  refalrts::link_brackets( context[28], context[29] );
  refalrts::link_brackets( context[30], context[25] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[41], context[41] );
  res = refalrts::splice_evar( res, context[20], context[24] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[39], context[40] );
  res = refalrts::splice_evar( res, context[22], context[23] );
  res = refalrts::splice_evar( res, context[8], context[19] );
  res = refalrts::splice_evar( res, context[38], context[38] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[31], context[37] );
  res = refalrts::splice_evar( res, context[25], context[29] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[30], context[30] );
  refalrts::use( res );
  refalrts::wrap_closure( context[31] );
  refalrts::wrap_closure( context[24] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractNestedm_Resultm_Term_S5A1("ExtractNested-Result-Term$5=1", 39970021U, 2151505377U, func_gen_ExtractNestedm_Resultm_Term_S5A1);


static refalrts::FnResult func_ExtractNestedm_Resultm_Term(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 46 elems
  refalrts::Iter context[46];
  refalrts::zeros( context, 46 );
  //FAST GEN: s.$ ( e.$ ) ( e.$ ) ( ( e.$ ) ( e.$ ) ) t.$
  //GLOBAL GEN: s.$ ( e.$ ) ( e.$ ) ( ( e.$ ) ( e.$ ) ) t.$
  // </0 & ExtractNested-Result-Term/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 (/12 e.idxVTB#0/10 )/13 (/16 (/20 e.idxVTTBB#0/18 )/21 (/24 e.idxVTTBTB#0/22 )/25 )/17 t.idxVTTT#0/26 >/1
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
  context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[20], context[21]);
  context[22] = 0;
  context[23] = 0;
  context[24] = refalrts::brackets_left( context[22], context[23], context[14], context[15] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[24], context[25]);
  if( ! refalrts::empty_seq( context[14], context[15] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVB#0 as range 6
  // closed e.idxVTB#0 as range 10
  // closed e.idxVTTBB#0 as range 18
  // closed e.idxVTTBTB#0 as range 22
  context[27] = refalrts::tvar_left( context[26], context[2], context[3] );
  if( ! context[27] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // s.idx ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # TkVariable s.idx e.idx )
    // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/28 )/9 (/12 e.LocalVars#1/30 )/13 (/16 (/20 e.NestedFuncs#1/32 )/21 (/24 e.BorrowedVars#1/34 )/25 )/17 (/26 # TkVariable/38 s.Mode#1/39 e.Index#1/36 )/27 >/1
    context[28] = context[6];
    context[29] = context[7];
    context[30] = context[10];
    context[31] = context[11];
    context[32] = context[18];
    context[33] = context[19];
    context[34] = context[22];
    context[35] = context[23];
    context[36] = 0;
    context[37] = 0;
    if( ! refalrts::brackets_term( context[36], context[37], context[26] ) )
      continue;
    context[38] = refalrts::ident_left(  ident_TkVariable, context[36], context[37] );
    if( ! context[38] )
      continue;
    // closed e.ScopeVars#1 as range 28
    // closed e.LocalVars#1 as range 30
    // closed e.NestedFuncs#1 as range 32
    // closed e.BorrowedVars#1 as range 34
    if( ! refalrts::svar_left( context[39], context[36], context[37] ) )
      continue;
    // closed e.Index#1 as range 36
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ScopeVars#1: 28
    //DEBUG: e.LocalVars#1: 30
    //DEBUG: e.NestedFuncs#1: 32
    //DEBUG: e.BorrowedVars#1: 34
    //DEBUG: s.Mode#1: 39
    //DEBUG: e.Index#1: 36

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} s.MarkupContext#1/5 {REMOVED TILE} e.LocalVars#1/30 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: (/20 AsIs: e.NestedFuncs#1/32 AsIs: )/21 HalfReuse: </24 } Tile{ Reuse: & CheckBorrowed/4 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/28 AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.BorrowedVars#1/34 } Tile{ AsIs: )/13 } Tile{ HalfReuse: (/1 } Tile{ HalfReuse: s.Mode1 #39/0 } e.Index#1/36/40 )/42 Tile{ HalfReuse: >/25 AsIs: )/17 AsIs: (/26 AsIs: # TkVariable/38 AsIs: s.Mode#1/39 AsIs: e.Index#1/36 AsIs: )/27 } Tile{ ]] }
    if (! refalrts::copy_evar(context[40], context[41], context[36], context[37]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[42] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[24] );
    refalrts::update_name( context[4], ref_CheckBorrowed.ref.function );
    refalrts::reinit_open_bracket( context[1] );
    refalrts::reinit_svar( context[0], context[39] );
    refalrts::reinit_close_call( context[25] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[24] );
    refalrts::link_brackets( context[1], context[42] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[25], context[27] );
    res = refalrts::splice_evar( res, context[42], context[42] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[1], context[1] );
    res = refalrts::splice_evar( res, context[13], context[13] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[8], context[12] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[16], context[24] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # Brackets e.idx )
    // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/28 )/9 (/12 e.LocalVars#1/30 )/13 (/16 (/20 e.NestedFuncs#1/32 )/21 (/24 e.BorrowedVars#1/34 )/25 )/17 (/26 # Brackets/38 e.InBrackets#1/36 )/27 >/1
    context[28] = context[6];
    context[29] = context[7];
    context[30] = context[10];
    context[31] = context[11];
    context[32] = context[18];
    context[33] = context[19];
    context[34] = context[22];
    context[35] = context[23];
    context[36] = 0;
    context[37] = 0;
    if( ! refalrts::brackets_term( context[36], context[37], context[26] ) )
      continue;
    context[38] = refalrts::ident_left(  ident_Brackets, context[36], context[37] );
    if( ! context[38] )
      continue;
    // closed e.ScopeVars#1 as range 28
    // closed e.LocalVars#1 as range 30
    // closed e.NestedFuncs#1 as range 32
    // closed e.BorrowedVars#1 as range 34
    // closed e.InBrackets#1 as range 36
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ScopeVars#1: 28
    //DEBUG: e.LocalVars#1: 30
    //DEBUG: e.NestedFuncs#1: 32
    //DEBUG: e.BorrowedVars#1: 34
    //DEBUG: e.InBrackets#1: 36

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </25 } Tile{ HalfReuse: [*]/38 } Tile{ HalfReuse: & ExtractNested-Result-Term$2=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/32 AsIs: )/21 HalfReuse: {*}/24 } Tile{ AsIs: </0 Reuse: & ExtractNested-Result/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: (/26 } Tile{ AsIs: e.BorrowedVars#1/34 } Tile{ AsIs: )/17 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/28 AsIs: )/9 AsIs: (/12 AsIs: e.LocalVars#1/30 AsIs: )/13 } Tile{ AsIs: e.InBrackets#1/36 } Tile{ HalfReuse: >/27 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_closure_head( context[38] );
    refalrts::reinit_name( context[16], ref_gen_ExtractNestedm_Resultm_Term_S2A1.ref.function );
    refalrts::reinit_unwrapped_closure( context[24], context[38] );
    refalrts::update_name( context[4], ref_ExtractNestedm_Result.ref.function );
    refalrts::reinit_close_call( context[27] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[26], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[27];
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[16], context[24] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    refalrts::use( res );
    refalrts::wrap_closure( context[24] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # ADT-Brackets ( e.idx ) e.idx )
    // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/28 )/9 (/12 e.LocalVars#1/30 )/13 (/16 (/20 e.NestedFuncs#1/32 )/21 (/24 e.BorrowedVars#1/34 )/25 )/17 (/26 # ADT-Brackets/38 (/41 e.Name#1/39 )/42 e.InBrackets#1/36 )/27 >/1
    context[28] = context[6];
    context[29] = context[7];
    context[30] = context[10];
    context[31] = context[11];
    context[32] = context[18];
    context[33] = context[19];
    context[34] = context[22];
    context[35] = context[23];
    context[36] = 0;
    context[37] = 0;
    if( ! refalrts::brackets_term( context[36], context[37], context[26] ) )
      continue;
    context[38] = refalrts::ident_left(  ident_ADTm_Brackets, context[36], context[37] );
    if( ! context[38] )
      continue;
    context[39] = 0;
    context[40] = 0;
    context[41] = refalrts::brackets_left( context[39], context[40], context[36], context[37] );
    if( ! context[41] )
      continue;
    refalrts::bracket_pointers(context[41], context[42]);
    // closed e.ScopeVars#1 as range 28
    // closed e.LocalVars#1 as range 30
    // closed e.NestedFuncs#1 as range 32
    // closed e.BorrowedVars#1 as range 34
    // closed e.Name#1 as range 39
    // closed e.InBrackets#1 as range 36
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ScopeVars#1: 28
    //DEBUG: e.LocalVars#1: 30
    //DEBUG: e.NestedFuncs#1: 32
    //DEBUG: e.BorrowedVars#1: 34
    //DEBUG: e.Name#1: 39
    //DEBUG: e.InBrackets#1: 36

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </25 } Tile{ HalfReuse: [*]/38 } Tile{ HalfReuse: & ExtractNested-Result-Term$3=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/32 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.Name#1/39 } Tile{ AsIs: )/17 HalfReuse: {*}/26 } Tile{ AsIs: </0 Reuse: & ExtractNested-Result/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: (/41 } Tile{ AsIs: e.BorrowedVars#1/34 } Tile{ AsIs: )/42 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/28 AsIs: )/9 AsIs: (/12 AsIs: e.LocalVars#1/30 AsIs: )/13 } Tile{ AsIs: e.InBrackets#1/36 } Tile{ HalfReuse: >/27 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_closure_head( context[38] );
    refalrts::reinit_name( context[16], ref_gen_ExtractNestedm_Resultm_Term_S3A1.ref.function );
    refalrts::reinit_unwrapped_closure( context[26], context[38] );
    refalrts::update_name( context[4], ref_ExtractNestedm_Result.ref.function );
    refalrts::reinit_close_call( context[27] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[41], context[42] );
    refalrts::link_brackets( context[24], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[27];
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[42], context[42] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[41], context[41] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[17], context[26] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[16], context[24] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    refalrts::use( res );
    refalrts::wrap_closure( context[26] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # CallBrackets e.idx )
    // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/28 )/9 (/12 e.LocalVars#1/30 )/13 (/16 (/20 e.NestedFuncs#1/32 )/21 (/24 e.BorrowedVars#1/34 )/25 )/17 (/26 # CallBrackets/38 e.InBrackets#1/36 )/27 >/1
    context[28] = context[6];
    context[29] = context[7];
    context[30] = context[10];
    context[31] = context[11];
    context[32] = context[18];
    context[33] = context[19];
    context[34] = context[22];
    context[35] = context[23];
    context[36] = 0;
    context[37] = 0;
    if( ! refalrts::brackets_term( context[36], context[37], context[26] ) )
      continue;
    context[38] = refalrts::ident_left(  ident_CallBrackets, context[36], context[37] );
    if( ! context[38] )
      continue;
    // closed e.ScopeVars#1 as range 28
    // closed e.LocalVars#1 as range 30
    // closed e.NestedFuncs#1 as range 32
    // closed e.BorrowedVars#1 as range 34
    // closed e.InBrackets#1 as range 36
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ScopeVars#1: 28
    //DEBUG: e.LocalVars#1: 30
    //DEBUG: e.NestedFuncs#1: 32
    //DEBUG: e.BorrowedVars#1: 34
    //DEBUG: e.InBrackets#1: 36

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </25 } Tile{ HalfReuse: [*]/38 } Tile{ HalfReuse: & ExtractNested-Result-Term$4=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/32 AsIs: )/21 HalfReuse: {*}/24 } Tile{ AsIs: </0 Reuse: & ExtractNested-Result/4 AsIs: s.MarkupContext#1/5 } Tile{ AsIs: (/26 } Tile{ AsIs: e.BorrowedVars#1/34 } Tile{ AsIs: )/17 } Tile{ AsIs: (/8 AsIs: e.ScopeVars#1/28 AsIs: )/9 AsIs: (/12 AsIs: e.LocalVars#1/30 AsIs: )/13 } Tile{ AsIs: e.InBrackets#1/36 } Tile{ HalfReuse: >/27 AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[25] );
    refalrts::reinit_closure_head( context[38] );
    refalrts::reinit_name( context[16], ref_gen_ExtractNestedm_Resultm_Term_S4A1.ref.function );
    refalrts::reinit_unwrapped_closure( context[24], context[38] );
    refalrts::update_name( context[4], ref_ExtractNestedm_Result.ref.function );
    refalrts::reinit_close_call( context[27] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::link_brackets( context[26], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[27];
    res = refalrts::splice_evar( res, context[36], context[37] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[0], context[5] );
    res = refalrts::splice_evar( res, context[16], context[24] );
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    refalrts::use( res );
    refalrts::wrap_closure( context[24] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) ( # Closure ( e.idx ) e.idx )
    // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/28 )/9 (/12 e.LocalVars#1/30 )/13 (/16 (/20 e.NestedFuncs#1/32 )/21 (/24 e.BorrowedVars#1/34 )/25 )/17 (/26 # Closure/38 (/41 e.ClosureName#1/39 )/42 e.Body#1/36 )/27 >/1
    context[28] = context[6];
    context[29] = context[7];
    context[30] = context[10];
    context[31] = context[11];
    context[32] = context[18];
    context[33] = context[19];
    context[34] = context[22];
    context[35] = context[23];
    context[36] = 0;
    context[37] = 0;
    if( ! refalrts::brackets_term( context[36], context[37], context[26] ) )
      continue;
    context[38] = refalrts::ident_left(  ident_Closure, context[36], context[37] );
    if( ! context[38] )
      continue;
    context[39] = 0;
    context[40] = 0;
    context[41] = refalrts::brackets_left( context[39], context[40], context[36], context[37] );
    if( ! context[41] )
      continue;
    refalrts::bracket_pointers(context[41], context[42]);
    // closed e.ScopeVars#1 as range 28
    // closed e.LocalVars#1 as range 30
    // closed e.NestedFuncs#1 as range 32
    // closed e.BorrowedVars#1 as range 34
    // closed e.ClosureName#1 as range 39
    // closed e.Body#1 as range 36
    //DEBUG: s.MarkupContext#1: 5
    //DEBUG: e.ScopeVars#1: 28
    //DEBUG: e.LocalVars#1: 30
    //DEBUG: e.NestedFuncs#1: 32
    //DEBUG: e.BorrowedVars#1: 34
    //DEBUG: e.ClosureName#1: 39
    //DEBUG: e.Body#1: 36

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </43 Tile{ HalfReuse: [*]/13 HalfReuse: & ExtractNested-Result-Term$5=1/16 AsIs: (/20 AsIs: e.NestedFuncs#1/32 AsIs: )/21 AsIs: (/24 } Tile{ AsIs: e.ClosureName#1/39 } Tile{ AsIs: )/17 AsIs: (/26 } Tile{ AsIs: e.BorrowedVars#1/34 } Tile{ AsIs: )/9 AsIs: (/12 } Tile{ AsIs: e.ScopeVars#1/28 } Tile{ AsIs: )/25 } Tile{ HalfReuse: s.MarkupContext1 #5/38 HalfReuse: {*}/41 } Tile{ AsIs: </0 Reuse: & ExtractNestedRec/4 AsIs: s.MarkupContext#1/5 AsIs: (/8 } e.ScopeVars#1/28/44 Tile{ AsIs: e.LocalVars#1/30 } Tile{ AsIs: )/42 AsIs: e.Body#1/36 HalfReuse: >/27 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[43] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[44], context[45], context[28], context[29]))
      return refalrts::cNoMemory;
    refalrts::reinit_closure_head( context[13] );
    refalrts::reinit_name( context[16], ref_gen_ExtractNestedm_Resultm_Term_S5A1.ref.function );
    refalrts::reinit_svar( context[38], context[5] );
    refalrts::reinit_unwrapped_closure( context[41], context[13] );
    refalrts::update_name( context[4], ref_ExtractNestedRec.ref.function );
    refalrts::reinit_close_call( context[27] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[43] );
    refalrts::push_stack( context[27] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[42] );
    refalrts::link_brackets( context[12], context[25] );
    refalrts::link_brackets( context[26], context[9] );
    refalrts::link_brackets( context[24], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[42];
    res = refalrts::splice_evar( res, context[30], context[31] );
    res = refalrts::splice_evar( res, context[44], context[45] );
    res = refalrts::splice_evar( res, context[0], context[8] );
    res = refalrts::splice_evar( res, context[38], context[41] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[9], context[12] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[17], context[26] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[13], context[24] );
    res = refalrts::splice_evar( res, context[43], context[43] );
    refalrts::use( res );
    refalrts::wrap_closure( context[41] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx ( e.idx ) ( e.idx ) ( ( e.idx ) ( e.idx ) ) t.idx
  // </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/28 )/9 (/12 e.LocalVars#1/30 )/13 (/16 (/20 e.NestedFuncs#1/32 )/21 (/24 e.BorrowedVars#1/34 )/25 )/17 t.OtherTerm#1/26 >/1
  context[28] = context[6];
  context[29] = context[7];
  context[30] = context[10];
  context[31] = context[11];
  context[32] = context[18];
  context[33] = context[19];
  context[34] = context[22];
  context[35] = context[23];
  // closed e.ScopeVars#1 as range 28
  // closed e.LocalVars#1 as range 30
  // closed e.NestedFuncs#1 as range 32
  // closed e.BorrowedVars#1 as range 34
  //DEBUG: t.OtherTerm#1: 26
  //DEBUG: s.MarkupContext#1: 5
  //DEBUG: e.ScopeVars#1: 28
  //DEBUG: e.LocalVars#1: 30
  //DEBUG: e.NestedFuncs#1: 32
  //DEBUG: e.BorrowedVars#1: 34

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & ExtractNested-Result-Term/4 s.MarkupContext#1/5 (/8 e.ScopeVars#1/28 )/9 (/12 e.LocalVars#1/30 )/13 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: (/20 AsIs: e.NestedFuncs#1/32 AsIs: )/21 AsIs: (/24 AsIs: e.BorrowedVars#1/34 AsIs: )/25 AsIs: )/17 AsIs: t.OtherTerm#1/26 } Tile{ ]] }
  refalrts::link_brackets( context[16], context[17] );
  refalrts::link_brackets( context[24], context[25] );
  refalrts::link_brackets( context[20], context[21] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[16], context[27] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractNestedm_Resultm_Term("ExtractNested-Result-Term", 39970021U, 2151505377U, func_ExtractNestedm_Resultm_Term);


static refalrts::FnResult func_CheckBorrowed(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 35 elems
  refalrts::Iter context[35];
  refalrts::zeros( context, 35 );
  //FAST GEN: ( e.$ ) ( e.$ ) ( s.$ e.$ )
  //GLOBAL GEN: ( e.$ ) ( e.$ ) ( s.$ e.$ )
  // </0 & CheckBorrowed/4 (/7 e.idxB#0/5 )/8 (/11 e.idxTB#0/9 )/12 (/15 s.idxTTB#0/17 e.idxTTBV#0/13 )/16 >/1
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
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  // closed e.idxTB#0 as range 9
  if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTTBV#0 as range 13
  do {
    // ( e.idx ) ( e.idx ) ( s.idx e.idx )
    // </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/18 )/8 (/11 e.BorrowedVars-B#1/24 (/30 s.Mode#1/32 e.Index#1/33 )/31 e.BorrowedVars-E#1/26 )/12 (/15 s.Mode#1/17 e.Index#1/22 )/16 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    // closed e.ScopeVars#1 as range 18
    // closed e.Index#1 as range 22
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop();
    do {
      context[26] = context[20];
      context[27] = context[21];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::repeated_stvar_left( context[32], context[17], context[28], context[29] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[33], context[34], context[22], context[23], context[28], context[29] ) )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;
      // closed e.BorrowedVars-E#1 as range 26
      //DEBUG: s.Mode#1: 17
      //DEBUG: e.ScopeVars#1: 18
      //DEBUG: e.Index#1: 22
      //DEBUG: e.BorrowedVars-B#1: 24
      //DEBUG: e.BorrowedVars-E#1: 26

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/18 )/8 {REMOVED TILE} (/15 s.Mode#1/17 e.Index#1/22 )/16 >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars-B#1/24 AsIs: (/30 AsIs: s.Mode#1/32 AsIs: e.Index#1/33 AsIs: )/31 AsIs: e.BorrowedVars-E#1/26 AsIs: )/12 } Tile{ ]] }
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[30], context[31] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[11], context[12] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[24], context[25], context[20], context[21] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( e.idx ) ( s.idx e.idx )
    // </0 & CheckBorrowed/4 (/7 e.ScopeVars-B#1/24 (/30 s.Mode#1/32 e.Index#1/33 )/31 e.ScopeVars-E#1/26 )/8 (/11 e.BorrowedVars#1/20 )/12 (/15 s.Mode#1/17 e.Index#1/22 )/16 >/1
    context[18] = context[5];
    context[19] = context[6];
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    // closed e.BorrowedVars#1 as range 20
    // closed e.Index#1 as range 22
    context[24] = 0;
    context[25] = 0;
    refalrts::start_e_loop();
    do {
      context[26] = context[18];
      context[27] = context[19];
      context[28] = 0;
      context[29] = 0;
      context[30] = refalrts::brackets_left( context[28], context[29], context[26], context[27] );
      if( ! context[30] )
        continue;
      refalrts::bracket_pointers(context[30], context[31]);
      if( ! refalrts::repeated_stvar_left( context[32], context[17], context[28], context[29] ) )
        continue;
      if( ! refalrts::repeated_evar_left( context[33], context[34], context[22], context[23], context[28], context[29] ) )
        continue;
      if( ! refalrts::empty_seq( context[28], context[29] ) )
        continue;
      // closed e.ScopeVars-E#1 as range 26
      //DEBUG: s.Mode#1: 17
      //DEBUG: e.BorrowedVars#1: 20
      //DEBUG: e.Index#1: 22
      //DEBUG: e.ScopeVars-B#1: 24
      //DEBUG: e.ScopeVars-E#1: 26

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} & CheckBorrowed/4 (/7 e.ScopeVars-B#1/24 (/30 s.Mode#1/32 e.Index#1/33 )/31 e.ScopeVars-E#1/26 )/8 (/11 {REMOVED TILE} )/12 {REMOVED TILE}
      //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ AsIs: e.BorrowedVars#1/20 } Tile{ AsIs: (/15 AsIs: s.Mode#1/17 AsIs: e.Index#1/22 AsIs: )/16 HalfReuse: )/1 ]] }
      refalrts::reinit_open_bracket( context[0] );
      refalrts::reinit_close_bracket( context[1] );
      refalrts::link_brackets( context[0], context[1] );
      refalrts::link_brackets( context[15], context[16] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[15];
      res = refalrts::splice_evar( res, context[20], context[21] );
      refalrts::splice_to_freelist_open( context[0], res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[24], context[25], context[18], context[19] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) ( e.idx ) ( s.idx e.idx )
  // </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/18 )/8 (/11 e.BorrowedVars#1/20 )/12 (/15 s.Mode#1/17 e.Index#1/22 )/16 >/1
  context[18] = context[5];
  context[19] = context[6];
  context[20] = context[9];
  context[21] = context[10];
  context[22] = context[13];
  context[23] = context[14];
  // closed e.ScopeVars#1 as range 18
  // closed e.BorrowedVars#1 as range 20
  // closed e.Index#1 as range 22
  //DEBUG: s.Mode#1: 17
  //DEBUG: e.ScopeVars#1: 18
  //DEBUG: e.BorrowedVars#1: 20
  //DEBUG: e.Index#1: 22

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & CheckBorrowed/4 (/7 e.ScopeVars#1/18 )/8 {REMOVED TILE} (/15 s.Mode#1/17 e.Index#1/22 )/16 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: e.BorrowedVars#1/20 AsIs: )/12 } Tile{ ]] }
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[12] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CheckBorrowed("CheckBorrowed", 39970021U, 2151505377U, func_CheckBorrowed);


static refalrts::FnResult func_gen_CreateContext_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & CreateContext$1\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    // ( 'e' e.idx )
    // </0 & CreateContext$1\1/4 (/7 'e'/9 e.Index#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::char_term( 'e', context[9] ) )
      continue;
    // closed e.Index#2 as range 10
    //DEBUG: e.Index#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkIdentifier/4 HalfReuse: # VAR/7 AsIs: 'e'/9 AsIs: e.Index#2/10 AsIs: )/8 HalfReuse: (/1 } # Brackets/12 (/13 # TkVariable/14 'e'/15 e.Index#2/10/16 )/18 )/19 Tile{ ]] }
    if( ! refalrts::alloc_ident( context[12], ident_Brackets ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[14], ident_TkVariable ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[15], 'e' ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[16], context[17], context[10], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_TkIdentifier );
    refalrts::reinit_ident( context[7], ident_VAR );
    refalrts::reinit_open_bracket( context[1] );
    refalrts::link_brackets( context[1], context[19] );
    refalrts::link_brackets( context[13], context[18] );
    refalrts::link_brackets( context[0], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx e.idx )
  // </0 & CreateContext$1\1/4 (/7 s.Mode#2/9 e.Index#2/10 )/8 >/1
  context[10] = context[5];
  context[11] = context[6];
  // closed e.Index#2 as range 10
  //DEBUG: s.Mode#2: 9
  //DEBUG: e.Index#2: 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # TkIdentifier/4 HalfReuse: # VAR/7 AsIs: s.Mode#2/9 AsIs: e.Index#2/10 AsIs: )/8 HalfReuse: (/1 } # TkVariable/12 s.Mode#2/9/13 e.Index#2/10/14 )/16 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[12], ident_TkVariable ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_stvar(context[13], context[9]))
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[14], context[15], context[10], context[11]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_ident( context[4], ident_TkIdentifier );
  refalrts::reinit_ident( context[7], ident_VAR );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::link_brackets( context[1], context[16] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[12], context[16] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateContext_S1L1("CreateContext$1\\1", 39970021U, 2151505377U, func_gen_CreateContext_S1L1);


static refalrts::FnResult func_gen_CreateContext_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  //FAST GEN: ( s.$ e.$ )
  //GLOBAL GEN: ( s.$ e.$ )
  // </0 & CreateContext$2\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
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
  // closed e.idxBV#0 as range 5
  do {
    // ( 'e' e.idx )
    // </0 & CreateContext$2\1/4 (/7 'e'/9 e.Index#2/10 )/8 >/1
    context[10] = context[5];
    context[11] = context[6];
    if( ! refalrts::char_term( 'e', context[9] ) )
      continue;
    // closed e.Index#2 as range 10
    //DEBUG: e.Index#2: 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } (/12 Tile{ HalfReuse: # Brackets/0 HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: 'e'/9 AsIs: e.Index#2/10 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[12] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], ident_Brackets );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], ident_TkVariable );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[12], context[1] );
    refalrts::link_brackets( context[4], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[12], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( s.idx e.idx )
  // </0 & CreateContext$2\1/4 (/7 s.Mode#2/9 e.Index#2/10 )/8 >/1
  context[10] = context[5];
  context[11] = context[6];
  // closed e.Index#2 as range 10
  //DEBUG: s.Mode#2: 9
  //DEBUG: e.Index#2: 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # TkVariable/7 AsIs: s.Mode#2/9 AsIs: e.Index#2/10 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_TkVariable );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_CreateContext_S2L1("CreateContext$2\\1", 39970021U, 2151505377U, func_gen_CreateContext_S2L1);


static refalrts::FnResult func_CreateContext(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & CreateContext/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # MarkupContext e.idx
    // </0 & CreateContext/4 # MarkupContext/5 e.Context#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_MarkupContext, context[5] ) )
      continue;
    // closed e.Context#1 as range 6
    //DEBUG: e.Context#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & CreateContext$1\1/5 AsIs: e.Context#1/6 AsIs: >/1 ]] }
    refalrts::update_name( context[4], ref_Map.ref.function );
    refalrts::reinit_name( context[5], ref_gen_CreateContext_S1L1.ref.function );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # NoMarkupContext e.idx
  // </0 & CreateContext/4 # NoMarkupContext/5 e.Context#1/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_NoMarkupContext, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Context#1 as range 6
  //DEBUG: e.Context#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 HalfReuse: & CreateContext$2\1/5 AsIs: e.Context#1/6 AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_Map.ref.function );
  refalrts::reinit_name( context[5], ref_gen_CreateContext_S2L1.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_CreateContext("CreateContext", 39970021U, 2151505377U, func_CreateContext);


static refalrts::FnResult func_gen_Passm_RemoveRedudandElements_L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & Pass-RemoveRedudandElements\1/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx
    // </0 & Pass-RemoveRedudandElements\1/4 e.AST-B#2/7 (/13 # NativeBlock/15 t.SrcPos#2/16 e.Code#2/11 )/14 e.AST-E#2/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  ident_NativeBlock, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.AST-E#2 as range 9
      context[17] = refalrts::tvar_left( context[16], context[11], context[12] );
      if( ! context[17] )
        continue;
      // closed e.Code#2 as range 11
      //DEBUG: e.AST-B#2: 7
      //DEBUG: e.AST-E#2: 9
      //DEBUG: t.SrcPos#2: 16
      //DEBUG: e.Code#2: 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & SelectiveSaver-Save/4 AsIs: e.AST-B#2/7 AsIs: (/13 AsIs: # NativeBlock/15 AsIs: t.SrcPos#2/16 AsIs: e.Code#2/11 AsIs: )/14 } Tile{ AsIs: e.AST-E#2/9 } Tile{ ]] }
      refalrts::update_name( context[4], ref_SelectiveSaverm_Save.ref.function );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[4], context[14] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx
    // </0 & Pass-RemoveRedudandElements\1/4 e.AST-B#2/7 (/13 # Function/15 s.ScopeClass#2/16 (/19 e.Name#2/17 )/20 # NativeBody/21 e.Code#2/11 )/14 e.AST-E#2/9 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    refalrts::start_e_loop();
    do {
      context[9] = context[5];
      context[10] = context[6];
      context[11] = 0;
      context[12] = 0;
      context[13] = refalrts::brackets_left( context[11], context[12], context[9], context[10] );
      if( ! context[13] )
        continue;
      refalrts::bracket_pointers(context[13], context[14]);
      context[15] = refalrts::ident_left(  ident_Function, context[11], context[12] );
      if( ! context[15] )
        continue;
      // closed e.AST-E#2 as range 9
      if( ! refalrts::svar_left( context[16], context[11], context[12] ) )
        continue;
      context[17] = 0;
      context[18] = 0;
      context[19] = refalrts::brackets_left( context[17], context[18], context[11], context[12] );
      if( ! context[19] )
        continue;
      refalrts::bracket_pointers(context[19], context[20]);
      context[21] = refalrts::ident_left(  ident_NativeBody, context[11], context[12] );
      if( ! context[21] )
        continue;
      // closed e.Name#2 as range 17
      // closed e.Code#2 as range 11
      //DEBUG: e.AST-B#2: 7
      //DEBUG: e.AST-E#2: 9
      //DEBUG: s.ScopeClass#2: 16
      //DEBUG: e.Name#2: 17
      //DEBUG: e.Code#2: 11

      refalrts::reset_allocator();
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ Reuse: & SelectiveSaver-Save/4 AsIs: e.AST-B#2/7 AsIs: (/13 AsIs: # Function/15 AsIs: s.ScopeClass#2/16 AsIs: (/19 AsIs: e.Name#2/17 AsIs: )/20 AsIs: # NativeBody/21 AsIs: e.Code#2/11 AsIs: )/14 } Tile{ AsIs: e.AST-E#2/9 } Tile{ ]] }
      refalrts::update_name( context[4], ref_SelectiveSaverm_Save.ref.function );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[19], context[20] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[10] );
      res = refalrts::splice_evar( res, context[4], context[14] );
      refalrts::splice_to_freelist_open( trash_prev, res );
      return refalrts::cSuccess;
    } while ( refalrts::open_evar_advance( context[7], context[8], context[5], context[6] ) );
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & Pass-RemoveRedudandElements\1/4 e.AST#2/5 >/1
  context[5] = context[2];
  context[6] = context[3];
  // closed e.AST#2 as range 5
  //DEBUG: e.AST#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} & Pass-RemoveRedudandElements\1/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ HalfReuse: & SelectiveSaver-Skip/0 } Tile{ AsIs: e.AST#2/5 } Tile{ ]] }
  refalrts::reinit_name( context[0], ref_SelectiveSaverm_Skip.ref.function );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_RemoveRedudandElements_L1("Pass-RemoveRedudandElements\\1", 39970021U, 2151505377U, func_gen_Passm_RemoveRedudandElements_L1);


static refalrts::FnResult func_gen_Passm_RemoveRedudandElements_L2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  //FAST GEN: s.$ t.$
  //GLOBAL GEN: s.$ t.$
  // </0 & Pass-RemoveRedudandElements\2\1/4 s.idx#0/5 t.idxV#0/6 >/1
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
    // s.idx ( # Ident e.idx )
    // </0 & Pass-RemoveRedudandElements\2\1/4 s.FnSelectiveSaver#2/5 (/6 # Ident/10 e.Name#3/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  ident_Ident, context[8], context[9] );
    if( ! context[10] )
      continue;
    // closed e.Name#3 as range 8
    //DEBUG: s.FnSelectiveSaver#2: 5
    //DEBUG: e.Name#3: 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & Pass-RemoveRedudandElements\2\1/4 s.FnSelectiveSaver#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: s.FnSelectiveSaver2 #5/6 AsIs: # Ident/10 AsIs: e.Name#3/8 HalfReuse: >/7 } Tile{ ]] }
    refalrts::reinit_svar( context[6], context[5] );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // s.idx ( # Declaration s.idx e.idx )
    // </0 & Pass-RemoveRedudandElements\2\1/4 s.FnSelectiveSaver#2/5 (/6 # Declaration/10 s.ScopeClass#3/11 e.Name#3/8 )/7 >/1
    context[8] = 0;
    context[9] = 0;
    if( ! refalrts::brackets_term( context[8], context[9], context[6] ) )
      continue;
    context[10] = refalrts::ident_left(  ident_Declaration, context[8], context[9] );
    if( ! context[10] )
      continue;
    if( ! refalrts::svar_left( context[11], context[8], context[9] ) )
      continue;
    // closed e.Name#3 as range 8
    //DEBUG: s.FnSelectiveSaver#2: 5
    //DEBUG: s.ScopeClass#3: 11
    //DEBUG: e.Name#3: 8

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} & Pass-RemoveRedudandElements\2\1/4 s.FnSelectiveSaver#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } Tile{ HalfReuse: s.FnSelectiveSaver2 #5/6 AsIs: # Declaration/10 AsIs: s.ScopeClass#3/11 AsIs: e.Name#3/8 HalfReuse: >/7 } Tile{ ]] }
    refalrts::reinit_svar( context[6], context[5] );
    refalrts::reinit_close_call( context[7] );
    refalrts::push_stack( context[7] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[6], context[7] );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // s.idx t.idx
  // </0 & Pass-RemoveRedudandElements\2\1/4 s.FnSelectiveSaver#2/5 t.OtherItem#3/6 >/1
  //DEBUG: t.OtherItem#3: 6
  //DEBUG: s.FnSelectiveSaver#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveRedudandElements\2\1/4 s.FnSelectiveSaver#2/5 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.OtherItem#3/6 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_RemoveRedudandElements_L2L1("Pass-RemoveRedudandElements\\2\\1", 39970021U, 2151505377U, func_gen_Passm_RemoveRedudandElements_L2L1);


static refalrts::FnResult func_gen_Passm_RemoveRedudandElements_L2(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Pass-RemoveRedudandElements\2/4 s.FnSelectiveSaver#2/5 e.AST#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.AST#2 as range 2
  //DEBUG: s.FnSelectiveSaver#2: 5
  //DEBUG: e.AST#2: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Map/4 } [*]/6 & Pass-RemoveRedudandElements\2\1/7 Tile{ AsIs: s.FnSelectiveSaver#2/5 } {*}/8 Tile{ AsIs: e.AST#2/2 } Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_closure_head( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_gen_Passm_RemoveRedudandElements_L2L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_unwrapped_closure( context[8], context[6] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Map.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  refalrts::wrap_closure( context[8] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_RemoveRedudandElements_L2("Pass-RemoveRedudandElements\\2", 39970021U, 2151505377U, func_gen_Passm_RemoveRedudandElements_L2);


static refalrts::FnResult func_gen_Passm_RemoveRedudandElements_L3(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
  //FAST GEN: t.$
  //GLOBAL GEN: t.$
  // </0 & Pass-RemoveRedudandElements\3/4 t.idx#0/5 >/1
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
    // ( # Function s.idx ( e.idx ) # Sentences )
    // </0 & Pass-RemoveRedudandElements\3/4 (/5 # Function/9 s.ScopeClass#2/15 (/13 e.Name#2/11 )/14 # Sentences/10 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    context[9] = refalrts::ident_left(  ident_Function, context[7], context[8] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::ident_right(  ident_Sentences, context[7], context[8] );
    if( ! context[10] )
      continue;
    context[11] = 0;
    context[12] = 0;
    context[13] = refalrts::brackets_right( context[11], context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    refalrts::bracket_pointers(context[13], context[14]);
    // closed e.Name#2 as range 11
    if( ! refalrts::svar_left( context[15], context[7], context[8] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: e.Name#2: 11
    //DEBUG: s.ScopeClass#2: 15

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & Pass-RemoveRedudandElements\3/4 {REMOVED TILE} (/13 {REMOVED TILE} )/14 # Sentences/10 )/6 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Enum/9 AsIs: s.ScopeClass#2/15 } Tile{ AsIs: e.Name#2/11 } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_ident( context[9], ident_Enum );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[5], context[15] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // t.idx
  // </0 & Pass-RemoveRedudandElements\3/4 t.Other#2/5 >/1
  //DEBUG: t.Other#2: 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & Pass-RemoveRedudandElements\3/4 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Other#2/5 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_Passm_RemoveRedudandElements_L3("Pass-RemoveRedudandElements\\3", 39970021U, 2151505377U, func_gen_Passm_RemoveRedudandElements_L3);


static refalrts::FnResult func_Passm_RemoveRedudandElements(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & Pass-RemoveRedudandElements/4 e.AST#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.AST#1 as range 2
  //DEBUG: e.AST#1: 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: e.AST#1/2 HalfReuse: </1 } & Seq/5 & Pass-RemoveRedudandElements\1/6 & Pass-RemoveRedudandElements\2/7 (/8 & Map/9 & Pass-RemoveRedudandElements\3/10 )/11 >/12 >/13 Tile{ ]] }
  if( ! refalrts::alloc_name( context[5], ref_Seq.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_gen_Passm_RemoveRedudandElements_L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], ref_gen_Passm_RemoveRedudandElements_L2.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_gen_Passm_RemoveRedudandElements_L3.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[13] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_Fetch.ref.function );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[13] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[12] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[13] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Passm_RemoveRedudandElements("Pass-RemoveRedudandElements", 39970021U, 2151505377U, func_Passm_RemoveRedudandElements);


static refalrts::FnResult func_SelectiveSaverm_Save(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & SelectiveSaver-Save/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # Ident e.idx
    // </0 & SelectiveSaver-Save/4 # Ident/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Ident, context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: # Ident/5 AsIs: e.Name#1/6 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[4];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Declaration s.idx e.idx
  // </0 & SelectiveSaver-Save/4 # Declaration/5 s.ScopeClass#1/8 e.Name#1/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_Declaration, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 6
  //DEBUG: s.ScopeClass#1: 8
  //DEBUG: e.Name#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 AsIs: # Declaration/5 AsIs: s.ScopeClass#1/8 AsIs: e.Name#1/6 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SelectiveSaverm_Save("SelectiveSaver-Save", 39970021U, 2151505377U, func_SelectiveSaverm_Save);


static refalrts::FnResult func_SelectiveSaverm_Skip(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & SelectiveSaver-Skip/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # Ident e.idx
    // </0 & SelectiveSaver-Skip/4 # Ident/5 e.Name#1/6 >/1
    context[6] = context[2];
    context[7] = context[3];
    if( ! refalrts::ident_term(  ident_Ident, context[5] ) )
      continue;
    // closed e.Name#1 as range 6
    //DEBUG: e.Name#1: 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & SelectiveSaver-Skip/4 # Ident/5 e.Name#1/6 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # Declaration s.idx e.idx
  // </0 & SelectiveSaver-Skip/4 # Declaration/5 s.ScopeClass#1/8 e.Name#1/6 >/1
  context[6] = context[2];
  context[7] = context[3];
  if( ! refalrts::ident_term(  ident_Declaration, context[5] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[8], context[6], context[7] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Name#1 as range 6
  //DEBUG: s.ScopeClass#1: 8
  //DEBUG: e.Name#1: 6

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & SelectiveSaver-Skip/4 # Declaration/5 s.ScopeClass#1/8 e.Name#1/6 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_SelectiveSaverm_Skip("SelectiveSaver-Skip", 39970021U, 2151505377U, func_SelectiveSaverm_Skip);


//End of file
